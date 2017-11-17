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

#include "Live2DUnity_live2d_IBaseContext3140395319.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.　　/ 
struct  U20_t2467290871  : public IBaseContext_t3140395319
{
public:
	// System.Int32 live2d.　　/ ::tmpBaseDataIndex
	int32_t ___tmpBaseDataIndex_7;
	// System.Single[] live2d.　　/ ::interpolatedPoints
	SingleU5BU5D_t577127397* ___interpolatedPoints_8;
	// System.Single[] live2d.　　/ ::transformedPoints
	SingleU5BU5D_t577127397* ___transformedPoints_9;

public:
	inline static int32_t get_offset_of_tmpBaseDataIndex_7() { return static_cast<int32_t>(offsetof(U20_t2467290871, ___tmpBaseDataIndex_7)); }
	inline int32_t get_tmpBaseDataIndex_7() const { return ___tmpBaseDataIndex_7; }
	inline int32_t* get_address_of_tmpBaseDataIndex_7() { return &___tmpBaseDataIndex_7; }
	inline void set_tmpBaseDataIndex_7(int32_t value)
	{
		___tmpBaseDataIndex_7 = value;
	}

	inline static int32_t get_offset_of_interpolatedPoints_8() { return static_cast<int32_t>(offsetof(U20_t2467290871, ___interpolatedPoints_8)); }
	inline SingleU5BU5D_t577127397* get_interpolatedPoints_8() const { return ___interpolatedPoints_8; }
	inline SingleU5BU5D_t577127397** get_address_of_interpolatedPoints_8() { return &___interpolatedPoints_8; }
	inline void set_interpolatedPoints_8(SingleU5BU5D_t577127397* value)
	{
		___interpolatedPoints_8 = value;
		Il2CppCodeGenWriteBarrier(&___interpolatedPoints_8, value);
	}

	inline static int32_t get_offset_of_transformedPoints_9() { return static_cast<int32_t>(offsetof(U20_t2467290871, ___transformedPoints_9)); }
	inline SingleU5BU5D_t577127397* get_transformedPoints_9() const { return ___transformedPoints_9; }
	inline SingleU5BU5D_t577127397** get_address_of_transformedPoints_9() { return &___transformedPoints_9; }
	inline void set_transformedPoints_9(SingleU5BU5D_t577127397* value)
	{
		___transformedPoints_9 = value;
		Il2CppCodeGenWriteBarrier(&___transformedPoints_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
