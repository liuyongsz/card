#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// live2d.PartsData
struct PartsData_t1575779564;

#include "Live2DUnity_live2d_IContextData1860970540.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.PartsData/PartsDataContext
struct  PartsDataContext_t1905586784  : public IContextData_t1860970540
{
public:
	// System.Single live2d.PartsData/PartsDataContext::partsOpacity
	float ___partsOpacity_0;
	// live2d.PartsData live2d.PartsData/PartsDataContext::srcPtr
	PartsData_t1575779564 * ___srcPtr_1;

public:
	inline static int32_t get_offset_of_partsOpacity_0() { return static_cast<int32_t>(offsetof(PartsDataContext_t1905586784, ___partsOpacity_0)); }
	inline float get_partsOpacity_0() const { return ___partsOpacity_0; }
	inline float* get_address_of_partsOpacity_0() { return &___partsOpacity_0; }
	inline void set_partsOpacity_0(float value)
	{
		___partsOpacity_0 = value;
	}

	inline static int32_t get_offset_of_srcPtr_1() { return static_cast<int32_t>(offsetof(PartsDataContext_t1905586784, ___srcPtr_1)); }
	inline PartsData_t1575779564 * get_srcPtr_1() const { return ___srcPtr_1; }
	inline PartsData_t1575779564 ** get_address_of_srcPtr_1() { return &___srcPtr_1; }
	inline void set_srcPtr_1(PartsData_t1575779564 * value)
	{
		___srcPtr_1 = value;
		Il2CppCodeGenWriteBarrier(&___srcPtr_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
