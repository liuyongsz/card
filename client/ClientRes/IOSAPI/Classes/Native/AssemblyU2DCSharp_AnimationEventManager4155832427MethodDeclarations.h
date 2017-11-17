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

// AnimationEventManager
struct AnimationEventManager_t4155832427;
// UnityEngine.AnimationClip
struct AnimationClip_t3510324950;
// System.String
struct String_t;
// UnityEngine.AnimationEvent
struct AnimationEvent_t2428323300;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AnimationClip3510324950.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_AnimationEvent2428323300.h"

// System.Void AnimationEventManager::.ctor(UnityEngine.AnimationClip)
extern "C"  void AnimationEventManager__ctor_m1762199901 (AnimationEventManager_t4155832427 * __this, AnimationClip_t3510324950 * ___Clip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationClip AnimationEventManager::get_Clip()
extern "C"  AnimationClip_t3510324950 * AnimationEventManager_get_Clip_m2906497349 (AnimationEventManager_t4155832427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnimationEventManager::AddAnimationEvent(System.Single,System.String)
extern "C"  void AnimationEventManager_AddAnimationEvent_m483874434 (AnimationEventManager_t4155832427 * __this, float ___time0, String_t* ___functionName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnimationEventManager::AddAnimationEvent(UnityEngine.AnimationEvent)
extern "C"  void AnimationEventManager_AddAnimationEvent_m2478537978 (AnimationEventManager_t4155832427 * __this, AnimationEvent_t2428323300 * ___aEvent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnimationEventManager::RemoveAnimationEventByTime(System.Single)
extern "C"  void AnimationEventManager_RemoveAnimationEventByTime_m3915731425 (AnimationEventManager_t4155832427 * __this, float ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnimationEventManager::SaveAnimationEvent()
extern "C"  void AnimationEventManager_SaveAnimationEvent_m341628401 (AnimationEventManager_t4155832427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
