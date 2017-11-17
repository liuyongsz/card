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

// DictionaryEx`2<System.Int32,System.Object>
struct DictionaryEx_2_t3603550765;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1284510226;
// System.Object
struct Il2CppObject;
// System.Comparison`1<System.Int32>
struct Comparison_1_t3333616299;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t26340570;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void DictionaryEx`2<System.Int32,System.Object>::.ctor()
extern "C"  void DictionaryEx_2__ctor_m3925799137_gshared (DictionaryEx_2_t3603550765 * __this, const MethodInfo* method);
#define DictionaryEx_2__ctor_m3925799137(__this, method) ((  void (*) (DictionaryEx_2_t3603550765 *, const MethodInfo*))DictionaryEx_2__ctor_m3925799137_gshared)(__this, method)
// System.Void DictionaryEx`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void DictionaryEx_2__ctor_m955632304_gshared (DictionaryEx_2_t3603550765 * __this, Il2CppObject* ___comparer0, const MethodInfo* method);
#define DictionaryEx_2__ctor_m955632304(__this, ___comparer0, method) ((  void (*) (DictionaryEx_2_t3603550765 *, Il2CppObject*, const MethodInfo*))DictionaryEx_2__ctor_m955632304_gshared)(__this, ___comparer0, method)
// System.Void DictionaryEx`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C"  void DictionaryEx_2_Add_m372361948_gshared (DictionaryEx_2_t3603550765 * __this, int32_t ___tkey0, Il2CppObject * ___tvalue1, const MethodInfo* method);
#define DictionaryEx_2_Add_m372361948(__this, ___tkey0, ___tvalue1, method) ((  void (*) (DictionaryEx_2_t3603550765 *, int32_t, Il2CppObject *, const MethodInfo*))DictionaryEx_2_Add_m372361948_gshared)(__this, ___tkey0, ___tvalue1, method)
// System.Boolean DictionaryEx`2<System.Int32,System.Object>::Remove(TKey)
extern "C"  bool DictionaryEx_2_Remove_m3464053106_gshared (DictionaryEx_2_t3603550765 * __this, int32_t ___tkey0, const MethodInfo* method);
#define DictionaryEx_2_Remove_m3464053106(__this, ___tkey0, method) ((  bool (*) (DictionaryEx_2_t3603550765 *, int32_t, const MethodInfo*))DictionaryEx_2_Remove_m3464053106_gshared)(__this, ___tkey0, method)
// System.Boolean DictionaryEx`2<System.Int32,System.Object>::RemoveAt(System.Int32)
extern "C"  bool DictionaryEx_2_RemoveAt_m3153649811_gshared (DictionaryEx_2_t3603550765 * __this, int32_t ___index0, const MethodInfo* method);
#define DictionaryEx_2_RemoveAt_m3153649811(__this, ___index0, method) ((  bool (*) (DictionaryEx_2_t3603550765 *, int32_t, const MethodInfo*))DictionaryEx_2_RemoveAt_m3153649811_gshared)(__this, ___index0, method)
// System.Void DictionaryEx`2<System.Int32,System.Object>::Sort()
extern "C"  void DictionaryEx_2_Sort_m3944629723_gshared (DictionaryEx_2_t3603550765 * __this, const MethodInfo* method);
#define DictionaryEx_2_Sort_m3944629723(__this, method) ((  void (*) (DictionaryEx_2_t3603550765 *, const MethodInfo*))DictionaryEx_2_Sort_m3944629723_gshared)(__this, method)
// System.Void DictionaryEx`2<System.Int32,System.Object>::Sort(System.Comparison`1<TKey>)
extern "C"  void DictionaryEx_2_Sort_m2532294553_gshared (DictionaryEx_2_t3603550765 * __this, Comparison_1_t3333616299 * ___comparison0, const MethodInfo* method);
#define DictionaryEx_2_Sort_m2532294553(__this, ___comparison0, method) ((  void (*) (DictionaryEx_2_t3603550765 *, Comparison_1_t3333616299 *, const MethodInfo*))DictionaryEx_2_Sort_m2532294553_gshared)(__this, ___comparison0, method)
// System.Void DictionaryEx`2<System.Int32,System.Object>::Sort(System.Collections.Generic.IComparer`1<TKey>)
extern "C"  void DictionaryEx_2_Sort_m1459654948_gshared (DictionaryEx_2_t3603550765 * __this, Il2CppObject* ___comparer0, const MethodInfo* method);
#define DictionaryEx_2_Sort_m1459654948(__this, ___comparer0, method) ((  void (*) (DictionaryEx_2_t3603550765 *, Il2CppObject*, const MethodInfo*))DictionaryEx_2_Sort_m1459654948_gshared)(__this, ___comparer0, method)
// System.Void DictionaryEx`2<System.Int32,System.Object>::Sort(System.Int32,System.Int32,System.Collections.Generic.IComparer`1<TKey>)
extern "C"  void DictionaryEx_2_Sort_m3019598362_gshared (DictionaryEx_2_t3603550765 * __this, int32_t ___index0, int32_t ___count1, Il2CppObject* ___comparer2, const MethodInfo* method);
#define DictionaryEx_2_Sort_m3019598362(__this, ___index0, ___count1, ___comparer2, method) ((  void (*) (DictionaryEx_2_t3603550765 *, int32_t, int32_t, Il2CppObject*, const MethodInfo*))DictionaryEx_2_Sort_m3019598362_gshared)(__this, ___index0, ___count1, ___comparer2, method)
// TValue DictionaryEx`2<System.Int32,System.Object>::get_Item(TKey)
extern "C"  Il2CppObject * DictionaryEx_2_get_Item_m1227529218_gshared (DictionaryEx_2_t3603550765 * __this, int32_t ___tkey0, const MethodInfo* method);
#define DictionaryEx_2_get_Item_m1227529218(__this, ___tkey0, method) ((  Il2CppObject * (*) (DictionaryEx_2_t3603550765 *, int32_t, const MethodInfo*))DictionaryEx_2_get_Item_m1227529218_gshared)(__this, ___tkey0, method)
// System.Void DictionaryEx`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C"  void DictionaryEx_2_set_Item_m1855894017_gshared (DictionaryEx_2_t3603550765 * __this, int32_t ___tkey0, Il2CppObject * ___value1, const MethodInfo* method);
#define DictionaryEx_2_set_Item_m1855894017(__this, ___tkey0, ___value1, method) ((  void (*) (DictionaryEx_2_t3603550765 *, int32_t, Il2CppObject *, const MethodInfo*))DictionaryEx_2_set_Item_m1855894017_gshared)(__this, ___tkey0, ___value1, method)
// System.Boolean DictionaryEx`2<System.Int32,System.Object>::GetTryValue(System.Int32,TValue&)
extern "C"  bool DictionaryEx_2_GetTryValue_m71297011_gshared (DictionaryEx_2_t3603550765 * __this, int32_t ___index0, Il2CppObject ** ___value1, const MethodInfo* method);
#define DictionaryEx_2_GetTryValue_m71297011(__this, ___index0, ___value1, method) ((  bool (*) (DictionaryEx_2_t3603550765 *, int32_t, Il2CppObject **, const MethodInfo*))DictionaryEx_2_GetTryValue_m71297011_gshared)(__this, ___index0, ___value1, method)
// System.Boolean DictionaryEx`2<System.Int32,System.Object>::GetTryKey(System.Int32,TKey&)
extern "C"  bool DictionaryEx_2_GetTryKey_m1465497267_gshared (DictionaryEx_2_t3603550765 * __this, int32_t ___index0, int32_t* ___value1, const MethodInfo* method);
#define DictionaryEx_2_GetTryKey_m1465497267(__this, ___index0, ___value1, method) ((  bool (*) (DictionaryEx_2_t3603550765 *, int32_t, int32_t*, const MethodInfo*))DictionaryEx_2_GetTryKey_m1465497267_gshared)(__this, ___index0, ___value1, method)
// TValue DictionaryEx`2<System.Int32,System.Object>::GetValue(System.Int32)
extern "C"  Il2CppObject * DictionaryEx_2_GetValue_m2636753749_gshared (DictionaryEx_2_t3603550765 * __this, int32_t ___index0, const MethodInfo* method);
#define DictionaryEx_2_GetValue_m2636753749(__this, ___index0, method) ((  Il2CppObject * (*) (DictionaryEx_2_t3603550765 *, int32_t, const MethodInfo*))DictionaryEx_2_GetValue_m2636753749_gshared)(__this, ___index0, method)
// TValue DictionaryEx`2<System.Int32,System.Object>::GetValueSafe(System.Int32)
extern "C"  Il2CppObject * DictionaryEx_2_GetValueSafe_m3974219656_gshared (DictionaryEx_2_t3603550765 * __this, int32_t ___index0, const MethodInfo* method);
#define DictionaryEx_2_GetValueSafe_m3974219656(__this, ___index0, method) ((  Il2CppObject * (*) (DictionaryEx_2_t3603550765 *, int32_t, const MethodInfo*))DictionaryEx_2_GetValueSafe_m3974219656_gshared)(__this, ___index0, method)
// TKey DictionaryEx`2<System.Int32,System.Object>::GetKey(System.Int32)
extern "C"  int32_t DictionaryEx_2_GetKey_m3998997725_gshared (DictionaryEx_2_t3603550765 * __this, int32_t ___index0, const MethodInfo* method);
#define DictionaryEx_2_GetKey_m3998997725(__this, ___index0, method) ((  int32_t (*) (DictionaryEx_2_t3603550765 *, int32_t, const MethodInfo*))DictionaryEx_2_GetKey_m3998997725_gshared)(__this, ___index0, method)
// System.Void DictionaryEx`2<System.Int32,System.Object>::Clear()
extern "C"  void DictionaryEx_2_Clear_m4007848432_gshared (DictionaryEx_2_t3603550765 * __this, const MethodInfo* method);
#define DictionaryEx_2_Clear_m4007848432(__this, method) ((  void (*) (DictionaryEx_2_t3603550765 *, const MethodInfo*))DictionaryEx_2_Clear_m4007848432_gshared)(__this, method)
