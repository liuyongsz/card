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

// TweenTransform
struct TweenTransform_t3901935067;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"

// System.Void TweenTransform::.ctor()
extern "C"  void TweenTransform__ctor_m3596805636 (TweenTransform_t3901935067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenTransform::OnUpdate(System.Single,System.Boolean)
extern "C"  void TweenTransform_OnUpdate_m2381480670 (TweenTransform_t3901935067 * __this, float ___factor0, bool ___isFinished1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenTransform TweenTransform::Begin(UnityEngine.GameObject,System.Single,UnityEngine.Transform)
extern "C"  TweenTransform_t3901935067 * TweenTransform_Begin_m1633427613 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, float ___duration1, Transform_t3275118058 * ___to2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenTransform TweenTransform::Begin(UnityEngine.GameObject,System.Single,UnityEngine.Transform,UnityEngine.Transform)
extern "C"  TweenTransform_t3901935067 * TweenTransform_Begin_m887707984 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, float ___duration1, Transform_t3275118058 * ___from2, Transform_t3275118058 * ___to3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenTransform::OnDestroy()
extern "C"  void TweenTransform_OnDestroy_m600299145 (TweenTransform_t3901935067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
