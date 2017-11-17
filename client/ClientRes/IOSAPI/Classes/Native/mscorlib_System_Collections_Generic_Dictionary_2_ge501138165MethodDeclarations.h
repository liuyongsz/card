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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t501138165;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1902082073;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int64>
struct IDictionary_2_t2795188882;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Collections.ICollection
struct ICollection_t91669223;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t4252378618;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerator_1_t28974510;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t259680273;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
struct KeyCollection_t2984635936;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
struct ValueCollection_t3499165304;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22553450683.h"
#include "mscorlib_System_Array3829468939.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E1821162867.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor()
extern "C"  void Dictionary_2__ctor_m1164316619_gshared (Dictionary_2_t501138165 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1164316619(__this, method) ((  void (*) (Dictionary_2_t501138165 *, const MethodInfo*))Dictionary_2__ctor_m1164316619_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m894105246_gshared (Dictionary_2_t501138165 * __this, Il2CppObject* ___comparer0, const MethodInfo* method);
#define Dictionary_2__ctor_m894105246(__this, ___comparer0, method) ((  void (*) (Dictionary_2_t501138165 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m894105246_gshared)(__this, ___comparer0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C"  void Dictionary_2__ctor_m3484895453_gshared (Dictionary_2_t501138165 * __this, Il2CppObject* ___dictionary0, const MethodInfo* method);
#define Dictionary_2__ctor_m3484895453(__this, ___dictionary0, method) ((  void (*) (Dictionary_2_t501138165 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m3484895453_gshared)(__this, ___dictionary0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m2241339334_gshared (Dictionary_2_t501138165 * __this, int32_t ___capacity0, const MethodInfo* method);
#define Dictionary_2__ctor_m2241339334(__this, ___capacity0, method) ((  void (*) (Dictionary_2_t501138165 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m2241339334_gshared)(__this, ___capacity0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m4128392454_gshared (Dictionary_2_t501138165 * __this, Il2CppObject* ___dictionary0, Il2CppObject* ___comparer1, const MethodInfo* method);
#define Dictionary_2__ctor_m4128392454(__this, ___dictionary0, ___comparer1, method) ((  void (*) (Dictionary_2_t501138165 *, Il2CppObject*, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m4128392454_gshared)(__this, ___dictionary0, ___comparer1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m3444893117_gshared (Dictionary_2_t501138165 * __this, int32_t ___capacity0, Il2CppObject* ___comparer1, const MethodInfo* method);
#define Dictionary_2__ctor_m3444893117(__this, ___capacity0, ___comparer1, method) ((  void (*) (Dictionary_2_t501138165 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m3444893117_gshared)(__this, ___capacity0, ___comparer1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m802534840_gshared (Dictionary_2_t501138165 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2__ctor_m802534840(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t501138165 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2__ctor_m802534840_gshared)(__this, ___info0, ___context1, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Keys()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Keys_m2898459805_gshared (Dictionary_2_t501138165 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m2898459805(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t501138165 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m2898459805_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Values()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Values_m3083142157_gshared (Dictionary_2_t501138165 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m3083142157(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t501138165 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m3083142157_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m2011260703_gshared (Dictionary_2_t501138165 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m2011260703(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t501138165 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m2011260703_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m3464273492_gshared (Dictionary_2_t501138165 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m3464273492(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t501138165 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m3464273492_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m2424337941_gshared (Dictionary_2_t501138165 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m2424337941(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t501138165 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m2424337941_gshared)(__this, ___key0, ___value1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m2840009161_gshared (Dictionary_2_t501138165 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m2840009161(__this, ___key0, method) ((  bool (*) (Dictionary_2_t501138165 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m2840009161_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m2279478336_gshared (Dictionary_2_t501138165 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m2279478336(__this, ___key0, method) ((  void (*) (Dictionary_2_t501138165 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m2279478336_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m57798599_gshared (Dictionary_2_t501138165 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m57798599(__this, method) ((  bool (*) (Dictionary_2_t501138165 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m57798599_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m3726594451_gshared (Dictionary_2_t501138165 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m3726594451(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t501138165 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m3726594451_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1963163413_gshared (Dictionary_2_t501138165 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1963163413(__this, method) ((  bool (*) (Dictionary_2_t501138165 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1963163413_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1731442898_gshared (Dictionary_2_t501138165 * __this, KeyValuePair_2_t2553450683  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1731442898(__this, ___keyValuePair0, method) ((  void (*) (Dictionary_2_t501138165 *, KeyValuePair_2_t2553450683 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1731442898_gshared)(__this, ___keyValuePair0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1258681998_gshared (Dictionary_2_t501138165 * __this, KeyValuePair_2_t2553450683  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1258681998(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t501138165 *, KeyValuePair_2_t2553450683 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1258681998_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2249707526_gshared (Dictionary_2_t501138165 * __this, KeyValuePair_2U5BU5D_t4252378618* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2249707526(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t501138165 *, KeyValuePair_2U5BU5D_t4252378618*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2249707526_gshared)(__this, ___array0, ___index1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2833005379_gshared (Dictionary_2_t501138165 * __this, KeyValuePair_2_t2553450683  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2833005379(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t501138165 *, KeyValuePair_2_t2553450683 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2833005379_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m2137463207_gshared (Dictionary_2_t501138165 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m2137463207(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t501138165 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m2137463207_gshared)(__this, ___array0, ___index1, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m907819136_gshared (Dictionary_2_t501138165 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m907819136(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t501138165 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m907819136_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2428009533_gshared (Dictionary_2_t501138165 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2428009533(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t501138165 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2428009533_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m4291294330_gshared (Dictionary_2_t501138165 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m4291294330(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t501138165 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m4291294330_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m747805679_gshared (Dictionary_2_t501138165 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m747805679(__this, method) ((  int32_t (*) (Dictionary_2_t501138165 *, const MethodInfo*))Dictionary_2_get_Count_m747805679_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Item(TKey)
extern "C"  int64_t Dictionary_2_get_Item_m516907086_gshared (Dictionary_2_t501138165 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_get_Item_m516907086(__this, ___key0, method) ((  int64_t (*) (Dictionary_2_t501138165 *, Il2CppObject *, const MethodInfo*))Dictionary_2_get_Item_m516907086_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m2556654275_gshared (Dictionary_2_t501138165 * __this, Il2CppObject * ___key0, int64_t ___value1, const MethodInfo* method);
#define Dictionary_2_set_Item_m2556654275(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t501138165 *, Il2CppObject *, int64_t, const MethodInfo*))Dictionary_2_set_Item_m2556654275_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m107343219_gshared (Dictionary_2_t501138165 * __this, int32_t ___capacity0, Il2CppObject* ___hcp1, const MethodInfo* method);
#define Dictionary_2_Init_m107343219(__this, ___capacity0, ___hcp1, method) ((  void (*) (Dictionary_2_t501138165 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m107343219_gshared)(__this, ___capacity0, ___hcp1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m3309750842_gshared (Dictionary_2_t501138165 * __this, int32_t ___size0, const MethodInfo* method);
#define Dictionary_2_InitArrays_m3309750842(__this, ___size0, method) ((  void (*) (Dictionary_2_t501138165 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m3309750842_gshared)(__this, ___size0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m3797551128_gshared (Dictionary_2_t501138165 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m3797551128(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t501138165 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m3797551128_gshared)(__this, ___array0, ___index1, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t2553450683  Dictionary_2_make_pair_m2938959778_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, int64_t ___value1, const MethodInfo* method);
#define Dictionary_2_make_pair_m2938959778(__this /* static, unused */, ___key0, ___value1, method) ((  KeyValuePair_2_t2553450683  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, int64_t, const MethodInfo*))Dictionary_2_make_pair_m2938959778_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_key(TKey,TValue)
extern "C"  Il2CppObject * Dictionary_2_pick_key_m2849511068_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, int64_t ___value1, const MethodInfo* method);
#define Dictionary_2_pick_key_m2849511068(__this /* static, unused */, ___key0, ___value1, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, Il2CppObject *, int64_t, const MethodInfo*))Dictionary_2_pick_key_m2849511068_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_value(TKey,TValue)
extern "C"  int64_t Dictionary_2_pick_value_m1225754716_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, int64_t ___value1, const MethodInfo* method);
#define Dictionary_2_pick_value_m1225754716(__this /* static, unused */, ___key0, ___value1, method) ((  int64_t (*) (Il2CppObject * /* static, unused */, Il2CppObject *, int64_t, const MethodInfo*))Dictionary_2_pick_value_m1225754716_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m3289493847_gshared (Dictionary_2_t501138165 * __this, KeyValuePair_2U5BU5D_t4252378618* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyTo_m3289493847(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t501138165 *, KeyValuePair_2U5BU5D_t4252378618*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m3289493847_gshared)(__this, ___array0, ___index1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Resize()
extern "C"  void Dictionary_2_Resize_m356004045_gshared (Dictionary_2_t501138165 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m356004045(__this, method) ((  void (*) (Dictionary_2_t501138165 *, const MethodInfo*))Dictionary_2_Resize_m356004045_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m2640570394_gshared (Dictionary_2_t501138165 * __this, Il2CppObject * ___key0, int64_t ___value1, const MethodInfo* method);
#define Dictionary_2_Add_m2640570394(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t501138165 *, Il2CppObject *, int64_t, const MethodInfo*))Dictionary_2_Add_m2640570394_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Clear()
extern "C"  void Dictionary_2_Clear_m2877280138_gshared (Dictionary_2_t501138165 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m2877280138(__this, method) ((  void (*) (Dictionary_2_t501138165 *, const MethodInfo*))Dictionary_2_Clear_m2877280138_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m2209019174_gshared (Dictionary_2_t501138165 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m2209019174(__this, ___key0, method) ((  bool (*) (Dictionary_2_t501138165 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsKey_m2209019174_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m1227869286_gshared (Dictionary_2_t501138165 * __this, int64_t ___value0, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1227869286(__this, ___value0, method) ((  bool (*) (Dictionary_2_t501138165 *, int64_t, const MethodInfo*))Dictionary_2_ContainsValue_m1227869286_gshared)(__this, ___value0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m1440100875_gshared (Dictionary_2_t501138165 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1440100875(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t501138165 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2_GetObjectData_m1440100875_gshared)(__this, ___info0, ___context1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m1703068899_gshared (Dictionary_2_t501138165 * __this, Il2CppObject * ___sender0, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1703068899(__this, ___sender0, method) ((  void (*) (Dictionary_2_t501138165 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m1703068899_gshared)(__this, ___sender0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m3655893622_gshared (Dictionary_2_t501138165 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_Remove_m3655893622(__this, ___key0, method) ((  bool (*) (Dictionary_2_t501138165 *, Il2CppObject *, const MethodInfo*))Dictionary_2_Remove_m3655893622_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m2129991155_gshared (Dictionary_2_t501138165 * __this, Il2CppObject * ___key0, int64_t* ___value1, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m2129991155(__this, ___key0, ___value1, method) ((  bool (*) (Dictionary_2_t501138165 *, Il2CppObject *, int64_t*, const MethodInfo*))Dictionary_2_TryGetValue_m2129991155_gshared)(__this, ___key0, ___value1, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Keys()
extern "C"  KeyCollection_t2984635936 * Dictionary_2_get_Keys_m931940334_gshared (Dictionary_2_t501138165 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m931940334(__this, method) ((  KeyCollection_t2984635936 * (*) (Dictionary_2_t501138165 *, const MethodInfo*))Dictionary_2_get_Keys_m931940334_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Values()
extern "C"  ValueCollection_t3499165304 * Dictionary_2_get_Values_m2200618638_gshared (Dictionary_2_t501138165 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m2200618638(__this, method) ((  ValueCollection_t3499165304 * (*) (Dictionary_2_t501138165 *, const MethodInfo*))Dictionary_2_get_Values_m2200618638_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTKey(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTKey_m2023597773_gshared (Dictionary_2_t501138165 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ToTKey_m2023597773(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t501138165 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m2023597773_gshared)(__this, ___key0, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTValue(System.Object)
extern "C"  int64_t Dictionary_2_ToTValue_m3390482989_gshared (Dictionary_2_t501138165 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ToTValue_m3390482989(__this, ___value0, method) ((  int64_t (*) (Dictionary_2_t501138165 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m3390482989_gshared)(__this, ___value0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m585901643_gshared (Dictionary_2_t501138165 * __this, KeyValuePair_2_t2553450683  ___pair0, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m585901643(__this, ___pair0, method) ((  bool (*) (Dictionary_2_t501138165 *, KeyValuePair_2_t2553450683 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m585901643_gshared)(__this, ___pair0, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetEnumerator()
extern "C"  Enumerator_t1821162867  Dictionary_2_GetEnumerator_m3345225472_gshared (Dictionary_2_t501138165 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m3345225472(__this, method) ((  Enumerator_t1821162867  (*) (Dictionary_2_t501138165 *, const MethodInfo*))Dictionary_2_GetEnumerator_m3345225472_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t3048875398  Dictionary_2_U3CCopyToU3Em__0_m1428857917_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, int64_t ___value1, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1428857917(__this /* static, unused */, ___key0, ___value1, method) ((  DictionaryEntry_t3048875398  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, int64_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1428857917_gshared)(__this /* static, unused */, ___key0, ___value1, method)
