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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,System.Object>
struct Transform_1_t1357128486;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "ls_client_tools_LitJson_ObjectMetadata3995922398.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m281549124_gshared (Transform_1_t1357128486 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m281549124(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1357128486 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m281549124_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,System.Object>::Invoke(TKey,TValue)
extern "C"  Il2CppObject * Transform_1_Invoke_m912695452_gshared (Transform_1_t1357128486 * __this, Il2CppObject * ___key0, ObjectMetadata_t3995922398  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m912695452(__this, ___key0, ___value1, method) ((  Il2CppObject * (*) (Transform_1_t1357128486 *, Il2CppObject *, ObjectMetadata_t3995922398 , const MethodInfo*))Transform_1_Invoke_m912695452_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3295348085_gshared (Transform_1_t1357128486 * __this, Il2CppObject * ___key0, ObjectMetadata_t3995922398  ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3295348085(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1357128486 *, Il2CppObject *, ObjectMetadata_t3995922398 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3295348085_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Transform_1_EndInvoke_m753539666_gshared (Transform_1_t1357128486 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m753539666(__this, ___result0, method) ((  Il2CppObject * (*) (Transform_1_t1357128486 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m753539666_gshared)(__this, ___result0, method)
