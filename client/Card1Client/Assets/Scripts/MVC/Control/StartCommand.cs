using PureMVC.Patterns;
using PureMVC.Interfaces;
/// <summary>
/// puremvc启动command，用于启动视图，模型，控制层的注册类
/// author: Huxiaobo
/// Date: 2014.6.12
/// </summary>
public class StartCommand : MacroCommand {

    public override void Execute(INotification notification)
    {
       AddSubCommand(typeof(ModelCommand));
       AddSubCommand(typeof(ControllerCommand));
       AddSubCommand(typeof(ViewCommand));
       base.Execute(notification);
    }
}
