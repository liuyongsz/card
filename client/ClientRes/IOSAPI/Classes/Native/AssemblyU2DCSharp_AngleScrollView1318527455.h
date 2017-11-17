#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BetterList`1<AngleScrollView>
struct BetterList_1_t1538916097;
// UIProgressBar
struct UIProgressBar_t3824507790;
// AngleScrollView/OnDragFinished
struct OnDragFinished_t2709639099;
// UnityEngine.Transform
struct Transform_t3275118058;
// UIPanel
struct UIPanel_t1795085332;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_AngleScrollView_Movement1693976811.h"
#include "AssemblyU2DCSharp_AngleScrollView_DragEffect2276165707.h"
#include "AssemblyU2DCSharp_AngleScrollView_ShowCondition629674894.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_UIWidget_Pivot752586349.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Plane3727654732.h"
#include "UnityEngine_UnityEngine_Bounds3033363703.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AngleScrollView
struct  AngleScrollView_t1318527455  : public MonoBehaviour_t1158329972
{
public:
	// System.Single AngleScrollView::distance
	float ___distance_3;
	// AngleScrollView/Movement AngleScrollView::movement
	int32_t ___movement_4;
	// AngleScrollView/DragEffect AngleScrollView::dragEffect
	int32_t ___dragEffect_5;
	// System.Boolean AngleScrollView::restrictWithinPanel
	bool ___restrictWithinPanel_6;
	// System.Boolean AngleScrollView::disableDragIfFits
	bool ___disableDragIfFits_7;
	// System.Boolean AngleScrollView::smoothDragStart
	bool ___smoothDragStart_8;
	// System.Boolean AngleScrollView::iOSDragEmulation
	bool ___iOSDragEmulation_9;
	// System.Single AngleScrollView::scrollWheelFactor
	float ___scrollWheelFactor_10;
	// System.Single AngleScrollView::momentumAmount
	float ___momentumAmount_11;
	// UIProgressBar AngleScrollView::horizontalScrollBar
	UIProgressBar_t3824507790 * ___horizontalScrollBar_12;
	// UIProgressBar AngleScrollView::verticalScrollBar
	UIProgressBar_t3824507790 * ___verticalScrollBar_13;
	// AngleScrollView/ShowCondition AngleScrollView::showScrollBars
	int32_t ___showScrollBars_14;
	// UnityEngine.Vector2 AngleScrollView::customMovement
	Vector2_t2243707579  ___customMovement_15;
	// UIWidget/Pivot AngleScrollView::contentPivot
	int32_t ___contentPivot_16;
	// AngleScrollView/OnDragFinished AngleScrollView::onDragFinished
	OnDragFinished_t2709639099 * ___onDragFinished_17;
	// UnityEngine.Vector3 AngleScrollView::scale
	Vector3_t2243707580  ___scale_18;
	// UnityEngine.Vector2 AngleScrollView::relativePositionOnReset
	Vector2_t2243707579  ___relativePositionOnReset_19;
	// UnityEngine.Transform AngleScrollView::mTrans
	Transform_t3275118058 * ___mTrans_20;
	// UIPanel AngleScrollView::mPanel
	UIPanel_t1795085332 * ___mPanel_21;
	// UnityEngine.Plane AngleScrollView::mPlane
	Plane_t3727654732  ___mPlane_22;
	// UnityEngine.Vector3 AngleScrollView::mLastPos
	Vector3_t2243707580  ___mLastPos_23;
	// System.Boolean AngleScrollView::mPressed
	bool ___mPressed_24;
	// UnityEngine.Vector3 AngleScrollView::mMomentum
	Vector3_t2243707580  ___mMomentum_25;
	// System.Single AngleScrollView::mScroll
	float ___mScroll_26;
	// UnityEngine.Bounds AngleScrollView::mBounds
	Bounds_t3033363703  ___mBounds_27;
	// System.Boolean AngleScrollView::mCalculatedBounds
	bool ___mCalculatedBounds_28;
	// System.Boolean AngleScrollView::mShouldMove
	bool ___mShouldMove_29;
	// System.Boolean AngleScrollView::mIgnoreCallbacks
	bool ___mIgnoreCallbacks_30;
	// System.Int32 AngleScrollView::mDragID
	int32_t ___mDragID_31;
	// UnityEngine.Vector2 AngleScrollView::mDragStartOffset
	Vector2_t2243707579  ___mDragStartOffset_32;
	// System.Boolean AngleScrollView::mDragStarted
	bool ___mDragStarted_33;
	// System.Boolean AngleScrollView::mSpring
	bool ___mSpring_34;
	// System.Boolean AngleScrollView::mRuning
	bool ___mRuning_35;

public:
	inline static int32_t get_offset_of_distance_3() { return static_cast<int32_t>(offsetof(AngleScrollView_t1318527455, ___distance_3)); }
	inline float get_distance_3() const { return ___distance_3; }
	inline float* get_address_of_distance_3() { return &___distance_3; }
	inline void set_distance_3(float value)
	{
		___distance_3 = value;
	}

	inline static int32_t get_offset_of_movement_4() { return static_cast<int32_t>(offsetof(AngleScrollView_t1318527455, ___movement_4)); }
	inline int32_t get_movement_4() const { return ___movement_4; }
	inline int32_t* get_address_of_movement_4() { return &___movement_4; }
	inline void set_movement_4(int32_t value)
	{
		___movement_4 = value;
	}

	inline static int32_t get_offset_of_dragEffect_5() { return static_cast<int32_t>(offsetof(AngleScrollView_t1318527455, ___dragEffect_5)); }
	inline int32_t get_dragEffect_5() const { return ___dragEffect_5; }
	inline int32_t* get_address_of_dragEffect_5() { return &___dragEffect_5; }
	inline void set_dragEffect_5(int32_t value)
	{
		___dragEffect_5 = value;
	}

	inline static int32_t get_offset_of_restrictWithinPanel_6() { return static_cast<int32_t>(offsetof(AngleScrollView_t1318527455, ___restrictWithinPanel_6)); }
	inline bool get_restrictWithinPanel_6() const { return ___restrictWithinPanel_6; }
	inline bool* get_address_of_restrictWithinPanel_6() { return &___restrictWithinPanel_6; }
	inline void set_restrictWithinPanel_6(bool value)
	{
		___restrictWithinPanel_6 = value;
	}

	inline static int32_t get_offset_of_disableDragIfFits_7() { return static_cast<int32_t>(offsetof(AngleScrollView_t1318527455, ___disableDragIfFits_7)); }
	inline bool get_disableDragIfFits_7() const { return ___disableDragIfFits_7; }
	inline bool* get_address_of_disableDragIfFits_7() { return &___disableDragIfFits_7; }
	inline void set_disableDragIfFits_7(bool value)
	{
		___disableDragIfFits_7 = value;
	}

	inline static int32_t get_offset_of_smoothDragStart_8() { return static_cast<int32_t>(offsetof(AngleScrollView_t1318527455, ___smoothDragStart_8)); }
	inline bool get_smoothDragStart_8() const { return ___smoothDragStart_8; }
	inline bool* get_address_of_smoothDragStart_8() { return &___smoothDragStart_8; }
	inline void set_smoothDragStart_8(bool value)
	{
		___smoothDragStart_8 = value;
	}

	inline static int32_t get_offset_of_iOSDragEmulation_9() { return static_cast<int32_t>(offsetof(AngleScrollView_t1318527455, ___iOSDragEmulation_9)); }
	inline bool get_iOSDragEmulation_9() const { return ___iOSDragEmulation_9; }
	inline bool* get_address_of_iOSDragEmulation_9() { return &___iOSDragEmulation_9; }
	inline void set_iOSDragEmulation_9(bool value)
	{
		___iOSDragEmulation_9 = value;
	}

	inline static int32_t get_offset_of_scrollWheelFactor_10() { return static_cast<int32_t>(offsetof(AngleScrollView_t1318527455, ___scrollWheelFactor_10)); }
	inline float get_scrollWheelFactor_10() const { return ___scrollWheelFactor_10; }
	inline float* get_address_of_scrollWheelFactor_10() { return &___scrollWheelFactor_10; }
	inline void set_scrollWheelFactor_10(float value)
	{
		___scrollWheelFactor_10 = value;
	}

	inline static int32_t get_offset_of_momentumAmount_11() { return static_cast<int32_t>(offsetof(AngleScrollView_t1318527455, ___momentumAmount_11)); }
	inline float get_momentumAmount_11() const { return ___momentumAmount_11; }
	inline float* get_address_of_momentumAmount_11() { return &___momentumAmount_11; }
	inline void set_momentumAmount_11(float value)
	{
		___momentumAmount_11 = value;
	}

	inline static int32_t get_offset_of_horizontalScrollBar_12() { return static_cast<int32_t>(offsetof(AngleScrollView_t1318527455, ___horizontalScrollBar_12)); }
	inline UIProgressBar_t3824507790 * get_horizontalScrollBar_12() const { return ___horizontalScrollBar_12; }
	inline UIProgressBar_t3824507790 ** get_address_of_horizontalScrollBar_12() { return &___horizontalScrollBar_12; }
	inline void set_horizontalScrollBar_12(UIProgressBar_t3824507790 * value)
	{
		___horizontalScrollBar_12 = value;
		Il2CppCodeGenWriteBarrier(&___horizontalScrollBar_12, value);
	}

	inline static int32_t get_offset_of_verticalScrollBar_13() { return static_cast<int32_t>(offsetof(AngleScrollView_t1318527455, ___verticalScrollBar_13)); }
	inline UIProgressBar_t3824507790 * get_verticalScrollBar_13() const { return ___verticalScrollBar_13; }
	inline UIProgressBar_t3824507790 ** get_address_of_verticalScrollBar_13() { return &___verticalScrollBar_13; }
	inline void set_verticalScrollBar_13(UIProgressBar_t3824507790 * value)
	{
		___verticalScrollBar_13 = value;
		Il2CppCodeGenWriteBarrier(&___verticalScrollBar_13, value);
	}

	inline static int32_t get_offset_of_showScrollBars_14() { return static_cast<int32_t>(offsetof(AngleScrollView_t1318527455, ___showScrollBars_14)); }
	inline int32_t get_showScrollBars_14() const { return ___showScrollBars_14; }
	inline int32_t* get_address_of_showScrollBars_14() { return &___showScrollBars_14; }
	inline void set_showScrollBars_14(int32_t value)
	{
		___showScrollBars_14 = value;
	}

	inline static int32_t get_offset_of_customMovement_15() { return static_cast<int32_t>(offsetof(AngleScrollView_t1318527455, ___customMovement_15)); }
	inline Vector2_t2243707579  get_customMovement_15() const { return ___customMovement_15; }
	inline Vector2_t2243707579 * get_address_of_customMovement_15() { return &___customMovement_15; }
	inline void set_customMovement_15(Vector2_t2243707579  value)
	{
		___customMovement_15 = value;
	}

	inline static int32_t get_offset_of_contentPivot_16() { return static_cast<int32_t>(offsetof(AngleScrollView_t1318527455, ___contentPivot_16)); }
	inline int32_t get_contentPivot_16() const { return ___contentPivot_16; }
	inline int32_t* get_address_of_contentPivot_16() { return &___contentPivot_16; }
	inline void set_contentPivot_16(int32_t value)
	{
		___contentPivot_16 = value;
	}

	inline static int32_t get_offset_of_onDragFinished_17() { return static_cast<int32_t>(offsetof(AngleScrollView_t1318527455, ___onDragFinished_17)); }
	inline OnDragFinished_t2709639099 * get_onDragFinished_17() const { return ___onDragFinished_17; }
	inline OnDragFinished_t2709639099 ** get_address_of_onDragFinished_17() { return &___onDragFinished_17; }
	inline void set_onDragFinished_17(OnDragFinished_t2709639099 * value)
	{
		___onDragFinished_17 = value;
		Il2CppCodeGenWriteBarrier(&___onDragFinished_17, value);
	}

	inline static int32_t get_offset_of_scale_18() { return static_cast<int32_t>(offsetof(AngleScrollView_t1318527455, ___scale_18)); }
	inline Vector3_t2243707580  get_scale_18() const { return ___scale_18; }
	inline Vector3_t2243707580 * get_address_of_scale_18() { return &___scale_18; }
	inline void set_scale_18(Vector3_t2243707580  value)
	{
		___scale_18 = value;
	}

	inline static int32_t get_offset_of_relativePositionOnReset_19() { return static_cast<int32_t>(offsetof(AngleScrollView_t1318527455, ___relativePositionOnReset_19)); }
	inline Vector2_t2243707579  get_relativePositionOnReset_19() const { return ___relativePositionOnReset_19; }
	inline Vector2_t2243707579 * get_address_of_relativePositionOnReset_19() { return &___relativePositionOnReset_19; }
	inline void set_relativePositionOnReset_19(Vector2_t2243707579  value)
	{
		___relativePositionOnReset_19 = value;
	}

	inline static int32_t get_offset_of_mTrans_20() { return static_cast<int32_t>(offsetof(AngleScrollView_t1318527455, ___mTrans_20)); }
	inline Transform_t3275118058 * get_mTrans_20() const { return ___mTrans_20; }
	inline Transform_t3275118058 ** get_address_of_mTrans_20() { return &___mTrans_20; }
	inline void set_mTrans_20(Transform_t3275118058 * value)
	{
		___mTrans_20 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_20, value);
	}

	inline static int32_t get_offset_of_mPanel_21() { return static_cast<int32_t>(offsetof(AngleScrollView_t1318527455, ___mPanel_21)); }
	inline UIPanel_t1795085332 * get_mPanel_21() const { return ___mPanel_21; }
	inline UIPanel_t1795085332 ** get_address_of_mPanel_21() { return &___mPanel_21; }
	inline void set_mPanel_21(UIPanel_t1795085332 * value)
	{
		___mPanel_21 = value;
		Il2CppCodeGenWriteBarrier(&___mPanel_21, value);
	}

	inline static int32_t get_offset_of_mPlane_22() { return static_cast<int32_t>(offsetof(AngleScrollView_t1318527455, ___mPlane_22)); }
	inline Plane_t3727654732  get_mPlane_22() const { return ___mPlane_22; }
	inline Plane_t3727654732 * get_address_of_mPlane_22() { return &___mPlane_22; }
	inline void set_mPlane_22(Plane_t3727654732  value)
	{
		___mPlane_22 = value;
	}

	inline static int32_t get_offset_of_mLastPos_23() { return static_cast<int32_t>(offsetof(AngleScrollView_t1318527455, ___mLastPos_23)); }
	inline Vector3_t2243707580  get_mLastPos_23() const { return ___mLastPos_23; }
	inline Vector3_t2243707580 * get_address_of_mLastPos_23() { return &___mLastPos_23; }
	inline void set_mLastPos_23(Vector3_t2243707580  value)
	{
		___mLastPos_23 = value;
	}

	inline static int32_t get_offset_of_mPressed_24() { return static_cast<int32_t>(offsetof(AngleScrollView_t1318527455, ___mPressed_24)); }
	inline bool get_mPressed_24() const { return ___mPressed_24; }
	inline bool* get_address_of_mPressed_24() { return &___mPressed_24; }
	inline void set_mPressed_24(bool value)
	{
		___mPressed_24 = value;
	}

	inline static int32_t get_offset_of_mMomentum_25() { return static_cast<int32_t>(offsetof(AngleScrollView_t1318527455, ___mMomentum_25)); }
	inline Vector3_t2243707580  get_mMomentum_25() const { return ___mMomentum_25; }
	inline Vector3_t2243707580 * get_address_of_mMomentum_25() { return &___mMomentum_25; }
	inline void set_mMomentum_25(Vector3_t2243707580  value)
	{
		___mMomentum_25 = value;
	}

	inline static int32_t get_offset_of_mScroll_26() { return static_cast<int32_t>(offsetof(AngleScrollView_t1318527455, ___mScroll_26)); }
	inline float get_mScroll_26() const { return ___mScroll_26; }
	inline float* get_address_of_mScroll_26() { return &___mScroll_26; }
	inline void set_mScroll_26(float value)
	{
		___mScroll_26 = value;
	}

	inline static int32_t get_offset_of_mBounds_27() { return static_cast<int32_t>(offsetof(AngleScrollView_t1318527455, ___mBounds_27)); }
	inline Bounds_t3033363703  get_mBounds_27() const { return ___mBounds_27; }
	inline Bounds_t3033363703 * get_address_of_mBounds_27() { return &___mBounds_27; }
	inline void set_mBounds_27(Bounds_t3033363703  value)
	{
		___mBounds_27 = value;
	}

	inline static int32_t get_offset_of_mCalculatedBounds_28() { return static_cast<int32_t>(offsetof(AngleScrollView_t1318527455, ___mCalculatedBounds_28)); }
	inline bool get_mCalculatedBounds_28() const { return ___mCalculatedBounds_28; }
	inline bool* get_address_of_mCalculatedBounds_28() { return &___mCalculatedBounds_28; }
	inline void set_mCalculatedBounds_28(bool value)
	{
		___mCalculatedBounds_28 = value;
	}

	inline static int32_t get_offset_of_mShouldMove_29() { return static_cast<int32_t>(offsetof(AngleScrollView_t1318527455, ___mShouldMove_29)); }
	inline bool get_mShouldMove_29() const { return ___mShouldMove_29; }
	inline bool* get_address_of_mShouldMove_29() { return &___mShouldMove_29; }
	inline void set_mShouldMove_29(bool value)
	{
		___mShouldMove_29 = value;
	}

	inline static int32_t get_offset_of_mIgnoreCallbacks_30() { return static_cast<int32_t>(offsetof(AngleScrollView_t1318527455, ___mIgnoreCallbacks_30)); }
	inline bool get_mIgnoreCallbacks_30() const { return ___mIgnoreCallbacks_30; }
	inline bool* get_address_of_mIgnoreCallbacks_30() { return &___mIgnoreCallbacks_30; }
	inline void set_mIgnoreCallbacks_30(bool value)
	{
		___mIgnoreCallbacks_30 = value;
	}

	inline static int32_t get_offset_of_mDragID_31() { return static_cast<int32_t>(offsetof(AngleScrollView_t1318527455, ___mDragID_31)); }
	inline int32_t get_mDragID_31() const { return ___mDragID_31; }
	inline int32_t* get_address_of_mDragID_31() { return &___mDragID_31; }
	inline void set_mDragID_31(int32_t value)
	{
		___mDragID_31 = value;
	}

	inline static int32_t get_offset_of_mDragStartOffset_32() { return static_cast<int32_t>(offsetof(AngleScrollView_t1318527455, ___mDragStartOffset_32)); }
	inline Vector2_t2243707579  get_mDragStartOffset_32() const { return ___mDragStartOffset_32; }
	inline Vector2_t2243707579 * get_address_of_mDragStartOffset_32() { return &___mDragStartOffset_32; }
	inline void set_mDragStartOffset_32(Vector2_t2243707579  value)
	{
		___mDragStartOffset_32 = value;
	}

	inline static int32_t get_offset_of_mDragStarted_33() { return static_cast<int32_t>(offsetof(AngleScrollView_t1318527455, ___mDragStarted_33)); }
	inline bool get_mDragStarted_33() const { return ___mDragStarted_33; }
	inline bool* get_address_of_mDragStarted_33() { return &___mDragStarted_33; }
	inline void set_mDragStarted_33(bool value)
	{
		___mDragStarted_33 = value;
	}

	inline static int32_t get_offset_of_mSpring_34() { return static_cast<int32_t>(offsetof(AngleScrollView_t1318527455, ___mSpring_34)); }
	inline bool get_mSpring_34() const { return ___mSpring_34; }
	inline bool* get_address_of_mSpring_34() { return &___mSpring_34; }
	inline void set_mSpring_34(bool value)
	{
		___mSpring_34 = value;
	}

	inline static int32_t get_offset_of_mRuning_35() { return static_cast<int32_t>(offsetof(AngleScrollView_t1318527455, ___mRuning_35)); }
	inline bool get_mRuning_35() const { return ___mRuning_35; }
	inline bool* get_address_of_mRuning_35() { return &___mRuning_35; }
	inline void set_mRuning_35(bool value)
	{
		___mRuning_35 = value;
	}
};

struct AngleScrollView_t1318527455_StaticFields
{
public:
	// BetterList`1<AngleScrollView> AngleScrollView::list
	BetterList_1_t1538916097 * ___list_2;

public:
	inline static int32_t get_offset_of_list_2() { return static_cast<int32_t>(offsetof(AngleScrollView_t1318527455_StaticFields, ___list_2)); }
	inline BetterList_1_t1538916097 * get_list_2() const { return ___list_2; }
	inline BetterList_1_t1538916097 ** get_address_of_list_2() { return &___list_2; }
	inline void set_list_2(BetterList_1_t1538916097 * value)
	{
		___list_2 = value;
		Il2CppCodeGenWriteBarrier(&___list_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
