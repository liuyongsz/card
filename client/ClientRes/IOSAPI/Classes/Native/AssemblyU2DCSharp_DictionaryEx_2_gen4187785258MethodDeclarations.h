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

// DictionaryEx`2<System.Object,System.Object>
struct DictionaryEx_2_t4187785258;
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

// System.Void DictionaryEx`2<System.Object,System.Object>::.ctor()
extern "C"  void DictionaryEx_2__ctor_m2662572382_gshared (DictionaryEx_2_t4187785258 * __this, const MethodInfo* method);
#define DictionaryEx_2__ctor_m2662572382(__this, method) ((  void (*) (DictionaryEx_2_t4187785258 *, const MethodInfo*))DictionaryEx_2__ctor_m2662572382_gshared)(__this, method)
// System.Void DictionaryEx`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void DictionaryEx_2__ctor_m2101214729_gshared (DictionaryEx_2_t4187785258 * __this, Il2CppObject* ___comparer0, const MethodInfo* method);
#define DictionaryEx_2__ctor_m2101214729(__this, ___comparer0, method) ((  void (*) (DictionaryEx_2_t4187785258 *, Il2CppObject*, const MethodInfo*))DictionaryEx_2__ctor_m2101214729_gshared)(__this, ___comparer0, method)
// System.Void DictionaryEx`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C"  void DictionaryEx_2_Add_m613680107_gshared (DictionaryEx_2_t4187785258 * __this, Il2CppObject * ___tkey0, Il2CppObject * ___tvalue1, const MethodInfo* method);
#define DictionaryEx_2_Add_m613680107(__this, ___tkey0, ___tvalue1, method) ((  void (*) (DictionaryEx_2_t4187785258 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))DictionaryEx_2_Add_m613680107_gshared)(__this, ___tkey0, ___tvalue1, method)
// System.Boolean DictionaryEx`2<System.Object,System.Object>::Remove(TKey)
extern "C"  bool DictionaryEx_2_Remove_m3287493127_gshared (DictionaryEx_2_t4187785258 * __this, Il2CppObject * ___tkey0, const MethodInfo* method);
#define DictionaryEx_2_Remove_m3287493127(__this, ___tkey0, method) ((  bool (*) (DictionaryEx_2_t4187785258 *, Il2CppObject *, const MethodInfo*))DictionaryEx_2_Remove_m3287493127_gshared)(__this, ___tkey0, method)
// System.Boolean DictionaryEx`2<System.Object,System.Object>::RemoveAt(System.Int32)
extern "C"  bool DictionaryEx_2_RemoveAt_m2482819438_gshared (DictionaryEx_2_t4187785258 * __this, int32_t ___index0, const MethodInfo* method);
#define DictionaryEx_2_RemoveAt_m2482819438(__this, ___index0, method) ((  bool (*) (DictionaryEx_2_t4187785258 *, int32_t, const MethodInfo*))DictionaryEx_2_RemoveAt_m2482819438_gshared)(__this, ___index0, method)
// System.Void DictionaryEx`2<System.Object,System.Object>::Sort()
extern "C"  void DictionaryEx_2_Sort_m1962864032_gshared (DictionaryEx_2_t4187785258 * __this, const MethodInfo* method);
#define DictionaryEx_2_Sort_m1962864032(__this, method) ((  void (*) (DictionaryEx_2_t4187785258 *, const MethodInfo*))DictionaryEx_2_Sort_m1962864032_gshared)(__this, method)
// System.Void DictionaryEx`2<System.Object,System.Object>::Sort(System.Comparison`1<TKey>)
extern "C"  void DictionaryEx_2_Sort_m4210967890_gshared (DictionaryEx_2_t4187785258 * __this, Comparison_1_t3951188146 * ___comparison0, const MethodInfo* method);
#define DictionaryEx_2_Sort_m4210967890(__this, ___comparison0, method) ((  void (*) (DictionaryEx_2_t4187785258 *, Comparison_1_t3951188146 *, const MethodInfo*))DictionaryEx_2_Sort_m4210967890_gshared)(__this, ___comparison0, method)
// System.Void DictionaryEx`2<System.Object,System.Object>::Sort(System.Collections.Generic.IComparer`1<TKey>)
extern "C"  void DictionaryEx_2_Sort_m4142960891_gshared (DictionaryEx_2_t4187785258 * __this, Il2CppObject* ___comparer0, const MethodInfo* method);
#define DictionaryEx_2_Sort_m4142960891(__this, ___comparer0, method) ((  void (*) (DictionaryEx_2_t4187785258 *, Il2CppObject*, const MethodInfo*))DictionaryEx_2_Sort_m4142960891_gshared)(__this, ___comparer0, method)
// System.Void DictionaryEx`2<System.Object,System.Object>::Sort(System.Int32,System.Int32,System.Collections.Generic.IComparer`1<TKey>)
extern "C"  void DictionaryEx_2_Sort_m1074529559_gshared (DictionaryEx_2_t4187785258 * __this, int32_t ___index0, int32_t ___count1, Il2CppObject* ___comparer2, const MethodInfo* method);
#define DictionaryEx_2_Sort_m1074529559(__this, ___index0, ___count1, ___comparer2, method) ((  void (*) (DictionaryEx_2_t4187785258 *, int32_t, int32_t, Il2CppObject*, const MethodInfo*))DictionaryEx_2_Sort_m1074529559_gshared)(__this, ___index0, ___count1, ___comparer2, method)
// TValue DictionaryEx`2<System.Object,System.Object>::get_Item(TKey)
extern "C"  Il2CppObject * DictionaryEx_2_get_Item_m582266885_gshared (DictionaryEx_2_t4187785258 * __this, Il2CppObject * ___tkey0, const MethodInfo* method);
#define DictionaryEx_2_get_Item_m582266885(__this, ___tkey0, method) ((  Il2CppObject * (*) (DictionaryEx_2_t4187785258 *, Il2CppObject *, const MethodInfo*))DictionaryEx_2_get_Item_m582266885_gshared)(__this, ___tkey0, method)
// System.Void DictionaryEx`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C"  void DictionaryEx_2_set_Item_m2913870824_gshared (DictionaryEx_2_t4187785258 * __this, Il2CppObject * ___tkey0, Il2CppObject * ___value1, const MethodInfo* method);
#define DictionaryEx_2_set_Item_m2913870824(__this, ___tkey0, ___value1, method) ((  void (*) (DictionaryEx_2_t4187785258 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))DictionaryEx_2_set_Item_m2913870824_gshared)(__this, ___tkey0, ___value1, method)
// System.Boolean DictionaryEx`2<System.Object,System.Object>::GetTryValue(System.Int32,TValue&)
extern "C"  bool DictionaryEx_2_GetTryValue_m969041204_gshared (DictionaryEx_2_t4187785258 * __this, int32_t ___index0, Il2CppObject ** ___value1, const MethodInfo* method);
#define DictionaryEx_2_GetTryValue_m969041204(__this, ___index0, ___value1, method) ((  bool (*) (DictionaryEx_2_t4187785258 *, int32_t, Il2CppObject **, const MethodInfo*))DictionaryEx_2_GetTryValue_m969041204_gshared)(__this, ___index0, ___value1, method)
// System.Boolean DictionaryEx`2<System.Object,System.Object>::GetTryKey(System.Int32,TKey&)
extern "C"  bool DictionaryEx_2_GetTryKey_m2789070196_gshared (DictionaryEx_2_t4187785258 * __this, int32_t ___index0, Il2CppObject ** ___value1, const MethodInfo* method);
#define DictionaryEx_2_GetTryKey_m2789070196(__this, ___index0, ___value1, method) ((  bool (*) (DictionaryEx_2_t4187785258 *, int32_t, Il2CppObject **, const MethodInfo*))DictionaryEx_2_GetTryKey_m2789070196_gshared)(__this, ___index0, ___value1, method)
// TValue DictionaryEx`2<System.Object,System.Object>::GetValue(System.Int32)
extern "C"  Il2CppObject * DictionaryEx_2_GetValue_m197487700_gshared (DictionaryEx_2_t4187785258 * __this, int32_t ___index0, const MethodInfo* method);
#define DictionaryEx_2_GetValue_m197487700(__this, ___index0, method) ((  Il2CppObject * (*) (DictionaryEx_2_t4187785258 *, int32_t, const MethodInfo*))DictionaryEx_2_GetValue_m197487700_gshared)(__this, ___index0, method)
// TValue DictionaryEx`2<System.Object,System.Object>::GetValueSafe(System.Int32)
extern "C"  Il2CppObject * DictionaryEx_2_GetValueSafe_m593767571_gshared (DictionaryEx_2_t4187785258 * __this, int32_t ___index0, const MethodInfo* method);
#define DictionaryEx_2_GetValueSafe_m593767571(__this, ___index0, method) ((  Il2CppObject * (*) (DictionaryEx_2_t4187785258 *, int32_t, const MethodInfo*))DictionaryEx_2_GetValueSafe_m593767571_gshared)(__this, ___index0, method)
// TKey DictionaryEx`2<System.Object,System.Object>::GetKey(System.Int32)
extern "C"  Il2CppObject * DictionaryEx_2_GetKey_m3844678036_gshared (DictionaryEx_2_t4187785258 * __this, int32_t ___index0, const MethodInfo* method);
#define DictionaryEx_2_GetKey_m3844678036(__this, ___index0, method) ((  Il2CppObject * (*) (DictionaryEx_2_t4187785258 *, int32_t, const MethodInfo*))DictionaryEx_2_GetKey_m3844678036_gshared)(__this, ___index0, method)
// System.Void DictionaryEx`2<System.Object,System.Object>::Clear()
extern "C"  void DictionaryEx_2_Clear_m4163181851_gshared (DictionaryEx_2_t4187785258 * __this, const MethodInfo* method);
#define DictionaryEx_2_Clear_m4163181851(__this, method) ((  void (*) (DictionaryEx_2_t4187785258 *, const MethodInfo*))DictionaryEx_2_Clear_m4163181851_gshared)(__this, method)
