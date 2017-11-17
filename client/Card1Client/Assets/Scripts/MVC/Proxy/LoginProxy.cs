using PureMVC.Interfaces;
using PureMVC.Patterns;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using NetProtocal;

public class LoginProxy : Proxy<LoginProxy>
{
    private string m_account;
    private string m_passwd ;

    private Dictionary<System.UInt64, Dictionary<string, object>> m_avatarList = null;

    public LoginProxy()
        : base(ProxyID.Login)
    {
        //登录成功返回消息
        NetDataMgr.Instance.Mrgs.Add(Respone.PlayerInfo, new NetParam(typeof(PlayerInfoMsg), OnRecLogin));

       
    }

    public delegate void NetEventFunctionxxx(params object[] datas);

    /// <summary>
    /// 发送登录请求
    /// </summary>
    /// <param name="account"></param>
    /// <param name="pwd"></param>
    public void SendLogin(string account,string pwd)
    {
        LoginMsg msg = new LoginMsg
        {
            accountId = account,
            accountPwd = pwd
        };
        
        NSocket.GetInstance().SendData(Request.Login, msg);
    }
    private void OnRecLogin(object obj)
    {
        PlayerInfoMsg msg = (PlayerInfoMsg)obj;

        PlayerProxy.Instance.Info = msg;

        Debug.Log("login:" + msg.nickName + ":" + msg.pid);
        Facade.SendNotification(NotificationID.LoginClose);
        Facade.SendNotification(NotificationID.MainOpen);
        
    }

    

    public void SendRegisterAccount(string account, string pwd)
    {
        Debug.Log("stringAccount:" + account);
        Debug.Log("stringPasswd:" + pwd);

        if (account.Length > 0 && pwd.Length > 5)
        {
            info("connect to server...(连接到服务端...)");

        }
        else
        {
            err("account or password is error, length < 6!(账号或者密码错误，长度必须大于5!)");
        }
    }

    private void OnRecRegister(object obj)
    {
       
    }

    /// <summary>
    /// 创建角色
    /// </summary>
    public void CreateAvatar(string myName )
    {
        ParamStrMsg msg = new ParamStrMsg
        {
            strValue = myName
        };
        NSocket.GetInstance().SendData(Request.Create, msg);
    }
    /// <summary>
    /// 创建角色失败
    /// </summary>
    public void onCreateAvatarFail()
    {
       
    }

    public void onLoginFailed(System.UInt16 failedcode)
    {

    }

    public void onVersionNotMatch(string verInfo, string serVerInfo)
    {
        err("");
    }

    public void onScriptVersionNotMatch(string verInfo, string serVerInfo)
    {
        err("");
    }

    public void onLoginBaseappFailed(System.UInt16 failedcode)
    {

    }

    public void onLoginBaseapp()
    {
        info("connect to loginBaseapp, please wait...(连接到网关， 请稍后...)");
    }

    public void Loginapp_importClientMessages()
    {
        info("Loginapp_importClientMessages ...");
    }

    public void Baseapp_importClientMessages()
    {
        info("Baseapp_importClientMessages ...");
    }

    public void Baseapp_importClientEntityDef()
    {
        info("importClientEntityDef ...");
    }   

    public void selectAvatarGame(System.UInt64 dbid)
    {

        GameProxy.Instance.GotoMainCity();

    }

    public void err(string s)
    {
        Debug.LogError(s);
    }

    public void info(string s)
    {
        Debug.Log(s);
    }

}
