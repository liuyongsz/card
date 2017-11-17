#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SpringPanel
struct SpringPanel_t2962744957;
// SpringPanel/OnFinished
struct OnFinished_t3595288269;
// UIPanel
struct UIPanel_t1795085332;
// UnityEngine.Transform
struct Transform_t3275118058;
// UIScrollView
struct UIScrollView_t3033954930;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpringPanel
struct  SpringPanel_t2962744957  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 SpringPanel::target
	Vector3_t2243707580  ___target_3;
	// System.Single SpringPanel::strength
	float ___strength_4;
	// SpringPanel/OnFinished SpringPanel::onFinished
	OnFinished_t3595288269 * ___onFinished_5;
	// UIPanel SpringPanel::mPanel
	UIPanel_t1795085332 * ___mPanel_6;
	// UnityEngine.Transform SpringPanel::mTrans
	Transform_t3275118058 * ___mTrans_7;
	// System.Single SpringPanel::mThreshold
	float ___mThreshold_8;
	// UIScrollView SpringPanel::mDrag
	UIScrollView_t3033954930 * ___mDrag_9;

public:
	inline static int32_t get_offset_of_target_3() { return static_cast<int32_t>(offsetof(SpringPanel_t2962744957, ___target_3)); }
	inline Vector3_t2243707580  get_target_3() const { return ___target_3; }
	inline Vector3_t2243707580 * get_address_of_target_3() { return &___target_3; }
	inline void set_target_3(Vector3_t2243707580  value)
	{
		___target_3 = value;
	}

	inline static int32_t get_offset_of_strength_4() { return static_cast<int32_t>(offsetof(SpringPanel_t2962744957, ___strength_4)); }
	inline float get_strength_4() const { return ___strength_4; }
	inline float* get_address_of_strength_4() { return &___strength_4; }
	inline void set_strength_4(float value)
	{
		___strength_4 = value;
	}

	inline static int32_t get_offset_of_onFinished_5() { return static_cast<int32_t>(offsetof(SpringPanel_t2962744957, ___onFinished_5)); }
	inline OnFinished_t3595288269 * get_onFinished_5() const { return ___onFinished_5; }
	inline OnFinished_t3595288269 ** get_address_of_onFinished_5() { return &___onFinished_5; }
	inline void set_onFinished_5(OnFinished_t3595288269 * value)
	{
		___onFinished_5 = value;
		Il2CppCodeGenWriteBarrier(&___onFinished_5, value);
	}

	inline static int32_t get_offset_of_mPanel_6() { return static_cast<int32_t>(offsetof(SpringPanel_t2962744957, ___mPanel_6)); }
	inline UIPanel_t1795085332 * get_mPanel_6() const { return ___mPanel_6; }
	inline UIPanel_t1795085332 ** get_address_of_mPanel_6() { return &___mPanel_6; }
	inline void set_mPanel_6(UIPanel_t1795085332 * value)
	{
		___mPanel_6 = value;
		Il2CppCodeGenWriteBarrier(&___mPanel_6, value);
	}

	inline static int32_t get_offset_of_mTrans_7() { return static_cast<int32_t>(offsetof(SpringPanel_t2962744957, ___mTrans_7)); }
	inline Transform_t3275118058 * get_mTrans_7() const { return ___mTrans_7; }
	inline Transform_t3275118058 ** get_address_of_mTrans_7() { return &___mTrans_7; }
	inline void set_mTrans_7(Transform_t3275118058 * value)
	{
		___mTrans_7 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_7, value);
	}

	inline static int32_t get_offset_of_mThreshold_8() { return static_cast<int32_t>(offsetof(SpringPanel_t2962744957, ___mThreshold_8)); }
	inline float get_mThreshold_8() const { return ___mThreshold_8; }
	inline float* get_address_of_mThreshold_8() { return &___mThreshold_8; }
	inline void set_mThreshold_8(float value)
	{
		___mThreshold_8 = value;
	}

	inline static int32_t get_offset_of_mDrag_9() { return static_cast<int32_t>(offsetof(SpringPanel_t2962744957, ___mDrag_9)); }
	inline UIScrollView_t3033954930 * get_mDrag_9() const { return ___mDrag_9; }
	inline UIScrollView_t3033954930 ** get_address_of_mDrag_9() { return &___mDrag_9; }
	inline void set_mDrag_9(UIScrollView_t3033954930 * value)
	{
		___mDrag_9 = value;
		Il2CppCodeGenWriteBarrier(&___mDrag_9, value);
	}
};

struct SpringPanel_t2962744957_StaticFields
{
public:
	// SpringPanel SpringPanel::current
	SpringPanel_t2962744957 * ___current_2;

public:
	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(SpringPanel_t2962744957_StaticFields, ___current_2)); }
	inline SpringPanel_t2962744957 * get_current_2() const { return ___current_2; }
	inline SpringPanel_t2962744957 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(SpringPanel_t2962744957 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier(&___current_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
