using System;
using PureMVC.Interfaces;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using AssetBundles;
using UnityEngine.Events;
using DG.Tweening;
using NetProtocal;

public class fightpanel : BasePanel
{
    public UITexture myTurnWarnPan;
    public UITexture opTurnWarnPan;
    public Transform panMyCard;
    public Transform panOpCard;
    public Transform panAddPower;

    public UILabel overLab;
    public UILabel turnLab;
    public UILabel countLab;
    public UILabel arcaneLab;
    public UILabel mynameLab;
    public UILabel opnameLab;
    public UILabel arcaneOpLab;

    public Transform btnTurn;

    public Transform backBtn;

    public Transform Card0;
    public Transform Card1;
    public Transform Card2;
    public Transform Card3;
    public Transform Card4;
    public Transform Card5;

    public Transform CardOp0;
    public Transform CardOp1;
    public Transform CardOp2;
    public Transform CardOp3;
    public Transform CardOp4;
    public Transform CardOp5;

    public Transform addExpItem0;
    public Transform addExpItem1;
    public Transform addExpItem2;
    public Transform addExpItem3;
    public Transform addExpItem4;
    public Transform addExpItem5;

    public void Update()
    {
        if(null != FightPanelMediator.Instance)
            FightPanelMediator.Instance.SortAllCardPostion();
    }
}

public class FightPanelMediator : UIMediator<fightpanel>
{
    public static FightPanelMediator Instance;

    private Vector3 AddExpPan_InitPosition;
    private Vector3 OpPan_InitPosition;

    private int InitIsMyAtk = 0;
    private string mTimer_CountDown = "FightPanelMediator_CountDown";

    private int mCountTimer = 0;
    //private int mMyLastTimer = 0;
    //private int mOpLastTimer = 0;
    private List<FightPanel_CardItem> mTeamCards;
    private List<FightPanel_CardItem> mTeamCardsFreeQueque;
    private List<FightPanel_CardItem> mTeamBCards;

    private List<FightPanel_CardItem> mInitTeamCards;
    private List<FightPanel_CardItem> mInitTeamBCards;

    private List<Vector3> mTeamAInitPosition;
    private List<Vector3> mTeamBInitPosition;
    private List<Transform> mExp;
    private Dictionary<Transform, FightPanel_CardItem> exp_cardItem;

    private Tweener mExpTween;
    private bool mShowExpan;

    private bool mPanOpCardInTween;

    private List<EffectVO> mOpenEffectList;
    public FightPanelMediator() : base("fightpanel")
    {
        m_isprop = false;
        RegistPanelCall(NotificationID.FightOpen, OpenPanel);
        RegistPanelCall(NotificationID.FightClose, ClosePanel);

        RegistPanelCall(NotificationID.Fihgt_ShowOpPan, OnRec_ShowOpPan);
        RegistPanelCall(NotificationID.Fight_ShowExpPan, OnRec_ShowExPan);

        RegistPanelCall(NotificationID.Fight_WarnMyAtk, OnRec_WarnMyAtk);
        RegistPanelCall(NotificationID.Fight_WarnOpAtk, OnRec_WarnOpAtk);

        RegistPanelCall(NotificationID.Fight_Effect, OnRec_FightEffect);
    }

    protected override void OnShow(INotification notification)
    {
        Instance = this;
        m_Panel.overLab.gameObject.SetActive(false);
        m_Panel.panAddPower.gameObject.SetActive(false);

        UIEventListener.Get(m_Panel.backBtn.gameObject).onClick = OnClick_BackBtn;

        List<Transform> exps = new List<Transform> {
            m_Panel.addExpItem0,
            m_Panel.addExpItem1,
            m_Panel.addExpItem2,
            m_Panel.addExpItem3,
            m_Panel.addExpItem4,
            m_Panel.addExpItem5};

        int len = exps.Count;
        for (int n = 0; n < len; n++)
        {
            UIEventListener.Get(exps[n].gameObject).onDrop = OnDrop_ExpItem;
            UIEventListener.Get(exps[n].gameObject).onHover = OnHover_ExpItem;
        }

        List<Transform> cards = new List<Transform> {
            m_Panel.Card0,
            m_Panel.Card1,
            m_Panel.Card2,
            m_Panel.Card3,
            m_Panel.Card4,
            m_Panel.Card5,
            m_Panel.CardOp0,
            m_Panel.CardOp1,
            m_Panel.CardOp2,
            m_Panel.CardOp3,
            m_Panel.CardOp4,
            m_Panel.CardOp5};

        int cnt = cards.Count;

        bool haveData = null != FightProxy.Instance.RoomInfo;

        int fLen = 0;
        int sLen = 0;
        bool isMe = true;
        List<FightCardMsg> teamACardMsg = null;
        List<FightCardMsg> teamBCardMsg = null;
        mExp = new List<Transform>();
        exp_cardItem = new Dictionary<Transform, FightPanel_CardItem>();

        if (haveData)
        {
            isMe = FightProxy.Instance.RoomInfo.frole.pid == PlayerProxy.Instance.Info.pid;

            m_Panel.mynameLab.text = FightProxy.Instance.RoomInfo.frole.name;
            m_Panel.opnameLab.text = FightProxy.Instance.RoomInfo.srole.name;

            if (isMe)
            {
                teamACardMsg = FightProxy.Instance.RoomInfo.frole.cards.card;
                teamBCardMsg = FightProxy.Instance.RoomInfo.srole.cards.card;

            }
            else
            {
                teamACardMsg = FightProxy.Instance.RoomInfo.srole.cards.card;
                teamBCardMsg = FightProxy.Instance.RoomInfo.frole.cards.card;
            }

            fLen = teamACardMsg.Count;
            sLen = teamBCardMsg.Count;

        }

        mTeamCards = new List<FightPanel_CardItem>();
        mTeamBCards = new List<FightPanel_CardItem>();

        mInitTeamCards = new List<FightPanel_CardItem>();
        mInitTeamBCards = new List<FightPanel_CardItem>();

        mTeamCardsFreeQueque = new List<FightPanel_CardItem>();
        mTeamAInitPosition = new List<Vector3>();
        mTeamBInitPosition = new List<Vector3>();

        for (int i = 0; i < cnt; i++)
        {
            FightPanel_CardItem cardItem = ScriptHelper.BindField(cards[i], "FightPanel_CardItem") as FightPanel_CardItem;
            int index = i % 6;

            if(Define.VSTest)
            {
                FightCardMsg tmsg = new FightCardMsg();
                tmsg.index = index;
                cardItem.SerData = tmsg;
            }

            if(i < 6)
            {
                if (haveData && index < fLen)
                    mTeamCards.Add(cardItem);
                
                if(!haveData)
                    mTeamCards.Add(cardItem);

                mInitTeamCards.Add(cardItem);
                mTeamAInitPosition.Add(cardItem.transform.position);

                cardItem.ExpItem = exps[i].transform;
                mExp.Add(exps[i].transform);
                exp_cardItem[exps[i].transform] = cardItem;

                if (haveData && index >= fLen)
                    exps[i].gameObject.SetActive(false);
            }

            if (index < fLen && i < 6)
            {
                if (haveData)
                     cardItem.SerData = teamACardMsg[i];
            }
            else if(index >= fLen && i < 6)
            {
                if (haveData)
                    mTeamCardsFreeQueque.Add(cardItem);
            }
            else if (i >= 6)
            {
                UICardDrag dragItm = cardItem.GetComponent<UICardDrag>();
                dragItm.IsCustomDrag = false;
                dragItm.CanClickTween = false;
               
                mTeamBInitPosition.Add(cardItem.transform.position);
                mInitTeamBCards.Add(cardItem);

                if (haveData && index < sLen)
                {
                    mTeamBCards.Add(cardItem);
                    cardItem.SerData = teamBCardMsg[index];
                }
                
                if(!haveData)
                    mTeamBCards.Add(cardItem);
            }

            if (haveData)
                cardItem.UpdateDisplay();
        }

        AddExpPan_InitPosition = m_Panel.panAddPower.position;
        OpPan_InitPosition = m_Panel.panOpCard.position;

        if(Define.VSTest)
        {
            m_Panel.myTurnWarnPan.gameObject.SetActive(false);
            m_Panel.opTurnWarnPan.gameObject.SetActive(false);
        }
        else
        {
            m_Panel.myTurnWarnPan.gameObject.SetActive(InitIsMyAtk == -1);
            m_Panel.opTurnWarnPan.gameObject.SetActive(InitIsMyAtk == 1);

            mCountTimer = 90;
            string warstr = InitIsMyAtk == -1 ? "FightMyTurn" : "FightOpTurn";
            m_Panel.turnLab.text = TextManager.GetUIString(warstr);
            m_Panel.countLab.text = mCountTimer.ToString();

            m_Panel.btnTurn.gameObject.SetActive(InitIsMyAtk == -1);

            if (InitIsMyAtk == -1)
                Tween_MyTrunWarn();
            else
                Tween_OpTrunWarn();
        }

        UpdateArcane();

        if(null != mOpenEffectList)
        {
            int eftLen = mOpenEffectList.Count;
            for (int ei = 0; ei < eftLen; ei++)
            {
                DoEffect(mOpenEffectList[ei]);
            } 
        }

        TimerManager.AddTimerRepeat(mTimer_CountDown, 1f, OnTimer_CountDown);
    }

    /// <summary>点击回城按钮</summary>
    /// <param name="obj"></param>
    private void OnClick_BackBtn(GameObject obj)
    {
        GameProxy.Instance.GotoMainCity();
    }

    private void OnRec_ShowOpPan(INotification noti)
    {
        bool show = (bool)noti.Body;

        ShowOpPan(show);
    }

    private void OnRec_ShowExPan(INotification noti)
    {
        //mShowExpan = (bool)noti.Body;

        Tween_AddExp((bool)noti.Body);
    }

    public void ShowOpPan(bool show = true)
    {
        if (mPanOpCardInTween)
            return;

        if (show)
            m_Panel.panOpCard.DOMoveY(OpPan_InitPosition.y - 0.56f, 0.5f).OnComplete(OnTween_OpPanComplete);
        else
            m_Panel.panOpCard.DOMoveY(OpPan_InitPosition.y, 0.5f).OnComplete(OnTween_OpPanComplete);
    }

    private void  OnTween_OpPanComplete()
    {
        mPanOpCardInTween = false;
    }

    private void OnTimer_CountDown()
    {
        if (mCountTimer > 0)
        {
            mCountTimer -= 1;
            if (mCountTimer <= 0)
            {
                mCountTimer = 0;
            }

            m_Panel.countLab.text = mCountTimer.ToString();
        }
    }

    private void Tween_AddExp(bool to = true)
    {
        if (null != mExpTween)
            return;

        m_Panel.panAddPower.gameObject.SetActive(true);

        Vector3 toPos = AddExpPan_InitPosition;
        Vector3 fromPos = toPos.Clone();

        if (to)
        {
            fromPos.y -= 0.8f;
            m_Panel.panAddPower.position = fromPos;
        }
        else
        {
            toPos.y -= 0.8f;
        }

        mShowExpan = to;

        mExpTween = m_Panel.panAddPower.DOMoveY(toPos.y, 0.5f).OnComplete(()=>
        {
            mExpTween = null;
        });
    }

    protected override void AddComponentEvents()
    {
        UIEventListener.Get(m_Panel.btnTurn.gameObject).onClick = OnClick_TurnBtn;
    }

    private void OnDrop_ExpItem(GameObject obj, GameObject dragObj)
    {
        if (PVPManager.IsMyTurn || Define.TestMsg)
        {
            FightPanel_CardItem cdItm = UICardDrag.DragObject.GetComponent<FightPanel_CardItem>();
            if (null != cdItm && cdItm.SerData != null && cdItm.SerData.pid > 0)
            {
                FightPanel_CardItem toItm = exp_cardItem[obj.transform];

                if(toItm != cdItm)
                    FightProxy.Instance.SendUseCard(cdItm.SerData.index, UseType.ExpType, toItm.SerData.index);
            }
        }
    }

    private void OnHover_ExpItem(GameObject obj, bool state)
    {
        
    }

    private void OnRec_WarnMyAtk(INotification noti)
    {
        if (null == m_Panel)
        {
            InitIsMyAtk = -1;
            return;
        }

        m_Panel.btnTurn.gameObject.SetActive(true);
        m_Panel.myTurnWarnPan.gameObject.SetActive(true);
        m_Panel.opTurnWarnPan.gameObject.SetActive(false);

        mCountTimer = 90;
        m_Panel.turnLab.text = TextManager.GetUIString("FightMyTurn");
        m_Panel.countLab.text = mCountTimer.ToString();

        Tween_MyTrunWarn();
    }

    private void OnRec_WarnOpAtk(INotification noti)
    {
        if (null == m_Panel)
        {
            InitIsMyAtk = 1;
            return;
        }


        m_Panel.btnTurn.gameObject.SetActive(false);
        m_Panel.myTurnWarnPan.gameObject.SetActive(false);
        m_Panel.opTurnWarnPan.gameObject.SetActive(true);

        mCountTimer = 90;
        m_Panel.turnLab.text = TextManager.GetUIString("FightOpTurn");
        m_Panel.countLab.text = mCountTimer.ToString();

        Tween_OpTrunWarn();
    }

    /// <summary>缓动 地方行动提示</summary>
    private void Tween_OpTrunWarn()
    {
        m_Panel.opTurnWarnPan.transform.localScale = Vector3.one;

        m_Panel.opTurnWarnPan.gameObject.SetActive(true);
        Tweener tween = m_Panel.opTurnWarnPan.transform.DOMove(m_Panel.turnLab.transform.position,1f).OnComplete(() =>
        {
            m_Panel.opTurnWarnPan.gameObject.SetActive(false);
        });

        tween.SetDelay(1f);

        m_Panel.opTurnWarnPan.transform.DOScale(Vector3.zero, 1f);
    }

    /// <summary>缓动 我方行动提示</summary>
    private void Tween_MyTrunWarn()
    {
        m_Panel.myTurnWarnPan.transform.localScale = Vector3.one;

        m_Panel.myTurnWarnPan.gameObject.SetActive(true);
        Tweener tween = m_Panel.myTurnWarnPan.transform.DOMove(m_Panel.turnLab.transform.position, 1f).OnComplete(() =>
        {
            m_Panel.myTurnWarnPan.gameObject.SetActive(false);
        });

        tween.SetDelay(1f);

        m_Panel.myTurnWarnPan.transform.DOScale(Vector3.zero, 1f);
    }

    private void OnRec_FightEffect(INotification noti)
    {
        if (null == m_Panel)
        {
            if (mOpenEffectList == null)
                mOpenEffectList = new List<EffectVO>();

            mOpenEffectList.Add(noti.Body as EffectVO);
            return;
        }

        EffectVO vo = noti.Body as EffectVO;
        DoEffect(vo);
    }

    private void DoEffect(EffectVO vo)
    {
        int cnt;
        FightPanel_CardItem cdItm;

        if (vo.Type == TargetType.Role)
        {
            if(vo.RoleProp == RolePropType.GameOver)
            {
                string warn =  vo.Value == PlayerProxy.Instance.Info.pid ? "我方胜利" : "敌方胜利";
                m_Panel.overLab.text = warn;
                m_Panel.overLab.gameObject.SetActive(true);
            }

            //获取额外卡牌
            if (vo.RoleProp == RolePropType.ExtractCard && vo.CardItem != null)
            {
                if (vo.IsMe || Define.VSTest)
                {
                    FightPanel_CardItem cdItm0 = GetCardItem(vo.IsMe);
                    if (cdItm0 != null)
                    {
                        AddCard(cdItm0);

                        cdItm0.SerData = vo.CardItem;

                        Vector3 pos = cdItm0.transform.position.Clone();
                        pos.x = 1.3f;
                        cdItm0.transform.position = pos;

                        if(Define.NoAni)
                        {
                            cdItm0.transform.position = mTeamAInitPosition[cdItm0.NoShowIndex];
                            PVPManager.Instance.On_DoMoveNextEffect(true);
                        }
                        else
                        {
                            cdItm0.transform.DOMove(mTeamAInitPosition[cdItm0.NoShowIndex], 0.5f).OnComplete(() =>
                            {
                                PVPManager.Instance.On_DoMoveNextEffect(true);
                            });
                        }
                    }
                }
                else
                {
                    FightPanel_CardItem cdItm0 = GetCardItem(vo.IsMe);
                    if (cdItm0 != null)
                    {
                        cdItm0.SerData = vo.CardItem;
                        cdItm0.gameObject.SetActive(true);
                        cdItm0.transform.position = mTeamBInitPosition[cdItm0.NoShowIndex];
                    }

                    UpdateCardBPostion();
                    PVPManager.Instance.On_DoMoveNextEffect(true);
                }
            }
            else if (vo.IsMe && vo.RoleProp == RolePropType.CreateCard)
            {
                cdItm = mTeamCardsFreeQueque[0];

                AddCard(cdItm);

                Vector3 pos = cdItm.transform.position.Clone();
                pos.x = 1.2f;
                cdItm.transform.position = pos;

                UpdateCardAPostion();
                PVPManager.Instance.On_DoNextEffect(true);
            }
            else if (!vo.IsMe && vo.RoleProp == RolePropType.CreateCard)
            {
                cdItm = GetCardItem(vo.IsMe);

                if (cdItm != null)
                {
                    cdItm.SerData = vo.CardItem;
                    cdItm.gameObject.SetActive(true);

                    cdItm.transform.position = mTeamBInitPosition[cdItm.NoShowIndex];
                    UpdateCardBPostion();
                    PVPManager.Instance.On_DoNextEffect(true);
                }
            }
            else if (vo.IsMe && vo.RoleProp == RolePropType.RemoveCard)
            {
                cnt = mTeamCards.Count;
                cdItm = GetCardItem(vo.IsMe, vo.Value);
                Debug.LogError("Remove MyCard:" + vo.Value);

                if (null != cdItm)
                {
                    RemoveCard(cdItm);

                    UpdateCardAPostion();
                    PVPManager.Instance.On_DoNextEffect(true);
                }
            }
            else if (!vo.IsMe && vo.RoleProp == RolePropType.RemoveCard)
            {
                cnt = mTeamCards.Count;
                cdItm = GetCardItem(vo.IsMe, vo.Value);

                if (null != cdItm)
                {
                    cdItm.gameObject.SetActive(false);

                    UpdateCardBPostion();
                    PVPManager.Instance.On_DoNextEffect(true);
                }
            }
            else
            {
                PVPManager.Instance.On_DoNextEffect(true);
            }
        }
        else if (vo.Type == TargetType.Card)
        {
            if (vo.IsMe)
            {
                int ct = 0;
                ct = mTeamCards.Count;
                FightPanel_CardItem cdItm0 = GetCardItem(vo.IsMe, vo.Target.Target);

                if (null != cdItm0)
                {
                    if (vo.CardProp == CardPropType.Exp)
                    {
                        cdItm0.SerData.exp = vo.Value;

                        AddCard(cdItm0);

                        cdItm0.UpdateDisplay();

                        UpdateCardAPostion();
                        PVPManager.Instance.On_DoNextEffect(true);
                    }
                }
            }
            else
            {
                int ct = 0;
                ct = mTeamBCards.Count;

                FightPanel_CardItem cdItm1 = GetCardItem(vo.IsMe, vo.Target.Target);

                if (null != cdItm1)
                {
                    if (vo.CardProp == CardPropType.Exp)
                    {
                        cdItm1.SerData.exp = vo.Value;
                        cdItm1.gameObject.SetActive(true);
                        cdItm1.UpdateDisplay();

                        UpdateCardBPostion();
                        PVPManager.Instance.On_DoNextEffect(true);
                    }
                }
            }
        }
    }

    /// <summary>添加卡牌</summary>
    /// <param name="cdItm"></param>
    public void AddCard(FightPanel_CardItem cdItm)
    {
        if (mTeamCards.IndexOf(cdItm) == -1)
            mTeamCards.Add(cdItm);

        if (mTeamCardsFreeQueque.IndexOf(cdItm) > -1)
            mTeamCardsFreeQueque.Remove(cdItm);

        cdItm.gameObject.SetActive(true);
    }

    /// <summary>移除卡牌</summary>
    /// <param name="cdItm"></param>
    public void RemoveCard(FightPanel_CardItem cdItm)
    {
        if (mTeamCards.IndexOf(cdItm) > -1)
            mTeamCards.Remove(cdItm);

        if (mTeamCardsFreeQueque.IndexOf(cdItm) == -1)
            mTeamCardsFreeQueque.Add(cdItm);

        cdItm.gameObject.SetActive(false);
    }

    /// <summary>更新奥义点数</summary>
    public void UpdateArcane()
    {
        if (null == FightProxy.Instance.RoomInfo)
        {
            m_Panel.arcaneLab.text = "0";
            return;
        }

        bool isMe = FightProxy.Instance.RoomInfo.frole.pid == PlayerProxy.Instance.Info.pid;
        if (isMe)
        {
            m_Panel.arcaneLab.text = FightProxy.Instance.RoomInfo.frole.arcaneNum.ToString();
            m_Panel.arcaneOpLab.text = FightProxy.Instance.RoomInfo.srole.arcaneNum.ToString();
        }
          
        else
        {
            m_Panel.arcaneLab.text = FightProxy.Instance.RoomInfo.srole.arcaneNum.ToString();
            m_Panel.arcaneOpLab.text = FightProxy.Instance.RoomInfo.frole.arcaneNum.ToString();
        }
           
    }

    /// <summary>更新卡牌坐标</summary>
    public void UpdateCardAPostion()
    {
        int showIndex = 0;
        int cardCnt = mTeamCards.Count;
        FightPanel_CardItem cdItm;
        bool doNext = false;
        for(int i = 0;i < cardCnt; i++)
        {
            cdItm = mTeamCards[i];
            Vector3 pos = mTeamAInitPosition[showIndex];
            if (cdItm.gameObject.activeSelf )
            {
                if(pos != cdItm.transform.position)
                {
                    if(Define.NoAni)
                    {
                        cdItm.transform.position = pos;
                        doNext = true;
                    }
                    else
                    {
                        if (showIndex == 0)
                            cdItm.transform.DOMove(pos, 0.5f).OnComplete(() =>
                            {

                                PVPManager.Instance.On_DoNextEffect(true);
                            });
                        else
                            cdItm.transform.DOMove(pos, 0.5f);
                    }
                   

                    cdItm.CardDragControl.SlotPostion = pos;
                }
                  
                showIndex++;
            }
        }

        SortExp();

        if (doNext)
        {
            PVPManager.Instance.On_DoNextEffect(true);
        }
    }

    /// <summary>更新卡牌坐标</summary>
    public void UpdateCardBPostion()
    {
        int showIndex = 0;
        int cardCnt = mTeamBCards.Count;
        FightPanel_CardItem cdItm;
        bool doNext = false;
        for (int i = 0; i < cardCnt; i++)
        {
            cdItm = mTeamBCards[i];

            if(mTeamBInitPosition == null || showIndex >= mTeamBInitPosition.Count)
            {
                Debug.LogError("mTeamBInitPosition :" + mTeamBInitPosition == null + " showIndex:" + showIndex);
                continue;
            }

            Vector3 pos = mTeamBInitPosition[showIndex];
            if (cdItm.gameObject.activeSelf)
            {
                if (pos != cdItm.transform.position)
                {
                    if(Define.NoAni)
                    {
                        cdItm.transform.position = pos;
                        doNext = true;
                    }
                    else
                    {
                        if (showIndex == 0)
                            cdItm.transform.DOMove(pos, 0.5f).OnComplete(() =>
                            {
                                PVPManager.Instance.On_DoNextEffect(true);
                            });
                        else
                            cdItm.transform.DOMove(pos, 0.5f);
                    }
                    

                    cdItm.CardDragControl.SlotPostion = pos;
                }

                showIndex++;
            }
        }

        if (doNext)
        {
            PVPManager.Instance.On_DoNextEffect(true);
        }
    }

    /// <summary>默认获取一个空项目</summary>
    /// <param name="isTeamA"></param>
    /// <param name="index"></param>
    /// <returns></returns>
    public FightPanel_CardItem GetCardItem(bool isTeamA,int index = -1)
    {
        List<FightPanel_CardItem> cards;

        if(index != -1)
        {
            if (isTeamA)
                cards = mTeamCards;
            else
                cards = mTeamBCards;

        }
        else
        {
            if (isTeamA || Define.VSTest)
                cards = mInitTeamCards;
            else
                cards = mInitTeamBCards;
        }

        if (cards == null)
            return null; 

        int cnt = cards.Count;
        FightPanel_CardItem cardItm;
        for (int i = 0; i < cnt; i++)
        {
            cardItm = cards[i];

            if (index == -1)
            {
                if (!cardItm.gameObject.activeSelf)
                {
                    cardItm.NoShowIndex = i;
                    return cardItm;
                }
            }
            else
            {
                if (cardItm.SerData != null && cardItm.SerData.index == index)
                    return cardItm;
            }
        }


        return null;
    }

    /// <summary>卡牌排序</summary>
    public void SortAllCardPostion()
    {
        if(mTeamAInitPosition == null)
        {
            return;
        }

        int i = 0;
        int showIndex = 0;
        int cnt = mTeamAInitPosition.Count;
        for(i =0;i < cnt;i++)
        {
            if(mInitTeamCards[i].gameObject.activeSelf)
            {
                mInitTeamCards[i].transform.position = mTeamAInitPosition[showIndex];
                showIndex++;
            }
        }

        showIndex = 0;
        cnt = mTeamBInitPosition.Count;
        for (i = 0; i < cnt; i++)
        {
            if (mInitTeamBCards[i].gameObject.activeSelf)
            {
                float y = mInitTeamBCards[i].transform.position.y;
                Vector3 pos = mInitTeamBCards[i].transform.position;
                Vector4 initPos = mTeamBInitPosition[showIndex];
                mInitTeamBCards[i].transform.position = new Vector3(initPos.x,y, initPos.z);
                showIndex++;
            }
        }

        SortExp();
    }

    /// <summary>能量排序</summary>
    private void SortExp()
    {
        int cnt = mTeamCards.Count;
        int lastInd = cnt;
        int tnum = mExp.Count;
        for(int i = 0;i < tnum;i++)
        {
            mExp[i].gameObject.SetActive(i < lastInd);
        }
    }

    private void OnClick_TurnBtn(GameObject obj)
    {
        FightProxy.Instance.SendOverRound();
    }

    protected override void OnDestroy()
    {
        base.OnDestroy();

        InitIsMyAtk = 0;

        mExp = null;
        Instance = null;
        mExpTween = null;
        mTeamCards = null;
        mTeamBCards = null;
        exp_cardItem = null;
        mTeamAInitPosition = null;
        mTeamCardsFreeQueque = null;
        mInitTeamCards = null;
        mInitTeamBCards = null;
        mOpenEffectList = null;
        TimerManager.Destroy(mTimer_CountDown);
    }
}

public class FightPanel_CardItem : MonoBehaviour
{
    [HideInInspector]
    public int NoShowIndex = 0;
    [HideInInspector]
    public FightCardMsg SerData;
    [HideInInspector]
    public UICardDrag CardDragControl;
    /// <summary>充能容器</summary>
    [HideInInspector]
    public Transform ExpItem;
    public UISprite BG;

    public UITexture cardImg;
    public UILabel nameLab;
    public UILabel curExpLab;
    public UILabel maxExLab;


    public void Start()
    {
        CardDragControl = transform.GetComponent<UICardDrag>();
    }

    public void Update()
    {
        if(null != ExpItem)
        {
            if (CardDragControl.IsDrag)
            {
                ExpItem.gameObject.SetActive(false);
            }
        }
    }

    public void OnDestroy()
    {
        
      
    }

    public FightPanel_CardItem()
    {

    }

    public void UpdateDisplay()
    {
        if (null == SerData || SerData.pid == 0)
        {
            gameObject.SetActive(false);
            return;
        }

        gameObject.SetActive(true);

        TD_Card cdCfg = CardConfig.GetItem(SerData.cardId);

        nameLab.text = cdCfg.name;
        curExpLab.text = SerData.exp.ToString();
        maxExLab.text = "2";

        LoadSprite.LoaderCard(this.cardImg, cdCfg.res);

   
        
    }
}
