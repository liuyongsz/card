using NetProtocal;
using PureMVC.Patterns;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Assets.XGame.NetWork;

/// <summary>
/// 数据协议回调及类型注册类
/// </summary>
class NetParam
{
    public object data;
    public Type mType;
    public Action<System.Object> mfun;
    public NetParam(Type type, Action<System.Object> fun)
    {
        this.mType = type;
        this.mfun = fun;
    }
}

/// <summary>
/// 网络数据管理类
/// </summary>
class NetDataMgr : Proxy<NetDataMgr>
{
    public Dictionary<NetProtocal.Respone, NetParam> Mrgs = new Dictionary<NetProtocal.Respone, NetParam>();
    private bool isGetInfo = false;
    public void Init()
    {
        #region 登陆初始化基础数据
        // 进行添加协议及回调信息

        // 心跳接口处理
        //mMrgs.Add(ServiceNo.s2c_heart_check, new NetParam(typeof(s2c_heart_check), OnHeartCheck));
        // 统一错误接收处理
        // mMrgs.Add(ServiceNo.s2c_error_msg, new NetParam(typeof(s2c_error_msg), OnErrorMsg));
        // 统一属性接收处理
        #endregion

    }

    private void OnErrorMsg(object obj)
    {
        throw new NotImplementedException();
    }

    #region 登陆初始化基础数据
    /// <summary> 心跳回调 </summary>
    private void OnHeartCheck(object obj)
    {
       /*
        s2c_heart_check s2c = obj as s2c_heart_check;
        Main.heartTime = GlobalFunction.getTimeStamp(false);
        Main.isHeart = true;
        TimerManager.instance.UpdateServerTime(s2c.time);

        if (isGetInfo) // 这里处理其他的第一次登陆玩家基础数据
        {
            isGetInfo = false;
            //获取其他基础数据
            this.QuerryInitInfo();
        }
        */
    }
    #endregion




}

