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
// UnityEngine.Renderer
struct Renderer_t257310565;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AlphaCutoffControler
struct  AlphaCutoffControler_t3332506871  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AnimationCurve AlphaCutoffControler::mAnimationCurve
	AnimationCurve_t3306541151 * ___mAnimationCurve_2;
	// System.Single AlphaCutoffControler::mCurveTimes
	float ___mCurveTimes_3;
	// System.Single AlphaCutoffControler::mFactor
	float ___mFactor_4;
	// UnityEngine.Renderer AlphaCutoffControler::mRender
	Renderer_t257310565 * ___mRender_5;

public:
	inline static int32_t get_offset_of_mAnimationCurve_2() { return static_cast<int32_t>(offsetof(AlphaCutoffControler_t3332506871, ___mAnimationCurve_2)); }
	inline AnimationCurve_t3306541151 * get_mAnimationCurve_2() const { return ___mAnimationCurve_2; }
	inline AnimationCurve_t3306541151 ** get_address_of_mAnimationCurve_2() { return &___mAnimationCurve_2; }
	inline void set_mAnimationCurve_2(AnimationCurve_t3306541151 * value)
	{
		___mAnimationCurve_2 = value;
		Il2CppCodeGenWriteBarrier(&___mAnimationCurve_2, value);
	}

	inline static int32_t get_offset_of_mCurveTimes_3() { return static_cast<int32_t>(offsetof(AlphaCutoffControler_t3332506871, ___mCurveTimes_3)); }
	inline float get_mCurveTimes_3() const { return ___mCurveTimes_3; }
	inline float* get_address_of_mCurveTimes_3() { return &___mCurveTimes_3; }
	inline void set_mCurveTimes_3(float value)
	{
		___mCurveTimes_3 = value;
	}

	inline static int32_t get_offset_of_mFactor_4() { return static_cast<int32_t>(offsetof(AlphaCutoffControler_t3332506871, ___mFactor_4)); }
	inline float get_mFactor_4() const { return ___mFactor_4; }
	inline float* get_address_of_mFactor_4() { return &___mFactor_4; }
	inline void set_mFactor_4(float value)
	{
		___mFactor_4 = value;
	}

	inline static int32_t get_offset_of_mRender_5() { return static_cast<int32_t>(offsetof(AlphaCutoffControler_t3332506871, ___mRender_5)); }
	inline Renderer_t257310565 * get_mRender_5() const { return ___mRender_5; }
	inline Renderer_t257310565 ** get_address_of_mRender_5() { return &___mRender_5; }
	inline void set_mRender_5(Renderer_t257310565 * value)
	{
		___mRender_5 = value;
		Il2CppCodeGenWriteBarrier(&___mRender_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
