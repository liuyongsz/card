using System;
using PureMVC.Interfaces;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using AssetBundles;
using UnityEngine.Events;
using NetProtocal;

public class choosecardpanel : BasePanel
{
    public UIGrid cardGrid;
    public Transform CardItem;

    public UISprite sureBtn;
    public UISprite replaceBtn;
    public UIScrollView ScrollView;
}

public class ChooseCardMediator : UIMediator<choosecardpanel>
{
    public ChooseCardMediator() : base("choosecardpanel")
    {
        m_isprop = false;
        RegistPanelCall(NotificationID.ChooseCardOpen, OpenPanel);
        RegistPanelCall(NotificationID.ChooseCardClose, ClosePanel);

        RegistPanelCall(NotificationID.ChooseCard_ReplaceCard, OnRec_ReplaceCard);
    }

    protected override void OnShow(INotification notification)
    {

        m_Panel.cardGrid.BindCustomCallBack(UpdateHeroGrid);
        m_Panel.cardGrid.StartCustom();

        if(null != FightProxy.Instance.RoomInfo)
        {
            bool isMe = FightProxy.Instance.RoomInfo.frole.pid == PlayerProxy.Instance.Info.pid;

            List<object> datas = new List<object>();
            if(isMe)
            {
                if (FightProxy.Instance.RoomInfo.frole.cards == null)
                {
                    Debug.LogError("frole.cards is null");
                    return;
                }

                int cnt = FightProxy.Instance.RoomInfo.frole.cards.card.Count;
                for (int i = 0; i < cnt; i++)
                    datas.Add(FightProxy.Instance.RoomInfo.frole.cards.card[i]);
            }
            else
            {
                if (FightProxy.Instance.RoomInfo.srole.cards == null)
                {
                    Debug.LogError("srole.cards is null");
                    return;
                }

                int cnt = FightProxy.Instance.RoomInfo.srole.cards.card.Count;
                for (int i = 0; i < cnt; i++)
                    datas.Add(FightProxy.Instance.RoomInfo.srole.cards.card[i]);
            }

            m_Panel.cardGrid.AddCustomDataList(datas);
        }
        else
        {
            //List<object> datas = new List<object>();
            //int cnt = 4;
            //for (int i = 0; i < cnt; i++)
            //{
            //    FightCardMsg itmData = new FightCardMsg();
            //    itmData.cardId = 1001100;
            //    datas.Add(itmData);

            //    m_Panel.cardGrid.AddCustomDataList(datas);
            //}
        }

        m_Panel.ScrollView.ResetPosition();
    }

    protected override void AddComponentEvents()
    {
        UIEventListener.Get(m_Panel.sureBtn.gameObject).onClick = OnClick_SureBtn;
        UIEventListener.Get(m_Panel.replaceBtn.gameObject).onClick = OnClick_ReplaceBtn;
    }

    private void OnClick_SureBtn(GameObject obj)
    {
        FightProxy.Instance.SendReplaceCardReq(false);
    }

    private void OnClick_ReplaceBtn(GameObject obj)
    {
        FightProxy.Instance.SendReplaceCardReq(true);
    }

    /// <summary>刷新英雄信息</summary>
    /// <param name="item"></param>
    void UpdateHeroGrid(UIGridItem item)
    {
        if (item == null || item.oData == null || item.mScripts == null)
            return;

        //item.onClick = SetHeroItem;
        FightCardMsg info = item.oData as FightCardMsg;
        UITexture texture = item.mScripts[0] as UITexture;
        UILabel name = item.mScripts[1] as UILabel;
        UILabel leftNumLab = item.mScripts[2] as UILabel;
        UILabel rightNumLab = item.mScripts[3] as UILabel;

        TD_Card card = CardConfig.GetItem(info.cardId);
        if (card == null)
        {
            Debug.LogError("no this card cfg:" + info.cardId);
            return;
        }
            
        name.text = card.name;
        LoadSprite.LoaderCard(texture,card.res);
    }

    private void OnRec_ReplaceCard(INotification noti)
    {
        if (null == m_Panel)
            return;

        FightCardsMsg msg = noti.Body as FightCardsMsg;

        bool isMe = FightProxy.Instance.RoomInfo.frole.pid == PlayerProxy.Instance.Info.pid;

        List<object> datas = new List<object>();
        if (isMe)
        {
            int cnt = FightProxy.Instance.RoomInfo.frole.cards.card.Count;
            for (int i = 0; i < cnt; i++)
                datas.Add(FightProxy.Instance.RoomInfo.frole.cards.card[i]);

            m_Panel.cardGrid.ClearCustomData();
            m_Panel.cardGrid.AddCustomDataList(datas);
            m_Panel.ScrollView.ResetPosition();
        }
        else
        {
            int cnt = FightProxy.Instance.RoomInfo.srole.cards.card.Count;
            for (int i = 0; i < cnt; i++)
                datas.Add(FightProxy.Instance.RoomInfo.srole.cards.card[i]);
        }
    }

    protected override void OnDestroy()
    {
        base.OnDestroy();
    }
}
