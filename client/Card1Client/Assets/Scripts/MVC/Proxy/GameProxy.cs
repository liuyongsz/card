using PureMVC.Interfaces;
using PureMVC.Patterns;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using ProxyInstance;

public class GameProxy : Proxy<GameProxy>
{
    public bool m_IsStart;
    private EScene m_currSceneType;
    private string m_loadingscene;
    private bool _compelteConfig = false;
    /// <summary>
    /// 当前场景类型
    /// </summary>
    public EScene CurrSceneType
    {
        get { return m_currSceneType; }
    }

    public void SetSceneType(EScene val)
    {
        m_currSceneType = val;
    }

    private string m_currSceneName;
    /// <summary>
    /// 当前场景名字
    /// </summary>
    public string CurrSceneName
    {
        get { return m_currSceneName; }
    }


    public GameProxy()
        : base(ProxyID.Game)
    {

    }
    /// <summary>
    /// 开始游戏
    /// </summary>
    public void StartGame()
    {
        if (m_IsStart == false)
        {
            m_IsStart = true;
            this.LoadConfig();
        }
    }

    /// <summary>加载配置表</summary>
    private void LoadConfig()
    {
        // 如果是单独的一个界面用的 打开界面前再加载配置

        if (!Define.UpdateMode)
        {
            Init_TextManager();
            GameManager.InitManager();
        }
    }

    private System.Action InitTextManagerComplete;
    public void Init_TextManager(System.Action complete = null)
    {
        InitTextManagerComplete = complete;
        TextManager.Init(OnComplete_LoadedLang);
    }

    /// <summary>语言包加载完成</summary>
    private void OnComplete_LoadedLang()
    {
        if (null != InitTextManagerComplete)
        {
            InitTextManagerComplete();
            InitTextManagerComplete = null;
        }

        TextManager.SetQueryString();

        InstanceProxy.Get<EffConfig>().LoadXml();
        InstanceProxy.Get<CardConfig>().LoadXml();
        InstanceProxy.Get<HeroConfig>().LoadXml();
        InstanceProxy.Get<SkillConfig>().LoadXml();
        InstanceProxy.Get<SkillPrefabInfoConfig>().LoadXml();
    }


    /// <summary>进入主场景</summary>
    public void GotoMainCity()
    {
        Facade.SendNotification(NotificationID.CHANGE_SCENE, new SceneVO("s_home", "s_home", false, EScene.MAINCITY));
    }

    /// <summary>进入PVP场景</summary>
    public void GoToPVP()
    {
        Facade.SendNotification(NotificationID.CHANGE_SCENE, new SceneVO("s_pvp", "s_pvp", false, EScene.PVP));
    }

    public void LoadingScene(string scenename)
    {
        m_loadingscene = scenename;
    }

    public bool isLoadingScene(string scenename)
    {
        return m_loadingscene == scenename;

    }

    /// <summary>
    /// 重置场景
    /// </summary>
    /// <param name="scenename"></param>
    /// <param name="t"></param>
    public void RealEnterScene(string scenename, EScene t)
    {
        m_currSceneType = t;
        m_currSceneName = scenename;
        switch (t)
        {
            case EScene.LOGIN:
               
                break;
            case EScene.MAINCITY:

                Facade.SendNotification(NotificationID.MainOpen);

                break;
            case EScene.BATTLE:

              
                break;
            case EScene.PVE:

                break;
            case EScene.PVP:

                if(Define.VSTest)
                {
                    SendNotification(NotificationID.FightOpen);
                    SendNotification(NotificationID.FightRoleHPOpen);
                    SendNotification(NotificationID.FightRoleDyHPOpen);
                }

                break;
            case EScene.ALL:
                break;
            case EScene.END:
                break;
            default:
                break;
        }
    }
}
