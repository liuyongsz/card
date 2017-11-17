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
// System.Object
struct Il2CppObject;
// ProtoBuf.Meta.BasicList/NodeEnumerator
struct NodeEnumerator_t2246148295;
struct NodeEnumerator_t2246148295_marshaled_pinvoke;
struct NodeEnumerator_t2246148295_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_BasicList_NodeEnum2246148295.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_BasicList_Node76907683.h"

// System.Void ProtoBuf.Meta.BasicList/NodeEnumerator::.ctor(ProtoBuf.Meta.BasicList/Node)
extern "C"  void NodeEnumerator__ctor_m2651840499 (NodeEnumerator_t2246148295 * __this, Node_t76907683 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.BasicList/NodeEnumerator::System.Collections.IEnumerator.Reset()
extern "C"  void NodeEnumerator_System_Collections_IEnumerator_Reset_m2073925538 (NodeEnumerator_t2246148295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Meta.BasicList/NodeEnumerator::get_Current()
extern "C"  Il2CppObject * NodeEnumerator_get_Current_m2323467583 (NodeEnumerator_t2246148295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.BasicList/NodeEnumerator::MoveNext()
extern "C"  bool NodeEnumerator_MoveNext_m3398285972 (NodeEnumerator_t2246148295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct NodeEnumerator_t2246148295;
struct NodeEnumerator_t2246148295_marshaled_pinvoke;

extern "C" void NodeEnumerator_t2246148295_marshal_pinvoke(const NodeEnumerator_t2246148295& unmarshaled, NodeEnumerator_t2246148295_marshaled_pinvoke& marshaled);
extern "C" void NodeEnumerator_t2246148295_marshal_pinvoke_back(const NodeEnumerator_t2246148295_marshaled_pinvoke& marshaled, NodeEnumerator_t2246148295& unmarshaled);
extern "C" void NodeEnumerator_t2246148295_marshal_pinvoke_cleanup(NodeEnumerator_t2246148295_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct NodeEnumerator_t2246148295;
struct NodeEnumerator_t2246148295_marshaled_com;

extern "C" void NodeEnumerator_t2246148295_marshal_com(const NodeEnumerator_t2246148295& unmarshaled, NodeEnumerator_t2246148295_marshaled_com& marshaled);
extern "C" void NodeEnumerator_t2246148295_marshal_com_back(const NodeEnumerator_t2246148295_marshaled_com& marshaled, NodeEnumerator_t2246148295& unmarshaled);
extern "C" void NodeEnumerator_t2246148295_marshal_com_cleanup(NodeEnumerator_t2246148295_marshaled_com& marshaled);
