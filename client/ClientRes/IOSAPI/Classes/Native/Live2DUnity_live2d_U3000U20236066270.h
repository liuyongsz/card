#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// live2d. 
struct U20_t2726017598;

#include "Live2DUnity_live2d_IBaseContext3140395319.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.　 
struct  U3000U20_t236066270  : public IBaseContext_t3140395319
{
public:
	// System.Int32 live2d.　 ::tmpBaseDataIndex
	int32_t ___tmpBaseDataIndex_7;
	// live2d.  live2d.　 ::interpolatedAffine
	U20_t2726017598 * ___interpolatedAffine_8;
	// live2d.  live2d.　 ::transformedAffine
	U20_t2726017598 * ___transformedAffine_9;

public:
	inline static int32_t get_offset_of_tmpBaseDataIndex_7() { return static_cast<int32_t>(offsetof(U3000U20_t236066270, ___tmpBaseDataIndex_7)); }
	inline int32_t get_tmpBaseDataIndex_7() const { return ___tmpBaseDataIndex_7; }
	inline int32_t* get_address_of_tmpBaseDataIndex_7() { return &___tmpBaseDataIndex_7; }
	inline void set_tmpBaseDataIndex_7(int32_t value)
	{
		___tmpBaseDataIndex_7 = value;
	}

	inline static int32_t get_offset_of_interpolatedAffine_8() { return static_cast<int32_t>(offsetof(U3000U20_t236066270, ___interpolatedAffine_8)); }
	inline U20_t2726017598 * get_interpolatedAffine_8() const { return ___interpolatedAffine_8; }
	inline U20_t2726017598 ** get_address_of_interpolatedAffine_8() { return &___interpolatedAffine_8; }
	inline void set_interpolatedAffine_8(U20_t2726017598 * value)
	{
		___interpolatedAffine_8 = value;
		Il2CppCodeGenWriteBarrier(&___interpolatedAffine_8, value);
	}

	inline static int32_t get_offset_of_transformedAffine_9() { return static_cast<int32_t>(offsetof(U3000U20_t236066270, ___transformedAffine_9)); }
	inline U20_t2726017598 * get_transformedAffine_9() const { return ___transformedAffine_9; }
	inline U20_t2726017598 ** get_address_of_transformedAffine_9() { return &___transformedAffine_9; }
	inline void set_transformedAffine_9(U20_t2726017598 * value)
	{
		___transformedAffine_9 = value;
		Il2CppCodeGenWriteBarrier(&___transformedAffine_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
