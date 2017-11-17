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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,NGUITools/ParticleInfo,System.Collections.Generic.KeyValuePair`2<System.Int32,NGUITools/ParticleInfo>>
struct Transform_1_t1006673475;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23205043930.h"
#include "AssemblyU2DCSharp_NGUITools_ParticleInfo2144905777.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,NGUITools/ParticleInfo,System.Collections.Generic.KeyValuePair`2<System.Int32,NGUITools/ParticleInfo>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2324723030_gshared (Transform_1_t1006673475 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m2324723030(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1006673475 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2324723030_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,NGUITools/ParticleInfo,System.Collections.Generic.KeyValuePair`2<System.Int32,NGUITools/ParticleInfo>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t3205043930  Transform_1_Invoke_m625524758_gshared (Transform_1_t1006673475 * __this, int32_t ___key0, ParticleInfo_t2144905777  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m625524758(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t3205043930  (*) (Transform_1_t1006673475 *, int32_t, ParticleInfo_t2144905777 , const MethodInfo*))Transform_1_Invoke_m625524758_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,NGUITools/ParticleInfo,System.Collections.Generic.KeyValuePair`2<System.Int32,NGUITools/ParticleInfo>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1450205439_gshared (Transform_1_t1006673475 * __this, int32_t ___key0, ParticleInfo_t2144905777  ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1450205439(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1006673475 *, int32_t, ParticleInfo_t2144905777 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1450205439_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,NGUITools/ParticleInfo,System.Collections.Generic.KeyValuePair`2<System.Int32,NGUITools/ParticleInfo>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t3205043930  Transform_1_EndInvoke_m4133409580_gshared (Transform_1_t1006673475 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m4133409580(__this, ___result0, method) ((  KeyValuePair_2_t3205043930  (*) (Transform_1_t1006673475 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m4133409580_gshared)(__this, ___result0, method)
