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

// AnimationProxy
struct AnimationProxy_t128404306;
// AnimationProxy/CallLoadAsset
struct CallLoadAsset_t304683267;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// UnityEngine.AnimationClip
struct AnimationClip_t3510324950;
// UnityEngine.AnimationState
struct AnimationState_t1303741697;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_AnimationProxy_CallLoadAsset304683267.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_AnimationClip3510324950.h"
#include "AssemblyU2DCSharp_AnimationProxy128404306.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void AnimationProxy::.ctor()
extern "C"  void AnimationProxy__ctor_m444470669 (AnimationProxy_t128404306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnimationProxy::.cctor()
extern "C"  void AnimationProxy__cctor_m3326382860 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnimationProxy::SetWeaponTpe(System.Int32)
extern "C"  void AnimationProxy_SetWeaponTpe_m3503571933 (AnimationProxy_t128404306 * __this, int32_t ___weaponType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnimationProxy::Awake()
extern "C"  void AnimationProxy_Awake_m2332886610 (AnimationProxy_t128404306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnimationProxy::SetLoadAssetCall(AnimationProxy/CallLoadAsset)
extern "C"  void AnimationProxy_SetLoadAssetCall_m3642577734 (Il2CppObject * __this /* static, unused */, CallLoadAsset_t304683267 * ___call0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnimationProxy::LoadAnimationClip(System.String)
extern "C"  void AnimationProxy_LoadAnimationClip_m4012193441 (AnimationProxy_t128404306 * __this, String_t* ___strAnimationName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnimationProxy::Start()
extern "C"  void AnimationProxy_Start_m355941565 (AnimationProxy_t128404306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AnimationProxy::PlayAnimation(System.Object[])
extern "C"  bool AnimationProxy_PlayAnimation_m1994258771 (AnimationProxy_t128404306 * __this, ObjectU5BU5D_t3614634134* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnimationProxy::CheckAnimationPlay()
extern "C"  void AnimationProxy_CheckAnimationPlay_m3460554697 (AnimationProxy_t128404306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnimationProxy::PlayClip(System.Object[])
extern "C"  void AnimationProxy_PlayClip_m3450872047 (AnimationProxy_t128404306 * __this, ObjectU5BU5D_t3614634134* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AnimationProxy::GetAnimationPath(System.String)
extern "C"  String_t* AnimationProxy_GetAnimationPath_m3842382595 (AnimationProxy_t128404306 * __this, String_t* ___strName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AnimationProxy::GetEditorAnimationPath(System.String)
extern "C"  String_t* AnimationProxy_GetEditorAnimationPath_m46152272 (AnimationProxy_t128404306 * __this, String_t* ___strName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnimationProxy::AddAnimation(System.String,System.String)
extern "C"  void AnimationProxy_AddAnimation_m2699243120 (AnimationProxy_t128404306 * __this, String_t* ___strName0, String_t* ___strpath1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AnimationProxy::IsAnimationClipLoaded(System.String)
extern "C"  bool AnimationProxy_IsAnimationClipLoaded_m2526314096 (AnimationProxy_t128404306 * __this, String_t* ___strAnimation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnimationProxy::AddAnimationClip(UnityEngine.AnimationClip)
extern "C"  void AnimationProxy_AddAnimationClip_m3113666551 (AnimationProxy_t128404306 * __this, AnimationClip_t3510324950 * ___aClip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnimationProxy::PopAnimationControl()
extern "C"  void AnimationProxy_PopAnimationControl_m2284571615 (AnimationProxy_t128404306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AnimationProxy::IsPlaying(System.String)
extern "C"  bool AnimationProxy_IsPlaying_m3928399545 (AnimationProxy_t128404306 * __this, String_t* ___strAnimation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AnimationProxy::IsPlayingThese(System.String)
extern "C"  bool AnimationProxy_IsPlayingThese_m4078603620 (AnimationProxy_t128404306 * __this, String_t* ___animPrefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnimationProxy::SequenceList(System.String)
extern "C"  void AnimationProxy_SequenceList_m3846844954 (AnimationProxy_t128404306 * __this, String_t* ___strAnimation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnimationProxy::PlayAnimationClip(System.String,System.Single,System.Single)
extern "C"  void AnimationProxy_PlayAnimationClip_m2012620371 (AnimationProxy_t128404306 * __this, String_t* ___strAnimation0, float ___fSpeed1, float ___fNormalized2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnimationProxy::CrossFadeClip(System.String,System.Single,System.Single)
extern "C"  void AnimationProxy_CrossFadeClip_m4158551785 (AnimationProxy_t128404306 * __this, String_t* ___strAnimation0, float ___fFade1, float ___fSpeed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnimationProxy::StopClip()
extern "C"  void AnimationProxy_StopClip_m607715727 (AnimationProxy_t128404306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnimationProxy::SetAnimationSpeed(System.String,System.Single)
extern "C"  void AnimationProxy_SetAnimationSpeed_m1857276373 (AnimationProxy_t128404306 * __this, String_t* ___strAnimation0, float ___fSpeed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AnimationProxy::GetPlayingAnimationName(AnimationProxy)
extern "C"  String_t* AnimationProxy_GetPlayingAnimationName_m928534593 (Il2CppObject * __this /* static, unused */, AnimationProxy_t128404306 * ___aGroup0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AnimationProxy::GetPlayingAnimationName()
extern "C"  String_t* AnimationProxy_GetPlayingAnimationName_m798388315 (AnimationProxy_t128404306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnimationProxy::OnDestroy()
extern "C"  void AnimationProxy_OnDestroy_m2747726464 (AnimationProxy_t128404306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnimationProxy::ClearAnimationClips()
extern "C"  void AnimationProxy_ClearAnimationClips_m1989528563 (AnimationProxy_t128404306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState AnimationProxy::get_Item(System.String)
extern "C"  AnimationState_t1303741697 * AnimationProxy_get_Item_m2062358738 (AnimationProxy_t128404306 * __this, String_t* ___tkey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AnimationProxy AnimationProxy::ResetAllActions(UnityEngine.GameObject,System.Collections.Generic.List`1<System.String>,System.Collections.Generic.List`1<System.String>)
extern "C"  AnimationProxy_t128404306 * AnimationProxy_ResetAllActions_m3408368685 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, List_1_t1398341365 * ___actionNameList1, List_1_t1398341365 * ___actionPathList2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnimationProxy::PauseAnim()
extern "C"  void AnimationProxy_PauseAnim_m3518614430 (AnimationProxy_t128404306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnimationProxy::ContinueAnim()
extern "C"  void AnimationProxy_ContinueAnim_m1862086879 (AnimationProxy_t128404306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnimationProxy::<LoadAnimationClip>m__17(System.Object[])
extern "C"  void AnimationProxy_U3CLoadAnimationClipU3Em__17_m674909070 (AnimationProxy_t128404306 * __this, ObjectU5BU5D_t3614634134* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
