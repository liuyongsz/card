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

// UnityEngine.Animation
struct Animation_t2068071072;
// UnityEngine.AnimationClip
struct AnimationClip_t3510324950;
// System.String
struct String_t;
// UnityEngine.AnimationState
struct AnimationState_t1303741697;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AnimationClip3510324950.h"
#include "UnityEngine_UnityEngine_WrapMode255797857.h"
#include "UnityEngine_UnityEngine_Animation2068071072.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_PlayMode1184682879.h"

// UnityEngine.AnimationClip UnityEngine.Animation::get_clip()
extern "C"  AnimationClip_t3510324950 * Animation_get_clip_m2041661998 (Animation_t2068071072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::set_clip(UnityEngine.AnimationClip)
extern "C"  void Animation_set_clip_m4052161131 (Animation_t2068071072 * __this, AnimationClip_t3510324950 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::set_playAutomatically(System.Boolean)
extern "C"  void Animation_set_playAutomatically_m2127197642 (Animation_t2068071072 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::set_wrapMode(UnityEngine.WrapMode)
extern "C"  void Animation_set_wrapMode_m1409235825 (Animation_t2068071072 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::Stop()
extern "C"  void Animation_Stop_m1726655695 (Animation_t2068071072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::INTERNAL_CALL_Stop(UnityEngine.Animation)
extern "C"  void Animation_INTERNAL_CALL_Stop_m2000147263 (Il2CppObject * __this /* static, unused */, Animation_t2068071072 * ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::Stop(System.String)
extern "C"  void Animation_Stop_m4105547977 (Animation_t2068071072 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::Internal_StopByName(System.String)
extern "C"  void Animation_Internal_StopByName_m3955812477 (Animation_t2068071072 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::Sample()
extern "C"  void Animation_Sample_m3524518265 (Animation_t2068071072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::INTERNAL_CALL_Sample(UnityEngine.Animation)
extern "C"  void Animation_INTERNAL_CALL_Sample_m3455476881 (Il2CppObject * __this /* static, unused */, Animation_t2068071072 * ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::get_isPlaying()
extern "C"  bool Animation_get_isPlaying_m729836826 (Animation_t2068071072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::IsPlaying(System.String)
extern "C"  bool Animation_IsPlaying_m1305767247 (Animation_t2068071072 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::get_Item(System.String)
extern "C"  AnimationState_t1303741697 * Animation_get_Item_m4198128320 (Animation_t2068071072 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play()
extern "C"  bool Animation_Play_m185747875 (Animation_t2068071072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play(UnityEngine.PlayMode)
extern "C"  bool Animation_Play_m112733823 (Animation_t2068071072 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play(System.String,UnityEngine.PlayMode)
extern "C"  bool Animation_Play_m315011537 (Animation_t2068071072 * __this, String_t* ___animation0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play(System.String)
extern "C"  bool Animation_Play_m976361057 (Animation_t2068071072 * __this, String_t* ___animation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::CrossFade(System.String,System.Single,UnityEngine.PlayMode)
extern "C"  void Animation_CrossFade_m3167311838 (Animation_t2068071072 * __this, String_t* ___animation0, float ___fadeLength1, int32_t ___mode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::CrossFade(System.String,System.Single)
extern "C"  void Animation_CrossFade_m1757328910 (Animation_t2068071072 * __this, String_t* ___animation0, float ___fadeLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String)
extern "C"  void Animation_AddClip_m2495773389 (Animation_t2068071072 * __this, AnimationClip_t3510324950 * ___clip0, String_t* ___newName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String,System.Int32,System.Int32,System.Boolean)
extern "C"  void Animation_AddClip_m900889592 (Animation_t2068071072 * __this, AnimationClip_t3510324950 * ___clip0, String_t* ___newName1, int32_t ___firstFrame2, int32_t ___lastFrame3, bool ___addLoopFrame4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String,System.Int32,System.Int32)
extern "C"  void Animation_AddClip_m686158425 (Animation_t2068071072 * __this, AnimationClip_t3510324950 * ___clip0, String_t* ___newName1, int32_t ___firstFrame2, int32_t ___lastFrame3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::RemoveClip(UnityEngine.AnimationClip)
extern "C"  void Animation_RemoveClip_m2809417102 (Animation_t2068071072 * __this, AnimationClip_t3510324950 * ___clip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::RemoveClip(System.String)
extern "C"  void Animation_RemoveClip_m3945636441 (Animation_t2068071072 * __this, String_t* ___clipName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::RemoveClip2(System.String)
extern "C"  void Animation_RemoveClip2_m2252319707 (Animation_t2068071072 * __this, String_t* ___clipName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)
extern "C"  bool Animation_PlayDefaultAnimation_m3276120146 (Animation_t2068071072 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator()
extern "C"  Il2CppObject * Animation_GetEnumerator_m3067441975 (Animation_t2068071072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::GetState(System.String)
extern "C"  AnimationState_t1303741697 * Animation_GetState_m1608765041 (Animation_t2068071072 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
extern "C"  AnimationState_t1303741697 * Animation_GetStateAtIndex_m2774853377 (Animation_t2068071072 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animation::GetStateCount()
extern "C"  int32_t Animation_GetStateCount_m1145090795 (Animation_t2068071072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationClip UnityEngine.Animation::GetClip(System.String)
extern "C"  AnimationClip_t3510324950 * Animation_GetClip_m981494701 (Animation_t2068071072 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
