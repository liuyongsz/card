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

// EffectObject
struct EffectObject_t1319139602;
// EffectCfg
struct EffectCfg_t3413255951;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_EffectCfg3413255951.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void EffectObject::.ctor(EffectCfg,UnityEngine.Transform)
extern "C"  void EffectObject__ctor_m1481852675 (EffectObject_t1319139602 * __this, EffectCfg_t3413255951 * ___config0, Transform_t3275118058 * ___root1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EffectObject::set_EffectID(System.Int32)
extern "C"  void EffectObject_set_EffectID_m4286383915 (EffectObject_t1319139602 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EffectObject::get_EffectID()
extern "C"  int32_t EffectObject_get_EffectID_m2069450042 (EffectObject_t1319139602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EffectObject::get_Expired()
extern "C"  bool EffectObject_get_Expired_m1396828395 (EffectObject_t1319139602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EffectObject::get_IsLoaded()
extern "C"  bool EffectObject_get_IsLoaded_m1789341029 (EffectObject_t1319139602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject EffectObject::get_Model()
extern "C"  GameObject_t1756533147 * EffectObject_get_Model_m2095007804 (EffectObject_t1319139602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EffectObject::get_IsLoop()
extern "C"  bool EffectObject_get_IsLoop_m3396183612 (EffectObject_t1319139602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EffectObject::LoadAsset()
extern "C"  void EffectObject_LoadAsset_m912631335 (EffectObject_t1319139602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EffectObject::Start(UnityEngine.Transform)
extern "C"  void EffectObject_Start_m373466922 (EffectObject_t1319139602 * __this, Transform_t3275118058 * ___trans0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EffectObject::Start(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  void EffectObject_Start_m40094487 (EffectObject_t1319139602 * __this, Vector3_t2243707580  ___position0, Quaternion_t4030073918  ___rotation1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EffectObject::StartInternal()
extern "C"  void EffectObject_StartInternal_m3265619436 (EffectObject_t1319139602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EffectObject::Stop()
extern "C"  void EffectObject_Stop_m482947961 (EffectObject_t1319139602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EffectObject::StopImmediate()
extern "C"  void EffectObject_StopImmediate_m3869585376 (EffectObject_t1319139602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EffectObject::Destroy()
extern "C"  void EffectObject_Destroy_m2141916287 (EffectObject_t1319139602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EffectObject::ResetState()
extern "C"  void EffectObject_ResetState_m1444114447 (EffectObject_t1319139602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EffectObject::MoveToNextState()
extern "C"  void EffectObject_MoveToNextState_m2629403039 (EffectObject_t1319139602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EffectObject::UpdateState()
extern "C"  void EffectObject_UpdateState_m688696011 (EffectObject_t1319139602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EffectObject::Show()
extern "C"  void EffectObject_Show_m2578305792 (EffectObject_t1319139602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EffectObject::Hide()
extern "C"  void EffectObject_Hide_m4080656081 (EffectObject_t1319139602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EffectObject::PlayAudio()
extern "C"  void EffectObject_PlayAudio_m3135347323 (EffectObject_t1319139602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EffectObject::StopAudio()
extern "C"  void EffectObject_StopAudio_m2088981283 (EffectObject_t1319139602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EffectObject::OnBeginPlay()
extern "C"  void EffectObject_OnBeginPlay_m1104629987 (EffectObject_t1319139602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EffectObject::OnEndPlay()
extern "C"  void EffectObject_OnEndPlay_m2101181731 (EffectObject_t1319139602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EffectObject::PlayEffectOnSameTarget(System.Int32)
extern "C"  void EffectObject_PlayEffectOnSameTarget_m322329201 (EffectObject_t1319139602 * __this, int32_t ___effID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EffectObject::Update()
extern "C"  void EffectObject_Update_m809684496 (EffectObject_t1319139602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EffectObject::CheckLoading()
extern "C"  void EffectObject_CheckLoading_m3377731913 (EffectObject_t1319139602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EffectObject::UpdatePosition()
extern "C"  void EffectObject_UpdatePosition_m2507653965 (EffectObject_t1319139602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EffectObject::UpdateRotation()
extern "C"  void EffectObject_UpdateRotation_m3901580442 (EffectObject_t1319139602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EffectObject::UpdateScale()
extern "C"  void EffectObject_UpdateScale_m3775169772 (EffectObject_t1319139602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EffectObject::InstantiateModel(UnityEngine.GameObject)
extern "C"  void EffectObject_InstantiateModel_m1064245306 (EffectObject_t1319139602 * __this, GameObject_t1756533147 * ___prefab0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
