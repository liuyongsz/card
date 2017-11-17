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

// DictionaryEx`2<System.Object,System.Int32>
struct DictionaryEx_2_t3570213411;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1902082073;
// System.Object
struct Il2CppObject;
// System.Comparison`1<System.Object>
struct Comparison_1_t3951188146;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t643912417;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void DictionaryEx`2<System.Object,System.Int32>::.ctor()
extern "C"  void DictionaryEx_2__ctor_m714205685_gshared (DictionaryEx_2_t3570213411 * __this, const MethodInfo* method);
#define DictionaryEx_2__ctor_m714205685(__this, method) ((  void (*) (DictionaryEx_2_t3570213411 *, const MethodInfo*))DictionaryEx_2__ctor_m714205685_gshared)(__this, method)
// System.Void DictionaryEx`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void DictionaryEx_2__ctor_m135831352_gshared (DictionaryEx_2_t3570213411 * __this, Il2CppObject* ___comparer0, const MethodInfo* method);
#define DictionaryEx_2__ctor_m135831352(__this, ___comparer0, method) ((  void (*) (DictionaryEx_2_t3570213411 *, Il2CppObject*, const MethodInfo*))DictionaryEx_2__ctor_m135831352_gshared)(__this, ___comparer0, method)
// System.Void DictionaryEx`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C"  void DictionaryEx_2_Add_m3813404776_gshared (DictionaryEx_2_t3570213411 * __this, Il2CppObject * ___tkey0, int32_t ___tvalue1, const MethodInfo* method);
#define DictionaryEx_2_Add_m3813404776(__this, ___tkey0, ___tvalue1, method) ((  void (*) (DictionaryEx_2_t3570213411 *, Il2CppObject *, int32_t, const MethodInfo*))DictionaryEx_2_Add_m3813404776_gshared)(__this, ___tkey0, ___tvalue1, method)
// System.Boolean DictionaryEx`2<System.Object,System.Int32>::Remove(TKey)
extern "C"  bool DictionaryEx_2_Remove_m3105705254_gshared (DictionaryEx_2_t3570213411 * __this, Il2CppObject * ___tkey0, const MethodInfo* method);
#define DictionaryEx_2_Remove_m3105705254(__this, ___tkey0, method) ((  bool (*) (DictionaryEx_2_t3570213411 *, Il2CppObject *, const MethodInfo*))DictionaryEx_2_Remove_m3105705254_gshared)(__this, ___tkey0, method)
// System.Boolean DictionaryEx`2<System.Object,System.Int32>::RemoveAt(System.Int32)
extern "C"  bool DictionaryEx_2_RemoveAt_m2760462475_gshared (DictionaryEx_2_t3570213411 * __this, int32_t ___index0, const MethodInfo* method);
#define DictionaryEx_2_RemoveAt_m2760462475(__this, ___index0, method) ((  bool (*) (DictionaryEx_2_t3570213411 *, int32_t, const MethodInfo*))DictionaryEx_2_RemoveAt_m2760462475_gshared)(__this, ___index0, method)
// System.Void DictionaryEx`2<System.Object,System.Int32>::Sort()
extern "C"  void DictionaryEx_2_Sort_m243123619_gshared (DictionaryEx_2_t3570213411 * __this, const MethodInfo* method);
#define DictionaryEx_2_Sort_m243123619(__this, method) ((  void (*) (DictionaryEx_2_t3570213411 *, const MethodInfo*))DictionaryEx_2_Sort_m243123619_gshared)(__this, method)
// System.Void DictionaryEx`2<System.Object,System.Int32>::Sort(System.Comparison`1<TKey>)
extern "C"  void DictionaryEx_2_Sort_m1159388389_gshared (DictionaryEx_2_t3570213411 * __this, Comparison_1_t3951188146 * ___comparison0, const MethodInfo* method);
#define DictionaryEx_2_Sort_m1159388389(__this, ___comparison0, method) ((  void (*) (DictionaryEx_2_t3570213411 *, Comparison_1_t3951188146 *, const MethodInfo*))DictionaryEx_2_Sort_m1159388389_gshared)(__this, ___comparison0, method)
// System.Void DictionaryEx`2<System.Object,System.Int32>::Sort(System.Collections.Generic.IComparer`1<TKey>)
extern "C"  void DictionaryEx_2_Sort_m3468565392_gshared (DictionaryEx_2_t3570213411 * __this, Il2CppObject* ___comparer0, const MethodInfo* method);
#define DictionaryEx_2_Sort_m3468565392(__this, ___comparer0, method) ((  void (*) (DictionaryEx_2_t3570213411 *, Il2CppObject*, const MethodInfo*))DictionaryEx_2_Sort_m3468565392_gshared)(__this, ___comparer0, method)
// System.Void DictionaryEx`2<System.Object,System.Int32>::Sort(System.Int32,System.Int32,System.Collections.Generic.IComparer`1<TKey>)
extern "C"  void DictionaryEx_2_Sort_m3674330182_gshared (DictionaryEx_2_t3570213411 * __this, int32_t ___index0, int32_t ___count1, Il2CppObject* ___comparer2, const MethodInfo* method);
#define DictionaryEx_2_Sort_m3674330182(__this, ___index0, ___count1, ___comparer2, method) ((  void (*) (DictionaryEx_2_t3570213411 *, int32_t, int32_t, Il2CppObject*, const MethodInfo*))DictionaryEx_2_Sort_m3674330182_gshared)(__this, ___index0, ___count1, ___comparer2, method)
// TValue DictionaryEx`2<System.Object,System.Int32>::get_Item(TKey)
extern "C"  int32_t DictionaryEx_2_get_Item_m3560642058_gshared (DictionaryEx_2_t3570213411 * __this, Il2CppObject * ___tkey0, const MethodInfo* method);
#define DictionaryEx_2_get_Item_m3560642058(__this, ___tkey0, method) ((  int32_t (*) (DictionaryEx_2_t3570213411 *, Il2CppObject *, const MethodInfo*))DictionaryEx_2_get_Item_m3560642058_gshared)(__this, ___tkey0, method)
// System.Void DictionaryEx`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C"  void DictionaryEx_2_set_Item_m2715064885_gshared (DictionaryEx_2_t3570213411 * __this, Il2CppObject * ___tkey0, int32_t ___value1, const MethodInfo* method);
#define DictionaryEx_2_set_Item_m2715064885(__this, ___tkey0, ___value1, method) ((  void (*) (DictionaryEx_2_t3570213411 *, Il2CppObject *, int32_t, const MethodInfo*))DictionaryEx_2_set_Item_m2715064885_gshared)(__this, ___tkey0, ___value1, method)
// System.Boolean DictionaryEx`2<System.Object,System.Int32>::GetTryValue(System.Int32,TValue&)
extern "C"  bool DictionaryEx_2_GetTryValue_m3769313707_gshared (DictionaryEx_2_t3570213411 * __this, int32_t ___index0, int32_t* ___value1, const MethodInfo* method);
#define DictionaryEx_2_GetTryValue_m3769313707(__this, ___index0, ___value1, method) ((  bool (*) (DictionaryEx_2_t3570213411 *, int32_t, int32_t*, const MethodInfo*))DictionaryEx_2_GetTryValue_m3769313707_gshared)(__this, ___index0, ___value1, method)
// System.Boolean DictionaryEx`2<System.Object,System.Int32>::GetTryKey(System.Int32,TKey&)
extern "C"  bool DictionaryEx_2_GetTryKey_m4094970731_gshared (DictionaryEx_2_t3570213411 * __this, int32_t ___index0, Il2CppObject ** ___value1, const MethodInfo* method);
#define DictionaryEx_2_GetTryKey_m4094970731(__this, ___index0, ___value1, method) ((  bool (*) (DictionaryEx_2_t3570213411 *, int32_t, Il2CppObject **, const MethodInfo*))DictionaryEx_2_GetTryKey_m4094970731_gshared)(__this, ___index0, ___value1, method)
// TValue DictionaryEx`2<System.Object,System.Int32>::GetValue(System.Int32)
extern "C"  int32_t DictionaryEx_2_GetValue_m2121588737_gshared (DictionaryEx_2_t3570213411 * __this, int32_t ___index0, const MethodInfo* method);
#define DictionaryEx_2_GetValue_m2121588737(__this, ___index0, method) ((  int32_t (*) (DictionaryEx_2_t3570213411 *, int32_t, const MethodInfo*))DictionaryEx_2_GetValue_m2121588737_gshared)(__this, ___index0, method)
// TValue DictionaryEx`2<System.Object,System.Int32>::GetValueSafe(System.Int32)
extern "C"  int32_t DictionaryEx_2_GetValueSafe_m336374036_gshared (DictionaryEx_2_t3570213411 * __this, int32_t ___index0, const MethodInfo* method);
#define DictionaryEx_2_GetValueSafe_m336374036(__this, ___index0, method) ((  int32_t (*) (DictionaryEx_2_t3570213411 *, int32_t, const MethodInfo*))DictionaryEx_2_GetValueSafe_m336374036_gshared)(__this, ___index0, method)
// TKey DictionaryEx`2<System.Object,System.Int32>::GetKey(System.Int32)
extern "C"  Il2CppObject * DictionaryEx_2_GetKey_m1033859273_gshared (DictionaryEx_2_t3570213411 * __this, int32_t ___index0, const MethodInfo* method);
#define DictionaryEx_2_GetKey_m1033859273(__this, ___index0, method) ((  Il2CppObject * (*) (DictionaryEx_2_t3570213411 *, int32_t, const MethodInfo*))DictionaryEx_2_GetKey_m1033859273_gshared)(__this, ___index0, method)
// System.Void DictionaryEx`2<System.Object,System.Int32>::Clear()
extern "C"  void DictionaryEx_2_Clear_m4204702180_gshared (DictionaryEx_2_t3570213411 * __this, const MethodInfo* method);
#define DictionaryEx_2_Clear_m4204702180(__this, method) ((  void (*) (DictionaryEx_2_t3570213411 *, const MethodInfo*))DictionaryEx_2_Clear_m4204702180_gshared)(__this, method)
