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

// TweenRotation
struct TweenRotation_t1747194511;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void TweenRotation::.ctor()
extern "C"  void TweenRotation__ctor_m934696668 (TweenRotation_t1747194511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform TweenRotation::get_cachedTransform()
extern "C"  Transform_t3275118058 * TweenRotation_get_cachedTransform_m1926203491 (TweenRotation_t1747194511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion TweenRotation::get_rotation()
extern "C"  Quaternion_t4030073918  TweenRotation_get_rotation_m3237644447 (TweenRotation_t1747194511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenRotation::set_rotation(UnityEngine.Quaternion)
extern "C"  void TweenRotation_set_rotation_m31339692 (TweenRotation_t1747194511 * __this, Quaternion_t4030073918  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion TweenRotation::get_value()
extern "C"  Quaternion_t4030073918  TweenRotation_get_value_m2338588164 (TweenRotation_t1747194511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenRotation::set_value(UnityEngine.Quaternion)
extern "C"  void TweenRotation_set_value_m1306571307 (TweenRotation_t1747194511 * __this, Quaternion_t4030073918  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenRotation::OnUpdate(System.Single,System.Boolean)
extern "C"  void TweenRotation_OnUpdate_m1114533666 (TweenRotation_t1747194511 * __this, float ___factor0, bool ___isFinished1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenRotation TweenRotation::Begin(UnityEngine.GameObject,System.Single,UnityEngine.Quaternion)
extern "C"  TweenRotation_t1747194511 * TweenRotation_Begin_m129275313 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, float ___duration1, Quaternion_t4030073918  ___rot2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenRotation::SetStartToCurrentValue()
extern "C"  void TweenRotation_SetStartToCurrentValue_m3277507449 (TweenRotation_t1747194511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenRotation::SetEndToCurrentValue()
extern "C"  void TweenRotation_SetEndToCurrentValue_m2519207916 (TweenRotation_t1747194511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenRotation::SetCurrentValueToStart()
extern "C"  void TweenRotation_SetCurrentValueToStart_m495114565 (TweenRotation_t1747194511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenRotation::SetCurrentValueToEnd()
extern "C"  void TweenRotation_SetCurrentValueToEnd_m1576725190 (TweenRotation_t1747194511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
