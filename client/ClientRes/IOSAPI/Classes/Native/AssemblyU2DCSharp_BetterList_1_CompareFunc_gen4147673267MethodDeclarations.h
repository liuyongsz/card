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

// BetterList`1/CompareFunc<UnityEngine.Color>
struct CompareFunc_t4147673267;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void BetterList`1/CompareFunc<UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
extern "C"  void CompareFunc__ctor_m2728017996_gshared (CompareFunc_t4147673267 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define CompareFunc__ctor_m2728017996(__this, ___object0, ___method1, method) ((  void (*) (CompareFunc_t4147673267 *, Il2CppObject *, IntPtr_t, const MethodInfo*))CompareFunc__ctor_m2728017996_gshared)(__this, ___object0, ___method1, method)
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Color>::Invoke(T,T)
extern "C"  int32_t CompareFunc_Invoke_m3751921714_gshared (CompareFunc_t4147673267 * __this, Color_t2020392075  ___left0, Color_t2020392075  ___right1, const MethodInfo* method);
#define CompareFunc_Invoke_m3751921714(__this, ___left0, ___right1, method) ((  int32_t (*) (CompareFunc_t4147673267 *, Color_t2020392075 , Color_t2020392075 , const MethodInfo*))CompareFunc_Invoke_m3751921714_gshared)(__this, ___left0, ___right1, method)
// System.IAsyncResult BetterList`1/CompareFunc<UnityEngine.Color>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CompareFunc_BeginInvoke_m2750495601_gshared (CompareFunc_t4147673267 * __this, Color_t2020392075  ___left0, Color_t2020392075  ___right1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define CompareFunc_BeginInvoke_m2750495601(__this, ___left0, ___right1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (CompareFunc_t4147673267 *, Color_t2020392075 , Color_t2020392075 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))CompareFunc_BeginInvoke_m2750495601_gshared)(__this, ___left0, ___right1, ___callback2, ___object3, method)
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Color>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t CompareFunc_EndInvoke_m972239944_gshared (CompareFunc_t4147673267 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define CompareFunc_EndInvoke_m972239944(__this, ___result0, method) ((  int32_t (*) (CompareFunc_t4147673267 *, Il2CppObject *, const MethodInfo*))CompareFunc_EndInvoke_m972239944_gshared)(__this, ___result0, method)
