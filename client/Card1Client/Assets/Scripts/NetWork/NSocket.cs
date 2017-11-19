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

    private TcpClient client = null;

    AsyncCallback readAsync;

    private const int m_timeout = 5000;

    MemoryStream m_sendms;
    MemoryStream m_memstream;//处理 分包
    BinaryReader m_reader;
    MemoryStream m_protoms; //专门解析protobuf

    private NetworkStream outStream = null;
    private const int MAX_READ = 1024 * 10;
    private byte[] byteBuffer = new byte[MAX_READ];//接受缓冲区10K

    private byte[] m_sendbuf = new byte[9192]; //发送缓冲区8K
    //private byte[] m_receivebuf = new byte[9192];//接受缓冲区8K

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
        if (null != m_reader) m_reader.Close();
        if (null != m_sendms) m_sendms.Close();
        if (null != m_memstream) m_memstream.Close();
        if (null != m_protoms) m_protoms.Close();

        m_reader = null;
        m_sendms = null;
        m_memstream = null;
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

            m_protoms = new MemoryStream();

            readAsync = new AsyncCallback(OnRead); ;
 
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
        if(null==client || !client.Connected)
        {
            m_status = EStatus.e_closed;
            Debug.Log("#############################\nsocket is closed");
            AddToSendQueue(m_correlationid, cmd, data, len);
            ConnectServer();
            return false;   
        }

        outStream.Write(data, 0, len);
        //if (SocketError.Success != error)
        //{
        //    Debug.LogError("socket error"+error.ToString());
        //    AddToSendQueue(m_correlationid, cmd, data, len);
        //    return false;
        //}
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

        //Debug.Log("发送数据：" + cmd.ToString() + "  len:" + content.Length);
        //Debug.Log("发送数据" + cmd);
    }

    private void StarConnect()
    {
        m_status = EStatus.e_connecting;

        client = null;

        IPAddress[] address = Dns.GetHostAddresses(m_ip);
        if (address[0].AddressFamily == AddressFamily.InterNetworkV6)
        {
            //ipv6
            client = new TcpClient(AddressFamily.InterNetworkV6);
        }
        else
        {
            client = new TcpClient();
        }

        client.SendTimeout = 1000;
        client.ReceiveTimeout = 1000;
        client.NoDelay = true;

        try
        {
            IAsyncResult result = client.BeginConnect(m_ip, m_port, new AsyncCallback(ConnectCallback), null);
        }
        catch (Exception e)
        {
            Closed(); 
            Debug.LogError(e.Message);
        }


        //Debug.Log("###################\nConnectServer--------------" + NTestMgr.instance.ToString());
        //Closed();

        Debug.Log("ServerIP : " + m_ip + ", ServerPort : " + m_port);
        //IAsyncResult result = m_socket.BeginConnect(ipEndpoint, new AsyncCallback(ConnectCallback), m_socket);
        //这里做一个超时的监测，当连接超过5秒还没成功表示超时
        //bool success = result.AsyncWaitHandle.WaitOne(m_timeout, true);
        //if (!success)
        //{
        //    //超时
        //    Closed();
        //    Debug.Log("connect Time Out");
        //}
        //else
        //{

        //    //与socket建立连接成功，开启线程接受服务端数据。
        //    m_status = EStatus.e_connected;
        //    m_readthread = new Thread(new ThreadStart(ReceiveSocket));
        //    m_readthread.IsBackground = true;
        //    m_readthread.Start();
        //    if (m_socket.Connected)
        //    {
        //        while (m_sendqueue.Count > 0)
        //        {
        //            NetData data = m_sendqueue.Dequeue();
        //            if (!Send(data.m_serverRequest, data.m_correlationid, data.m_data, data.m_data.Length))
        //            {
        //                break;
        //            }
        //        }
        //    }
        //    else
        //    {
        //        Debug.LogError("connect failed");
        //        //10 秒后重连
        //    }
        //}
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
        return (client != null) ? client.Connected : false;
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
        m_memstream.Seek(0, SeekOrigin.End);
        m_memstream.Write(bytes, 0, length);
        //Reset to beginning
        m_memstream.Seek(0, SeekOrigin.Begin);
        while (RemainingBytes() >= 4)
        {
            UInt16 size = m_reader.ReadUInt16();
            if (IsLittleEndian)
            {
                size = ConvertEndian.Convert(size);
            }
            if (RemainingBytes() >= size - 2)
            {
                UInt16 cmd = m_reader.ReadUInt16();
                if (IsLittleEndian)
                {
                    cmd = ConvertEndian.Convert(cmd);
                }
                byte[] arr = m_reader.ReadBytes(size-4);

                object msg = ProtoNetSerialize.Decode(cmd,arr);
                OnReceivedMessage(msg);
            }
            else {
                //消息长度不够
                m_memstream.Position = m_memstream.Position - 2;
                break;
            }
        }

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
        if (null == ms)
        {
            Debug.Log("ms===nullnullnullnullnullnullnullnull");
            return;
        }

        NetProtocal.Respone sid = (NetProtocal.Respone)ProtoNetSerialize.readId;
        Debug.Log("sid=========" + sid + GetTimeStamp());
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
        if (!client.Connected){
            Debug.LogError("connectFail--");
            return;
        }
        Debug.Log("connectSuccess");

        outStream = client.GetStream();
        outStream.BeginRead(byteBuffer, 0, MAX_READ, readAsync, null);

        //断线重连发送数据
        while (m_sendqueue.Count > 0)
        {
            NetData data = m_sendqueue.Dequeue();
            if (!Send(data.m_serverRequest, data.m_correlationid, data.m_data, data.m_data.Length))
            {
                break;
            }
        }

        //NetworkManager.AddEvent(Protocal.Connect, new ByteBuffer());
        //Message connected = GIMessageFactory.GetMessage(EUIMessage.UI_NETWORK_CONNECTED, null);
        //MessageManager.DispatchMessage(connected);
    }

    void OnRead(IAsyncResult asr)
    {
        int bytesRead = 0;
        try
        {
            lock (outStream)
            {         //读取字节流到缓冲区
                bytesRead = outStream.EndRead(asr);
            }
            if (bytesRead < 1)
            {                //包尺寸有问题，断线处理
                //OnDisconnected(DisType.Disconnect, "bytesRead < 1");
                return;
            }
            OnReceive(byteBuffer, bytesRead);   //分析数据包内容，抛给逻辑层
            lock (outStream)
            {         //分析完，再次监听服务器发过来的新消息
                Array.Clear(byteBuffer, 0, byteBuffer.Length);   //清空数组
                outStream.BeginRead(byteBuffer, 0, MAX_READ, readAsync, null);
            }
        }
        catch (Exception ex)
        {
            //PrintBytes();
            //OnDisconnected(DisType.Exception, ex.Message);
        }
    }

    /// <summary>
    /// 关闭socket
    /// </summary>
    public void Closed()
    {
        if (client != null)
        {
            if (client.Connected)
            {
                client.Close();
                outStream.Close();
            }
            client = null;
        }

        Debug.LogWarning("socket close");
        m_status = EStatus.e_closed;
    }
}
