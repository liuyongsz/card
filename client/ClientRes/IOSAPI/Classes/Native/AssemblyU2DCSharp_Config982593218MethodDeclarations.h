#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Config
struct Config_t982593218;
// UIFont
struct UIFont_t389944949;
// System.String
struct String_t;
// Config/GameAddress
struct GameAddress_t2645488947;
// Config/NoticeInfo
struct NoticeInfo_t2608510023;
// XMLNode
struct XMLNode_t3111658575;
// XMLNodeList
struct XMLNodeList_t2138300961;
// Config/PushServerInfo
struct PushServerInfo_t619378540;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UIFont389944949.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_Config_EnumArea877739267.h"
#include "AssemblyU2DCSharp_GameQuality783479189.h"
#include "AssemblyU2DCSharp_Config_NoticeInfo2608510023.h"
#include "AssemblyU2DCSharp_XMLNode3111658575.h"
#include "AssemblyU2DCSharp_XMLNodeList2138300961.h"

// System.Void Config::.ctor()
extern "C"  void Config__ctor_m1996176765 (Config_t982593218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Config::.cctor()
extern "C"  void Config__cctor_m3515577596 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIFont Config::get_SnailFont()
extern "C"  UIFont_t389944949 * Config_get_SnailFont_m1656724960 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Config::set_SnailFont(UIFont)
extern "C"  void Config_set_SnailFont_m3612379073 (Il2CppObject * __this /* static, unused */, UIFont_t389944949 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIFont Config::get_NGUIFont()
extern "C"  UIFont_t389944949 * Config_get_NGUIFont_m4279757126 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Config::set_NGUIFont(UIFont)
extern "C"  void Config_set_NGUIFont_m2721138509 (Il2CppObject * __this /* static, unused */, UIFont_t389944949 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIFont Config::LoadUIFont(System.String)
extern "C"  UIFont_t389944949 * Config_LoadUIFont_m2763500006 (Il2CppObject * __this /* static, unused */, String_t* ___strFontName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Config::get_bEditor()
extern "C"  bool Config_get_bEditor_m758627395 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Config::get_bAndroid()
extern "C"  bool Config_get_bAndroid_m3852650985 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Config::get_bIPhone()
extern "C"  bool Config_get_bIPhone_m3180661951 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Config::get_bWin()
extern "C"  bool Config_get_bWin_m1194700794 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Config::get_bMac()
extern "C"  bool Config_get_bMac_m3647939277 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Config/EnumArea Config::get_GameArea()
extern "C"  int32_t Config_get_GameArea_m4089467103 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Config::set_GameArea(Config/EnumArea)
extern "C"  void Config_set_GameArea_m3952053298 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameQuality Config::get_CurQuality()
extern "C"  int32_t Config_get_CurQuality_m3573880405 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Config::set_CurQuality(GameQuality)
extern "C"  void Config_set_CurQuality_m1614510470 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameQuality Config::get_CurSettingQuality()
extern "C"  int32_t Config_get_CurSettingQuality_m1571167947 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Config::set_CurSettingQuality(GameQuality)
extern "C"  void Config_set_CurSettingQuality_m3019317600 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Config::GetSceneObjects(System.String)
extern "C"  bool Config_GetSceneObjects_m4265119021 (Il2CppObject * __this /* static, unused */, String_t* ___sceneRes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Config::GetQueueWaitTime()
extern "C"  int32_t Config_GetQueueWaitTime_m2811764444 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Config::get_ScreenResolution()
extern "C"  String_t* Config_get_ScreenResolution_m2847541691 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Config::get_mbVerifyVersion()
extern "C"  bool Config_get_mbVerifyVersion_m2809835450 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Config::SetResourceVersion(System.String)
extern "C"  void Config_SetResourceVersion_m2739871525 (Il2CppObject * __this /* static, unused */, String_t* ___strResourceVersion0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Config::SetLanguage(System.String)
extern "C"  void Config_SetLanguage_m2039005895 (Il2CppObject * __this /* static, unused */, String_t* ___sType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Config::GetMacAddress()
extern "C"  String_t* Config_GetMacAddress_m822646379 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Config::SetMacAddress(System.String)
extern "C"  void Config_SetMacAddress_m1836297742 (Il2CppObject * __this /* static, unused */, String_t* ___strMacAddress0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Config::GetPreSuffix()
extern "C"  String_t* Config_GetPreSuffix_m2875553668 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Config::SetPreSuffix(System.String)
extern "C"  void Config_SetPreSuffix_m4284761673 (Il2CppObject * __this /* static, unused */, String_t* ___strSuffix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Config::GetStreamSuffix()
extern "C"  String_t* Config_GetStreamSuffix_m3061374961 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Config::SetStreamSuffix(System.String)
extern "C"  void Config_SetStreamSuffix_m2832639678 (Il2CppObject * __this /* static, unused */, String_t* ___strSuffix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Config/GameAddress Config::GetUpdaterAddress()
extern "C"  GameAddress_t2645488947 * Config_GetUpdaterAddress_m1258312008 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Config::GetUpdaterConfig(System.String,System.String)
extern "C"  String_t* Config_GetUpdaterConfig_m3326431559 (Il2CppObject * __this /* static, unused */, String_t* ___strKey0, String_t* ___strName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Config::GetAssetBundleRootPath()
extern "C"  String_t* Config_GetAssetBundleRootPath_m1235791633 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Config::SetAssetBundleRootPath(System.String)
extern "C"  void Config_SetAssetBundleRootPath_m1340557960 (Il2CppObject * __this /* static, unused */, String_t* ___strRootPath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Config::GetVersionUseage()
extern "C"  String_t* Config_GetVersionUseage_m3825462230 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Config::SetVersionUseage(System.String)
extern "C"  void Config_SetVersionUseage_m2205889419 (Il2CppObject * __this /* static, unused */, String_t* ___strValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Config::GetInstallationVersion()
extern "C"  String_t* Config_GetInstallationVersion_m2268502352 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Config::SetInstallationVersion(System.String)
extern "C"  void Config_SetInstallationVersion_m2502956379 (Il2CppObject * __this /* static, unused */, String_t* ___strValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Config::GetLocalVersion()
extern "C"  String_t* Config_GetLocalVersion_m3603407561 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Config::SetLocalVersion(System.String)
extern "C"  void Config_SetLocalVersion_m4063648674 (Il2CppObject * __this /* static, unused */, String_t* ___strLocalVersion0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Config::GetLocalNumberVersion()
extern "C"  int32_t Config_GetLocalNumberVersion_m446346301 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Config::SetLocalNumberVersion(System.String)
extern "C"  void Config_SetLocalNumberVersion_m235690033 (Il2CppObject * __this /* static, unused */, String_t* ___strLocalNumberVersion0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Config::GetSourceRootPath()
extern "C"  String_t* Config_GetSourceRootPath_m1391129996 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Config::SetSourceRootPath(System.String)
extern "C"  void Config_SetSourceRootPath_m4010219075 (Il2CppObject * __this /* static, unused */, String_t* ___strRootPath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Config::GetStreamRootPath()
extern "C"  String_t* Config_GetStreamRootPath_m2676098873 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Config::SetStreamRootPath(System.String)
extern "C"  void Config_SetStreamRootPath_m731153984 (Il2CppObject * __this /* static, unused */, String_t* ___strRootPath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Config::SetUpdateGuideInfo(System.String)
extern "C"  void Config_SetUpdateGuideInfo_m4206597752 (Il2CppObject * __this /* static, unused */, String_t* ___xmlString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Config::SetServerNotice(System.String)
extern "C"  void Config_SetServerNotice_m3132210544 (Il2CppObject * __this /* static, unused */, String_t* ___xmlString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Config::Compare_Index(Config/NoticeInfo,Config/NoticeInfo)
extern "C"  int32_t Config_Compare_Index_m2155305777 (Il2CppObject * __this /* static, unused */, NoticeInfo_t2608510023 * ___aInfo0, NoticeInfo_t2608510023 * ___bInfo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Config::SetCustomInfoList(System.String)
extern "C"  void Config_SetCustomInfoList_m1814405848 (Il2CppObject * __this /* static, unused */, String_t* ___xmlString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Config::SetChannelInfo(XMLNode)
extern "C"  void Config_SetChannelInfo_m436390547 (Il2CppObject * __this /* static, unused */, XMLNode_t3111658575 * ___rootnode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Config::SetAccInfo(XMLNode)
extern "C"  void Config_SetAccInfo_m3464343581 (Il2CppObject * __this /* static, unused */, XMLNode_t3111658575 * ___rootnode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Config::SetCustomInfo(XMLNodeList)
extern "C"  void Config_SetCustomInfo_m3186523965 (Il2CppObject * __this /* static, unused */, XMLNodeList_t2138300961 * ___xmlNodeList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Config::GetCustomValue(System.String)
extern "C"  String_t* Config_GetCustomValue_m673838922 (Il2CppObject * __this /* static, unused */, String_t* ___strKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Config::InitResouceInfo()
extern "C"  void Config_InitResouceInfo_m1366567061 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Config::ReadServerList(System.String)
extern "C"  void Config_ReadServerList_m1969343584 (Il2CppObject * __this /* static, unused */, String_t* ___xmlString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Config::SetAllServerList(System.String)
extern "C"  void Config_SetAllServerList_m3810764027 (Il2CppObject * __this /* static, unused */, String_t* ___xmlString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Config::SetShopList(System.String)
extern "C"  void Config_SetShopList_m3959810759 (Il2CppObject * __this /* static, unused */, String_t* ___xmlString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Config::SetPushServerList(System.String)
extern "C"  void Config_SetPushServerList_m3324269532 (Il2CppObject * __this /* static, unused */, String_t* ___xmlString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Config/PushServerInfo Config::GetPushServer()
extern "C"  PushServerInfo_t619378540 * Config_GetPushServer_m2705567491 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Config::SetWordsInfo(System.String)
extern "C"  void Config_SetWordsInfo_m3236111734 (Il2CppObject * __this /* static, unused */, String_t* ___strWords0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Config::GetUdpateLangage(System.String)
extern "C"  String_t* Config_GetUdpateLangage_m1276674214 (Il2CppObject * __this /* static, unused */, String_t* ___strKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Config::SavePlayerPrefs(System.String,System.String,System.String,System.String,System.String)
extern "C"  void Config_SavePlayerPrefs_m1562857215 (Il2CppObject * __this /* static, unused */, String_t* ___useraccount0, String_t* ___username1, String_t* ___serverid2, String_t* ___gameid3, String_t* ___appstoreUrl4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Config::GetPlayerPrefs(System.String&,System.String&,System.String&,System.String&,System.String&)
extern "C"  void Config_GetPlayerPrefs_m459132566 (Il2CppObject * __this /* static, unused */, String_t** ___useraccount0, String_t** ___username1, String_t** ___serverid2, String_t** ___gameid3, String_t** ___appstoreUrl4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Config::GetNetErrorPromp(System.String)
extern "C"  String_t* Config_GetNetErrorPromp_m1126537267 (Il2CppObject * __this /* static, unused */, String_t* ___strKeywords0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
