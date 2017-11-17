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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,NGUITools/ParticleInfo,System.Int32>
struct Transform_1_t4168474289;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,NGUITools/ParticleInfo,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3589871296_gshared (Transform_1_t4168474289 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m3589871296(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t4168474289 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3589871296_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,NGUITools/ParticleInfo,System.Int32>::Invoke(TKey,TValue)
extern "C"  int32_t Transform_1_Invoke_m2568303664_gshared (Transform_1_t4168474289 * __this, int32_t ___key0, ParticleInfo_t2144905777  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m2568303664(__this, ___key0, ___value1, method) ((  int32_t (*) (Transform_1_t4168474289 *, int32_t, ParticleInfo_t2144905777 , const MethodInfo*))Transform_1_Invoke_m2568303664_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,NGUITools/ParticleInfo,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m2175113649_gshared (Transform_1_t4168474289 * __this, int32_t ___key0, ParticleInfo_t2144905777  ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2175113649(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t4168474289 *, int32_t, ParticleInfo_t2144905777 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m2175113649_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,NGUITools/ParticleInfo,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Transform_1_EndInvoke_m2074205886_gshared (Transform_1_t4168474289 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m2074205886(__this, ___result0, method) ((  int32_t (*) (Transform_1_t4168474289 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2074205886_gshared)(__this, ___result0, method)
