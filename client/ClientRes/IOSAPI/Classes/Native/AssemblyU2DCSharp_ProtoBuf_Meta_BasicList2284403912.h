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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Meta.BasicList
struct  BasicList_t2284403912  : public Il2CppObject
{
public:
	// ProtoBuf.Meta.BasicList/Node ProtoBuf.Meta.BasicList::head
	Node_t76907683 * ___head_1;

public:
	inline static int32_t get_offset_of_head_1() { return static_cast<int32_t>(offsetof(BasicList_t2284403912, ___head_1)); }
	inline Node_t76907683 * get_head_1() const { return ___head_1; }
	inline Node_t76907683 ** get_address_of_head_1() { return &___head_1; }
	inline void set_head_1(Node_t76907683 * value)
	{
		___head_1 = value;
		Il2CppCodeGenWriteBarrier(&___head_1, value);
	}
};

struct BasicList_t2284403912_StaticFields
{
public:
	// ProtoBuf.Meta.BasicList/Node ProtoBuf.Meta.BasicList::nil
	Node_t76907683 * ___nil_0;

public:
	inline static int32_t get_offset_of_nil_0() { return static_cast<int32_t>(offsetof(BasicList_t2284403912_StaticFields, ___nil_0)); }
	inline Node_t76907683 * get_nil_0() const { return ___nil_0; }
	inline Node_t76907683 ** get_address_of_nil_0() { return &___nil_0; }
	inline void set_nil_0(Node_t76907683 * value)
	{
		___nil_0 = value;
		Il2CppCodeGenWriteBarrier(&___nil_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
