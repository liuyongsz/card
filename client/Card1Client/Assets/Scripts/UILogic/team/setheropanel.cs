using System;
using PureMVC.Interfaces;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using AssetBundles;
using NetProtocal;
using Spine.Unity;
using DG.Tweening;

/// <summary>
/// 获取控件
/// </summary>
public class setheropanel : BasePanel
{
    public UISprite backBtn;
    public UISprite leftBtn;
    public UISprite rightBtn;
    public UISprite arcaneBtn;
    public UISprite cardBtn;
    public EnhanceScrollView dropScrollView;
    public UIScrollView cardScrollView;
    public UILabel arcaneName;
    public UILabel arcaneDes;
    public UILabel arcanePoint;
    public UILabel cardCount;
    public Animation arcaneAni;
    public Transform cardUI;
    public Transform arcaneUI;
    public UIGrid cardGrid;
    public UIGrid fightGrid;
    public UIInput changeCardName;
    public OnSubmitEx selectInput;
    public UIScrollView cloneScrollView;
}


public class SetHeroMediator : UIMediator<setheropanel>
{
    public setheropanel panel
    {
        get
        {
            return m_Panel as setheropanel;
        }
    }
    private CardInfoListMsg cardInfoList;
    public static SetHeroMediator setHeroMediator;
    private List<TD_Card> cardList = new List<TD_Card>();
    private int dragIndex = 0;
    private bool canDrag = true;
    public TD_Card drapCard;
    public int changeCardId = 0;
    private bool firstInArcaneUI = true;
    private bool firstInCardUI = true;
    private List<object> listObj = new List<object>();

    public SetHeroMediator() : base("setheropanel")
    {
        m_isprop = true;
        RegistPanelCall(NotificationID.SetHeroOpen, OpenPanel);
        RegistPanelCall(NotificationID.SetHeroClose, ClosePanel);
    }

    /// <summary>
    /// 界面显示之前调用
    /// </summary>
    protected override void OnStart(INotification notification)
    {
        if (setHeroMediator == null)
        {
            firstInArcaneUI = true;
            firstInCardUI = true;
            setHeroMediator = Facade.RetrieveMediator("SetHeroMediator") as SetHeroMediator;
        }
        cardInfoList = notification.Body as CardInfoListMsg;
        panel.dropScrollView.sourceCamera = UICamera.currentCamera;
        panel.cardGrid.enabled = true;
        panel.cardGrid.BindCustomCallBack(UpdateCardGrid);
        panel.cardGrid.StartCustom();
        panel.fightGrid.enabled = true;
        panel.fightGrid.BindCustomCallBack(UpdateCardFightGrid);
        panel.fightGrid.StartCustom();
        panel.selectInput.submitExCallBack = OnSubmitCardName;
    }

    /// <summary>
    /// 改变套牌名字后提交验证
    /// </summary>
    void OnSubmitCardName()
    {
        ChangeTeamHeroNameMsg msg = new ChangeTeamHeroNameMsg
        {
            teamId = cardInfoList.teamId,
            heroId = cardInfoList.heroId,
            name = panel.changeCardName.label.text,
        };
        NSocket.GetInstance().SendData(Request.ChangeTeamHeroNameReq, msg);
    }

    /// <summary>
    /// 界面显示调用
    /// </summary> 
    protected override void OnShow(INotification notification)
    {
        TD_Hero hero = HeroConfig.GetItem(cardInfoList.heroConfigId);
        UpdateArcaneInfo(hero);
        cardInfoList = notification.Body as CardInfoListMsg;
        cardInfoList.cardList.Sort((x, y) => y.isFight.CompareTo(x.isFight));
        int fightCount = 0;
        for (int i = 0; i < cardInfoList.cardList.Count; ++i)
        {
            if (cardInfoList.cardList[i].isFight == 1)
                fightCount++;
        }
        panel.cardCount.text = string.Format("{0}/{1}", fightCount, cardInfoList.cardList.Count);
    }
    /// <summary>
    /// 刷新奥义信息
    /// </summary>
    /// <param name="hero"></param>
    void UpdateArcaneInfo(TD_Hero hero)
    {
        panel.changeCardName.label.text = cardInfoList.cardName;
        for (int i = 0; i < hero.arcane_list.Split(';').Length; ++i)
        {
            if (hero.arcane_list.Split(';')[i] == cardInfoList.arcaneId.ToString())
            {
                panel.dropScrollView.startCenterIndex = i;
            }
            UIEventListener.Get(panel.dropScrollView.listEnhanceItems[i].gameObject).onClick = OnClickItem;
            panel.dropScrollView.listEnhanceItems[i].name = hero.arcane_list.Split(';')[i];
        }
        panel.dropScrollView.callBack = ChooseArcane;
    }

    /// <summary>
    /// 刷新卡组信息
    /// </summary>
    /// <param name="hero"></param>
    void UpdateCardTeamInfo(TD_Hero hero)
    {
        for (int i = 0; i < cardInfoList.cardList.Count; ++i)
        {
            TD_Card card = CardConfig.GetItem(cardInfoList.cardList[i].configId);
            card.isFight = cardInfoList.cardList[i].isFight;
            card.isHave = 1;
            cardList.Add(card);
        }

        CardDataMsg info = null;
        for (int i = 0; i < hero.card_list.Split(';').Length; ++i)
        {
            int id = hero.card_list.Split(';')[i].ToInt();
            info = CheckCardIsHave(id);

            if (info != null)
            {
                continue;
            }
            TD_Card card = CardConfig.GetItem(id);
            card.isFight = 0;
            card.isHave = 0;
            cardList.Add(card);
        }

        listObj = new List<object>();
        for (int i = 0; i < cardList.Count; ++i)
            listObj.Add(cardList[i]);

        panel.cardGrid.AddCustomDataList(listObj);

        List<object> list = new List<object>();
        for (int i = 0; i < cardInfoList.cardList.Count; ++i)
        {
            if (cardInfoList.cardList[i].isFight == 1)
                list.Add(cardInfoList.cardList[i]);
        }
        if (list.Count < 4)
        {
            for (int i = 0; i < 4; ++i)
            {
                if (i >= list.Count)
                {
                    CardDataMsg data = new CardDataMsg
                    {
                        configId = i,
                    };
                    list.Add((object)data);
                }
            }
        }
        panel.fightGrid.AddCustomDataList(list);
        list.Clear();

        if (panel.cardGrid.mDataSource.Count % 6 == 0)
        {
            dragIndex = panel.cardGrid.mDataSource.Count / 6;
            dragIndex--;
        }
        else
            dragIndex = Mathf.FloorToInt(panel.cardGrid.mDataSource.Count * 1.0f / 6);
    }
    /// <summary>
    /// 事件组件
    /// </summary>
    protected override void AddComponentEvents()
    {
        UIEventListener.Get(panel.backBtn.gameObject).onClick = OnClick;
        UIEventListener.Get(panel.cardBtn.gameObject).onClick = OnClick;
        UIEventListener.Get(panel.arcaneBtn.gameObject).onClick = OnClick;
        UIEventListener.Get(panel.leftBtn.gameObject).onClick = OnClick;
        UIEventListener.Get(panel.rightBtn.gameObject).onClick = OnClick;
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
        else if (go == panel.cardBtn.gameObject)
        {
            if (panel.cardUI.gameObject.activeSelf)
                return;
            panel.arcaneBtn.transform.localPosition = new Vector3(-177, 481, 0);
            panel.arcaneBtn.transform.localScale = Vector3.one;
            panel.cardBtn.transform.localPosition = new Vector3(174, 478, 0);
            panel.cardBtn.transform.localScale = Vector3.one * 1.2f;
            panel.cardUI.gameObject.gameObject.SetActive(true);
            panel.arcaneUI.gameObject.gameObject.SetActive(false);
            if (firstInCardUI)
            {
                UpdateCardTeamInfo(HeroConfig.GetItem(cardInfoList.heroConfigId));
                firstInCardUI = false;
            }
        }
        else if (go == panel.arcaneBtn.gameObject)
        {
            if (panel.arcaneUI.gameObject.activeSelf)
                return;
            panel.cardBtn.transform.localPosition = new Vector3(174, 478, 0);
            panel.cardBtn.transform.localScale = Vector3.one;
            panel.arcaneBtn.transform.localPosition = new Vector3(-177, 481, 0);
            panel.arcaneBtn.transform.localScale = Vector3.one * 1.2f;
            panel.arcaneUI.gameObject.gameObject.SetActive(true);
            panel.cardUI.gameObject.gameObject.SetActive(false);
        }
        else if (go == panel.leftBtn.gameObject)
        {

            if (!canDrag)
                return;
            if (panel.cardGrid.GetCustomTransItem(0) != null)
                return;
            canDrag = false;
            TimerManager.AddTimer("canDrag", 0.8f, OnFinishedCallback);
            Vector3 temp = panel.cardScrollView.transform.localPosition + new Vector3(1560, 0, 0);
            SpringPanel.Begin(panel.cardScrollView.panel.gameObject, temp, 10f);
        }
        else if (go == panel.rightBtn.gameObject)
        {
            if (!canDrag)
                return;
            Vector3 temp = panel.cardScrollView.transform.localPosition;
            if (temp.x == 0 - dragIndex * 1560)
                return;
            canDrag = false;
            TimerManager.AddTimer("canDrag", 0.8f, OnFinishedCallback);
            temp = panel.cardScrollView.transform.localPosition - new Vector3(1560, 0, 0);
            SpringPanel.Begin(panel.cardScrollView.panel.gameObject, temp, 10f);
        }
    }
    void OnFinishedCallback()
    {
        canDrag = true;
    }
    /// <summary>
    /// 刷新上阵卡牌信息
    /// </summary>
    /// <param name="item"></param>
    void UpdateCardFightGrid(UIGridItem item)
    {
        if (item == null || item.oData == null || item.mScripts == null)
            return;
        CardDataMsg info = item.oData as CardDataMsg;

        UILabel nofight = item.mScripts[0] as UILabel;
        UILabel fight = item.mScripts[1] as UILabel;
        UILabel cardName = item.mScripts[2] as UILabel;
        UITexture head = item.mScripts[3] as UITexture;
        UILabel skillType = item.mScripts[4] as UILabel;
        nofight.gameObject.SetActive(info.configId < 4);
        fight.gameObject.SetActive(info.configId > 4);
        item.name = "fight" + item.miCurIndex;
        if (fight.gameObject.activeSelf)
        {
            TD_Card card = CardConfig.GetItem(info.configId);
            cardName.text = card.name;
            LoadSprite.LoaderCard(head, card.res);
            skillType.text = UtilTools.GetSKillTypeName((int)card.type);
        }
    }

    /// <summary>
    /// 更换上阵卡牌
    /// </summary>
    /// <param name="card"></param>
    /// <param name="index"></param>
    public void ChangeFightCard(int index)
    {
        CardDataMsg info = panel.fightGrid.GetCustomDataItem(index) as CardDataMsg;
        CardMsg msg = null;
        // 此位置无上阵卡牌
        if (info.configId < 4)
        {
            msg = new CardMsg
            {
                teamUUid = cardInfoList.teamId,
                teamHeroUUid = cardInfoList.heroId,
                oldCardId = 0,
                newCardId = changeCardId,
            };
        }
        // 此位置有上阵卡牌，进行替换
        else
        {
            msg = new CardMsg
            {
                teamUUid = cardInfoList.teamId,
                teamHeroUUid = cardInfoList.heroId,
                oldCardId = info.configId,
                newCardId = changeCardId,
            };
            TD_Card card = null;
            for (int i = 0; i < listObj.Count; ++i)
            {
                card = listObj[i] as TD_Card;
                if (card.id == info.configId)
                {
                    card.isFight = 0;
                    panel.cardGrid.UpdateCustomData(card);
                }
            }
            HeroTeamMediator.heroTeamMediator.dropInfo.skillID.Remove(info.configId);
        }
        HeroTeamMediator.heroTeamMediator.dropInfo.skillID.Add(changeCardId);
        NSocket.GetInstance().SendData(Request.CardEnterTeamReq, msg);
        info.configId = changeCardId;
        info.isFight = 1; // 上阵的卡牌
        drapCard.isFight = 1;
        int fightCount = UtilTools.IntParse(panel.cardCount.text.Split('/')[0]) + 1;
        panel.cardCount.text = string.Format("{0}/{1}", fightCount, cardInfoList.cardList.Count);
        panel.fightGrid.UpdateCustomData(info);
        panel.cardGrid.UpdateCustomData(drapCard);
        HeroTeamMediator.heroTeamMediator.panel.cardGrid.UpdateCustomData(HeroTeamMediator.heroTeamMediator.dropInfo);
    }

    /// <summary>
    /// 刷新卡牌信息
    /// </summary>
    /// <param name="item"></param>
    void UpdateCardGrid(UIGridItem item)
    {
        if (item == null || item.oData == null || item.mScripts == null)
            return;
        TD_Card info = item.oData as TD_Card;
        UITexture head = item.mScripts[0] as UITexture;
        SymbolLabel skill1Des = item.mScripts[1] as SymbolLabel;
        SymbolLabel skill2Des = item.mScripts[2] as SymbolLabel;
        UILabel cardName = item.mScripts[3] as UILabel;
        UILabel skillType = item.mScripts[4] as UILabel;
        UISprite isFight = item.mScripts[5] as UISprite;
        LoadSprite.LoaderCard(head, info.res);
        item.onClick = ShowCardInfoPanel;
        isFight.gameObject.SetActive(info.isFight == 1);
        cardName.text = info.name;
        skillType.text = UtilTools.GetSKillTypeName((int)info.type);
        skill1Des.text = "4444444{01}4444";
        skill2Des.text = "4444444{01}4444";
    }
    /// <summary>
    /// 显示技能卡牌信息
    /// </summary>
    /// <param name="item"></param>
    void ShowCardInfoPanel(UIGridItem item)
    {
        if (item == null || item.oData == null || item.mScripts == null)
            return;
        ResourceManager.Instance.LoadPrefab("cardinfopanel", CardInfoPanelComplete, null, item);
    }

    void CardInfoPanelComplete(string abName, GameObject obj, object param)
    {
        UIGridItem item = param as UIGridItem;
        Main.blurCamera.gameObject.SetActive(true);
        Main.CameraUI.GetComponent<Blur>().enabled = true;
        obj.transform.parent = Main.blurCamera.transform;
        obj.transform.position = item.transform.position;
        obj.transform.localScale = Vector3.one;
        obj.GetComponent<CardInfoPanel>().ShowCardInfo(item.oData as TD_Card);
    }
   
    public void SetHideCardTeam(int index,bool isHide)
    {
        panel.cardGrid.GetCustomTransItem(index).gameObject.SetActive(isHide);
    }
    /// <summary>
    /// 判断已拥有卡牌
    /// </summary>
    /// <param name="cardID"></param>
    CardDataMsg CheckCardIsHave(int cardID)
    {
        for (int i = 0; i < cardInfoList.cardList.Count; ++i)
        {
            if(cardInfoList.cardList[i].configId == cardID)
            {
                return cardInfoList.cardList[i];
            }
        }
        return null;
    }
    /// <summary>
    /// 更换奥义播放卸载奥义动画
    /// </summary>
    /// <param name="go"></param>
    void OnClickItem(GameObject go)
    {
        if (cardInfoList.arcaneId == UtilTools.IntParse(go.name))
            return;
        panel.arcaneAni.Play("UIEffect101_unload");
        TimerManager.AddTimer("UIEffect101_unload", 0.5f, PlayOver, go);
        
    }
    /// <summary>
    /// 播放结束回调
    /// </summary>
    /// <param name="args"></param>
    void PlayOver(params object[] args)
    {
        panel.arcaneAni.gameObject.SetActive(false);
        GameObject go = args[0] as GameObject;
        go.GetComponent<MyNGUIEnhanceItem>().OnClickNGUIItem(go);
    }

    
    /// <summary>
    /// 选择奥义
    /// </summary>
    /// <param name="go"></param>
    void ChooseArcane(GameObject go)
    {
        panel.arcaneAni.gameObject.SetActive(true);
        go.GetComponent<Animation>().Play("aoyi_scale");
        panel.arcaneAni.Play("UIEffect101_load");
        cardInfoList.arcaneId = UtilTools.IntParse(go.name);
        TD_Skill skillInfo = SkillConfig.GetItem(cardInfoList.arcaneId);
        if(skillInfo == null)
        {
            Debug.LogError("缺少配置");
            return;
        }
        panel.arcaneName.text = skillInfo.name;
        panel.arcaneDes.text = skillInfo.des;
        panel.arcanePoint.text = skillInfo.point.ToString();
        if (HeroTeamMediator.heroTeamMediator.dropInfo != null)
            HeroTeamMediator.heroTeamMediator.dropInfo.arcaneId = cardInfoList.arcaneId;
        if (firstInArcaneUI)
            return;
        firstInArcaneUI = false;
        ArcaneMsg msg = new ArcaneMsg
        {
            teamUUid = cardInfoList.teamId,
            teamHeroUUid = cardInfoList.heroId,
            arcaneId = cardInfoList.arcaneId,
        };
        NSocket.GetInstance().SendData(Request.ChangeArcane, msg);
    }
    /// <summary>
    /// 关闭界面调用 释放内存
    /// </summary>
    protected override void OnDestroy()
    {
        if (HeroTeamMediator.heroTeamMediator.dropInfo.heroUUId == 0)
            HeroTeamMediator.heroTeamMediator.AddNewCardTeam(cardInfoList);
        listObj.Clear();
        cardInfoList.cardList.Clear();
        cardInfoList = null;
        cardList.Clear();
        setHeroMediator = null;
        base.OnDestroy();
    }
}