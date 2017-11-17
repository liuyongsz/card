using System;
using System.Collections.Generic;
using System.Text;

public enum ProxyID
{
    NONE,
    MainUI,
    Game,
    Login, 
    HeroTeam,
    Fight,
    Player,
}
/// <summary>
/// 所有通知ID注册类
/// </summary>
public enum NotificationID
{
    START_UP,
    #region 
    START_GAME,
    START_UP_PUREMVC,
    CHANGE_SCENE,
    UPDATE_SCENE_MEDIATOR,
    SCENE_CHANGE_FINISH, //场景切换完成
    PLAYERMAKER_EVENT_MSG,//playermaker 事件消息

    UPDATE_MESSAGE,        //更新消息
    UPDATE_EXTRACT,        //更新解包
    UPDATE_DOWNLOAD,       //更新下载
    UPDATE_PROGRESS,       //更新进度
#endregion

    #region
    MATCH_OVER, //比赛结束
    #endregion
 


    #region 界面操作 
    NULL,   
    CloseAll,
    LoginOpen,
    LoginClose,
    MainOpen,
    MainClose,
    HeroTeamOpen,
    HeroTeamClose,
    PromptOpen,
    PromptClose,
    SetHeroOpen,
    SetHeroClose,
    ArcaneInfoOpen,
    ArcaneInfoClose,
    SelectRoleOpen,
    SelectRoleClose,
    TeamListOpen,
    TeamListClose,
    #endregion

    #region 注册页面
    REGISTER_CLICKITEM,
    #endregion

    #region 资源更新UI
    UpdateResources_Open,
    UpdateResources_Close,
    #endregion

    #region Fight
    Fight_LoaderMapComplete,            //加载地图完成
    Fight_LoaderAvatarComplete,         //加载化身完成
    Fight_LoaderAvatarItemComplete,     //加载每个化身完成
    Fight_Effect,                       //战斗效果

    Fight_AddHp,                        //加血
    #endregion

    #region FightUI
    FightOpen,
    FightClose,
    Fihgt_ShowOpPan,  //显示对手卡牌容器
    Fight_WarnMyAtk,
    Fight_WarnOpAtk,
    Fight_ShowExpPan, //显示充能容器
    #endregion

    #region FightUI
    VSLoadingOpen,
    VSLoadingClose,
    VSLoading_Per,         //加载进度
    #endregion

    #region 头顶血
    FightRoleHPOpen,
    FightRoleHPClose,
    FightRoleHp_AddMyHP,
    FightRoleHp_AddOpHP,
    FightRoleHp_Data,
    #endregion

    #region 漂浮血
    FightRoleDyHPOpen,
    FightRoleDyHPClose,
    #endregion

    #region 漂浮血
    ChooseCardOpen,
    ChooseCardClose,
    ChooseCard_ReplaceCard,
    #endregion
}
