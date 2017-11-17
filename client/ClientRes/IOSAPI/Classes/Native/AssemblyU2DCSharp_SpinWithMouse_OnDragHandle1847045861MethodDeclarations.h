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

// SpinWithMouse/OnDragHandle
struct OnDragHandle_t1847045861;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void SpinWithMouse/OnDragHandle::.ctor(System.Object,System.IntPtr)
extern "C"  void OnDragHandle__ctor_m1072278568 (OnDragHandle_t1847045861 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpinWithMouse/OnDragHandle::Invoke(UnityEngine.Vector2)
extern "C"  void OnDragHandle_Invoke_m1702622314 (OnDragHandle_t1847045861 * __this, Vector2_t2243707579  ___delta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult SpinWithMouse/OnDragHandle::BeginInvoke(UnityEngine.Vector2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnDragHandle_BeginInvoke_m1555136679 (OnDragHandle_t1847045861 * __this, Vector2_t2243707579  ___delta0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpinWithMouse/OnDragHandle::EndInvoke(System.IAsyncResult)
extern "C"  void OnDragHandle_EndInvoke_m2075218506 (OnDragHandle_t1847045861 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
