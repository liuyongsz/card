using PureMVC.Interfaces;
using PureMVC.Patterns;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using NetProtocal;

public class MainProxy : Proxy<MainProxy>
{
    
    private Dictionary<System.UInt64, Dictionary<string, object>> m_avatarList = null;

    public MainProxy()
        : base(ProxyID.MainUI)
    {
        //服务器返回消息
        NetDataMgr.Instance.Mrgs.Add(Respone.ServerResult, new NetParam(typeof(ServerResultMsg), OnRecServerResult));

    }

    public delegate void NetEventFunctionxxx(params object[] datas);

    private void OnRecServerResult(object obj)
    {
        ServerResultMsg msg = (ServerResultMsg)obj;

        Debug.Log("OnRecServerResult:" + msg.flag);

        switch(msg.flag)
        {
            case ServerResultFlag.NoRole:
                if (LoginMediator.loginMediator == null)
                    return;
                LoginMediator.loginMediator.panel.loginUI.gameObject.SetActive(false);
                LoginMediator.loginMediator.panel.createPlayer.gameObject.SetActive(true);
                return;
            case ServerResultFlag.CardTeamNameHasIllegality:
                if (SetHeroMediator.setHeroMediator == null)
                    return;
                SetHeroMediator.setHeroMediator.panel.changeCardName.value = HeroTeamMediator.heroTeamMediator.dropInfo.cardTeamName;
                return;
             case ServerResultFlag.HeroTeamNameHasIllegality:
                Debug.LogError("队名有非法字符");
                return;
        }
       
    }

}
