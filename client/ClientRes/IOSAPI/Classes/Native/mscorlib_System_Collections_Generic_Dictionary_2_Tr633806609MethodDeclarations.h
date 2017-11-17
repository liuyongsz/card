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

// System.Collections.Generic.Dictionary`2/Transform`1<ProxyID,System.Object,ProxyID>
struct Transform_1_t633806609;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_ProxyID3273241327.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<ProxyID,System.Object,ProxyID>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m749100567_gshared (Transform_1_t633806609 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m749100567(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t633806609 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m749100567_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<ProxyID,System.Object,ProxyID>::Invoke(TKey,TValue)
extern "C"  int32_t Transform_1_Invoke_m1204204995_gshared (Transform_1_t633806609 * __this, int32_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m1204204995(__this, ___key0, ___value1, method) ((  int32_t (*) (Transform_1_t633806609 *, int32_t, Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m1204204995_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<ProxyID,System.Object,ProxyID>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1393538978_gshared (Transform_1_t633806609 * __this, int32_t ___key0, Il2CppObject * ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1393538978(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t633806609 *, int32_t, Il2CppObject *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1393538978_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<ProxyID,System.Object,ProxyID>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Transform_1_EndInvoke_m139575873_gshared (Transform_1_t633806609 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m139575873(__this, ___result0, method) ((  int32_t (*) (Transform_1_t633806609 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m139575873_gshared)(__this, ___result0, method)
