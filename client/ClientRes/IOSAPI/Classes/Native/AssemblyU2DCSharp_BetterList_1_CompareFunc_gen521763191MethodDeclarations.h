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

// BetterList`1/CompareFunc<System.Object>
struct CompareFunc_t521763191;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void BetterList`1/CompareFunc<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void CompareFunc__ctor_m1342340496_gshared (CompareFunc_t521763191 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define CompareFunc__ctor_m1342340496(__this, ___object0, ___method1, method) ((  void (*) (CompareFunc_t521763191 *, Il2CppObject *, IntPtr_t, const MethodInfo*))CompareFunc__ctor_m1342340496_gshared)(__this, ___object0, ___method1, method)
// System.Int32 BetterList`1/CompareFunc<System.Object>::Invoke(T,T)
extern "C"  int32_t CompareFunc_Invoke_m1539643754_gshared (CompareFunc_t521763191 * __this, Il2CppObject * ___left0, Il2CppObject * ___right1, const MethodInfo* method);
#define CompareFunc_Invoke_m1539643754(__this, ___left0, ___right1, method) ((  int32_t (*) (CompareFunc_t521763191 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))CompareFunc_Invoke_m1539643754_gshared)(__this, ___left0, ___right1, method)
// System.IAsyncResult BetterList`1/CompareFunc<System.Object>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CompareFunc_BeginInvoke_m2051831609_gshared (CompareFunc_t521763191 * __this, Il2CppObject * ___left0, Il2CppObject * ___right1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define CompareFunc_BeginInvoke_m2051831609(__this, ___left0, ___right1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (CompareFunc_t521763191 *, Il2CppObject *, Il2CppObject *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))CompareFunc_BeginInvoke_m2051831609_gshared)(__this, ___left0, ___right1, ___callback2, ___object3, method)
// System.Int32 BetterList`1/CompareFunc<System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t CompareFunc_EndInvoke_m2926776004_gshared (CompareFunc_t521763191 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define CompareFunc_EndInvoke_m2926776004(__this, ___result0, method) ((  int32_t (*) (CompareFunc_t521763191 *, Il2CppObject *, const MethodInfo*))CompareFunc_EndInvoke_m2926776004_gshared)(__this, ___result0, method)
