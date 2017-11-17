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

// TweenValue
struct TweenValue_t2675632736;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// TweenValueAdapter
struct TweenValueAdapter_t999637039;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void TweenValue::.ctor()
extern "C"  void TweenValue__ctor_m1207862049 (TweenValue_t2675632736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TweenValue::get_value()
extern "C"  float TweenValue_get_value_m3687643873 (TweenValue_t2675632736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenValue::set_value(System.Single)
extern "C"  void TweenValue_set_value_m3759419386 (TweenValue_t2675632736 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenValue::OnUpdate(System.Single,System.Boolean)
extern "C"  void TweenValue_OnUpdate_m2882725807 (TweenValue_t2675632736 * __this, float ___factor0, bool ___isFinished1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenValue TweenValue::Begin(UnityEngine.GameObject,TweenValueAdapter,System.Single,System.Single)
extern "C"  TweenValue_t2675632736 * TweenValue_Begin_m2081715800 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___widget0, Il2CppObject * ___target1, float ___duration2, float ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenValue::SetStartToCurrentValue()
extern "C"  void TweenValue_SetStartToCurrentValue_m1590818460 (TweenValue_t2675632736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenValue::SetEndToCurrentValue()
extern "C"  void TweenValue_SetEndToCurrentValue_m851435857 (TweenValue_t2675632736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenValue::SetCurrentValueToStart()
extern "C"  void TweenValue_SetCurrentValueToStart_m2532087766 (TweenValue_t2675632736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenValue::SetCurrentValueToEnd()
extern "C"  void TweenValue_SetCurrentValueToEnd_m933112485 (TweenValue_t2675632736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
