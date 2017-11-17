#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;
// UnityEngine.Material
struct Material_t193706927;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EffectRimPowerCtr
struct  EffectRimPowerCtr_t3300007053  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean EffectRimPowerCtr::powerGradient
	bool ___powerGradient_2;
	// System.Single EffectRimPowerCtr::powerDelay
	float ___powerDelay_3;
	// System.Single EffectRimPowerCtr::cycle
	float ___cycle_4;
	// UnityEngine.AnimationCurve EffectRimPowerCtr::powerAnimCurve
	AnimationCurve_t3306541151 * ___powerAnimCurve_5;
	// System.Boolean EffectRimPowerCtr::rimpowerGradient
	bool ___rimpowerGradient_6;
	// System.Single EffectRimPowerCtr::rimpowerDelay
	float ___rimpowerDelay_7;
	// System.Single EffectRimPowerCtr::rimcycle
	float ___rimcycle_8;
	// UnityEngine.AnimationCurve EffectRimPowerCtr::rimpowerAnimCurve
	AnimationCurve_t3306541151 * ___rimpowerAnimCurve_9;
	// UnityEngine.Material EffectRimPowerCtr::affectMat
	Material_t193706927 * ___affectMat_10;
	// System.Single EffectRimPowerCtr::powerTime
	float ___powerTime_11;
	// System.Single EffectRimPowerCtr::rimpowerTime
	float ___rimpowerTime_12;
	// System.Int32 EffectRimPowerCtr::nameID
	int32_t ___nameID_13;
	// System.Int32 EffectRimPowerCtr::rimnameID
	int32_t ___rimnameID_14;

public:
	inline static int32_t get_offset_of_powerGradient_2() { return static_cast<int32_t>(offsetof(EffectRimPowerCtr_t3300007053, ___powerGradient_2)); }
	inline bool get_powerGradient_2() const { return ___powerGradient_2; }
	inline bool* get_address_of_powerGradient_2() { return &___powerGradient_2; }
	inline void set_powerGradient_2(bool value)
	{
		___powerGradient_2 = value;
	}

	inline static int32_t get_offset_of_powerDelay_3() { return static_cast<int32_t>(offsetof(EffectRimPowerCtr_t3300007053, ___powerDelay_3)); }
	inline float get_powerDelay_3() const { return ___powerDelay_3; }
	inline float* get_address_of_powerDelay_3() { return &___powerDelay_3; }
	inline void set_powerDelay_3(float value)
	{
		___powerDelay_3 = value;
	}

	inline static int32_t get_offset_of_cycle_4() { return static_cast<int32_t>(offsetof(EffectRimPowerCtr_t3300007053, ___cycle_4)); }
	inline float get_cycle_4() const { return ___cycle_4; }
	inline float* get_address_of_cycle_4() { return &___cycle_4; }
	inline void set_cycle_4(float value)
	{
		___cycle_4 = value;
	}

	inline static int32_t get_offset_of_powerAnimCurve_5() { return static_cast<int32_t>(offsetof(EffectRimPowerCtr_t3300007053, ___powerAnimCurve_5)); }
	inline AnimationCurve_t3306541151 * get_powerAnimCurve_5() const { return ___powerAnimCurve_5; }
	inline AnimationCurve_t3306541151 ** get_address_of_powerAnimCurve_5() { return &___powerAnimCurve_5; }
	inline void set_powerAnimCurve_5(AnimationCurve_t3306541151 * value)
	{
		___powerAnimCurve_5 = value;
		Il2CppCodeGenWriteBarrier(&___powerAnimCurve_5, value);
	}

	inline static int32_t get_offset_of_rimpowerGradient_6() { return static_cast<int32_t>(offsetof(EffectRimPowerCtr_t3300007053, ___rimpowerGradient_6)); }
	inline bool get_rimpowerGradient_6() const { return ___rimpowerGradient_6; }
	inline bool* get_address_of_rimpowerGradient_6() { return &___rimpowerGradient_6; }
	inline void set_rimpowerGradient_6(bool value)
	{
		___rimpowerGradient_6 = value;
	}

	inline static int32_t get_offset_of_rimpowerDelay_7() { return static_cast<int32_t>(offsetof(EffectRimPowerCtr_t3300007053, ___rimpowerDelay_7)); }
	inline float get_rimpowerDelay_7() const { return ___rimpowerDelay_7; }
	inline float* get_address_of_rimpowerDelay_7() { return &___rimpowerDelay_7; }
	inline void set_rimpowerDelay_7(float value)
	{
		___rimpowerDelay_7 = value;
	}

	inline static int32_t get_offset_of_rimcycle_8() { return static_cast<int32_t>(offsetof(EffectRimPowerCtr_t3300007053, ___rimcycle_8)); }
	inline float get_rimcycle_8() const { return ___rimcycle_8; }
	inline float* get_address_of_rimcycle_8() { return &___rimcycle_8; }
	inline void set_rimcycle_8(float value)
	{
		___rimcycle_8 = value;
	}

	inline static int32_t get_offset_of_rimpowerAnimCurve_9() { return static_cast<int32_t>(offsetof(EffectRimPowerCtr_t3300007053, ___rimpowerAnimCurve_9)); }
	inline AnimationCurve_t3306541151 * get_rimpowerAnimCurve_9() const { return ___rimpowerAnimCurve_9; }
	inline AnimationCurve_t3306541151 ** get_address_of_rimpowerAnimCurve_9() { return &___rimpowerAnimCurve_9; }
	inline void set_rimpowerAnimCurve_9(AnimationCurve_t3306541151 * value)
	{
		___rimpowerAnimCurve_9 = value;
		Il2CppCodeGenWriteBarrier(&___rimpowerAnimCurve_9, value);
	}

	inline static int32_t get_offset_of_affectMat_10() { return static_cast<int32_t>(offsetof(EffectRimPowerCtr_t3300007053, ___affectMat_10)); }
	inline Material_t193706927 * get_affectMat_10() const { return ___affectMat_10; }
	inline Material_t193706927 ** get_address_of_affectMat_10() { return &___affectMat_10; }
	inline void set_affectMat_10(Material_t193706927 * value)
	{
		___affectMat_10 = value;
		Il2CppCodeGenWriteBarrier(&___affectMat_10, value);
	}

	inline static int32_t get_offset_of_powerTime_11() { return static_cast<int32_t>(offsetof(EffectRimPowerCtr_t3300007053, ___powerTime_11)); }
	inline float get_powerTime_11() const { return ___powerTime_11; }
	inline float* get_address_of_powerTime_11() { return &___powerTime_11; }
	inline void set_powerTime_11(float value)
	{
		___powerTime_11 = value;
	}

	inline static int32_t get_offset_of_rimpowerTime_12() { return static_cast<int32_t>(offsetof(EffectRimPowerCtr_t3300007053, ___rimpowerTime_12)); }
	inline float get_rimpowerTime_12() const { return ___rimpowerTime_12; }
	inline float* get_address_of_rimpowerTime_12() { return &___rimpowerTime_12; }
	inline void set_rimpowerTime_12(float value)
	{
		___rimpowerTime_12 = value;
	}

	inline static int32_t get_offset_of_nameID_13() { return static_cast<int32_t>(offsetof(EffectRimPowerCtr_t3300007053, ___nameID_13)); }
	inline int32_t get_nameID_13() const { return ___nameID_13; }
	inline int32_t* get_address_of_nameID_13() { return &___nameID_13; }
	inline void set_nameID_13(int32_t value)
	{
		___nameID_13 = value;
	}

	inline static int32_t get_offset_of_rimnameID_14() { return static_cast<int32_t>(offsetof(EffectRimPowerCtr_t3300007053, ___rimnameID_14)); }
	inline int32_t get_rimnameID_14() const { return ___rimnameID_14; }
	inline int32_t* get_address_of_rimnameID_14() { return &___rimnameID_14; }
	inline void set_rimnameID_14(int32_t value)
	{
		___rimnameID_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
