using System;
using System.Collections.Generic;

using System.Text;
using PureMVC.Interfaces;
using PureMVC.Patterns;
/// <summary>
/// mediator基类，做简单的封装，避免子类中做消息id的switch判断了
/// </summary>
public class BaseMediator : Mediator
{
    /// <summary>
    /// 所有关注的通知ID和处理函数
    /// </summary>
    private Dictionary<NotificationID, Action<INotification>> handleTable = new Dictionary<NotificationID, Action<INotification>>();
    /// <summary>
    /// 关注的通知ID
    /// </summary>
    private List<NotificationID> interests = new List<NotificationID>();
    public BaseMediator(string name)
        : base(name)
    {

    }
    public override IList<NotificationID> ListNotificationInterests()
    {
        return interests;
    }
    /// <summary>
    /// 注册通知ID和处理函数
    /// </summary>
    /// <param Name="notificationID"></param>
    /// <param Name="handle"></param>
    protected void RegistPanelCall(NotificationID notificationID, Action<INotification> handle)
    {
        interests.Add(notificationID);
        handleTable.Add(notificationID, handle);
    }

    protected void UnRegistPanelCall(NotificationID notificationID)
    {
        interests.Remove(notificationID);
        handleTable.Remove(notificationID);
    }

    public override void HandleNotification(INotification notification)
    {
        Action<INotification> act = null;
        if(handleTable.TryGetValue(notification.Name, out act))
        {
            act(notification);
        }
       
    }
}

