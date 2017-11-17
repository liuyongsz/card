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

// Spine.Pool`1<System.Object>
struct Pool_1_t3306853663;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Spine.Pool`1<System.Object>::.ctor(System.Int32,System.Int32)
extern "C"  void Pool_1__ctor_m1847029995_gshared (Pool_1_t3306853663 * __this, int32_t ___initialCapacity0, int32_t ___max1, const MethodInfo* method);
#define Pool_1__ctor_m1847029995(__this, ___initialCapacity0, ___max1, method) ((  void (*) (Pool_1_t3306853663 *, int32_t, int32_t, const MethodInfo*))Pool_1__ctor_m1847029995_gshared)(__this, ___initialCapacity0, ___max1, method)
// System.Int32 Spine.Pool`1<System.Object>::get_Count()
extern "C"  int32_t Pool_1_get_Count_m3411608783_gshared (Pool_1_t3306853663 * __this, const MethodInfo* method);
#define Pool_1_get_Count_m3411608783(__this, method) ((  int32_t (*) (Pool_1_t3306853663 *, const MethodInfo*))Pool_1_get_Count_m3411608783_gshared)(__this, method)
// System.Int32 Spine.Pool`1<System.Object>::get_Peak()
extern "C"  int32_t Pool_1_get_Peak_m3325778179_gshared (Pool_1_t3306853663 * __this, const MethodInfo* method);
#define Pool_1_get_Peak_m3325778179(__this, method) ((  int32_t (*) (Pool_1_t3306853663 *, const MethodInfo*))Pool_1_get_Peak_m3325778179_gshared)(__this, method)
// System.Void Spine.Pool`1<System.Object>::set_Peak(System.Int32)
extern "C"  void Pool_1_set_Peak_m875462724_gshared (Pool_1_t3306853663 * __this, int32_t ___value0, const MethodInfo* method);
#define Pool_1_set_Peak_m875462724(__this, ___value0, method) ((  void (*) (Pool_1_t3306853663 *, int32_t, const MethodInfo*))Pool_1_set_Peak_m875462724_gshared)(__this, ___value0, method)
// T Spine.Pool`1<System.Object>::Obtain()
extern "C"  Il2CppObject * Pool_1_Obtain_m4241071191_gshared (Pool_1_t3306853663 * __this, const MethodInfo* method);
#define Pool_1_Obtain_m4241071191(__this, method) ((  Il2CppObject * (*) (Pool_1_t3306853663 *, const MethodInfo*))Pool_1_Obtain_m4241071191_gshared)(__this, method)
// System.Void Spine.Pool`1<System.Object>::Free(T)
extern "C"  void Pool_1_Free_m4029198039_gshared (Pool_1_t3306853663 * __this, Il2CppObject * ___obj0, const MethodInfo* method);
#define Pool_1_Free_m4029198039(__this, ___obj0, method) ((  void (*) (Pool_1_t3306853663 *, Il2CppObject *, const MethodInfo*))Pool_1_Free_m4029198039_gshared)(__this, ___obj0, method)
// System.Void Spine.Pool`1<System.Object>::Clear()
extern "C"  void Pool_1_Clear_m3274110682_gshared (Pool_1_t3306853663 * __this, const MethodInfo* method);
#define Pool_1_Clear_m3274110682(__this, method) ((  void (*) (Pool_1_t3306853663 *, const MethodInfo*))Pool_1_Clear_m3274110682_gshared)(__this, method)
// System.Void Spine.Pool`1<System.Object>::Reset(T)
extern "C"  void Pool_1_Reset_m3965319930_gshared (Pool_1_t3306853663 * __this, Il2CppObject * ___obj0, const MethodInfo* method);
#define Pool_1_Reset_m3965319930(__this, ___obj0, method) ((  void (*) (Pool_1_t3306853663 *, Il2CppObject *, const MethodInfo*))Pool_1_Reset_m3965319930_gshared)(__this, ___obj0, method)
