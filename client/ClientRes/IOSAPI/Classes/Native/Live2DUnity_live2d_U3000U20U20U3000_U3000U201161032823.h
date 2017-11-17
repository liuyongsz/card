#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// live2d.DrawDataID
struct DrawDataID_t1444079665;

#include "mscorlib_System_Object2689449295.h"
#include "Live2DUnity_live2d_LDRectF3110420638.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.　  　/　 
struct  U3000U20_t1161032823  : public Il2CppObject
{
public:
	// live2d.DrawDataID live2d.　  　/　 ::drawDataID
	DrawDataID_t1444079665 * ___drawDataID_0;
	// System.Int32 live2d.　  　/　 ::drawDataIndex
	int32_t ___drawDataIndex_1;
	// live2d.LDRectF live2d.　  　/　 ::rect
	LDRectF_t3110420638  ___rect_2;

public:
	inline static int32_t get_offset_of_drawDataID_0() { return static_cast<int32_t>(offsetof(U3000U20_t1161032823, ___drawDataID_0)); }
	inline DrawDataID_t1444079665 * get_drawDataID_0() const { return ___drawDataID_0; }
	inline DrawDataID_t1444079665 ** get_address_of_drawDataID_0() { return &___drawDataID_0; }
	inline void set_drawDataID_0(DrawDataID_t1444079665 * value)
	{
		___drawDataID_0 = value;
		Il2CppCodeGenWriteBarrier(&___drawDataID_0, value);
	}

	inline static int32_t get_offset_of_drawDataIndex_1() { return static_cast<int32_t>(offsetof(U3000U20_t1161032823, ___drawDataIndex_1)); }
	inline int32_t get_drawDataIndex_1() const { return ___drawDataIndex_1; }
	inline int32_t* get_address_of_drawDataIndex_1() { return &___drawDataIndex_1; }
	inline void set_drawDataIndex_1(int32_t value)
	{
		___drawDataIndex_1 = value;
	}

	inline static int32_t get_offset_of_rect_2() { return static_cast<int32_t>(offsetof(U3000U20_t1161032823, ___rect_2)); }
	inline LDRectF_t3110420638  get_rect_2() const { return ___rect_2; }
	inline LDRectF_t3110420638 * get_address_of_rect_2() { return &___rect_2; }
	inline void set_rect_2(LDRectF_t3110420638  value)
	{
		___rect_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
