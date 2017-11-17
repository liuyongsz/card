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

public class fightrolehppanel : BasePanel
{
    public Transform roleHP;
    public UILabel addValue;

    public void Update()
    {
        if(null != FightRoleHPPanelMeditor.CardRoleHPDic)
        {
            foreach (var child in FightRoleHPPanelMeditor.CardRoleHPDic)
            {
                Vector3 screenPos = PVPManager.Instance.AvatarCamera.WorldToScreenPoint(child.Key.transform.position);
                Vector3 uiPos = Main.CameraUI.ScreenToWorldPoint(screenPos);
                uiPos.z = 0;
                uiPos.y += 0.85f;
                child.Value.transform.position = uiPos;
            }
        }
    }
}

public class fightrolehppanel_item : MonoBehaviour
{
    public UILabel curHpLab;
    public UILabel maxHpLab;
    public UILabel nameLab;
    public UILabel dieLab;
    public UILabel shieldLab;
}

public class FightRoleHPPanelMeditor : UIMediator<fightrolehppanel>
{
    public static Dictionary<CardRole, fightrolehppanel_item> CardRoleHPDic;

    public static bool IsOpen = false;

    public FightRoleHPPanelMeditor() : base("fightrolehppanel")
    {
        m_isprop = false;
        RegistPanelCall(NotificationID.FightRoleHPOpen, OpenPanel);
        RegistPanelCall(NotificationID.FightRoleHPClose, ClosePanel);

        RegistPanelCall(NotificationID.FightRoleHp_AddMyHP, OnRec_AddMyHP);
        RegistPanelCall(NotificationID.FightRoleHp_AddOpHP, OnRec_AddOpHP);
        RegistPanelCall(NotificationID.FightRoleHp_Data, OnRec_ChangeData);
    }

    protected override void OnShow(INotification notification)
    {
        IsOpen = true;

        m_Panel.transform.SetParent(Main.CameraHPUI.transform);

        m_Panel.roleHP.gameObject.SetActive(false);
        m_Panel.addValue.gameObject.SetActive(false);

        CardRoleHPDic = new Dictionary<CardRole, fightrolehppanel_item>();

        PVPManager.Instance.Test_LoaderAvatar();
    }

    protected override void AddComponentEvents()
    {
       
    }

    public void OnRec_ChangeData(INotification noti)
    {
        CardRole hero = noti.Body as CardRole;

        fightrolehppanel_item itemUI = CardRoleHPDic[hero];

        UpdateData(itemUI, hero.SerData);
    }

    private void OnRec_AddMyHP(INotification noti)
    {
        CardRole cdRole = noti.Body as CardRole;

        GameObject obj;
        obj = GameObject.Instantiate(m_Panel.roleHP.gameObject) as GameObject;

        fightrolehppanel_item itm = ScriptHelper.BindField(obj.transform, "fightrolehppanel_item") as fightrolehppanel_item;

        obj.SetActive(true);
        obj.transform.SetParent(m_Panel.transform);
        obj.transform.localScale = Vector3.one;

        CardRoleHPDic[cdRole] = itm;

        if (cdRole.SerData != null)
        {
            itm.nameLab.text = HeroConfig.GetItem(cdRole.SerData.heroId).name;
            UpdateData(itm, cdRole.SerData);
        }
    }

    private void OnRec_AddOpHP(INotification noti)
    {
        CardRole cdRole = noti.Body as CardRole;

        GameObject obj;
        obj = GameObject.Instantiate(m_Panel.roleHP.gameObject) as GameObject;

        fightrolehppanel_item itm = ScriptHelper.BindField(obj.transform, "fightrolehppanel_item") as fightrolehppanel_item;

        obj.SetActive(true);
        obj.transform.SetParent(m_Panel.transform);
        obj.transform.localScale = Vector3.one;

        CardRoleHPDic[cdRole] = itm;

        if(cdRole.SerData != null)
        {
            itm.nameLab.text = HeroConfig.GetItem(cdRole.SerData.heroId).name;
            UpdateData(itm,cdRole.SerData);
        }
    }

    private void UpdateData(fightrolehppanel_item itm, FightHeroMsg data)
    {
        if (data.hp < 0)
            data.hp = 0;

        if (data.shield < 0)
            data.shield = 0;

        itm.curHpLab.text = data.hp.ToString();
        itm.dieLab.gameObject.SetActive(data.hp <= 0);
        itm.shieldLab.text = data.shield.ToString();
        itm.maxHpLab.text = data.maxHp.ToString();
    }

    protected override void OnDestroy()
    {
        base.OnDestroy();

        CardRoleHPDic = null;
        IsOpen = false;
    }
}
