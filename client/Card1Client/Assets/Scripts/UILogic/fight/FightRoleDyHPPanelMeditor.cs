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

public class fightroledyhppanel : BasePanel
{
    public UILabel addHPLabel;
    public UILabel addValue;
}

public class FightRoleDyHPPanelMeditor : UIMediator<fightroledyhppanel>
{
    public static bool IsOpen = false;

    private List<EffectVO> DoMoveList;
    private bool mInDoMove;

    private List<EffectVO> mOpenEffectList;
    public FightRoleDyHPPanelMeditor() : base("fightroledyhppanel")
    {
        m_isprop = false;
        RegistPanelCall(NotificationID.FightRoleDyHPOpen, OpenPanel);
        RegistPanelCall(NotificationID.FightRoleDyHPClose, ClosePanel);

        RegistPanelCall(NotificationID.Fight_AddHp, OnRec_AddHpEffect);
        RegistPanelCall(NotificationID.Fight_Effect, OnRec_FightEffect);
    }

    protected override void OnShow(INotification notification)
    {
        IsOpen = true;

        m_Panel.addValue.gameObject.SetActive(false);
        m_Panel.addHPLabel.gameObject.SetActive(false);

        if (null != mOpenEffectList)
        {
            int eftLen = mOpenEffectList.Count;
            for (int ei = 0; ei < eftLen; ei++)
            {
                DoEffect(mOpenEffectList[ei]);
            }
        }
    }

    protected override void AddComponentEvents()
    {
       
    }

    private void OnRec_AddHpEffect(INotification noti)
    {
        AnimationPrefabEventData vo = noti.Body as  AnimationPrefabEventData;

        UILabel lab = GameObject.Instantiate(m_Panel.addHPLabel);
        lab.transform.SetParent(m_Panel.transform);
        lab.transform.localScale = Vector3.one;
        lab.gameObject.SetActive(true);
        Vector3 screenPos = PVPManager.Instance.FightCamera.WorldToScreenPoint(vo.HPPosition);
        screenPos.z = 0;

        lab.transform.position = Main.CameraUI.ScreenToWorldPoint(screenPos);

        Vector3 endPos = lab.transform.position;
        endPos.y += 0.5f;
        lab.transform.DOMove(endPos,1f).OnComplete(delegate() {

            GameObject.DestroyObject(lab.gameObject);
        });
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
        if (vo.Type == TargetType.Hero && vo.HeroProp == HeroPropType.Move)
        {
            //if (mInDoMove)
            //{
            //    DoMoveList.Add(vo);
            //    return;
            //}

            //mInDoMove = true;

            bool isTeamA = vo.Target.Pid == PlayerProxy.Instance.Info.pid;
            CardRole target;
            CardRole trigger;
            Vector3 targetToPos = Vector3.zero;
            Vector3 triggerToPos = Vector3.zero;

            if (Define.VSTest)
            {
                target = PVPManager.Instance.GetCardRoleByDid(2);
                trigger = PVPManager.Instance.GetCardRoleByDid(3);
            }
            else
            {
                int tragetInd = vo.Target.Target - 1;
                int triggerInd = vo.Source.Target - 1;

                target = PVPManager.Instance.GetCardRoleByPos(isTeamA, vo.Target.Target);
                trigger = PVPManager.Instance.GetCardRoleByPos(isTeamA, vo.Source.Target);

                Debug.LogError("Move target:" + vo.Target.Target + " | trigger:" + vo.Source.Target);

                target.SlotIndex = vo.Source.Target;
                target.SerData.pos = vo.Source.Target;
                trigger.SlotIndex = vo.Target.Target;
                trigger.SerData.pos = vo.Target.Target;

                targetToPos = target.transform.position;
                triggerToPos = trigger.transform.position;
            }

            //bool targetMoveOver = false;
            //bool triggerMoveOver = false;

            target.transform.DOMove(triggerToPos, 1f).OnComplete(() =>
            {

                //targetMoveOver = true;

                //if(targetMoveOver && triggerMoveOver)
                //{
                //mInDoMove = false;

                //EffectVO tvo = DoMoveList[0];
                //DoMoveList.RemoveAt(0);

                PVPManager.Instance.On_DoNextEffect(true);
                //SendNotification(NotificationID.Fight_Effect, tvo);
                //}
            });

            trigger.transform.DOMove(targetToPos, 1f).OnComplete(() =>
            {
                //triggerMoveOver = true;

                //if (targetMoveOver && triggerMoveOver)
                //{
                //mInDoMove = false;

                //EffectVO tvo = DoMoveList[0];
                //DoMoveList.RemoveAt(0);

                //PVPManager.Instance.On_DoNextEffect(true);
                //SendNotification(NotificationID.Fight_Effect, tvo);
                //}
            });

            //PVPManager.Instance.On_DoNextEffect(true);
        }
        else if (vo.Type == TargetType.Hero)
        {
            UILabel lab = GameObject.Instantiate(m_Panel.addValue);
            lab.transform.SetParent(m_Panel.transform);
            lab.transform.localScale = Vector3.one;
            lab.gameObject.SetActive(true);


            if (null == vo.Target)
                return;

            bool isMe = vo.Target.Pid == PlayerProxy.Instance.Info.pid;

            CardRole cdRole = PVPManager.Instance.GetCardRoleByPos(isMe, vo.Target.Target);

            string sign = vo.Value > 0 ? "+" : "";
            if (vo.HeroProp == HeroPropType.Damage)      //受到伤害
            {
                cdRole.SerData.shield += vo.Value;
                if (cdRole.SerData.shield < 0)
                {
                    cdRole.SerData.hp = cdRole.SerData.hp + cdRole.SerData.shield;
                    cdRole.SerData.shield = 0;
                }
                   

                lab.text = string.Format("[FF0000]{0}{1}[-]", sign, vo.Value);

                SendNotification(NotificationID.FightRoleHp_Data, cdRole);
            }
            else if (vo.HeroProp == HeroPropType.Hp)     //加血
            {
                cdRole.SerData.hp += vo.Value;
                if (cdRole.SerData.hp > cdRole.SerData.maxHp)
                    cdRole.SerData.hp = cdRole.SerData.maxHp;
                if (cdRole.SerData.hp < 0)
                {
                    cdRole.SerData.hp = 0;
                }

                lab.text = string.Format("[00FF00]{0}{1}[-]", sign, vo.Value);

                SendNotification(NotificationID.FightRoleHp_Data, cdRole);
            }
            else if (vo.HeroProp == HeroPropType.Shield) //加护甲
            {
                cdRole.SerData.shield += vo.Value;
                if (cdRole.SerData.shield < 0)
                    cdRole.SerData.shield = 0;

                lab.text = string.Format("[0000FF]{0}{1}[-]", sign, vo.Value);

                SendNotification(NotificationID.FightRoleHp_Data, cdRole);
            }
            else if(vo.HeroProp == HeroPropType.MoveNum)
            {
                cdRole.SerData.moveNum = vo.Value;

                PVPManager.Instance.On_DoNextEffect(true);
                return;
            }
            else if (vo.HeroProp == HeroPropType.UseArcaneNum)
            {
                cdRole.SerData.useArcaneNum = vo.Value;

                PVPManager.Instance.On_DoNextEffect(true);
                return;
            }
            else if(vo.HeroProp == HeroPropType.Death)
            {
                cdRole.Die();

                SendNotification(NotificationID.FightRoleHp_Data, cdRole);
                PVPManager.Instance.On_DoNextEffect(true);
                return;
            }
            else
            {
                PVPManager.Instance.On_DoNextEffect(true);
                return;
            }

            if (cdRole == null)
                return;

            Vector3 screenPos = PVPManager.Instance.AvatarCamera.WorldToScreenPoint(cdRole.transform.position);
            screenPos.z = 0;

            Vector3 uiPos = Main.CameraUI.ScreenToWorldPoint(screenPos);
            uiPos.y += 0.4f;
            lab.transform.position = uiPos;

            Vector3 endPos = lab.transform.position;
            endPos.y += 0.5f;
            lab.transform.DOMove(endPos, 1f).OnComplete(delegate ()
            {
                GameObject.DestroyObject(lab.gameObject);

                PVPManager.Instance.On_DoNextEffect(true);
            });
        }
        else
        {
            PVPManager.Instance.On_DoNextEffect(true);
        }
    }

    protected override void OnDestroy()
    {
        base.OnDestroy();

        IsOpen = false;
        DoMoveList = null;
        mInDoMove = false;
        mOpenEffectList = null;
    }
}
