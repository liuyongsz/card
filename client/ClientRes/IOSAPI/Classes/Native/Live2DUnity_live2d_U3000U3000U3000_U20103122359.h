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

#include "Live2DUnity_live2d_IDrawContext2946513182.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.　　　/ 
struct  U20_t103122359  : public IDrawContext_t2946513182
{
public:
	// System.Int32 live2d.　　　/ ::tmpBaseDataIndex
	int32_t ___tmpBaseDataIndex_9;
	// System.Single[] live2d.　　　/ ::interpolatedPoints
	SingleU5BU5D_t577127397* ___interpolatedPoints_10;
	// System.Single[] live2d.　　　/ ::transformedPoints
	SingleU5BU5D_t577127397* ___transformedPoints_11;
	// System.Single[] live2d.　　　/ ::transformedUvmap
	SingleU5BU5D_t577127397* ___transformedUvmap_12;

public:
	inline static int32_t get_offset_of_tmpBaseDataIndex_9() { return static_cast<int32_t>(offsetof(U20_t103122359, ___tmpBaseDataIndex_9)); }
	inline int32_t get_tmpBaseDataIndex_9() const { return ___tmpBaseDataIndex_9; }
	inline int32_t* get_address_of_tmpBaseDataIndex_9() { return &___tmpBaseDataIndex_9; }
	inline void set_tmpBaseDataIndex_9(int32_t value)
	{
		___tmpBaseDataIndex_9 = value;
	}

	inline static int32_t get_offset_of_interpolatedPoints_10() { return static_cast<int32_t>(offsetof(U20_t103122359, ___interpolatedPoints_10)); }
	inline SingleU5BU5D_t577127397* get_interpolatedPoints_10() const { return ___interpolatedPoints_10; }
	inline SingleU5BU5D_t577127397** get_address_of_interpolatedPoints_10() { return &___interpolatedPoints_10; }
	inline void set_interpolatedPoints_10(SingleU5BU5D_t577127397* value)
	{
		___interpolatedPoints_10 = value;
		Il2CppCodeGenWriteBarrier(&___interpolatedPoints_10, value);
	}

	inline static int32_t get_offset_of_transformedPoints_11() { return static_cast<int32_t>(offsetof(U20_t103122359, ___transformedPoints_11)); }
	inline SingleU5BU5D_t577127397* get_transformedPoints_11() const { return ___transformedPoints_11; }
	inline SingleU5BU5D_t577127397** get_address_of_transformedPoints_11() { return &___transformedPoints_11; }
	inline void set_transformedPoints_11(SingleU5BU5D_t577127397* value)
	{
		___transformedPoints_11 = value;
		Il2CppCodeGenWriteBarrier(&___transformedPoints_11, value);
	}

	inline static int32_t get_offset_of_transformedUvmap_12() { return static_cast<int32_t>(offsetof(U20_t103122359, ___transformedUvmap_12)); }
	inline SingleU5BU5D_t577127397* get_transformedUvmap_12() const { return ___transformedUvmap_12; }
	inline SingleU5BU5D_t577127397** get_address_of_transformedUvmap_12() { return &___transformedUvmap_12; }
	inline void set_transformedUvmap_12(SingleU5BU5D_t577127397* value)
	{
		___transformedUvmap_12 = value;
		Il2CppCodeGenWriteBarrier(&___transformedUvmap_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
