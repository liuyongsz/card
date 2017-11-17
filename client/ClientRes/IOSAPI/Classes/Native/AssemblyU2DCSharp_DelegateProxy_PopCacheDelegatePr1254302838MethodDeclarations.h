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

// DelegateProxy/PopCacheDelegateProxy
struct PopCacheDelegateProxy_t1254302838;
// System.Object
struct Il2CppObject;
// UnityEngine.Object
struct Object_t1021602117;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void DelegateProxy/PopCacheDelegateProxy::.ctor(System.Object,System.IntPtr)
extern "C"  void PopCacheDelegateProxy__ctor_m1472991891 (PopCacheDelegateProxy_t1254302838 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DelegateProxy/PopCacheDelegateProxy::Invoke(UnityEngine.Object)
extern "C"  void PopCacheDelegateProxy_Invoke_m1002578389 (PopCacheDelegateProxy_t1254302838 * __this, Object_t1021602117 * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult DelegateProxy/PopCacheDelegateProxy::BeginInvoke(UnityEngine.Object,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * PopCacheDelegateProxy_BeginInvoke_m1115067570 (PopCacheDelegateProxy_t1254302838 * __this, Object_t1021602117 * ___o0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DelegateProxy/PopCacheDelegateProxy::EndInvoke(System.IAsyncResult)
extern "C"  void PopCacheDelegateProxy_EndInvoke_m1457690481 (PopCacheDelegateProxy_t1254302838 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
