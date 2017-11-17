#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationClip
struct AnimationClip_t3510324950;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AnimationSpeed
struct  AnimationSpeed_t2648609651  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AnimationClip AnimationSpeed::anim
	AnimationClip_t3510324950 * ___anim_2;
	// System.Single AnimationSpeed::speedAnim
	float ___speedAnim_3;

public:
	inline static int32_t get_offset_of_anim_2() { return static_cast<int32_t>(offsetof(AnimationSpeed_t2648609651, ___anim_2)); }
	inline AnimationClip_t3510324950 * get_anim_2() const { return ___anim_2; }
	inline AnimationClip_t3510324950 ** get_address_of_anim_2() { return &___anim_2; }
	inline void set_anim_2(AnimationClip_t3510324950 * value)
	{
		___anim_2 = value;
		Il2CppCodeGenWriteBarrier(&___anim_2, value);
	}

	inline static int32_t get_offset_of_speedAnim_3() { return static_cast<int32_t>(offsetof(AnimationSpeed_t2648609651, ___speedAnim_3)); }
	inline float get_speedAnim_3() const { return ___speedAnim_3; }
	inline float* get_address_of_speedAnim_3() { return &___speedAnim_3; }
	inline void set_speedAnim_3(float value)
	{
		___speedAnim_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
