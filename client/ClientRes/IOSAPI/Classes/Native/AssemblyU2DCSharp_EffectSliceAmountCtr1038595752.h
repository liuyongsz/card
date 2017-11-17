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

// EffectSliceAmountCtr
struct  EffectSliceAmountCtr_t1038595752  : public MonoBehaviour_t1158329972
{
public:
	// System.Single EffectSliceAmountCtr::delay
	float ___delay_2;
	// UnityEngine.AnimationCurve EffectSliceAmountCtr::animCurve
	AnimationCurve_t3306541151 * ___animCurve_3;
	// UnityEngine.Material EffectSliceAmountCtr::mat
	Material_t193706927 * ___mat_4;
	// System.Single EffectSliceAmountCtr::time
	float ___time_5;
	// System.Single EffectSliceAmountCtr::endTime
	float ___endTime_6;

public:
	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(EffectSliceAmountCtr_t1038595752, ___delay_2)); }
	inline float get_delay_2() const { return ___delay_2; }
	inline float* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(float value)
	{
		___delay_2 = value;
	}

	inline static int32_t get_offset_of_animCurve_3() { return static_cast<int32_t>(offsetof(EffectSliceAmountCtr_t1038595752, ___animCurve_3)); }
	inline AnimationCurve_t3306541151 * get_animCurve_3() const { return ___animCurve_3; }
	inline AnimationCurve_t3306541151 ** get_address_of_animCurve_3() { return &___animCurve_3; }
	inline void set_animCurve_3(AnimationCurve_t3306541151 * value)
	{
		___animCurve_3 = value;
		Il2CppCodeGenWriteBarrier(&___animCurve_3, value);
	}

	inline static int32_t get_offset_of_mat_4() { return static_cast<int32_t>(offsetof(EffectSliceAmountCtr_t1038595752, ___mat_4)); }
	inline Material_t193706927 * get_mat_4() const { return ___mat_4; }
	inline Material_t193706927 ** get_address_of_mat_4() { return &___mat_4; }
	inline void set_mat_4(Material_t193706927 * value)
	{
		___mat_4 = value;
		Il2CppCodeGenWriteBarrier(&___mat_4, value);
	}

	inline static int32_t get_offset_of_time_5() { return static_cast<int32_t>(offsetof(EffectSliceAmountCtr_t1038595752, ___time_5)); }
	inline float get_time_5() const { return ___time_5; }
	inline float* get_address_of_time_5() { return &___time_5; }
	inline void set_time_5(float value)
	{
		___time_5 = value;
	}

	inline static int32_t get_offset_of_endTime_6() { return static_cast<int32_t>(offsetof(EffectSliceAmountCtr_t1038595752, ___endTime_6)); }
	inline float get_endTime_6() const { return ___endTime_6; }
	inline float* get_address_of_endTime_6() { return &___endTime_6; }
	inline void set_endTime_6(float value)
	{
		___endTime_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
