#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.LDPoint
struct  LDPoint_t799151868 
{
public:
	// System.Int32 live2d.LDPoint::x
	int32_t ___x_0;
	// System.Int32 live2d.LDPoint::y
	int32_t ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(LDPoint_t799151868, ___x_0)); }
	inline int32_t get_x_0() const { return ___x_0; }
	inline int32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(LDPoint_t799151868, ___y_1)); }
	inline int32_t get_y_1() const { return ___y_1; }
	inline int32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(int32_t value)
	{
		___y_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: live2d.LDPoint
struct LDPoint_t799151868_marshaled_pinvoke
{
	int32_t ___x_0;
	int32_t ___y_1;
};
// Native definition for marshalling of: live2d.LDPoint
struct LDPoint_t799151868_marshaled_com
{
	int32_t ___x_0;
	int32_t ___y_1;
};
