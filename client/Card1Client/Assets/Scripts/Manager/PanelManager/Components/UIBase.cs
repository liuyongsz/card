using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine.Events;

public interface ItfBase
{
    object[] uiData { set; get; }
    GameObject uiPrefab { set; get; }
    void Init();
    void OnStart();
    void OnUpdate();
    void Register();
    void UnRegister();
    void Destroy();
}

public class UIBase : MonoBehaviour {

    [HideInInspector]
    public bool ismaxDepth = false;
    [HideInInspector]
    public object[] m_data = null;

    private ItfBase m_luacode = null;

    private PanelCompleteHandler m_handler = null;
    
    private bool m_nocshape = false;
    private int m_setDepth = 10;
    public bool nocshape
    {
        set
        {
            m_nocshape = value;
            if (m_nocshape)
                SetLuaCode();
        }
        get { return m_nocshape; }
    }
    public int setDepth
    {
        set
        {
            m_setDepth = value;

        }
        get { return m_setDepth; }
    }
    /// <summary>
    /// 需要的初始化
    /// </summary>
    /// <param name="args"></param>
    public void Initialization(object[] args, PanelCompleteHandler handler = null)
    {
        Init();
        m_data = args;
        if (m_luacode != null)
        {
            m_luacode.uiData = m_data;
        }
        m_handler = handler;
    }
    
    void Start ()
    {
        if (m_luacode != null)
        {
            m_luacode.OnStart();
            m_luacode.Register();
        }
        OnStart();
        Register();
        if (m_handler != null)
            m_handler(this);
    }

    void Update()
    {
        if (m_luacode != null)
            m_luacode.OnUpdate();
        OnUpdate();
    }

    /// <summary>
    /// 刷新
    /// </summary>
    /// <param name="args"></param>
    public void Refresh(object[] args, PanelCompleteHandler handler = null)
    {
        m_data = args;
        m_handler = handler;
        if (m_luacode != null)
        {
            m_luacode.uiData = m_data;
            m_luacode.UnRegister();
        }
            
        UnRegister();
        Start();
    }

    public void OnDestroy()
    {
        UnRegister();
        Destroy();
        m_data = null;
        m_luacode = null;
        m_handler = null;
    }

    private void SetLuaCode()
    {
#if THREAD_SAFT || HOTFIX_ENABLE
        string luaCodename = gameObject.name;
        m_luacode = LuaManager.luaEnv.Global.Get<ItfBase>(luaCodename);
        if (m_luacode == null)
            return;
        m_luacode.uiPrefab = gameObject;
        if (m_luacode != null)
        {
            m_luacode.Init();
        }
#endif
    }

#region 界面生命周期
    protected virtual void Init() { }

    protected virtual void OnStart() { }

    protected virtual void OnUpdate() { }

    protected virtual void Register() { }

    protected virtual void UnRegister() { }

    protected virtual void Destroy() { }
#endregion
}
