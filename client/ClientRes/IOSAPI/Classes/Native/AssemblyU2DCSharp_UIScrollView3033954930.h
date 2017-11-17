#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BetterList`1<UIScrollView>
struct BetterList_1_t3254343572;
// UIProgressBar
struct UIProgressBar_t3824507790;
// UIScrollView/OnDragFinished
struct OnDragFinished_t4282905310;
// UnityEngine.Transform
struct Transform_t3275118058;
// UIPanel
struct UIPanel_t1795085332;
// System.Action
struct Action_t3226471752;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_UIScrollView_Movement1682624982.h"
#include "AssemblyU2DCSharp_UIScrollView_DragEffect614031488.h"
#include "AssemblyU2DCSharp_UIScrollView_ShowCondition3179581401.h"
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

// UIScrollView
struct  UIScrollView_t3033954930  : public MonoBehaviour_t1158329972
{
public:
	// UIScrollView/Movement UIScrollView::movement
	int32_t ___movement_3;
	// UIScrollView/DragEffect UIScrollView::dragEffect
	int32_t ___dragEffect_4;
	// System.Boolean UIScrollView::restrictWithinPanel
	bool ___restrictWithinPanel_5;
	// System.Boolean UIScrollView::disableDragIfFits
	bool ___disableDragIfFits_6;
	// System.Boolean UIScrollView::smoothDragStart
	bool ___smoothDragStart_7;
	// System.Boolean UIScrollView::iOSDragEmulation
	bool ___iOSDragEmulation_8;
	// System.Single UIScrollView::scrollWheelFactor
	float ___scrollWheelFactor_9;
	// System.Single UIScrollView::momentumAmount
	float ___momentumAmount_10;
	// UIProgressBar UIScrollView::horizontalScrollBar
	UIProgressBar_t3824507790 * ___horizontalScrollBar_11;
	// UIProgressBar UIScrollView::verticalScrollBar
	UIProgressBar_t3824507790 * ___verticalScrollBar_12;
	// UIScrollView/ShowCondition UIScrollView::showScrollBars
	int32_t ___showScrollBars_13;
	// UnityEngine.Vector2 UIScrollView::customMovement
	Vector2_t2243707579  ___customMovement_14;
	// UIWidget/Pivot UIScrollView::contentPivot
	int32_t ___contentPivot_15;
	// UIScrollView/OnDragFinished UIScrollView::onDragFinished
	OnDragFinished_t4282905310 * ___onDragFinished_16;
	// UnityEngine.Vector3 UIScrollView::scale
	Vector3_t2243707580  ___scale_17;
	// UnityEngine.Vector2 UIScrollView::relativePositionOnReset
	Vector2_t2243707579  ___relativePositionOnReset_18;
	// UnityEngine.Transform UIScrollView::mTrans
	Transform_t3275118058 * ___mTrans_19;
	// UIPanel UIScrollView::mPanel
	UIPanel_t1795085332 * ___mPanel_20;
	// UnityEngine.Plane UIScrollView::mPlane
	Plane_t3727654732  ___mPlane_21;
	// UnityEngine.Vector3 UIScrollView::mLastPos
	Vector3_t2243707580  ___mLastPos_22;
	// System.Boolean UIScrollView::mPressed
	bool ___mPressed_23;
	// UnityEngine.Vector3 UIScrollView::mMomentum
	Vector3_t2243707580  ___mMomentum_24;
	// System.Single UIScrollView::mScroll
	float ___mScroll_25;
	// UnityEngine.Bounds UIScrollView::mBounds
	Bounds_t3033363703  ___mBounds_26;
	// System.Boolean UIScrollView::mCalculatedBounds
	bool ___mCalculatedBounds_27;
	// System.Boolean UIScrollView::mShouldMove
	bool ___mShouldMove_28;
	// System.Boolean UIScrollView::mIgnoreCallbacks
	bool ___mIgnoreCallbacks_29;
	// System.Int32 UIScrollView::mDragID
	int32_t ___mDragID_30;
	// UnityEngine.Vector2 UIScrollView::mDragStartOffset
	Vector2_t2243707579  ___mDragStartOffset_31;
	// System.Boolean UIScrollView::mDragStarted
	bool ___mDragStarted_32;
	// System.Action UIScrollView::OnTopEdge
	Action_t3226471752 * ___OnTopEdge_33;
	// System.Action UIScrollView::OnBottomEdge
	Action_t3226471752 * ___OnBottomEdge_34;
	// System.Action UIScrollView::OnLeftEdge
	Action_t3226471752 * ___OnLeftEdge_35;
	// System.Action UIScrollView::OnRightEdge
	Action_t3226471752 * ___OnRightEdge_36;

public:
	inline static int32_t get_offset_of_movement_3() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___movement_3)); }
	inline int32_t get_movement_3() const { return ___movement_3; }
	inline int32_t* get_address_of_movement_3() { return &___movement_3; }
	inline void set_movement_3(int32_t value)
	{
		___movement_3 = value;
	}

	inline static int32_t get_offset_of_dragEffect_4() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___dragEffect_4)); }
	inline int32_t get_dragEffect_4() const { return ___dragEffect_4; }
	inline int32_t* get_address_of_dragEffect_4() { return &___dragEffect_4; }
	inline void set_dragEffect_4(int32_t value)
	{
		___dragEffect_4 = value;
	}

	inline static int32_t get_offset_of_restrictWithinPanel_5() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___restrictWithinPanel_5)); }
	inline bool get_restrictWithinPanel_5() const { return ___restrictWithinPanel_5; }
	inline bool* get_address_of_restrictWithinPanel_5() { return &___restrictWithinPanel_5; }
	inline void set_restrictWithinPanel_5(bool value)
	{
		___restrictWithinPanel_5 = value;
	}

	inline static int32_t get_offset_of_disableDragIfFits_6() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___disableDragIfFits_6)); }
	inline bool get_disableDragIfFits_6() const { return ___disableDragIfFits_6; }
	inline bool* get_address_of_disableDragIfFits_6() { return &___disableDragIfFits_6; }
	inline void set_disableDragIfFits_6(bool value)
	{
		___disableDragIfFits_6 = value;
	}

	inline static int32_t get_offset_of_smoothDragStart_7() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___smoothDragStart_7)); }
	inline bool get_smoothDragStart_7() const { return ___smoothDragStart_7; }
	inline bool* get_address_of_smoothDragStart_7() { return &___smoothDragStart_7; }
	inline void set_smoothDragStart_7(bool value)
	{
		___smoothDragStart_7 = value;
	}

	inline static int32_t get_offset_of_iOSDragEmulation_8() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___iOSDragEmulation_8)); }
	inline bool get_iOSDragEmulation_8() const { return ___iOSDragEmulation_8; }
	inline bool* get_address_of_iOSDragEmulation_8() { return &___iOSDragEmulation_8; }
	inline void set_iOSDragEmulation_8(bool value)
	{
		___iOSDragEmulation_8 = value;
	}

	inline static int32_t get_offset_of_scrollWheelFactor_9() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___scrollWheelFactor_9)); }
	inline float get_scrollWheelFactor_9() const { return ___scrollWheelFactor_9; }
	inline float* get_address_of_scrollWheelFactor_9() { return &___scrollWheelFactor_9; }
	inline void set_scrollWheelFactor_9(float value)
	{
		___scrollWheelFactor_9 = value;
	}

	inline static int32_t get_offset_of_momentumAmount_10() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___momentumAmount_10)); }
	inline float get_momentumAmount_10() const { return ___momentumAmount_10; }
	inline float* get_address_of_momentumAmount_10() { return &___momentumAmount_10; }
	inline void set_momentumAmount_10(float value)
	{
		___momentumAmount_10 = value;
	}

	inline static int32_t get_offset_of_horizontalScrollBar_11() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___horizontalScrollBar_11)); }
	inline UIProgressBar_t3824507790 * get_horizontalScrollBar_11() const { return ___horizontalScrollBar_11; }
	inline UIProgressBar_t3824507790 ** get_address_of_horizontalScrollBar_11() { return &___horizontalScrollBar_11; }
	inline void set_horizontalScrollBar_11(UIProgressBar_t3824507790 * value)
	{
		___horizontalScrollBar_11 = value;
		Il2CppCodeGenWriteBarrier(&___horizontalScrollBar_11, value);
	}

	inline static int32_t get_offset_of_verticalScrollBar_12() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___verticalScrollBar_12)); }
	inline UIProgressBar_t3824507790 * get_verticalScrollBar_12() const { return ___verticalScrollBar_12; }
	inline UIProgressBar_t3824507790 ** get_address_of_verticalScrollBar_12() { return &___verticalScrollBar_12; }
	inline void set_verticalScrollBar_12(UIProgressBar_t3824507790 * value)
	{
		___verticalScrollBar_12 = value;
		Il2CppCodeGenWriteBarrier(&___verticalScrollBar_12, value);
	}

	inline static int32_t get_offset_of_showScrollBars_13() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___showScrollBars_13)); }
	inline int32_t get_showScrollBars_13() const { return ___showScrollBars_13; }
	inline int32_t* get_address_of_showScrollBars_13() { return &___showScrollBars_13; }
	inline void set_showScrollBars_13(int32_t value)
	{
		___showScrollBars_13 = value;
	}

	inline static int32_t get_offset_of_customMovement_14() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___customMovement_14)); }
	inline Vector2_t2243707579  get_customMovement_14() const { return ___customMovement_14; }
	inline Vector2_t2243707579 * get_address_of_customMovement_14() { return &___customMovement_14; }
	inline void set_customMovement_14(Vector2_t2243707579  value)
	{
		___customMovement_14 = value;
	}

	inline static int32_t get_offset_of_contentPivot_15() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___contentPivot_15)); }
	inline int32_t get_contentPivot_15() const { return ___contentPivot_15; }
	inline int32_t* get_address_of_contentPivot_15() { return &___contentPivot_15; }
	inline void set_contentPivot_15(int32_t value)
	{
		___contentPivot_15 = value;
	}

	inline static int32_t get_offset_of_onDragFinished_16() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___onDragFinished_16)); }
	inline OnDragFinished_t4282905310 * get_onDragFinished_16() const { return ___onDragFinished_16; }
	inline OnDragFinished_t4282905310 ** get_address_of_onDragFinished_16() { return &___onDragFinished_16; }
	inline void set_onDragFinished_16(OnDragFinished_t4282905310 * value)
	{
		___onDragFinished_16 = value;
		Il2CppCodeGenWriteBarrier(&___onDragFinished_16, value);
	}

	inline static int32_t get_offset_of_scale_17() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___scale_17)); }
	inline Vector3_t2243707580  get_scale_17() const { return ___scale_17; }
	inline Vector3_t2243707580 * get_address_of_scale_17() { return &___scale_17; }
	inline void set_scale_17(Vector3_t2243707580  value)
	{
		___scale_17 = value;
	}

	inline static int32_t get_offset_of_relativePositionOnReset_18() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___relativePositionOnReset_18)); }
	inline Vector2_t2243707579  get_relativePositionOnReset_18() const { return ___relativePositionOnReset_18; }
	inline Vector2_t2243707579 * get_address_of_relativePositionOnReset_18() { return &___relativePositionOnReset_18; }
	inline void set_relativePositionOnReset_18(Vector2_t2243707579  value)
	{
		___relativePositionOnReset_18 = value;
	}

	inline static int32_t get_offset_of_mTrans_19() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___mTrans_19)); }
	inline Transform_t3275118058 * get_mTrans_19() const { return ___mTrans_19; }
	inline Transform_t3275118058 ** get_address_of_mTrans_19() { return &___mTrans_19; }
	inline void set_mTrans_19(Transform_t3275118058 * value)
	{
		___mTrans_19 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_19, value);
	}

	inline static int32_t get_offset_of_mPanel_20() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___mPanel_20)); }
	inline UIPanel_t1795085332 * get_mPanel_20() const { return ___mPanel_20; }
	inline UIPanel_t1795085332 ** get_address_of_mPanel_20() { return &___mPanel_20; }
	inline void set_mPanel_20(UIPanel_t1795085332 * value)
	{
		___mPanel_20 = value;
		Il2CppCodeGenWriteBarrier(&___mPanel_20, value);
	}

	inline static int32_t get_offset_of_mPlane_21() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___mPlane_21)); }
	inline Plane_t3727654732  get_mPlane_21() const { return ___mPlane_21; }
	inline Plane_t3727654732 * get_address_of_mPlane_21() { return &___mPlane_21; }
	inline void set_mPlane_21(Plane_t3727654732  value)
	{
		___mPlane_21 = value;
	}

	inline static int32_t get_offset_of_mLastPos_22() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___mLastPos_22)); }
	inline Vector3_t2243707580  get_mLastPos_22() const { return ___mLastPos_22; }
	inline Vector3_t2243707580 * get_address_of_mLastPos_22() { return &___mLastPos_22; }
	inline void set_mLastPos_22(Vector3_t2243707580  value)
	{
		___mLastPos_22 = value;
	}

	inline static int32_t get_offset_of_mPressed_23() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___mPressed_23)); }
	inline bool get_mPressed_23() const { return ___mPressed_23; }
	inline bool* get_address_of_mPressed_23() { return &___mPressed_23; }
	inline void set_mPressed_23(bool value)
	{
		___mPressed_23 = value;
	}

	inline static int32_t get_offset_of_mMomentum_24() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___mMomentum_24)); }
	inline Vector3_t2243707580  get_mMomentum_24() const { return ___mMomentum_24; }
	inline Vector3_t2243707580 * get_address_of_mMomentum_24() { return &___mMomentum_24; }
	inline void set_mMomentum_24(Vector3_t2243707580  value)
	{
		___mMomentum_24 = value;
	}

	inline static int32_t get_offset_of_mScroll_25() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___mScroll_25)); }
	inline float get_mScroll_25() const { return ___mScroll_25; }
	inline float* get_address_of_mScroll_25() { return &___mScroll_25; }
	inline void set_mScroll_25(float value)
	{
		___mScroll_25 = value;
	}

	inline static int32_t get_offset_of_mBounds_26() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___mBounds_26)); }
	inline Bounds_t3033363703  get_mBounds_26() const { return ___mBounds_26; }
	inline Bounds_t3033363703 * get_address_of_mBounds_26() { return &___mBounds_26; }
	inline void set_mBounds_26(Bounds_t3033363703  value)
	{
		___mBounds_26 = value;
	}

	inline static int32_t get_offset_of_mCalculatedBounds_27() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___mCalculatedBounds_27)); }
	inline bool get_mCalculatedBounds_27() const { return ___mCalculatedBounds_27; }
	inline bool* get_address_of_mCalculatedBounds_27() { return &___mCalculatedBounds_27; }
	inline void set_mCalculatedBounds_27(bool value)
	{
		___mCalculatedBounds_27 = value;
	}

	inline static int32_t get_offset_of_mShouldMove_28() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___mShouldMove_28)); }
	inline bool get_mShouldMove_28() const { return ___mShouldMove_28; }
	inline bool* get_address_of_mShouldMove_28() { return &___mShouldMove_28; }
	inline void set_mShouldMove_28(bool value)
	{
		___mShouldMove_28 = value;
	}

	inline static int32_t get_offset_of_mIgnoreCallbacks_29() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___mIgnoreCallbacks_29)); }
	inline bool get_mIgnoreCallbacks_29() const { return ___mIgnoreCallbacks_29; }
	inline bool* get_address_of_mIgnoreCallbacks_29() { return &___mIgnoreCallbacks_29; }
	inline void set_mIgnoreCallbacks_29(bool value)
	{
		___mIgnoreCallbacks_29 = value;
	}

	inline static int32_t get_offset_of_mDragID_30() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___mDragID_30)); }
	inline int32_t get_mDragID_30() const { return ___mDragID_30; }
	inline int32_t* get_address_of_mDragID_30() { return &___mDragID_30; }
	inline void set_mDragID_30(int32_t value)
	{
		___mDragID_30 = value;
	}

	inline static int32_t get_offset_of_mDragStartOffset_31() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___mDragStartOffset_31)); }
	inline Vector2_t2243707579  get_mDragStartOffset_31() const { return ___mDragStartOffset_31; }
	inline Vector2_t2243707579 * get_address_of_mDragStartOffset_31() { return &___mDragStartOffset_31; }
	inline void set_mDragStartOffset_31(Vector2_t2243707579  value)
	{
		___mDragStartOffset_31 = value;
	}

	inline static int32_t get_offset_of_mDragStarted_32() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___mDragStarted_32)); }
	inline bool get_mDragStarted_32() const { return ___mDragStarted_32; }
	inline bool* get_address_of_mDragStarted_32() { return &___mDragStarted_32; }
	inline void set_mDragStarted_32(bool value)
	{
		___mDragStarted_32 = value;
	}

	inline static int32_t get_offset_of_OnTopEdge_33() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___OnTopEdge_33)); }
	inline Action_t3226471752 * get_OnTopEdge_33() const { return ___OnTopEdge_33; }
	inline Action_t3226471752 ** get_address_of_OnTopEdge_33() { return &___OnTopEdge_33; }
	inline void set_OnTopEdge_33(Action_t3226471752 * value)
	{
		___OnTopEdge_33 = value;
		Il2CppCodeGenWriteBarrier(&___OnTopEdge_33, value);
	}

	inline static int32_t get_offset_of_OnBottomEdge_34() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___OnBottomEdge_34)); }
	inline Action_t3226471752 * get_OnBottomEdge_34() const { return ___OnBottomEdge_34; }
	inline Action_t3226471752 ** get_address_of_OnBottomEdge_34() { return &___OnBottomEdge_34; }
	inline void set_OnBottomEdge_34(Action_t3226471752 * value)
	{
		___OnBottomEdge_34 = value;
		Il2CppCodeGenWriteBarrier(&___OnBottomEdge_34, value);
	}

	inline static int32_t get_offset_of_OnLeftEdge_35() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___OnLeftEdge_35)); }
	inline Action_t3226471752 * get_OnLeftEdge_35() const { return ___OnLeftEdge_35; }
	inline Action_t3226471752 ** get_address_of_OnLeftEdge_35() { return &___OnLeftEdge_35; }
	inline void set_OnLeftEdge_35(Action_t3226471752 * value)
	{
		___OnLeftEdge_35 = value;
		Il2CppCodeGenWriteBarrier(&___OnLeftEdge_35, value);
	}

	inline static int32_t get_offset_of_OnRightEdge_36() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930, ___OnRightEdge_36)); }
	inline Action_t3226471752 * get_OnRightEdge_36() const { return ___OnRightEdge_36; }
	inline Action_t3226471752 ** get_address_of_OnRightEdge_36() { return &___OnRightEdge_36; }
	inline void set_OnRightEdge_36(Action_t3226471752 * value)
	{
		___OnRightEdge_36 = value;
		Il2CppCodeGenWriteBarrier(&___OnRightEdge_36, value);
	}
};

struct UIScrollView_t3033954930_StaticFields
{
public:
	// BetterList`1<UIScrollView> UIScrollView::list
	BetterList_1_t3254343572 * ___list_2;

public:
	inline static int32_t get_offset_of_list_2() { return static_cast<int32_t>(offsetof(UIScrollView_t3033954930_StaticFields, ___list_2)); }
	inline BetterList_1_t3254343572 * get_list_2() const { return ___list_2; }
	inline BetterList_1_t3254343572 ** get_address_of_list_2() { return &___list_2; }
	inline void set_list_2(BetterList_1_t3254343572 * value)
	{
		___list_2 = value;
		Il2CppCodeGenWriteBarrier(&___list_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
