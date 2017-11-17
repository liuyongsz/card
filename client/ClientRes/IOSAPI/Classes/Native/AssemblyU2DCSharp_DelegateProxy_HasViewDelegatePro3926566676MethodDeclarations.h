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

// DelegateProxy/HasViewDelegateProxy
struct HasViewDelegateProxy_t3926566676;
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

// System.Void DelegateProxy/HasViewDelegateProxy::.ctor(System.Object,System.IntPtr)
extern "C"  void HasViewDelegateProxy__ctor_m2824330551 (HasViewDelegateProxy_t3926566676 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DelegateProxy/HasViewDelegateProxy::Invoke(System.String)
extern "C"  bool HasViewDelegateProxy_Invoke_m1711003141 (HasViewDelegateProxy_t3926566676 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult DelegateProxy/HasViewDelegateProxy::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * HasViewDelegateProxy_BeginInvoke_m3094681402 (HasViewDelegateProxy_t3926566676 * __this, String_t* ___name0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DelegateProxy/HasViewDelegateProxy::EndInvoke(System.IAsyncResult)
extern "C"  bool HasViewDelegateProxy_EndInvoke_m1380051681 (HasViewDelegateProxy_t3926566676 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
