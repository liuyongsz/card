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
public class selectrolepanel : BasePanel
{
    public UIGrid heroGrid;
    public UISprite backBtn;
    public UISprite createBtn;
    public UIInput inputBtn;
}


public class SelectRoleMediator : UIMediator<selectrolepanel>
{
    public selectrolepanel panel
    {
        get
        {
            return m_Panel as selectrolepanel;
        }
    }
    public static SelectRoleMediator selectRoleMediator;

    public SelectRoleMediator() : base("selectrolepanel")
    {
        m_isprop = true;
        RegistPanelCall(NotificationID.SelectRoleOpen, OpenPanel);
        RegistPanelCall(NotificationID.SelectRoleClose, ClosePanel);
    }

    /// <summary>
    /// 界面显示之前调用
    /// </summary>
    protected override void OnStart(INotification notification)
    {
        if (selectRoleMediator == null)
        {
            selectRoleMediator = Facade.RetrieveMediator("SelectRoleMediator") as SelectRoleMediator;
        }
        panel.heroGrid.enabled = true;
        panel.heroGrid.BindCustomCallBack(UpdateHeroGrid);
        panel.heroGrid.StartCustom();
    }

    
    /// <summary>
    /// 界面显示调用
    /// </summary> 
    protected override void OnShow(INotification notification)
    {
        panel.inputBtn.value = TextManager.GetUIString("UI1028");
        HeroInfoListMsg heroInfoListMsg = notification.Body as HeroInfoListMsg;
        List<object> list = new List<object>(); 
        for (int i = 0; i < heroInfoListMsg.heroList.Count; ++i)
        {
            list.Add(heroInfoListMsg.heroList[i]);
        }
        for (int i = 0; i < 10; i++)
        {
            HeroInfoMsg info = new HeroInfoMsg
            {
                configId = i,
                level = i,
            };
            list.Add(info);
        }
        panel.heroGrid.AddCustomDataList(list);
    }

    /// <summary>
    /// 事件组件
    /// </summary>
    protected override void AddComponentEvents()
    {
        UIEventListener.Get(panel.backBtn.gameObject).onClick = OnClick;
        UIEventListener.Get(panel.createBtn.gameObject).onClick = OnClick;
    }
    /// <summary>
    /// 点击事件
    /// </summary>
    private void OnClick(GameObject go)
    {
       if(go == panel.backBtn.gameObject)
        {
            ClosePanel(null);
        }
    }
    /// <summary>
    /// 刷新英雄信息
    /// </summary>
    /// <param name="item"></param>
    void UpdateHeroGrid(UIGridItem item)
    {
        if (item == null || item.oData == null || item.mScripts == null)
            return;
        item.onClick = SetHeroItem;
        HeroInfoMsg info = item.oData as HeroInfoMsg;
        UITexture head = item.mScripts[0] as UITexture;
        UILabel name = item.mScripts[1] as UILabel;
        UILabel level = item.mScripts[2] as UILabel;
        TD_Hero hero = HeroConfig.GetItem(info.configId);
        if (hero == null)
            return;
        LoadSprite.LoaderHead(head, hero.headRes);
        name.text = hero.name;
        level.text = string.Format("Lv{0}", info.level);
      
    }
    /// <summary>
    /// 设置英雄奥义 卡牌
    /// </summary>
    /// <param name="item"></param>
    void SetHeroItem(UIGridItem item)
    {
        HeroInfoMsg info = item.oData as HeroInfoMsg;
        CreateCardTeamMsg msg = new CreateCardTeamMsg
        {
            teamId = HeroTeamMediator.heroTeamMediator.heroListMsg.id,
            heroConfigId = info.configId,
        };
        NSocket.GetInstance().SendData(Request.CreateCardTeamReq, msg);
        ClosePanel(null);
    }
    /// <summary>
    /// 关闭界面调用 释放内存
    /// </summary>
    protected override void OnDestroy()
    {
        selectRoleMediator = null;
        base.OnDestroy();
    }
}