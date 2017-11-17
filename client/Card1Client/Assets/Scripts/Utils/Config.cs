/// 作者 wanglc
/// 日期 20140923
/// 实现目标  启动阶段相关参数配置

using UnityEngine;
using System.Collections.Generic;

/// <summary>
/// 包含信息如下
/// 1，更新地址配置(固定配置)
/// 2，更新引导配置(取回后设置)
/// 3，资源列表信息(取回设置)
/// 4，服务器列表(取回设置)
/// </summary>

/// <summary>
/// 游戏质量
/// </summary>
public enum GameQuality
{
    /// <summary>
    /// 极简
    /// </summary>
    SUPER_LOW = 0,
    /// <summary>
    /// 低
    /// </summary>
    LOW = 1,
    /// <summary>
    /// 中
    /// </summary>
    MIDDLE = 2,
    /// <summary>
    /// 高
    /// </summary>
    HIGH = 3
};

public class Config
{
    /// <summary>
    /// 地区
    /// </summary>
    public enum EnumArea
    {
        None = 0,
        Area_China,
        /// <summary>
        /// 台湾
        /// </summary>
        Area_Taiwan,
        /// <summary>
        /// 欧美
        /// </summary>
        Area_Europe,
        /// <summary>
        /// 日韩
        /// </summary>
        Area_JSK,
        /// <summary>
        /// 东南亚
        /// </summary>
        Area_SoutheastAsia
    }

    /// <summary>
    /// 语言类型
    /// </summary>
    public class LanguageType
    {
        /// <summary>
        /// 简体中文
        /// </summary>
        public static string LT_ChineseS = "china";
        /// <summary>
        /// 繁体中文
        /// </summary>
        public static string LT_ChineseT = "chinaT";
        /// <summary>
        /// 英文
        /// </summary>
        public static string LT_English = "english";
        /// <summary>
        /// 泰语
        /// </summary>
        public static string LT_Thai = "thai";
        /// <summary>
        /// 越南文
        /// </summary>
        public static string LT_Vietnamese = "vietnamese";
        /// <summary>
        /// 法文
        /// </summary>
        public static string LT_French = "french";
        /// <summary>
        /// 德语
        /// </summary>
        public static string LT_German = "german";
        /// <summary>
        /// 波兰语
        /// </summary>
        public static string LT_Polish = "polish";
        /// <summary>
        /// 意大利语
        /// </summary>
        public static string LT_Italian = "italian";
        /// <summary>
        /// 土耳其语
        /// </summary>
        public static string LT_Turkish = "turkish";
        /// <summary>
        /// 俄罗斯
        /// </summary>
        public static string LT_Russian = "russian";
        /// <summary>
        /// 韩语
        /// </summary>
        public static string LT_Korean = "korean";
        /// <summary>
        /// 日语
        /// </summary>
        public static string LT_Japanese = "japanese";
        /// <summary>
        /// 葡萄牙语
        /// </summary>
        public static string LT_Portuguese = "portuguese";
        /// <summary>
        /// 西班牙语
        /// </summary>
        public static string LT_Spanish = "spanish";
    }
    static UIFont snailFont = null;
    public static UIFont SnailFont
    {
        get
        {
            return snailFont;
        }
        set
        {
            snailFont = value;
        }
    }
    static UIFont nGuiFont = null;
    public static UIFont NGUIFont
    {
        get
        {
            return nGuiFont;
        }
        set
        {
            nGuiFont = value;
        }
        
    }
    public static UIFont LoadUIFont(string strFontName)
    {
        if (Application.isPlaying)
        {
            string strFileName = "Local/Font/" + strFontName;
            Object o = Resources.Load(strFileName);
            if (o != null)
            {
                GameObject go = o as GameObject;
                UIFont font = go.GetComponent<UIFont>();
                if (font != null)
                {
                    return font;
                }
            }
        }
        else
        {
            ///加载主字体
#if UNITY_EDITOR
            string strFileName = "Assets/Resources/Local/Font/" + strFontName + ".prefab";
            Object o = UnityEditor.AssetDatabase.LoadMainAssetAtPath(strFileName);
            if (o != null)
            {
                GameObject go = o as GameObject;
                UIFont font = go.GetComponent<UIFont>();
                if (font != null)
                {
                    return font;
                }
            }
#endif
        }
        return null;
  
    }
    /// <summary>
    /// 是否是编辑器模式
    /// </summary>
    public static bool bEditor
    {
        get
        {
#if UNITY_EDITOR
            return true;
#else
            return false;
#endif
        }
    }
    /// <summary>
    /// 是否是安卓平台模式
    /// </summary>
    public static bool bAndroid
    {
        get
        {
#if UNITY_ANDROID
            return true;
#else
            return false;
#endif
        }
    }
    /// <summary>
    /// 是否是IOS平台模式
    /// </summary>
    public static bool bIPhone
    {
        get
        {
#if UNITY_IPHONE
            return true;
#else
            return false;
#endif
        }
    }

    public static bool bBindPhine = false;
    public static bool bWin
    {
        get
        {

#if UNITY_STANDALONE_WIN
            return true;
#else
            return false;
#endif
        }
    }
    public static bool bMac
    {
        get
        {
#if UNITY_STANDALONE_OSX
            return true;
#else
            return false;
#endif
        }
    }
    /// <summary>
    /// 是否是anysdk
    /// </summary>
    public static bool bANYSDK = false;

    public const string ANYSDK = "ANYSDK";

    public static string LaunchName = "Launch";

    public static string MessageName = "MessageName";

    public static string LanguagePath = "Language/";

    public static string Language = LanguageType.LT_ChineseS;
    /// <summary>
    /// 所在地区
    /// </summary>
    public static EnumArea GameArea { get; private set; }

    /// <summary>
    /// 玩家帐号
    /// </summary>
    public const string USER_ACCOUNT = "useraccount";
    /// <summary>
    /// 玩家名
    /// </summary>
    public const string USER_NAME = "user_name";
    /// <summary>
    /// 服务器id
    /// </summary>
    public const string SERVERID = "serverid";
    /// <summary>
    /// 游戏id
    /// </summary>
    public const string GAME_ID = "game_id";
    /// <summary>
    /// 回调地址
    /// </summary>
    public const string APPSTORE_URL = "appstore_url";

    /// <summary>
    /// 是不是appStore
    /// </summary>
    public static bool bAppStore = false;
    /// <summary>
    /// 是否初始化失败（必要资源加载失败）
    /// </summary>
    public static bool bGameInitFailed = false;
    public static string mResourceServerIp = string.Empty;
    public static string mResourceDomainServerIp = string.Empty;
    public static bool bisOpenCommentValue = true;//设置是否开启苹果内置评论

    public static string Appstore = "appstore";
    public static string Snail = string.Empty;
    /// <summary>
    /// 默认id包
    /// </summary>
    public static string DefaultBundleIdentifier = "com.snailgames.jysgsy.snail";

    public static string DefaulBundleIdMac = "com.snailgames.jysgsy.mac";

    public static string serverName = string.Empty;
    //缓存基本服务器配置信息
    public static string gameId = string.Empty;
    public static string accessId = string.Empty;
    public static string accessPassword = string.Empty;
    public static string accessType = string.Empty;
    public static string seed = string.Empty;
    public static string serverId = string.Empty;
    public static string pushPhoneTypeName = string.Empty;
    public static string dataCollectionUrl = string.Empty;
    public static bool mbNetDumper = true;

    //是否领取奖励
    public static bool isPickGuildReward = false;

    public static string errorLogUrl = string.Empty;
    public static string errorLogUrlId = string.Empty;
    public static string NativeErrorUrl = string.Empty;
    public static string appid = string.Empty;
    public static string appkey = string.Empty;
    public static string registerServerUrl = string.Empty;
    public static bool isFirstLogin = false;
    public static bool mbEnableCatcher = false;
    public static bool ErrorLogPhoneOpen = false;
    /// <summary>
    /// 默认为false
    /// </summary>
    public static bool debug = false;

    public string versionUpdateUrl = string.Empty;
    public static string channelId = string.Empty;
    public static string mediaId = string.Empty;
    public static bool IsInstallWechat = false;
    public static string channelName = string.Empty;
    public static string cid = string.Empty;
    public static string idfa = string.Empty;
    /// <summary>
    /// 子包中配置
    /// </summary>
    public static string strChannelUniqueName = string.Empty;

    /// <summary>
    /// 子包中配置 游戏的配置路径
    /// </summary>
    public static string strAddressId = string.Empty;

    public static string BundleIdentifier = string.Empty;

    public static Dictionary<string, List<string>> accInfo = new Dictionary<string, List<string>>();

    /// <summary>
    /// 硬件适应配置等级，该值禁止在其他类修改(安卓默认SuperLow，避免没有取得CPU信息的情况)
    /// </summary>
#if UNITY_ANDROID && !UNITY_EDITOR
    private static GameQuality mCurQuality = GameQuality.SUPER_LOW;
#else
    private static GameQuality mCurQuality = GameQuality.HIGH;
#endif

    /// <summary>
    /// 硬件适应配置等级，该值禁止在其他类修改
    /// </summary>
    public static GameQuality CurQuality
    {
        get { return mCurQuality; }
        set { mCurQuality = value; }
    }

    /// <summary>
    /// 硬件适应配置等级，该值用于静态代码调用SystemSetting.ImageQuality
    /// </summary>
    private static GameQuality mCurSettingQuality = GameQuality.HIGH;

    /// <summary>
    /// 硬件适应配置等级，该值用于静态代码调用SystemSetting.ImageQuality
    /// </summary>
    public static GameQuality CurSettingQuality
    {
        get { return mCurSettingQuality; }
        set { mCurSettingQuality = value; }
    }

    // 场景物件，品质低时剔除这些物件
    public static string[] SceneObjects =
    {
        "gouhuo", "hudie", "lazhu", "pubu", "shuibowen", "xianglu", "yun", "yinghuo",
        "liusha", "shacheng", "languang", "luoye", "shuihua", "bianfu", "light", "qipao",
        "shui", "shuidi", "shuiqiang", "xiaohuo", "yinghuochong", "xianglu", "yanjiang",
        "rongyan", "baiwu", "chuansong"
    };
    public static bool GetSceneObjects(string sceneRes)
    {
        if (string.IsNullOrEmpty(sceneRes))
        {
            return true;
        }

        for (int i = 0; i < SceneObjects.Length; ++i)
        {
            if (sceneRes.Contains(SceneObjects[i]))
            {
                return true;
            }
        }

        return false;
    }

    /// <summary>
    /// 广告功能未显示出来	游戏本地需设置广告地址，不能从服务器上读取，第二次运行才正常显示。(本地需要配个地址？？？？？)
    /// </summary>
    public static string strShowAppAdUrl = "http;//10.203.11.48/ad/ad.json";
    public static string appStoreURL = string.Empty;
    /// <summary>
    /// 安装包更新地址(json文件 安卓与苹果共用)
    /// </summary>
    public static string ClientInstallUrl = string.Empty;

    /// <summary>
    /// 资源版本号
    /// </summary>
    public static int iResourceVersion = 0;

    public static string phoneType = string.Empty;
    public static string version = string.Empty;
    public static string wxAndroidId = string.Empty;
    public static string wxiOSId = string.Empty;

    public static string pushServiceIP = string.Empty;
    public static string pushServicePOST = string.Empty;
    public static string channelAppSecret = string.Empty;
    public static string Weixin_Link_Url = string.Empty;
    public static string act_Url = string.Empty;
	public static string IfShowNoOpenJob = string.Empty;	// 1 显示未开放角色， 0或其他 不显示未开放角色

	//保存当前玩家信息
	public static string curreRoleName = string.Empty;
    public static int curreRoleLevel = 0;
    public static string curreRoleID = string.Empty;
    /// <summary>
    /// 充值回调地址
    /// </summary>
    public static string payCallBackURL = string.Empty;

    /// <summary>
    /// 评论需要
    /// </summary>
    public static string strAppStoreID = string.Empty;
    /// <summary>
    /// 公告文件
    /// </summary>
    public static string strNoticeName = string.Empty;

    /// <summary>
    /// 渠道Name
    /// </summary>
    public static string strChannelName = string.Empty;

    /// <summary>
    /// 订单类型，根据不同渠道区分不同处理方式。
    /// </summary>
    public static int mOrderType = 0;

    /// <summary>
    /// 是否需要采集,打包一定要开开！
    /// </summary>
    public static bool bNeedDataCollect = true;
    public static int mQueueWaitTime = 5;
    public static int GetQueueWaitTime()
    {
        return mQueueWaitTime;
    }

    /// <summary>
    /// 屏幕最大分辨率
    /// </summary>
    public static string mScreenMaxResolution = string.Empty;

    /// <summary>
    /// 屏幕分辨率比例
    /// </summary>
    public static string mScreenScale = string.Empty;

    //获取屏幕尺寸
    public static string ScreenResolution
    {
        get { return ResolutionConstrain.Instance.width + "*" + ResolutionConstrain.Instance.height; }
    }

    //账户名
    public static string accountName = string.Empty;


    public static bool mbDynamicRes = false;                  ///是否是调试启动
    public static bool mbMd5 = false;                     ///资源包是否使用md5

    // 设备总内存数（float类型，例如：2.0GB）
    public static float mDeviceTotalMemory = 0.0f;

    public static string mDeviceName = string.Empty;

    ///是否是评审版本客户端
    public static bool mbVerifyVersion
    {
        get
        {
            if (string.IsNullOrEmpty(mstrLocalVersion))
                return false;

            string remoteVersion = GetUpdaterConfig("VerifyVerison", "Value");
            if (string.IsNullOrEmpty(remoteVersion))
                return false;

            return mstrLocalVersion == remoteVersion;
        }
    }

    public class GameAddress
    {
        public string strID = string.Empty;
        public string strName = string.Empty;
        public string strDomainAddress = string.Empty;
        public string strIPAddress = string.Empty;
    }

    /// <summary>
    /// 更新引导参数设置
    /// </summary>
    public static Dictionary<string, Dictionary<string, string>> mDictUpdaterGuide = new Dictionary<string, Dictionary<string, string>>();
    /// <summary>
    /// 服务器列表
    /// </summary>
    public static List<Dictionary<string, string>> mDictServerList = new List<Dictionary<string, string>>();
    /// <summary>
    /// 所有的服务器列表
    /// </summary>
    public static List<Dictionary<string, string>> mDictAllServerList = new List<Dictionary<string, string>>();

    /// <summary>
    /// 文言表
    /// </summary>
    public static Dictionary<string, string> mWordsDict = new Dictionary<string, string>();

    /// <summary>
    /// 商店数据
    /// </summary>
    public static string mstrShopData = string.Empty;

    /// <summary>
    /// 精彩活动与公告
    /// </summary>
    public static string mstrServerNotice = string.Empty;

    public class PushServerInfo
    {
        public string strServerID = string.Empty;
        public string strServerName = string.Empty;
        public string strServerIP = string.Empty;
        public string strServerPort = string.Empty;
        public string strApiKey = string.Empty;
    }

    public class CustomInfo
    {
        public string strCustomInfoID = string.Empty;
        public string strCustomInfoVaule = string.Empty;
    }

    /// <summary>
    /// 设置整数版本号
    /// </summary>
    /// <param name="strResourceVersion"></param>
    public static void SetResourceVersion(string strResourceVersion)
    {
        iResourceVersion = 0;
        if (string.IsNullOrEmpty(strResourceVersion))
        {
            LogSystem.LogWarning("Version Error ", strResourceVersion);
            return;
        }
        string sTempVersion = strResourceVersion.Replace(".", string.Empty);
        if (string.IsNullOrEmpty(sTempVersion))
        {
            LogSystem.LogWarning("Version Error ", sTempVersion);
            return;
        }
        iResourceVersion = int.Parse(sTempVersion);
    }

    /// <summary>
    /// 渠道信息
    /// </summary>
    //public class ChannelInfo
    //{
    //    public string strID = string.Empty;                             //id
    //    public string strName = string.Empty;                           //name
    //    public string strPayCallBackUrl = string.Empty;                 //充值回调地址
    //    public string strClientInstallUrl = string.Empty;               //安装包更新的json文件
    //}

    public class NoticeInfo
    {
        public string strText;
        public int iIndex;
    }

    /// <summary>
    /// 推送服务器列表
    /// </summary>

    public static Dictionary<string, CustomInfo> mDictCustomInfoList = new Dictionary<string, CustomInfo>();

    /// <summary>
    /// 渠道信息
    /// </summary>
    //public static Dictionary<string, ChannelInfo> mDicChannelInfo = new Dictionary<string, ChannelInfo>();

    public static List<PushServerInfo> mDictPushServerList = new List<PushServerInfo>();
    public static string mstrPreSuffix = "File://";
    public static string mstrStreamSuffix = "File://";
    /// <summary>
    /// 本地资源根目录
    /// </summary>
    public static string mstrAssetBundleRootPath = string.Empty;

    /// <summary>
    /// 拷贝资源根目录
    /// </summary>
    public static string mstrSourceResRootPath = string.Empty;

    /// <summary>
    /// 本地资源StreamingAsset根目录
    /// </summary>
    public static string mstrStreamResRootPath = string.Empty;
    public enum LoadStatus
    {
        LS_INIT,
        LS_FAILED,
        LS_SUCCUSED,
        LS_MAX
    }
    /// <summary>
    /// 设置语言环境
    /// </summary>
    /// <param name="iType">环境类型0:中文 1:英文 2：俄文</param>
    public static void SetLanguage(string sType)
    {
        if (string.IsNullOrEmpty(sType))
        {
            sType = LanguageType.LT_ChineseS;
        }
        LanguagePath = LanguagePath + sType + "/";
    }
    /// <summary>
    /// 当前设备的mac地址
    /// </summary>
    public static string mstrMacAddress = string.Empty;
    public static string GetMacAddress()
    {
        return mstrMacAddress;
    }
    public static void SetMacAddress(string strMacAddress)
    {
        mstrMacAddress = strMacAddress;
    }
    /// <summary>
    /// 设置平台流加载前缀
    /// </summary>
    /// <returns></returns>
    public static string GetPreSuffix()
    {
        return mstrPreSuffix;
    }
    public static void SetPreSuffix(string strSuffix)
    {
        mstrPreSuffix = strSuffix;
    }
    /// <summary>
    /// 设置平台流加载前缀
    /// </summary>
    /// <returns></returns>
    public static string GetStreamSuffix()
    {
        return mstrStreamSuffix;
    }
    public static void SetStreamSuffix(string strSuffix)
    {
        mstrStreamSuffix = strSuffix;
    }
    /// <summary>
    /// 返回更新服务器地址，如果有多个，随机一个，无为空
    /// </summary>
    /// <returns>更新服务器地址</returns>
    public static GameAddress GetUpdaterAddress()
    {
        GameAddress address = new GameAddress();
        address.strIPAddress = mResourceServerIp + "/" + Config.mstrInstallationVersion;
        address.strDomainAddress = mResourceDomainServerIp + "/" + Config.mstrInstallationVersion;

        return address;
    }

    /// <summary>
    /// 获取更新配置信息
    /// </summary>
    /// <param name="strKey">主键名</param>
    /// <param name="strName">次键名</param>
    /// <returns>键值</returns>
    public static string GetUpdaterConfig(string strKey, string strName)
    {
        if (mDictUpdaterGuide.ContainsKey(strKey))
        {
            if (mDictUpdaterGuide[strKey].ContainsKey(strName))
            {
                return mDictUpdaterGuide[strKey][strName];
            }
        }
        return string.Empty;
    }

    /// <summary>
    /// 取本地资源根目录
    /// </summary>
    /// <returns>目录</returns>
    public static string GetAssetBundleRootPath()
    {
        return mstrAssetBundleRootPath;
    }
    /// <summary>
    /// 设置本地资源根目录
    /// </summary>
    public static void SetAssetBundleRootPath(string strRootPath)
    {
        mstrAssetBundleRootPath = strRootPath;
    }

    /// <summary>
    /// 评审服
    /// </summary>
    public static string mstrVersionUseage = string.Empty;
    public static string GetVersionUseage()
    {
        return mstrVersionUseage;
    }
    /// <summary>
    /// 设置评审服号
    /// </summary>
    /// <param name="strLocalVersion"></param>
    public static void SetVersionUseage(string strValue)
    {
        mstrVersionUseage = strValue;
    }


    /// <summary>
    /// 安装包版本号(用于更新地址获取)
    /// </summary>
    public static string mstrInstallationVersion = string.Empty;

    public static string GetInstallationVersion()
    {
        return mstrInstallationVersion;
    }
    /// <summary>
    /// 设置安装包版本号
    /// </summary>
    /// <param name="strValue"></param>
    /// <returns></returns>
    public static void SetInstallationVersion(string strValue)
    {
        mstrInstallationVersion = strValue;
    }


    /// <summary>
    /// 本地安装包的版本号(用于评审时，走评审流程使用)
    /// </summary>
    public static string mstrLocalVersion = string.Empty;
    public static string GetLocalVersion()
    {
        return mstrLocalVersion;
    }
    /// <summary>
    /// 设置本地安装包版本号
    /// </summary>
    /// <param name="strLocalVersion"></param>
    public static void SetLocalVersion(string strLocalVersion)
    {
        mstrLocalVersion = strLocalVersion;
    }

    /// <summary>
    /// 本地安装包的版本号(用于评审时，走评审流程使用)
    /// </summary>
    public static int miLocalNumberVersion = 1;
    public static int GetLocalNumberVersion()
    {
        return miLocalNumberVersion;
    }
    /// <summary>
    /// 设置本地安装包版本号
    /// </summary>
    /// <param name="strLocalVersion"></param>
    public static void SetLocalNumberVersion(string strLocalNumberVersion)
    {
        if (string.IsNullOrEmpty(strLocalNumberVersion))
        {
            miLocalNumberVersion = 0;
        }
        else
        {
            try
            {
                miLocalNumberVersion = int.Parse(strLocalNumberVersion);
            }
            catch (System.Exception ex)
            {
                miLocalNumberVersion = 0;
                LogSystem.LogError(ex.ToString());
            }
        }
    }
    /// <summary>
    /// 取远程资源根目录
    /// </summary>
    /// <returns>目录</returns>
    public static string GetSourceRootPath()
    {
        return mstrSourceResRootPath;
    }
    /// <summary>
    /// 设置远程资源根目录
    /// </summary>
    public static void SetSourceRootPath(string strRootPath)
    {
        mstrSourceResRootPath = strRootPath;
    }

    /// <summary>
    /// 取streamingasset资源根目录
    /// </summary>
    /// <returns>目录</returns>
    public static string GetStreamRootPath()
    {
        return mstrStreamResRootPath;
    }
    /// <summary>
    /// 设置streamingasset资源根目录
    /// </summary>
    public static void SetStreamRootPath(string strRootPath)
    {
        mstrStreamResRootPath = strRootPath;
    }

    /// <summary>
    /// 设置更新引导参数
    /// </summary>
    /// <param name="text">引导文件信息</param>
    public static void SetUpdateGuideInfo(string xmlString)
    {
        if (string.IsNullOrEmpty(xmlString))
        {
            return;
        }
        int index = xmlString.IndexOf('<');
        xmlString = xmlString.Substring(index);
        xmlString.Trim();

        XMLParser parse = new XMLParser();
        XMLNode rootnode = parse.Parse(xmlString);
        XMLNodeList xmlNodeList = (XMLNodeList)rootnode["Resources"];
        if (xmlNodeList == null)
        {
            return;
        }
        ///解析首段中的类型定义
        for (int i = 0; i < xmlNodeList.Count; i++)
        {
            XMLNode xmlnode = xmlNodeList[i] as XMLNode;
            XMLNodeList childNodeList1 = xmlnode.GetNodeList("Resource");
            if (childNodeList1 != null)
            {
                for (int j = 0; j < childNodeList1.Count; j++)
                {
                    XMLNode childnode = childNodeList1[j] as XMLNode;
                    Dictionary<string, string> resource = new Dictionary<string, string>();
                    string strID = string.Empty;
                    foreach (System.Collections.DictionaryEntry objDE in childnode)
                    {
                        if (objDE.Value == null)
                            continue;

                        string strKey = objDE.Key as string;
                        if (strKey[0] != '@')
                            continue;

                        strKey = strKey.Substring(1);
                        if (strKey == "ID")
                        {
                            strID = (string)objDE.Value;
                        }
                        else
                        {
                            if (resource.ContainsKey(strKey))
                            {
                                resource[strKey] = (string)objDE.Value;
                            }
                            else
                            {
                                resource.Add(strKey, (string)objDE.Value);
                            }
                        }
                    }
                    if (mDictUpdaterGuide.ContainsKey(strID))
                    {
                        mDictUpdaterGuide[strID] = resource;
                    }
                    else
                    {
                        mDictUpdaterGuide.Add(strID, resource);
                    }
                }
            }
        }
    }

    /// <summary>
    /// 设置服务器公告信息(精彩活动)
    /// </summary>
    /// <param name="xmlString"></param>
    public static void SetServerNotice(string xmlString)
    {
        mstrServerNotice = xmlString;
    }

    public static int Compare_Index(NoticeInfo aInfo, NoticeInfo bInfo)
    {
        if (aInfo.iIndex > bInfo.iIndex)
            return 1;
        else if (aInfo.iIndex < bInfo.iIndex)
            return -1;
        else
            return 0;
    }

    /// <summary>
    /// 设置服务器信息
    /// </summary>
    /// <param name="text">服务器列表文本</param>
    public static void SetCustomInfoList(string xmlString)
    {
        int index = xmlString.IndexOf('<');
        xmlString = xmlString.Substring(index);
        xmlString.Trim();
        XMLParser parse = new XMLParser();
        XMLNode rootnode = parse.Parse(xmlString);
#if UNITY_STANDALONE_OSX
		bAppStore = true;
#else
        bAppStore = (channelName == Appstore);
#endif

        SetCustomInfo((XMLNodeList)rootnode["Resources"]);
        InitResouceInfo();
        SetChannelInfo(rootnode);
#if UNITY_ANDROID && !UNITY_EDITOR
        SetAccInfo(rootnode);
#endif
    }

    /// <summary>
    /// 设置渠道信息
    /// </summary>
    /// <param name="xmlNodeList"></param>
    static void SetChannelInfo(XMLNode rootnode)
    {
        if (rootnode == null)
        {
            return;
        }

        XMLNodeList xmlNodeList = rootnode.GetNodeList("Resources>0>Channel>0>Property");
        GameArea = EnumArea.None;

        if (string.IsNullOrEmpty(strChannelUniqueName))
        {
#if UNITY_IPHONE
            strChannelUniqueName = "appstore";
#else
            strChannelUniqueName = "android_snail";
#endif
        }

        ///解析首段中的类型定义
        foreach (XMLNode n in xmlNodeList)
        {
            string strID = n.GetValue("@ID");
            if (strID == strChannelUniqueName)
            {
                payCallBackURL = n.GetValue("@PayCallBackUrl");
                ClientInstallUrl = n.GetValue("@ClientInstallUrl");
                strNoticeName = n.GetValue("@NoticeName");
                strChannelName = n.GetValue("@ChannelName");
                mOrderType = StaticUtilTools.IntParse(n.GetValue("@OrderType"));
                //采集
                bNeedDataCollect = "1".Equals(n.GetValue("@DataCollect"));
#if UNITY_STANDALONE_OSX && !UNITY_EDITOR
			bNeedDataCollect = true;
#endif
                //地区
                string strArea = n.GetValue("@Area");
                if (!string.IsNullOrEmpty(strArea))
                {
                    int iArea;
                    if (int.TryParse(strArea, out iArea))
                    {
                        GameArea = (EnumArea)iArea;
                    }
                }
                return;
            }
        }
        LogSystem.LogWarning("channelName not have info ", strChannelUniqueName);
    }

    /// <summary>
    /// 设置反外挂信息
    /// </summary>
    /// <param name="rootnode"></param>
    static void SetAccInfo(XMLNode rootnode)
    {
        if (rootnode == null)
        {
            LogSystem.LogWarning("SetAccInfo is null");
            return;
        }

        XMLNodeList xmlNodeList = rootnode.GetNodeList("Resources>0>Acc>0>Property");
        if (xmlNodeList == null)
        {
            LogSystem.LogWarning("SetAccInfo is null");
            return;
        }
        foreach (XMLNode n in xmlNodeList)
        {
            string strID = n.GetValue("@No");
            if (accInfo.ContainsKey(strID))
            {
                accInfo[strID].Add(n.GetValue("@Name"));
            }
            else
            {
                List<string> info = new List<string>();
                info.Add(n.GetValue("@Name"));
                accInfo.Add(strID, info);
            }
        }
    }

    /// <summary>
    /// 游戏配置信息
    /// </summary>
    /// <param name="xmlNodeList"></param>
    static void SetCustomInfo(XMLNodeList xmlNodeList)
    {
        if (xmlNodeList == null)
        {
            LogSystem.LogWarning("SetCustomInfo is null");
            return;
        }

        ///解析首段中的类型定义
        for (int i = 0; i < xmlNodeList.Count; i++)
        {
            XMLNode xmlnode = xmlNodeList[i] as XMLNode;
            XMLNodeList childNodeList1 = xmlnode.GetNodeList("Resource");
            if (childNodeList1 != null)
            {
                for (int j = 0; j < childNodeList1.Count; j++)
                {
                    XMLNode childnode = childNodeList1[j] as XMLNode;
                    CustomInfo psInfo = new CustomInfo();
                    foreach (System.Collections.DictionaryEntry objDE in childnode)
                    {
                        if (objDE.Value == null)
                            continue;

                        string strKey = objDE.Key as string;
                        if (strKey[0] != '@')
                            continue;

                        strKey = strKey.Substring(1);
                        if (strKey == "ID")
                        {
                            psInfo.strCustomInfoID = objDE.Value as string;
                        }
                        else if (strKey == "Value")
                        {
                            psInfo.strCustomInfoVaule = objDE.Value as string;
                        }
                    }
                    if (mDictCustomInfoList.ContainsKey(psInfo.strCustomInfoID))
                    {
                        mDictCustomInfoList[psInfo.strCustomInfoID] = psInfo;
                    }
                    else
                    {
                        mDictCustomInfoList.Add(psInfo.strCustomInfoID, psInfo);
                    }
                }
            }
        }
    }

    /// <summary>
    /// 获取配置信息
    /// </summary>
    /// <param name="strKey"></param>
    /// <returns></returns>
    public static string GetCustomValue(string strKey)
    {
        CustomInfo cInfo;
        if (mDictCustomInfoList.TryGetValue(strKey, out cInfo))
        {
            return cInfo.strCustomInfoVaule;
        }
        return string.Empty;
    }

    /// <summary>
    /// 初使化游戏信息
    /// </summary>
    public static void InitResouceInfo()
    {
        if (mDictCustomInfoList.ContainsKey("accessID"))
        {
            accessId = mDictCustomInfoList["accessID"].strCustomInfoVaule;
        }
        if (mDictCustomInfoList.ContainsKey("accessPwd"))
        {
            accessPassword = mDictCustomInfoList["accessPwd"].strCustomInfoVaule;
        }
        if (mDictCustomInfoList.ContainsKey("seed"))
        {
            seed = mDictCustomInfoList["seed"].strCustomInfoVaule;
        }
        if (mDictCustomInfoList.ContainsKey("errorLogUrl"))
        {
            errorLogUrl = mDictCustomInfoList["errorLogUrl"].strCustomInfoVaule;
        }
        if (mDictCustomInfoList.ContainsKey("errorLogUrlID"))
        {
            errorLogUrlId = mDictCustomInfoList["errorLogUrlID"].strCustomInfoVaule;
        }
        if (mDictCustomInfoList.ContainsKey("NativeErrorUrl"))
        {
            NativeErrorUrl = mDictCustomInfoList["NativeErrorUrl"].strCustomInfoVaule;
        }
        if (mDictCustomInfoList.ContainsKey("appid"))
        {
            appid = mDictCustomInfoList["appid"].strCustomInfoVaule;
        }
        if (mDictCustomInfoList.ContainsKey("Weixin_Link_Url"))
        {
            Weixin_Link_Url = mDictCustomInfoList["Weixin_Link_Url"].strCustomInfoVaule;
        }
        if (mDictCustomInfoList.ContainsKey("ACT_Url"))
        {
            act_Url = mDictCustomInfoList["ACT_Url"].strCustomInfoVaule;
        }
		if (mDictCustomInfoList.ContainsKey("IfShowNoOpenJob"))
		{
			IfShowNoOpenJob = mDictCustomInfoList["IfShowNoOpenJob"].strCustomInfoVaule;
		}
        if (mDictCustomInfoList.ContainsKey("appkey"))
        {
            appkey = mDictCustomInfoList["appkey"].strCustomInfoVaule;
        }
        if (mDictCustomInfoList.ContainsKey("wxAndroidId"))
        {
            wxAndroidId = mDictCustomInfoList["wxAndroidId"].strCustomInfoVaule;
        }
        if (mDictCustomInfoList.ContainsKey("wxiOSId"))
        {
            wxiOSId = mDictCustomInfoList["wxiOSId"].strCustomInfoVaule;
        }
        if (mDictCustomInfoList.ContainsKey("dataCollectionUrl"))
        {
            dataCollectionUrl = mDictCustomInfoList["dataCollectionUrl"].strCustomInfoVaule;
        }
        if (mDictCustomInfoList.ContainsKey("ErrorLogPhoneOpen"))
        {
            string srt = mDictCustomInfoList["ErrorLogPhoneOpen"].strCustomInfoVaule;
            if (srt == "true")
            {
                ErrorLogPhoneOpen = true;
            }
            else
            {
                ErrorLogPhoneOpen = false;
            }
        }
        if (mDictCustomInfoList.ContainsKey("regUrl"))
        {
            registerServerUrl = mDictCustomInfoList["regUrl"].strCustomInfoVaule;
        }
        if (mDictCustomInfoList.ContainsKey("accessType"))
        {
            accessType = mDictCustomInfoList["accessType"].strCustomInfoVaule;
        }
        if (mDictCustomInfoList.ContainsKey("gameID"))
        {
            gameId = mDictCustomInfoList["gameID"].strCustomInfoVaule;
        }
        if (mDictCustomInfoList.ContainsKey("mediaId"))
        {
            mediaId = mDictCustomInfoList["mediaId"].strCustomInfoVaule;
        }
        if (mDictCustomInfoList.ContainsKey("ScreenMaxResolution"))
        {
            mScreenMaxResolution = mDictCustomInfoList["ScreenMaxResolution"].strCustomInfoVaule;
        }
        if (mDictCustomInfoList.ContainsKey("ScreenScale"))
        {
            mScreenScale = mDictCustomInfoList["ScreenScale"].strCustomInfoVaule;
        }
#if UNITY_IPHONE
        if (mDictCustomInfoList.ContainsKey("AppStoreURL"))
        {
            appStoreURL = mDictCustomInfoList["AppStoreURL"].strCustomInfoVaule;
        }
        if (mDictCustomInfoList.ContainsKey("Register_Server_Url"))
        {
            appStoreURL = mDictCustomInfoList["Register_Server_Url"].strCustomInfoVaule;
        }
        if (mDictCustomInfoList.ContainsKey("AppStoreID"))
        {
            strAppStoreID = mDictCustomInfoList["AppStoreID"].strCustomInfoVaule;
        }
        if (mDictCustomInfoList.ContainsKey("AppStoreAdUrl"))
        {
            strShowAppAdUrl = mDictCustomInfoList["AppStoreAdUrl"].strCustomInfoVaule;
        }
		if (mDictCustomInfoList.ContainsKey("PushIosName"))
		{
			pushPhoneTypeName = mDictCustomInfoList["PushIosName"].strCustomInfoVaule;
		}
#else
        if (mDictCustomInfoList.ContainsKey("PushAndroidName"))
        {
            pushPhoneTypeName = mDictCustomInfoList["PushAndroidName"].strCustomInfoVaule;
        }
#endif
        if (mDictCustomInfoList.ContainsKey("version"))
        {
            version = mDictCustomInfoList["version"].strCustomInfoVaule;
        }
        if (mDictCustomInfoList.ContainsKey("pushServiceIP"))           //配置推送服务器IP地址
        {
            pushServiceIP = mDictCustomInfoList["pushServiceIP"].strCustomInfoVaule;
        }
        if (mDictCustomInfoList.ContainsKey("pushServicePOST"))           //配置推送服务器端口地址
        {
            pushServicePOST = mDictCustomInfoList["pushServicePOST"].strCustomInfoVaule;
        }
        if (mDictCustomInfoList.ContainsKey("channelAppSecret"))           //渠道AppSecret
        {
            channelAppSecret = mDictCustomInfoList["channelAppSecret"].strCustomInfoVaule;
        }
        if (mDictCustomInfoList.ContainsKey("NetDumper"))           // 服务器网络采集
        {
            mbNetDumper = mDictCustomInfoList["NetDumper"].strCustomInfoVaule.Equals("1");
        }
        if (mDictCustomInfoList.ContainsKey("WriteFPS"))           // 性能fps采集
        {
            bWriteFps = mDictCustomInfoList["WriteFPS"].strCustomInfoVaule.Equals("1");
        }
    }

	public static void ReadServerList(string xmlString)
	{
		int index = xmlString.IndexOf('<');
		xmlString = xmlString.Substring(index);
		xmlString.Trim();
		XMLParser parse = new XMLParser();
		XMLNode rootnode = parse.Parse(xmlString);
		XMLNodeList xmlNodeList = (XMLNodeList)rootnode["Servers"];
		if (xmlNodeList == null)
			return;

		///解析首段中的类型定义
		for (int i = 0; i < xmlNodeList.Count; i++)
		{
			XMLNode xmlnode = xmlNodeList[i] as XMLNode;
			XMLNodeList childNodeList = xmlnode.GetNodeList("Server");
			if (childNodeList != null)
			{
				for (int j = 0; j < childNodeList.Count; j++)
				{
					XMLNode childnode = childNodeList[j] as XMLNode;
					Dictionary<string, string> server = new Dictionary<string, string>();
					foreach (System.Collections.DictionaryEntry objDE in childnode)
					{
						if (objDE.Value == null)
							continue;

						string strKey = objDE.Key as string;
						if (strKey[0] != '@')
							continue;

						strKey = strKey.Substring(1);
						if (!server.ContainsKey(strKey))
						{
							server.Add(strKey, (string)objDE.Value);
						}
						else
						{
							server[strKey] = (string)objDE.Value;
						}
					}
					mDictServerList.Add(server);
				}
			}
		}
	}
    /// <summary>
    /// 设置所有服务器信息
    /// </summary>
    /// <param name="text">服务器列表文本</param>
    public static void SetAllServerList(string xmlString)
    {
        int index = xmlString.IndexOf('<');
        xmlString = xmlString.Substring(index);
        xmlString.Trim();
        XMLParser parse = new XMLParser();
        XMLNode rootnode = parse.Parse(xmlString);
        XMLNodeList xmlNodeList = (XMLNodeList)rootnode["Servers"];
        if (xmlNodeList == null)
            return;

        ///解析首段中的类型定义
        for (int i = 0; i < xmlNodeList.Count; i++)
        {
            XMLNode xmlnode = xmlNodeList[i] as XMLNode;
            XMLNodeList childNodeList = xmlnode.GetNodeList("Server");
            if (childNodeList != null)
            {
                for (int j = 0; j < childNodeList.Count; j++)
                {
                    XMLNode childnode = childNodeList[j] as XMLNode;
                    Dictionary<string, string> server = new Dictionary<string, string>();
                    foreach (System.Collections.DictionaryEntry objDE in childnode)
                    {
                        if (objDE.Value == null)
                            continue;

                        string strKey = objDE.Key as string;
                        if (strKey[0] != '@')
                            continue;

                        strKey = strKey.Substring(1);
                        if (!server.ContainsKey(strKey))
                        {
                            server.Add(strKey, (string)objDE.Value);
                        }
                        else
                        {
                            server[strKey] = (string)objDE.Value;
                        }
                    }
                    mDictAllServerList.Add(server);
                }
            }
        }
    }

    //------------------------------------------------充值列表相关------------------------------------------------

    /// <summary>
    /// 设置VIP包信息
    /// </summary>
    /// <param name="text">服务器列表文本</param>
    public static void SetShopList(string xmlString)
    {
        mstrShopData = xmlString;
    }

    //------------------------------------------------充值列表相关------------------------------------------------

    /// <summary>
    /// 设置服务器信息
    /// </summary>
    /// <param name="text">服务器列表文本</param>
    public static void SetPushServerList(string xmlString)
    {
        int index = xmlString.IndexOf('<');
        xmlString = xmlString.Substring(index);
        xmlString.Trim();
        XMLParser parse = new XMLParser();
        XMLNode rootnode = parse.Parse(xmlString);
        XMLNodeList xmlNodeList = (XMLNodeList)rootnode["PushServers"];
        if (xmlNodeList == null)
            return;

        ///解析首段中的类型定义
        for (int i = 0; i < xmlNodeList.Count; i++)
        {
            XMLNode xmlnode = xmlNodeList[i] as XMLNode;
            XMLNodeList childNodeList = xmlnode.GetNodeList("Server");
            if (childNodeList != null)
            {
                for (int j = 0; j < childNodeList.Count; j++)
                {
                    XMLNode childnode = childNodeList[j] as XMLNode;
                    PushServerInfo psInfo = new PushServerInfo();
                    foreach (System.Collections.DictionaryEntry objDE in childnode)
                    {
                        if (objDE.Value == null)
                            continue;

                        string strKey = objDE.Key as string;
                        if (strKey[0] != '@')
                            continue;

                        strKey = strKey.Substring(1);
                        if (strKey == "ID")
                        {
                            psInfo.strServerID = objDE.Value as string;
                        }
                        else if (strKey == "Name")
                        {
                            psInfo.strServerName = objDE.Value as string;
                        }
                        else if (strKey == "IP")
                        {
                            psInfo.strServerIP = objDE.Value as string;
                        }
                        else if (strKey == "Port")
                        {
                            psInfo.strServerPort = objDE.Value as string;
                        }
                        else if (strKey == "ApiKey")
                        {
                            psInfo.strApiKey = objDE.Value as string;
                        }
                    }
                    mDictPushServerList.Add(psInfo);
                }
            }
        }
    }

    public static PushServerInfo GetPushServer()
    {
        if (mDictPushServerList.Count == 0)
            return null;

        int iIndex = Random.Range(0, mDictPushServerList.Count);
        return mDictPushServerList[iIndex];
    }
    /// <summary>
    /// 设置文言信息
    /// </summary>
    /// <param name="strWords"></param>
    public static void SetWordsInfo(string strWords)
    {
        if (string.IsNullOrEmpty(strWords))
            return;

        string[] strLines = strWords.Split(new string[] { "\r\n" }, System.StringSplitOptions.RemoveEmptyEntries); ;
        for (int i = 0; i < strLines.Length; i++)
        {
            string[] split = strLines[i].Split(new string[] { "=" }, 2, System.StringSplitOptions.RemoveEmptyEntries);
            if (split.Length == 2)
            {
                if (mWordsDict.ContainsKey(split[0]))
                    LogSystem.Log("the key is echo in local file!!! please check the key = ", split[0]);
                else
                {
                    split[1] = split[1].Replace("[n]", "\n");
                    mWordsDict[split[0]] = split[1];
                }
            }
        }
    }
    /// <summary>
    /// 获取更新文言
    /// </summary>
    /// <param name="strKey">键值</param>
    /// <returns></returns>
    public static string GetUdpateLangage(string strKey)
    {
        if (mWordsDict.ContainsKey(strKey))
        {
            return mWordsDict[strKey];
        }
        return strKey;
    }

    /// <summary>
    /// 缓存缓存中
    /// </summary>
    /// <param name="useraccount"></param>
    /// <param name="username"></param>
    /// <param name="serverid"></param>
    /// <param name="gameid"></param>
    /// <param name="appstoreUrl"></param>
    public static void SavePlayerPrefs(string useraccount, string username, string serverid, string gameid, string appstoreUrl)
    {
        PlayerPrefs.SetString(USER_ACCOUNT, useraccount);
        string strTemp = WWW.EscapeURL(username);
        PlayerPrefs.SetString(USER_NAME, strTemp);
        PlayerPrefs.SetString(SERVERID, serverid);
        PlayerPrefs.SetString(GAME_ID, gameid);
        PlayerPrefs.SetString(APPSTORE_URL, appstoreUrl);
    }

    /// <summary>
    /// 获取缓存
    /// </summary>
    /// <param name="useraccount"></param>
    /// <param name="username"></param>
    /// <param name="serverid"></param>
    /// <param name="gameid"></param>
    /// <param name="appstoreUrl"></param>
    public static void GetPlayerPrefs(ref string useraccount, ref string username, ref string serverid, ref string gameid, ref string appstoreUrl)
    {
        useraccount = PlayerPrefs.GetString(USER_ACCOUNT, string.Empty);
        string strTemp = PlayerPrefs.GetString(USER_NAME, string.Empty);
        username = WWW.UnEscapeURL(strTemp);
        serverid = PlayerPrefs.GetString(SERVERID, string.Empty);
        gameid = PlayerPrefs.GetString(GAME_ID, string.Empty);
        appstoreUrl = PlayerPrefs.GetString(APPSTORE_URL, string.Empty);
    }

    /// <summary>
    /// 获取提示串
    /// </summary>
    /// <param name="strKeywords"></param>
    /// <returns></returns>
    public static string GetNetErrorPromp(string strKeywords)
    {
        string strPrompInfo = "CustomInfoError";
        //网络不通
        if (strKeywords.Contains("connect to host"))//网关错误
        {
            strPrompInfo = "CantConnectToHost";
        }
        else if (strKeywords.Contains("404"))//没有找到目标文件
        {
            strPrompInfo = "HTTPError_404";
        }
        else if (strKeywords.Contains("403"))//禁止访问
        {
            strPrompInfo = "HTTPError_403";
        }
        else if (strKeywords.Contains("405"))//资源被禁止
        {
            strPrompInfo = "HTTPError_405";
        }
        else if (strKeywords.Contains("406"))//无法接受
        {
            strPrompInfo = "HTTPError_406";
        }
        else if (strKeywords.Contains("407"))//要求代理身份验证
        {
            strPrompInfo = "HTTPError_407";
        }
        else if (strKeywords.Contains("410"))//永远不可用
        {
            strPrompInfo = "HTTPError_410";
        }
        else if (strKeywords.Contains("412"))//先决条件失败
        {
            strPrompInfo = "HTTPError_412";
        }
        else if (strKeywords.Contains("414"))//请求URI太长
        {
            strPrompInfo = "HTTPError_414";
        }
        else if (strKeywords.Contains("500"))//内部服务器错误
        {
            strPrompInfo = "HTTPError_500";
        }
        else if (strKeywords.Contains("501"))//未实现
        {
            strPrompInfo = "HTTPError_501";
        }
        else if (strKeywords.Contains("502"))//网关错误
        {
            strPrompInfo = "HTTPError_502";
        }

        return Config.GetUdpateLangage(strPrompInfo);
    }

    //是否开启动态摇杆（不能直接调用GameLogic中，用此变量中转下）
    public static bool DisplayJoystick = false;

    /// <summary>
    /// （性能）是否开启采集fps
    /// </summary>
    public static bool bWriteFps = false;

    /// <summary>
    /// 客户端主角默认移动速度
    /// </summary>
    public const float DEFAULT_CLIENT_MOVESPEED = 5f;

    /// <summary>
    /// 客户端Jump轻功移动速度
    /// </summary>
    public const float DEFAULT_CLIENT_JUMPSPEED = 24f;

    /// <summary>
    /// CG 音效id
    /// </summary>
    public const string STR_SOUNDID = "CreateRoleCGAudioID";

    /// <summary>
    /// CG 任务id
    /// </summary>
    public const string STR_TASKID = "CreateRoleCGTaskID";

}