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

// AnimationHelper
struct AnimationHelper_t327819746;
// UnityEngine.AnimationEvent
struct AnimationEvent_t2428323300;
// UnityEngine.Animation
struct Animation_t2068071072;
// System.String
struct String_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Animation2068071072.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Events_UnityAction4025899511.h"

// System.Void AnimationHelper::.ctor()
extern "C"  void AnimationHelper__ctor_m3894005883 (AnimationHelper_t327819746 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationEvent AnimationHelper::SetEvent(UnityEngine.Animation,System.Single,System.String,UnityEngine.Events.UnityAction,System.Single)
extern "C"  AnimationEvent_t2428323300 * AnimationHelper_SetEvent_m2446858411 (Il2CppObject * __this /* static, unused */, Animation_t2068071072 * ___ani0, float ___doTimer1, String_t* ___aniName2, UnityAction_t4025899511 * ___fun3, float ___speed4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationEvent AnimationHelper::SetEvent(UnityEngine.Animation,System.Single,System.String,System.String,System.Single)
extern "C"  AnimationEvent_t2428323300 * AnimationHelper_SetEvent_m284104348 (Il2CppObject * __this /* static, unused */, Animation_t2068071072 * ___ani0, float ___doTimer1, String_t* ___aniName2, String_t* ___funName3, float ___speed4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
