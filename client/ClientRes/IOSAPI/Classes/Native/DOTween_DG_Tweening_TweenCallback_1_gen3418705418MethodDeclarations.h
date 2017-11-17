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

// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_t3418705418;
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

// System.Void DG.Tweening.TweenCallback`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void TweenCallback_1__ctor_m3015172213_gshared (TweenCallback_1_t3418705418 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define TweenCallback_1__ctor_m3015172213(__this, ___object0, ___method1, method) ((  void (*) (TweenCallback_1_t3418705418 *, Il2CppObject *, IntPtr_t, const MethodInfo*))TweenCallback_1__ctor_m3015172213_gshared)(__this, ___object0, ___method1, method)
// System.Void DG.Tweening.TweenCallback`1<System.Int32>::Invoke(T)
extern "C"  void TweenCallback_1_Invoke_m3615052821_gshared (TweenCallback_1_t3418705418 * __this, int32_t ___value0, const MethodInfo* method);
#define TweenCallback_1_Invoke_m3615052821(__this, ___value0, method) ((  void (*) (TweenCallback_1_t3418705418 *, int32_t, const MethodInfo*))TweenCallback_1_Invoke_m3615052821_gshared)(__this, ___value0, method)
// System.IAsyncResult DG.Tweening.TweenCallback`1<System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * TweenCallback_1_BeginInvoke_m711035500_gshared (TweenCallback_1_t3418705418 * __this, int32_t ___value0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define TweenCallback_1_BeginInvoke_m711035500(__this, ___value0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (TweenCallback_1_t3418705418 *, int32_t, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))TweenCallback_1_BeginInvoke_m711035500_gshared)(__this, ___value0, ___callback1, ___object2, method)
// System.Void DG.Tweening.TweenCallback`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  void TweenCallback_1_EndInvoke_m1922991223_gshared (TweenCallback_1_t3418705418 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define TweenCallback_1_EndInvoke_m1922991223(__this, ___result0, method) ((  void (*) (TweenCallback_1_t3418705418 *, Il2CppObject *, const MethodInfo*))TweenCallback_1_EndInvoke_m1922991223_gshared)(__this, ___result0, method)
