﻿#pragma once

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

// live2d.LDPointF
struct  LDPointF_t102293494 
{
public:
	// System.Single live2d.LDPointF::x
	float ___x_0;
	// System.Single live2d.LDPointF::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(LDPointF_t102293494, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(LDPointF_t102293494, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: live2d.LDPointF
struct LDPointF_t102293494_marshaled_pinvoke
{
	float ___x_0;
	float ___y_1;
};
// Native definition for marshalling of: live2d.LDPointF
struct LDPointF_t102293494_marshaled_com
{
	float ___x_0;
	float ___y_1;
};
