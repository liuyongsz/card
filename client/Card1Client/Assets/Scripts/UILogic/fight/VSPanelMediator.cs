using NetProtocal;
using PureMVC.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

public enum E_VSPanelSide
{
    Null,
    TeamA,
    TeamB,
}
public class vspanel : BasePanel
{
    public UILabel teamANameLab;
    public UISlider teamALoadingBar;
    public UILabel teamBNameLab;
    public UISlider teamBLoadingBar;

    public UITexture teamARole0;
    public UITexture teamARole1;
    public UITexture teamARole2;
    public UITexture teamARole3;

    public UITexture teamBRole0;
    public UITexture teamBRole1;
    public UITexture teamBRole2;
    public UITexture teamBRole3;

    public void Update()
    {
        if(VSPanelMediator.IsTeamA == E_VSPanelSide.TeamA)
            teamALoadingBar.value = GUIManager.LoadingScenePer / 100f;
        else if (VSPanelMediator.IsTeamA == E_VSPanelSide.TeamB)
            teamBLoadingBar.value = GUIManager.LoadingScenePer / 100f;
    }
}

public class VSPanelMediator : UIMediator<vspanel>
{
    private string mKeyLoadingPerKey = "KeyLoadingPerKey";
    private BoxCollider mBox;

    private float timerCnt = 0;
    private float mToValueA = 0;
    private float mToValueB = 0;

    private bool mOtherLoadingComplete = false;
    private bool mLoadingMapComplete = false;
    private bool mStopSendLodingPer = false;

    private RoomInfoMsg msg;

    public static E_VSPanelSide IsTeamA;

    public VSPanelMediator() : base("vspanel")
    {
        m_isprop = false;
        RegistPanelCall(NotificationID.VSLoadingOpen, OpenPanel);
        RegistPanelCall(NotificationID.VSLoadingClose, ClosePanel);
        RegistPanelCall(NotificationID.VSLoading_Per, OnRec_LoadingPer);
        RegistPanelCall(NotificationID.Fight_LoaderMapComplete, OnLoad_MapComplete);
    }

    protected override void OnShow(INotification notification)
    {
        msg = notification.Body as RoomInfoMsg;

        SendNotification(NotificationID.MainClose);

        TimerManager.AddTimerRepeat(mKeyLoadingPerKey, 0.01f, OnTimer_SendLoadingPer);

        UIEventListener.Get(m_Panel.gameObject).onClick = OnClick_Panel;

        mBox = m_Panel.GetComponent<BoxCollider>();

        mStopSendLodingPer = false;
        mLoadingMapComplete = false;
        mOtherLoadingComplete = false;
        m_Panel.teamALoadingBar.value = 0;
        m_Panel.teamBLoadingBar.value = 0;

        UpdateDisplay();
    }

    private void UpdateDisplay()
    {
        if (msg == null)
            return;

        IsTeamA = msg.frole.pid == PlayerProxy.Instance.Info.pid ? E_VSPanelSide.TeamA : E_VSPanelSide.TeamB;

        m_Panel.teamANameLab.text = msg.frole.name;
        m_Panel.teamBNameLab.text = msg.srole.name;
    }

    private void OnClick_Panel(object obj)
    {
        mBox.enabled = false;

        if(Define.VSTest)
        {
            GameProxy.Instance.GoToPVP();
        }
    }

    private void OnRec_LoadingPer(INotification noti)
    {
        RoomLoadMsg msg = noti.Body as RoomLoadMsg;

        int per = (int)GUIManager.LoadingScenePer;
        mOtherLoadingComplete = per == 100 ? true : false;

        if (IsTeamA == E_VSPanelSide.TeamA)
            m_Panel.teamALoadingBar.value = per;
        else if (IsTeamA == E_VSPanelSide.TeamB)
            m_Panel.teamBLoadingBar.value = per;

        Debug.Log("OnRec_LoadingPer");
    }

    private void OnTimer_SendLoadingPer()
    {

        timerCnt += Time.deltaTime;

        if(timerCnt > 0.7f)
        {

            timerCnt = 0;

            int per = (int)GUIManager.LoadingScenePer;

            bool myLoadingComplete = per.CompareTo(100) == 0;

            if (myLoadingComplete && Define.VSTest && mLoadingMapComplete)
            {
                TimerManager.Destroy(mKeyLoadingPerKey);
                ClosePanel();
            }
            else if (mOtherLoadingComplete && myLoadingComplete && mLoadingMapComplete)
            {
                TimerManager.Destroy(mKeyLoadingPerKey);
                ClosePanel();
            }

            if(!mStopSendLodingPer && !Define.VSTest)
            {
                Debug.Log("send loading:" + per);
                if(per > 0)
                    FightProxy.Instance.SendRoomLoading(per);

                if(myLoadingComplete)
                {
                    mStopSendLodingPer = true;
                }
            }
        }
    }

    protected override void AddComponentEvents()
    {
 
    }

    private void OnLoad_MapComplete(INotification noti)
    {
        mLoadingMapComplete = true;
    }

    protected override void OnDestroy()
    {
        base.OnDestroy();

        IsTeamA = E_VSPanelSide.Null;

        TimerManager.Destroy(mKeyLoadingPerKey);
    }
}
