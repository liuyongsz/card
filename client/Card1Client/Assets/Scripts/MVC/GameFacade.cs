using UnityEngine;
using System.Collections;
using PureMVC.Patterns;
/// <summary>
/// puremvc启动类,总入口
/// author: Huxiaobo
/// Date: 2014.6.12
/// </summary>
public class GameFacade : Facade {

    public GameFacade() : base()
    {
  
    }
    protected override void InitializeController()
    {
        base.InitializeController();
        RegisterCommand(NotificationID.START_UP_PUREMVC, typeof(StartCommand));
    }
    /// <summary>
    /// 启动mvc
    /// </summary>
	public void Startup()
    {    
        SendNotification(NotificationID.START_UP_PUREMVC);
        RemoveCommand(NotificationID.START_UP_PUREMVC);
    }

    private static GameFacade m_ins;
    public static GameFacade Instance()
    {
          if (null == m_ins)
          {
              m_ins = new GameFacade();
          }

          return m_ins;
    }
}
