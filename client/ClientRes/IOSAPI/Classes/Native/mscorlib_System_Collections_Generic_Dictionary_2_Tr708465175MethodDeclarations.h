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

// System.Collections.Generic.Dictionary`2/Transform`1<Spine.Skin/AttachmentKeyTuple,System.Object,System.Collections.Generic.KeyValuePair`2<Spine.Skin/AttachmentKeyTuple,System.Object>>
struct Transform_1_t708465175;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_318196365.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Skin_Attachmen2709365911.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Spine.Skin/AttachmentKeyTuple,System.Object,System.Collections.Generic.KeyValuePair`2<Spine.Skin/AttachmentKeyTuple,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1376850102_gshared (Transform_1_t708465175 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m1376850102(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t708465175 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1376850102_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Spine.Skin/AttachmentKeyTuple,System.Object,System.Collections.Generic.KeyValuePair`2<Spine.Skin/AttachmentKeyTuple,System.Object>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t318196365  Transform_1_Invoke_m3348214838_gshared (Transform_1_t708465175 * __this, AttachmentKeyTuple_t2709365911  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m3348214838(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t318196365  (*) (Transform_1_t708465175 *, AttachmentKeyTuple_t2709365911 , Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m3348214838_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Spine.Skin/AttachmentKeyTuple,System.Object,System.Collections.Generic.KeyValuePair`2<Spine.Skin/AttachmentKeyTuple,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1377360991_gshared (Transform_1_t708465175 * __this, AttachmentKeyTuple_t2709365911  ___key0, Il2CppObject * ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1377360991(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t708465175 *, AttachmentKeyTuple_t2709365911 , Il2CppObject *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1377360991_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Spine.Skin/AttachmentKeyTuple,System.Object,System.Collections.Generic.KeyValuePair`2<Spine.Skin/AttachmentKeyTuple,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t318196365  Transform_1_EndInvoke_m1382673420_gshared (Transform_1_t708465175 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m1382673420(__this, ___result0, method) ((  KeyValuePair_2_t318196365  (*) (Transform_1_t708465175 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m1382673420_gshared)(__this, ___result0, method)
