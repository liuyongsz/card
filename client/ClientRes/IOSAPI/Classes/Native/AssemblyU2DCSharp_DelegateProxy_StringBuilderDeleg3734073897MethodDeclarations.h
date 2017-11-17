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

// DelegateProxy/StringBuilderDelegateProxy
struct StringBuilderDelegateProxy_t3734073897;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void DelegateProxy/StringBuilderDelegateProxy::.ctor(System.Object,System.IntPtr)
extern "C"  void StringBuilderDelegateProxy__ctor_m722059950 (StringBuilderDelegateProxy_t3734073897 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String DelegateProxy/StringBuilderDelegateProxy::Invoke(System.Object[])
extern "C"  String_t* StringBuilderDelegateProxy_Invoke_m2405241309 (StringBuilderDelegateProxy_t3734073897 * __this, ObjectU5BU5D_t3614634134* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult DelegateProxy/StringBuilderDelegateProxy::BeginInvoke(System.Object[],System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * StringBuilderDelegateProxy_BeginInvoke_m2599502751 (StringBuilderDelegateProxy_t3734073897 * __this, ObjectU5BU5D_t3614634134* ___args0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String DelegateProxy/StringBuilderDelegateProxy::EndInvoke(System.IAsyncResult)
extern "C"  String_t* StringBuilderDelegateProxy_EndInvoke_m436109807 (StringBuilderDelegateProxy_t3734073897 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
