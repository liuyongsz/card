#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lidgren.Network.SingleUIntUnion
struct  SingleUIntUnion_t3787661257 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single Lidgren.Network.SingleUIntUnion::SingleValue
			float ___SingleValue_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___SingleValue_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 Lidgren.Network.SingleUIntUnion::UIntValue
			uint32_t ___UIntValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UIntValue_1_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_SingleValue_0() { return static_cast<int32_t>(offsetof(SingleUIntUnion_t3787661257, ___SingleValue_0)); }
	inline float get_SingleValue_0() const { return ___SingleValue_0; }
	inline float* get_address_of_SingleValue_0() { return &___SingleValue_0; }
	inline void set_SingleValue_0(float value)
	{
		___SingleValue_0 = value;
	}

	inline static int32_t get_offset_of_UIntValue_1() { return static_cast<int32_t>(offsetof(SingleUIntUnion_t3787661257, ___UIntValue_1)); }
	inline uint32_t get_UIntValue_1() const { return ___UIntValue_1; }
	inline uint32_t* get_address_of_UIntValue_1() { return &___UIntValue_1; }
	inline void set_UIntValue_1(uint32_t value)
	{
		___UIntValue_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Lidgren.Network.SingleUIntUnion
struct SingleUIntUnion_t3787661257_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			float ___SingleValue_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___SingleValue_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___UIntValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UIntValue_1_forAlignmentOnly;
		};
	};
};
// Native definition for marshalling of: Lidgren.Network.SingleUIntUnion
struct SingleUIntUnion_t3787661257_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			float ___SingleValue_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___SingleValue_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___UIntValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UIntValue_1_forAlignmentOnly;
		};
	};
};
