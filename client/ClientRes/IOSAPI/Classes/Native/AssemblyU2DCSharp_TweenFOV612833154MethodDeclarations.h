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

// TweenFOV
struct TweenFOV_t612833154;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void TweenFOV::.ctor()
extern "C"  void TweenFOV__ctor_m3923488133 (TweenFOV_t612833154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera TweenFOV::get_cachedCamera()
extern "C"  Camera_t189460977 * TweenFOV_get_cachedCamera_m1649430246 (TweenFOV_t612833154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TweenFOV::get_fov()
extern "C"  float TweenFOV_get_fov_m952446985 (TweenFOV_t612833154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenFOV::set_fov(System.Single)
extern "C"  void TweenFOV_set_fov_m2299512338 (TweenFOV_t612833154 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TweenFOV::get_value()
extern "C"  float TweenFOV_get_value_m2018448973 (TweenFOV_t612833154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenFOV::set_value(System.Single)
extern "C"  void TweenFOV_set_value_m1360173804 (TweenFOV_t612833154 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenFOV::OnUpdate(System.Single,System.Boolean)
extern "C"  void TweenFOV_OnUpdate_m354886839 (TweenFOV_t612833154 * __this, float ___factor0, bool ___isFinished1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenFOV TweenFOV::Begin(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  TweenFOV_t612833154 * TweenFOV_Begin_m3928960339 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, float ___duration1, float ___to2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenFOV::SetStartToCurrentValue()
extern "C"  void TweenFOV_SetStartToCurrentValue_m2648973898 (TweenFOV_t612833154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenFOV::SetEndToCurrentValue()
extern "C"  void TweenFOV_SetEndToCurrentValue_m2229543573 (TweenFOV_t612833154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenFOV::SetCurrentValueToStart()
extern "C"  void TweenFOV_SetCurrentValueToStart_m4282663984 (TweenFOV_t612833154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenFOV::SetCurrentValueToEnd()
extern "C"  void TweenFOV_SetCurrentValueToEnd_m2373667105 (TweenFOV_t612833154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
