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

// DG.Tweening.EaseFunction
struct EaseFunction_t3306356708;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void DG.Tweening.EaseFunction::.ctor(System.Object,System.IntPtr)
extern "C"  void EaseFunction__ctor_m70174455 (EaseFunction_t3306356708 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.EaseFunction::Invoke(System.Single,System.Single,System.Single,System.Single)
extern "C"  float EaseFunction_Invoke_m4001665929 (EaseFunction_t3306356708 * __this, float ___time0, float ___duration1, float ___overshootOrAmplitude2, float ___period3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult DG.Tweening.EaseFunction::BeginInvoke(System.Single,System.Single,System.Single,System.Single,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * EaseFunction_BeginInvoke_m1915830106 (EaseFunction_t3306356708 * __this, float ___time0, float ___duration1, float ___overshootOrAmplitude2, float ___period3, AsyncCallback_t163412349 * ___callback4, Il2CppObject * ___object5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.EaseFunction::EndInvoke(System.IAsyncResult)
extern "C"  float EaseFunction_EndInvoke_m1686794003 (EaseFunction_t3306356708 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
