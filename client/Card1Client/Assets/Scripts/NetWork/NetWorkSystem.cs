using Lidgren.Network;
using NetProtocal;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;

namespace Assets.XGame.NetWork
{
    internal class NetWorkSystem
    {
        #region 单例调用
        private static NetWorkSystem s_Instance = new NetWorkSystem();
        public static NetWorkSystem Instance
        {
            get { return s_Instance; }
        }
        #endregion  
#pragma warning disable CS0414 // The field 'NetWorkSystem.m_PingPongNumber' is assigned but its value is never used
        private long m_PingPongNumber = 0;
#pragma warning restore CS0414 // The field 'NetWorkSystem.m_PingPongNumber' is assigned but its value is never used
        //private long m_LastPingTime = TimeUtility.GetLocalMilliseconds();        // ms
#pragma warning disable CS0414 // The field 'NetWorkSystem.m_PingInterval' is assigned but its value is never used
        private int m_PingInterval = 1000;         // ms
#pragma warning restore CS0414 // The field 'NetWorkSystem.m_PingInterval' is assigned but its value is never used

        private NetPeerConfiguration m_Config;
        private NetClient m_NetClient;
        private NetConnection m_Connection;
        private Thread m_NetThread;
        private bool m_NetClientStarted = false;

        private string m_Ip;
        private int m_Port;
        private bool m_IsConnected = false;
        private bool m_IsWaitStart = true;

        private bool m_IsQuited = false;
#pragma warning disable CS0414 // The field 'NetWorkSystem.m_CanSendMessage' is assigned but its value is never used
        private bool m_CanSendMessage = false;
#pragma warning restore CS0414 // The field 'NetWorkSystem.m_CanSendMessage' is assigned but its value is never used
        //private MessageDispatch m_Dispatch = new MessageDispatch();
        private Queue<KeyValuePair<NetConnection, object>> m_QueuePair = new Queue<KeyValuePair<NetConnection, object>>();
        private object m_Lock = new object();
        private uint m_Key = 0;
#pragma warning disable CS0414 // The field 'NetWorkSystem.m_LastFaceDir' is assigned but its value is never used
        private float m_LastFaceDir = 0.0f;
#pragma warning restore CS0414 // The field 'NetWorkSystem.m_LastFaceDir' is assigned but its value is never used
        private int m_HeroId = 0;
        private int m_CampId = 0;
        private int m_SceneId = 0;
        public bool Init()
        {
            //Serialize.Init();
            //InitMessageHandler();

            m_NetClientStarted = false;
            m_IsWaitStart = true;
            m_IsQuited = false;
            m_IsConnected = false;
            m_CanSendMessage = false;

            m_Config = new NetPeerConfiguration("RoomServer");
            m_Config.AutoFlushSendQueue = false;
            m_Config.DisableMessageType(NetIncomingMessageType.DebugMessage);
            m_Config.DisableMessageType(NetIncomingMessageType.VerboseDebugMessage);
            m_Config.EnableMessageType(NetIncomingMessageType.ErrorMessage);
            m_Config.EnableMessageType(NetIncomingMessageType.WarningMessage);
            m_NetClient = new NetClient(m_Config);
            m_NetThread = new Thread(new ThreadStart(NetworkThread));
            m_NetThread.Start();
            return true;
        }
        public void Start(uint key, string ip, int port, int heroId, int campId, int sceneId)
        {
            StartNetClient();

            m_Key = key;
            m_Ip = ip;
            m_Port = port;
            m_HeroId = heroId;
            m_CampId = campId;
            m_SceneId = sceneId;

            m_IsWaitStart = false;
            m_IsConnected = false;
            m_CanSendMessage = false;

        }
        private void StartNetClient()
        {
            if (m_NetClient != null)
            {
                if (!m_NetClientStarted)
                {
                    m_NetClient.Start();
                    m_NetClientStarted = true;
                }
            }
        }
        private void NetworkThread()
        {
            while (!m_IsQuited)
            {
                if (m_IsWaitStart)
                {
                    Thread.Sleep(1000);
                }
                else
                {
                    while (!m_IsQuited && !m_IsConnected && !m_IsWaitStart)
                    {
                         //Debug("Connect ip:{0} port:{1} key:{2}\nNetPeer Statistic:{3}", m_Ip, m_Port, m_Key, m_NetClient.Statistics.ToString());
                        try
                        {
                            m_NetClient.Connect(m_Ip, m_Port);
                        }
#pragma warning disable CS0168 // The variable 'ex' is declared but never used
                        catch(Exception ex)
#pragma warning restore CS0168 // The variable 'ex' is declared but never used
                        {
                        
                        }
                        for (int ct = 0; ct < 10 && !m_IsConnected; ++ct)
                        {
                            OnRecvMessage();
                            //LogSystem.Debug("Wait NetConnectionStatus.Connected ...");
                            if (!m_IsConnected)
                            {
                                Thread.Sleep(1000);
                            }
                        }
                        //if (!m_IsQuited && !m_IsConnected && !m_IsWaitStart)
                        //    GameControler.NotifyRoomServerDisconnected();
                    }
                    OnRecvMessage();
                }
            }
        }

        private void OnRecvMessage()
        {
            m_NetClient.MessageReceivedEvent.WaitOne(1000);
            NetIncomingMessage im;
            while ((im = m_NetClient.ReadMessage()) != null)
            {
                switch (im.MessageType)
                {
                    case NetIncomingMessageType.DebugMessage:
                    case NetIncomingMessageType.VerboseDebugMessage:
                        break;
                    case NetIncomingMessageType.ErrorMessage:
                        break;
                    case NetIncomingMessageType.WarningMessage:
                        break;
                    case NetIncomingMessageType.StatusChanged:
                        NetConnectionStatus status = im.SenderConnection.Status;

                        string reason = im.ReadString();
                        if (NetConnectionStatus.Disconnected == status)
                        {
                            m_IsConnected = false;
                            m_CanSendMessage = false;
                        }
                        else if (NetConnectionStatus.Connected == status)
                        {
                            OnConnected(im.SenderConnection);
                        }
                        break;
                    case NetIncomingMessageType.Data:
                        if (m_IsConnected == false)
                        {
                            break;
                        }
                        try
                        {
                            byte[] data = im.ReadBytes(im.LengthBytes);
                            object msg = ProtoNetSerialize.Decode(data);
                            if (msg != null)
                            {
                                PushMsg(msg, im.SenderConnection);
                            }
                        }
#pragma warning disable CS0168 // The variable 'ex' is declared but never used
                        catch (Exception ex)
#pragma warning restore CS0168 // The variable 'ex' is declared but never used
                        {
                        }
                        break;
                    default:
                        break;
                }
                m_NetClient.Recycle(im);
            }
        }

        private bool PushMsg(object msg, NetConnection conn)
        {
            lock (m_Lock)
            {
                m_QueuePair.Enqueue(new KeyValuePair<NetConnection, object>(conn, msg));
                return true;
            }
        }
        private void OnConnected(NetConnection conn)
        {
            m_Connection = conn;
            m_IsConnected = true;
           
           // LoginMsg msg = new LoginMsg();
           // msg.UserID = "lysz";
           // msg.UserPwd = "1234567890";
           // SendMessage(msg);

        }
        public void SendMessage(object msg)
        {
            try
            {
                if (!m_IsConnected)
                {
                    return;
                }
                NetOutgoingMessage om = m_NetClient.CreateMessage();
                //byte[] bt = ProtoNetSerialize.Encode(msg);
                byte[] bt = new byte[10];
                om.Write(bt);
                NetSendResult result = m_NetClient.SendMessage(om, NetDeliveryMethod.ReliableOrdered);
                if (result == NetSendResult.FailedNotConnected)
                {
                    m_IsConnected = false;
                    m_CanSendMessage = false;
                  
                }
                else if (result == NetSendResult.Dropped)
                {
                    
                }
                m_NetClient.FlushSendQueue();
            }
#pragma warning disable CS0168 // The variable 'ex' is declared but never used
            catch (Exception ex)
#pragma warning restore CS0168 // The variable 'ex' is declared but never used
            {
                
            }
        }
    }
}
