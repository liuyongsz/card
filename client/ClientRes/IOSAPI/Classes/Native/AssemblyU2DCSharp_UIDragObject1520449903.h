#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// UIRect
struct UIRect_t4127168124;
// UIPanel
struct UIPanel_t1795085332;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_UIDragObject_DragEffect533639763.h"
#include "UnityEngine_UnityEngine_Plane3727654732.h"
#include "UnityEngine_UnityEngine_Bounds3033363703.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIDragObject
struct  UIDragObject_t1520449903  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform UIDragObject::target
	Transform_t3275118058 * ___target_2;
	// UnityEngine.Vector3 UIDragObject::scrollMomentum
	Vector3_t2243707580  ___scrollMomentum_3;
	// System.Boolean UIDragObject::restrictWithinPanel
	bool ___restrictWithinPanel_4;
	// UIRect UIDragObject::contentRect
	UIRect_t4127168124 * ___contentRect_5;
	// UIDragObject/DragEffect UIDragObject::dragEffect
	int32_t ___dragEffect_6;
	// System.Single UIDragObject::momentumAmount
	float ___momentumAmount_7;
	// UnityEngine.Vector3 UIDragObject::scale
	Vector3_t2243707580  ___scale_8;
	// System.Single UIDragObject::scrollWheelFactor
	float ___scrollWheelFactor_9;
	// UnityEngine.Plane UIDragObject::mPlane
	Plane_t3727654732  ___mPlane_10;
	// UnityEngine.Vector3 UIDragObject::mTargetPos
	Vector3_t2243707580  ___mTargetPos_11;
	// UnityEngine.Vector3 UIDragObject::mLastPos
	Vector3_t2243707580  ___mLastPos_12;
	// UIPanel UIDragObject::mPanel
	UIPanel_t1795085332 * ___mPanel_13;
	// UnityEngine.Vector3 UIDragObject::mMomentum
	Vector3_t2243707580  ___mMomentum_14;
	// UnityEngine.Vector3 UIDragObject::mScroll
	Vector3_t2243707580  ___mScroll_15;
	// UnityEngine.Bounds UIDragObject::mBounds
	Bounds_t3033363703  ___mBounds_16;
	// System.Int32 UIDragObject::mTouchID
	int32_t ___mTouchID_17;
	// System.Boolean UIDragObject::mStarted
	bool ___mStarted_18;
	// System.Boolean UIDragObject::mPressed
	bool ___mPressed_19;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___target_2)); }
	inline Transform_t3275118058 * get_target_2() const { return ___target_2; }
	inline Transform_t3275118058 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3275118058 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_scrollMomentum_3() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___scrollMomentum_3)); }
	inline Vector3_t2243707580  get_scrollMomentum_3() const { return ___scrollMomentum_3; }
	inline Vector3_t2243707580 * get_address_of_scrollMomentum_3() { return &___scrollMomentum_3; }
	inline void set_scrollMomentum_3(Vector3_t2243707580  value)
	{
		___scrollMomentum_3 = value;
	}

	inline static int32_t get_offset_of_restrictWithinPanel_4() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___restrictWithinPanel_4)); }
	inline bool get_restrictWithinPanel_4() const { return ___restrictWithinPanel_4; }
	inline bool* get_address_of_restrictWithinPanel_4() { return &___restrictWithinPanel_4; }
	inline void set_restrictWithinPanel_4(bool value)
	{
		___restrictWithinPanel_4 = value;
	}

	inline static int32_t get_offset_of_contentRect_5() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___contentRect_5)); }
	inline UIRect_t4127168124 * get_contentRect_5() const { return ___contentRect_5; }
	inline UIRect_t4127168124 ** get_address_of_contentRect_5() { return &___contentRect_5; }
	inline void set_contentRect_5(UIRect_t4127168124 * value)
	{
		___contentRect_5 = value;
		Il2CppCodeGenWriteBarrier(&___contentRect_5, value);
	}

	inline static int32_t get_offset_of_dragEffect_6() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___dragEffect_6)); }
	inline int32_t get_dragEffect_6() const { return ___dragEffect_6; }
	inline int32_t* get_address_of_dragEffect_6() { return &___dragEffect_6; }
	inline void set_dragEffect_6(int32_t value)
	{
		___dragEffect_6 = value;
	}

	inline static int32_t get_offset_of_momentumAmount_7() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___momentumAmount_7)); }
	inline float get_momentumAmount_7() const { return ___momentumAmount_7; }
	inline float* get_address_of_momentumAmount_7() { return &___momentumAmount_7; }
	inline void set_momentumAmount_7(float value)
	{
		___momentumAmount_7 = value;
	}

	inline static int32_t get_offset_of_scale_8() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___scale_8)); }
	inline Vector3_t2243707580  get_scale_8() const { return ___scale_8; }
	inline Vector3_t2243707580 * get_address_of_scale_8() { return &___scale_8; }
	inline void set_scale_8(Vector3_t2243707580  value)
	{
		___scale_8 = value;
	}

	inline static int32_t get_offset_of_scrollWheelFactor_9() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___scrollWheelFactor_9)); }
	inline float get_scrollWheelFactor_9() const { return ___scrollWheelFactor_9; }
	inline float* get_address_of_scrollWheelFactor_9() { return &___scrollWheelFactor_9; }
	inline void set_scrollWheelFactor_9(float value)
	{
		___scrollWheelFactor_9 = value;
	}

	inline static int32_t get_offset_of_mPlane_10() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___mPlane_10)); }
	inline Plane_t3727654732  get_mPlane_10() const { return ___mPlane_10; }
	inline Plane_t3727654732 * get_address_of_mPlane_10() { return &___mPlane_10; }
	inline void set_mPlane_10(Plane_t3727654732  value)
	{
		___mPlane_10 = value;
	}

	inline static int32_t get_offset_of_mTargetPos_11() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___mTargetPos_11)); }
	inline Vector3_t2243707580  get_mTargetPos_11() const { return ___mTargetPos_11; }
	inline Vector3_t2243707580 * get_address_of_mTargetPos_11() { return &___mTargetPos_11; }
	inline void set_mTargetPos_11(Vector3_t2243707580  value)
	{
		___mTargetPos_11 = value;
	}

	inline static int32_t get_offset_of_mLastPos_12() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___mLastPos_12)); }
	inline Vector3_t2243707580  get_mLastPos_12() const { return ___mLastPos_12; }
	inline Vector3_t2243707580 * get_address_of_mLastPos_12() { return &___mLastPos_12; }
	inline void set_mLastPos_12(Vector3_t2243707580  value)
	{
		___mLastPos_12 = value;
	}

	inline static int32_t get_offset_of_mPanel_13() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___mPanel_13)); }
	inline UIPanel_t1795085332 * get_mPanel_13() const { return ___mPanel_13; }
	inline UIPanel_t1795085332 ** get_address_of_mPanel_13() { return &___mPanel_13; }
	inline void set_mPanel_13(UIPanel_t1795085332 * value)
	{
		___mPanel_13 = value;
		Il2CppCodeGenWriteBarrier(&___mPanel_13, value);
	}

	inline static int32_t get_offset_of_mMomentum_14() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___mMomentum_14)); }
	inline Vector3_t2243707580  get_mMomentum_14() const { return ___mMomentum_14; }
	inline Vector3_t2243707580 * get_address_of_mMomentum_14() { return &___mMomentum_14; }
	inline void set_mMomentum_14(Vector3_t2243707580  value)
	{
		___mMomentum_14 = value;
	}

	inline static int32_t get_offset_of_mScroll_15() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___mScroll_15)); }
	inline Vector3_t2243707580  get_mScroll_15() const { return ___mScroll_15; }
	inline Vector3_t2243707580 * get_address_of_mScroll_15() { return &___mScroll_15; }
	inline void set_mScroll_15(Vector3_t2243707580  value)
	{
		___mScroll_15 = value;
	}

	inline static int32_t get_offset_of_mBounds_16() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___mBounds_16)); }
	inline Bounds_t3033363703  get_mBounds_16() const { return ___mBounds_16; }
	inline Bounds_t3033363703 * get_address_of_mBounds_16() { return &___mBounds_16; }
	inline void set_mBounds_16(Bounds_t3033363703  value)
	{
		___mBounds_16 = value;
	}

	inline static int32_t get_offset_of_mTouchID_17() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___mTouchID_17)); }
	inline int32_t get_mTouchID_17() const { return ___mTouchID_17; }
	inline int32_t* get_address_of_mTouchID_17() { return &___mTouchID_17; }
	inline void set_mTouchID_17(int32_t value)
	{
		___mTouchID_17 = value;
	}

	inline static int32_t get_offset_of_mStarted_18() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___mStarted_18)); }
	inline bool get_mStarted_18() const { return ___mStarted_18; }
	inline bool* get_address_of_mStarted_18() { return &___mStarted_18; }
	inline void set_mStarted_18(bool value)
	{
		___mStarted_18 = value;
	}

	inline static int32_t get_offset_of_mPressed_19() { return static_cast<int32_t>(offsetof(UIDragObject_t1520449903, ___mPressed_19)); }
	inline bool get_mPressed_19() const { return ___mPressed_19; }
	inline bool* get_address_of_mPressed_19() { return &___mPressed_19; }
	inline void set_mPressed_19(bool value)
	{
		___mPressed_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
