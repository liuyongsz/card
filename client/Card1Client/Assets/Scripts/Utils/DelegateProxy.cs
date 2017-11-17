using UnityEngine;
using System.Collections;
using System.Collections.Generic;

/// <summary>
/// 委托代理类
/// </summary>
public class DelegateProxy {

    public delegate void PopCacheDelegateProxy(UnityEngine.Object o);
    public static PopCacheDelegateProxy PopCacheProxy;

    /// <summary>
    /// 委拖 清除镜像引用(动作  图片 声音 文本)
    /// </summary>
    /// <param name="o"></param>
    public static void PopCache(UnityEngine.Object o)
    {
        if(PopCacheProxy != null)
            PopCacheProxy(o);
    }

    public delegate string StringBuilderDelegateProxy(params object[] args);
    public static StringBuilderDelegateProxy StringBuilderPorxy;
    /// <summary>
    /// 组装字串
    /// </summary>
    /// <param name="args"></param>
    /// <returns></returns>
    public static string StringBuilder(params object[] args)
    {
        if (StringBuilderPorxy != null)
            return StringBuilderPorxy(args);

        return string.Empty;
    }

    public delegate void SetObjRenderQDelegateProxy(GameObject oModel, int iLayer, int iRenderQueue);
    /*public static SetObjRenderQDelegateProxy SetObjRenderQProxy;
    /// <summary>
    /// 设置渲染层
    /// </summary>
    /// <param name="oModel"></param>
    /// <param name="iLayer"></param>
    /// <param name="iRenderQueue"></param>
    public static void SetObjRenderQ(GameObject oModel, int iLayer, int iRenderQueue)
    {
        if (SetObjRenderQProxy != null)
            SetObjRenderQProxy(oModel, iLayer, iRenderQueue);
    }*/
    
    public delegate void GameDestoryDelegateProxy(Object obj);
    public static GameDestoryDelegateProxy GameDestoryProxy;
    /// <summary>
    /// 删除对象
    /// </summary>
    /// <param name="obj"></param>
    public static void GameDestory(Object obj)
    {
        if (GameDestoryProxy != null)
            GameDestoryProxy(obj);
    }

    public delegate void GameDestoryPoolDelegateProxy(GameObject obj);
    public static GameDestoryPoolDelegateProxy GameDestoryPoolProxy;
    /// <summary>
    /// 删除对象Pool
    /// </summary>
    /// <param name="obj"></param>
    public static void GamePoolDestory(GameObject obj)
    {
        if (GameDestoryPoolProxy != null)
            GameDestoryPoolProxy(obj);
    }

    public delegate void ShowViewDelegateProxy(string name, object arg = null);
    public static ShowViewDelegateProxy ShowViewProxy;
    /// <summary>
    /// 显示界面
    /// </summary>
    /// <param name="name"></param>
    /// <param name="arg"></param>
    public static void ShowView(string name, object arg = null)
    {
        if (ShowViewProxy != null)
            ShowViewProxy(name, arg);
    }

    public delegate void DestroyViewDelegateProxy(string name);
    public static DestroyViewDelegateProxy DestroyViewProxy;
    /// <summary>
    /// 删除界面
    /// </summary>
    /// <param name="name"></param>
    public static void DestroyView(string name)
    {
        if (DestroyViewProxy != null)
            DestroyViewProxy(name);
    }

   
    public delegate void LoadAssetDelegateProxy(string strFileName, AssetCallBack back);
    static public LoadAssetDelegateProxy LoadAssetProxy;
    /// <summary>
    /// 加载资源
    /// </summary>
    /// <param name="strFileName"></param>
    /// <param name="callback"></param>
    public static void LoadAsset(string strFileName, AssetCallBack callback)
    {
        if (LoadAssetProxy != null)
            LoadAssetProxy(strFileName, callback);
    }

    public delegate void UnloadAssetDelegateProxy(object[] args);
    static public UnloadAssetDelegateProxy UnloadAssetProxy;
    /// <summary>
    /// 释放内存
    /// </summary>
    /// <param name="args"></param>
    public static void UnloadAsset(object[] args)
    {
        if (UnloadAssetProxy != null)
            UnloadAssetProxy(args);
    }

    //utiltools
    public delegate void DestroyEffectDelegateProxy(GameObject obj, int layer);
    static public DestroyEffectDelegateProxy DestroyEffectProxy;
    /// <summary>
    /// 删除指定层
    /// </summary>
    /// <param name="obj"></param>
    /// <param name="layer"></param>
    public static void DestroyEffect(GameObject obj, int layer)
    {
        if (DestroyEffectProxy != null)
            DestroyEffectProxy(obj, layer);
    }

    public delegate bool HasViewDelegateProxy(string name);
    static public HasViewDelegateProxy HasViewProxy;
    /// <summary>
    /// 是否有界面
    /// </summary>
    /// <param name="name"></param>
    /// <returns></returns>
    public static bool HasView(string name)
    {
        if (HasViewProxy != null)
            return HasViewProxy(name);

        return false;
    }

    public delegate void HideViewDelegateProxy(string name);
    static public HideViewDelegateProxy HideViewProxy;
    /// <summary>
    /// 隐藏界面
    /// </summary>
    /// <param name="name"></param>
    public static void HideView(string name)
    {
        if (HideViewProxy != null)
            HideViewProxy(name);
    }

    public delegate void PlayUIAudioDelegateProxy(int index);
    static public PlayUIAudioDelegateProxy PlayUIAudioProxy;
    /// <summary>
    /// 播放界面音效
    /// </summary>
    /// <param name="index"></param>
    public static void PlayUIAudio(int index)
    {
        if (PlayUIAudioProxy != null)
            PlayUIAudioProxy(index);
    }

    public delegate void GetGuiCompentDelegateProxy(Dictionary<int, GameObject> lastgameObject, ref List<Component> newPanels, ref List<Component> tempPanels);
    static public GetGuiCompentDelegateProxy GetGuiCompentProxy;
    /// <summary>
    /// 不知什么功能
    /// </summary>
    /// <param name="lastgameObject"></param>
    /// <param name="newPanels"></param>
    /// <param name="tempPanels"></param>
    public static void GetGuiCompent(Dictionary<int, GameObject> lastgameObject, ref List<Component> newPanels, ref List<Component> tempPanels)
    {
        if (GetGuiCompentProxy != null)
            GetGuiCompentProxy(lastgameObject, ref newPanels, ref tempPanels);
    }

    public delegate void OnShareCallbackDelegateProxy(string result);
    static public OnShareCallbackDelegateProxy OnShareCallbackProxy;
    /// <summary>
    /// 分享回调
    /// </summary>
    /// <param name="result">0:成功 -2:取消 -3:发送失败 -4:授权失败 -5:微信不支持</param>
    public static void OnShareCallback(string result)
    {
        if (OnShareCallbackProxy != null)
            OnShareCallbackProxy(result);
    }
    
    public delegate bool OnSendMessageCallbackDelegateProxy(int iMSG, params object[] objects);
    static public OnSendMessageCallbackDelegateProxy onSendMessageCallbackDelegateProxy;

    /// <summary>
    /// 点击按钮发送消息回调
    /// </summary>
    /// <param name="iMSG"></param>
    /// <param name="objects"></param>
    public static void OnSendMessageCallback(int iMSG, params object[] objects)
    {
        if (onSendMessageCallbackDelegateProxy != null)
            onSendMessageCallbackDelegateProxy(iMSG, objects);
    }
}
