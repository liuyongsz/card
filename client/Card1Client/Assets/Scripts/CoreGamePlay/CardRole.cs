using UnityEngine;
using System.Collections;
using HighlightingSystem;
using NetProtocal;

public class CardRole : CardBase
{
    public FightHeroMsg SerData;
    public Vector3 SlotPostion;
    public int SlotIndex;

    private Highlighter mHighlight;
    // Use this for initialization

    private TweenLayerUtil mTween;

    void Start()
    {
        mHighlight = gameObject.GetComponent<Highlighter>();

        mTween = new TweenLayerUtil();
        mTween.Target = transform;
        if (HeroTeamMediator.heroTeamMediator == null)
            mTween.InitParams("LUO_Skill001");

        mHighlight.enabled = false; 
    }

    public void Die()
    {
        SerData.hp = 0;
        SerData.shield = 0;
        SerData.actionNum = 0;
        SerData.moveNum = 0;
        SerData.useArcaneNum = 0;
        SerData.death = true;
    }

    void Update()
    {
        if(null != PVPManager.Instance)
        PVPManager.Instance.CardRoleDic[transform] = this;

        mHighlight.enabled = true;
        
    }

    public void ShowHighlighter()
    {
        mHighlight.ConstantOn(Color.red);
        if (HeroTeamMediator.heroTeamMediator == null)
            PureMVC.Patterns.Facade.Instance.SendNotification(NotificationID.Fihgt_ShowOpPan, true);
    }

    public void HideHighlighter()
    {
        mHighlight.ConstantOff();
    }
}
