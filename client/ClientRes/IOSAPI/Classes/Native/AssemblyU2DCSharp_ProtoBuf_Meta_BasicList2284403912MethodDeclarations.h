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

// ProtoBuf.Meta.BasicList
struct BasicList_t2284403912;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Array
struct Il2CppArray;
// System.Object
struct Il2CppObject;
// ProtoBuf.Meta.BasicList/MatchPredicate
struct MatchPredicate_t2181991961;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_BasicList_NodeEnum2246148295.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_BasicList_MatchPre2181991961.h"
#include "mscorlib_System_String2029220233.h"

// System.Void ProtoBuf.Meta.BasicList::.ctor()
extern "C"  void BasicList__ctor_m2648393953 (BasicList_t2284403912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.BasicList::.cctor()
extern "C"  void BasicList__cctor_m1243943724 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ProtoBuf.Meta.BasicList::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * BasicList_System_Collections_IEnumerable_GetEnumerator_m4061156660 (BasicList_t2284403912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.BasicList::CopyTo(System.Array,System.Int32)
extern "C"  void BasicList_CopyTo_m2874357886 (BasicList_t2284403912 * __this, Il2CppArray * ___array0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.Meta.BasicList::Add(System.Object)
extern "C"  int32_t BasicList_Add_m2397623012 (BasicList_t2284403912 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Meta.BasicList::get_Item(System.Int32)
extern "C"  Il2CppObject * BasicList_get_Item_m2085899105 (BasicList_t2284403912 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.BasicList::Trim()
extern "C"  void BasicList_Trim_m2648453203 (BasicList_t2284403912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.Meta.BasicList::get_Count()
extern "C"  int32_t BasicList_get_Count_m3001571097 (BasicList_t2284403912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.BasicList/NodeEnumerator ProtoBuf.Meta.BasicList::GetEnumerator()
extern "C"  NodeEnumerator_t2246148295  BasicList_GetEnumerator_m782228421 (BasicList_t2284403912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.Meta.BasicList::IndexOf(ProtoBuf.Meta.BasicList/MatchPredicate,System.Object)
extern "C"  int32_t BasicList_IndexOf_m149288641 (BasicList_t2284403912 * __this, MatchPredicate_t2181991961 * ___predicate0, Il2CppObject * ___ctx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.Meta.BasicList::IndexOfString(System.String)
extern "C"  int32_t BasicList_IndexOfString_m1304395507 (BasicList_t2284403912 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.Meta.BasicList::IndexOfReference(System.Object)
extern "C"  int32_t BasicList_IndexOfReference_m510762165 (BasicList_t2284403912 * __this, Il2CppObject * ___instance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.BasicList::Contains(System.Object)
extern "C"  bool BasicList_Contains_m787445778 (BasicList_t2284403912 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.BasicList ProtoBuf.Meta.BasicList::GetContiguousGroups(System.Int32[],System.Object[])
extern "C"  BasicList_t2284403912 * BasicList_GetContiguousGroups_m1576074945 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3030399641* ___keys0, ObjectU5BU5D_t3614634134* ___values1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
