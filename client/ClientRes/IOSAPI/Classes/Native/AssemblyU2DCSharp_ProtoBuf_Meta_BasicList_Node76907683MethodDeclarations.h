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

// ProtoBuf.Meta.BasicList/Node
struct Node_t76907683;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// ProtoBuf.Meta.BasicList/MatchPredicate
struct MatchPredicate_t2181991961;
// System.Array
struct Il2CppArray;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_BasicList_MatchPre2181991961.h"
#include "mscorlib_System_Array3829468939.h"

// System.Void ProtoBuf.Meta.BasicList/Node::.ctor(System.Object[],System.Int32)
extern "C"  void Node__ctor_m27791127 (Node_t76907683 * __this, ObjectU5BU5D_t3614634134* ___data0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Meta.BasicList/Node::get_Item(System.Int32)
extern "C"  Il2CppObject * Node_get_Item_m4149416984 (Node_t76907683 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.BasicList/Node::set_Item(System.Int32,System.Object)
extern "C"  void Node_set_Item_m2357948269 (Node_t76907683 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.Meta.BasicList/Node::get_Length()
extern "C"  int32_t Node_get_Length_m1385854553 (Node_t76907683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.BasicList/Node::RemoveLastWithMutate()
extern "C"  void Node_RemoveLastWithMutate_m1476148530 (Node_t76907683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.BasicList/Node ProtoBuf.Meta.BasicList/Node::Append(System.Object)
extern "C"  Node_t76907683 * Node_Append_m2688743550 (Node_t76907683 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.BasicList/Node ProtoBuf.Meta.BasicList/Node::Trim()
extern "C"  Node_t76907683 * Node_Trim_m903910774 (Node_t76907683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.Meta.BasicList/Node::IndexOfString(System.String)
extern "C"  int32_t Node_IndexOfString_m3946043766 (Node_t76907683 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.Meta.BasicList/Node::IndexOfReference(System.Object)
extern "C"  int32_t Node_IndexOfReference_m522778096 (Node_t76907683 * __this, Il2CppObject * ___instance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.Meta.BasicList/Node::IndexOf(ProtoBuf.Meta.BasicList/MatchPredicate,System.Object)
extern "C"  int32_t Node_IndexOf_m764541144 (Node_t76907683 * __this, MatchPredicate_t2181991961 * ___predicate0, Il2CppObject * ___ctx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.BasicList/Node::CopyTo(System.Array,System.Int32)
extern "C"  void Node_CopyTo_m2077885879 (Node_t76907683 * __this, Il2CppArray * ___array0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.BasicList/Node::Clear()
extern "C"  void Node_Clear_m2314020179 (Node_t76907683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
