#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ProtoBuf.Meta.BasicList/Node
struct Node_t76907683;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Meta.BasicList/NodeEnumerator
struct  NodeEnumerator_t2246148295 
{
public:
	// System.Int32 ProtoBuf.Meta.BasicList/NodeEnumerator::position
	int32_t ___position_0;
	// ProtoBuf.Meta.BasicList/Node ProtoBuf.Meta.BasicList/NodeEnumerator::node
	Node_t76907683 * ___node_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(NodeEnumerator_t2246148295, ___position_0)); }
	inline int32_t get_position_0() const { return ___position_0; }
	inline int32_t* get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(int32_t value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_node_1() { return static_cast<int32_t>(offsetof(NodeEnumerator_t2246148295, ___node_1)); }
	inline Node_t76907683 * get_node_1() const { return ___node_1; }
	inline Node_t76907683 ** get_address_of_node_1() { return &___node_1; }
	inline void set_node_1(Node_t76907683 * value)
	{
		___node_1 = value;
		Il2CppCodeGenWriteBarrier(&___node_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: ProtoBuf.Meta.BasicList/NodeEnumerator
struct NodeEnumerator_t2246148295_marshaled_pinvoke
{
	int32_t ___position_0;
	Node_t76907683 * ___node_1;
};
// Native definition for marshalling of: ProtoBuf.Meta.BasicList/NodeEnumerator
struct NodeEnumerator_t2246148295_marshaled_com
{
	int32_t ___position_0;
	Node_t76907683 * ___node_1;
};
