﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2/Transform`1<NetProtocal.Respone,System.Object,System.Collections.Generic.KeyValuePair`2<NetProtocal.Respone,System.Object>>
struct Transform_1_t2090356915;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_ge6085406.h"
#include "AssemblyU2DCSharp_NetProtocal_Respone2961906842.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<NetProtocal.Respone,System.Object,System.Collections.Generic.KeyValuePair`2<NetProtocal.Respone,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3147559798_gshared (Transform_1_t2090356915 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m3147559798(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t2090356915 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3147559798_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<NetProtocal.Respone,System.Object,System.Collections.Generic.KeyValuePair`2<NetProtocal.Respone,System.Object>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t6085406  Transform_1_Invoke_m2969736182_gshared (Transform_1_t2090356915 * __this, int32_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m2969736182(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t6085406  (*) (Transform_1_t2090356915 *, int32_t, Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m2969736182_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<NetProtocal.Respone,System.Object,System.Collections.Generic.KeyValuePair`2<NetProtocal.Respone,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1931680671_gshared (Transform_1_t2090356915 * __this, int32_t ___key0, Il2CppObject * ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1931680671(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t2090356915 *, int32_t, Il2CppObject *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1931680671_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<NetProtocal.Respone,System.Object,System.Collections.Generic.KeyValuePair`2<NetProtocal.Respone,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t6085406  Transform_1_EndInvoke_m533580236_gshared (Transform_1_t2090356915 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m533580236(__this, ___result0, method) ((  KeyValuePair_2_t6085406  (*) (Transform_1_t2090356915 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m533580236_gshared)(__this, ___result0, method)
