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

// ObjectPool`1<System.Object>
struct ObjectPool_1_t14758110;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void ObjectPool`1<System.Object>::.ctor()
extern "C"  void ObjectPool_1__ctor_m3845927559_gshared (ObjectPool_1_t14758110 * __this, const MethodInfo* method);
#define ObjectPool_1__ctor_m3845927559(__this, method) ((  void (*) (ObjectPool_1_t14758110 *, const MethodInfo*))ObjectPool_1__ctor_m3845927559_gshared)(__this, method)
// System.Void ObjectPool`1<System.Object>::.ctor(System.Int32)
extern "C"  void ObjectPool_1__ctor_m1370891552_gshared (ObjectPool_1_t14758110 * __this, int32_t ___size0, const MethodInfo* method);
#define ObjectPool_1__ctor_m1370891552(__this, ___size0, method) ((  void (*) (ObjectPool_1_t14758110 *, int32_t, const MethodInfo*))ObjectPool_1__ctor_m1370891552_gshared)(__this, ___size0, method)
// System.Int32 ObjectPool`1<System.Object>::get_PoolSize()
extern "C"  int32_t ObjectPool_1_get_PoolSize_m650587201_gshared (ObjectPool_1_t14758110 * __this, const MethodInfo* method);
#define ObjectPool_1_get_PoolSize_m650587201(__this, method) ((  int32_t (*) (ObjectPool_1_t14758110 *, const MethodInfo*))ObjectPool_1_get_PoolSize_m650587201_gshared)(__this, method)
// System.Void ObjectPool`1<System.Object>::set_PoolSize(System.Int32)
extern "C"  void ObjectPool_1_set_PoolSize_m864055482_gshared (ObjectPool_1_t14758110 * __this, int32_t ___value0, const MethodInfo* method);
#define ObjectPool_1_set_PoolSize_m864055482(__this, ___value0, method) ((  void (*) (ObjectPool_1_t14758110 *, int32_t, const MethodInfo*))ObjectPool_1_set_PoolSize_m864055482_gshared)(__this, ___value0, method)
// T ObjectPool`1<System.Object>::Fetch()
extern "C"  Il2CppObject * ObjectPool_1_Fetch_m3383857016_gshared (ObjectPool_1_t14758110 * __this, const MethodInfo* method);
#define ObjectPool_1_Fetch_m3383857016(__this, method) ((  Il2CppObject * (*) (ObjectPool_1_t14758110 *, const MethodInfo*))ObjectPool_1_Fetch_m3383857016_gshared)(__this, method)
// System.Void ObjectPool`1<System.Object>::Put(T)
extern "C"  void ObjectPool_1_Put_m2005837762_gshared (ObjectPool_1_t14758110 * __this, Il2CppObject * ___t0, const MethodInfo* method);
#define ObjectPool_1_Put_m2005837762(__this, ___t0, method) ((  void (*) (ObjectPool_1_t14758110 *, Il2CppObject *, const MethodInfo*))ObjectPool_1_Put_m2005837762_gshared)(__this, ___t0, method)
// System.Void ObjectPool`1<System.Object>::Clear()
extern "C"  void ObjectPool_1_Clear_m4095783796_gshared (ObjectPool_1_t14758110 * __this, const MethodInfo* method);
#define ObjectPool_1_Clear_m4095783796(__this, method) ((  void (*) (ObjectPool_1_t14758110 *, const MethodInfo*))ObjectPool_1_Clear_m4095783796_gshared)(__this, method)
