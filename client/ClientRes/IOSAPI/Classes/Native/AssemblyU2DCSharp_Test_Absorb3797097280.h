#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// AbsorbMoveEff
struct AbsorbMoveEff_t97855973;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Test_Absorb
struct  Test_Absorb_t3797097280  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Test_Absorb::BombSpeed
	float ___BombSpeed_2;
	// AbsorbMoveEff Test_Absorb::Eff
	AbsorbMoveEff_t97855973 * ___Eff_3;
	// UnityEngine.Transform Test_Absorb::EndPoint
	Transform_t3275118058 * ___EndPoint_4;

public:
	inline static int32_t get_offset_of_BombSpeed_2() { return static_cast<int32_t>(offsetof(Test_Absorb_t3797097280, ___BombSpeed_2)); }
	inline float get_BombSpeed_2() const { return ___BombSpeed_2; }
	inline float* get_address_of_BombSpeed_2() { return &___BombSpeed_2; }
	inline void set_BombSpeed_2(float value)
	{
		___BombSpeed_2 = value;
	}

	inline static int32_t get_offset_of_Eff_3() { return static_cast<int32_t>(offsetof(Test_Absorb_t3797097280, ___Eff_3)); }
	inline AbsorbMoveEff_t97855973 * get_Eff_3() const { return ___Eff_3; }
	inline AbsorbMoveEff_t97855973 ** get_address_of_Eff_3() { return &___Eff_3; }
	inline void set_Eff_3(AbsorbMoveEff_t97855973 * value)
	{
		___Eff_3 = value;
		Il2CppCodeGenWriteBarrier(&___Eff_3, value);
	}

	inline static int32_t get_offset_of_EndPoint_4() { return static_cast<int32_t>(offsetof(Test_Absorb_t3797097280, ___EndPoint_4)); }
	inline Transform_t3275118058 * get_EndPoint_4() const { return ___EndPoint_4; }
	inline Transform_t3275118058 ** get_address_of_EndPoint_4() { return &___EndPoint_4; }
	inline void set_EndPoint_4(Transform_t3275118058 * value)
	{
		___EndPoint_4 = value;
		Il2CppCodeGenWriteBarrier(&___EndPoint_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
