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
// UnityEngine.Camera
struct Camera_t189460977;
// UIRoot
struct UIRoot_t389944298;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_UIDragObject_DragEffect533639763.h"
#include "UnityEngine_UnityEngine_Bounds3033363703.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIDraggableCamera
struct  UIDraggableCamera_t2562792962  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform UIDraggableCamera::rootForBounds
	Transform_t3275118058 * ___rootForBounds_2;
	// UnityEngine.Vector2 UIDraggableCamera::scale
	Vector2_t2243707579  ___scale_3;
	// System.Single UIDraggableCamera::scrollWheelFactor
	float ___scrollWheelFactor_4;
	// UIDragObject/DragEffect UIDraggableCamera::dragEffect
	int32_t ___dragEffect_5;
	// System.Boolean UIDraggableCamera::smoothDragStart
	bool ___smoothDragStart_6;
	// System.Single UIDraggableCamera::momentumAmount
	float ___momentumAmount_7;
	// UnityEngine.Camera UIDraggableCamera::mCam
	Camera_t189460977 * ___mCam_8;
	// UnityEngine.Transform UIDraggableCamera::mTrans
	Transform_t3275118058 * ___mTrans_9;
	// System.Boolean UIDraggableCamera::mPressed
	bool ___mPressed_10;
	// UnityEngine.Vector2 UIDraggableCamera::mMomentum
	Vector2_t2243707579  ___mMomentum_11;
	// UnityEngine.Bounds UIDraggableCamera::mBounds
	Bounds_t3033363703  ___mBounds_12;
	// System.Single UIDraggableCamera::mScroll
	float ___mScroll_13;
	// UIRoot UIDraggableCamera::mRoot
	UIRoot_t389944298 * ___mRoot_14;
	// System.Boolean UIDraggableCamera::mDragStarted
	bool ___mDragStarted_15;

public:
	inline static int32_t get_offset_of_rootForBounds_2() { return static_cast<int32_t>(offsetof(UIDraggableCamera_t2562792962, ___rootForBounds_2)); }
	inline Transform_t3275118058 * get_rootForBounds_2() const { return ___rootForBounds_2; }
	inline Transform_t3275118058 ** get_address_of_rootForBounds_2() { return &___rootForBounds_2; }
	inline void set_rootForBounds_2(Transform_t3275118058 * value)
	{
		___rootForBounds_2 = value;
		Il2CppCodeGenWriteBarrier(&___rootForBounds_2, value);
	}

	inline static int32_t get_offset_of_scale_3() { return static_cast<int32_t>(offsetof(UIDraggableCamera_t2562792962, ___scale_3)); }
	inline Vector2_t2243707579  get_scale_3() const { return ___scale_3; }
	inline Vector2_t2243707579 * get_address_of_scale_3() { return &___scale_3; }
	inline void set_scale_3(Vector2_t2243707579  value)
	{
		___scale_3 = value;
	}

	inline static int32_t get_offset_of_scrollWheelFactor_4() { return static_cast<int32_t>(offsetof(UIDraggableCamera_t2562792962, ___scrollWheelFactor_4)); }
	inline float get_scrollWheelFactor_4() const { return ___scrollWheelFactor_4; }
	inline float* get_address_of_scrollWheelFactor_4() { return &___scrollWheelFactor_4; }
	inline void set_scrollWheelFactor_4(float value)
	{
		___scrollWheelFactor_4 = value;
	}

	inline static int32_t get_offset_of_dragEffect_5() { return static_cast<int32_t>(offsetof(UIDraggableCamera_t2562792962, ___dragEffect_5)); }
	inline int32_t get_dragEffect_5() const { return ___dragEffect_5; }
	inline int32_t* get_address_of_dragEffect_5() { return &___dragEffect_5; }
	inline void set_dragEffect_5(int32_t value)
	{
		___dragEffect_5 = value;
	}

	inline static int32_t get_offset_of_smoothDragStart_6() { return static_cast<int32_t>(offsetof(UIDraggableCamera_t2562792962, ___smoothDragStart_6)); }
	inline bool get_smoothDragStart_6() const { return ___smoothDragStart_6; }
	inline bool* get_address_of_smoothDragStart_6() { return &___smoothDragStart_6; }
	inline void set_smoothDragStart_6(bool value)
	{
		___smoothDragStart_6 = value;
	}

	inline static int32_t get_offset_of_momentumAmount_7() { return static_cast<int32_t>(offsetof(UIDraggableCamera_t2562792962, ___momentumAmount_7)); }
	inline float get_momentumAmount_7() const { return ___momentumAmount_7; }
	inline float* get_address_of_momentumAmount_7() { return &___momentumAmount_7; }
	inline void set_momentumAmount_7(float value)
	{
		___momentumAmount_7 = value;
	}

	inline static int32_t get_offset_of_mCam_8() { return static_cast<int32_t>(offsetof(UIDraggableCamera_t2562792962, ___mCam_8)); }
	inline Camera_t189460977 * get_mCam_8() const { return ___mCam_8; }
	inline Camera_t189460977 ** get_address_of_mCam_8() { return &___mCam_8; }
	inline void set_mCam_8(Camera_t189460977 * value)
	{
		___mCam_8 = value;
		Il2CppCodeGenWriteBarrier(&___mCam_8, value);
	}

	inline static int32_t get_offset_of_mTrans_9() { return static_cast<int32_t>(offsetof(UIDraggableCamera_t2562792962, ___mTrans_9)); }
	inline Transform_t3275118058 * get_mTrans_9() const { return ___mTrans_9; }
	inline Transform_t3275118058 ** get_address_of_mTrans_9() { return &___mTrans_9; }
	inline void set_mTrans_9(Transform_t3275118058 * value)
	{
		___mTrans_9 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_9, value);
	}

	inline static int32_t get_offset_of_mPressed_10() { return static_cast<int32_t>(offsetof(UIDraggableCamera_t2562792962, ___mPressed_10)); }
	inline bool get_mPressed_10() const { return ___mPressed_10; }
	inline bool* get_address_of_mPressed_10() { return &___mPressed_10; }
	inline void set_mPressed_10(bool value)
	{
		___mPressed_10 = value;
	}

	inline static int32_t get_offset_of_mMomentum_11() { return static_cast<int32_t>(offsetof(UIDraggableCamera_t2562792962, ___mMomentum_11)); }
	inline Vector2_t2243707579  get_mMomentum_11() const { return ___mMomentum_11; }
	inline Vector2_t2243707579 * get_address_of_mMomentum_11() { return &___mMomentum_11; }
	inline void set_mMomentum_11(Vector2_t2243707579  value)
	{
		___mMomentum_11 = value;
	}

	inline static int32_t get_offset_of_mBounds_12() { return static_cast<int32_t>(offsetof(UIDraggableCamera_t2562792962, ___mBounds_12)); }
	inline Bounds_t3033363703  get_mBounds_12() const { return ___mBounds_12; }
	inline Bounds_t3033363703 * get_address_of_mBounds_12() { return &___mBounds_12; }
	inline void set_mBounds_12(Bounds_t3033363703  value)
	{
		___mBounds_12 = value;
	}

	inline static int32_t get_offset_of_mScroll_13() { return static_cast<int32_t>(offsetof(UIDraggableCamera_t2562792962, ___mScroll_13)); }
	inline float get_mScroll_13() const { return ___mScroll_13; }
	inline float* get_address_of_mScroll_13() { return &___mScroll_13; }
	inline void set_mScroll_13(float value)
	{
		___mScroll_13 = value;
	}

	inline static int32_t get_offset_of_mRoot_14() { return static_cast<int32_t>(offsetof(UIDraggableCamera_t2562792962, ___mRoot_14)); }
	inline UIRoot_t389944298 * get_mRoot_14() const { return ___mRoot_14; }
	inline UIRoot_t389944298 ** get_address_of_mRoot_14() { return &___mRoot_14; }
	inline void set_mRoot_14(UIRoot_t389944298 * value)
	{
		___mRoot_14 = value;
		Il2CppCodeGenWriteBarrier(&___mRoot_14, value);
	}

	inline static int32_t get_offset_of_mDragStarted_15() { return static_cast<int32_t>(offsetof(UIDraggableCamera_t2562792962, ___mDragStarted_15)); }
	inline bool get_mDragStarted_15() const { return ___mDragStarted_15; }
	inline bool* get_address_of_mDragStarted_15() { return &___mDragStarted_15; }
	inline void set_mDragStarted_15(bool value)
	{
		___mDragStarted_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
