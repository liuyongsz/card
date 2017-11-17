using PureMVC.Patterns;
using PureMVC.Interfaces;



class GameCommand : SimpleCommand
{
    public override void Execute(INotification notification)
    {
        GameProxy proxy = Facade.RetrieveProxy(ProxyID.Game) as GameProxy;
        switch (notification.Name)
        {
            case NotificationID.START_GAME://启动游戏
                proxy.StartGame();
                break;
        }

    }
}

