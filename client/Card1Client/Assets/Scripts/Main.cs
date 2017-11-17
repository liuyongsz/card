using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using AssetBundles;
using UnityEngine.EventSystems;
using PureMVC.Patterns;
using UnityEngine.Events;
using NetProtocal;

public enum EUIDepth
{
    FIRST,
    SECOND,
}

class Main : MonoBehaviour 
{
    public bool GameDebug = false;
    /// <summary>是否使用滚地球 test</summary>
    public bool UsePassGroundBall;
    public static Main Ins;
    public static Sprite m_defaultsprite;
    public static Texture2D m_defaultTexture;
    private GameObject loading;
    public static UnityEngine.Events.UnityAction SoketCallBack = null;

    public Camera Camera3D;
    public MoveHeroPosition lineRender;
    public static Camera CameraUI;
    public static Camera CameraHPUI;
    public static Camera blurCamera;

    private string myName;

    public bool Test;

    public Transform NoNetLab;

    public static Transform GetUIRoot()
    {
        if (m_UIRoot == null)
        {
            m_UIRoot = GameObject.Find("UIRoot").transform;
            //if (m_UIRoot != null)
            //{
            //    int ManualWidth = Screen.width;
            //    int ManualHeight = Screen.height;
            //    UIRoot uiRoot = m_UIRoot.GetComponent<UIRoot>();
            //    if (uiRoot != null)
            //    {
            //        if (System.Convert.ToSingle(Screen.height) / Screen.width > System.Convert.ToSingle(ManualHeight) / ManualWidth)
            //            uiRoot.manualHeight = Mathf.RoundToInt(System.Convert.ToSingle(ManualWidth) / Screen.width * Screen.height);
            //        else
            //            uiRoot.manualHeight = ManualHeight;
            //    }
            //}

            

            CameraUI = m_UIRoot.FindChild("Camera").GetComponent<Camera>();
            CameraHPUI = m_UIRoot.FindChild("HP_Camera").GetComponent<Camera>();
            blurCamera = m_UIRoot.FindChild("blurCamera").GetComponent<Camera>();
            blurCamera.gameObject.SetActive(false);
            DontDestroyOnLoad(m_UIRoot);
        }
        var eventSystem = GameObject.Find("EventSystem");
        if (eventSystem != null)
            DontDestroyOnLoad(eventSystem);
        
        return m_UIRoot;
    }

    public static Transform UIRoot3D
    {
        get
        {
            if(null == m_UIRoot3D)
            {
                m_UIRoot3D = GameObject.Find("UIRoot3D").transform;

                DontDestroyOnLoad(m_UIRoot3D.gameObject);
            }

            return m_UIRoot3D;
        }
    }
    public static Transform GetBattleNode()

    {
         if(null==m_DestoryNode)
        {
            m_DestoryNode = GameObject.Find("BattleNode").transform;
            DontDestroyOnLoad(m_DestoryNode.gameObject);
        }
        return m_DestoryNode;
    }

    private static Transform m_DestoryNode;
    private static Transform m_UIRoot;
    private static Transform m_UIRoot3D;

    //private BuglyCrash m_demo;
    void Awake()
    {
        Camera3D.gameObject.SetActive(false);
        //时间控制管理器
        AddComponent("TimerManager");
        //界面控制管理器
        AddComponent("GUIManager");
    }
    // Use this for initialization
    void Start () {
        Screen.orientation = ScreenOrientation.AutoRotation;
        Screen.autorotateToLandscapeLeft = true;
        Screen.autorotateToLandscapeRight = true;
        Screen.autorotateToPortrait = false;
        Screen.autorotateToPortraitUpsideDown = false;
        Time.timeScale = 1f;

        Application.runInBackground = true;
        
        DontDestroyOnLoad(gameObject);
       
        //if (null == m_demo)
            //m_demo = gameObject.AddComponent<BuglyCrash>();

        Screen.sleepTimeout = SleepTimeout.NeverSleep;

        Ins = this;
        //启动MVC
        GameFacade.Instance().Startup();

        GetUIRoot();
        Transform root3 = UIRoot3D;

        //初始化资源管理器
        ResourceManager.Instance.Init(ResourceManagerInitComplete);
        //初始化各种SDK

        //设置全局对象池
        PoolManager.Init();
        m_defaultsprite = Resources.Load<Sprite>("notfount");

        Application.targetFrameRate = Define.GameFrameRate;

        NSocket.GetInstance().SetIpAddress("47.96.5.212", 12345);
        //NSocket.GetInstance().SetIpAddress("192.168.2.55", 12345);
        //NSocket.GetInstance().SetIpAddress("192.168.2.144", 12345);
        //NSocket.GetInstance().SetIpAddress("192.168.2.127", 12345);
        //NSocket.GetInstance().SetIpAddress("47.96.5.212",12345);
        NSocket.GetInstance().ConnectServer();
        NetDataMgr.Instance.Init();

        PanelManager pm =  PanelManager.Instance;

        Debug.Log( "程序集版本：" + System.Reflection.Assembly.GetExecutingAssembly().GetName().Version.ToString());
    }
    ///<summary>
    /// 添加管理器
    /// </summary>
    void AddComponent(string component)
    {
        if (string.IsNullOrEmpty(component))
        {
            return;
        }

        GameObject go = GameObject.Find(component);
        if (go == null)
        {
            go = new GameObject(component);
        }

        go.AddComponent(System.Type.GetType(component));
        go.transform.parent = transform;
    }
    public static long heartTime = 0;
    public static bool isHeart = false; // 先设置false 如果请求到玩家数据进行开启

    private static NetHelper m_netHelp;

    void Update()
    {
        if (null == m_netHelp)
            m_netHelp = Instance.Get<NetHelper>();

        Define.VSTest = Test;
        //if (Input.GetKey(KeyCode.F1))
        //{
        //    PureMVC.Patterns.Facade.Instance.SendNotification(NotificationID.Hide_Main);
        //    PureMVC.Patterns.Facade.Instance.SendNotification(NotificationID.CHANGE_SCENE, new SceneVO("s_match1", "s_match1", false, EScene.PVE));
        //}
        //else if(Input.GetKey(KeyCode.F2))
        //{
        //    GUIManager.CloseAllUI();
        //    UnityEngine.SceneManagement.SceneManager.LoadScene("S_ShootTest");
        //}
        //else if(Input.GetKey(KeyCode.A) && !Define.WaiWangDebug)
        //{
        //    SandTableMediator.IsEdit = true;
        //    PureMVC.Patterns.Facade.Instance.SendNotification(NotificationID.SandTable_Show);
        //}
        //else if (Input.GetKey(KeyCode.F))
        //{
        //    PureMVC.Patterns.Facade.Instance.SendNotification(NotificationID.SandTable_Show);
        //}

        //当网络不可用时
        if (Application.internetReachability == NetworkReachability.NotReachable)
        {
            //GUIManager.BrokenNetWork();
            Debug.LogError("Not Have Net!");
        }

        if(null != NoNetLab)
            NoNetLab.gameObject.SetActive(!NSocket.GetInstance().IsConnected());

        //当用户使用WiFi时
        else if (Application.internetReachability == NetworkReachability.ReachableViaLocalAreaNetwork)
        {
            //if (GUIManager.CurrentNetState != NetState.Wifi && GUIManager.IsConnect)
            //{
            //    TimerManager.Destroy("reloginApp");
            //}

            //GUIManager.CurrentNetState = NetState.Wifi;
        }

        //当用户使用移动网络时
        else if (Application.internetReachability == NetworkReachability.ReachableViaCarrierDataNetwork)
        {
            //if (GUIManager.CurrentNetState != NetState.Phone && GUIManager.IsConnect)
            //{
            //    TimerManager.Destroy("reloginApp");
            //}

            //GUIManager.CurrentNetState = NetState.Phone;
        }
    }

    void ResourceManagerInitComplete()
    {
        //GUIManager.HideLoadingUI();
        PureMVC.Patterns.Facade.Instance.SendNotification(NotificationID.START_GAME);

        //SkillInstance skillIns = SkillSystem.Instance.CreateInstance(0, 0);
        //Trigger_AddEffect eff = new Trigger_AddEffect();
        //eff.PreLoaderEffect("loginpanel");

        //GameProxy.Instance.GoToPVP();
    }

    void FixedUpdate()
    {
        NSocket.GetInstance().Update();
    }

    void OnApplicationQuit()
    {
        Destroy();
    }
    void Destroy()
    {
        NSocket.GetInstance().Destroy();
    }

    public static string WarningString = "";

 
}
