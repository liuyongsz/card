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

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>
struct KeyCollection_t252739777;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t2064209302;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t1158628263;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Ke458745444.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C"  void KeyCollection__ctor_m3396827013_gshared (KeyCollection_t252739777 * __this, Dictionary_2_t2064209302 * ___dictionary0, const MethodInfo* method);
#define KeyCollection__ctor_m3396827013(__this, ___dictionary0, method) ((  void (*) (KeyCollection_t252739777 *, Dictionary_2_t2064209302 *, const MethodInfo*))KeyCollection__ctor_m3396827013_gshared)(__this, ___dictionary0, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C"  void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m97207595_gshared (KeyCollection_t252739777 * __this, uint8_t ___item0, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m97207595(__this, ___item0, method) ((  void (*) (KeyCollection_t252739777 *, uint8_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m97207595_gshared)(__this, ___item0, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C"  void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m3060727298_gshared (KeyCollection_t252739777 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m3060727298(__this, method) ((  void (*) (KeyCollection_t252739777 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m3060727298_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C"  bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m3090893317_gshared (KeyCollection_t252739777 * __this, uint8_t ___item0, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m3090893317(__this, ___item0, method) ((  bool (*) (KeyCollection_t252739777 *, uint8_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m3090893317_gshared)(__this, ___item0, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C"  bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m3445440738_gshared (KeyCollection_t252739777 * __this, uint8_t ___item0, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m3445440738(__this, ___item0, method) ((  bool (*) (KeyCollection_t252739777 *, uint8_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m3445440738_gshared)(__this, ___item0, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C"  Il2CppObject* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m662000476_gshared (KeyCollection_t252739777 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m662000476(__this, method) ((  Il2CppObject* (*) (KeyCollection_t252739777 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m662000476_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void KeyCollection_System_Collections_ICollection_CopyTo_m2906167844_gshared (KeyCollection_t252739777 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m2906167844(__this, ___array0, ___index1, method) ((  void (*) (KeyCollection_t252739777 *, Il2CppArray *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m2906167844_gshared)(__this, ___array0, ___index1, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m1717573331_gshared (KeyCollection_t252739777 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m1717573331(__this, method) ((  Il2CppObject * (*) (KeyCollection_t252739777 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m1717573331_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C"  bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m2823223212_gshared (KeyCollection_t252739777 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m2823223212(__this, method) ((  bool (*) (KeyCollection_t252739777 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m2823223212_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m2547972384_gshared (KeyCollection_t252739777 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m2547972384(__this, method) ((  bool (*) (KeyCollection_t252739777 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m2547972384_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * KeyCollection_System_Collections_ICollection_get_SyncRoot_m627426580_gshared (KeyCollection_t252739777 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m627426580(__this, method) ((  Il2CppObject * (*) (KeyCollection_t252739777 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m627426580_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::CopyTo(TKey[],System.Int32)
extern "C"  void KeyCollection_CopyTo_m3065918982_gshared (KeyCollection_t252739777 * __this, ByteU5BU5D_t3397334013* ___array0, int32_t ___index1, const MethodInfo* method);
#define KeyCollection_CopyTo_m3065918982(__this, ___array0, ___index1, method) ((  void (*) (KeyCollection_t252739777 *, ByteU5BU5D_t3397334013*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m3065918982_gshared)(__this, ___array0, ___index1, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::GetEnumerator()
extern "C"  Enumerator_t458745444  KeyCollection_GetEnumerator_m302740641_gshared (KeyCollection_t252739777 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m302740641(__this, method) ((  Enumerator_t458745444  (*) (KeyCollection_t252739777 *, const MethodInfo*))KeyCollection_GetEnumerator_m302740641_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>::get_Count()
extern "C"  int32_t KeyCollection_get_Count_m369314248_gshared (KeyCollection_t252739777 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m369314248(__this, method) ((  int32_t (*) (KeyCollection_t252739777 *, const MethodInfo*))KeyCollection_get_Count_m369314248_gshared)(__this, method)
