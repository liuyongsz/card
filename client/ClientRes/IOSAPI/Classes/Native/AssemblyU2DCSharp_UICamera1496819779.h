#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BetterList`1<UICamera>
struct BetterList_1_t1717208421;
// System.Collections.Generic.List`1<UICamera/OnScreenResize>
struct List_1_t696614047;
// System.String
struct String_t;
// UICamera/OnCustomInput
struct OnCustomInput_t3556372712;
// UICamera
struct UICamera_t1496819779;
// UnityEngine.Camera
struct Camera_t189460977;
// UICamera/MouseOrTouch
struct MouseOrTouch_t2470076277;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UIInput
struct UIInput_t860674234;
// UICamera/MouseOrTouch[]
struct MouseOrTouchU5BU5D_t3885609752;
// System.Collections.Generic.Dictionary`2<System.Int32,UICamera/MouseOrTouch>
struct Dictionary_2_t1477901912;
// UICamera/PressureTouch[]
struct PressureTouchU5BU5D_t4245130885;
// BetterList`1<UICamera/DepthEntry>
struct BetterList_1_t1195135187;
// UICamera/OnNotifyUIEvent
struct OnNotifyUIEvent_t3025032372;
// BetterList`1/CompareFunc<UICamera/DepthEntry>
struct CompareFunc_t3102027737;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_UICamera_EventType2218742030.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"
#include "UnityEngine_UnityEngine_KeyCode2283395152.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_RaycastHit87180320.h"
#include "AssemblyU2DCSharp_UICamera_ControlScheme3098588360.h"
#include "AssemblyU2DCSharp_UICamera_DepthEntry974746545.h"
#include "UnityEngine_UnityEngine_Plane3727654732.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UICamera
struct  UICamera_t1496819779  : public MonoBehaviour_t1158329972
{
public:
	// UICamera/EventType UICamera::eventType
	int32_t ___eventType_4;
	// UnityEngine.LayerMask UICamera::eventReceiverMask
	LayerMask_t3188175821  ___eventReceiverMask_5;
	// System.Boolean UICamera::debug
	bool ___debug_6;
	// System.Boolean UICamera::useMouse
	bool ___useMouse_7;
	// System.Boolean UICamera::useTouch
	bool ___useTouch_8;
	// System.Boolean UICamera::allowMultiTouch
	bool ___allowMultiTouch_9;
	// System.Boolean UICamera::useKeyboard
	bool ___useKeyboard_10;
	// System.Boolean UICamera::useController
	bool ___useController_11;
	// System.Boolean UICamera::stickyTooltip
	bool ___stickyTooltip_12;
	// System.Single UICamera::tooltipDelay
	float ___tooltipDelay_13;
	// System.Single UICamera::mouseDragThreshold
	float ___mouseDragThreshold_14;
	// System.Single UICamera::mouseClickThreshold
	float ___mouseClickThreshold_15;
	// System.Single UICamera::touchDragThreshold
	float ___touchDragThreshold_16;
	// System.Single UICamera::touchClickThreshold
	float ___touchClickThreshold_17;
	// System.Single UICamera::rangeDistance
	float ___rangeDistance_18;
	// System.String UICamera::scrollAxisName
	String_t* ___scrollAxisName_19;
	// System.String UICamera::verticalAxisName
	String_t* ___verticalAxisName_20;
	// System.String UICamera::horizontalAxisName
	String_t* ___horizontalAxisName_21;
	// UnityEngine.KeyCode UICamera::submitKey0
	int32_t ___submitKey0_22;
	// UnityEngine.KeyCode UICamera::submitKey1
	int32_t ___submitKey1_23;
	// UnityEngine.KeyCode UICamera::cancelKey0
	int32_t ___cancelKey0_24;
	// UnityEngine.KeyCode UICamera::cancelKey1
	int32_t ___cancelKey1_25;
	// UnityEngine.GameObject UICamera::mTooltip
	GameObject_t1756533147 * ___mTooltip_50;
	// UnityEngine.Camera UICamera::mCam
	Camera_t189460977 * ___mCam_51;
	// System.Single UICamera::mTooltipTime
	float ___mTooltipTime_52;
	// System.Single UICamera::mNextRaycast
	float ___mNextRaycast_53;

public:
	inline static int32_t get_offset_of_eventType_4() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___eventType_4)); }
	inline int32_t get_eventType_4() const { return ___eventType_4; }
	inline int32_t* get_address_of_eventType_4() { return &___eventType_4; }
	inline void set_eventType_4(int32_t value)
	{
		___eventType_4 = value;
	}

	inline static int32_t get_offset_of_eventReceiverMask_5() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___eventReceiverMask_5)); }
	inline LayerMask_t3188175821  get_eventReceiverMask_5() const { return ___eventReceiverMask_5; }
	inline LayerMask_t3188175821 * get_address_of_eventReceiverMask_5() { return &___eventReceiverMask_5; }
	inline void set_eventReceiverMask_5(LayerMask_t3188175821  value)
	{
		___eventReceiverMask_5 = value;
	}

	inline static int32_t get_offset_of_debug_6() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___debug_6)); }
	inline bool get_debug_6() const { return ___debug_6; }
	inline bool* get_address_of_debug_6() { return &___debug_6; }
	inline void set_debug_6(bool value)
	{
		___debug_6 = value;
	}

	inline static int32_t get_offset_of_useMouse_7() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___useMouse_7)); }
	inline bool get_useMouse_7() const { return ___useMouse_7; }
	inline bool* get_address_of_useMouse_7() { return &___useMouse_7; }
	inline void set_useMouse_7(bool value)
	{
		___useMouse_7 = value;
	}

	inline static int32_t get_offset_of_useTouch_8() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___useTouch_8)); }
	inline bool get_useTouch_8() const { return ___useTouch_8; }
	inline bool* get_address_of_useTouch_8() { return &___useTouch_8; }
	inline void set_useTouch_8(bool value)
	{
		___useTouch_8 = value;
	}

	inline static int32_t get_offset_of_allowMultiTouch_9() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___allowMultiTouch_9)); }
	inline bool get_allowMultiTouch_9() const { return ___allowMultiTouch_9; }
	inline bool* get_address_of_allowMultiTouch_9() { return &___allowMultiTouch_9; }
	inline void set_allowMultiTouch_9(bool value)
	{
		___allowMultiTouch_9 = value;
	}

	inline static int32_t get_offset_of_useKeyboard_10() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___useKeyboard_10)); }
	inline bool get_useKeyboard_10() const { return ___useKeyboard_10; }
	inline bool* get_address_of_useKeyboard_10() { return &___useKeyboard_10; }
	inline void set_useKeyboard_10(bool value)
	{
		___useKeyboard_10 = value;
	}

	inline static int32_t get_offset_of_useController_11() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___useController_11)); }
	inline bool get_useController_11() const { return ___useController_11; }
	inline bool* get_address_of_useController_11() { return &___useController_11; }
	inline void set_useController_11(bool value)
	{
		___useController_11 = value;
	}

	inline static int32_t get_offset_of_stickyTooltip_12() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___stickyTooltip_12)); }
	inline bool get_stickyTooltip_12() const { return ___stickyTooltip_12; }
	inline bool* get_address_of_stickyTooltip_12() { return &___stickyTooltip_12; }
	inline void set_stickyTooltip_12(bool value)
	{
		___stickyTooltip_12 = value;
	}

	inline static int32_t get_offset_of_tooltipDelay_13() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___tooltipDelay_13)); }
	inline float get_tooltipDelay_13() const { return ___tooltipDelay_13; }
	inline float* get_address_of_tooltipDelay_13() { return &___tooltipDelay_13; }
	inline void set_tooltipDelay_13(float value)
	{
		___tooltipDelay_13 = value;
	}

	inline static int32_t get_offset_of_mouseDragThreshold_14() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___mouseDragThreshold_14)); }
	inline float get_mouseDragThreshold_14() const { return ___mouseDragThreshold_14; }
	inline float* get_address_of_mouseDragThreshold_14() { return &___mouseDragThreshold_14; }
	inline void set_mouseDragThreshold_14(float value)
	{
		___mouseDragThreshold_14 = value;
	}

	inline static int32_t get_offset_of_mouseClickThreshold_15() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___mouseClickThreshold_15)); }
	inline float get_mouseClickThreshold_15() const { return ___mouseClickThreshold_15; }
	inline float* get_address_of_mouseClickThreshold_15() { return &___mouseClickThreshold_15; }
	inline void set_mouseClickThreshold_15(float value)
	{
		___mouseClickThreshold_15 = value;
	}

	inline static int32_t get_offset_of_touchDragThreshold_16() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___touchDragThreshold_16)); }
	inline float get_touchDragThreshold_16() const { return ___touchDragThreshold_16; }
	inline float* get_address_of_touchDragThreshold_16() { return &___touchDragThreshold_16; }
	inline void set_touchDragThreshold_16(float value)
	{
		___touchDragThreshold_16 = value;
	}

	inline static int32_t get_offset_of_touchClickThreshold_17() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___touchClickThreshold_17)); }
	inline float get_touchClickThreshold_17() const { return ___touchClickThreshold_17; }
	inline float* get_address_of_touchClickThreshold_17() { return &___touchClickThreshold_17; }
	inline void set_touchClickThreshold_17(float value)
	{
		___touchClickThreshold_17 = value;
	}

	inline static int32_t get_offset_of_rangeDistance_18() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___rangeDistance_18)); }
	inline float get_rangeDistance_18() const { return ___rangeDistance_18; }
	inline float* get_address_of_rangeDistance_18() { return &___rangeDistance_18; }
	inline void set_rangeDistance_18(float value)
	{
		___rangeDistance_18 = value;
	}

	inline static int32_t get_offset_of_scrollAxisName_19() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___scrollAxisName_19)); }
	inline String_t* get_scrollAxisName_19() const { return ___scrollAxisName_19; }
	inline String_t** get_address_of_scrollAxisName_19() { return &___scrollAxisName_19; }
	inline void set_scrollAxisName_19(String_t* value)
	{
		___scrollAxisName_19 = value;
		Il2CppCodeGenWriteBarrier(&___scrollAxisName_19, value);
	}

	inline static int32_t get_offset_of_verticalAxisName_20() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___verticalAxisName_20)); }
	inline String_t* get_verticalAxisName_20() const { return ___verticalAxisName_20; }
	inline String_t** get_address_of_verticalAxisName_20() { return &___verticalAxisName_20; }
	inline void set_verticalAxisName_20(String_t* value)
	{
		___verticalAxisName_20 = value;
		Il2CppCodeGenWriteBarrier(&___verticalAxisName_20, value);
	}

	inline static int32_t get_offset_of_horizontalAxisName_21() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___horizontalAxisName_21)); }
	inline String_t* get_horizontalAxisName_21() const { return ___horizontalAxisName_21; }
	inline String_t** get_address_of_horizontalAxisName_21() { return &___horizontalAxisName_21; }
	inline void set_horizontalAxisName_21(String_t* value)
	{
		___horizontalAxisName_21 = value;
		Il2CppCodeGenWriteBarrier(&___horizontalAxisName_21, value);
	}

	inline static int32_t get_offset_of_submitKey0_22() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___submitKey0_22)); }
	inline int32_t get_submitKey0_22() const { return ___submitKey0_22; }
	inline int32_t* get_address_of_submitKey0_22() { return &___submitKey0_22; }
	inline void set_submitKey0_22(int32_t value)
	{
		___submitKey0_22 = value;
	}

	inline static int32_t get_offset_of_submitKey1_23() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___submitKey1_23)); }
	inline int32_t get_submitKey1_23() const { return ___submitKey1_23; }
	inline int32_t* get_address_of_submitKey1_23() { return &___submitKey1_23; }
	inline void set_submitKey1_23(int32_t value)
	{
		___submitKey1_23 = value;
	}

	inline static int32_t get_offset_of_cancelKey0_24() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___cancelKey0_24)); }
	inline int32_t get_cancelKey0_24() const { return ___cancelKey0_24; }
	inline int32_t* get_address_of_cancelKey0_24() { return &___cancelKey0_24; }
	inline void set_cancelKey0_24(int32_t value)
	{
		___cancelKey0_24 = value;
	}

	inline static int32_t get_offset_of_cancelKey1_25() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___cancelKey1_25)); }
	inline int32_t get_cancelKey1_25() const { return ___cancelKey1_25; }
	inline int32_t* get_address_of_cancelKey1_25() { return &___cancelKey1_25; }
	inline void set_cancelKey1_25(int32_t value)
	{
		___cancelKey1_25 = value;
	}

	inline static int32_t get_offset_of_mTooltip_50() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___mTooltip_50)); }
	inline GameObject_t1756533147 * get_mTooltip_50() const { return ___mTooltip_50; }
	inline GameObject_t1756533147 ** get_address_of_mTooltip_50() { return &___mTooltip_50; }
	inline void set_mTooltip_50(GameObject_t1756533147 * value)
	{
		___mTooltip_50 = value;
		Il2CppCodeGenWriteBarrier(&___mTooltip_50, value);
	}

	inline static int32_t get_offset_of_mCam_51() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___mCam_51)); }
	inline Camera_t189460977 * get_mCam_51() const { return ___mCam_51; }
	inline Camera_t189460977 ** get_address_of_mCam_51() { return &___mCam_51; }
	inline void set_mCam_51(Camera_t189460977 * value)
	{
		___mCam_51 = value;
		Il2CppCodeGenWriteBarrier(&___mCam_51, value);
	}

	inline static int32_t get_offset_of_mTooltipTime_52() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___mTooltipTime_52)); }
	inline float get_mTooltipTime_52() const { return ___mTooltipTime_52; }
	inline float* get_address_of_mTooltipTime_52() { return &___mTooltipTime_52; }
	inline void set_mTooltipTime_52(float value)
	{
		___mTooltipTime_52 = value;
	}

	inline static int32_t get_offset_of_mNextRaycast_53() { return static_cast<int32_t>(offsetof(UICamera_t1496819779, ___mNextRaycast_53)); }
	inline float get_mNextRaycast_53() const { return ___mNextRaycast_53; }
	inline float* get_address_of_mNextRaycast_53() { return &___mNextRaycast_53; }
	inline void set_mNextRaycast_53(float value)
	{
		___mNextRaycast_53 = value;
	}
};

struct UICamera_t1496819779_StaticFields
{
public:
	// BetterList`1<UICamera> UICamera::list
	BetterList_1_t1717208421 * ___list_2;
	// System.Collections.Generic.List`1<UICamera/OnScreenResize> UICamera::mOnScreenReSize
	List_1_t696614047 * ___mOnScreenReSize_3;
	// UICamera/OnCustomInput UICamera::onCustomInput
	OnCustomInput_t3556372712 * ___onCustomInput_26;
	// System.Boolean UICamera::showTooltips
	bool ___showTooltips_27;
	// UnityEngine.Vector2 UICamera::lastTouchPosition
	Vector2_t2243707579  ___lastTouchPosition_28;
	// UnityEngine.RaycastHit UICamera::lastHit
	RaycastHit_t87180320  ___lastHit_29;
	// UICamera UICamera::current
	UICamera_t1496819779 * ___current_30;
	// UnityEngine.Camera UICamera::currentCamera
	Camera_t189460977 * ___currentCamera_31;
	// UICamera/ControlScheme UICamera::currentScheme
	int32_t ___currentScheme_32;
	// System.Int32 UICamera::currentTouchID
	int32_t ___currentTouchID_33;
	// UnityEngine.KeyCode UICamera::currentKey
	int32_t ___currentKey_34;
	// UICamera/MouseOrTouch UICamera::currentTouch
	MouseOrTouch_t2470076277 * ___currentTouch_35;
	// System.Boolean UICamera::inputHasFocus
	bool ___inputHasFocus_36;
	// UnityEngine.GameObject UICamera::genericEventHandler
	GameObject_t1756533147 * ___genericEventHandler_37;
	// UnityEngine.GameObject UICamera::fallThrough
	GameObject_t1756533147 * ___fallThrough_38;
	// UnityEngine.GameObject UICamera::mCurrentSelection
	GameObject_t1756533147 * ___mCurrentSelection_39;
	// UIInput UICamera::mCurrentInput
	UIInput_t860674234 * ___mCurrentInput_40;
	// UnityEngine.GameObject UICamera::mNextSelection
	GameObject_t1756533147 * ___mNextSelection_41;
	// UICamera/ControlScheme UICamera::mNextScheme
	int32_t ___mNextScheme_42;
	// UICamera/MouseOrTouch[] UICamera::mMouse
	MouseOrTouchU5BU5D_t3885609752* ___mMouse_43;
	// UnityEngine.GameObject UICamera::mHover
	GameObject_t1756533147 * ___mHover_44;
	// UICamera/MouseOrTouch UICamera::controller
	MouseOrTouch_t2470076277 * ___controller_45;
	// System.Single UICamera::mNextEvent
	float ___mNextEvent_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,UICamera/MouseOrTouch> UICamera::mTouches
	Dictionary_2_t1477901912 * ___mTouches_47;
	// System.Int32 UICamera::mWidth
	int32_t ___mWidth_48;
	// System.Int32 UICamera::mHeight
	int32_t ___mHeight_49;
	// System.Boolean UICamera::isDragging
	bool ___isDragging_54;
	// UnityEngine.GameObject UICamera::hoveredObject
	GameObject_t1756533147 * ___hoveredObject_55;
	// System.Int32 UICamera::MAX_TOUCHES_COUNT
	int32_t ___MAX_TOUCHES_COUNT_56;
	// System.Boolean UICamera::is3DTouchSupported
	bool ___is3DTouchSupported_57;
	// System.Int32 UICamera::s_curTouchesCount
	int32_t ___s_curTouchesCount_58;
	// System.Int32 UICamera::s_preTouchesCount
	int32_t ___s_preTouchesCount_59;
	// UICamera/PressureTouch[] UICamera::s_curTouches
	PressureTouchU5BU5D_t4245130885* ___s_curTouches_60;
	// UICamera/PressureTouch[] UICamera::s_preTouches
	PressureTouchU5BU5D_t4245130885* ___s_preTouches_61;
	// UICamera/DepthEntry UICamera::mHit
	DepthEntry_t974746545  ___mHit_62;
	// BetterList`1<UICamera/DepthEntry> UICamera::mHits
	BetterList_1_t1195135187 * ___mHits_63;
	// UnityEngine.RaycastHit UICamera::mEmpty
	RaycastHit_t87180320  ___mEmpty_64;
	// UnityEngine.Plane UICamera::m2DPlane
	Plane_t3727654732  ___m2DPlane_65;
	// System.Boolean UICamera::mNotifying
	bool ___mNotifying_66;
	// UICamera/OnNotifyUIEvent UICamera::moNotifyLisnter
	OnNotifyUIEvent_t3025032372 * ___moNotifyLisnter_67;
	// BetterList`1/CompareFunc<UICamera/DepthEntry> UICamera::<>f__am$cache42
	CompareFunc_t3102027737 * ___U3CU3Ef__amU24cache42_68;

public:
	inline static int32_t get_offset_of_list_2() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___list_2)); }
	inline BetterList_1_t1717208421 * get_list_2() const { return ___list_2; }
	inline BetterList_1_t1717208421 ** get_address_of_list_2() { return &___list_2; }
	inline void set_list_2(BetterList_1_t1717208421 * value)
	{
		___list_2 = value;
		Il2CppCodeGenWriteBarrier(&___list_2, value);
	}

	inline static int32_t get_offset_of_mOnScreenReSize_3() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___mOnScreenReSize_3)); }
	inline List_1_t696614047 * get_mOnScreenReSize_3() const { return ___mOnScreenReSize_3; }
	inline List_1_t696614047 ** get_address_of_mOnScreenReSize_3() { return &___mOnScreenReSize_3; }
	inline void set_mOnScreenReSize_3(List_1_t696614047 * value)
	{
		___mOnScreenReSize_3 = value;
		Il2CppCodeGenWriteBarrier(&___mOnScreenReSize_3, value);
	}

	inline static int32_t get_offset_of_onCustomInput_26() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___onCustomInput_26)); }
	inline OnCustomInput_t3556372712 * get_onCustomInput_26() const { return ___onCustomInput_26; }
	inline OnCustomInput_t3556372712 ** get_address_of_onCustomInput_26() { return &___onCustomInput_26; }
	inline void set_onCustomInput_26(OnCustomInput_t3556372712 * value)
	{
		___onCustomInput_26 = value;
		Il2CppCodeGenWriteBarrier(&___onCustomInput_26, value);
	}

	inline static int32_t get_offset_of_showTooltips_27() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___showTooltips_27)); }
	inline bool get_showTooltips_27() const { return ___showTooltips_27; }
	inline bool* get_address_of_showTooltips_27() { return &___showTooltips_27; }
	inline void set_showTooltips_27(bool value)
	{
		___showTooltips_27 = value;
	}

	inline static int32_t get_offset_of_lastTouchPosition_28() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___lastTouchPosition_28)); }
	inline Vector2_t2243707579  get_lastTouchPosition_28() const { return ___lastTouchPosition_28; }
	inline Vector2_t2243707579 * get_address_of_lastTouchPosition_28() { return &___lastTouchPosition_28; }
	inline void set_lastTouchPosition_28(Vector2_t2243707579  value)
	{
		___lastTouchPosition_28 = value;
	}

	inline static int32_t get_offset_of_lastHit_29() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___lastHit_29)); }
	inline RaycastHit_t87180320  get_lastHit_29() const { return ___lastHit_29; }
	inline RaycastHit_t87180320 * get_address_of_lastHit_29() { return &___lastHit_29; }
	inline void set_lastHit_29(RaycastHit_t87180320  value)
	{
		___lastHit_29 = value;
	}

	inline static int32_t get_offset_of_current_30() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___current_30)); }
	inline UICamera_t1496819779 * get_current_30() const { return ___current_30; }
	inline UICamera_t1496819779 ** get_address_of_current_30() { return &___current_30; }
	inline void set_current_30(UICamera_t1496819779 * value)
	{
		___current_30 = value;
		Il2CppCodeGenWriteBarrier(&___current_30, value);
	}

	inline static int32_t get_offset_of_currentCamera_31() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___currentCamera_31)); }
	inline Camera_t189460977 * get_currentCamera_31() const { return ___currentCamera_31; }
	inline Camera_t189460977 ** get_address_of_currentCamera_31() { return &___currentCamera_31; }
	inline void set_currentCamera_31(Camera_t189460977 * value)
	{
		___currentCamera_31 = value;
		Il2CppCodeGenWriteBarrier(&___currentCamera_31, value);
	}

	inline static int32_t get_offset_of_currentScheme_32() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___currentScheme_32)); }
	inline int32_t get_currentScheme_32() const { return ___currentScheme_32; }
	inline int32_t* get_address_of_currentScheme_32() { return &___currentScheme_32; }
	inline void set_currentScheme_32(int32_t value)
	{
		___currentScheme_32 = value;
	}

	inline static int32_t get_offset_of_currentTouchID_33() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___currentTouchID_33)); }
	inline int32_t get_currentTouchID_33() const { return ___currentTouchID_33; }
	inline int32_t* get_address_of_currentTouchID_33() { return &___currentTouchID_33; }
	inline void set_currentTouchID_33(int32_t value)
	{
		___currentTouchID_33 = value;
	}

	inline static int32_t get_offset_of_currentKey_34() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___currentKey_34)); }
	inline int32_t get_currentKey_34() const { return ___currentKey_34; }
	inline int32_t* get_address_of_currentKey_34() { return &___currentKey_34; }
	inline void set_currentKey_34(int32_t value)
	{
		___currentKey_34 = value;
	}

	inline static int32_t get_offset_of_currentTouch_35() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___currentTouch_35)); }
	inline MouseOrTouch_t2470076277 * get_currentTouch_35() const { return ___currentTouch_35; }
	inline MouseOrTouch_t2470076277 ** get_address_of_currentTouch_35() { return &___currentTouch_35; }
	inline void set_currentTouch_35(MouseOrTouch_t2470076277 * value)
	{
		___currentTouch_35 = value;
		Il2CppCodeGenWriteBarrier(&___currentTouch_35, value);
	}

	inline static int32_t get_offset_of_inputHasFocus_36() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___inputHasFocus_36)); }
	inline bool get_inputHasFocus_36() const { return ___inputHasFocus_36; }
	inline bool* get_address_of_inputHasFocus_36() { return &___inputHasFocus_36; }
	inline void set_inputHasFocus_36(bool value)
	{
		___inputHasFocus_36 = value;
	}

	inline static int32_t get_offset_of_genericEventHandler_37() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___genericEventHandler_37)); }
	inline GameObject_t1756533147 * get_genericEventHandler_37() const { return ___genericEventHandler_37; }
	inline GameObject_t1756533147 ** get_address_of_genericEventHandler_37() { return &___genericEventHandler_37; }
	inline void set_genericEventHandler_37(GameObject_t1756533147 * value)
	{
		___genericEventHandler_37 = value;
		Il2CppCodeGenWriteBarrier(&___genericEventHandler_37, value);
	}

	inline static int32_t get_offset_of_fallThrough_38() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___fallThrough_38)); }
	inline GameObject_t1756533147 * get_fallThrough_38() const { return ___fallThrough_38; }
	inline GameObject_t1756533147 ** get_address_of_fallThrough_38() { return &___fallThrough_38; }
	inline void set_fallThrough_38(GameObject_t1756533147 * value)
	{
		___fallThrough_38 = value;
		Il2CppCodeGenWriteBarrier(&___fallThrough_38, value);
	}

	inline static int32_t get_offset_of_mCurrentSelection_39() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___mCurrentSelection_39)); }
	inline GameObject_t1756533147 * get_mCurrentSelection_39() const { return ___mCurrentSelection_39; }
	inline GameObject_t1756533147 ** get_address_of_mCurrentSelection_39() { return &___mCurrentSelection_39; }
	inline void set_mCurrentSelection_39(GameObject_t1756533147 * value)
	{
		___mCurrentSelection_39 = value;
		Il2CppCodeGenWriteBarrier(&___mCurrentSelection_39, value);
	}

	inline static int32_t get_offset_of_mCurrentInput_40() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___mCurrentInput_40)); }
	inline UIInput_t860674234 * get_mCurrentInput_40() const { return ___mCurrentInput_40; }
	inline UIInput_t860674234 ** get_address_of_mCurrentInput_40() { return &___mCurrentInput_40; }
	inline void set_mCurrentInput_40(UIInput_t860674234 * value)
	{
		___mCurrentInput_40 = value;
		Il2CppCodeGenWriteBarrier(&___mCurrentInput_40, value);
	}

	inline static int32_t get_offset_of_mNextSelection_41() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___mNextSelection_41)); }
	inline GameObject_t1756533147 * get_mNextSelection_41() const { return ___mNextSelection_41; }
	inline GameObject_t1756533147 ** get_address_of_mNextSelection_41() { return &___mNextSelection_41; }
	inline void set_mNextSelection_41(GameObject_t1756533147 * value)
	{
		___mNextSelection_41 = value;
		Il2CppCodeGenWriteBarrier(&___mNextSelection_41, value);
	}

	inline static int32_t get_offset_of_mNextScheme_42() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___mNextScheme_42)); }
	inline int32_t get_mNextScheme_42() const { return ___mNextScheme_42; }
	inline int32_t* get_address_of_mNextScheme_42() { return &___mNextScheme_42; }
	inline void set_mNextScheme_42(int32_t value)
	{
		___mNextScheme_42 = value;
	}

	inline static int32_t get_offset_of_mMouse_43() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___mMouse_43)); }
	inline MouseOrTouchU5BU5D_t3885609752* get_mMouse_43() const { return ___mMouse_43; }
	inline MouseOrTouchU5BU5D_t3885609752** get_address_of_mMouse_43() { return &___mMouse_43; }
	inline void set_mMouse_43(MouseOrTouchU5BU5D_t3885609752* value)
	{
		___mMouse_43 = value;
		Il2CppCodeGenWriteBarrier(&___mMouse_43, value);
	}

	inline static int32_t get_offset_of_mHover_44() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___mHover_44)); }
	inline GameObject_t1756533147 * get_mHover_44() const { return ___mHover_44; }
	inline GameObject_t1756533147 ** get_address_of_mHover_44() { return &___mHover_44; }
	inline void set_mHover_44(GameObject_t1756533147 * value)
	{
		___mHover_44 = value;
		Il2CppCodeGenWriteBarrier(&___mHover_44, value);
	}

	inline static int32_t get_offset_of_controller_45() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___controller_45)); }
	inline MouseOrTouch_t2470076277 * get_controller_45() const { return ___controller_45; }
	inline MouseOrTouch_t2470076277 ** get_address_of_controller_45() { return &___controller_45; }
	inline void set_controller_45(MouseOrTouch_t2470076277 * value)
	{
		___controller_45 = value;
		Il2CppCodeGenWriteBarrier(&___controller_45, value);
	}

	inline static int32_t get_offset_of_mNextEvent_46() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___mNextEvent_46)); }
	inline float get_mNextEvent_46() const { return ___mNextEvent_46; }
	inline float* get_address_of_mNextEvent_46() { return &___mNextEvent_46; }
	inline void set_mNextEvent_46(float value)
	{
		___mNextEvent_46 = value;
	}

	inline static int32_t get_offset_of_mTouches_47() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___mTouches_47)); }
	inline Dictionary_2_t1477901912 * get_mTouches_47() const { return ___mTouches_47; }
	inline Dictionary_2_t1477901912 ** get_address_of_mTouches_47() { return &___mTouches_47; }
	inline void set_mTouches_47(Dictionary_2_t1477901912 * value)
	{
		___mTouches_47 = value;
		Il2CppCodeGenWriteBarrier(&___mTouches_47, value);
	}

	inline static int32_t get_offset_of_mWidth_48() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___mWidth_48)); }
	inline int32_t get_mWidth_48() const { return ___mWidth_48; }
	inline int32_t* get_address_of_mWidth_48() { return &___mWidth_48; }
	inline void set_mWidth_48(int32_t value)
	{
		___mWidth_48 = value;
	}

	inline static int32_t get_offset_of_mHeight_49() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___mHeight_49)); }
	inline int32_t get_mHeight_49() const { return ___mHeight_49; }
	inline int32_t* get_address_of_mHeight_49() { return &___mHeight_49; }
	inline void set_mHeight_49(int32_t value)
	{
		___mHeight_49 = value;
	}

	inline static int32_t get_offset_of_isDragging_54() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___isDragging_54)); }
	inline bool get_isDragging_54() const { return ___isDragging_54; }
	inline bool* get_address_of_isDragging_54() { return &___isDragging_54; }
	inline void set_isDragging_54(bool value)
	{
		___isDragging_54 = value;
	}

	inline static int32_t get_offset_of_hoveredObject_55() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___hoveredObject_55)); }
	inline GameObject_t1756533147 * get_hoveredObject_55() const { return ___hoveredObject_55; }
	inline GameObject_t1756533147 ** get_address_of_hoveredObject_55() { return &___hoveredObject_55; }
	inline void set_hoveredObject_55(GameObject_t1756533147 * value)
	{
		___hoveredObject_55 = value;
		Il2CppCodeGenWriteBarrier(&___hoveredObject_55, value);
	}

	inline static int32_t get_offset_of_MAX_TOUCHES_COUNT_56() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___MAX_TOUCHES_COUNT_56)); }
	inline int32_t get_MAX_TOUCHES_COUNT_56() const { return ___MAX_TOUCHES_COUNT_56; }
	inline int32_t* get_address_of_MAX_TOUCHES_COUNT_56() { return &___MAX_TOUCHES_COUNT_56; }
	inline void set_MAX_TOUCHES_COUNT_56(int32_t value)
	{
		___MAX_TOUCHES_COUNT_56 = value;
	}

	inline static int32_t get_offset_of_is3DTouchSupported_57() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___is3DTouchSupported_57)); }
	inline bool get_is3DTouchSupported_57() const { return ___is3DTouchSupported_57; }
	inline bool* get_address_of_is3DTouchSupported_57() { return &___is3DTouchSupported_57; }
	inline void set_is3DTouchSupported_57(bool value)
	{
		___is3DTouchSupported_57 = value;
	}

	inline static int32_t get_offset_of_s_curTouchesCount_58() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___s_curTouchesCount_58)); }
	inline int32_t get_s_curTouchesCount_58() const { return ___s_curTouchesCount_58; }
	inline int32_t* get_address_of_s_curTouchesCount_58() { return &___s_curTouchesCount_58; }
	inline void set_s_curTouchesCount_58(int32_t value)
	{
		___s_curTouchesCount_58 = value;
	}

	inline static int32_t get_offset_of_s_preTouchesCount_59() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___s_preTouchesCount_59)); }
	inline int32_t get_s_preTouchesCount_59() const { return ___s_preTouchesCount_59; }
	inline int32_t* get_address_of_s_preTouchesCount_59() { return &___s_preTouchesCount_59; }
	inline void set_s_preTouchesCount_59(int32_t value)
	{
		___s_preTouchesCount_59 = value;
	}

	inline static int32_t get_offset_of_s_curTouches_60() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___s_curTouches_60)); }
	inline PressureTouchU5BU5D_t4245130885* get_s_curTouches_60() const { return ___s_curTouches_60; }
	inline PressureTouchU5BU5D_t4245130885** get_address_of_s_curTouches_60() { return &___s_curTouches_60; }
	inline void set_s_curTouches_60(PressureTouchU5BU5D_t4245130885* value)
	{
		___s_curTouches_60 = value;
		Il2CppCodeGenWriteBarrier(&___s_curTouches_60, value);
	}

	inline static int32_t get_offset_of_s_preTouches_61() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___s_preTouches_61)); }
	inline PressureTouchU5BU5D_t4245130885* get_s_preTouches_61() const { return ___s_preTouches_61; }
	inline PressureTouchU5BU5D_t4245130885** get_address_of_s_preTouches_61() { return &___s_preTouches_61; }
	inline void set_s_preTouches_61(PressureTouchU5BU5D_t4245130885* value)
	{
		___s_preTouches_61 = value;
		Il2CppCodeGenWriteBarrier(&___s_preTouches_61, value);
	}

	inline static int32_t get_offset_of_mHit_62() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___mHit_62)); }
	inline DepthEntry_t974746545  get_mHit_62() const { return ___mHit_62; }
	inline DepthEntry_t974746545 * get_address_of_mHit_62() { return &___mHit_62; }
	inline void set_mHit_62(DepthEntry_t974746545  value)
	{
		___mHit_62 = value;
	}

	inline static int32_t get_offset_of_mHits_63() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___mHits_63)); }
	inline BetterList_1_t1195135187 * get_mHits_63() const { return ___mHits_63; }
	inline BetterList_1_t1195135187 ** get_address_of_mHits_63() { return &___mHits_63; }
	inline void set_mHits_63(BetterList_1_t1195135187 * value)
	{
		___mHits_63 = value;
		Il2CppCodeGenWriteBarrier(&___mHits_63, value);
	}

	inline static int32_t get_offset_of_mEmpty_64() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___mEmpty_64)); }
	inline RaycastHit_t87180320  get_mEmpty_64() const { return ___mEmpty_64; }
	inline RaycastHit_t87180320 * get_address_of_mEmpty_64() { return &___mEmpty_64; }
	inline void set_mEmpty_64(RaycastHit_t87180320  value)
	{
		___mEmpty_64 = value;
	}

	inline static int32_t get_offset_of_m2DPlane_65() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___m2DPlane_65)); }
	inline Plane_t3727654732  get_m2DPlane_65() const { return ___m2DPlane_65; }
	inline Plane_t3727654732 * get_address_of_m2DPlane_65() { return &___m2DPlane_65; }
	inline void set_m2DPlane_65(Plane_t3727654732  value)
	{
		___m2DPlane_65 = value;
	}

	inline static int32_t get_offset_of_mNotifying_66() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___mNotifying_66)); }
	inline bool get_mNotifying_66() const { return ___mNotifying_66; }
	inline bool* get_address_of_mNotifying_66() { return &___mNotifying_66; }
	inline void set_mNotifying_66(bool value)
	{
		___mNotifying_66 = value;
	}

	inline static int32_t get_offset_of_moNotifyLisnter_67() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___moNotifyLisnter_67)); }
	inline OnNotifyUIEvent_t3025032372 * get_moNotifyLisnter_67() const { return ___moNotifyLisnter_67; }
	inline OnNotifyUIEvent_t3025032372 ** get_address_of_moNotifyLisnter_67() { return &___moNotifyLisnter_67; }
	inline void set_moNotifyLisnter_67(OnNotifyUIEvent_t3025032372 * value)
	{
		___moNotifyLisnter_67 = value;
		Il2CppCodeGenWriteBarrier(&___moNotifyLisnter_67, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache42_68() { return static_cast<int32_t>(offsetof(UICamera_t1496819779_StaticFields, ___U3CU3Ef__amU24cache42_68)); }
	inline CompareFunc_t3102027737 * get_U3CU3Ef__amU24cache42_68() const { return ___U3CU3Ef__amU24cache42_68; }
	inline CompareFunc_t3102027737 ** get_address_of_U3CU3Ef__amU24cache42_68() { return &___U3CU3Ef__amU24cache42_68; }
	inline void set_U3CU3Ef__amU24cache42_68(CompareFunc_t3102027737 * value)
	{
		___U3CU3Ef__amU24cache42_68 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache42_68, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
