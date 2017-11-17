#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// live2d.　　 　
struct U3000U3000U20U3000_t4204317150;
// System.IO.Stream
struct Stream_t3255436806;

#include "Live2DUnity_live2d_ALive2DModel4064879310.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.Live2DModelUnity
struct  Live2DModelUnity_t3366005376  : public ALive2DModel_t4064879310
{
public:
	// System.Int32 live2d.Live2DModelUnity::renderMode
	int32_t ___renderMode_8;
	// live2d.　　 　 live2d.Live2DModelUnity::_drawParamUnity
	U3000U3000U20U3000_t4204317150 * ____drawParamUnity_9;
	// System.IO.Stream live2d.Live2DModelUnity::asyncData
	Stream_t3255436806 * ___asyncData_10;

public:
	inline static int32_t get_offset_of_renderMode_8() { return static_cast<int32_t>(offsetof(Live2DModelUnity_t3366005376, ___renderMode_8)); }
	inline int32_t get_renderMode_8() const { return ___renderMode_8; }
	inline int32_t* get_address_of_renderMode_8() { return &___renderMode_8; }
	inline void set_renderMode_8(int32_t value)
	{
		___renderMode_8 = value;
	}

	inline static int32_t get_offset_of__drawParamUnity_9() { return static_cast<int32_t>(offsetof(Live2DModelUnity_t3366005376, ____drawParamUnity_9)); }
	inline U3000U3000U20U3000_t4204317150 * get__drawParamUnity_9() const { return ____drawParamUnity_9; }
	inline U3000U3000U20U3000_t4204317150 ** get_address_of__drawParamUnity_9() { return &____drawParamUnity_9; }
	inline void set__drawParamUnity_9(U3000U3000U20U3000_t4204317150 * value)
	{
		____drawParamUnity_9 = value;
		Il2CppCodeGenWriteBarrier(&____drawParamUnity_9, value);
	}

	inline static int32_t get_offset_of_asyncData_10() { return static_cast<int32_t>(offsetof(Live2DModelUnity_t3366005376, ___asyncData_10)); }
	inline Stream_t3255436806 * get_asyncData_10() const { return ___asyncData_10; }
	inline Stream_t3255436806 ** get_address_of_asyncData_10() { return &___asyncData_10; }
	inline void set_asyncData_10(Stream_t3255436806 * value)
	{
		___asyncData_10 = value;
		Il2CppCodeGenWriteBarrier(&___asyncData_10, value);
	}
};

struct Live2DModelUnity_t3366005376_StaticFields
{
public:
	// System.Boolean live2d.Live2DModelUnity::firstError_setRenderMode
	bool ___firstError_setRenderMode_11;

public:
	inline static int32_t get_offset_of_firstError_setRenderMode_11() { return static_cast<int32_t>(offsetof(Live2DModelUnity_t3366005376_StaticFields, ___firstError_setRenderMode_11)); }
	inline bool get_firstError_setRenderMode_11() const { return ___firstError_setRenderMode_11; }
	inline bool* get_address_of_firstError_setRenderMode_11() { return &___firstError_setRenderMode_11; }
	inline void set_firstError_setRenderMode_11(bool value)
	{
		___firstError_setRenderMode_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
