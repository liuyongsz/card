using System;
using PureMVC.Interfaces;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using AssetBundles;
using UnityEngine.Events;

public class loginpanel : BasePanel {

    public UISprite startGameBtn;
    public UISprite enterGameBtn;
    public UIInput account;
    public UIInput pawd;
    public UIInput playerName;
    public Transform createPlayer;
    public Transform loginUI;
}

public class LoginMediator : UIMediator<loginpanel>
{
    public loginpanel panel
    {
        get
        {
            return m_Panel as loginpanel;
        }
    }
    public static LoginMediator loginMediator;
    private string user = string.Empty;
    private string pass = string.Empty;
    public LoginMediator() : base("loginpanel")
    {
        m_isprop = false;
        RegistPanelCall(NotificationID.LoginOpen, OpenPanel);
        RegistPanelCall(NotificationID.LoginClose, ClosePanel);
    }
    protected override void OnShow(INotification notification)
    {
        if(loginMediator == null)
        {
            loginMediator = Facade.RetrieveMediator("LoginMediator") as LoginMediator;
        }
        if (PlayerPrefs.HasKey("UserName") && PlayerPrefs.HasKey("UserPass"))
        {
            panel.account.value = PlayerPrefs.GetString("UserName");
            user = panel.account.value;
            panel.pawd.value = PlayerPrefs.GetString("UserPass");
            pass = panel.pawd.value;
        }
        Facade.SendNotification(NotificationID.UpdateResources_Close);
   
       
   
    }

    protected override void AddComponentEvents()
    {
        UIEventListener.Get(m_Panel.enterGameBtn.gameObject).onClick = OnClick;
        UIEventListener.Get(m_Panel.startGameBtn.gameObject).onClick = OnClick;
    }
    /// <summary>
    /// 点击事件
    /// </summary>
    private void OnClick(GameObject go)
    {
        if (panel.account.value.Length < 6)
        {
         
            return;
        }
        else if (go == panel.startGameBtn.gameObject)
        {
            if (panel.account.value.Trim(' ') == string.Empty || panel.pawd.value.Trim(' ') == string.Empty)
            {
               
                return;
            }
            user = panel.account.value.Trim(' ');
            pass = panel.pawd.value.Trim(' ');
            PlayerPrefs.SetString("UserName", user);
            PlayerPrefs.SetString("UserPass", pass);
        
            LoginProxy.Instance.SendLogin(user, pass);
        }
        else if (go == panel.enterGameBtn.gameObject)
        {
            if (panel.playerName.value == string.Empty)
                return;
            LoginProxy.Instance.CreateAvatar(panel.playerName.value);

            
        }
    }

    protected override void OnDestroy()
    {
        loginMediator = null;
        base.OnDestroy();
    }
}