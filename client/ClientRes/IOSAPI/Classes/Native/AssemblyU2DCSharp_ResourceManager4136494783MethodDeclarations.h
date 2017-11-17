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

// ResourceManager
struct ResourceManager_t4136494783;
// System.Action
struct Action_t3226471752;
// UnityEngine.AsyncOperation
struct AsyncOperation_t3814632279;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.String
struct String_t;
// System.Action`2<System.String,UnityEngine.GameObject>
struct Action_2_t3961854839;
// System.Action`1<System.String>
struct Action_1_t1831019615;
// System.Action`3<System.String,UnityEngine.GameObject,System.Object>
struct Action_3_t1036994317;
// System.Object
struct Il2CppObject;
// System.Action`1<System.Object>
struct Action_1_t2491248677;
// System.Action`1<AssetBundles.NormalRes>
struct Action_1_t2983115873;
// System.Action`1<UnityEngine.AssetBundle>
struct Action_1_t1856778136;
// UISprite
struct UISprite_t603616735;
// System.Action`3<System.String,UISprite,UnityEngine.AssetBundle>
struct Action_3_t660165804;
// System.Action`1<UnityEngine.Sprite>
struct Action_1_t111393165;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3226471752.h"
#include "UnityEngine_UnityEngine_AsyncOperation3814632279.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_AssetBundles_EResType4259288613.h"
#include "AssemblyU2DCSharp_UISprite603616735.h"

// System.Void ResourceManager::.ctor()
extern "C"  void ResourceManager__ctor_m1852942078 (ResourceManager_t4136494783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResourceManager::.cctor()
extern "C"  void ResourceManager__cctor_m1947482637 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResourceManager::Init(System.Action)
extern "C"  void ResourceManager_Init_m3608443985 (ResourceManager_t4136494783 * __this, Action_t3226471752 * ___Complete0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResourceManager::Update()
extern "C"  void ResourceManager_Update_m3656978019 (ResourceManager_t4136494783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResourceManager::StartLoading_4(UnityEngine.AsyncOperation)
extern "C"  void ResourceManager_StartLoading_4_m1233727187 (ResourceManager_t4136494783 * __this, AsyncOperation_t3814632279 * ___op0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ResourceManager::OnLoadComplete()
extern "C"  Il2CppObject * ResourceManager_OnLoadComplete_m687992014 (ResourceManager_t4136494783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ResourceManager::Initialize(System.Action)
extern "C"  Il2CppObject * ResourceManager_Initialize_m3680077965 (ResourceManager_t4136494783 * __this, Action_t3226471752 * ___Complete0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResourceManager::LoadPrefab(System.String,System.Action`2<System.String,UnityEngine.GameObject>,System.Action`1<System.String>)
extern "C"  void ResourceManager_LoadPrefab_m169529011 (ResourceManager_t4136494783 * __this, String_t* ___prefabName0, Action_2_t3961854839 * ___OnPackCompleted1, Action_1_t1831019615 * ___OnPackError2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResourceManager::LoadLocalPrefab(System.String,System.String,System.Action`2<System.String,UnityEngine.GameObject>,System.Action`1<System.String>)
extern "C"  void ResourceManager_LoadLocalPrefab_m4156807312 (ResourceManager_t4136494783 * __this, String_t* ___prefabName0, String_t* ___path1, Action_2_t3961854839 * ___OnPackCompleted2, Action_1_t1831019615 * ___OnPackError3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResourceManager::LoadPrefab(System.String,System.Action`3<System.String,UnityEngine.GameObject,System.Object>,System.Action`1<System.String>,System.Object)
extern "C"  void ResourceManager_LoadPrefab_m2095998354 (ResourceManager_t4136494783 * __this, String_t* ___prefabName0, Action_3_t1036994317 * ___OnPackCompleted1, Action_1_t1831019615 * ___OnPackError2, Il2CppObject * ___data3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResourceManager::LoadLocalPrefab(System.String,System.String,System.Action`3<System.String,UnityEngine.GameObject,System.Object>,System.Action`1<System.String>,System.Object)
extern "C"  void ResourceManager_LoadLocalPrefab_m1730980245 (ResourceManager_t4136494783 * __this, String_t* ___prefabName0, String_t* ___path1, Action_3_t1036994317 * ___OnPackCompleted2, Action_1_t1831019615 * ___OnPackError3, Il2CppObject * ___data4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResourceManager::LoadScene(System.String,System.Boolean,System.Action`1<System.Object>,System.Object,System.Action`1<System.String>)
extern "C"  void ResourceManager_LoadScene_m1508168477 (ResourceManager_t4136494783 * __this, String_t* ___sceneName0, bool ___IsAdditive1, Action_1_t2491248677 * ___OnSceneLoadCompleted2, Il2CppObject * ___obj3, Action_1_t1831019615 * ___OnSceneLoadError4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResourceManager::LoadBytes(System.String,AssetBundles.EResType,System.Action`1<AssetBundles.NormalRes>,System.Action`1<System.String>)
extern "C"  void ResourceManager_LoadBytes_m1711443543 (ResourceManager_t4136494783 * __this, String_t* ___filename0, int32_t ___t1, Action_1_t2983115873 * ___onloaded2, Action_1_t1831019615 * ___errorload3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResourceManager::LoadAsset(System.String,AssetBundles.EResType,System.Action`1<AssetBundles.NormalRes>)
extern "C"  void ResourceManager_LoadAsset_m3694816920 (ResourceManager_t4136494783 * __this, String_t* ___filename0, int32_t ___t1, Action_1_t2983115873 * ___completeCallback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResourceManager::LoadTexture(System.String,System.Action`1<AssetBundles.NormalRes>,System.Action`1<System.String>)
extern "C"  void ResourceManager_LoadTexture_m3376186445 (ResourceManager_t4136494783 * __this, String_t* ___filename0, Action_1_t2983115873 * ___onloaded1, Action_1_t1831019615 * ___errorload2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResourceManager::LoadAB(System.String,System.Action`1<UnityEngine.AssetBundle>,System.Action`1<System.String>)
extern "C"  void ResourceManager_LoadAB_m3892846336 (ResourceManager_t4136494783 * __this, String_t* ___filename0, Action_1_t1856778136 * ___onloaded1, Action_1_t1831019615 * ___errorload2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResourceManager::LoadAtlas(System.String,System.String,UISprite,System.Action`3<System.String,UISprite,UnityEngine.AssetBundle>,System.Action`1<System.String>)
extern "C"  void ResourceManager_LoadAtlas_m3681376942 (ResourceManager_t4136494783 * __this, String_t* ___atlasName0, String_t* ___spriteName1, UISprite_t603616735 * ___sprite2, Action_3_t660165804 * ___onloaded3, Action_1_t1831019615 * ___errorload4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ResourceManager ResourceManager::get_Instance()
extern "C"  ResourceManager_t4136494783 * ResourceManager_get_Instance_m1430740338 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ResourceManager::LoadAssetResAsync(System.String,AssetBundles.EResType,System.Action`1<AssetBundles.NormalRes>)
extern "C"  Il2CppObject * ResourceManager_LoadAssetResAsync_m3284184026 (ResourceManager_t4136494783 * __this, String_t* ___name0, int32_t ___t1, Action_1_t2983115873 * ___completeCallback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ResourceManager::LoadNormalResAsync(System.String,AssetBundles.EResType,System.Action`1<UnityEngine.AssetBundle>,System.Action`1<System.String>)
extern "C"  Il2CppObject * ResourceManager_LoadNormalResAsync_m3774521792 (ResourceManager_t4136494783 * __this, String_t* ___name0, int32_t ___t1, Action_1_t1856778136 * ___onloaded2, Action_1_t1831019615 * ___errload3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ResourceManager::LoadAtlasResAsync(System.String,System.String,UISprite,AssetBundles.EResType,System.Action`3<System.String,UISprite,UnityEngine.AssetBundle>,System.Action`1<System.String>)
extern "C"  Il2CppObject * ResourceManager_LoadAtlasResAsync_m2409540546 (ResourceManager_t4136494783 * __this, String_t* ___name0, String_t* ___spriteName1, UISprite_t603616735 * ___sprite2, int32_t ___t3, Action_3_t660165804 * ___onloaded4, Action_1_t1831019615 * ___errload5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ResourceManager::LoadNormalResAsync(System.String,AssetBundles.EResType,System.Action`1<AssetBundles.NormalRes>,System.Action`1<System.String>)
extern "C"  Il2CppObject * ResourceManager_LoadNormalResAsync_m2139753113 (ResourceManager_t4136494783 * __this, String_t* ___name0, int32_t ___t1, Action_1_t2983115873 * ___onloaded2, Action_1_t1831019615 * ___errload3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ResourceManager::LoadSpriteAsync(System.String,System.String,System.Action`1<UnityEngine.Sprite>,System.Action)
extern "C"  Il2CppObject * ResourceManager_LoadSpriteAsync_m3654065976 (ResourceManager_t4136494783 * __this, String_t* ___assetBundleName0, String_t* ___spritename1, Action_1_t111393165 * ___OnLoad2, Action_t3226471752 * ___OnPackError3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ResourceManager::InstantiateGameObjectAsync(System.String,System.String,System.Action`2<System.String,UnityEngine.GameObject>,System.Action`1<System.String>)
extern "C"  Il2CppObject * ResourceManager_InstantiateGameObjectAsync_m555073348 (ResourceManager_t4136494783 * __this, String_t* ___assetBundleName0, String_t* ___assetName1, Action_2_t3961854839 * ___OnPackCompleted2, Action_1_t1831019615 * ___OnPackError3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ResourceManager::InstantiateLocalGameObject(System.String,System.String,System.String,System.Action`2<System.String,UnityEngine.GameObject>,System.Action`1<System.String>)
extern "C"  Il2CppObject * ResourceManager_InstantiateLocalGameObject_m2402294833 (ResourceManager_t4136494783 * __this, String_t* ___assetBundleName0, String_t* ___path1, String_t* ___assetName2, Action_2_t3961854839 * ___OnPackCompleted3, Action_1_t1831019615 * ___OnPackError4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ResourceManager::InstantiateGameObjectAsync(System.String,System.String,System.Action`3<System.String,UnityEngine.GameObject,System.Object>,System.Action`1<System.String>,System.Object)
extern "C"  Il2CppObject * ResourceManager_InstantiateGameObjectAsync_m1462275657 (ResourceManager_t4136494783 * __this, String_t* ___assetBundleName0, String_t* ___assetName1, Action_3_t1036994317 * ___OnPackCompleted2, Action_1_t1831019615 * ___OnPackError3, Il2CppObject * ___data4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ResourceManager::InstantiateLocalGameObject(System.String,System.String,System.String,System.Action`3<System.String,UnityEngine.GameObject,System.Object>,System.Action`1<System.String>,System.Object)
extern "C"  Il2CppObject * ResourceManager_InstantiateLocalGameObject_m2197105462 (ResourceManager_t4136494783 * __this, String_t* ___assetBundleName0, String_t* ___path1, String_t* ___assetName2, Action_3_t1036994317 * ___OnPackCompleted3, Action_1_t1831019615 * ___OnPackError4, Il2CppObject * ___data5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ResourceManager::InitializeLevelAsync(System.String,System.String,System.Boolean,System.Action`1<System.Object>,System.Object,System.Action`1<System.String>)
extern "C"  Il2CppObject * ResourceManager_InitializeLevelAsync_m1750649233 (ResourceManager_t4136494783 * __this, String_t* ___sceneAssetBundle0, String_t* ___levelName1, bool ___isAdditive2, Action_1_t2491248677 * ___OnSceneLoadCompleted3, Il2CppObject * ___obj4, Action_1_t1831019615 * ___OnSceneLoadError5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
