using System;
using PureMVC.Interfaces;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using AssetBundles;
using NetProtocal;

/// <summary>
/// 获取控件
/// </summary>
public class mainpanel : BasePanel
{
    public UISprite pveBtn;
    public UISprite pvpBtn;
    public UISprite rankBtn;
    public UISprite pvpInBtn;
}


public class MainMediator : UIMediator<mainpanel>
{
    public mainpanel panel
    {
        get
        {
            return m_Panel as mainpanel;
        }
    }

    public static MainMediator mainMediator;
    public MainMediator() : base("mainpanel")
    {
        m_isprop = false;
        RegistPanelCall(NotificationID.MainOpen, OpenPanel);
        RegistPanelCall(NotificationID.MainClose, ClosePanel);
    }

    /// <summary>
    /// 界面显示之前调用
    /// </summary>
    protected override void OnStart(INotification notification)
    {

        if (mainMediator == null)
        {
            mainMediator = Facade.RetrieveMediator("MainMediator") as MainMediator;
        }


    }

    /// <summary>
    /// 界面显示调用
    /// </summary>
    protected override void OnShow(INotification notification)
    {
       


    }

    /// <summary>
    /// 事件组件
    /// </summary>
    protected override void AddComponentEvents()
    {
        UIEventListener.Get(m_Panel.pveBtn.gameObject).onClick = OnClick;
        UIEventListener.Get(m_Panel.pvpBtn.gameObject).onClick = OnClick;
        UIEventListener.Get(m_Panel.rankBtn.gameObject).onClick = OnClick;
        UIEventListener.Get(m_Panel.pvpInBtn.gameObject).onClick = OnClick;
    }
    /// <summary>
    /// 点击事件
    /// </summary>
    private void OnClick(GameObject go)
    {
        if (go == panel.pveBtn.gameObject)
        {
            FightProxy.Instance.SendMatchFight(PlayerProxy.Instance.Info.selectTeamId);
        }
        else if (go == panel.pvpBtn.gameObject)
        {
            // 选择默认小队
            NSocket.GetInstance().SendData(Request.CardAssemblyList);
            //SendNotification(NotificationID.ChooseCardOpen);
        }
        else if (go == panel.pvpInBtn.gameObject)
        {
            if(Define.VSTest)
                SendNotification(NotificationID.VSLoadingOpen);
        }
        else
        {
 
        }
    }

    void UpdateHeroGrid(UIGridItem item)
    {

    }

    /// <summary>
    /// 关闭界面调用 释放内存
    /// </summary>
    protected override void OnDestroy()
    {

        base.OnDestroy();
    }
}