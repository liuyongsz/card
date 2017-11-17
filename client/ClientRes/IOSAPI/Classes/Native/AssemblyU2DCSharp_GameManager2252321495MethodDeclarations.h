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

// GameManager
struct GameManager_t2252321495;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t164973122;
// System.Action
struct Action_t3226471752;
// System.String
struct String_t;
// NotiData
struct NotiData_t2904403400;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3226471752.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_NotiData2904403400.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void GameManager::.ctor()
extern "C"  void GameManager__ctor_m293624896 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::.cctor()
extern "C"  void GameManager__cctor_m3728246245 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Start()
extern "C"  void GameManager_Start_m2655388892 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Init()
extern "C"  void GameManager_Init_m3690781476 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::CheckExtractResource()
extern "C"  void GameManager_CheckExtractResource_m2205921899 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::OnComplete_UpdateResource()
extern "C"  void GameManager_OnComplete_UpdateResource_m3537290370 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Object> GameManager::OnExtractResource()
extern "C"  Il2CppObject* GameManager_OnExtractResource_m1925987054 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Object> GameManager::OnUpdateResource(System.Action)
extern "C"  Il2CppObject* GameManager_OnUpdateResource_m4059432721 (GameManager_t2252321495 * __this, Action_t3226471752 * ___Complete0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::BeginDownload(System.String,System.String)
extern "C"  void GameManager_BeginDownload_m3557317621 (GameManager_t2252321495 * __this, String_t* ___url0, String_t* ___file1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::OnThreadCompleted(NotiData)
extern "C"  void GameManager_OnThreadCompleted_m2930072886 (GameManager_t2252321495 * __this, NotiData_t2904403400 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::OnUpdateFailed(System.String)
extern "C"  void GameManager_OnUpdateFailed_m1860582867 (GameManager_t2252321495 * __this, String_t* ___file0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::OnResourceInited()
extern "C"  void GameManager_OnResourceInited_m256493956 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::InitManager()
extern "C"  void GameManager_InitManager_m2390397459 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameManager::IsDownOK(System.String)
extern "C"  bool GameManager_IsDownOK_m141868044 (GameManager_t2252321495 * __this, String_t* ___file0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::ResetLoadData()
extern "C"  void GameManager_ResetLoadData_m3937031549 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::LoadPrefab(System.String)
extern "C"  void GameManager_LoadPrefab_m2566420534 (GameManager_t2252321495 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::OnLoaded_Completed(System.String,UnityEngine.GameObject)
extern "C"  void GameManager_OnLoaded_Completed_m4131165742 (GameManager_t2252321495 * __this, String_t* ___name0, GameObject_t1756533147 * ___obj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::OnLoader_Error(System.String)
extern "C"  void GameManager_OnLoader_Error_m994383299 (GameManager_t2252321495 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Update()
extern "C"  void GameManager_Update_m969954595 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::OnGUI()
extern "C"  void GameManager_OnGUI_m129032164 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
