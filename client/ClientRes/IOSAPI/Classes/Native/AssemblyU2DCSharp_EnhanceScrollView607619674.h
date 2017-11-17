#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// EnhanceScrollView/OnDragEndCallBack
struct OnDragEndCallBack_t3367547050;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;
// EnhanceItem
struct EnhanceItem_t1489569341;
// UnityEngine.Camera
struct Camera_t189460977;
// EnhanceScrollViewDragController
struct EnhanceScrollViewDragController_t1105618240;
// System.Collections.Generic.List`1<EnhanceItem>
struct List_1_t858690473;
// EnhanceScrollView
struct EnhanceScrollView_t607619674;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_EnhanceScrollView_InputSystemTyp2931967552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnhanceScrollView
struct  EnhanceScrollView_t607619674  : public MonoBehaviour_t1158329972
{
public:
	// EnhanceScrollView/OnDragEndCallBack EnhanceScrollView::callBack
	OnDragEndCallBack_t3367547050 * ___callBack_2;
	// EnhanceScrollView/InputSystemType EnhanceScrollView::inputType
	int32_t ___inputType_3;
	// UnityEngine.AnimationCurve EnhanceScrollView::scaleCurve
	AnimationCurve_t3306541151 * ___scaleCurve_4;
	// UnityEngine.AnimationCurve EnhanceScrollView::positionCurve
	AnimationCurve_t3306541151 * ___positionCurve_5;
	// UnityEngine.AnimationCurve EnhanceScrollView::positionCurveY
	AnimationCurve_t3306541151 * ___positionCurveY_6;
	// UnityEngine.AnimationCurve EnhanceScrollView::depthCurve
	AnimationCurve_t3306541151 * ___depthCurve_7;
	// System.Int32 EnhanceScrollView::startCenterIndex
	int32_t ___startCenterIndex_8;
	// System.Single EnhanceScrollView::cellWidth
	float ___cellWidth_9;
	// System.Single EnhanceScrollView::SpaceHeight
	float ___SpaceHeight_10;
	// System.Single EnhanceScrollView::totalHorizontalWidth
	float ___totalHorizontalWidth_11;
	// System.Single EnhanceScrollView::yFixedPositionValue
	float ___yFixedPositionValue_12;
	// System.Single EnhanceScrollView::lerpDuration
	float ___lerpDuration_13;
	// System.Single EnhanceScrollView::mCurrentDuration
	float ___mCurrentDuration_14;
	// System.Int32 EnhanceScrollView::mCenterIndex
	int32_t ___mCenterIndex_15;
	// System.Boolean EnhanceScrollView::enableLerpTween
	bool ___enableLerpTween_16;
	// EnhanceItem EnhanceScrollView::curCenterItem
	EnhanceItem_t1489569341 * ___curCenterItem_17;
	// EnhanceItem EnhanceScrollView::preCenterItem
	EnhanceItem_t1489569341 * ___preCenterItem_18;
	// System.Boolean EnhanceScrollView::canChangeItem
	bool ___canChangeItem_19;
	// System.Single EnhanceScrollView::dFactor
	float ___dFactor_20;
	// System.Single EnhanceScrollView::originHorizontalValue
	float ___originHorizontalValue_21;
	// System.Single EnhanceScrollView::curHorizontalValue
	float ___curHorizontalValue_22;
	// System.Int32 EnhanceScrollView::depthFactor
	int32_t ___depthFactor_23;
	// UnityEngine.Camera EnhanceScrollView::sourceCamera
	Camera_t189460977 * ___sourceCamera_24;
	// EnhanceScrollViewDragController EnhanceScrollView::dragController
	EnhanceScrollViewDragController_t1105618240 * ___dragController_25;
	// System.Collections.Generic.List`1<EnhanceItem> EnhanceScrollView::listEnhanceItems
	List_1_t858690473 * ___listEnhanceItems_26;
	// System.Collections.Generic.List`1<EnhanceItem> EnhanceScrollView::listSortedItems
	List_1_t858690473 * ___listSortedItems_27;
	// System.Single EnhanceScrollView::factor
	float ___factor_29;

public:
	inline static int32_t get_offset_of_callBack_2() { return static_cast<int32_t>(offsetof(EnhanceScrollView_t607619674, ___callBack_2)); }
	inline OnDragEndCallBack_t3367547050 * get_callBack_2() const { return ___callBack_2; }
	inline OnDragEndCallBack_t3367547050 ** get_address_of_callBack_2() { return &___callBack_2; }
	inline void set_callBack_2(OnDragEndCallBack_t3367547050 * value)
	{
		___callBack_2 = value;
		Il2CppCodeGenWriteBarrier(&___callBack_2, value);
	}

	inline static int32_t get_offset_of_inputType_3() { return static_cast<int32_t>(offsetof(EnhanceScrollView_t607619674, ___inputType_3)); }
	inline int32_t get_inputType_3() const { return ___inputType_3; }
	inline int32_t* get_address_of_inputType_3() { return &___inputType_3; }
	inline void set_inputType_3(int32_t value)
	{
		___inputType_3 = value;
	}

	inline static int32_t get_offset_of_scaleCurve_4() { return static_cast<int32_t>(offsetof(EnhanceScrollView_t607619674, ___scaleCurve_4)); }
	inline AnimationCurve_t3306541151 * get_scaleCurve_4() const { return ___scaleCurve_4; }
	inline AnimationCurve_t3306541151 ** get_address_of_scaleCurve_4() { return &___scaleCurve_4; }
	inline void set_scaleCurve_4(AnimationCurve_t3306541151 * value)
	{
		___scaleCurve_4 = value;
		Il2CppCodeGenWriteBarrier(&___scaleCurve_4, value);
	}

	inline static int32_t get_offset_of_positionCurve_5() { return static_cast<int32_t>(offsetof(EnhanceScrollView_t607619674, ___positionCurve_5)); }
	inline AnimationCurve_t3306541151 * get_positionCurve_5() const { return ___positionCurve_5; }
	inline AnimationCurve_t3306541151 ** get_address_of_positionCurve_5() { return &___positionCurve_5; }
	inline void set_positionCurve_5(AnimationCurve_t3306541151 * value)
	{
		___positionCurve_5 = value;
		Il2CppCodeGenWriteBarrier(&___positionCurve_5, value);
	}

	inline static int32_t get_offset_of_positionCurveY_6() { return static_cast<int32_t>(offsetof(EnhanceScrollView_t607619674, ___positionCurveY_6)); }
	inline AnimationCurve_t3306541151 * get_positionCurveY_6() const { return ___positionCurveY_6; }
	inline AnimationCurve_t3306541151 ** get_address_of_positionCurveY_6() { return &___positionCurveY_6; }
	inline void set_positionCurveY_6(AnimationCurve_t3306541151 * value)
	{
		___positionCurveY_6 = value;
		Il2CppCodeGenWriteBarrier(&___positionCurveY_6, value);
	}

	inline static int32_t get_offset_of_depthCurve_7() { return static_cast<int32_t>(offsetof(EnhanceScrollView_t607619674, ___depthCurve_7)); }
	inline AnimationCurve_t3306541151 * get_depthCurve_7() const { return ___depthCurve_7; }
	inline AnimationCurve_t3306541151 ** get_address_of_depthCurve_7() { return &___depthCurve_7; }
	inline void set_depthCurve_7(AnimationCurve_t3306541151 * value)
	{
		___depthCurve_7 = value;
		Il2CppCodeGenWriteBarrier(&___depthCurve_7, value);
	}

	inline static int32_t get_offset_of_startCenterIndex_8() { return static_cast<int32_t>(offsetof(EnhanceScrollView_t607619674, ___startCenterIndex_8)); }
	inline int32_t get_startCenterIndex_8() const { return ___startCenterIndex_8; }
	inline int32_t* get_address_of_startCenterIndex_8() { return &___startCenterIndex_8; }
	inline void set_startCenterIndex_8(int32_t value)
	{
		___startCenterIndex_8 = value;
	}

	inline static int32_t get_offset_of_cellWidth_9() { return static_cast<int32_t>(offsetof(EnhanceScrollView_t607619674, ___cellWidth_9)); }
	inline float get_cellWidth_9() const { return ___cellWidth_9; }
	inline float* get_address_of_cellWidth_9() { return &___cellWidth_9; }
	inline void set_cellWidth_9(float value)
	{
		___cellWidth_9 = value;
	}

	inline static int32_t get_offset_of_SpaceHeight_10() { return static_cast<int32_t>(offsetof(EnhanceScrollView_t607619674, ___SpaceHeight_10)); }
	inline float get_SpaceHeight_10() const { return ___SpaceHeight_10; }
	inline float* get_address_of_SpaceHeight_10() { return &___SpaceHeight_10; }
	inline void set_SpaceHeight_10(float value)
	{
		___SpaceHeight_10 = value;
	}

	inline static int32_t get_offset_of_totalHorizontalWidth_11() { return static_cast<int32_t>(offsetof(EnhanceScrollView_t607619674, ___totalHorizontalWidth_11)); }
	inline float get_totalHorizontalWidth_11() const { return ___totalHorizontalWidth_11; }
	inline float* get_address_of_totalHorizontalWidth_11() { return &___totalHorizontalWidth_11; }
	inline void set_totalHorizontalWidth_11(float value)
	{
		___totalHorizontalWidth_11 = value;
	}

	inline static int32_t get_offset_of_yFixedPositionValue_12() { return static_cast<int32_t>(offsetof(EnhanceScrollView_t607619674, ___yFixedPositionValue_12)); }
	inline float get_yFixedPositionValue_12() const { return ___yFixedPositionValue_12; }
	inline float* get_address_of_yFixedPositionValue_12() { return &___yFixedPositionValue_12; }
	inline void set_yFixedPositionValue_12(float value)
	{
		___yFixedPositionValue_12 = value;
	}

	inline static int32_t get_offset_of_lerpDuration_13() { return static_cast<int32_t>(offsetof(EnhanceScrollView_t607619674, ___lerpDuration_13)); }
	inline float get_lerpDuration_13() const { return ___lerpDuration_13; }
	inline float* get_address_of_lerpDuration_13() { return &___lerpDuration_13; }
	inline void set_lerpDuration_13(float value)
	{
		___lerpDuration_13 = value;
	}

	inline static int32_t get_offset_of_mCurrentDuration_14() { return static_cast<int32_t>(offsetof(EnhanceScrollView_t607619674, ___mCurrentDuration_14)); }
	inline float get_mCurrentDuration_14() const { return ___mCurrentDuration_14; }
	inline float* get_address_of_mCurrentDuration_14() { return &___mCurrentDuration_14; }
	inline void set_mCurrentDuration_14(float value)
	{
		___mCurrentDuration_14 = value;
	}

	inline static int32_t get_offset_of_mCenterIndex_15() { return static_cast<int32_t>(offsetof(EnhanceScrollView_t607619674, ___mCenterIndex_15)); }
	inline int32_t get_mCenterIndex_15() const { return ___mCenterIndex_15; }
	inline int32_t* get_address_of_mCenterIndex_15() { return &___mCenterIndex_15; }
	inline void set_mCenterIndex_15(int32_t value)
	{
		___mCenterIndex_15 = value;
	}

	inline static int32_t get_offset_of_enableLerpTween_16() { return static_cast<int32_t>(offsetof(EnhanceScrollView_t607619674, ___enableLerpTween_16)); }
	inline bool get_enableLerpTween_16() const { return ___enableLerpTween_16; }
	inline bool* get_address_of_enableLerpTween_16() { return &___enableLerpTween_16; }
	inline void set_enableLerpTween_16(bool value)
	{
		___enableLerpTween_16 = value;
	}

	inline static int32_t get_offset_of_curCenterItem_17() { return static_cast<int32_t>(offsetof(EnhanceScrollView_t607619674, ___curCenterItem_17)); }
	inline EnhanceItem_t1489569341 * get_curCenterItem_17() const { return ___curCenterItem_17; }
	inline EnhanceItem_t1489569341 ** get_address_of_curCenterItem_17() { return &___curCenterItem_17; }
	inline void set_curCenterItem_17(EnhanceItem_t1489569341 * value)
	{
		___curCenterItem_17 = value;
		Il2CppCodeGenWriteBarrier(&___curCenterItem_17, value);
	}

	inline static int32_t get_offset_of_preCenterItem_18() { return static_cast<int32_t>(offsetof(EnhanceScrollView_t607619674, ___preCenterItem_18)); }
	inline EnhanceItem_t1489569341 * get_preCenterItem_18() const { return ___preCenterItem_18; }
	inline EnhanceItem_t1489569341 ** get_address_of_preCenterItem_18() { return &___preCenterItem_18; }
	inline void set_preCenterItem_18(EnhanceItem_t1489569341 * value)
	{
		___preCenterItem_18 = value;
		Il2CppCodeGenWriteBarrier(&___preCenterItem_18, value);
	}

	inline static int32_t get_offset_of_canChangeItem_19() { return static_cast<int32_t>(offsetof(EnhanceScrollView_t607619674, ___canChangeItem_19)); }
	inline bool get_canChangeItem_19() const { return ___canChangeItem_19; }
	inline bool* get_address_of_canChangeItem_19() { return &___canChangeItem_19; }
	inline void set_canChangeItem_19(bool value)
	{
		___canChangeItem_19 = value;
	}

	inline static int32_t get_offset_of_dFactor_20() { return static_cast<int32_t>(offsetof(EnhanceScrollView_t607619674, ___dFactor_20)); }
	inline float get_dFactor_20() const { return ___dFactor_20; }
	inline float* get_address_of_dFactor_20() { return &___dFactor_20; }
	inline void set_dFactor_20(float value)
	{
		___dFactor_20 = value;
	}

	inline static int32_t get_offset_of_originHorizontalValue_21() { return static_cast<int32_t>(offsetof(EnhanceScrollView_t607619674, ___originHorizontalValue_21)); }
	inline float get_originHorizontalValue_21() const { return ___originHorizontalValue_21; }
	inline float* get_address_of_originHorizontalValue_21() { return &___originHorizontalValue_21; }
	inline void set_originHorizontalValue_21(float value)
	{
		___originHorizontalValue_21 = value;
	}

	inline static int32_t get_offset_of_curHorizontalValue_22() { return static_cast<int32_t>(offsetof(EnhanceScrollView_t607619674, ___curHorizontalValue_22)); }
	inline float get_curHorizontalValue_22() const { return ___curHorizontalValue_22; }
	inline float* get_address_of_curHorizontalValue_22() { return &___curHorizontalValue_22; }
	inline void set_curHorizontalValue_22(float value)
	{
		___curHorizontalValue_22 = value;
	}

	inline static int32_t get_offset_of_depthFactor_23() { return static_cast<int32_t>(offsetof(EnhanceScrollView_t607619674, ___depthFactor_23)); }
	inline int32_t get_depthFactor_23() const { return ___depthFactor_23; }
	inline int32_t* get_address_of_depthFactor_23() { return &___depthFactor_23; }
	inline void set_depthFactor_23(int32_t value)
	{
		___depthFactor_23 = value;
	}

	inline static int32_t get_offset_of_sourceCamera_24() { return static_cast<int32_t>(offsetof(EnhanceScrollView_t607619674, ___sourceCamera_24)); }
	inline Camera_t189460977 * get_sourceCamera_24() const { return ___sourceCamera_24; }
	inline Camera_t189460977 ** get_address_of_sourceCamera_24() { return &___sourceCamera_24; }
	inline void set_sourceCamera_24(Camera_t189460977 * value)
	{
		___sourceCamera_24 = value;
		Il2CppCodeGenWriteBarrier(&___sourceCamera_24, value);
	}

	inline static int32_t get_offset_of_dragController_25() { return static_cast<int32_t>(offsetof(EnhanceScrollView_t607619674, ___dragController_25)); }
	inline EnhanceScrollViewDragController_t1105618240 * get_dragController_25() const { return ___dragController_25; }
	inline EnhanceScrollViewDragController_t1105618240 ** get_address_of_dragController_25() { return &___dragController_25; }
	inline void set_dragController_25(EnhanceScrollViewDragController_t1105618240 * value)
	{
		___dragController_25 = value;
		Il2CppCodeGenWriteBarrier(&___dragController_25, value);
	}

	inline static int32_t get_offset_of_listEnhanceItems_26() { return static_cast<int32_t>(offsetof(EnhanceScrollView_t607619674, ___listEnhanceItems_26)); }
	inline List_1_t858690473 * get_listEnhanceItems_26() const { return ___listEnhanceItems_26; }
	inline List_1_t858690473 ** get_address_of_listEnhanceItems_26() { return &___listEnhanceItems_26; }
	inline void set_listEnhanceItems_26(List_1_t858690473 * value)
	{
		___listEnhanceItems_26 = value;
		Il2CppCodeGenWriteBarrier(&___listEnhanceItems_26, value);
	}

	inline static int32_t get_offset_of_listSortedItems_27() { return static_cast<int32_t>(offsetof(EnhanceScrollView_t607619674, ___listSortedItems_27)); }
	inline List_1_t858690473 * get_listSortedItems_27() const { return ___listSortedItems_27; }
	inline List_1_t858690473 ** get_address_of_listSortedItems_27() { return &___listSortedItems_27; }
	inline void set_listSortedItems_27(List_1_t858690473 * value)
	{
		___listSortedItems_27 = value;
		Il2CppCodeGenWriteBarrier(&___listSortedItems_27, value);
	}

	inline static int32_t get_offset_of_factor_29() { return static_cast<int32_t>(offsetof(EnhanceScrollView_t607619674, ___factor_29)); }
	inline float get_factor_29() const { return ___factor_29; }
	inline float* get_address_of_factor_29() { return &___factor_29; }
	inline void set_factor_29(float value)
	{
		___factor_29 = value;
	}
};

struct EnhanceScrollView_t607619674_StaticFields
{
public:
	// EnhanceScrollView EnhanceScrollView::instance
	EnhanceScrollView_t607619674 * ___instance_28;

public:
	inline static int32_t get_offset_of_instance_28() { return static_cast<int32_t>(offsetof(EnhanceScrollView_t607619674_StaticFields, ___instance_28)); }
	inline EnhanceScrollView_t607619674 * get_instance_28() const { return ___instance_28; }
	inline EnhanceScrollView_t607619674 ** get_address_of_instance_28() { return &___instance_28; }
	inline void set_instance_28(EnhanceScrollView_t607619674 * value)
	{
		___instance_28 = value;
		Il2CppCodeGenWriteBarrier(&___instance_28, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
