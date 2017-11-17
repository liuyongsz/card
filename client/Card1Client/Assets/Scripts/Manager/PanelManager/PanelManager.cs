using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Reflection;

public delegate void PanelCompleteHandler(UIBase uibase);

public class PanelManager : ManagerTemplate<PanelManager>
{
    private static Dictionary<string, UIBase> m_panels;         //存在界面的集合字典
    private static List<AMLoadAssetOperation> m_assetOps;
    private static int m_maxDepth = 0;                                   //当前最大深度   

    protected override void InitManager()
    {
        m_panels = new Dictionary<string, UIBase>();
        m_assetOps = new List<AMLoadAssetOperation>();
    }

    protected override void OnDestroy()
    {
        if (null != m_assetOps)
        {
            for (int i = 0; i < m_assetOps.Count; i++)
            {
                m_assetOps[i].UnloadAssetBundle();
            }
            m_assetOps.Clear();
        }
       
        if(null != m_panels)
            m_panels.Clear();

        base.OnDestroy();
    }

    private static Transform parent;

    public static Transform Parent
    {
        get
        {
            if (parent == null)
            {
                GameObject go = GameObject.Find("UIRoot/uiLayer0");
                DontDestroyOnLoad(go);
                GameObject Eventgo = GameObject.Find("EventSystem");
                DontDestroyOnLoad(Eventgo);
                if (go != null) parent = go.transform;
            }
            return parent;
        }
    }

    public static int childCount
    {
        get { return Parent.transform.childCount; }
    }
    
    public static bool IsOpen(string uiName)
    {
        if (m_panels.ContainsKey(uiName))
            return true;
        return false;
    }

    public static T OpenPanel<T>(string uiName, bool ismaxDepth = false, params object[] args) where T : UIBase
    {
        UIBase ui = null;
        if (m_panels.TryGetValue(uiName, out ui))
        {
            ui.gameObject.SetActive(true);
            SetPanelDepth(ui, ismaxDepth);
            ui.Refresh(args);
            return ui as T;
        }
        return LoadPanel<T>(uiName, ismaxDepth, args);
    }

    public static void OpenPanel(string uiName, bool ismaxDepth = false, params object[] args)
    {
        UIBase ui = null;

        if (null == m_panels)
            m_panels = new Dictionary<string, UIBase>();

        if (m_panels.TryGetValue(uiName, out ui))
        {
            ui.gameObject.SetActive(true);
            SetPanelDepth(ui, ismaxDepth);
            ui.Refresh(args);
            return;
        }
        LoadPanel<UIBase>(uiName, ismaxDepth, args);
    }

    public static void OpenPanelAsync(string uiName,bool ismaxDepth = false, PanelCompleteHandler handler = null, params object[] args)
    {
        UIBase ui = null;
        if (m_panels.TryGetValue(uiName, out ui))
        {
            ui.gameObject.SetActive(true);
            SetPanelDepth(ui, ismaxDepth);
            ui.Refresh(args, handler);
            return;
        }
        Instance.StartCoroutine(Instance.LoadPanelAsync(uiName, ismaxDepth, handler, args));
    }

    /// <summary>
    /// 关闭面板
    /// </summary>
    /// <param name="name"></param>
    public static void ClosePanel(string uiName)
    {
        if (m_panels.ContainsKey(uiName))
        {
            UIBase ui = m_panels[uiName];
            if (!ui.ismaxDepth)
                m_maxDepth--;
            m_panels.Remove(uiName);

            var panelObj = ui.gameObject;
            if (panelObj != null)
                Destroy(panelObj.gameObject);
        }
    }

    /// <summary>
    /// 隐藏界面
    /// </summary>
    /// <param name="uiName"></param>
    public static bool HidePanel(string uiName)
    {
        if (m_panels.ContainsKey(uiName))
        {
            m_panels[uiName].gameObject.SetActive(false);
            return true;
        }
        return false;
    }

    /// <summary>
    /// 显示界面
    /// </summary>
    /// <param name="uiName"></param>
    public static bool ShowPanel(string uiName)
    {
        if (m_panels.ContainsKey(uiName))
        {
            m_panels[uiName].gameObject.SetActive(true);
            return true;
        }
        return false;
    }

    public static void SetPanelDepth(UIBase ui, bool ismaxDepth = false)
    {
        ui.ismaxDepth = ismaxDepth;
        if (!ismaxDepth)
            ui.gameObject.transform.SetSiblingIndex(m_maxDepth-1);
        else
            ui.gameObject.transform.SetAsLastSibling();
    }

    private static T LoadPanel<T>(string uiName, bool ismaxDepth = false, object[] args = null) where T : UIBase
    {
        //string uipath = string.Format("ui/{0}.bundle", uiName.ToLower());
        string uipath = uiName.ToLower();
        //UnityEngine.Object prefab = AssetBundleManager.LoadAsset(uipath, uiName, typeof(GameObject));

        UIBase ui = null;
       ResourceManager.Instance.LoadPrefab(uiName, (name, prefab) =>
        {

            prefab.name = prefab.name.Replace("(Clone)", "");
            ui = SetPanel(prefab, uiName, ismaxDepth, null, args);
         
        });
        
        return ui as T;

    }
    
    private IEnumerator LoadPanelAsync(string uiName, bool ismaxDepth = false, PanelCompleteHandler handler = null, object[] args = null)
    {
        //string uipath = string.Format("ui/{0}.bundle", uiName.ToLower());
        string uipath = uiName.ToLower();
        var request = AssetBundleManager.LoadAssetAsync(uipath, uiName, typeof(GameObject));
        m_assetOps.Add(request);
        yield return request;
        GameObject prefab = request.GetAsset<GameObject>();
        if (prefab != null)
        {
            GameObject go = Instantiate(prefab) as GameObject;
            SetPanel(go, uiName, ismaxDepth, handler, args);
        }
        yield break;
    }

    private static UIBase SetPanel(GameObject go, string uiName, bool ismaxDepth = false, PanelCompleteHandler handler = null, object[] args = null)
    {
        go.SetActive(true);
     

        Transform tparent = Main.GetUIRoot().FindChild("Camera");
        go.transform.SetParent(tparent);

        if (!GUIManager.m_panelExitList.ContainsKey(uiName))
            GUIManager.m_panelExitList.Add(uiName, go);

        bool nocshape = false;
        var type = Assembly.GetExecutingAssembly().GetType(uiName);
        if (type == null)
        {
            nocshape = true;
            type = typeof(UIBase);
        }
        UIBase ui = go.GetComponent(type) as UIBase;
        if (ui == null)
            ui = go.AddComponent(type) as UIBase;
        
        m_panels.Add(uiName, ui);
        go.transform.localScale = Vector3.one;
        go.transform.localPosition = Vector3.zero;
        if (ui != null)
        {
            go.GetComponent<UIPanel>().depth = ui.setDepth;
            ui.nocshape = nocshape;
            ui.Initialization(args, handler);
        }
        else
        {
            Debug.Log("PanelManager SetPanel ui is Null");
        }
       
        return ui;
    }
}
