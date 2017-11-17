using PureMVC.Interfaces;
using PureMVC.Patterns;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using NetProtocal;
using ProtoBuf;

public class PlayerProxy : Proxy<PlayerProxy>
{
    public PlayerInfoMsg Info;

    public PlayerProxy()
        : base(ProxyID.Player)
    {
       // NetDataMgr.Instance.Mrgs.Add(ServerID.Login, new NetParam(typeof(LoginErrorMsg), OnRecPlayerInfo));
    }

    // 返回玩家数据
    void OnRecPlayerInfo(object obj)
    {
       
    }
}


