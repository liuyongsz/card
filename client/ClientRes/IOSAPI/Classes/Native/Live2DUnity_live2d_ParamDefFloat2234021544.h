#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// live2d.ParamID
struct ParamID_t2293315874;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.ParamDefFloat
struct  ParamDefFloat_t2234021544  : public Il2CppObject
{
public:
	// System.Single live2d.ParamDefFloat::minValue
	float ___minValue_0;
	// System.Single live2d.ParamDefFloat::maxValue
	float ___maxValue_1;
	// System.Single live2d.ParamDefFloat::defaultValue
	float ___defaultValue_2;
	// live2d.ParamID live2d.ParamDefFloat::paramID
	ParamID_t2293315874 * ___paramID_3;

public:
	inline static int32_t get_offset_of_minValue_0() { return static_cast<int32_t>(offsetof(ParamDefFloat_t2234021544, ___minValue_0)); }
	inline float get_minValue_0() const { return ___minValue_0; }
	inline float* get_address_of_minValue_0() { return &___minValue_0; }
	inline void set_minValue_0(float value)
	{
		___minValue_0 = value;
	}

	inline static int32_t get_offset_of_maxValue_1() { return static_cast<int32_t>(offsetof(ParamDefFloat_t2234021544, ___maxValue_1)); }
	inline float get_maxValue_1() const { return ___maxValue_1; }
	inline float* get_address_of_maxValue_1() { return &___maxValue_1; }
	inline void set_maxValue_1(float value)
	{
		___maxValue_1 = value;
	}

	inline static int32_t get_offset_of_defaultValue_2() { return static_cast<int32_t>(offsetof(ParamDefFloat_t2234021544, ___defaultValue_2)); }
	inline float get_defaultValue_2() const { return ___defaultValue_2; }
	inline float* get_address_of_defaultValue_2() { return &___defaultValue_2; }
	inline void set_defaultValue_2(float value)
	{
		___defaultValue_2 = value;
	}

	inline static int32_t get_offset_of_paramID_3() { return static_cast<int32_t>(offsetof(ParamDefFloat_t2234021544, ___paramID_3)); }
	inline ParamID_t2293315874 * get_paramID_3() const { return ___paramID_3; }
	inline ParamID_t2293315874 ** get_address_of_paramID_3() { return &___paramID_3; }
	inline void set_paramID_3(ParamID_t2293315874 * value)
	{
		___paramID_3 = value;
		Il2CppCodeGenWriteBarrier(&___paramID_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
