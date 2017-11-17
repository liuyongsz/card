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
public class arcaneinfopanel : BasePanel
{
    public UITexture arcaneTexture;
    public UILabel arcaneName;
    public UILabel arcanePoint;
    public UILabel arcaneDes;
}


public class ArcaneInfoMediator : UIMediator<arcaneinfopanel>
{
    public arcaneinfopanel panel
    {
        get
        {
            return m_Panel as arcaneinfopanel;
        }
    }
    public static ArcaneInfoMediator arcaneInfoMediator;

    public ArcaneInfoMediator() : base("arcaneinfopanel")
    {
        m_isprop = true;
        RegistPanelCall(NotificationID.ArcaneInfoOpen, OpenPanel);
        RegistPanelCall(NotificationID.ArcaneInfoClose, ClosePanel);
    }

    /// <summary>
    /// 界面显示之前调用
    /// </summary>
    protected override void OnStart(INotification notification)
    {
        if (arcaneInfoMediator == null)
        {
            arcaneInfoMediator = Facade.RetrieveMediator("ArcaneInfoMediator") as ArcaneInfoMediator;
        }
    }


    /// <summary>
    /// 界面显示调用
    /// </summary> 
    protected override void OnShow(INotification notification)
    {
        UIGridItem info = notification.Body as UIGridItem;
        int pos = (info.oData as HeroInfo).pos;
        switch(pos)
        {
            case 1:
                panel.transform.localPosition = new Vector3(-215, 117, 0);
                break;
            case 2:
                panel.transform.localPosition = new Vector3(129, 117, 0);
                break;
            case 3:
                panel.transform.localPosition = new Vector3(471, 117, 0);
                break;
            case 4:
                panel.transform.localPosition = new Vector3(160, 117, 0);
                break;
        }
        TD_Skill skillInfo = SkillConfig.GetItem((info.oData as HeroInfo).arcaneId);
        if (skillInfo == null)
        {
            Debug.LogError("缺少配置");
            return;
        }
        panel.arcaneName.text = skillInfo.name;
        panel.arcaneDes.text = skillInfo.des;
        panel.arcanePoint.text = skillInfo.point.ToString();
    }

    /// <summary>
    /// 事件组件
    /// </summary>
    protected override void AddComponentEvents()
    {
        
    }
    /// <summary>
    /// 点击事件
    /// </summary>
    private void OnClick(GameObject go)
    {
       
    }

   
    /// <summary>
    /// 关闭界面调用 释放内存
    /// </summary>
    protected override void OnDestroy()
    {
        arcaneInfoMediator = null;
        base.OnDestroy();
    }
}