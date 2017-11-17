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

// DG.Tweening.TweenCallback
struct TweenCallback_t3697142134;
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

// System.Void DG.Tweening.TweenCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void TweenCallback__ctor_m3479200459 (TweenCallback_t3697142134 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.TweenCallback::Invoke()
extern "C"  void TweenCallback_Invoke_m102388039 (TweenCallback_t3697142134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult DG.Tweening.TweenCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * TweenCallback_BeginInvoke_m2458978000 (TweenCallback_t3697142134 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.TweenCallback::EndInvoke(System.IAsyncResult)
extern "C"  void TweenCallback_EndInvoke_m3014345193 (TweenCallback_t3697142134 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
