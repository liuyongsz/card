using PureMVC.Patterns;
using PureMVC.Interfaces;
using System.Collections.Generic;
using System;
using System.Reflection;

public enum EScene
{
    NONE,
    LOGIN,
    ALL,
    BATTLE,
    MAINCITY,
    PVE,
    PVP,
    LOADING,
    END,
}


public class ViewCommand: SimpleCommand
{

    static bool m_int = false;
    private  void Init()
    {
        if (m_int) return;
        Facade.RegisterCommand(NotificationID.UPDATE_SCENE_MEDIATOR, typeof(ViewCommand));

        m_int = true;
        RegisterUIMediator();
    }


    public override void Execute(INotification notification)
    {
        switch (notification.Name)
        {
            case NotificationID.UPDATE_SCENE_MEDIATOR:
                //EnterScene((notification.Body as ChangeSceneMsg).m_scenetype);
                break;
            case NotificationID.START_UP_PUREMVC:
                Init();
                break;
        }
    }

    /// <summary>注册场景的UIMediator</summary>
    private void RegisterUIMediator()
    {
        Facade.RegisterMediator(new LoginMediator());
        Facade.RegisterMediator(new HeroTeamMediator());
        Facade.RegisterMediator(new MainMediator());
        Facade.RegisterMediator(new FightPanelMediator());
        Facade.RegisterMediator(new VSPanelMediator());
        Facade.RegisterMediator(new FightRoleHPPanelMeditor());
        Facade.RegisterMediator(new FightRoleDyHPPanelMeditor());
        Facade.RegisterMediator(new PromptMediator());
        Facade.RegisterMediator(new SetHeroMediator());
        Facade.RegisterMediator(new ArcaneInfoMediator());
        Facade.RegisterMediator(new SelectRoleMediator());
        Facade.RegisterMediator(new SelectTeamMediator());
        Facade.RegisterMediator(new ChooseCardMediator());
    }
}

