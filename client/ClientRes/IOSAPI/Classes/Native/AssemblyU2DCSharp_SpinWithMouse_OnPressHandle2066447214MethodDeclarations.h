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

// SpinWithMouse/OnPressHandle
struct OnPressHandle_t2066447214;
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

// System.Void SpinWithMouse/OnPressHandle::.ctor(System.Object,System.IntPtr)
extern "C"  void OnPressHandle__ctor_m2925142843 (OnPressHandle_t2066447214 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpinWithMouse/OnPressHandle::Invoke(System.Boolean)
extern "C"  void OnPressHandle_Invoke_m3873435716 (OnPressHandle_t2066447214 * __this, bool ___isDown0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult SpinWithMouse/OnPressHandle::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnPressHandle_BeginInvoke_m3212338695 (OnPressHandle_t2066447214 * __this, bool ___isDown0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpinWithMouse/OnPressHandle::EndInvoke(System.IAsyncResult)
extern "C"  void OnPressHandle_EndInvoke_m728467705 (OnPressHandle_t2066447214 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
