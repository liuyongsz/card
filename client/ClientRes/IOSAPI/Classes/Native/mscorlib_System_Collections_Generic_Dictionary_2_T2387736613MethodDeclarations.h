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

// System.Collections.Generic.Dictionary`2/Transform`1<Spine.AnimationStateData/AnimationPair,System.Single,System.Single>
struct Transform_1_t2387736613;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_AnimationStateD522617335.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Spine.AnimationStateData/AnimationPair,System.Single,System.Single>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2157231272_gshared (Transform_1_t2387736613 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m2157231272(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t2387736613 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2157231272_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Spine.AnimationStateData/AnimationPair,System.Single,System.Single>::Invoke(TKey,TValue)
extern "C"  float Transform_1_Invoke_m1175184952_gshared (Transform_1_t2387736613 * __this, AnimationPair_t522617335  ___key0, float ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m1175184952(__this, ___key0, ___value1, method) ((  float (*) (Transform_1_t2387736613 *, AnimationPair_t522617335 , float, const MethodInfo*))Transform_1_Invoke_m1175184952_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Spine.AnimationStateData/AnimationPair,System.Single,System.Single>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m250230291_gshared (Transform_1_t2387736613 * __this, AnimationPair_t522617335  ___key0, float ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m250230291(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t2387736613 *, AnimationPair_t522617335 , float, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m250230291_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Spine.AnimationStateData/AnimationPair,System.Single,System.Single>::EndInvoke(System.IAsyncResult)
extern "C"  float Transform_1_EndInvoke_m2462216686_gshared (Transform_1_t2387736613 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m2462216686(__this, ___result0, method) ((  float (*) (Transform_1_t2387736613 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2462216686_gshared)(__this, ___result0, method)
