using System.Collections;
using System.Threading;
using System.Collections.Generic;
using System.IO;
using System.Diagnostics;
using System.Net;
using System;
using PureMVC.Patterns;
using UnityEngine;

public class ThreadEvent {
    public NotificationID Key;
    public List<object> evParams = new List<object>();
}

public class NotiData {
    public NotificationID evName;
    public object evParam;
    
    public NotiData(NotificationID name, object param) {
        this.evName = name;
        this.evParam = param;
    }
}

public struct UpdateProgressData
{
    string content;
    float grogress;
}

namespace LuaFramework {
    /// <summary>
    /// 当前线程管理器，同时只能做一个任务
    /// </summary>
    public class ThreadManager : MonoBehaviour{
        private Thread thread;
        private Action<NotiData> func;
        private Stopwatch sw = new Stopwatch();
        private string currDownFile = string.Empty;

        static readonly object m_lockObject = new object();
        static Queue<ThreadEvent> events = new Queue<ThreadEvent>();

        delegate void ThreadSyncEvent(NotiData data);
        private ThreadSyncEvent m_SyncEvent;

        private static ThreadManager m_instance;
        public static ThreadManager Instance {

            get
            {
                //if (null == m_instance) m_instance = new ThreadManager();
                return m_instance;
            }
        }

        void Awake() {

            m_instance = this;

            m_SyncEvent = OnSyncEvent;
            thread = new Thread(OnUpdate);
        }

        // Use this for initialization
        void Start() {
            thread.Start();
        }

        /// <summary>
        /// 添加到事件队列
        /// </summary>
        public void AddEvent(ThreadEvent ev, Action<NotiData> func) {
            lock (m_lockObject) {
                this.func = func;
                events.Enqueue(ev);
            }
        }

        /// <summary>
        /// 通知事件
        /// </summary>
        /// <param name="state"></param>
        private void OnSyncEvent(NotiData data) {

            if (this.func != null) func(data);  //回调逻辑层
           
            Facade.Instance.SendNotification(data.evName, data.evParam);//通知View层
        }

        // Update is called once per frame
        void OnUpdate() {
            while (true) {
                lock (m_lockObject) {
                    if (events.Count > 0) {
                        ThreadEvent e = events.Dequeue();
                        try {
                            switch (e.Key) {
                                case NotificationID.UPDATE_EXTRACT: {     //解压文件
                                    OnExtractFile(e.evParams);
                                }
                                break;
                                case NotificationID.UPDATE_DOWNLOAD: {    //下载文件
                                    OnDownloadFile(e.evParams);
                                }
                                break;
                            }
                        } catch (System.Exception ex) {
                            UnityEngine.Debug.LogError(ex.Message);
                        }
                    }
                }
                Thread.Sleep(1);
            }
        }

        private Dictionary<WebClient, long> m_loadingLengthDic;
        /// <summary>
        /// 下载文件
        /// </summary>
        void OnDownloadFile(List<object> evParams) {
            string url = evParams[0].ToString();    
            currDownFile = evParams[1].ToString();

            using (WebClient client = new WebClient()) {
                sw.Start();
                client.DownloadProgressChanged += new DownloadProgressChangedEventHandler(ProgressChanged);
                client.DownloadFileAsync(new System.Uri(url), currDownFile);
            }
        }

        public float LoadingProgress = 0;
        private void ProgressChanged(object sender, DownloadProgressChangedEventArgs e) {

            if (null == m_loadingLengthDic) m_loadingLengthDic = new Dictionary<WebClient, long>();

            float totalLength = (GameManager.Instance.TotalUpdateLength * 1f) / 1024;
            
            //totalLength = (float)Math.Round((double)totalLength, 4);
            string speed = (e.BytesReceived / 1024d / sw.Elapsed.TotalSeconds).ToString("0.00");

            WebClient web = sender as WebClient;
            m_loadingLengthDic[web] = e.BytesReceived;

            string value;
            float haveByteLen = LoadingLength;
            float haveLen = LoadingLength * 1f / 1024f;

            LoadingProgress = haveByteLen / GameManager.Instance.TotalUpdateLength;

            if (totalLength >= 1024)
            {
                totalLength /= 1024;
                haveLen /= 1024;
                value = string.Format("本次更新总计:{0}M/{1}M 速度{2} kb/s", haveLen.ToString("0.00"),totalLength.ToString("0.00"), speed);
            }
            else
                value = string.Format("本次更新总计:{0}kb/{1}kb 速度{2} kb/s", haveLen.ToString("0.00"),totalLength.ToString("0.00"), speed);

            GameManager.loadingstr = value;
            NotiData data = new NotiData(NotificationID.UPDATE_PROGRESS, value);
            if (m_SyncEvent != null) m_SyncEvent(data);

            if (e.ProgressPercentage == 100 && e.BytesReceived == e.TotalBytesToReceive) {
                sw.Reset();

                data = new NotiData(NotificationID.UPDATE_DOWNLOAD, currDownFile);
                if (m_SyncEvent != null) m_SyncEvent(data);
            }

            if(haveByteLen == GameManager.Instance.TotalUpdateLength)
            {
                m_loadingLengthDic = null;
            }
        }

        public long LoadingLength
        {
            get
            {
                long len = 0;
                foreach (var val in m_loadingLengthDic)
                {
                    len += val.Value;
                }

                return len;
            }
        }

        /// <summary>
        /// 调用方法
        /// </summary>
        void OnExtractFile(List<object> evParams) {
            UnityEngine.Debug.LogWarning("Thread evParams: >>" + evParams.Count);

            ///------------------通知更新面板解压完成--------------------
            NotiData data = new NotiData(NotificationID.UPDATE_DOWNLOAD, null);
            if (m_SyncEvent != null) m_SyncEvent(data);
        }

        /// <summary>
        /// 应用程序退出
        /// </summary>
        void OnDestroy() {

            if(null != thread)
                thread.Abort();
        }
    }
}