#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Single[]
struct SingleU5BU5D_t577127397;

#include "mscorlib_System_Object2689449295.h"
#include "Live2DUnity_live2d_ColorConvertMethod321120369.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.ColorConvertData
struct  ColorConvertData_t28676816  : public Il2CppObject
{
public:
	// live2d.ColorConvertMethod live2d.ColorConvertData::methodType
	int32_t ___methodType_0;
	// System.Single live2d.ColorConvertData::mainLineHigh
	float ___mainLineHigh_1;
	// System.Single live2d.ColorConvertData::mainLineLow
	float ___mainLineLow_2;
	// System.Single[] live2d.ColorConvertData::matrix
	SingleU5BU5D_t577127397* ___matrix_3;

public:
	inline static int32_t get_offset_of_methodType_0() { return static_cast<int32_t>(offsetof(ColorConvertData_t28676816, ___methodType_0)); }
	inline int32_t get_methodType_0() const { return ___methodType_0; }
	inline int32_t* get_address_of_methodType_0() { return &___methodType_0; }
	inline void set_methodType_0(int32_t value)
	{
		___methodType_0 = value;
	}

	inline static int32_t get_offset_of_mainLineHigh_1() { return static_cast<int32_t>(offsetof(ColorConvertData_t28676816, ___mainLineHigh_1)); }
	inline float get_mainLineHigh_1() const { return ___mainLineHigh_1; }
	inline float* get_address_of_mainLineHigh_1() { return &___mainLineHigh_1; }
	inline void set_mainLineHigh_1(float value)
	{
		___mainLineHigh_1 = value;
	}

	inline static int32_t get_offset_of_mainLineLow_2() { return static_cast<int32_t>(offsetof(ColorConvertData_t28676816, ___mainLineLow_2)); }
	inline float get_mainLineLow_2() const { return ___mainLineLow_2; }
	inline float* get_address_of_mainLineLow_2() { return &___mainLineLow_2; }
	inline void set_mainLineLow_2(float value)
	{
		___mainLineLow_2 = value;
	}

	inline static int32_t get_offset_of_matrix_3() { return static_cast<int32_t>(offsetof(ColorConvertData_t28676816, ___matrix_3)); }
	inline SingleU5BU5D_t577127397* get_matrix_3() const { return ___matrix_3; }
	inline SingleU5BU5D_t577127397** get_address_of_matrix_3() { return &___matrix_3; }
	inline void set_matrix_3(SingleU5BU5D_t577127397* value)
	{
		___matrix_3 = value;
		Il2CppCodeGenWriteBarrier(&___matrix_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
