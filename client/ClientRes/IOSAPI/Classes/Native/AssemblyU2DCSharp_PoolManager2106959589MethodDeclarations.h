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

// PoolManager
struct PoolManager_t2106959589;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// PrefabPools
struct PrefabPools_t510575319;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PoolManager_PoolKey54851805.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void PoolManager::.ctor()
extern "C"  void PoolManager__ctor_m2013835340 (PoolManager_t2106959589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PoolManager::.cctor()
extern "C"  void PoolManager__cctor_m3180748871 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PoolManager::Init()
extern "C"  void PoolManager_Init_m224331252 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PoolManager::CreatePoolGameObject()
extern "C"  void PoolManager_CreatePoolGameObject_m3886560487 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PoolManager::CreatePrefabPools(PoolManager/PoolKey,UnityEngine.GameObject,System.Boolean)
extern "C"  void PoolManager_CreatePrefabPools_m2527823045 (Il2CppObject * __this /* static, unused */, int32_t ___key0, GameObject_t1756533147 * ___prefab1, bool ___destory2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PoolManager::ResetPools()
extern "C"  void PoolManager_ResetPools_m162209468 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PoolManager::Clear()
extern "C"  void PoolManager_Clear_m3442150369 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PoolManager::Dispose()
extern "C"  void PoolManager_Dispose_m3941291847 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PoolManager::DestoryPools(PoolManager/PoolKey)
extern "C"  void PoolManager_DestoryPools_m3602356600 (Il2CppObject * __this /* static, unused */, int32_t ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PoolManager::Contains(PoolManager/PoolKey)
extern "C"  bool PoolManager_Contains_m2325007732 (Il2CppObject * __this /* static, unused */, int32_t ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> PoolManager::GetPoolList(PoolManager/PoolKey)
extern "C"  List_1_t1398341365 * PoolManager_GetPoolList_m3938822248 (Il2CppObject * __this /* static, unused */, int32_t ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PrefabPools PoolManager::GetPools(PoolManager/PoolKey)
extern "C"  PrefabPools_t510575319 * PoolManager_GetPools_m3213874174 (Il2CppObject * __this /* static, unused */, int32_t ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PoolManager::PeekPrefab(PoolManager/PoolKey)
extern "C"  GameObject_t1756533147 * PoolManager_PeekPrefab_m2749789093 (Il2CppObject * __this /* static, unused */, int32_t ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PoolManager::PopPrefab(PoolManager/PoolKey)
extern "C"  GameObject_t1756533147 * PoolManager_PopPrefab_m2501571565 (Il2CppObject * __this /* static, unused */, int32_t ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PoolManager::PushPrefab(PoolManager/PoolKey,UnityEngine.GameObject)
extern "C"  void PoolManager_PushPrefab_m98292091 (Il2CppObject * __this /* static, unused */, int32_t ___key0, GameObject_t1756533147 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
