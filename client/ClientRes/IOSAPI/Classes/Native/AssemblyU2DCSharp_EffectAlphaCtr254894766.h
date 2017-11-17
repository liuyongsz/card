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
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Material
struct Material_t193706927;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EffectAlphaCtr
struct  EffectAlphaCtr_t254894766  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean EffectAlphaCtr::alphaGradient
	bool ___alphaGradient_2;
	// System.Single EffectAlphaCtr::Delay
	float ___Delay_3;
	// System.Single EffectAlphaCtr::Duration
	float ___Duration_4;
	// UnityEngine.AnimationCurve EffectAlphaCtr::alphaAnimCurve
	AnimationCurve_t3306541151 * ___alphaAnimCurve_5;
	// UnityEngine.GameObject EffectAlphaCtr::go
	GameObject_t1756533147 * ___go_6;
	// System.Single EffectAlphaCtr::alphaTime
	float ___alphaTime_7;
	// System.Int32 EffectAlphaCtr::nameID
	int32_t ___nameID_8;
	// System.Boolean EffectAlphaCtr::setToTransparent
	bool ___setToTransparent_9;
	// UnityEngine.Material EffectAlphaCtr::mat
	Material_t193706927 * ___mat_10;

public:
	inline static int32_t get_offset_of_alphaGradient_2() { return static_cast<int32_t>(offsetof(EffectAlphaCtr_t254894766, ___alphaGradient_2)); }
	inline bool get_alphaGradient_2() const { return ___alphaGradient_2; }
	inline bool* get_address_of_alphaGradient_2() { return &___alphaGradient_2; }
	inline void set_alphaGradient_2(bool value)
	{
		___alphaGradient_2 = value;
	}

	inline static int32_t get_offset_of_Delay_3() { return static_cast<int32_t>(offsetof(EffectAlphaCtr_t254894766, ___Delay_3)); }
	inline float get_Delay_3() const { return ___Delay_3; }
	inline float* get_address_of_Delay_3() { return &___Delay_3; }
	inline void set_Delay_3(float value)
	{
		___Delay_3 = value;
	}

	inline static int32_t get_offset_of_Duration_4() { return static_cast<int32_t>(offsetof(EffectAlphaCtr_t254894766, ___Duration_4)); }
	inline float get_Duration_4() const { return ___Duration_4; }
	inline float* get_address_of_Duration_4() { return &___Duration_4; }
	inline void set_Duration_4(float value)
	{
		___Duration_4 = value;
	}

	inline static int32_t get_offset_of_alphaAnimCurve_5() { return static_cast<int32_t>(offsetof(EffectAlphaCtr_t254894766, ___alphaAnimCurve_5)); }
	inline AnimationCurve_t3306541151 * get_alphaAnimCurve_5() const { return ___alphaAnimCurve_5; }
	inline AnimationCurve_t3306541151 ** get_address_of_alphaAnimCurve_5() { return &___alphaAnimCurve_5; }
	inline void set_alphaAnimCurve_5(AnimationCurve_t3306541151 * value)
	{
		___alphaAnimCurve_5 = value;
		Il2CppCodeGenWriteBarrier(&___alphaAnimCurve_5, value);
	}

	inline static int32_t get_offset_of_go_6() { return static_cast<int32_t>(offsetof(EffectAlphaCtr_t254894766, ___go_6)); }
	inline GameObject_t1756533147 * get_go_6() const { return ___go_6; }
	inline GameObject_t1756533147 ** get_address_of_go_6() { return &___go_6; }
	inline void set_go_6(GameObject_t1756533147 * value)
	{
		___go_6 = value;
		Il2CppCodeGenWriteBarrier(&___go_6, value);
	}

	inline static int32_t get_offset_of_alphaTime_7() { return static_cast<int32_t>(offsetof(EffectAlphaCtr_t254894766, ___alphaTime_7)); }
	inline float get_alphaTime_7() const { return ___alphaTime_7; }
	inline float* get_address_of_alphaTime_7() { return &___alphaTime_7; }
	inline void set_alphaTime_7(float value)
	{
		___alphaTime_7 = value;
	}

	inline static int32_t get_offset_of_nameID_8() { return static_cast<int32_t>(offsetof(EffectAlphaCtr_t254894766, ___nameID_8)); }
	inline int32_t get_nameID_8() const { return ___nameID_8; }
	inline int32_t* get_address_of_nameID_8() { return &___nameID_8; }
	inline void set_nameID_8(int32_t value)
	{
		___nameID_8 = value;
	}

	inline static int32_t get_offset_of_setToTransparent_9() { return static_cast<int32_t>(offsetof(EffectAlphaCtr_t254894766, ___setToTransparent_9)); }
	inline bool get_setToTransparent_9() const { return ___setToTransparent_9; }
	inline bool* get_address_of_setToTransparent_9() { return &___setToTransparent_9; }
	inline void set_setToTransparent_9(bool value)
	{
		___setToTransparent_9 = value;
	}

	inline static int32_t get_offset_of_mat_10() { return static_cast<int32_t>(offsetof(EffectAlphaCtr_t254894766, ___mat_10)); }
	inline Material_t193706927 * get_mat_10() const { return ___mat_10; }
	inline Material_t193706927 ** get_address_of_mat_10() { return &___mat_10; }
	inline void set_mat_10(Material_t193706927 * value)
	{
		___mat_10 = value;
		Il2CppCodeGenWriteBarrier(&___mat_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
