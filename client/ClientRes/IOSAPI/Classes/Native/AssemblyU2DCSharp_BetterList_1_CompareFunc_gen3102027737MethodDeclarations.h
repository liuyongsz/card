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

// BetterList`1/CompareFunc<UICamera/DepthEntry>
struct CompareFunc_t3102027737;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_UICamera_DepthEntry974746545.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void BetterList`1/CompareFunc<UICamera/DepthEntry>::.ctor(System.Object,System.IntPtr)
extern "C"  void CompareFunc__ctor_m2172260807_gshared (CompareFunc_t3102027737 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define CompareFunc__ctor_m2172260807(__this, ___object0, ___method1, method) ((  void (*) (CompareFunc_t3102027737 *, Il2CppObject *, IntPtr_t, const MethodInfo*))CompareFunc__ctor_m2172260807_gshared)(__this, ___object0, ___method1, method)
// System.Int32 BetterList`1/CompareFunc<UICamera/DepthEntry>::Invoke(T,T)
extern "C"  int32_t CompareFunc_Invoke_m3590977841_gshared (CompareFunc_t3102027737 * __this, DepthEntry_t974746545  ___left0, DepthEntry_t974746545  ___right1, const MethodInfo* method);
#define CompareFunc_Invoke_m3590977841(__this, ___left0, ___right1, method) ((  int32_t (*) (CompareFunc_t3102027737 *, DepthEntry_t974746545 , DepthEntry_t974746545 , const MethodInfo*))CompareFunc_Invoke_m3590977841_gshared)(__this, ___left0, ___right1, method)
// System.IAsyncResult BetterList`1/CompareFunc<UICamera/DepthEntry>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CompareFunc_BeginInvoke_m2920794230_gshared (CompareFunc_t3102027737 * __this, DepthEntry_t974746545  ___left0, DepthEntry_t974746545  ___right1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define CompareFunc_BeginInvoke_m2920794230(__this, ___left0, ___right1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (CompareFunc_t3102027737 *, DepthEntry_t974746545 , DepthEntry_t974746545 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))CompareFunc_BeginInvoke_m2920794230_gshared)(__this, ___left0, ___right1, ___callback2, ___object3, method)
// System.Int32 BetterList`1/CompareFunc<UICamera/DepthEntry>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t CompareFunc_EndInvoke_m2172644799_gshared (CompareFunc_t3102027737 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define CompareFunc_EndInvoke_m2172644799(__this, ___result0, method) ((  int32_t (*) (CompareFunc_t3102027737 *, Il2CppObject *, const MethodInfo*))CompareFunc_EndInvoke_m2172644799_gshared)(__this, ___result0, method)
