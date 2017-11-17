using UnityEngine;
using System.Collections;
using System;
using PureMVC.Interfaces;
using System.Collections.Generic;
using System.Text;
using UnityEngine.UI;
using AssetBundles;
using NetProtocal;
using Spine.Unity;

/// <summary>
/// 获取控件
/// </summary>
public class promptpanel : BasePanel
{
    public UILabel context;
    public UILabel title;
    public UISprite okBtn;
    public UISprite cancelBtn;
    public UISprite copyTeamBtn;
    public UISprite createBtn;
    public Transform normal;
    public Transform createTeam;


}

public delegate void Confirm();
public delegate void CopyTeam();
public delegate void CreateTeam();

public class PromtInfo
{
    public Confirm confirm;
    public CopyTeam copyTeam;
    public CreateTeam createTeam;
    public string context;
    public string title;
    public PromtType promtType;

}

public enum PromtType
{
    Normal,
    CreateTeam,
}

public class PromptMediator : UIMediator<promptpanel>
{
    public Confirm confirm;
    public CopyTeam copyTeam;
    public CreateTeam createTeam;
    public static PromptMediator promptMediator;
    public promptpanel panel
    {
        get
        {
            return m_Panel as promptpanel;
        }
    }

    public PromptMediator() : base("promptpanel")
    {
        m_isprop = true;
        RegistPanelCall(NotificationID.PromptOpen, OpenPanel);
        RegistPanelCall(NotificationID.PromptClose, ClosePanel);
    }

    /// <summary>
    /// 界面显示之前调用
    /// </summary>
    protected override void OnStart(INotification notification)
    {
        if (promptMediator == null)
        {
            promptMediator = Facade.RetrieveMediator("PromptMediator") as PromptMediator;
        }
        PromtInfo info = notification.Body as PromtInfo;
        copyTeam = info.copyTeam;
        createTeam = info.createTeam;
        confirm = info.confirm;
        panel.context.text = info.context;
        panel.title.text = info.title;
        if (info.promtType == PromtType.CreateTeam)
        {
            panel.normal.gameObject.SetActive(false);
            panel.createTeam.gameObject.SetActive(true);
            panel.cancelBtn.transform.localPosition = new Vector3(0, -149, 0);
        }
        else if (info.promtType == PromtType.Normal)
        {
            panel.normal.gameObject.SetActive(true);
            panel.createTeam.gameObject.SetActive(false);
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
        UIEventListener.Get(panel.okBtn.gameObject).onClick = OnClick;
        UIEventListener.Get(panel.cancelBtn.gameObject).onClick = OnClick;
        UIEventListener.Get(panel.copyTeamBtn.gameObject).onClick = OnClick;
        UIEventListener.Get(panel.createBtn.gameObject).onClick = OnClick;
        
    }

    /// <summary>
    /// 点击事件
    /// </summary>
    private void OnClick(GameObject go)
    {
        if (go == panel.cancelBtn.gameObject)
        {
            ClosePanel(null);
        }
        else if (go == panel.okBtn.gameObject && confirm != null)
        {
            confirm();
            ClosePanel(null);
        }
        else if (go == panel.copyTeamBtn.gameObject && copyTeam != null)
        {
            copyTeam();
            ClosePanel(null);
        }
        else if (go == panel.createBtn.gameObject && createTeam != null)
        {
            createTeam();
            ClosePanel(null);
        }
        
    }

}