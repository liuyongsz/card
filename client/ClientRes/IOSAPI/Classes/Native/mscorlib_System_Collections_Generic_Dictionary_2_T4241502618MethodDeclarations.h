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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,NGUITools/ParticleInfo,NGUITools/ParticleInfo>
struct Transform_1_t4241502618;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_NGUITools_ParticleInfo2144905777.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,NGUITools/ParticleInfo,NGUITools/ParticleInfo>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1994678304_gshared (Transform_1_t4241502618 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m1994678304(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t4241502618 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1994678304_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,NGUITools/ParticleInfo,NGUITools/ParticleInfo>::Invoke(TKey,TValue)
extern "C"  ParticleInfo_t2144905777  Transform_1_Invoke_m3206900792_gshared (Transform_1_t4241502618 * __this, int32_t ___key0, ParticleInfo_t2144905777  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m3206900792(__this, ___key0, ___value1, method) ((  ParticleInfo_t2144905777  (*) (Transform_1_t4241502618 *, int32_t, ParticleInfo_t2144905777 , const MethodInfo*))Transform_1_Invoke_m3206900792_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,NGUITools/ParticleInfo,NGUITools/ParticleInfo>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3716591023_gshared (Transform_1_t4241502618 * __this, int32_t ___key0, ParticleInfo_t2144905777  ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3716591023(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t4241502618 *, int32_t, ParticleInfo_t2144905777 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3716591023_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,NGUITools/ParticleInfo,NGUITools/ParticleInfo>::EndInvoke(System.IAsyncResult)
extern "C"  ParticleInfo_t2144905777  Transform_1_EndInvoke_m1074293898_gshared (Transform_1_t4241502618 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m1074293898(__this, ___result0, method) ((  ParticleInfo_t2144905777  (*) (Transform_1_t4241502618 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m1074293898_gshared)(__this, ___result0, method)
