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

// DelegateProxy/OnShareCallbackDelegateProxy
struct OnShareCallbackDelegateProxy_t2597294402;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void DelegateProxy/OnShareCallbackDelegateProxy::.ctor(System.Object,System.IntPtr)
extern "C"  void OnShareCallbackDelegateProxy__ctor_m3128400117 (OnShareCallbackDelegateProxy_t2597294402 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DelegateProxy/OnShareCallbackDelegateProxy::Invoke(System.String)
extern "C"  void OnShareCallbackDelegateProxy_Invoke_m3865732159 (OnShareCallbackDelegateProxy_t2597294402 * __this, String_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult DelegateProxy/OnShareCallbackDelegateProxy::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnShareCallbackDelegateProxy_BeginInvoke_m1659385164 (OnShareCallbackDelegateProxy_t2597294402 * __this, String_t* ___result0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DelegateProxy/OnShareCallbackDelegateProxy::EndInvoke(System.IAsyncResult)
extern "C"  void OnShareCallbackDelegateProxy_EndInvoke_m2398786647 (OnShareCallbackDelegateProxy_t2597294402 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
