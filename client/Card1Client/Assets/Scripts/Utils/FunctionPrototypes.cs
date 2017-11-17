using System;

/// <summary>
/// 对象加载完成回调
/// </summary>
/// <param name="odata">已加载对象</param>
public delegate void AssetCallBack(params object[] args);
/// <summary>
/// 动画播放时回调
/// </summary>
/// <param name="aProxy"></param>
public delegate void OnAnimationPlayCallBack(string strAnimationName,AnimationProxy aProxy);

/// <summary>
/// 事件回调原型
/// </summary>
public delegate void OnActionCallback();