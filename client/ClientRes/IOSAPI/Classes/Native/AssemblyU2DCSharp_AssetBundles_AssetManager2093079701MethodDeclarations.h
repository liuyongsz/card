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

// AssetBundles.AssetManager
struct AssetManager_t2093079701;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;
// UnityEngine.AssetBundleManifest
struct AssetBundleManifest_t1328741589;
// AssetBundles.LoadedWWW
struct LoadedWWW_t3791486166;
// AssetBundles.AssetBundleLoadManifestOperation
struct AssetBundleLoadManifestOperation_t3869874914;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// AssetBundles.NoramlResOperation
struct NoramlResOperation_t1219944396;
// AssetBundles.AssetBundleLoadAssetOperationFull
struct AssetBundleLoadAssetOperationFull_t1271711334;
// System.Type
struct Type_t;
// AssetBundles.AssetLoadOperation
struct AssetLoadOperation_t1768276191;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_AssetBundles_AssetManager_LogMod1326430292.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_AssetBundleManifest1328741589.h"
#include "AssemblyU2DCSharp_AssetBundles_AssetManager_LogTyp1024160187.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_AssetBundles_EResType4259288613.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void AssetBundles.AssetManager::.ctor()
extern "C"  void AssetManager__ctor_m2297772377 (AssetManager_t2093079701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AssetBundles.AssetManager::.cctor()
extern "C"  void AssetManager__cctor_m3110188724 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AssetBundles.AssetManager/LogMode AssetBundles.AssetManager::get_logMode()
extern "C"  int32_t AssetManager_get_logMode_m3563510546 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AssetBundles.AssetManager::set_logMode(AssetBundles.AssetManager/LogMode)
extern "C"  void AssetManager_set_logMode_m2275855529 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AssetBundles.AssetManager::get_BaseDownloadingURL()
extern "C"  String_t* AssetManager_get_BaseDownloadingURL_m3699027519 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AssetBundles.AssetManager::set_BaseDownloadingURL(System.String)
extern "C"  void AssetManager_set_BaseDownloadingURL_m807673038 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] AssetBundles.AssetManager::get_ActiveVariants()
extern "C"  StringU5BU5D_t1642385972* AssetManager_get_ActiveVariants_m2548420211 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AssetBundles.AssetManager::set_ActiveVariants(System.String[])
extern "C"  void AssetManager_set_ActiveVariants_m2431373734 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t1642385972* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AssetBundles.AssetManager::set_AssetBundleManifestObject(UnityEngine.AssetBundleManifest)
extern "C"  void AssetManager_set_AssetBundleManifestObject_m3102561310 (Il2CppObject * __this /* static, unused */, AssetBundleManifest_t1328741589 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AssetBundleManifest AssetBundles.AssetManager::get_AssetBundleManifestObject()
extern "C"  AssetBundleManifest_t1328741589 * AssetManager_get_AssetBundleManifestObject_m3395534721 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AssetBundles.AssetManager::Log(AssetBundles.AssetManager/LogType,System.String)
extern "C"  void AssetManager_Log_m2960649326 (Il2CppObject * __this /* static, unused */, int32_t ___logType0, String_t* ___text1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AssetBundles.AssetManager::GetStreamingAssetsPath()
extern "C"  String_t* AssetManager_GetStreamingAssetsPath_m287643820 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AssetBundles.AssetManager::SetSourceAssetBundleDirectory(System.String)
extern "C"  void AssetManager_SetSourceAssetBundleDirectory_m938648709 (Il2CppObject * __this /* static, unused */, String_t* ___relativePath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AssetBundles.AssetManager::SetSourceAssetBundleURL(System.String)
extern "C"  void AssetManager_SetSourceAssetBundleURL_m702790079 (Il2CppObject * __this /* static, unused */, String_t* ___absolutePath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AssetBundles.AssetManager::SetDevelopmentAssetBundleServer()
extern "C"  void AssetManager_SetDevelopmentAssetBundleServer_m3937875757 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AssetBundles.LoadedWWW AssetBundles.AssetManager::GetLoadedAssetBundle(System.String,System.String&)
extern "C"  LoadedWWW_t3791486166 * AssetManager_GetLoadedAssetBundle_m2155344918 (Il2CppObject * __this /* static, unused */, String_t* ___assetBundleName0, String_t** ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AssetBundles.AssetBundleLoadManifestOperation AssetBundles.AssetManager::Initialize(UnityEngine.GameObject)
extern "C"  AssetBundleLoadManifestOperation_t3869874914 * AssetManager_Initialize_m3389746147 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AssetBundles.AssetBundleLoadManifestOperation AssetBundles.AssetManager::Initialize(System.String,UnityEngine.GameObject)
extern "C"  AssetBundleLoadManifestOperation_t3869874914 * AssetManager_Initialize_m1525325953 (Il2CppObject * __this /* static, unused */, String_t* ___manifestAssetBundleName0, GameObject_t1756533147 * ___go1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AssetBundles.AssetManager::LoadNormalRes(System.String,AssetBundles.EResType)
extern "C"  void AssetManager_LoadNormalRes_m1173878810 (Il2CppObject * __this /* static, unused */, String_t* ___resname0, int32_t ___t1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AssetBundles.AssetManager::LoadAssetBundle(System.String,System.Boolean)
extern "C"  void AssetManager_LoadAssetBundle_m286269388 (Il2CppObject * __this /* static, unused */, String_t* ___assetBundleName0, bool ___isLoadingAssetBundleManifest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AssetBundles.AssetManager::RemapVariantName(System.String)
extern "C"  String_t* AssetManager_RemapVariantName_m930100109 (Il2CppObject * __this /* static, unused */, String_t* ___assetBundleName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AssetBundles.AssetManager::LoadResInternal(System.String,AssetBundles.EResType,System.Boolean)
extern "C"  bool AssetManager_LoadResInternal_m1534766253 (Il2CppObject * __this /* static, unused */, String_t* ___assetBundleName0, int32_t ___t1, bool ___isLoadingAssetBundleManifest2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AssetBundles.AssetManager::LoadDependencies(System.String)
extern "C"  void AssetManager_LoadDependencies_m2125538822 (Il2CppObject * __this /* static, unused */, String_t* ___assetBundleName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AssetBundles.AssetManager::UnloadAssetBundle(System.String)
extern "C"  void AssetManager_UnloadAssetBundle_m4288918990 (Il2CppObject * __this /* static, unused */, String_t* ___assetBundleName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AssetBundles.AssetManager::UnloadDependencies(System.String)
extern "C"  void AssetManager_UnloadDependencies_m588361459 (Il2CppObject * __this /* static, unused */, String_t* ___assetBundleName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AssetBundles.AssetManager::UnloadNormalRes(System.String)
extern "C"  void AssetManager_UnloadNormalRes_m4022778745 (Il2CppObject * __this /* static, unused */, String_t* ___resname0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AssetBundles.AssetManager::UnloadAllCacheRes(System.Boolean)
extern "C"  void AssetManager_UnloadAllCacheRes_m817371050 (Il2CppObject * __this /* static, unused */, bool ___isdestory0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AssetBundles.AssetManager::UnloadAssetBundleInternal(System.String)
extern "C"  void AssetManager_UnloadAssetBundleInternal_m1667640565 (Il2CppObject * __this /* static, unused */, String_t* ___assetBundleName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AssetBundles.AssetManager::Update()
extern "C"  void AssetManager_Update_m78410452 (AssetManager_t2093079701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AssetBundles.AssetManager::MoveToURLLoading()
extern "C"  void AssetManager_MoveToURLLoading_m1801756590 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AssetBundles.NoramlResOperation AssetBundles.AssetManager::LoadNormalAssetAsync(System.String,AssetBundles.EResType)
extern "C"  NoramlResOperation_t1219944396 * AssetManager_LoadNormalAssetAsync_m23347644 (Il2CppObject * __this /* static, unused */, String_t* ___name0, int32_t ___t1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AssetBundles.AssetBundleLoadAssetOperationFull AssetBundles.AssetManager::LoadAssetAsync(System.String,System.String,System.Type,System.Boolean)
extern "C"  AssetBundleLoadAssetOperationFull_t1271711334 * AssetManager_LoadAssetAsync_m2153108547 (Il2CppObject * __this /* static, unused */, String_t* ___assetBundleName0, String_t* ___assetName1, Type_t * ___type2, bool ___loadall3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AssetBundles.AssetLoadOperation AssetBundles.AssetManager::LoadLevelAsync(System.String,System.String,System.Boolean)
extern "C"  AssetLoadOperation_t1768276191 * AssetManager_LoadLevelAsync_m688678777 (Il2CppObject * __this /* static, unused */, String_t* ___assetBundleName0, String_t* ___levelName1, bool ___isAdditive2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
