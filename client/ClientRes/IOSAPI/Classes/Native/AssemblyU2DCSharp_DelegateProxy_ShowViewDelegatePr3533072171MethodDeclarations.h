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

// DelegateProxy/ShowViewDelegateProxy
struct ShowViewDelegateProxy_t3533072171;
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

// System.Void DelegateProxy/ShowViewDelegateProxy::.ctor(System.Object,System.IntPtr)
extern "C"  void ShowViewDelegateProxy__ctor_m2207289178 (ShowViewDelegateProxy_t3533072171 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DelegateProxy/ShowViewDelegateProxy::Invoke(System.String,System.Object)
extern "C"  void ShowViewDelegateProxy_Invoke_m2536530300 (ShowViewDelegateProxy_t3533072171 * __this, String_t* ___name0, Il2CppObject * ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult DelegateProxy/ShowViewDelegateProxy::BeginInvoke(System.String,System.Object,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ShowViewDelegateProxy_BeginInvoke_m3917603801 (ShowViewDelegateProxy_t3533072171 * __this, String_t* ___name0, Il2CppObject * ___arg1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DelegateProxy/ShowViewDelegateProxy::EndInvoke(System.IAsyncResult)
extern "C"  void ShowViewDelegateProxy_EndInvoke_m2664507988 (ShowViewDelegateProxy_t3533072171 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
