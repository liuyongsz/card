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

// UILabel/OnQueryString
struct OnQueryString_t1562153177;
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

// System.Void UILabel/OnQueryString::.ctor(System.Object,System.IntPtr)
extern "C"  void OnQueryString__ctor_m2160208876 (OnQueryString_t1562153177 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UILabel/OnQueryString::Invoke(System.String)
extern "C"  String_t* OnQueryString_Invoke_m2280827235 (OnQueryString_t1562153177 * __this, String_t* ___strText0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UILabel/OnQueryString::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnQueryString_BeginInvoke_m2050873773 (OnQueryString_t1562153177 * __this, String_t* ___strText0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UILabel/OnQueryString::EndInvoke(System.IAsyncResult)
extern "C"  String_t* OnQueryString_EndInvoke_m1944791667 (OnQueryString_t1562153177 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
