#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// live2d.IDrawData
struct IDrawData_t1166296277;
// System.Boolean[]
struct BooleanU5BU5D_t3568034315;
// live2d.　  　/　
struct U3000_t262583959;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.IDrawContext
struct  IDrawContext_t2946513182  : public Il2CppObject
{
public:
	// live2d.IDrawData live2d.IDrawContext::srcPtr
	Il2CppObject * ___srcPtr_0;
	// System.Int32 live2d.IDrawContext::partsIndex
	int32_t ___partsIndex_1;
	// System.Int32 live2d.IDrawContext::interpolatedDrawOrder
	int32_t ___interpolatedDrawOrder_2;
	// System.Single live2d.IDrawContext::interpolatedOpacity
	float ___interpolatedOpacity_3;
	// System.Boolean[] live2d.IDrawContext::paramOutside
	BooleanU5BU5D_t3568034315* ___paramOutside_4;
	// System.Single live2d.IDrawContext::partsOpacity
	float ___partsOpacity_5;
	// System.Boolean live2d.IDrawContext::available
	bool ___available_6;
	// System.Single live2d.IDrawContext::baseOpacity
	float ___baseOpacity_7;
	// live2d.　  　/　 live2d.IDrawContext::clipBufPre_clipContext
	U3000_t262583959 * ___clipBufPre_clipContext_8;

public:
	inline static int32_t get_offset_of_srcPtr_0() { return static_cast<int32_t>(offsetof(IDrawContext_t2946513182, ___srcPtr_0)); }
	inline Il2CppObject * get_srcPtr_0() const { return ___srcPtr_0; }
	inline Il2CppObject ** get_address_of_srcPtr_0() { return &___srcPtr_0; }
	inline void set_srcPtr_0(Il2CppObject * value)
	{
		___srcPtr_0 = value;
		Il2CppCodeGenWriteBarrier(&___srcPtr_0, value);
	}

	inline static int32_t get_offset_of_partsIndex_1() { return static_cast<int32_t>(offsetof(IDrawContext_t2946513182, ___partsIndex_1)); }
	inline int32_t get_partsIndex_1() const { return ___partsIndex_1; }
	inline int32_t* get_address_of_partsIndex_1() { return &___partsIndex_1; }
	inline void set_partsIndex_1(int32_t value)
	{
		___partsIndex_1 = value;
	}

	inline static int32_t get_offset_of_interpolatedDrawOrder_2() { return static_cast<int32_t>(offsetof(IDrawContext_t2946513182, ___interpolatedDrawOrder_2)); }
	inline int32_t get_interpolatedDrawOrder_2() const { return ___interpolatedDrawOrder_2; }
	inline int32_t* get_address_of_interpolatedDrawOrder_2() { return &___interpolatedDrawOrder_2; }
	inline void set_interpolatedDrawOrder_2(int32_t value)
	{
		___interpolatedDrawOrder_2 = value;
	}

	inline static int32_t get_offset_of_interpolatedOpacity_3() { return static_cast<int32_t>(offsetof(IDrawContext_t2946513182, ___interpolatedOpacity_3)); }
	inline float get_interpolatedOpacity_3() const { return ___interpolatedOpacity_3; }
	inline float* get_address_of_interpolatedOpacity_3() { return &___interpolatedOpacity_3; }
	inline void set_interpolatedOpacity_3(float value)
	{
		___interpolatedOpacity_3 = value;
	}

	inline static int32_t get_offset_of_paramOutside_4() { return static_cast<int32_t>(offsetof(IDrawContext_t2946513182, ___paramOutside_4)); }
	inline BooleanU5BU5D_t3568034315* get_paramOutside_4() const { return ___paramOutside_4; }
	inline BooleanU5BU5D_t3568034315** get_address_of_paramOutside_4() { return &___paramOutside_4; }
	inline void set_paramOutside_4(BooleanU5BU5D_t3568034315* value)
	{
		___paramOutside_4 = value;
		Il2CppCodeGenWriteBarrier(&___paramOutside_4, value);
	}

	inline static int32_t get_offset_of_partsOpacity_5() { return static_cast<int32_t>(offsetof(IDrawContext_t2946513182, ___partsOpacity_5)); }
	inline float get_partsOpacity_5() const { return ___partsOpacity_5; }
	inline float* get_address_of_partsOpacity_5() { return &___partsOpacity_5; }
	inline void set_partsOpacity_5(float value)
	{
		___partsOpacity_5 = value;
	}

	inline static int32_t get_offset_of_available_6() { return static_cast<int32_t>(offsetof(IDrawContext_t2946513182, ___available_6)); }
	inline bool get_available_6() const { return ___available_6; }
	inline bool* get_address_of_available_6() { return &___available_6; }
	inline void set_available_6(bool value)
	{
		___available_6 = value;
	}

	inline static int32_t get_offset_of_baseOpacity_7() { return static_cast<int32_t>(offsetof(IDrawContext_t2946513182, ___baseOpacity_7)); }
	inline float get_baseOpacity_7() const { return ___baseOpacity_7; }
	inline float* get_address_of_baseOpacity_7() { return &___baseOpacity_7; }
	inline void set_baseOpacity_7(float value)
	{
		___baseOpacity_7 = value;
	}

	inline static int32_t get_offset_of_clipBufPre_clipContext_8() { return static_cast<int32_t>(offsetof(IDrawContext_t2946513182, ___clipBufPre_clipContext_8)); }
	inline U3000_t262583959 * get_clipBufPre_clipContext_8() const { return ___clipBufPre_clipContext_8; }
	inline U3000_t262583959 ** get_address_of_clipBufPre_clipContext_8() { return &___clipBufPre_clipContext_8; }
	inline void set_clipBufPre_clipContext_8(U3000_t262583959 * value)
	{
		___clipBufPre_clipContext_8 = value;
		Il2CppCodeGenWriteBarrier(&___clipBufPre_clipContext_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
