#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_E_EffectType4184019203.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Effect_AddValueVO
struct  Effect_AddValueVO_t2705320833  : public Il2CppObject
{
public:
	// E_EffectType Effect_AddValueVO::type
	int32_t ___type_0;
	// System.Int32 Effect_AddValueVO::value
	int32_t ___value_1;
	// UnityEngine.Vector3 Effect_AddValueVO::position
	Vector3_t2243707580  ___position_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(Effect_AddValueVO_t2705320833, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(Effect_AddValueVO_t2705320833, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(Effect_AddValueVO_t2705320833, ___position_2)); }
	inline Vector3_t2243707580  get_position_2() const { return ___position_2; }
	inline Vector3_t2243707580 * get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(Vector3_t2243707580  value)
	{
		___position_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
