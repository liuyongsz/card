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

// AssetBundleManager
struct AssetBundleManager_t624888341;
// AMLoadOperation
struct AMLoadOperation_t148391793;
// System.String
struct String_t;
// AMLoadAssetOperation
struct AMLoadAssetOperation_t2496313085;
// System.Type
struct Type_t;
// UnityEngine.Object
struct Object_t1021602117;
// LoadedAssetBundle
struct LoadedAssetBundle_t2954462549;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void AssetBundleManager::.ctor()
extern "C"  void AssetBundleManager__ctor_m1001388798 (AssetBundleManager_t624888341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AssetBundleManager::.cctor()
extern "C"  void AssetBundleManager__cctor_m3506502639 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AssetBundleManager::InitManager()
extern "C"  void AssetBundleManager_InitManager_m4083893881 (AssetBundleManager_t624888341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AMLoadOperation AssetBundleManager::LoadLevelAsync(System.String,System.String,System.Boolean)
extern "C"  AMLoadOperation_t148391793 * AssetBundleManager_LoadLevelAsync_m3856898289 (Il2CppObject * __this /* static, unused */, String_t* ___assetBundleName0, String_t* ___levelName1, bool ___isAdditive2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AMLoadAssetOperation AssetBundleManager::LoadAssetAsync(System.String,System.String,System.Type)
extern "C"  AMLoadAssetOperation_t2496313085 * AssetBundleManager_LoadAssetAsync_m3171745679 (Il2CppObject * __this /* static, unused */, String_t* ___assetBundleName0, String_t* ___assetName1, Type_t * ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object AssetBundleManager::LoadAsset(System.String,System.String,System.Type)
extern "C"  Object_t1021602117 * AssetBundleManager_LoadAsset_m933678592 (Il2CppObject * __this /* static, unused */, String_t* ___assetBundleName0, String_t* ___assetName1, Type_t * ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LoadedAssetBundle AssetBundleManager::GetLoadedAssetBundle(System.String,System.String&)
extern "C"  LoadedAssetBundle_t2954462549 * AssetBundleManager_GetLoadedAssetBundle_m2356340331 (Il2CppObject * __this /* static, unused */, String_t* ___assetBundleName0, String_t** ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AssetBundleManager::LoadAssetBundle(System.String,System.Boolean)
extern "C"  void AssetBundleManager_LoadAssetBundle_m2770024815 (Il2CppObject * __this /* static, unused */, String_t* ___assetBundleName0, bool ___sync1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AssetBundleManager::LoadAssetBundleInternal(System.String,System.Boolean)
extern "C"  bool AssetBundleManager_LoadAssetBundleInternal_m3198323356 (Il2CppObject * __this /* static, unused */, String_t* ___assetBundleName0, bool ___sync1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AssetBundleManager::LoadDependencies(System.String,System.Boolean)
extern "C"  void AssetBundleManager_LoadDependencies_m2893760180 (Il2CppObject * __this /* static, unused */, String_t* ___assetBundleName0, bool ___sync1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AssetBundleManager::UnloadAssetBundle(System.String)
extern "C"  void AssetBundleManager_UnloadAssetBundle_m1317771147 (Il2CppObject * __this /* static, unused */, String_t* ___assetBundleName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AssetBundleManager::UnloadAssetBundleInternal(System.String)
extern "C"  void AssetBundleManager_UnloadAssetBundleInternal_m1460354960 (Il2CppObject * __this /* static, unused */, String_t* ___assetBundleName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AssetBundleManager::UnloadDependencies(System.String)
extern "C"  void AssetBundleManager_UnloadDependencies_m915836788 (Il2CppObject * __this /* static, unused */, String_t* ___assetBundleName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AssetBundleManager::Update()
extern "C"  void AssetBundleManager_Update_m226649653 (AssetBundleManager_t624888341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
