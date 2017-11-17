#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SpringPanel/OnFinished
struct OnFinished_t3595288269;
// UIScrollView
struct UIScrollView_t3033954930;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UICenterOnChild
struct  UICenterOnChild_t1687745660  : public MonoBehaviour_t1158329972
{
public:
	// System.Single UICenterOnChild::springStrength
	float ___springStrength_2;
	// System.Single UICenterOnChild::nextPageThreshold
	float ___nextPageThreshold_3;
	// SpringPanel/OnFinished UICenterOnChild::onFinished
	OnFinished_t3595288269 * ___onFinished_4;
	// UIScrollView UICenterOnChild::mScrollView
	UIScrollView_t3033954930 * ___mScrollView_5;
	// UnityEngine.GameObject UICenterOnChild::mCenteredObject
	GameObject_t1756533147 * ___mCenteredObject_6;

public:
	inline static int32_t get_offset_of_springStrength_2() { return static_cast<int32_t>(offsetof(UICenterOnChild_t1687745660, ___springStrength_2)); }
	inline float get_springStrength_2() const { return ___springStrength_2; }
	inline float* get_address_of_springStrength_2() { return &___springStrength_2; }
	inline void set_springStrength_2(float value)
	{
		___springStrength_2 = value;
	}

	inline static int32_t get_offset_of_nextPageThreshold_3() { return static_cast<int32_t>(offsetof(UICenterOnChild_t1687745660, ___nextPageThreshold_3)); }
	inline float get_nextPageThreshold_3() const { return ___nextPageThreshold_3; }
	inline float* get_address_of_nextPageThreshold_3() { return &___nextPageThreshold_3; }
	inline void set_nextPageThreshold_3(float value)
	{
		___nextPageThreshold_3 = value;
	}

	inline static int32_t get_offset_of_onFinished_4() { return static_cast<int32_t>(offsetof(UICenterOnChild_t1687745660, ___onFinished_4)); }
	inline OnFinished_t3595288269 * get_onFinished_4() const { return ___onFinished_4; }
	inline OnFinished_t3595288269 ** get_address_of_onFinished_4() { return &___onFinished_4; }
	inline void set_onFinished_4(OnFinished_t3595288269 * value)
	{
		___onFinished_4 = value;
		Il2CppCodeGenWriteBarrier(&___onFinished_4, value);
	}

	inline static int32_t get_offset_of_mScrollView_5() { return static_cast<int32_t>(offsetof(UICenterOnChild_t1687745660, ___mScrollView_5)); }
	inline UIScrollView_t3033954930 * get_mScrollView_5() const { return ___mScrollView_5; }
	inline UIScrollView_t3033954930 ** get_address_of_mScrollView_5() { return &___mScrollView_5; }
	inline void set_mScrollView_5(UIScrollView_t3033954930 * value)
	{
		___mScrollView_5 = value;
		Il2CppCodeGenWriteBarrier(&___mScrollView_5, value);
	}

	inline static int32_t get_offset_of_mCenteredObject_6() { return static_cast<int32_t>(offsetof(UICenterOnChild_t1687745660, ___mCenteredObject_6)); }
	inline GameObject_t1756533147 * get_mCenteredObject_6() const { return ___mCenteredObject_6; }
	inline GameObject_t1756533147 ** get_address_of_mCenteredObject_6() { return &___mCenteredObject_6; }
	inline void set_mCenteredObject_6(GameObject_t1756533147 * value)
	{
		___mCenteredObject_6 = value;
		Il2CppCodeGenWriteBarrier(&___mCenteredObject_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
