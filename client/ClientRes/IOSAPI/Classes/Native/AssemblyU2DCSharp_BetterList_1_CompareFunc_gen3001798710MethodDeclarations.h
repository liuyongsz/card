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

// BetterList`1/CompareFunc<UnityEngine.Color32>
struct CompareFunc_t3001798710;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_Color32874517518.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void BetterList`1/CompareFunc<UnityEngine.Color32>::.ctor(System.Object,System.IntPtr)
extern "C"  void CompareFunc__ctor_m3956460259_gshared (CompareFunc_t3001798710 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define CompareFunc__ctor_m3956460259(__this, ___object0, ___method1, method) ((  void (*) (CompareFunc_t3001798710 *, Il2CppObject *, IntPtr_t, const MethodInfo*))CompareFunc__ctor_m3956460259_gshared)(__this, ___object0, ___method1, method)
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Color32>::Invoke(T,T)
extern "C"  int32_t CompareFunc_Invoke_m3314654393_gshared (CompareFunc_t3001798710 * __this, Color32_t874517518  ___left0, Color32_t874517518  ___right1, const MethodInfo* method);
#define CompareFunc_Invoke_m3314654393(__this, ___left0, ___right1, method) ((  int32_t (*) (CompareFunc_t3001798710 *, Color32_t874517518 , Color32_t874517518 , const MethodInfo*))CompareFunc_Invoke_m3314654393_gshared)(__this, ___left0, ___right1, method)
// System.IAsyncResult BetterList`1/CompareFunc<UnityEngine.Color32>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CompareFunc_BeginInvoke_m2585964612_gshared (CompareFunc_t3001798710 * __this, Color32_t874517518  ___left0, Color32_t874517518  ___right1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define CompareFunc_BeginInvoke_m2585964612(__this, ___left0, ___right1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (CompareFunc_t3001798710 *, Color32_t874517518 , Color32_t874517518 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))CompareFunc_BeginInvoke_m2585964612_gshared)(__this, ___left0, ___right1, ___callback2, ___object3, method)
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Color32>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t CompareFunc_EndInvoke_m183424443_gshared (CompareFunc_t3001798710 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define CompareFunc_EndInvoke_m183424443(__this, ___result0, method) ((  int32_t (*) (CompareFunc_t3001798710 *, Il2CppObject *, const MethodInfo*))CompareFunc_EndInvoke_m183424443_gshared)(__this, ___result0, method)
