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

// System.Collections.Generic.Dictionary`2/Transform`1<ProxyID,System.Object,System.Collections.Generic.KeyValuePair`2<ProxyID,System.Object>>
struct Transform_1_t2569579511;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_914046933.h"
#include "AssemblyU2DCSharp_ProxyID3273241327.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<ProxyID,System.Object,System.Collections.Generic.KeyValuePair`2<ProxyID,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3663931574_gshared (Transform_1_t2569579511 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m3663931574(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t2569579511 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3663931574_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<ProxyID,System.Object,System.Collections.Generic.KeyValuePair`2<ProxyID,System.Object>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t914046933  Transform_1_Invoke_m283990070_gshared (Transform_1_t2569579511 * __this, int32_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m283990070(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t914046933  (*) (Transform_1_t2569579511 *, int32_t, Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m283990070_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<ProxyID,System.Object,System.Collections.Generic.KeyValuePair`2<ProxyID,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m4010061663_gshared (Transform_1_t2569579511 * __this, int32_t ___key0, Il2CppObject * ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m4010061663(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t2569579511 *, int32_t, Il2CppObject *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m4010061663_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<ProxyID,System.Object,System.Collections.Generic.KeyValuePair`2<ProxyID,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t914046933  Transform_1_EndInvoke_m3844464652_gshared (Transform_1_t2569579511 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m3844464652(__this, ___result0, method) ((  KeyValuePair_2_t914046933  (*) (Transform_1_t2569579511 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3844464652_gshared)(__this, ___result0, method)
