using System;
using System.IO;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using PureMVC.Patterns;
using LuaFramework;
using AssetBundles;

public class GameManager : MonoBehaviour
{
    public SceneVO CurrentScene;
    public AnimationCurve PlayerRunCure;
    private List<string> downloadFiles = new List<string>();

    public int TotalUpdateLength;

    public static GameManager Instance;

    private bool m_openLoginUI;

    private List<string> m_loadingObj;
    public Dictionary<string,GameObject> ObjDic = new Dictionary<string, GameObject>();

    public bool CheckLoaderInitedComplete;

    public static string loadingstr;

    private List<string> loadingList = new List<string>();
    int loadingMaxNum = 10;

    /// <summary>
    /// 初始化游戏管理器
    /// </summary>
    void Start()
    {
        Instance = this;

        if (Define.UpdateMode)
        {
            Init();
        }
    }

    /// <summary>
    /// 初始化
    /// </summary>
    void Init()
    {
        CheckExtractResource(); //释放资源
    }

    /// <summary>
    /// 释放资源
    /// </summary>
    public void CheckExtractResource()
    {
        //bool isExists = Directory.Exists(LuaUtil.DataPath) &&  File.Exists(LuaUtil.DataPath + "files.txt");
        //if (isExists)
        //{
        StartCoroutine(OnUpdateResource(OnComplete_UpdateResource));
        return;   //文件已经解压过了，自己可添加检查文件列表逻辑
       // }
        //StartCoroutine(OnExtractResource());    //启动释放协成 
    }

    private void OnComplete_UpdateResource()
    {
        AssetManager.Initialize(gameObject);

        CheckLoaderInitedComplete = true;
    }

    public IEnumerator<object> OnExtractResource()
    {
        string dataPath = LuaUtil.DataPath;  //数据目录
        string resPath = LuaUtil.AppContentPath(); //游戏包资源目录

        if (Directory.Exists(dataPath)) Directory.Delete(dataPath, true);
        Directory.CreateDirectory(dataPath); 

        string infile = resPath + "files.txt";
        string outfile = dataPath + "files.txt";
        if (File.Exists(outfile)) File.Delete(outfile);

        string message = "正在解包文件:>files.txt";

        if(!Define.UpdateMode)
        {
            Debug.Log(infile);
            Debug.Log(outfile);
        }
        
        if (Application.platform == RuntimePlatform.Android)
        {
            WWW www = new WWW(infile);
            yield return www;

            if (www.isDone)
            {
                File.WriteAllBytes(outfile, www.bytes);
            }
            yield return 0;
        }
        else File.Copy(infile, outfile, true);
        yield return new WaitForEndOfFrame();

        //释放所有文件到数据目录
        string[] files = File.ReadAllLines(outfile);
        foreach (var file in files)
        {
            string[] fs = file.Split('|');
            infile = resPath + fs[0];  //
            outfile = dataPath + fs[0];

            message = "正在解包文件:>" + fs[0];

            if (!Define.UpdateMode)
            {
                Debug.Log("正在解包文件:>" + infile);
            }

            loadingstr = message;
            Facade.Instance.SendNotification(NotificationID.UPDATE_MESSAGE,message);

            string dir = Path.GetDirectoryName(outfile);
            if (!Directory.Exists(dir)) Directory.CreateDirectory(dir);

            if (Application.platform == RuntimePlatform.Android)
            {
                WWW www = new WWW(infile);
                yield return www;

                if (www.isDone)
                {
                    File.WriteAllBytes(outfile, www.bytes);
                }
                yield return 0;
            }
            else
            {
                if (File.Exists(outfile))
                {
                    File.Delete(outfile);
                }
                File.Copy(infile, outfile, true);
            }
            yield return new WaitForEndOfFrame();
        }
        message = "解包完成!!!";
        loadingstr = message;
        Facade.Instance.SendNotification(NotificationID.UPDATE_MESSAGE, message);
        yield return new WaitForSeconds(0.1f);

        message = string.Empty;

        //释放完成，开始启动更新资源
        StartCoroutine(OnUpdateResource(OnComplete_UpdateResource));
    }

    /// 启动更新下载，这里只是个思路演示，此处可启动线程下载更新
    /// </summary>
    IEnumerator<object> OnUpdateResource(System.Action Complete)
    {
        //if (!Define.UpdateMode)
        //{
        //    OnResourceInited();
        //    yield break;
        //}
        if (!GameProxy.Instance.m_IsStart)
            yield return null;

        TotalUpdateLength = 0;

        string dataPath = LuaUtil.DataPath;              //数据目录
        string url = AssetManager.BaseDownloadingURL + "/";
        string message = string.Empty;
        string random = DateTime.Now.ToString("yyyymmddhhmmss");
        string listUrl = url + "files.txt?v=" + random;
        
        if (!Define.UpdateMode)
        {
            Debug.LogWarning("LoadUpdate---->>>" + listUrl);
        }

        WWW www = new WWW(listUrl); yield return www;
        if (www.error != null)
        {
            OnUpdateFailed(string.Empty);
            yield break;
        }
        if (!Directory.Exists(dataPath))
        {
            Directory.CreateDirectory(dataPath);
        }
        File.WriteAllBytes(dataPath + "files.txt", www.bytes);
        string filesText = www.text;
        string[] files = filesText.Split('\n');
        List<string> loaderFiles = new List<string>();
        List<string> loaderLocalFiles = new List<string>();

        for (int i = 0; i < files.Length; i++)
        {
            if (string.IsNullOrEmpty(files[i])) continue;
            string[] keyValue = files[i].Split('|');
            string f = keyValue[0];
            string localfile = (dataPath + f).Trim();
            string path = Path.GetDirectoryName(localfile);
            if (!Directory.Exists(path))
            {
                Directory.CreateDirectory(path);
            }
            //string fileUrl = url + f + "?v=" + random;
            string fileUrl = url + f;
            bool canUpdate = !File.Exists(localfile);
            if (!canUpdate)
            {
                string remoteMd5 = keyValue[1].Trim();
                string localMd5 = LuaUtil.md5file(localfile);
                canUpdate = !remoteMd5.Equals(localMd5);
                if (canUpdate)
                    File.Delete(localfile);
            }
            if (canUpdate)
            {   //本地缺少文件
                if(!Define.UpdateMode)
                    Debug.Log(fileUrl);
                TotalUpdateLength += int.Parse(keyValue[2]);

                loaderFiles.Add(fileUrl);
                loaderLocalFiles.Add(localfile);
            }
        }

        int cnt = loaderFiles.Count;
      
        for (int i = 0; i < cnt;i++)
        {
            string fileUrl = loaderFiles[i];
            string localfile = loaderLocalFiles[i];
            message = "downloading>>" + fileUrl;
            Facade.Instance.SendNotification(NotificationID.UPDATE_MESSAGE, message);

            BeginDownload(fileUrl, localfile);

            while (!(IsDownOK(localfile))) { yield return new WaitForEndOfFrame(); }
        }

        yield return new WaitForEndOfFrame();

        message = "更新完成!!";
        loadingstr = message;

        string curl = LuaUtil.GetRelativePath();
        int index = curl.LastIndexOf("/");
        AssetManager.BaseDownloadingURL = curl.Substring(0, index);
        m_openLoginUI = true;

        Complete();
        GameProxy.Instance.Init_TextManager();
        Facade.Instance.SendNotification(NotificationID.UPDATE_MESSAGE, message);

        OnResourceInited();
    }

    /// <summary>
    /// 线程下载
    /// </summary>
    void BeginDownload(string url, string file)
    {     //线程下载
        object[] param = new object[2] { url, file };

        ThreadEvent ev = new ThreadEvent();
        ev.Key = NotificationID.UPDATE_DOWNLOAD;
        ev.evParams.AddRange(param);
        ThreadManager.Instance.AddEvent(ev, OnThreadCompleted);   //线程下载
    }

    /// <summary>
    /// 线程完成
    /// </summary>
    /// <param name="data"></param>
    void OnThreadCompleted(NotiData data)
    {
        switch (data.evName)
        {
            case NotificationID.UPDATE_EXTRACT:  //解压一个完成

                break;
            case NotificationID.UPDATE_DOWNLOAD: //下载一个完成
                downloadFiles.Add(data.evParam.ToString());
                break;
        }
    }

    void OnUpdateFailed(string file)
    {
        string message = "更新失败!>" + file;
        Facade.Instance.SendNotification(NotificationID.UPDATE_MESSAGE, message);
        if (!Define.UpdateMode)
            Debug.Log(message);
    }


    /// <summary>
    /// 资源初始化结束
    /// </summary>
    public void OnResourceInited()
    {
        InitManager();
    }

    /// <summary>init管理器</summary>
    public static void InitManager()
    {
        GameEventManager.CreateInstance();
        //AssetBundleManager.CreateInstance();
        //ConfigManager.CreateInstance();
        AudioManager.CreateInstance();
        EffectManager.CreateInstance();
        //PanelManager.CreateInstance();

        GameManager.Instance.CheckLoaderInitedComplete = true;
    }

    /// <summary>是否下载完成</summary>
    bool IsDownOK(string file)
    {
        //for (int ind = 0; ind < loadingMaxNum; ind++)
        //{
        //    downloadFiles.Contains(file);
        //}

        return downloadFiles.Contains(file);
    }

    public void ResetLoadData()
    {
        ObjDic = new Dictionary<string, GameObject>();
    }

    public void LoadPrefab(string name)
    {
        if (null == m_loadingObj)
            m_loadingObj = new List<string>();
        m_loadingObj.Add(name);

        ResourceManager.Instance.LoadPrefab(name, OnLoaded_Completed,OnLoader_Error);
    }

    public static bool m_openPVEUI = false;
    private void OnLoaded_Completed(string name, GameObject obj)
    {
        m_loadingObj.Remove(name);

        obj.name = obj.name.Replace("(Clone)", "");
        ObjDic[obj.name] = obj;

        if(name.IndexOf("player") != -1)
            obj.gameObject.SetActive(false);

        if (m_loadingObj.Count == 0)
        {
            m_openPVEUI = true;
        }
    }

    private void OnLoader_Error(string name)
    {
        m_loadingObj.Remove(name);
    }

    public void Update()
    {
        if (m_openLoginUI && null != AssetManager.AssetBundleManifestObject && TextManager.Inited)
        {
            m_openLoginUI = false;

        }

        if(CheckLoaderInitedComplete && AssetManager.AssetBundleManifestObject !=null)
        {
            CheckLoaderInitedComplete = false;
            // 打开登录界面
            PureMVC.Patterns.Facade.Instance.SendNotification(NotificationID.LoginOpen);
        }
    }

    public void OnGUI()
    {
        if (Main.Ins.lineRender != null)
        {
            GUI.Label(new Rect(0, 0, 1000, 40), Main.Ins.lineRender.lineRender.shader.name);
        }
        
        //GUI.Label(new Rect(0, 42, 1000, 40), "CheckLoaderInitedComplete:" + CheckLoaderInitedComplete);
        //GUI.Label(new Rect(0, 84, 1000, 40), "AssetBundleManifestObject:" + AssetManager.AssetBundleManifestObject != null ? "true" : "false");
        //GUI.Label(new Rect(0, 40, 1200, 40), LuaUtil.DataPath);
        //GUI.Label(new Rect(0, 80, 1200, 40), LuaUtil.AppContentPath());
        //GUI.Label(new Rect(0, 120, 1200, 40), LuaUtil.GetRelativePath());
    }
}
