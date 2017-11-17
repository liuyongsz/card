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

// AnimationControl
struct AnimationControl_t1205886479;
// UnityEngine.Animation
struct Animation_t2068071072;
// UnityEngine.AnimationState
struct AnimationState_t1303741697;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Animation2068071072.h"
#include "AssemblyU2DCSharp_AnimationControl1205886479.h"

// System.Void AnimationControl::.ctor()
extern "C"  void AnimationControl__ctor_m1002919022 (AnimationControl_t1205886479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnimationControl::.cctor()
extern "C"  void AnimationControl__cctor_m4172004897 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnimationControl::SetAniamtionEnabled(System.Boolean)
extern "C"  void AnimationControl_SetAniamtionEnabled_m4088062072 (Il2CppObject * __this /* static, unused */, bool ___bValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AnimationControl::SetNormalized(UnityEngine.Animation,System.Single)
extern "C"  bool AnimationControl_SetNormalized_m4258608485 (Il2CppObject * __this /* static, unused */, Animation_t2068071072 * ___animation0, float ___normal1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState AnimationControl::GetAniaNamePlaying(UnityEngine.Animation)
extern "C"  AnimationState_t1303741697 * AnimationControl_GetAniaNamePlaying_m4039357390 (Il2CppObject * __this /* static, unused */, Animation_t2068071072 * ___animation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AnimationControl::AddAnimation(AnimationControl)
extern "C"  bool AnimationControl_AddAnimation_m414499892 (Il2CppObject * __this /* static, unused */, AnimationControl_t1205886479 * ___aniaml0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AnimationControl::DelAniation(AnimationControl)
extern "C"  bool AnimationControl_DelAniation_m1541608057 (Il2CppObject * __this /* static, unused */, AnimationControl_t1205886479 * ___aniaml0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnimationControl::Start()
extern "C"  void AnimationControl_Start_m1656261754 (AnimationControl_t1205886479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnimationControl::OnDestroy()
extern "C"  void AnimationControl_OnDestroy_m4112263437 (AnimationControl_t1205886479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
