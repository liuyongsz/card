#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t69676727;
// HighlightingSystem.Highlighter
struct Highlighter_t958778585;
// TweenLayerUtil
struct TweenLayerUtil_t1100282932;

#include "AssemblyU2DCSharp_CardBase1055729283.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CardRole
struct  CardRole_t1983515686  : public CardBase_t1055729283
{
public:
	// UnityEngine.Animator CardRole::mAnimator
	Animator_t69676727 * ___mAnimator_2;
	// HighlightingSystem.Highlighter CardRole::mHighlight
	Highlighter_t958778585 * ___mHighlight_3;
	// TweenLayerUtil CardRole::mTween
	TweenLayerUtil_t1100282932 * ___mTween_4;

public:
	inline static int32_t get_offset_of_mAnimator_2() { return static_cast<int32_t>(offsetof(CardRole_t1983515686, ___mAnimator_2)); }
	inline Animator_t69676727 * get_mAnimator_2() const { return ___mAnimator_2; }
	inline Animator_t69676727 ** get_address_of_mAnimator_2() { return &___mAnimator_2; }
	inline void set_mAnimator_2(Animator_t69676727 * value)
	{
		___mAnimator_2 = value;
		Il2CppCodeGenWriteBarrier(&___mAnimator_2, value);
	}

	inline static int32_t get_offset_of_mHighlight_3() { return static_cast<int32_t>(offsetof(CardRole_t1983515686, ___mHighlight_3)); }
	inline Highlighter_t958778585 * get_mHighlight_3() const { return ___mHighlight_3; }
	inline Highlighter_t958778585 ** get_address_of_mHighlight_3() { return &___mHighlight_3; }
	inline void set_mHighlight_3(Highlighter_t958778585 * value)
	{
		___mHighlight_3 = value;
		Il2CppCodeGenWriteBarrier(&___mHighlight_3, value);
	}

	inline static int32_t get_offset_of_mTween_4() { return static_cast<int32_t>(offsetof(CardRole_t1983515686, ___mTween_4)); }
	inline TweenLayerUtil_t1100282932 * get_mTween_4() const { return ___mTween_4; }
	inline TweenLayerUtil_t1100282932 ** get_address_of_mTween_4() { return &___mTween_4; }
	inline void set_mTween_4(TweenLayerUtil_t1100282932 * value)
	{
		___mTween_4 = value;
		Il2CppCodeGenWriteBarrier(&___mTween_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
