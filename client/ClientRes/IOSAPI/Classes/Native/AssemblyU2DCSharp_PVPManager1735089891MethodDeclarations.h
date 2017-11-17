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

// PVPManager
struct PVPManager_t1735089891;
// System.String
struct String_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// SimpleHeroData
struct SimpleHeroData_t1611366694;
// System.Object
struct Il2CppObject;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Events_UnityAction4025899511.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_SimpleHeroData1611366694.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void PVPManager::.ctor()
extern "C"  void PVPManager__ctor_m3341375888 (PVPManager_t1735089891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPManager::Start()
extern "C"  void PVPManager_Start_m2616429380 (PVPManager_t1735089891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPManager::Update()
extern "C"  void PVPManager_Update_m2803600519 (PVPManager_t1735089891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPManager::LoadMapThenAvatar(System.String,UnityEngine.Events.UnityAction)
extern "C"  void PVPManager_LoadMapThenAvatar_m2994761023 (PVPManager_t1735089891 * __this, String_t* ___mapId0, UnityAction_t4025899511 * ___complete1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPManager::OnLoader_MapComplete()
extern "C"  void PVPManager_OnLoader_MapComplete_m603086898 (PVPManager_t1735089891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPManager::LoadMap(System.Int32,UnityEngine.Events.UnityAction)
extern "C"  void PVPManager_LoadMap_m342644582 (PVPManager_t1735089891 * __this, int32_t ___mapId0, UnityAction_t4025899511 * ___complete1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPManager::LoadMap(System.String,UnityEngine.Events.UnityAction)
extern "C"  void PVPManager_LoadMap_m3265330813 (PVPManager_t1735089891 * __this, String_t* ___mapName0, UnityAction_t4025899511 * ___complete1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPManager::OnLoader_MapComplete(System.String,UnityEngine.GameObject)
extern "C"  void PVPManager_OnLoader_MapComplete_m3155266672 (PVPManager_t1735089891 * __this, String_t* ___name0, GameObject_t1756533147 * ___obj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPManager::LoadAvatar(UnityEngine.Events.UnityAction)
extern "C"  void PVPManager_LoadAvatar_m2997483574 (PVPManager_t1735089891 * __this, UnityAction_t4025899511 * ___complete0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPManager::LoadAvatar(SimpleHeroData)
extern "C"  void PVPManager_LoadAvatar_m3770295211 (PVPManager_t1735089891 * __this, SimpleHeroData_t1611366694 * ___vo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPManager::OnLoader_Error(System.String)
extern "C"  void PVPManager_OnLoader_Error_m3655014071 (PVPManager_t1735089891 * __this, String_t* ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPManager::OnLoader_AvatarComplete(System.String,UnityEngine.GameObject)
extern "C"  void PVPManager_OnLoader_AvatarComplete_m658368491 (PVPManager_t1735089891 * __this, String_t* ___name0, GameObject_t1756533147 * ___obj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPManager::OnGUI()
extern "C"  void PVPManager_OnGUI_m2843497832 (PVPManager_t1735089891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPManager::OnLoad_TweenRes()
extern "C"  void PVPManager_OnLoad_TweenRes_m1531172287 (PVPManager_t1735089891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPManager::Test_LoaderMapAndAvatar()
extern "C"  void PVPManager_Test_LoaderMapAndAvatar_m536463876 (PVPManager_t1735089891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPManager::Test_LoaderAvatar()
extern "C"  void PVPManager_Test_LoaderAvatar_m3322986867 (PVPManager_t1735089891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPManager::OnLoader_MyAvatarCompleteTest(System.String,UnityEngine.GameObject,System.Object)
extern "C"  void PVPManager_OnLoader_MyAvatarCompleteTest_m2079172067 (PVPManager_t1735089891 * __this, String_t* ___abName0, GameObject_t1756533147 * ___obj1, Il2CppObject * ___param2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPManager::OnLoader_OpAvatarCompleteTest(System.String,UnityEngine.GameObject,System.Object)
extern "C"  void PVPManager_OnLoader_OpAvatarCompleteTest_m2780692594 (PVPManager_t1735089891 * __this, String_t* ___abName0, GameObject_t1756533147 * ___obj1, Il2CppObject * ___param2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPManager::OnLoader_FightCompleteTest(System.String,UnityEngine.GameObject,System.Object)
extern "C"  void PVPManager_OnLoader_FightCompleteTest_m3859506854 (PVPManager_t1735089891 * __this, String_t* ___abName0, GameObject_t1756533147 * ___obj1, Il2CppObject * ___param2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPManager::OnTween_TeamAOutComplete()
extern "C"  void PVPManager_OnTween_TeamAOutComplete_m3955935628 (PVPManager_t1735089891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPManager::OnTween_TeamBOutComplete()
extern "C"  void PVPManager_OnTween_TeamBOutComplete_m648838413 (PVPManager_t1735089891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPManager::OnPrefabEvent_Complete(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void PVPManager_OnPrefabEvent_Complete_m848949208 (PVPManager_t1735089891 * __this, Transform_t3275118058 * ___trans0, Vector3_t2243707580  ___pos1, Vector3_t2243707580  ___enemyPos2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
