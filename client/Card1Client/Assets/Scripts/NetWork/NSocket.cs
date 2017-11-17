using System;
using System.Collections.Generic;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading;
using UnityEngine;
using System.IO;
using System.Collections;
using NetProtocal;
using Assets.XGame.NetWork;
using UnityEngine.Events;
class NetData
{
    public  int m_correlationid;
    public NetProtocal.Request m_serverRequest;
    public NetProtocal.Respone m_serverRespone;
    public byte[]m_data;

    public NetData(int correlationid, NetProtocal.Request cmd, byte[] data, int len)
    {
        m_correlationid = correlationid;
        m_serverRequest = cmd;
        m_data = new byte[len];
        Array.Copy(data, m_data, len);
    }

    public NetData(int correlationid, NetProtocal.Respone cmd, byte[] data, int len)
    {
        m_correlationid = correlationid;
        m_serverRespone = cmd;
        m_data = new byte[len];
        Array.Copy(data, m_data, len);
    }
}

class NSocket
{
    public const bool IsLittleEndian = true;//是否是小端模式
    private string mDebugLog;
    enum EStatus
    {
        e_closed,
        e_connecting,
        e_connected
    }
    public float m_servertime = 0;
    public string m_auth_id="";
    public string m_auth_token="";
    public List<int> m_waitmsg = new List<int>();
    private bool _waitflag = false;
    private EStatus m_status = EStatus.e_closed;
    private string m_ip = "";
    private int m_port = 0;
    private bool m_binit = false;
    public bool Waitflag
    {
        get { return _waitflag; }
        set { _waitflag = value; }
    }
    private bool _isdirty = false;

    public void AddWaitMsgCorrelation(int correlationid)
    {
        m_waitmsg.Add(correlationid);
        _waitflag = true;
        _isdirty = true;
    }
    public void DelWaitMsgCorrelation(int correlationid)
    {
            m_waitmsg.Remove(correlationid);
            if(0==m_waitmsg.Count)
            {
                _waitflag = false;
                _isdirty = true;
                //去掉loading 
            // GlobalFunction.SendNotification(NotificationIDs.CLOSE_CONNECTNET_PANEL, null);
            }
    }
    //重连时调用 线程不安全 不管 不加锁
    public void ResetWaitMsg()
    {
        m_waitmsg.Clear();
        _waitflag = false;
        _isdirty = true;
    }

    private Queue<NetData> m_sendqueue = new Queue<NetData>();
    private Queue<NetData> m_revqueue = new Queue<NetData>();
    private Socket m_socket;
    public Socket Socket
    {
        get { return m_socket; }
    }
    private const int m_timeout = 5000;
    private Thread m_readthread;

    //MemoryStream m_sendms = new MemoryStream();
    //MemoryStream m_memstream = new MemoryStream();
    //BinaryReader m_reader = new BinaryReader(m_memstream);
    //MemoryStream m_logicms = new MemoryStream();
    //BinaryWriter m_logicwriter = new BinaryWriter(m_logicms);
    //MemoryStream m_protoms = new MemoryStream();

    MemoryStream m_sendms;
    MemoryStream m_memstream;//处理 分包
    BinaryReader m_reader;
    MemoryStream m_logicms; //逻辑层
    MemoryStream m_protoms; //专门解析protobuf
    BinaryWriter m_logicwriter; 

    private byte[] m_sendbuf = new byte[9192]; //发送缓冲区8K
    private byte[] m_receivebuf = new byte[9192];//接受缓冲区8K

    private object _obj = new object();
    public void SetServerTime(float t)
    {
        m_servertime = t;
    }

    public float GetServerTime()
    {
        return m_servertime;
    }

    public void Destroy()
    {
        Closed();

        // close 
        if (null != m_logicwriter) m_logicwriter.Close();
        if (null != m_reader) m_reader.Close();
        if (null != m_sendms) m_sendms.Close();
        if (null != m_memstream) m_memstream.Close();
        if (null != m_logicms) m_logicms.Close();
        if (null != m_protoms) m_protoms.Close();

        m_logicwriter = null;
        m_reader = null;
        m_sendms = null;
        m_memstream = null;
        m_logicms = null;
        m_protoms = null;
    }
    ~NSocket()
    {
        Destroy();
        Debug.Log("##############################\n ~NSocket()");
    }

    public NSocket()
    {
            m_sendms = new MemoryStream();
            m_memstream = new MemoryStream();
            m_reader = new BinaryReader(m_memstream);
            m_logicms = new MemoryStream();
            m_logicwriter = new BinaryWriter(m_logicms);
            m_protoms = new MemoryStream();
 
    }
    private static NSocket instance;
    public static NSocket GetInstance()
    {
        if(null==instance)
        {
            instance = new NSocket();
        }
        return instance;
    }

    static int m_correlationid = 0;

    public void ReConnect()
    {
        ResetWaitMsg();
        StarConnect();
    }
    private bool Send(NetProtocal.Request cmd,int correlationid,  byte[] data,int len)
    {
        SocketError error;
        if(null==m_socket || !m_socket.Connected)
        {
            m_status = EStatus.e_closed;
            Debug.Log("#############################\nsocket is closed");
            AddToSendQueue(m_correlationid, cmd, data, len);
            ConnectServer();
            return false;   
        }

        m_socket.Send(data, 0, len, SocketFlags.None, out error);
        if (SocketError.Success != error)
        {
            Debug.LogError("socket error"+error.ToString());
            AddToSendQueue(m_correlationid, cmd, data, len);
            return false;
        }
        return true;
           
    }


    private void AddToSendQueue(int correlationid, NetProtocal.Request cmdtype,byte[] data,int len)
    {
        Debug.Log("###########################\nsend data error AddToSendQueue");
        NetData sendata = new NetData(correlationid,cmdtype,data,len);
        m_sendqueue.Enqueue(sendata);
    }
    /// <summary>
    /// 时间戳获取 
    /// </summary>
    /// <param name="is13">默认13位精确到毫米 false10位到秒</param>
    /// <returns></returns>
    public static long GetTimeStamp(bool is13 = true)
    {
        TimeSpan ts = DateTime.UtcNow - new DateTime(1970, 1, 1, 0, 0, 0, 0);
        return is13 ? Convert.ToInt64(ts.TotalMilliseconds) : Convert.ToInt64(ts.TotalSeconds);
    }
    public void SendData(NetProtocal.Request cmd,object obj = null)
    {
        // if (cmd != NetProtocal.ProtoPacket.ServerID.s2c_heart_check) Main.heartTime = GetTimeStamp(false); // 如果不是心跳请求 进行延后处理心跳
        //重置MemoryStream发送的内容序列化
        //m_sendms.SetLength(0);
        //.Position = 0;
        //ProtoBuf.Serializer.Serialize(m_sendms, obj);

        //填充发送结构体
        //m_request.correlation_id = ++m_correlationid;
        //m_request.payload = m_sendms.ToArray();
        // m_request.service_no = cmd;
        //m_request.auth_id = m_auth_id;
        //m_request.auth_token = m_auth_token;
        //重置MemoryStream m_request序列化
        //m_sendms.SetLength(0);
        //m_sendms.Position = 0;
        //ProtoBuf.Serializer.Serialize(m_sendms, m_request);

        byte[] content = m_sendms.ToArray();

        int len = content.Length;
        if (IsLittleEndian)
        {
            len = ConvertEndian.Convert(content.Length);
        }

        content = ProtoNetSerialize.Encode((int)cmd, obj);
        // Array.Copy(BitConverter.GetBytes(len), 0, m_sendbuf, 0, 4);
        System.Array.Copy(content, 0, m_sendbuf, 0, content.Length);
        ++m_correlationid;

        Send(cmd, m_correlationid, m_sendbuf, content.Length);

        Debug.Log("发送数据：" + cmd.ToString() + "  len:" + content.Length);
        //Debug.Log("发送数据" + cmd);
    }
    private void StarConnect()
    {
        m_status = EStatus.e_connecting;
        //Debug.Log("###################\nConnectServer--------------" + NTestMgr.instance.ToString());
        Closed();
        m_socket = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);
        //IPAddress ipAddress = IPAddress.Parse("192.168.2.100");
        //  IPAddress ipAddress = IPAddress.Parse("114.80.224.61");
        // IPAddress ipAddress = IPAddress.Parse("192.168.1.105");
        IPAddress ipAddress = IPAddress.Parse(m_ip);
        IPEndPoint ipEndpoint = new IPEndPoint(ipAddress, m_port);
        Debug.Log("ServerIP : " + m_ip + ", ServerPort : " + m_port);
        IAsyncResult result = m_socket.BeginConnect(ipEndpoint, new AsyncCallback(ConnectCallback), m_socket);
        //这里做一个超时的监测，当连接超过5秒还没成功表示超时
        bool success = result.AsyncWaitHandle.WaitOne(m_timeout, true);
        if (!success)
        {
            //超时
            Closed();
            Debug.Log("connect Time Out");
        }
        else
        {
            //与socket建立连接成功，开启线程接受服务端数据。
            m_status = EStatus.e_connected;
            m_readthread = new Thread(new ThreadStart(ReceiveSocket));
            m_readthread.IsBackground = true;
            m_readthread.Start();
            if (m_socket.Connected)
            {
                while (m_sendqueue.Count > 0)
                {
                    NetData data = m_sendqueue.Dequeue();
                    if (!Send(data.m_serverRequest, data.m_correlationid, data.m_data, data.m_data.Length))
                    {
                        break;
                    }
                }
            }
            else
            {
                Debug.LogError("connect failed");
                //10 秒后重连
            }
        }
    }

    public void SetIpAddress(string ip,int port)
    {
        m_ip = ip;
        m_port = port;
        m_binit = true;
    }
    public void ConnectServer()
    {
        if (EStatus.e_connecting==m_status||false==m_binit) return;
        StarConnect();
    }

    public bool IsConnected()
    {
        return (m_socket != null) ? m_socket.Connected : false;
    }

    private int ReadInt(MemoryStream ms)
    {
        int ret = 0;
        byte[] lenbuff = new byte[4] { 0, 0, 0, 0 };
        int len=ms.Read(lenbuff, 0, 4);
        if(len<4)
        {
            Debug.LogError("readint error");
        }
        ret = System.BitConverter.ToInt32(lenbuff, 0);
        if (IsLittleEndian)
        {
            ret = ConvertEndian.Convert(ret);
        }
        return ret;
    }
     
    private void ClearStream(Stream ms)
    {
        ms.Position = 0;
        ms.SetLength(0);
    }


    /// <summary>
    /// 接收到消息分包处理
    /// </summary>
    private void OnReceive(byte[] bytes, int length)
    {
        //保存接收到的数据
        m_memstream.Seek(0, SeekOrigin.End);
        m_memstream.Write(bytes, 0, length);
        //Reset to beginning
        m_memstream.Seek(0, SeekOrigin.Begin);
        while (RemainingBytes() > 4)
        {
            int messageLen = (int)(((int)bytes[0] << 8) | ((int)bytes[1])); 
            //int ret = System.BitConverter.ToInt32(lenbuff, 0);
            //ret = System.BitConverter.ToInt32(lenbuff, 0);
            //int messageLen = ret;

            if (RemainingBytes() >= messageLen) //有消息可以处理
            {
                ClearStream(m_logicms);

                byte[]arr =  m_reader.ReadBytes(messageLen);
                m_logicwriter.Write(arr);
                m_logicms.Seek(0, SeekOrigin.Begin);
                Debug.Log("receiver len:" + m_logicms.Length);

                object msg = ProtoNetSerialize.Decode(bytes);
                OnReceivedMessage(msg);
            }
            else
            {
                m_memstream.Position = m_memstream.Position - 4;
                break;
            }
        }
        //移除已处理的btye 保存未处理的 byte
        byte[] leftover = m_reader.ReadBytes((int)RemainingBytes());
        ClearStream(m_memstream);
        m_memstream.Write(leftover, 0, leftover.Length);
    }

    private List<NetParam> msgList = new List<NetParam>();
    /// <summary>
    /// 接收到一个消息
    /// </summary>
    /// <param name="ms"></param>
    public void OnReceivedMessage(object ms)
    {
        if (null == ms) return;

        NetProtocal.Respone sid = (NetProtocal.Respone)ProtoNetSerialize.readId;
        NetDataMgr.Instance.Mrgs[sid].data = ms;

        msgList.Add(NetDataMgr.Instance.Mrgs[sid]);
    }

    // 主线程
    public void Update()
    {
        if(!mDebugLog.IsNullOrEmpty())
        {
            Debug.Log(mDebugLog);
            mDebugLog = null;
        }

        int len = msgList.Count;
        for(int i = len - 1; i >= 0; i--)
        {
            msgList[i].mfun(msgList[i].data);
            msgList.RemoveAt(i);
        }

        lock (_obj)
        {
            if (_isdirty)
            {
                _isdirty = false;
                if (Waitflag == false)
                {
                    ////                        if (NetWorkLoadingHandler.Instance.isShow() == true)
                    //                    NetWorkLoadingHandler.Instance.PopLoading();
                }
                else
                {
                    //NetWorkLoadingHandler.Instance.PushLoading();
                }
            }
            m_servertime += Time.deltaTime;
            while (m_revqueue.Count > 0)
            {
                NetData data = m_revqueue.Dequeue();
                ClearStream(m_protoms);
                m_protoms.Write(data.m_data, 0, data.m_data.Length);
                m_protoms.Seek(0, SeekOrigin.Begin);

                if(Define.UpdateMode)
                {
                    PraseData(data);
                }
                else
                {
                    try
                    {
                        PraseData(data);
                        // NetDataMgr.instance.DispatchData(data.m_serverno, obj); // 把数据发送到数据管理类中进行处理 这样好处是 不跟框架扯什么关系
                        // MessageManager.DispatchMessage(GIMessageFactory.GetMessage((ServiceNo)(data.m_serverno), obj));//把协议分发到客户端内部消息队列
                    }
                    catch (Exception)
                    {
                        Debug.LogError(data.m_serverRequest.ToString() + ";len:" + data.m_data.Length);
                        throw;
                    }
                }
            }
        }
    }

    /// <summary>解析数据</summary>
    private void PraseData(NetData data)
    {
        NetParam n = null;
        if (!NetDataMgr.Instance.Mrgs.TryGetValue(data.m_serverRespone, out n))
        {
            Debug.LogError(data.m_serverRespone.ToString() + ": not register class like xxxS2C");
            return;
        }
        System.Object obj = ProtoBuf.Meta.RuntimeTypeModel.Default.Deserialize(m_protoms, null, n.mType);
        Debug.Log("接收数据：" + data.m_serverRespone + " len:" + data.m_data.Length);

        n.mfun(obj);
    }

    /// <summary>
    /// 剩余的字节
    /// </summary>
    private long RemainingBytes()
    {
        return m_memstream.Length - m_memstream.Position;
    }



    private void ConnectCallback(IAsyncResult asyncConnect)
    {
        if (!m_socket.Connected){
            Debug.Log("connectFail--");
            return;
        }
        Debug.Log("connectSuccess");
        //Message connected = GIMessageFactory.GetMessage(EUIMessage.UI_NETWORK_CONNECTED, null);
        //MessageManager.DispatchMessage(connected);
    }

    private void ReceiveSocket()
    {
        //在这个线程中接受服务器返回的数据
        while (true)
        {

            if (null!=m_socket&&!m_socket.Connected)
            {
                //与服务器断开连接跳出循环
                mDebugLog = "Failed to clientSocket server.";
                Closed();
                break;
            }
            try
            {
                if (m_socket.Available > 0)
                {
                    int i = m_socket.Receive(m_receivebuf);
                    if (i <= 0)
                    {
                        Closed();
                        break;
                    }
                    OnReceive(m_receivebuf, i);//抛给逻辑层
                }
            }
            catch (Exception e)
            {
                mDebugLog = "Failed to clientSocket error." + e;
                Closed();
                break;
            }
        }
    }

    /// <summary>
    /// 关闭socket
    /// </summary>
    public void Closed()
    {
        if (m_socket != null && m_socket.Connected)
        {
            try
            {
                m_socket.Shutdown(SocketShutdown.Both);
            }
            catch (Exception)
            {
                throw;
            }
            try
            {
                m_socket.Close();
            }
            catch (Exception)
            {
                throw;
            }
             
        }
        if (null != m_readthread)
        {
            m_readthread.Abort();
        }
        m_socket = null;
        m_readthread = null;
        Debug.LogWarning("socket close");
        m_status = EStatus.e_closed;
    }
}
