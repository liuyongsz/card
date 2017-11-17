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

// UIInput/OnValidate
struct OnValidate_t2431313412;
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

// System.Void UIInput/OnValidate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnValidate__ctor_m3155083673 (OnValidate_t2431313412 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UIInput/OnValidate::Invoke(System.String,System.Int32,System.Char)
extern "C"  Il2CppChar OnValidate_Invoke_m827686033 (OnValidate_t2431313412 * __this, String_t* ___text0, int32_t ___charIndex1, Il2CppChar ___addedChar2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIInput/OnValidate::BeginInvoke(System.String,System.Int32,System.Char,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnValidate_BeginInvoke_m1277883050 (OnValidate_t2431313412 * __this, String_t* ___text0, int32_t ___charIndex1, Il2CppChar ___addedChar2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UIInput/OnValidate::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppChar OnValidate_EndInvoke_m2651564995 (OnValidate_t2431313412 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
