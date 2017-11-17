using PureMVC.Patterns;
using PureMVC.Interfaces;

class ModelCommand: SimpleCommand
{
    public override void Execute(INotification notification)
    {
        Facade.RegisterProxy(GameProxy.Instance);
        Facade.RegisterProxy(MainProxy.Instance);
        Facade.RegisterProxy(LoginProxy.Instance);
        Facade.RegisterProxy(HeroProxy.Instance);
        Facade.RegisterProxy(FightProxy.Instance);
        Facade.RegisterProxy(PlayerProxy.Instance);
    }
}

