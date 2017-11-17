using UnityEngine;
using System.Collections;
using System.Collections.Generic;

/// <summary>
/// 定义
/// </summary>
public class Define{

    #if UNITY_EDITOR
    /// <summary>启动增量更新模式</summary>
    public static bool UpdateMode = false;                      //更新模式-默认关闭 
    public static bool UseLoacalRes = true;                     //是否使用本地资源
    #else
    public static bool UpdateMode = true;                       //更新模式-默认关闭 
    public static bool UseLoacalRes = false;                    //是否使用本地资源
    #endif

    public static bool WaiWangDebug = false;                    //外网测试
    public const string WaiWangURL = "http://47.92.120.220:9000/ClientRes/";

    public const bool DebugMode = false;                       //调试模式-用于内部测试
    public const int GameFrameRate = 26;                        //游戏帧频
    public const string AppName = "football";               //应用程序名称
    public const string AssetDir = "StreamingAssets";           //素材目录 
    public const string AppPrefix = AppName + "_";              //应用程序前缀
    public const bool LuaBundleMode = true;                     //Lua代码AssetBundle模式

    /// <summary>加载图片是否是通道分离的图片</summary>
    public static bool ChannelSeparationImage = true;

    public static bool TestMsg = true;
    public static bool VSTest = false;
    public static bool NoAni = true;


    public static string FrameworkRoot
    {
        get
        {
            return Application.dataPath + "/" + AppName;
        }
    }

   
}
