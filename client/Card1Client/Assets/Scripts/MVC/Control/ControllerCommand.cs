using PureMVC.Patterns;
using PureMVC.Interfaces;
using UnityEngine;

public class ControllerCommand: SimpleCommand {

    public override void Execute(INotification notification)
    {
        //游戏
        Facade.RegisterCommand(NotificationID.START_GAME, typeof(GameCommand));
        ////场景切换
        Facade.RegisterCommand(NotificationID.CHANGE_SCENE, typeof(SceneCommand));
    }
}
