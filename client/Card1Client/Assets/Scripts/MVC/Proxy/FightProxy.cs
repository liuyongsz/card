using PureMVC.Interfaces;
using PureMVC.Patterns;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using NetProtocal;

public class FightProxy : Proxy<FightProxy>
{
    public RoomInfoMsg RoomInfo;

    public FightProxy()
        : base(ProxyID.Fight)
    {
        NetDataMgr.Instance.Mrgs.Add(Respone.RoomInfoRes, new NetParam(typeof(RoomInfoMsg), OnRec_RoomInfoMsg));//返回房间信息
        NetDataMgr.Instance.Mrgs.Add(Respone.RoomLoadRes, new NetParam(typeof(RoomLoadMsg), OnRec_RoomLoadMsg));//返回加载资源
        NetDataMgr.Instance.Mrgs.Add(Respone.RoomStateRes, new NetParam(typeof(RoomStateMsg), OnRec_RoomStateMsg));//房间状态
        NetDataMgr.Instance.Mrgs.Add(Respone.FightCardsRes, new NetParam(typeof(FightCardsMsg), OnRec_FightCardsMsg));//返回卡牌信息
        NetDataMgr.Instance.Mrgs.Add(Respone.StartRoundRes, new NetParam(typeof(StartRoundMsg), OnRec_StartRoundMsg)); //回合开始
        NetDataMgr.Instance.Mrgs.Add(Respone.EffectRes, new NetParam(typeof(EffectsMsg), OnRec_EffectMsg));//战斗效果EffectMsg
    }

    /// <summary>匹配战斗</summa
    /// <param name="selectTeamId"></param>
    public void SendMatchFight(int selectTeamId)
    {
        MatchFightMsg msg = new MatchFightMsg();
        msg.selectTeam = selectTeamId;

        NSocket.GetInstance().SendData(Request.MatchFightReq, msg);
    }

    /// <summary>是否替换</summary>
    /// <param name="replace"></param>
    public void SendReplaceCardReq(bool replace)
    {
        if (PVPManager.Instance.InPlayMainAnimation())
            return;

        ReplaceCardMsg msg = new ReplaceCardMsg();
        msg.replace = replace;

        NSocket.GetInstance().SendData(Request.ReplaceCardReq, msg);
    }

    /// <summary>发送加载进度</summary>
    /// <param name="per"></param>
    public void SendRoomLoading(int per)
    {
        RoomLoadMsg msg = new RoomLoadMsg();
        msg.load = per;

        NSocket.GetInstance().SendData(Request.RoomLoadReq, msg);
    }

    /// <summary>使用卡牌 </summary>
    /// <param name="index">卡牌序列号</param>
    /// <param name="type"></param>
    /// <param name="target">目标id(对人使用传站位pos对卡牌使用传卡牌序列号index)</param>
    public void SendUseCard(int index, UseType type, int target)
    {
        if (PVPManager.Instance.InPlayMainAnimation())
            return;

        UseMsg msg = new UseMsg();
        msg.index = index;
        msg.type = type;
        msg.target = target;

        NSocket.GetInstance().SendData(Request.UseReq, msg);
    }

    /// <summary>结束回合</summary>
    public void SendOverRound()
    {
        if (PVPManager.Instance.InPlayMainAnimation())
            return;

        NSocket.GetInstance().SendData(Request.OverRoundReq);
    }

    /// <summary>移动目标</summary>
    /// <param name="posId"></param>
    /// <param name="addPos">移动方向(+1后退-1前进)</param>
    public void SendMove(int posId, int addPos)
    {
        if (PVPManager.Instance.InPlayMainAnimation())
            return;

        UseMsg msg = new UseMsg();
        msg.index = posId;
        msg.type = UseType.MoveType;
        msg.target = addPos;

        NSocket.GetInstance().SendData(Request.UseReq, msg);
    }

    public void OnRec_RoomStartMsg(object data)
    {
        //RoomStartMsg msg = data as RoomStartMsg;
    }

    public void OnRec_RoomLoadMsg(object data)
    {
        RoomLoadMsg msg = data as RoomLoadMsg;

        Debug.Log("OnRec_RoomLoadMsg:" + msg.load);

        SendNotification(NotificationID.VSLoading_Per, msg);
    }

    /// <summary>匹配成功收到</summary>
    /// <param name="data"></param>
    public void OnRec_RoomInfoMsg(object data)
    {
        RoomInfoMsg msg = data as RoomInfoMsg;

        RoomInfo = msg;

        SendNotification(NotificationID.VSLoadingOpen, msg);
        GameProxy.Instance.GoToPVP();

        Debug.Log("OnRec_RoomInfoMsg");
    }

    /// <summary>房间状态</summary>
    /// <param name="data"></param>
    public void OnRec_RoomStateMsg(object data)
    {
        RoomStateMsg msg = data as RoomStateMsg;

        Debug.Log("OnRec_RoomStateMsg:" + msg.state);

        if (msg.state == RoomState.Replace)
        {
            Debug.Log("NotificationID.ChooseCardOpen");

            SendNotification(NotificationID.VSLoadingClose);
            SendNotification(NotificationID.ChooseCardOpen);
        }
        else if (msg.state == RoomState.Fight)
        {
            SendNotification(NotificationID.ChooseCardClose);

            SendNotification(NotificationID.FightOpen);
            SendNotification(NotificationID.FightRoleHPOpen);
            SendNotification(NotificationID.FightRoleDyHPOpen);
        }
    }

    /// <summary>替换卡牌</summary>
    /// <param name="data"></param>
    public void OnRec_FightCardsMsg(object data)
    {
        FightCardsMsg msg = data as FightCardsMsg;

        if (RoomInfo.frole.pid == PlayerProxy.Instance.Info.pid)
            RoomInfo.frole.cards = msg;
        else
            RoomInfo.srole.cards = msg;

        Debug.Log("OnRec_FightCardsMsg");
        SendNotification(NotificationID.ChooseCard_ReplaceCard, msg);
    }

    public static string xxxxxx = "";
    public void OnRec_StartRoundMsg(object data)
    {
        StartRoundMsg msg = data as StartRoundMsg;

        xxxxxx = "=====:" + msg.pid + "   myPid:" + PlayerProxy.Instance.Info.pid;
        Debug.LogError(xxxxxx);

        if (msg.pid == PlayerProxy.Instance.Info.pid)
        {
            Debug.Log("Round Start");

            PVPManager.IsMyTurn = true;
            SendNotification(NotificationID.Fight_WarnMyAtk);
        }
        else
        {
            Debug.Log("Round Over");

            PVPManager.IsMyTurn = false;
            SendNotification(NotificationID.Fight_WarnOpAtk);
        }
    }

    /// <summary>游戏结束</summary>
    /// <param name="data"></param>
    public void OnRec_RoomOverMsg(object data)
    {
        RoomOverMsg msg = data as RoomOverMsg;
    }


    /// <summary>卡牌产生的效果</summary>
    /// <param name="data"></param>
    public void OnRec_EffectMsg(object data)
    {
        EffectsMsg msg = data as EffectsMsg;

        List<EffectVO> vos = new List<EffectVO>();
        int cnt = msg.effect.Count;
        AttackVO atkVo = null;

        bool doeffect = false;

        for (int i = 0; i < cnt; i++)
        {
            EffectVO vo = new EffectVO();
            vo.Prase(msg.effect[i]);

            vos.Add(vo);

            if (vo.HeroProp == HeroPropType.Damage || vo.HeroProp == HeroPropType.Hp || vo.HeroProp == HeroPropType.Shield)
            {
                atkVo = PVPManager.Instance.On_AddMainOverEffect(vo);
            }
            else if (null != PVPManager.Instance)
            {
                doeffect = true;
                PVPManager.Instance.On_AddEffect(vo);
            }

            Debug.LogError("EffectMsg:" + msg.effect[i].target.type + " | Prop:" + msg.effect[i].prop + " | Value:" + msg.effect[i].value + " TargetIndex:" + msg.effect[i].target.index);
        }

        if(doeffect)
        {
            PVPManager.Instance.On_DoMoveNextEffect();
        }


        if(null != PVPManager.Instance && null != atkVo)
            PVPManager.Instance.PlayMainAnimation(atkVo);
    }
}
