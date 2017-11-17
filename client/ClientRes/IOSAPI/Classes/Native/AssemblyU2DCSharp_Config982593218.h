#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UIFont
struct UIFont_t389944949;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>
struct Dictionary_2_t3313120627;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Dictionary_2_t1563811461;
// System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct List_1_t3313120628;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.Collections.Generic.Dictionary`2<System.String,Config/CustomInfo>
struct Dictionary_2_t2851536818;
// System.Collections.Generic.List`1<Config/PushServerInfo>
struct List_1_t4283466968;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_GameQuality783479189.h"
#include "AssemblyU2DCSharp_Config_EnumArea877739267.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Config
struct  Config_t982593218  : public Il2CppObject
{
public:
	// System.String Config::versionUpdateUrl
	String_t* ___versionUpdateUrl_48;

public:
	inline static int32_t get_offset_of_versionUpdateUrl_48() { return static_cast<int32_t>(offsetof(Config_t982593218, ___versionUpdateUrl_48)); }
	inline String_t* get_versionUpdateUrl_48() const { return ___versionUpdateUrl_48; }
	inline String_t** get_address_of_versionUpdateUrl_48() { return &___versionUpdateUrl_48; }
	inline void set_versionUpdateUrl_48(String_t* value)
	{
		___versionUpdateUrl_48 = value;
		Il2CppCodeGenWriteBarrier(&___versionUpdateUrl_48, value);
	}
};

struct Config_t982593218_StaticFields
{
public:
	// UIFont Config::snailFont
	UIFont_t389944949 * ___snailFont_10;
	// UIFont Config::nGuiFont
	UIFont_t389944949 * ___nGuiFont_11;
	// System.Boolean Config::bBindPhine
	bool ___bBindPhine_12;
	// System.Boolean Config::bANYSDK
	bool ___bANYSDK_13;
	// System.String Config::LaunchName
	String_t* ___LaunchName_14;
	// System.String Config::MessageName
	String_t* ___MessageName_15;
	// System.String Config::LanguagePath
	String_t* ___LanguagePath_16;
	// System.String Config::Language
	String_t* ___Language_17;
	// System.Boolean Config::bAppStore
	bool ___bAppStore_18;
	// System.Boolean Config::bGameInitFailed
	bool ___bGameInitFailed_19;
	// System.String Config::mResourceServerIp
	String_t* ___mResourceServerIp_20;
	// System.String Config::mResourceDomainServerIp
	String_t* ___mResourceDomainServerIp_21;
	// System.Boolean Config::bisOpenCommentValue
	bool ___bisOpenCommentValue_22;
	// System.String Config::Appstore
	String_t* ___Appstore_23;
	// System.String Config::Snail
	String_t* ___Snail_24;
	// System.String Config::DefaultBundleIdentifier
	String_t* ___DefaultBundleIdentifier_25;
	// System.String Config::DefaulBundleIdMac
	String_t* ___DefaulBundleIdMac_26;
	// System.String Config::serverName
	String_t* ___serverName_27;
	// System.String Config::gameId
	String_t* ___gameId_28;
	// System.String Config::accessId
	String_t* ___accessId_29;
	// System.String Config::accessPassword
	String_t* ___accessPassword_30;
	// System.String Config::accessType
	String_t* ___accessType_31;
	// System.String Config::seed
	String_t* ___seed_32;
	// System.String Config::serverId
	String_t* ___serverId_33;
	// System.String Config::pushPhoneTypeName
	String_t* ___pushPhoneTypeName_34;
	// System.String Config::dataCollectionUrl
	String_t* ___dataCollectionUrl_35;
	// System.Boolean Config::mbNetDumper
	bool ___mbNetDumper_36;
	// System.Boolean Config::isPickGuildReward
	bool ___isPickGuildReward_37;
	// System.String Config::errorLogUrl
	String_t* ___errorLogUrl_38;
	// System.String Config::errorLogUrlId
	String_t* ___errorLogUrlId_39;
	// System.String Config::NativeErrorUrl
	String_t* ___NativeErrorUrl_40;
	// System.String Config::appid
	String_t* ___appid_41;
	// System.String Config::appkey
	String_t* ___appkey_42;
	// System.String Config::registerServerUrl
	String_t* ___registerServerUrl_43;
	// System.Boolean Config::isFirstLogin
	bool ___isFirstLogin_44;
	// System.Boolean Config::mbEnableCatcher
	bool ___mbEnableCatcher_45;
	// System.Boolean Config::ErrorLogPhoneOpen
	bool ___ErrorLogPhoneOpen_46;
	// System.Boolean Config::debug
	bool ___debug_47;
	// System.String Config::channelId
	String_t* ___channelId_49;
	// System.String Config::mediaId
	String_t* ___mediaId_50;
	// System.Boolean Config::IsInstallWechat
	bool ___IsInstallWechat_51;
	// System.String Config::channelName
	String_t* ___channelName_52;
	// System.String Config::cid
	String_t* ___cid_53;
	// System.String Config::idfa
	String_t* ___idfa_54;
	// System.String Config::strChannelUniqueName
	String_t* ___strChannelUniqueName_55;
	// System.String Config::strAddressId
	String_t* ___strAddressId_56;
	// System.String Config::BundleIdentifier
	String_t* ___BundleIdentifier_57;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>> Config::accInfo
	Dictionary_2_t3313120627 * ___accInfo_58;
	// GameQuality Config::mCurQuality
	int32_t ___mCurQuality_59;
	// GameQuality Config::mCurSettingQuality
	int32_t ___mCurSettingQuality_60;
	// System.String[] Config::SceneObjects
	StringU5BU5D_t1642385972* ___SceneObjects_61;
	// System.String Config::strShowAppAdUrl
	String_t* ___strShowAppAdUrl_62;
	// System.String Config::appStoreURL
	String_t* ___appStoreURL_63;
	// System.String Config::ClientInstallUrl
	String_t* ___ClientInstallUrl_64;
	// System.Int32 Config::iResourceVersion
	int32_t ___iResourceVersion_65;
	// System.String Config::phoneType
	String_t* ___phoneType_66;
	// System.String Config::version
	String_t* ___version_67;
	// System.String Config::wxAndroidId
	String_t* ___wxAndroidId_68;
	// System.String Config::wxiOSId
	String_t* ___wxiOSId_69;
	// System.String Config::pushServiceIP
	String_t* ___pushServiceIP_70;
	// System.String Config::pushServicePOST
	String_t* ___pushServicePOST_71;
	// System.String Config::channelAppSecret
	String_t* ___channelAppSecret_72;
	// System.String Config::Weixin_Link_Url
	String_t* ___Weixin_Link_Url_73;
	// System.String Config::act_Url
	String_t* ___act_Url_74;
	// System.String Config::IfShowNoOpenJob
	String_t* ___IfShowNoOpenJob_75;
	// System.String Config::curreRoleName
	String_t* ___curreRoleName_76;
	// System.Int32 Config::curreRoleLevel
	int32_t ___curreRoleLevel_77;
	// System.String Config::curreRoleID
	String_t* ___curreRoleID_78;
	// System.String Config::payCallBackURL
	String_t* ___payCallBackURL_79;
	// System.String Config::strAppStoreID
	String_t* ___strAppStoreID_80;
	// System.String Config::strNoticeName
	String_t* ___strNoticeName_81;
	// System.String Config::strChannelName
	String_t* ___strChannelName_82;
	// System.Int32 Config::mOrderType
	int32_t ___mOrderType_83;
	// System.Boolean Config::bNeedDataCollect
	bool ___bNeedDataCollect_84;
	// System.Int32 Config::mQueueWaitTime
	int32_t ___mQueueWaitTime_85;
	// System.String Config::mScreenMaxResolution
	String_t* ___mScreenMaxResolution_86;
	// System.String Config::mScreenScale
	String_t* ___mScreenScale_87;
	// System.String Config::accountName
	String_t* ___accountName_88;
	// System.Boolean Config::mbDynamicRes
	bool ___mbDynamicRes_89;
	// System.Boolean Config::mbMd5
	bool ___mbMd5_90;
	// System.Single Config::mDeviceTotalMemory
	float ___mDeviceTotalMemory_91;
	// System.String Config::mDeviceName
	String_t* ___mDeviceName_92;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>> Config::mDictUpdaterGuide
	Dictionary_2_t1563811461 * ___mDictUpdaterGuide_93;
	// System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> Config::mDictServerList
	List_1_t3313120628 * ___mDictServerList_94;
	// System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> Config::mDictAllServerList
	List_1_t3313120628 * ___mDictAllServerList_95;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Config::mWordsDict
	Dictionary_2_t3943999495 * ___mWordsDict_96;
	// System.String Config::mstrShopData
	String_t* ___mstrShopData_97;
	// System.String Config::mstrServerNotice
	String_t* ___mstrServerNotice_98;
	// System.Collections.Generic.Dictionary`2<System.String,Config/CustomInfo> Config::mDictCustomInfoList
	Dictionary_2_t2851536818 * ___mDictCustomInfoList_99;
	// System.Collections.Generic.List`1<Config/PushServerInfo> Config::mDictPushServerList
	List_1_t4283466968 * ___mDictPushServerList_100;
	// System.String Config::mstrPreSuffix
	String_t* ___mstrPreSuffix_101;
	// System.String Config::mstrStreamSuffix
	String_t* ___mstrStreamSuffix_102;
	// System.String Config::mstrAssetBundleRootPath
	String_t* ___mstrAssetBundleRootPath_103;
	// System.String Config::mstrSourceResRootPath
	String_t* ___mstrSourceResRootPath_104;
	// System.String Config::mstrStreamResRootPath
	String_t* ___mstrStreamResRootPath_105;
	// System.String Config::mstrMacAddress
	String_t* ___mstrMacAddress_106;
	// System.String Config::mstrVersionUseage
	String_t* ___mstrVersionUseage_107;
	// System.String Config::mstrInstallationVersion
	String_t* ___mstrInstallationVersion_108;
	// System.String Config::mstrLocalVersion
	String_t* ___mstrLocalVersion_109;
	// System.Int32 Config::miLocalNumberVersion
	int32_t ___miLocalNumberVersion_110;
	// System.Boolean Config::DisplayJoystick
	bool ___DisplayJoystick_111;
	// System.Boolean Config::bWriteFps
	bool ___bWriteFps_112;
	// Config/EnumArea Config::<GameArea>k__BackingField
	int32_t ___U3CGameAreaU3Ek__BackingField_113;

public:
	inline static int32_t get_offset_of_snailFont_10() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___snailFont_10)); }
	inline UIFont_t389944949 * get_snailFont_10() const { return ___snailFont_10; }
	inline UIFont_t389944949 ** get_address_of_snailFont_10() { return &___snailFont_10; }
	inline void set_snailFont_10(UIFont_t389944949 * value)
	{
		___snailFont_10 = value;
		Il2CppCodeGenWriteBarrier(&___snailFont_10, value);
	}

	inline static int32_t get_offset_of_nGuiFont_11() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___nGuiFont_11)); }
	inline UIFont_t389944949 * get_nGuiFont_11() const { return ___nGuiFont_11; }
	inline UIFont_t389944949 ** get_address_of_nGuiFont_11() { return &___nGuiFont_11; }
	inline void set_nGuiFont_11(UIFont_t389944949 * value)
	{
		___nGuiFont_11 = value;
		Il2CppCodeGenWriteBarrier(&___nGuiFont_11, value);
	}

	inline static int32_t get_offset_of_bBindPhine_12() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___bBindPhine_12)); }
	inline bool get_bBindPhine_12() const { return ___bBindPhine_12; }
	inline bool* get_address_of_bBindPhine_12() { return &___bBindPhine_12; }
	inline void set_bBindPhine_12(bool value)
	{
		___bBindPhine_12 = value;
	}

	inline static int32_t get_offset_of_bANYSDK_13() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___bANYSDK_13)); }
	inline bool get_bANYSDK_13() const { return ___bANYSDK_13; }
	inline bool* get_address_of_bANYSDK_13() { return &___bANYSDK_13; }
	inline void set_bANYSDK_13(bool value)
	{
		___bANYSDK_13 = value;
	}

	inline static int32_t get_offset_of_LaunchName_14() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___LaunchName_14)); }
	inline String_t* get_LaunchName_14() const { return ___LaunchName_14; }
	inline String_t** get_address_of_LaunchName_14() { return &___LaunchName_14; }
	inline void set_LaunchName_14(String_t* value)
	{
		___LaunchName_14 = value;
		Il2CppCodeGenWriteBarrier(&___LaunchName_14, value);
	}

	inline static int32_t get_offset_of_MessageName_15() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___MessageName_15)); }
	inline String_t* get_MessageName_15() const { return ___MessageName_15; }
	inline String_t** get_address_of_MessageName_15() { return &___MessageName_15; }
	inline void set_MessageName_15(String_t* value)
	{
		___MessageName_15 = value;
		Il2CppCodeGenWriteBarrier(&___MessageName_15, value);
	}

	inline static int32_t get_offset_of_LanguagePath_16() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___LanguagePath_16)); }
	inline String_t* get_LanguagePath_16() const { return ___LanguagePath_16; }
	inline String_t** get_address_of_LanguagePath_16() { return &___LanguagePath_16; }
	inline void set_LanguagePath_16(String_t* value)
	{
		___LanguagePath_16 = value;
		Il2CppCodeGenWriteBarrier(&___LanguagePath_16, value);
	}

	inline static int32_t get_offset_of_Language_17() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___Language_17)); }
	inline String_t* get_Language_17() const { return ___Language_17; }
	inline String_t** get_address_of_Language_17() { return &___Language_17; }
	inline void set_Language_17(String_t* value)
	{
		___Language_17 = value;
		Il2CppCodeGenWriteBarrier(&___Language_17, value);
	}

	inline static int32_t get_offset_of_bAppStore_18() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___bAppStore_18)); }
	inline bool get_bAppStore_18() const { return ___bAppStore_18; }
	inline bool* get_address_of_bAppStore_18() { return &___bAppStore_18; }
	inline void set_bAppStore_18(bool value)
	{
		___bAppStore_18 = value;
	}

	inline static int32_t get_offset_of_bGameInitFailed_19() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___bGameInitFailed_19)); }
	inline bool get_bGameInitFailed_19() const { return ___bGameInitFailed_19; }
	inline bool* get_address_of_bGameInitFailed_19() { return &___bGameInitFailed_19; }
	inline void set_bGameInitFailed_19(bool value)
	{
		___bGameInitFailed_19 = value;
	}

	inline static int32_t get_offset_of_mResourceServerIp_20() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___mResourceServerIp_20)); }
	inline String_t* get_mResourceServerIp_20() const { return ___mResourceServerIp_20; }
	inline String_t** get_address_of_mResourceServerIp_20() { return &___mResourceServerIp_20; }
	inline void set_mResourceServerIp_20(String_t* value)
	{
		___mResourceServerIp_20 = value;
		Il2CppCodeGenWriteBarrier(&___mResourceServerIp_20, value);
	}

	inline static int32_t get_offset_of_mResourceDomainServerIp_21() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___mResourceDomainServerIp_21)); }
	inline String_t* get_mResourceDomainServerIp_21() const { return ___mResourceDomainServerIp_21; }
	inline String_t** get_address_of_mResourceDomainServerIp_21() { return &___mResourceDomainServerIp_21; }
	inline void set_mResourceDomainServerIp_21(String_t* value)
	{
		___mResourceDomainServerIp_21 = value;
		Il2CppCodeGenWriteBarrier(&___mResourceDomainServerIp_21, value);
	}

	inline static int32_t get_offset_of_bisOpenCommentValue_22() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___bisOpenCommentValue_22)); }
	inline bool get_bisOpenCommentValue_22() const { return ___bisOpenCommentValue_22; }
	inline bool* get_address_of_bisOpenCommentValue_22() { return &___bisOpenCommentValue_22; }
	inline void set_bisOpenCommentValue_22(bool value)
	{
		___bisOpenCommentValue_22 = value;
	}

	inline static int32_t get_offset_of_Appstore_23() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___Appstore_23)); }
	inline String_t* get_Appstore_23() const { return ___Appstore_23; }
	inline String_t** get_address_of_Appstore_23() { return &___Appstore_23; }
	inline void set_Appstore_23(String_t* value)
	{
		___Appstore_23 = value;
		Il2CppCodeGenWriteBarrier(&___Appstore_23, value);
	}

	inline static int32_t get_offset_of_Snail_24() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___Snail_24)); }
	inline String_t* get_Snail_24() const { return ___Snail_24; }
	inline String_t** get_address_of_Snail_24() { return &___Snail_24; }
	inline void set_Snail_24(String_t* value)
	{
		___Snail_24 = value;
		Il2CppCodeGenWriteBarrier(&___Snail_24, value);
	}

	inline static int32_t get_offset_of_DefaultBundleIdentifier_25() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___DefaultBundleIdentifier_25)); }
	inline String_t* get_DefaultBundleIdentifier_25() const { return ___DefaultBundleIdentifier_25; }
	inline String_t** get_address_of_DefaultBundleIdentifier_25() { return &___DefaultBundleIdentifier_25; }
	inline void set_DefaultBundleIdentifier_25(String_t* value)
	{
		___DefaultBundleIdentifier_25 = value;
		Il2CppCodeGenWriteBarrier(&___DefaultBundleIdentifier_25, value);
	}

	inline static int32_t get_offset_of_DefaulBundleIdMac_26() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___DefaulBundleIdMac_26)); }
	inline String_t* get_DefaulBundleIdMac_26() const { return ___DefaulBundleIdMac_26; }
	inline String_t** get_address_of_DefaulBundleIdMac_26() { return &___DefaulBundleIdMac_26; }
	inline void set_DefaulBundleIdMac_26(String_t* value)
	{
		___DefaulBundleIdMac_26 = value;
		Il2CppCodeGenWriteBarrier(&___DefaulBundleIdMac_26, value);
	}

	inline static int32_t get_offset_of_serverName_27() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___serverName_27)); }
	inline String_t* get_serverName_27() const { return ___serverName_27; }
	inline String_t** get_address_of_serverName_27() { return &___serverName_27; }
	inline void set_serverName_27(String_t* value)
	{
		___serverName_27 = value;
		Il2CppCodeGenWriteBarrier(&___serverName_27, value);
	}

	inline static int32_t get_offset_of_gameId_28() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___gameId_28)); }
	inline String_t* get_gameId_28() const { return ___gameId_28; }
	inline String_t** get_address_of_gameId_28() { return &___gameId_28; }
	inline void set_gameId_28(String_t* value)
	{
		___gameId_28 = value;
		Il2CppCodeGenWriteBarrier(&___gameId_28, value);
	}

	inline static int32_t get_offset_of_accessId_29() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___accessId_29)); }
	inline String_t* get_accessId_29() const { return ___accessId_29; }
	inline String_t** get_address_of_accessId_29() { return &___accessId_29; }
	inline void set_accessId_29(String_t* value)
	{
		___accessId_29 = value;
		Il2CppCodeGenWriteBarrier(&___accessId_29, value);
	}

	inline static int32_t get_offset_of_accessPassword_30() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___accessPassword_30)); }
	inline String_t* get_accessPassword_30() const { return ___accessPassword_30; }
	inline String_t** get_address_of_accessPassword_30() { return &___accessPassword_30; }
	inline void set_accessPassword_30(String_t* value)
	{
		___accessPassword_30 = value;
		Il2CppCodeGenWriteBarrier(&___accessPassword_30, value);
	}

	inline static int32_t get_offset_of_accessType_31() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___accessType_31)); }
	inline String_t* get_accessType_31() const { return ___accessType_31; }
	inline String_t** get_address_of_accessType_31() { return &___accessType_31; }
	inline void set_accessType_31(String_t* value)
	{
		___accessType_31 = value;
		Il2CppCodeGenWriteBarrier(&___accessType_31, value);
	}

	inline static int32_t get_offset_of_seed_32() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___seed_32)); }
	inline String_t* get_seed_32() const { return ___seed_32; }
	inline String_t** get_address_of_seed_32() { return &___seed_32; }
	inline void set_seed_32(String_t* value)
	{
		___seed_32 = value;
		Il2CppCodeGenWriteBarrier(&___seed_32, value);
	}

	inline static int32_t get_offset_of_serverId_33() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___serverId_33)); }
	inline String_t* get_serverId_33() const { return ___serverId_33; }
	inline String_t** get_address_of_serverId_33() { return &___serverId_33; }
	inline void set_serverId_33(String_t* value)
	{
		___serverId_33 = value;
		Il2CppCodeGenWriteBarrier(&___serverId_33, value);
	}

	inline static int32_t get_offset_of_pushPhoneTypeName_34() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___pushPhoneTypeName_34)); }
	inline String_t* get_pushPhoneTypeName_34() const { return ___pushPhoneTypeName_34; }
	inline String_t** get_address_of_pushPhoneTypeName_34() { return &___pushPhoneTypeName_34; }
	inline void set_pushPhoneTypeName_34(String_t* value)
	{
		___pushPhoneTypeName_34 = value;
		Il2CppCodeGenWriteBarrier(&___pushPhoneTypeName_34, value);
	}

	inline static int32_t get_offset_of_dataCollectionUrl_35() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___dataCollectionUrl_35)); }
	inline String_t* get_dataCollectionUrl_35() const { return ___dataCollectionUrl_35; }
	inline String_t** get_address_of_dataCollectionUrl_35() { return &___dataCollectionUrl_35; }
	inline void set_dataCollectionUrl_35(String_t* value)
	{
		___dataCollectionUrl_35 = value;
		Il2CppCodeGenWriteBarrier(&___dataCollectionUrl_35, value);
	}

	inline static int32_t get_offset_of_mbNetDumper_36() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___mbNetDumper_36)); }
	inline bool get_mbNetDumper_36() const { return ___mbNetDumper_36; }
	inline bool* get_address_of_mbNetDumper_36() { return &___mbNetDumper_36; }
	inline void set_mbNetDumper_36(bool value)
	{
		___mbNetDumper_36 = value;
	}

	inline static int32_t get_offset_of_isPickGuildReward_37() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___isPickGuildReward_37)); }
	inline bool get_isPickGuildReward_37() const { return ___isPickGuildReward_37; }
	inline bool* get_address_of_isPickGuildReward_37() { return &___isPickGuildReward_37; }
	inline void set_isPickGuildReward_37(bool value)
	{
		___isPickGuildReward_37 = value;
	}

	inline static int32_t get_offset_of_errorLogUrl_38() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___errorLogUrl_38)); }
	inline String_t* get_errorLogUrl_38() const { return ___errorLogUrl_38; }
	inline String_t** get_address_of_errorLogUrl_38() { return &___errorLogUrl_38; }
	inline void set_errorLogUrl_38(String_t* value)
	{
		___errorLogUrl_38 = value;
		Il2CppCodeGenWriteBarrier(&___errorLogUrl_38, value);
	}

	inline static int32_t get_offset_of_errorLogUrlId_39() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___errorLogUrlId_39)); }
	inline String_t* get_errorLogUrlId_39() const { return ___errorLogUrlId_39; }
	inline String_t** get_address_of_errorLogUrlId_39() { return &___errorLogUrlId_39; }
	inline void set_errorLogUrlId_39(String_t* value)
	{
		___errorLogUrlId_39 = value;
		Il2CppCodeGenWriteBarrier(&___errorLogUrlId_39, value);
	}

	inline static int32_t get_offset_of_NativeErrorUrl_40() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___NativeErrorUrl_40)); }
	inline String_t* get_NativeErrorUrl_40() const { return ___NativeErrorUrl_40; }
	inline String_t** get_address_of_NativeErrorUrl_40() { return &___NativeErrorUrl_40; }
	inline void set_NativeErrorUrl_40(String_t* value)
	{
		___NativeErrorUrl_40 = value;
		Il2CppCodeGenWriteBarrier(&___NativeErrorUrl_40, value);
	}

	inline static int32_t get_offset_of_appid_41() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___appid_41)); }
	inline String_t* get_appid_41() const { return ___appid_41; }
	inline String_t** get_address_of_appid_41() { return &___appid_41; }
	inline void set_appid_41(String_t* value)
	{
		___appid_41 = value;
		Il2CppCodeGenWriteBarrier(&___appid_41, value);
	}

	inline static int32_t get_offset_of_appkey_42() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___appkey_42)); }
	inline String_t* get_appkey_42() const { return ___appkey_42; }
	inline String_t** get_address_of_appkey_42() { return &___appkey_42; }
	inline void set_appkey_42(String_t* value)
	{
		___appkey_42 = value;
		Il2CppCodeGenWriteBarrier(&___appkey_42, value);
	}

	inline static int32_t get_offset_of_registerServerUrl_43() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___registerServerUrl_43)); }
	inline String_t* get_registerServerUrl_43() const { return ___registerServerUrl_43; }
	inline String_t** get_address_of_registerServerUrl_43() { return &___registerServerUrl_43; }
	inline void set_registerServerUrl_43(String_t* value)
	{
		___registerServerUrl_43 = value;
		Il2CppCodeGenWriteBarrier(&___registerServerUrl_43, value);
	}

	inline static int32_t get_offset_of_isFirstLogin_44() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___isFirstLogin_44)); }
	inline bool get_isFirstLogin_44() const { return ___isFirstLogin_44; }
	inline bool* get_address_of_isFirstLogin_44() { return &___isFirstLogin_44; }
	inline void set_isFirstLogin_44(bool value)
	{
		___isFirstLogin_44 = value;
	}

	inline static int32_t get_offset_of_mbEnableCatcher_45() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___mbEnableCatcher_45)); }
	inline bool get_mbEnableCatcher_45() const { return ___mbEnableCatcher_45; }
	inline bool* get_address_of_mbEnableCatcher_45() { return &___mbEnableCatcher_45; }
	inline void set_mbEnableCatcher_45(bool value)
	{
		___mbEnableCatcher_45 = value;
	}

	inline static int32_t get_offset_of_ErrorLogPhoneOpen_46() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___ErrorLogPhoneOpen_46)); }
	inline bool get_ErrorLogPhoneOpen_46() const { return ___ErrorLogPhoneOpen_46; }
	inline bool* get_address_of_ErrorLogPhoneOpen_46() { return &___ErrorLogPhoneOpen_46; }
	inline void set_ErrorLogPhoneOpen_46(bool value)
	{
		___ErrorLogPhoneOpen_46 = value;
	}

	inline static int32_t get_offset_of_debug_47() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___debug_47)); }
	inline bool get_debug_47() const { return ___debug_47; }
	inline bool* get_address_of_debug_47() { return &___debug_47; }
	inline void set_debug_47(bool value)
	{
		___debug_47 = value;
	}

	inline static int32_t get_offset_of_channelId_49() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___channelId_49)); }
	inline String_t* get_channelId_49() const { return ___channelId_49; }
	inline String_t** get_address_of_channelId_49() { return &___channelId_49; }
	inline void set_channelId_49(String_t* value)
	{
		___channelId_49 = value;
		Il2CppCodeGenWriteBarrier(&___channelId_49, value);
	}

	inline static int32_t get_offset_of_mediaId_50() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___mediaId_50)); }
	inline String_t* get_mediaId_50() const { return ___mediaId_50; }
	inline String_t** get_address_of_mediaId_50() { return &___mediaId_50; }
	inline void set_mediaId_50(String_t* value)
	{
		___mediaId_50 = value;
		Il2CppCodeGenWriteBarrier(&___mediaId_50, value);
	}

	inline static int32_t get_offset_of_IsInstallWechat_51() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___IsInstallWechat_51)); }
	inline bool get_IsInstallWechat_51() const { return ___IsInstallWechat_51; }
	inline bool* get_address_of_IsInstallWechat_51() { return &___IsInstallWechat_51; }
	inline void set_IsInstallWechat_51(bool value)
	{
		___IsInstallWechat_51 = value;
	}

	inline static int32_t get_offset_of_channelName_52() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___channelName_52)); }
	inline String_t* get_channelName_52() const { return ___channelName_52; }
	inline String_t** get_address_of_channelName_52() { return &___channelName_52; }
	inline void set_channelName_52(String_t* value)
	{
		___channelName_52 = value;
		Il2CppCodeGenWriteBarrier(&___channelName_52, value);
	}

	inline static int32_t get_offset_of_cid_53() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___cid_53)); }
	inline String_t* get_cid_53() const { return ___cid_53; }
	inline String_t** get_address_of_cid_53() { return &___cid_53; }
	inline void set_cid_53(String_t* value)
	{
		___cid_53 = value;
		Il2CppCodeGenWriteBarrier(&___cid_53, value);
	}

	inline static int32_t get_offset_of_idfa_54() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___idfa_54)); }
	inline String_t* get_idfa_54() const { return ___idfa_54; }
	inline String_t** get_address_of_idfa_54() { return &___idfa_54; }
	inline void set_idfa_54(String_t* value)
	{
		___idfa_54 = value;
		Il2CppCodeGenWriteBarrier(&___idfa_54, value);
	}

	inline static int32_t get_offset_of_strChannelUniqueName_55() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___strChannelUniqueName_55)); }
	inline String_t* get_strChannelUniqueName_55() const { return ___strChannelUniqueName_55; }
	inline String_t** get_address_of_strChannelUniqueName_55() { return &___strChannelUniqueName_55; }
	inline void set_strChannelUniqueName_55(String_t* value)
	{
		___strChannelUniqueName_55 = value;
		Il2CppCodeGenWriteBarrier(&___strChannelUniqueName_55, value);
	}

	inline static int32_t get_offset_of_strAddressId_56() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___strAddressId_56)); }
	inline String_t* get_strAddressId_56() const { return ___strAddressId_56; }
	inline String_t** get_address_of_strAddressId_56() { return &___strAddressId_56; }
	inline void set_strAddressId_56(String_t* value)
	{
		___strAddressId_56 = value;
		Il2CppCodeGenWriteBarrier(&___strAddressId_56, value);
	}

	inline static int32_t get_offset_of_BundleIdentifier_57() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___BundleIdentifier_57)); }
	inline String_t* get_BundleIdentifier_57() const { return ___BundleIdentifier_57; }
	inline String_t** get_address_of_BundleIdentifier_57() { return &___BundleIdentifier_57; }
	inline void set_BundleIdentifier_57(String_t* value)
	{
		___BundleIdentifier_57 = value;
		Il2CppCodeGenWriteBarrier(&___BundleIdentifier_57, value);
	}

	inline static int32_t get_offset_of_accInfo_58() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___accInfo_58)); }
	inline Dictionary_2_t3313120627 * get_accInfo_58() const { return ___accInfo_58; }
	inline Dictionary_2_t3313120627 ** get_address_of_accInfo_58() { return &___accInfo_58; }
	inline void set_accInfo_58(Dictionary_2_t3313120627 * value)
	{
		___accInfo_58 = value;
		Il2CppCodeGenWriteBarrier(&___accInfo_58, value);
	}

	inline static int32_t get_offset_of_mCurQuality_59() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___mCurQuality_59)); }
	inline int32_t get_mCurQuality_59() const { return ___mCurQuality_59; }
	inline int32_t* get_address_of_mCurQuality_59() { return &___mCurQuality_59; }
	inline void set_mCurQuality_59(int32_t value)
	{
		___mCurQuality_59 = value;
	}

	inline static int32_t get_offset_of_mCurSettingQuality_60() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___mCurSettingQuality_60)); }
	inline int32_t get_mCurSettingQuality_60() const { return ___mCurSettingQuality_60; }
	inline int32_t* get_address_of_mCurSettingQuality_60() { return &___mCurSettingQuality_60; }
	inline void set_mCurSettingQuality_60(int32_t value)
	{
		___mCurSettingQuality_60 = value;
	}

	inline static int32_t get_offset_of_SceneObjects_61() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___SceneObjects_61)); }
	inline StringU5BU5D_t1642385972* get_SceneObjects_61() const { return ___SceneObjects_61; }
	inline StringU5BU5D_t1642385972** get_address_of_SceneObjects_61() { return &___SceneObjects_61; }
	inline void set_SceneObjects_61(StringU5BU5D_t1642385972* value)
	{
		___SceneObjects_61 = value;
		Il2CppCodeGenWriteBarrier(&___SceneObjects_61, value);
	}

	inline static int32_t get_offset_of_strShowAppAdUrl_62() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___strShowAppAdUrl_62)); }
	inline String_t* get_strShowAppAdUrl_62() const { return ___strShowAppAdUrl_62; }
	inline String_t** get_address_of_strShowAppAdUrl_62() { return &___strShowAppAdUrl_62; }
	inline void set_strShowAppAdUrl_62(String_t* value)
	{
		___strShowAppAdUrl_62 = value;
		Il2CppCodeGenWriteBarrier(&___strShowAppAdUrl_62, value);
	}

	inline static int32_t get_offset_of_appStoreURL_63() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___appStoreURL_63)); }
	inline String_t* get_appStoreURL_63() const { return ___appStoreURL_63; }
	inline String_t** get_address_of_appStoreURL_63() { return &___appStoreURL_63; }
	inline void set_appStoreURL_63(String_t* value)
	{
		___appStoreURL_63 = value;
		Il2CppCodeGenWriteBarrier(&___appStoreURL_63, value);
	}

	inline static int32_t get_offset_of_ClientInstallUrl_64() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___ClientInstallUrl_64)); }
	inline String_t* get_ClientInstallUrl_64() const { return ___ClientInstallUrl_64; }
	inline String_t** get_address_of_ClientInstallUrl_64() { return &___ClientInstallUrl_64; }
	inline void set_ClientInstallUrl_64(String_t* value)
	{
		___ClientInstallUrl_64 = value;
		Il2CppCodeGenWriteBarrier(&___ClientInstallUrl_64, value);
	}

	inline static int32_t get_offset_of_iResourceVersion_65() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___iResourceVersion_65)); }
	inline int32_t get_iResourceVersion_65() const { return ___iResourceVersion_65; }
	inline int32_t* get_address_of_iResourceVersion_65() { return &___iResourceVersion_65; }
	inline void set_iResourceVersion_65(int32_t value)
	{
		___iResourceVersion_65 = value;
	}

	inline static int32_t get_offset_of_phoneType_66() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___phoneType_66)); }
	inline String_t* get_phoneType_66() const { return ___phoneType_66; }
	inline String_t** get_address_of_phoneType_66() { return &___phoneType_66; }
	inline void set_phoneType_66(String_t* value)
	{
		___phoneType_66 = value;
		Il2CppCodeGenWriteBarrier(&___phoneType_66, value);
	}

	inline static int32_t get_offset_of_version_67() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___version_67)); }
	inline String_t* get_version_67() const { return ___version_67; }
	inline String_t** get_address_of_version_67() { return &___version_67; }
	inline void set_version_67(String_t* value)
	{
		___version_67 = value;
		Il2CppCodeGenWriteBarrier(&___version_67, value);
	}

	inline static int32_t get_offset_of_wxAndroidId_68() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___wxAndroidId_68)); }
	inline String_t* get_wxAndroidId_68() const { return ___wxAndroidId_68; }
	inline String_t** get_address_of_wxAndroidId_68() { return &___wxAndroidId_68; }
	inline void set_wxAndroidId_68(String_t* value)
	{
		___wxAndroidId_68 = value;
		Il2CppCodeGenWriteBarrier(&___wxAndroidId_68, value);
	}

	inline static int32_t get_offset_of_wxiOSId_69() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___wxiOSId_69)); }
	inline String_t* get_wxiOSId_69() const { return ___wxiOSId_69; }
	inline String_t** get_address_of_wxiOSId_69() { return &___wxiOSId_69; }
	inline void set_wxiOSId_69(String_t* value)
	{
		___wxiOSId_69 = value;
		Il2CppCodeGenWriteBarrier(&___wxiOSId_69, value);
	}

	inline static int32_t get_offset_of_pushServiceIP_70() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___pushServiceIP_70)); }
	inline String_t* get_pushServiceIP_70() const { return ___pushServiceIP_70; }
	inline String_t** get_address_of_pushServiceIP_70() { return &___pushServiceIP_70; }
	inline void set_pushServiceIP_70(String_t* value)
	{
		___pushServiceIP_70 = value;
		Il2CppCodeGenWriteBarrier(&___pushServiceIP_70, value);
	}

	inline static int32_t get_offset_of_pushServicePOST_71() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___pushServicePOST_71)); }
	inline String_t* get_pushServicePOST_71() const { return ___pushServicePOST_71; }
	inline String_t** get_address_of_pushServicePOST_71() { return &___pushServicePOST_71; }
	inline void set_pushServicePOST_71(String_t* value)
	{
		___pushServicePOST_71 = value;
		Il2CppCodeGenWriteBarrier(&___pushServicePOST_71, value);
	}

	inline static int32_t get_offset_of_channelAppSecret_72() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___channelAppSecret_72)); }
	inline String_t* get_channelAppSecret_72() const { return ___channelAppSecret_72; }
	inline String_t** get_address_of_channelAppSecret_72() { return &___channelAppSecret_72; }
	inline void set_channelAppSecret_72(String_t* value)
	{
		___channelAppSecret_72 = value;
		Il2CppCodeGenWriteBarrier(&___channelAppSecret_72, value);
	}

	inline static int32_t get_offset_of_Weixin_Link_Url_73() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___Weixin_Link_Url_73)); }
	inline String_t* get_Weixin_Link_Url_73() const { return ___Weixin_Link_Url_73; }
	inline String_t** get_address_of_Weixin_Link_Url_73() { return &___Weixin_Link_Url_73; }
	inline void set_Weixin_Link_Url_73(String_t* value)
	{
		___Weixin_Link_Url_73 = value;
		Il2CppCodeGenWriteBarrier(&___Weixin_Link_Url_73, value);
	}

	inline static int32_t get_offset_of_act_Url_74() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___act_Url_74)); }
	inline String_t* get_act_Url_74() const { return ___act_Url_74; }
	inline String_t** get_address_of_act_Url_74() { return &___act_Url_74; }
	inline void set_act_Url_74(String_t* value)
	{
		___act_Url_74 = value;
		Il2CppCodeGenWriteBarrier(&___act_Url_74, value);
	}

	inline static int32_t get_offset_of_IfShowNoOpenJob_75() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___IfShowNoOpenJob_75)); }
	inline String_t* get_IfShowNoOpenJob_75() const { return ___IfShowNoOpenJob_75; }
	inline String_t** get_address_of_IfShowNoOpenJob_75() { return &___IfShowNoOpenJob_75; }
	inline void set_IfShowNoOpenJob_75(String_t* value)
	{
		___IfShowNoOpenJob_75 = value;
		Il2CppCodeGenWriteBarrier(&___IfShowNoOpenJob_75, value);
	}

	inline static int32_t get_offset_of_curreRoleName_76() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___curreRoleName_76)); }
	inline String_t* get_curreRoleName_76() const { return ___curreRoleName_76; }
	inline String_t** get_address_of_curreRoleName_76() { return &___curreRoleName_76; }
	inline void set_curreRoleName_76(String_t* value)
	{
		___curreRoleName_76 = value;
		Il2CppCodeGenWriteBarrier(&___curreRoleName_76, value);
	}

	inline static int32_t get_offset_of_curreRoleLevel_77() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___curreRoleLevel_77)); }
	inline int32_t get_curreRoleLevel_77() const { return ___curreRoleLevel_77; }
	inline int32_t* get_address_of_curreRoleLevel_77() { return &___curreRoleLevel_77; }
	inline void set_curreRoleLevel_77(int32_t value)
	{
		___curreRoleLevel_77 = value;
	}

	inline static int32_t get_offset_of_curreRoleID_78() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___curreRoleID_78)); }
	inline String_t* get_curreRoleID_78() const { return ___curreRoleID_78; }
	inline String_t** get_address_of_curreRoleID_78() { return &___curreRoleID_78; }
	inline void set_curreRoleID_78(String_t* value)
	{
		___curreRoleID_78 = value;
		Il2CppCodeGenWriteBarrier(&___curreRoleID_78, value);
	}

	inline static int32_t get_offset_of_payCallBackURL_79() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___payCallBackURL_79)); }
	inline String_t* get_payCallBackURL_79() const { return ___payCallBackURL_79; }
	inline String_t** get_address_of_payCallBackURL_79() { return &___payCallBackURL_79; }
	inline void set_payCallBackURL_79(String_t* value)
	{
		___payCallBackURL_79 = value;
		Il2CppCodeGenWriteBarrier(&___payCallBackURL_79, value);
	}

	inline static int32_t get_offset_of_strAppStoreID_80() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___strAppStoreID_80)); }
	inline String_t* get_strAppStoreID_80() const { return ___strAppStoreID_80; }
	inline String_t** get_address_of_strAppStoreID_80() { return &___strAppStoreID_80; }
	inline void set_strAppStoreID_80(String_t* value)
	{
		___strAppStoreID_80 = value;
		Il2CppCodeGenWriteBarrier(&___strAppStoreID_80, value);
	}

	inline static int32_t get_offset_of_strNoticeName_81() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___strNoticeName_81)); }
	inline String_t* get_strNoticeName_81() const { return ___strNoticeName_81; }
	inline String_t** get_address_of_strNoticeName_81() { return &___strNoticeName_81; }
	inline void set_strNoticeName_81(String_t* value)
	{
		___strNoticeName_81 = value;
		Il2CppCodeGenWriteBarrier(&___strNoticeName_81, value);
	}

	inline static int32_t get_offset_of_strChannelName_82() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___strChannelName_82)); }
	inline String_t* get_strChannelName_82() const { return ___strChannelName_82; }
	inline String_t** get_address_of_strChannelName_82() { return &___strChannelName_82; }
	inline void set_strChannelName_82(String_t* value)
	{
		___strChannelName_82 = value;
		Il2CppCodeGenWriteBarrier(&___strChannelName_82, value);
	}

	inline static int32_t get_offset_of_mOrderType_83() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___mOrderType_83)); }
	inline int32_t get_mOrderType_83() const { return ___mOrderType_83; }
	inline int32_t* get_address_of_mOrderType_83() { return &___mOrderType_83; }
	inline void set_mOrderType_83(int32_t value)
	{
		___mOrderType_83 = value;
	}

	inline static int32_t get_offset_of_bNeedDataCollect_84() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___bNeedDataCollect_84)); }
	inline bool get_bNeedDataCollect_84() const { return ___bNeedDataCollect_84; }
	inline bool* get_address_of_bNeedDataCollect_84() { return &___bNeedDataCollect_84; }
	inline void set_bNeedDataCollect_84(bool value)
	{
		___bNeedDataCollect_84 = value;
	}

	inline static int32_t get_offset_of_mQueueWaitTime_85() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___mQueueWaitTime_85)); }
	inline int32_t get_mQueueWaitTime_85() const { return ___mQueueWaitTime_85; }
	inline int32_t* get_address_of_mQueueWaitTime_85() { return &___mQueueWaitTime_85; }
	inline void set_mQueueWaitTime_85(int32_t value)
	{
		___mQueueWaitTime_85 = value;
	}

	inline static int32_t get_offset_of_mScreenMaxResolution_86() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___mScreenMaxResolution_86)); }
	inline String_t* get_mScreenMaxResolution_86() const { return ___mScreenMaxResolution_86; }
	inline String_t** get_address_of_mScreenMaxResolution_86() { return &___mScreenMaxResolution_86; }
	inline void set_mScreenMaxResolution_86(String_t* value)
	{
		___mScreenMaxResolution_86 = value;
		Il2CppCodeGenWriteBarrier(&___mScreenMaxResolution_86, value);
	}

	inline static int32_t get_offset_of_mScreenScale_87() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___mScreenScale_87)); }
	inline String_t* get_mScreenScale_87() const { return ___mScreenScale_87; }
	inline String_t** get_address_of_mScreenScale_87() { return &___mScreenScale_87; }
	inline void set_mScreenScale_87(String_t* value)
	{
		___mScreenScale_87 = value;
		Il2CppCodeGenWriteBarrier(&___mScreenScale_87, value);
	}

	inline static int32_t get_offset_of_accountName_88() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___accountName_88)); }
	inline String_t* get_accountName_88() const { return ___accountName_88; }
	inline String_t** get_address_of_accountName_88() { return &___accountName_88; }
	inline void set_accountName_88(String_t* value)
	{
		___accountName_88 = value;
		Il2CppCodeGenWriteBarrier(&___accountName_88, value);
	}

	inline static int32_t get_offset_of_mbDynamicRes_89() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___mbDynamicRes_89)); }
	inline bool get_mbDynamicRes_89() const { return ___mbDynamicRes_89; }
	inline bool* get_address_of_mbDynamicRes_89() { return &___mbDynamicRes_89; }
	inline void set_mbDynamicRes_89(bool value)
	{
		___mbDynamicRes_89 = value;
	}

	inline static int32_t get_offset_of_mbMd5_90() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___mbMd5_90)); }
	inline bool get_mbMd5_90() const { return ___mbMd5_90; }
	inline bool* get_address_of_mbMd5_90() { return &___mbMd5_90; }
	inline void set_mbMd5_90(bool value)
	{
		___mbMd5_90 = value;
	}

	inline static int32_t get_offset_of_mDeviceTotalMemory_91() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___mDeviceTotalMemory_91)); }
	inline float get_mDeviceTotalMemory_91() const { return ___mDeviceTotalMemory_91; }
	inline float* get_address_of_mDeviceTotalMemory_91() { return &___mDeviceTotalMemory_91; }
	inline void set_mDeviceTotalMemory_91(float value)
	{
		___mDeviceTotalMemory_91 = value;
	}

	inline static int32_t get_offset_of_mDeviceName_92() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___mDeviceName_92)); }
	inline String_t* get_mDeviceName_92() const { return ___mDeviceName_92; }
	inline String_t** get_address_of_mDeviceName_92() { return &___mDeviceName_92; }
	inline void set_mDeviceName_92(String_t* value)
	{
		___mDeviceName_92 = value;
		Il2CppCodeGenWriteBarrier(&___mDeviceName_92, value);
	}

	inline static int32_t get_offset_of_mDictUpdaterGuide_93() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___mDictUpdaterGuide_93)); }
	inline Dictionary_2_t1563811461 * get_mDictUpdaterGuide_93() const { return ___mDictUpdaterGuide_93; }
	inline Dictionary_2_t1563811461 ** get_address_of_mDictUpdaterGuide_93() { return &___mDictUpdaterGuide_93; }
	inline void set_mDictUpdaterGuide_93(Dictionary_2_t1563811461 * value)
	{
		___mDictUpdaterGuide_93 = value;
		Il2CppCodeGenWriteBarrier(&___mDictUpdaterGuide_93, value);
	}

	inline static int32_t get_offset_of_mDictServerList_94() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___mDictServerList_94)); }
	inline List_1_t3313120628 * get_mDictServerList_94() const { return ___mDictServerList_94; }
	inline List_1_t3313120628 ** get_address_of_mDictServerList_94() { return &___mDictServerList_94; }
	inline void set_mDictServerList_94(List_1_t3313120628 * value)
	{
		___mDictServerList_94 = value;
		Il2CppCodeGenWriteBarrier(&___mDictServerList_94, value);
	}

	inline static int32_t get_offset_of_mDictAllServerList_95() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___mDictAllServerList_95)); }
	inline List_1_t3313120628 * get_mDictAllServerList_95() const { return ___mDictAllServerList_95; }
	inline List_1_t3313120628 ** get_address_of_mDictAllServerList_95() { return &___mDictAllServerList_95; }
	inline void set_mDictAllServerList_95(List_1_t3313120628 * value)
	{
		___mDictAllServerList_95 = value;
		Il2CppCodeGenWriteBarrier(&___mDictAllServerList_95, value);
	}

	inline static int32_t get_offset_of_mWordsDict_96() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___mWordsDict_96)); }
	inline Dictionary_2_t3943999495 * get_mWordsDict_96() const { return ___mWordsDict_96; }
	inline Dictionary_2_t3943999495 ** get_address_of_mWordsDict_96() { return &___mWordsDict_96; }
	inline void set_mWordsDict_96(Dictionary_2_t3943999495 * value)
	{
		___mWordsDict_96 = value;
		Il2CppCodeGenWriteBarrier(&___mWordsDict_96, value);
	}

	inline static int32_t get_offset_of_mstrShopData_97() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___mstrShopData_97)); }
	inline String_t* get_mstrShopData_97() const { return ___mstrShopData_97; }
	inline String_t** get_address_of_mstrShopData_97() { return &___mstrShopData_97; }
	inline void set_mstrShopData_97(String_t* value)
	{
		___mstrShopData_97 = value;
		Il2CppCodeGenWriteBarrier(&___mstrShopData_97, value);
	}

	inline static int32_t get_offset_of_mstrServerNotice_98() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___mstrServerNotice_98)); }
	inline String_t* get_mstrServerNotice_98() const { return ___mstrServerNotice_98; }
	inline String_t** get_address_of_mstrServerNotice_98() { return &___mstrServerNotice_98; }
	inline void set_mstrServerNotice_98(String_t* value)
	{
		___mstrServerNotice_98 = value;
		Il2CppCodeGenWriteBarrier(&___mstrServerNotice_98, value);
	}

	inline static int32_t get_offset_of_mDictCustomInfoList_99() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___mDictCustomInfoList_99)); }
	inline Dictionary_2_t2851536818 * get_mDictCustomInfoList_99() const { return ___mDictCustomInfoList_99; }
	inline Dictionary_2_t2851536818 ** get_address_of_mDictCustomInfoList_99() { return &___mDictCustomInfoList_99; }
	inline void set_mDictCustomInfoList_99(Dictionary_2_t2851536818 * value)
	{
		___mDictCustomInfoList_99 = value;
		Il2CppCodeGenWriteBarrier(&___mDictCustomInfoList_99, value);
	}

	inline static int32_t get_offset_of_mDictPushServerList_100() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___mDictPushServerList_100)); }
	inline List_1_t4283466968 * get_mDictPushServerList_100() const { return ___mDictPushServerList_100; }
	inline List_1_t4283466968 ** get_address_of_mDictPushServerList_100() { return &___mDictPushServerList_100; }
	inline void set_mDictPushServerList_100(List_1_t4283466968 * value)
	{
		___mDictPushServerList_100 = value;
		Il2CppCodeGenWriteBarrier(&___mDictPushServerList_100, value);
	}

	inline static int32_t get_offset_of_mstrPreSuffix_101() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___mstrPreSuffix_101)); }
	inline String_t* get_mstrPreSuffix_101() const { return ___mstrPreSuffix_101; }
	inline String_t** get_address_of_mstrPreSuffix_101() { return &___mstrPreSuffix_101; }
	inline void set_mstrPreSuffix_101(String_t* value)
	{
		___mstrPreSuffix_101 = value;
		Il2CppCodeGenWriteBarrier(&___mstrPreSuffix_101, value);
	}

	inline static int32_t get_offset_of_mstrStreamSuffix_102() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___mstrStreamSuffix_102)); }
	inline String_t* get_mstrStreamSuffix_102() const { return ___mstrStreamSuffix_102; }
	inline String_t** get_address_of_mstrStreamSuffix_102() { return &___mstrStreamSuffix_102; }
	inline void set_mstrStreamSuffix_102(String_t* value)
	{
		___mstrStreamSuffix_102 = value;
		Il2CppCodeGenWriteBarrier(&___mstrStreamSuffix_102, value);
	}

	inline static int32_t get_offset_of_mstrAssetBundleRootPath_103() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___mstrAssetBundleRootPath_103)); }
	inline String_t* get_mstrAssetBundleRootPath_103() const { return ___mstrAssetBundleRootPath_103; }
	inline String_t** get_address_of_mstrAssetBundleRootPath_103() { return &___mstrAssetBundleRootPath_103; }
	inline void set_mstrAssetBundleRootPath_103(String_t* value)
	{
		___mstrAssetBundleRootPath_103 = value;
		Il2CppCodeGenWriteBarrier(&___mstrAssetBundleRootPath_103, value);
	}

	inline static int32_t get_offset_of_mstrSourceResRootPath_104() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___mstrSourceResRootPath_104)); }
	inline String_t* get_mstrSourceResRootPath_104() const { return ___mstrSourceResRootPath_104; }
	inline String_t** get_address_of_mstrSourceResRootPath_104() { return &___mstrSourceResRootPath_104; }
	inline void set_mstrSourceResRootPath_104(String_t* value)
	{
		___mstrSourceResRootPath_104 = value;
		Il2CppCodeGenWriteBarrier(&___mstrSourceResRootPath_104, value);
	}

	inline static int32_t get_offset_of_mstrStreamResRootPath_105() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___mstrStreamResRootPath_105)); }
	inline String_t* get_mstrStreamResRootPath_105() const { return ___mstrStreamResRootPath_105; }
	inline String_t** get_address_of_mstrStreamResRootPath_105() { return &___mstrStreamResRootPath_105; }
	inline void set_mstrStreamResRootPath_105(String_t* value)
	{
		___mstrStreamResRootPath_105 = value;
		Il2CppCodeGenWriteBarrier(&___mstrStreamResRootPath_105, value);
	}

	inline static int32_t get_offset_of_mstrMacAddress_106() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___mstrMacAddress_106)); }
	inline String_t* get_mstrMacAddress_106() const { return ___mstrMacAddress_106; }
	inline String_t** get_address_of_mstrMacAddress_106() { return &___mstrMacAddress_106; }
	inline void set_mstrMacAddress_106(String_t* value)
	{
		___mstrMacAddress_106 = value;
		Il2CppCodeGenWriteBarrier(&___mstrMacAddress_106, value);
	}

	inline static int32_t get_offset_of_mstrVersionUseage_107() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___mstrVersionUseage_107)); }
	inline String_t* get_mstrVersionUseage_107() const { return ___mstrVersionUseage_107; }
	inline String_t** get_address_of_mstrVersionUseage_107() { return &___mstrVersionUseage_107; }
	inline void set_mstrVersionUseage_107(String_t* value)
	{
		___mstrVersionUseage_107 = value;
		Il2CppCodeGenWriteBarrier(&___mstrVersionUseage_107, value);
	}

	inline static int32_t get_offset_of_mstrInstallationVersion_108() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___mstrInstallationVersion_108)); }
	inline String_t* get_mstrInstallationVersion_108() const { return ___mstrInstallationVersion_108; }
	inline String_t** get_address_of_mstrInstallationVersion_108() { return &___mstrInstallationVersion_108; }
	inline void set_mstrInstallationVersion_108(String_t* value)
	{
		___mstrInstallationVersion_108 = value;
		Il2CppCodeGenWriteBarrier(&___mstrInstallationVersion_108, value);
	}

	inline static int32_t get_offset_of_mstrLocalVersion_109() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___mstrLocalVersion_109)); }
	inline String_t* get_mstrLocalVersion_109() const { return ___mstrLocalVersion_109; }
	inline String_t** get_address_of_mstrLocalVersion_109() { return &___mstrLocalVersion_109; }
	inline void set_mstrLocalVersion_109(String_t* value)
	{
		___mstrLocalVersion_109 = value;
		Il2CppCodeGenWriteBarrier(&___mstrLocalVersion_109, value);
	}

	inline static int32_t get_offset_of_miLocalNumberVersion_110() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___miLocalNumberVersion_110)); }
	inline int32_t get_miLocalNumberVersion_110() const { return ___miLocalNumberVersion_110; }
	inline int32_t* get_address_of_miLocalNumberVersion_110() { return &___miLocalNumberVersion_110; }
	inline void set_miLocalNumberVersion_110(int32_t value)
	{
		___miLocalNumberVersion_110 = value;
	}

	inline static int32_t get_offset_of_DisplayJoystick_111() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___DisplayJoystick_111)); }
	inline bool get_DisplayJoystick_111() const { return ___DisplayJoystick_111; }
	inline bool* get_address_of_DisplayJoystick_111() { return &___DisplayJoystick_111; }
	inline void set_DisplayJoystick_111(bool value)
	{
		___DisplayJoystick_111 = value;
	}

	inline static int32_t get_offset_of_bWriteFps_112() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___bWriteFps_112)); }
	inline bool get_bWriteFps_112() const { return ___bWriteFps_112; }
	inline bool* get_address_of_bWriteFps_112() { return &___bWriteFps_112; }
	inline void set_bWriteFps_112(bool value)
	{
		___bWriteFps_112 = value;
	}

	inline static int32_t get_offset_of_U3CGameAreaU3Ek__BackingField_113() { return static_cast<int32_t>(offsetof(Config_t982593218_StaticFields, ___U3CGameAreaU3Ek__BackingField_113)); }
	inline int32_t get_U3CGameAreaU3Ek__BackingField_113() const { return ___U3CGameAreaU3Ek__BackingField_113; }
	inline int32_t* get_address_of_U3CGameAreaU3Ek__BackingField_113() { return &___U3CGameAreaU3Ek__BackingField_113; }
	inline void set_U3CGameAreaU3Ek__BackingField_113(int32_t value)
	{
		___U3CGameAreaU3Ek__BackingField_113 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
