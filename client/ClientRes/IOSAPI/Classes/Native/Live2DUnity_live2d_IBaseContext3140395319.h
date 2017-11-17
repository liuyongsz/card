#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// live2d.IBaseData
struct IBaseData_t2466794364;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.IBaseContext
struct  IBaseContext_t3140395319  : public Il2CppObject
{
public:
	// live2d.IBaseData live2d.IBaseContext::srcPtr
	IBaseData_t2466794364 * ___srcPtr_0;
	// System.Int32 live2d.IBaseContext::partsIndex
	int32_t ___partsIndex_1;
	// System.Boolean live2d.IBaseContext::outsideParam
	bool ___outsideParam_2;
	// System.Boolean live2d.IBaseContext::available
	bool ___available_3;
	// System.Single live2d.IBaseContext::totalScale
	float ___totalScale_4;
	// System.Single live2d.IBaseContext::interpolatedOpacity
	float ___interpolatedOpacity_5;
	// System.Single live2d.IBaseContext::totalOpacity
	float ___totalOpacity_6;

public:
	inline static int32_t get_offset_of_srcPtr_0() { return static_cast<int32_t>(offsetof(IBaseContext_t3140395319, ___srcPtr_0)); }
	inline IBaseData_t2466794364 * get_srcPtr_0() const { return ___srcPtr_0; }
	inline IBaseData_t2466794364 ** get_address_of_srcPtr_0() { return &___srcPtr_0; }
	inline void set_srcPtr_0(IBaseData_t2466794364 * value)
	{
		___srcPtr_0 = value;
		Il2CppCodeGenWriteBarrier(&___srcPtr_0, value);
	}

	inline static int32_t get_offset_of_partsIndex_1() { return static_cast<int32_t>(offsetof(IBaseContext_t3140395319, ___partsIndex_1)); }
	inline int32_t get_partsIndex_1() const { return ___partsIndex_1; }
	inline int32_t* get_address_of_partsIndex_1() { return &___partsIndex_1; }
	inline void set_partsIndex_1(int32_t value)
	{
		___partsIndex_1 = value;
	}

	inline static int32_t get_offset_of_outsideParam_2() { return static_cast<int32_t>(offsetof(IBaseContext_t3140395319, ___outsideParam_2)); }
	inline bool get_outsideParam_2() const { return ___outsideParam_2; }
	inline bool* get_address_of_outsideParam_2() { return &___outsideParam_2; }
	inline void set_outsideParam_2(bool value)
	{
		___outsideParam_2 = value;
	}

	inline static int32_t get_offset_of_available_3() { return static_cast<int32_t>(offsetof(IBaseContext_t3140395319, ___available_3)); }
	inline bool get_available_3() const { return ___available_3; }
	inline bool* get_address_of_available_3() { return &___available_3; }
	inline void set_available_3(bool value)
	{
		___available_3 = value;
	}

	inline static int32_t get_offset_of_totalScale_4() { return static_cast<int32_t>(offsetof(IBaseContext_t3140395319, ___totalScale_4)); }
	inline float get_totalScale_4() const { return ___totalScale_4; }
	inline float* get_address_of_totalScale_4() { return &___totalScale_4; }
	inline void set_totalScale_4(float value)
	{
		___totalScale_4 = value;
	}

	inline static int32_t get_offset_of_interpolatedOpacity_5() { return static_cast<int32_t>(offsetof(IBaseContext_t3140395319, ___interpolatedOpacity_5)); }
	inline float get_interpolatedOpacity_5() const { return ___interpolatedOpacity_5; }
	inline float* get_address_of_interpolatedOpacity_5() { return &___interpolatedOpacity_5; }
	inline void set_interpolatedOpacity_5(float value)
	{
		___interpolatedOpacity_5 = value;
	}

	inline static int32_t get_offset_of_totalOpacity_6() { return static_cast<int32_t>(offsetof(IBaseContext_t3140395319, ___totalOpacity_6)); }
	inline float get_totalOpacity_6() const { return ___totalOpacity_6; }
	inline float* get_address_of_totalOpacity_6() { return &___totalOpacity_6; }
	inline void set_totalOpacity_6(float value)
	{
		___totalOpacity_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
