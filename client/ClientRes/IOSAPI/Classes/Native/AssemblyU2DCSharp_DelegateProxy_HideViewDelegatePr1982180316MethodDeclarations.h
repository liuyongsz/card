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

// DelegateProxy/HideViewDelegateProxy
struct HideViewDelegateProxy_t1982180316;
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

// System.Void DelegateProxy/HideViewDelegateProxy::.ctor(System.Object,System.IntPtr)
extern "C"  void HideViewDelegateProxy__ctor_m389236425 (HideViewDelegateProxy_t1982180316 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DelegateProxy/HideViewDelegateProxy::Invoke(System.String)
extern "C"  void HideViewDelegateProxy_Invoke_m4195309063 (HideViewDelegateProxy_t1982180316 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult DelegateProxy/HideViewDelegateProxy::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * HideViewDelegateProxy_BeginInvoke_m3211527978 (HideViewDelegateProxy_t1982180316 * __this, String_t* ___name0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DelegateProxy/HideViewDelegateProxy::EndInvoke(System.IAsyncResult)
extern "C"  void HideViewDelegateProxy_EndInvoke_m867140143 (HideViewDelegateProxy_t1982180316 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
