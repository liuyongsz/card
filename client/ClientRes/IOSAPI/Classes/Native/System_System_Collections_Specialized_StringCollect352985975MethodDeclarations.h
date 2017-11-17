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

// System.Collections.Specialized.StringCollection
struct StringCollection_t352985975;
// System.Object
struct Il2CppObject;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.String
struct String_t;
// System.Collections.Specialized.StringEnumerator
struct StringEnumerator_t441637433;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Array3829468939.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Collections.Specialized.StringCollection::.ctor()
extern "C"  void StringCollection__ctor_m467153844 (StringCollection_t352985975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.get_IsReadOnly()
extern "C"  bool StringCollection_System_Collections_IList_get_IsReadOnly_m3716594668 (StringCollection_t352985975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.get_IsFixedSize()
extern "C"  bool StringCollection_System_Collections_IList_get_IsFixedSize_m1043931093 (StringCollection_t352985975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.StringCollection::System.Collections.IList.get_Item(System.Int32)
extern "C"  Il2CppObject * StringCollection_System_Collections_IList_get_Item_m2290212549 (StringCollection_t352985975 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void StringCollection_System_Collections_IList_set_Item_m2482717326 (StringCollection_t352985975 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.StringCollection::System.Collections.IList.Add(System.Object)
extern "C"  int32_t StringCollection_System_Collections_IList_Add_m941275116 (StringCollection_t352985975 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.Contains(System.Object)
extern "C"  bool StringCollection_System_Collections_IList_Contains_m1706640982 (StringCollection_t352985975 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.StringCollection::System.Collections.IList.IndexOf(System.Object)
extern "C"  int32_t StringCollection_System_Collections_IList_IndexOf_m13314746 (StringCollection_t352985975 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C"  void StringCollection_System_Collections_IList_Insert_m1915566445 (StringCollection_t352985975 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.Remove(System.Object)
extern "C"  void StringCollection_System_Collections_IList_Remove_m3244543085 (StringCollection_t352985975 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void StringCollection_System_Collections_ICollection_CopyTo_m2882084540 (StringCollection_t352985975 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Specialized.StringCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * StringCollection_System_Collections_IEnumerable_GetEnumerator_m2032583317 (StringCollection_t352985975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.StringCollection::get_Item(System.Int32)
extern "C"  String_t* StringCollection_get_Item_m4283262666 (StringCollection_t352985975 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::set_Item(System.Int32,System.String)
extern "C"  void StringCollection_set_Item_m2522937815 (StringCollection_t352985975 * __this, int32_t ___index0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.StringCollection::get_Count()
extern "C"  int32_t StringCollection_get_Count_m1458092700 (StringCollection_t352985975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.StringCollection::Add(System.String)
extern "C"  int32_t StringCollection_Add_m2506333889 (StringCollection_t352985975 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::Clear()
extern "C"  void StringCollection_Clear_m2899840293 (StringCollection_t352985975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringCollection::Contains(System.String)
extern "C"  bool StringCollection_Contains_m870435597 (StringCollection_t352985975 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringEnumerator System.Collections.Specialized.StringCollection::GetEnumerator()
extern "C"  StringEnumerator_t441637433 * StringCollection_GetEnumerator_m3207777781 (StringCollection_t352985975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.StringCollection::IndexOf(System.String)
extern "C"  int32_t StringCollection_IndexOf_m1014856711 (StringCollection_t352985975 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::Insert(System.Int32,System.String)
extern "C"  void StringCollection_Insert_m1467620830 (StringCollection_t352985975 * __this, int32_t ___index0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringCollection::get_IsReadOnly()
extern "C"  bool StringCollection_get_IsReadOnly_m3129120249 (StringCollection_t352985975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringCollection::get_IsSynchronized()
extern "C"  bool StringCollection_get_IsSynchronized_m1699466861 (StringCollection_t352985975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::Remove(System.String)
extern "C"  void StringCollection_Remove_m4131969964 (StringCollection_t352985975 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::RemoveAt(System.Int32)
extern "C"  void StringCollection_RemoveAt_m1013080178 (StringCollection_t352985975 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.StringCollection::get_SyncRoot()
extern "C"  Il2CppObject * StringCollection_get_SyncRoot_m1322750277 (StringCollection_t352985975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
