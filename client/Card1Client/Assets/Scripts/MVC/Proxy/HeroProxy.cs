using PureMVC.Interfaces;
using PureMVC.Patterns;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using NetProtocal;

public class HeroProxy : Proxy<HeroProxy>
{

    public CardListMsg cardListMsg;
    public HeroProxy()
        : base(ProxyID.HeroTeam)
    {
        //返回小队英雄信息
        NetDataMgr.Instance.Mrgs.Add(Respone.CardTeamHeroRes, new NetParam(typeof(HeroListMsg), OnGetHeroTeamInfo));
        NetDataMgr.Instance.Mrgs.Add(Respone.CardTeamList, new NetParam(typeof(CardListMsg), OnRecGetTeamList));
        NetDataMgr.Instance.Mrgs.Add(Respone.ChangeName, new NetParam(typeof(CardTeamInfo), OnRecChangeTeamName));
        NetDataMgr.Instance.Mrgs.Add(Respone.TeamHeraoCardListRes, new NetParam(typeof(CardInfoListMsg), OnGetHeroCard));
        NetDataMgr.Instance.Mrgs.Add(Respone.ChangeTeamHeroNameRes, new NetParam(typeof(ChangeTeamHeroNameMsg), OnChangeTeamHeroNameMsg));
        NetDataMgr.Instance.Mrgs.Add(Respone.HeroListRes, new NetParam(typeof(HeroInfoListMsg), OnGetHeroInfoList));
        NetDataMgr.Instance.Mrgs.Add(Respone.TeamListRes, new NetParam(typeof(TeamListMsg), OnGetTeamListt));
    }

    /// <summary>
    /// 获取小队英雄
    /// </summary>
    /// <param name="obj"></param>
    void OnGetHeroTeamInfo(object obj)
    {
        if (HeroTeamMediator.heroTeamMediator != null)
        {
            HeroListMsg info = (HeroListMsg)obj;
            HeroTeamMediator.heroTeamMediator.UpdateTeamInfo(info);
            return;
        }
        Facade.SendNotification(NotificationID.HeroTeamOpen, obj);
    }

    /// <summary>
    /// 修改队名回调
    /// </summary>
    /// <param name="obj"></param>
    void OnRecChangeTeamName(object obj)
    {
        CardTeamInfo info = (CardTeamInfo)obj;
        if (HeroTeamMediator.heroTeamMediator != null && HeroTeamMediator.heroTeamMediator.heroListMsg.id == info.id)
        {
            HeroTeamMediator.heroTeamMediator.panel.teamName.text = info.name;
            HeroTeamMediator.heroTeamMediator.heroListMsg.teamName = info.name;
        }
    }

    /// <summary>
    /// 获取英雄奥义 卡牌信息
    /// </summary>
    /// <param name="obj"></param>
    void OnGetHeroCard(object obj)
    {
        CardInfoListMsg info = (CardInfoListMsg)obj;
        Facade.SendNotification(NotificationID.SetHeroOpen, info);
    }
    /// <summary>
    /// 返回小队List
    /// </summary>
    private void OnRecGetTeamList(object obj)
    {
        cardListMsg = null;
        cardListMsg = (CardListMsg)obj;
    }

    /// <summary>
    /// 返回套牌名字
    /// </summary>
    private void OnChangeTeamHeroNameMsg(object obj)
    {
        ChangeTeamHeroNameMsg changeTeamHeroNameMsg = (ChangeTeamHeroNameMsg)obj;
        if (SetHeroMediator.setHeroMediator == null)
            return;
        SetHeroMediator.setHeroMediator.panel.changeCardName.value = changeTeamHeroNameMsg.name;
        HeroTeamMediator.heroTeamMediator.dropInfo.cardTeamName = changeTeamHeroNameMsg.name;
        HeroTeamMediator.heroTeamMediator.panel.cardGrid.UpdateCustomData(HeroTeamMediator.heroTeamMediator.dropInfo);
    }

    /// <summary>
    /// 返回拥有英雄列表
    /// </summary>
    private void OnGetHeroInfoList(object obj)
    {
        HeroInfoListMsg heroInfoListMsg = (HeroInfoListMsg)obj;
        Facade.SendNotification(NotificationID.SelectRoleOpen, heroInfoListMsg);
       
    }

    /// <summary>
    /// 返回拥有的小队列表
    /// </summary>
    private void OnGetTeamListt(object obj)
    {
        Facade.SendNotification(NotificationID.TeamListOpen, obj);

    }
}
