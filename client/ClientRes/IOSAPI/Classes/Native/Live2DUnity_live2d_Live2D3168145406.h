#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"
#include "Live2DUnity_live2d_Live2D_DrawMethodVersion313358272.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.Live2D
struct  Live2D_t3168145406  : public Il2CppObject
{
public:

public:
};

struct Live2D_t3168145406_StaticFields
{
public:
	// System.String live2d.Live2D::__L2D_PLATFORM_STR__
	String_t* _____L2D_PLATFORM_STR___0;
	// System.Boolean live2d.Live2D::L2D_OUTSIDE_PARAM_AVAILABLE
	bool ___L2D_OUTSIDE_PARAM_AVAILABLE_1;
	// live2d.Live2D/DrawMethodVersion live2d.Live2D::drawMethodVersion
	int32_t ___drawMethodVersion_2;
	// System.Int32 live2d.Live2D::clippingMaskBufferSize
	int32_t ___clippingMaskBufferSize_3;
	// System.Int32 live2d.Live2D::lastError
	int32_t ___lastError_4;
	// System.Boolean live2d.Live2D::first_init_flag
	bool ___first_init_flag_5;

public:
	inline static int32_t get_offset_of___L2D_PLATFORM_STR___0() { return static_cast<int32_t>(offsetof(Live2D_t3168145406_StaticFields, _____L2D_PLATFORM_STR___0)); }
	inline String_t* get___L2D_PLATFORM_STR___0() const { return _____L2D_PLATFORM_STR___0; }
	inline String_t** get_address_of___L2D_PLATFORM_STR___0() { return &_____L2D_PLATFORM_STR___0; }
	inline void set___L2D_PLATFORM_STR___0(String_t* value)
	{
		_____L2D_PLATFORM_STR___0 = value;
		Il2CppCodeGenWriteBarrier(&_____L2D_PLATFORM_STR___0, value);
	}

	inline static int32_t get_offset_of_L2D_OUTSIDE_PARAM_AVAILABLE_1() { return static_cast<int32_t>(offsetof(Live2D_t3168145406_StaticFields, ___L2D_OUTSIDE_PARAM_AVAILABLE_1)); }
	inline bool get_L2D_OUTSIDE_PARAM_AVAILABLE_1() const { return ___L2D_OUTSIDE_PARAM_AVAILABLE_1; }
	inline bool* get_address_of_L2D_OUTSIDE_PARAM_AVAILABLE_1() { return &___L2D_OUTSIDE_PARAM_AVAILABLE_1; }
	inline void set_L2D_OUTSIDE_PARAM_AVAILABLE_1(bool value)
	{
		___L2D_OUTSIDE_PARAM_AVAILABLE_1 = value;
	}

	inline static int32_t get_offset_of_drawMethodVersion_2() { return static_cast<int32_t>(offsetof(Live2D_t3168145406_StaticFields, ___drawMethodVersion_2)); }
	inline int32_t get_drawMethodVersion_2() const { return ___drawMethodVersion_2; }
	inline int32_t* get_address_of_drawMethodVersion_2() { return &___drawMethodVersion_2; }
	inline void set_drawMethodVersion_2(int32_t value)
	{
		___drawMethodVersion_2 = value;
	}

	inline static int32_t get_offset_of_clippingMaskBufferSize_3() { return static_cast<int32_t>(offsetof(Live2D_t3168145406_StaticFields, ___clippingMaskBufferSize_3)); }
	inline int32_t get_clippingMaskBufferSize_3() const { return ___clippingMaskBufferSize_3; }
	inline int32_t* get_address_of_clippingMaskBufferSize_3() { return &___clippingMaskBufferSize_3; }
	inline void set_clippingMaskBufferSize_3(int32_t value)
	{
		___clippingMaskBufferSize_3 = value;
	}

	inline static int32_t get_offset_of_lastError_4() { return static_cast<int32_t>(offsetof(Live2D_t3168145406_StaticFields, ___lastError_4)); }
	inline int32_t get_lastError_4() const { return ___lastError_4; }
	inline int32_t* get_address_of_lastError_4() { return &___lastError_4; }
	inline void set_lastError_4(int32_t value)
	{
		___lastError_4 = value;
	}

	inline static int32_t get_offset_of_first_init_flag_5() { return static_cast<int32_t>(offsetof(Live2D_t3168145406_StaticFields, ___first_init_flag_5)); }
	inline bool get_first_init_flag_5() const { return ___first_init_flag_5; }
	inline bool* get_address_of_first_init_flag_5() { return &___first_init_flag_5; }
	inline void set_first_init_flag_5(bool value)
	{
		___first_init_flag_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
