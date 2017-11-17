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

// System.Object
struct Il2CppObject;
// DG.Tweening.Tween
struct Tween_t278478013;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "DOTween_DG_Tweening_Tween278478013.h"
#include "mscorlib_System_String2029220233.h"
#include "DOTween_DG_Tweening_LogBehaviour3505725029.h"

// System.Void DG.Tweening.Core.Debugger::Log(System.Object)
extern "C"  void Debugger_Log_m2834227361 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.Debugger::LogWarning(System.Object)
extern "C"  void Debugger_LogWarning_m1294243619 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.Debugger::LogError(System.Object)
extern "C"  void Debugger_LogError_m949546549 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.Debugger::LogReport(System.Object)
extern "C"  void Debugger_LogReport_m963317535 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.Debugger::LogInvalidTween(DG.Tweening.Tween)
extern "C"  void Debugger_LogInvalidTween_m3454295394 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.Debugger::LogNestedTween(DG.Tweening.Tween)
extern "C"  void Debugger_LogNestedTween_m3109520726 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.Debugger::LogNullTween(DG.Tweening.Tween)
extern "C"  void Debugger_LogNullTween_m832479276 (Il2CppObject * __this /* static, unused */, Tween_t278478013 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.Debugger::LogRemoveActiveTweenError(System.String)
extern "C"  void Debugger_LogRemoveActiveTweenError_m2297126192 (Il2CppObject * __this /* static, unused */, String_t* ___propertyName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.Debugger::SetLogPriority(DG.Tweening.LogBehaviour)
extern "C"  void Debugger_SetLogPriority_m1610107306 (Il2CppObject * __this /* static, unused */, int32_t ___logBehaviour0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
