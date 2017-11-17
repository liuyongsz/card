using UnityEngine;
using System.Collections.Generic;

/// <summary>
/// 异步操作同步触发器，
/// 目标：(1，为多个异步操作完成后，统一触发用户后续操作；2，异步线程操作后，要在主线程中调用后续操作[延迟一帧]；)
/// </summary>
public class AsyncTrigger
{
    /// <summary>
    /// 触发函数
    /// </summary>
    /// <param name="args"></param>
    public delegate void OnTrigger(params object[] args);

    public class TriggerInfo
    {
        /// <summary>
        /// 触发器名称
        /// </summary>
        public string strTriggerName = string.Empty;
        /// <summary>
        /// 触发数量
        /// </summary>
        public int iTriggerCount = 0;
        /// <summary>
        /// 触发方法
        /// </summary>
        public OnTrigger onTrigger = null;
        /// <summary>
        /// 触发参数
        /// </summary>
        public object[] args = null;
    }
    /// <summary>
    /// 触发器列表
    /// </summary>
    private static Dictionary<string, TriggerInfo> mTriggers = new Dictionary<string, TriggerInfo>();

    /// <summary>
    /// 测试委托方法指向对象是否有效
    /// </summary>
    /// <param name="oFuncTarget"></param>
    /// <returns></returns>
    public static bool IsTargetValid(System.Object oFuncTarget)
    {
        ///空的时候应该为静态委托，无对象
        if (oFuncTarget == null)
            return true;

        ///如果原先有对象，后被销毁，对象值会变为"null"
        if (oFuncTarget.Equals(null))
        {
            return false;
        }

        return true;
    }
    /// <summary>
    /// 延时一帧触发
    /// </summary>
    /// <param name="strTriggerName">触发器名称</param>
    /// <param name="onTrigger">触发器</param>
    /// <param name="args">触发参数</param>
    static public bool CreateTimeTrigger(string strTriggerName, float fDelayTime, OnTrigger onTrigger, params object[] args)
    {
        if (mTriggers.ContainsKey(strTriggerName))
            return false;

        ///暂时添加到触发列表
        TriggerInfo tInfo = new TriggerInfo();
        tInfo.strTriggerName = strTriggerName;
        tInfo.onTrigger = onTrigger;
        tInfo.args = args;
        mTriggers.Add(strTriggerName,tInfo);

        ///添加一次性心跳
        TimerManager.AddTimer(strTriggerName, fDelayTime, OnTriggerTimer, strTriggerName, onTrigger);
        return true;
    }
    /// <summary>
    /// 延时心跳触发时间回调
    /// </summary>
    /// <param name="args"></param>
    static public void OnTriggerTimer(params object[] args)
    {
        if (args == null || args.Length < 2)
            return;

        ///检查是否包含触发节点
        string strTriggerName = args[0] as string;
        if (!mTriggers.ContainsKey(strTriggerName))
        {
            return;
        }

        ///触发用户接口
        TriggerInfo tInfo = mTriggers[strTriggerName];
        if (tInfo.onTrigger != null)
        {
            try
            {
                tInfo.onTrigger(strTriggerName);
            }
            catch (System.Exception ex)
            {
                LogSystem.LogError(ex.ToString());
            }
        }

        ///删除触发器和心跳
        mTriggers.Remove(strTriggerName);
        TimerManager.Destroy(strTriggerName);
    }
    /// <summary>
    /// 延时一帧触发
    /// </summary>
    /// <param name="strTriggerName">触发器名称</param>
    /// <param name="onTrigger">触发器</param>
    /// <param name="args">触发参数</param>
    static public bool CreateCountTrigger(string strTriggerName, float fDelayTime,int iCount, OnTrigger onTrigger, params object[] args)
    {
        if (mTriggers.ContainsKey(strTriggerName))
            return false;

        ///暂时添加到触发列表
        TriggerInfo tInfo = new TriggerInfo();
        tInfo.strTriggerName = strTriggerName;
        tInfo.iTriggerCount = iCount;
        tInfo.onTrigger = onTrigger;
        tInfo.args = args;
        mTriggers.Add(strTriggerName, tInfo);

        ///添加一次性心跳
        TimerManager.AddTimerRepeat(strTriggerName, fDelayTime, OnTriggerCountTimer, strTriggerName, onTrigger);
        return true;
    }
    /// <summary>
    /// 延时心跳触发时间回调
    /// </summary>
    /// <param name="args"></param>
    static public void OnTriggerCountTimer(params object[] args)
    {
        if (args == null || args.Length < 2)
            return;

        ///检查是否包含触发节点
        string strTriggerName = args[0] as string;
        if (!mTriggers.ContainsKey(strTriggerName))
        {
            return;
        }

        ///检查触发次数是否到达
        TriggerInfo tInfo = mTriggers[strTriggerName];
        tInfo.iTriggerCount--;
    
        ///触发用户接口
        if (tInfo.onTrigger != null)
        {
            try
            {
                tInfo.onTrigger(strTriggerName);
            }
            catch (System.Exception ex)
            {
                LogSystem.LogError(ex.ToString());
            }
        }
        if (tInfo.iTriggerCount == 0)
        {
            ///删除触发器和心跳
            mTriggers.Remove(strTriggerName);
            TimerManager.Destroy(strTriggerName);
        }
    }
    public class FrameTriggerInfo
    {
        public int iFrameDelay=1;
        public OnTrigger onTrigger = null;
        public object[] args  = null;
    }
    public static List<FrameTriggerInfo> mFrameTrigger = new List<FrameTriggerInfo>();
    /// <summary>
    /// 创建帧延时触发器
    /// </summary>
    /// <param name="frameDelay">延时帧数</param>
    /// <param name="onTrigger">回调函数</param>
    /// <param name="args">回调参数</param>
    /// <returns></returns>
    public static void CreateFrameTrigger(int frameDelay,OnTrigger onTrigger, params object[] args)
    {
        FrameTriggerInfo ftInfo = new FrameTriggerInfo();
        ftInfo.iFrameDelay = frameDelay < 1 ? 1 : frameDelay;
        ftInfo.onTrigger = onTrigger;
        ftInfo.args = args;
        mFrameTrigger.Add(ftInfo);
    }
    /// <summary>
    /// 逐帧更新按帧延时回调
    /// </summary>
    public static void UpdateFrameTrigger()
    {
        try
        {
            if (mFrameTrigger == null)
                return;

            for (int i = mFrameTrigger.Count - 1; i >= 0; --i)
            {
                FrameTriggerInfo ftInfo = mFrameTrigger[i] as FrameTriggerInfo;
                
                if (ftInfo == null)
                {
                    mFrameTrigger.RemoveAt(i);
                    continue;
                }
                else
                {
                    ftInfo.iFrameDelay--;
                    // 因为是在LateUpdate逻辑中，所以还在本帧的时候就会进行判断
                    // 此处需要先判定>=0
                    if (ftInfo.iFrameDelay >= 0)
                        continue;

                    mFrameTrigger.RemoveAt(i);
                    if (ftInfo != null && ftInfo.onTrigger != null)
                    {
                        try
                        {
                            ftInfo.onTrigger(ftInfo.args);
                        }
                        catch (System.Exception e)
                        {
                            LogSystem.LogError("UpdateFrameTrigger : ", e.ToString());
                        }
                    }
                }
            }
        }
        catch (System.Exception ex)
        {
            LogSystem.LogError(ex.ToString());
        }
    }
    /// <summary>
    /// 创建多次同步触发器
    /// </summary>
    /// <param name="strTriggerName"></param>
    /// <param name="iTriggerCount"></param>
    /// <returns></returns>
    static public bool CreateTrigger(string strTriggerName, int iTriggerCount = 1)
    {
        if (mTriggers.ContainsKey(strTriggerName))
            return false;

        TriggerInfo tInfo = new TriggerInfo();
        tInfo.strTriggerName = strTriggerName;
        tInfo.iTriggerCount = iTriggerCount;
        mTriggers.Add(strTriggerName, tInfo);
        return true;
    }
    /// <summary>
    /// 触发同步
    /// </summary>
    /// <param name="strTriggerName"></param>
    /// <param name="onTrigger"></param>
    /// <param name="args"></param>
    static public void Trigger(string strTriggerName, OnTrigger onTrigger, params object[] args)
    {
        if (!mTriggers.ContainsKey(strTriggerName))
            return;

        ///检查是否可以触发
        TriggerInfo tInfo = mTriggers[strTriggerName];
        tInfo.iTriggerCount--;
        if (tInfo.iTriggerCount > 0)
            return;

        ///触发用户接口
        if (onTrigger != null)
        {
            try
            {
                onTrigger(args);
            }
            catch (System.Exception ex)
            {
                LogSystem.LogError(ex.ToString());
            }
        }
        ///清除触发器
        mTriggers.Remove(strTriggerName);
    }
}
