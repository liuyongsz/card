using System;
using PureMVC.Interfaces;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using AssetBundles;
using NetProtocal;
using Spine.Unity;

/// <summary>
/// 获取控件
/// </summary>
public class selectteampanel : BasePanel
{
    public UIGrid teamGrid;
    public UISprite backBtn;
}


public class SelectTeamMediator : UIMediator<selectteampanel>
{
    public selectteampanel panel
    {
        get
        {
            return m_Panel as selectteampanel;
        }
    }
    public static SelectTeamMediator selectTeamMediator;
    TeamListMsg msg;
    public SelectTeamMediator() : base("selectteampanel")
    {
        m_isprop = true;
        RegistPanelCall(NotificationID.TeamListOpen, OpenPanel);
        RegistPanelCall(NotificationID.TeamListClose, ClosePanel);
    }

    /// <summary>
    /// 界面显示之前调用
    /// </summary>
    protected override void OnStart(INotification notification)
    {
        if (selectTeamMediator == null)
        {
            selectTeamMediator = Facade.RetrieveMediator("SelectTeamMediator") as SelectTeamMediator;
        }
        msg = notification.Body as TeamListMsg;
        panel.teamGrid.enabled = true;
        panel.teamGrid.BindCustomCallBack(UpdateTeamGrid);
        panel.teamGrid.StartCustom();
    }


    /// <summary>
    /// 界面显示调用
    /// </summary> 
    protected override void OnShow(INotification notification)
    {
        List<object> list = new List<object>();
        msg.team.Sort((x, y) => x.teamId.CompareTo(y.teamId));
        for (int i = 0; i < msg.team.Count; ++i)
        {
            list.Add(msg.team[i]);
        }
        SelectTeamMsg info = new SelectTeamMsg
        {
            teamId = -1,
        };
        list.Add(info);
        panel.teamGrid.AddCustomDataList(list);
    }

    /// <summary>
    /// 事件组件
    /// </summary>
    protected override void AddComponentEvents()
    {
        UIEventListener.Get(panel.backBtn.gameObject).onClick = OnClick;
    }
    /// <summary>
    /// 点击事件
    /// </summary>
    private void OnClick(GameObject go)
    {
        if (go == panel.backBtn.gameObject)
        {
            ClosePanel(null);
        }
    }
    /// <summary>
    /// 刷新小队信息
    /// </summary>
    /// <param name="item"></param>
    void UpdateTeamGrid(UIGridItem item)
    {
        if (item == null || item.oData == null || item.mScripts == null)
            return;
        item.onClick = ChooseItem;
        SelectTeamMsg info = item.oData as SelectTeamMsg;
        UILabel name = item.mScripts[0] as UILabel;
        UILabel id = item.mScripts[1] as UILabel;
        UISprite addBtn = item.mScripts[2] as UISprite;
        UILabel haveTeam = item.mScripts[3] as UILabel;
        haveTeam.gameObject.SetActive(info.teamId > 0);
        addBtn.gameObject.SetActive(info.teamId < 0);
        item.GetComponent<BoxCollider>().enabled = info.teamId > 0;
        UIEventListener.Get(addBtn.gameObject).onClick = CeateTeam;
        if (info.teamId < 0)
            return;
        name.text = info.teamName;
        id.text = info.teamId.ToString();
        TD_Hero hero = null;
        for (int i = 0; i < 4; ++i)
        {
            if (info.configIdList.Count > i)
            {
                hero = HeroConfig.GetItem(info.configIdList[i]);
                LoadSprite.LoaderHead(haveTeam.transform.FindChild(i.ToString()).GetComponent<UITexture>(), hero.headRes);
            }
            else
            {
                haveTeam.transform.FindChild(i.ToString()).GetComponent<UITexture>().material = null;
            }
        }
    }
    /// <summary>
    /// 选择小队
    /// </summary>
    void ChooseItem(UIGridItem item)
    {
        SelectTeamMsg info = item.oData as SelectTeamMsg;
        if (info.teamId != HeroTeamMediator.heroTeamMediator.heroListMsg.id)
        {
            ParamIntMsg msg = new ParamIntMsg
            {
                intValue = info.teamId,
            };
            NSocket.GetInstance().SendData(Request.CardHeroList, msg);
        }
        ClosePanel(null);
    }
    /// <summary>
    /// 创建新的小队
    /// </summary>
    void CeateTeam(GameObject go)
    {
        int cardList = HeroProxy.Instance.cardListMsg.cardList.Count + 1;
        ParamStrMsg info = new ParamStrMsg
        {
            strValue = string.Format(TextManager.GetUIString("UI1017"), cardList)
        };
        NSocket.GetInstance().SendData(Request.CreateCardTeam, info);
        ClosePanel(null);
    }
    /// <summary>
    /// 关闭界面调用 释放内存
    /// </summary>
    protected override void OnDestroy()
    {
        selectTeamMediator = null;
        base.OnDestroy();
    }
}