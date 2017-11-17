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

// TweenPosition
struct TweenPosition_t1144714832;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void TweenPosition::.ctor()
extern "C"  void TweenPosition__ctor_m994905083 (TweenPosition_t1144714832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform TweenPosition::get_cachedTransform()
extern "C"  Transform_t3275118058 * TweenPosition_get_cachedTransform_m944416532 (TweenPosition_t1144714832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TweenPosition::get_position()
extern "C"  Vector3_t2243707580  TweenPosition_get_position_m877481949 (TweenPosition_t1144714832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenPosition::set_position(UnityEngine.Vector3)
extern "C"  void TweenPosition_set_position_m2721056190 (TweenPosition_t1144714832 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TweenPosition::get_value()
extern "C"  Vector3_t2243707580  TweenPosition_get_value_m687072807 (TweenPosition_t1144714832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenPosition::set_value(UnityEngine.Vector3)
extern "C"  void TweenPosition_set_value_m2687786634 (TweenPosition_t1144714832 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenPosition::Awake()
extern "C"  void TweenPosition_Awake_m1272484204 (TweenPosition_t1144714832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenPosition::OnUpdate(System.Single,System.Boolean)
extern "C"  void TweenPosition_OnUpdate_m3041793265 (TweenPosition_t1144714832 * __this, float ___factor0, bool ___isFinished1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenPosition TweenPosition::Begin(UnityEngine.GameObject,System.Single,UnityEngine.Vector3)
extern "C"  TweenPosition_t1144714832 * TweenPosition_Begin_m23345143 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, float ___duration1, Vector3_t2243707580  ___pos2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenPosition::SetStartToCurrentValue()
extern "C"  void TweenPosition_SetStartToCurrentValue_m2905049176 (TweenPosition_t1144714832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenPosition::SetEndToCurrentValue()
extern "C"  void TweenPosition_SetEndToCurrentValue_m1102976555 (TweenPosition_t1144714832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenPosition::SetCurrentValueToStart()
extern "C"  void TweenPosition_SetCurrentValueToStart_m2145179582 (TweenPosition_t1144714832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenPosition::SetCurrentValueToEnd()
extern "C"  void TweenPosition_SetCurrentValueToEnd_m438518111 (TweenPosition_t1144714832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenPosition::OnDestroy()
extern "C"  void TweenPosition_OnDestroy_m324391178 (TweenPosition_t1144714832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
