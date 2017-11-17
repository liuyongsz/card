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

// AngleScrollView/OnDragFinished
struct OnDragFinished_t2709639099;
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

// System.Void AngleScrollView/OnDragFinished::.ctor(System.Object,System.IntPtr)
extern "C"  void OnDragFinished__ctor_m4007759620 (OnDragFinished_t2709639099 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AngleScrollView/OnDragFinished::Invoke(System.Single)
extern "C"  void OnDragFinished_Invoke_m1452289587 (OnDragFinished_t2709639099 * __this, float ___strength0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult AngleScrollView/OnDragFinished::BeginInvoke(System.Single,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnDragFinished_BeginInvoke_m399890028 (OnDragFinished_t2709639099 * __this, float ___strength0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AngleScrollView/OnDragFinished::EndInvoke(System.IAsyncResult)
extern "C"  void OnDragFinished_EndInvoke_m2604463070 (OnDragFinished_t2709639099 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
