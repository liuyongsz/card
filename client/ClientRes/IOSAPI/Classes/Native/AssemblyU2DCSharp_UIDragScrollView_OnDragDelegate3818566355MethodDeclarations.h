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

// UIDragScrollView/OnDragDelegate
struct OnDragDelegate_t3818566355;
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

// System.Void UIDragScrollView/OnDragDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnDragDelegate__ctor_m2071691260 (OnDragDelegate_t3818566355 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragScrollView/OnDragDelegate::Invoke(UnityEngine.Vector2)
extern "C"  void OnDragDelegate_Invoke_m943992322 (OnDragDelegate_t3818566355 * __this, Vector2_t2243707579  ___delta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIDragScrollView/OnDragDelegate::BeginInvoke(UnityEngine.Vector2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnDragDelegate_BeginInvoke_m2220523941 (OnDragDelegate_t3818566355 * __this, Vector2_t2243707579  ___delta0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragScrollView/OnDragDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnDragDelegate_EndInvoke_m1853116174 (OnDragDelegate_t3818566355 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
