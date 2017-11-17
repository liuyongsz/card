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

// EffectManager
struct EffectManager_t2743043152;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// EffectObject
struct EffectObject_t1319139602;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GameEventTypes243168119.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "AssemblyU2DCSharp_EffectObject1319139602.h"

// System.Void EffectManager::.ctor()
extern "C"  void EffectManager__ctor_m2365160475 (EffectManager_t2743043152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EffectManager::.cctor()
extern "C"  void EffectManager__cctor_m2764821926 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EffectManager::InitManager()
extern "C"  void EffectManager_InitManager_m969174686 (EffectManager_t2743043152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EffectManager::Clear(GameEventTypes,System.Object[])
extern "C"  void EffectManager_Clear_m1615885375 (Il2CppObject * __this /* static, unused */, int32_t ___eventType0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// EffectObject EffectManager::Play(System.Int32,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  EffectObject_t1319139602 * EffectManager_Play_m796794765 (Il2CppObject * __this /* static, unused */, int32_t ___id0, Vector3_t2243707580  ___position1, Quaternion_t4030073918  ___rotation2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// EffectObject EffectManager::Play(System.Int32,UnityEngine.Transform)
extern "C"  EffectObject_t1319139602 * EffectManager_Play_m1468075428 (Il2CppObject * __this /* static, unused */, int32_t ___id0, Transform_t3275118058 * ___target1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// EffectObject EffectManager::FetchEffectObject(System.Int32)
extern "C"  EffectObject_t1319139602 * EffectManager_FetchEffectObject_m4061403149 (Il2CppObject * __this /* static, unused */, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// EffectObject EffectManager::CreateEffectObject(System.Int32)
extern "C"  EffectObject_t1319139602 * EffectManager_CreateEffectObject_m3295258073 (Il2CppObject * __this /* static, unused */, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// EffectObject EffectManager::FetchFromPool(System.Int32)
extern "C"  EffectObject_t1319139602 * EffectManager_FetchFromPool_m4088994949 (Il2CppObject * __this /* static, unused */, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EffectManager::ProcessExpiredEffect(EffectObject)
extern "C"  void EffectManager_ProcessExpiredEffect_m886576054 (Il2CppObject * __this /* static, unused */, EffectObject_t1319139602 * ___effectObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EffectManager::Update()
extern "C"  void EffectManager_Update_m2108536046 (EffectManager_t2743043152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// EffectObject EffectManager::Find(System.Int32)
extern "C"  EffectObject_t1319139602 * EffectManager_Find_m124365822 (Il2CppObject * __this /* static, unused */, int32_t ___effectID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
