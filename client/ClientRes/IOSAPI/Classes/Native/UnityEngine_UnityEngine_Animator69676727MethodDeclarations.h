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

// UnityEngine.Animator
struct Animator_t69676727;
// System.String
struct String_t;
// UnityEngine.AnimatorClipInfo[]
struct AnimatorClipInfoU5BU5D_t2969332312;
// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t670468573;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_AnimatorStateInfo2577870592.h"

// System.Void UnityEngine.Animator::SetTrigger(System.String)
extern "C"  void Animator_SetTrigger_m3418492570 (Animator_t69676727 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
extern "C"  void Animator_ResetTrigger_m865269317 (Animator_t69676727 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::get_layerCount()
extern "C"  int32_t Animator_get_layerCount_m2341760273 (Animator_t69676727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Animator::GetLayerWeight(System.Int32)
extern "C"  float Animator_GetLayerWeight_m2228986294 (Animator_t69676727 * __this, int32_t ___layerIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
extern "C"  AnimatorStateInfo_t2577870592  Animator_GetCurrentAnimatorStateInfo_m1931338898 (Animator_t69676727 * __this, int32_t ___layerIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetNextAnimatorStateInfo(System.Int32)
extern "C"  AnimatorStateInfo_t2577870592  Animator_GetNextAnimatorStateInfo_m3085812524 (Animator_t69676727 * __this, int32_t ___layerIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorClipInfo[] UnityEngine.Animator::GetCurrentAnimatorClipInfo(System.Int32)
extern "C"  AnimatorClipInfoU5BU5D_t2969332312* Animator_GetCurrentAnimatorClipInfo_m2138963390 (Animator_t69676727 * __this, int32_t ___layerIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorClipInfo[] UnityEngine.Animator::GetNextAnimatorClipInfo(System.Int32)
extern "C"  AnimatorClipInfoU5BU5D_t2969332312* Animator_GetNextAnimatorClipInfo_m1367948358 (Animator_t69676727 * __this, int32_t ___layerIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::Play(System.String,System.Int32,System.Single)
extern "C"  void Animator_Play_m2181614708 (Animator_t69676727 * __this, String_t* ___stateName0, int32_t ___layer1, float ___normalizedTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)
extern "C"  void Animator_Play_m3632052371 (Animator_t69676727 * __this, int32_t ___stateNameHash0, int32_t ___layer1, float ___normalizedTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
extern "C"  RuntimeAnimatorController_t670468573 * Animator_get_runtimeAnimatorController_m652575931 (Animator_t69676727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern "C"  int32_t Animator_StringToHash_m3313850714 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
extern "C"  void Animator_SetTriggerString_m2002790359 (Animator_t69676727 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
extern "C"  void Animator_ResetTriggerString_m1445965342 (Animator_t69676727 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::Update(System.Single)
extern "C"  void Animator_Update_m1188992334 (Animator_t69676727 * __this, float ___deltaTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
