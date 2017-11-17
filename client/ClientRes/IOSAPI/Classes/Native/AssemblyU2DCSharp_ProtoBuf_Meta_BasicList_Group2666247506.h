#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ProtoBuf.Meta.BasicList
struct BasicList_t2284403912;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Meta.BasicList/Group
struct  Group_t2666247506  : public Il2CppObject
{
public:
	// System.Int32 ProtoBuf.Meta.BasicList/Group::First
	int32_t ___First_0;
	// ProtoBuf.Meta.BasicList ProtoBuf.Meta.BasicList/Group::Items
	BasicList_t2284403912 * ___Items_1;

public:
	inline static int32_t get_offset_of_First_0() { return static_cast<int32_t>(offsetof(Group_t2666247506, ___First_0)); }
	inline int32_t get_First_0() const { return ___First_0; }
	inline int32_t* get_address_of_First_0() { return &___First_0; }
	inline void set_First_0(int32_t value)
	{
		___First_0 = value;
	}

	inline static int32_t get_offset_of_Items_1() { return static_cast<int32_t>(offsetof(Group_t2666247506, ___Items_1)); }
	inline BasicList_t2284403912 * get_Items_1() const { return ___Items_1; }
	inline BasicList_t2284403912 ** get_address_of_Items_1() { return &___Items_1; }
	inline void set_Items_1(BasicList_t2284403912 * value)
	{
		___Items_1 = value;
		Il2CppCodeGenWriteBarrier(&___Items_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
