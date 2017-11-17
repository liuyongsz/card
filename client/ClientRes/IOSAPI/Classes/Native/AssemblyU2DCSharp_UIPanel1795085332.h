#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BetterList`1<UIPanel>
struct BetterList_1_t2015473974;
// UIPanel/OnGeometryUpdated
struct OnGeometryUpdated_t754882645;
// BetterList`1<UIWidget>
struct BetterList_1_t1673430560;
// BetterList`1<UIDrawCall>
struct BetterList_1_t3512232154;
// BetterList`1<AdaptiveRenderQueue>
struct BetterList_1_t1516581633;
// UIPanel/OnClippingMoved
struct OnClippingMoved_t4045505957;
// UnityEngine.Camera
struct Camera_t189460977;
// System.Single[]
struct SingleU5BU5D_t577127397;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;

#include "AssemblyU2DCSharp_UIRect4127168124.h"
#include "AssemblyU2DCSharp_UIPanel_RenderQueue1879567704.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "AssemblyU2DCSharp_UIDrawCall_Clipping4042448929.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIPanel
struct  UIPanel_t1795085332  : public UIRect_t4127168124
{
public:
	// UIPanel/OnGeometryUpdated UIPanel::onGeometryUpdated
	OnGeometryUpdated_t754882645 * ___onGeometryUpdated_23;
	// System.Boolean UIPanel::showInPanelTool
	bool ___showInPanelTool_24;
	// System.Boolean UIPanel::generateNormals
	bool ___generateNormals_25;
	// System.Boolean UIPanel::widgetsAreStatic
	bool ___widgetsAreStatic_26;
	// System.Boolean UIPanel::cullWhileDragging
	bool ___cullWhileDragging_27;
	// System.Boolean UIPanel::alwaysOnScreen
	bool ___alwaysOnScreen_28;
	// System.Boolean UIPanel::anchorOffset
	bool ___anchorOffset_29;
	// UIPanel/RenderQueue UIPanel::renderQueue
	int32_t ___renderQueue_30;
	// System.Int32 UIPanel::startingRenderQueue
	int32_t ___startingRenderQueue_31;
	// BetterList`1<UIWidget> UIPanel::widgets
	BetterList_1_t1673430560 * ___widgets_32;
	// BetterList`1<UIDrawCall> UIPanel::drawCalls
	BetterList_1_t3512232154 * ___drawCalls_33;
	// BetterList`1<AdaptiveRenderQueue> UIPanel::renderQuenes
	BetterList_1_t1516581633 * ___renderQuenes_34;
	// UnityEngine.Matrix4x4 UIPanel::worldToLocal
	Matrix4x4_t2933234003  ___worldToLocal_35;
	// UIPanel/OnClippingMoved UIPanel::onClipMove
	OnClippingMoved_t4045505957 * ___onClipMove_36;
	// System.Single UIPanel::mAlpha
	float ___mAlpha_37;
	// UIDrawCall/Clipping UIPanel::mClipping
	int32_t ___mClipping_38;
	// UnityEngine.Vector4 UIPanel::mClipRange
	Vector4_t2243707581  ___mClipRange_39;
	// UnityEngine.Vector2 UIPanel::mClipSoftness
	Vector2_t2243707579  ___mClipSoftness_40;
	// System.Int32 UIPanel::mDepth
	int32_t ___mDepth_41;
	// System.Int32 UIPanel::mSortingOrder
	int32_t ___mSortingOrder_42;
	// System.Boolean UIPanel::mRebuild
	bool ___mRebuild_43;
	// System.Boolean UIPanel::mResized
	bool ___mResized_44;
	// UnityEngine.Camera UIPanel::mCam
	Camera_t189460977 * ___mCam_45;
	// UnityEngine.Vector2 UIPanel::mClipOffset
	Vector2_t2243707579  ___mClipOffset_46;
	// System.Single UIPanel::mCullTime
	float ___mCullTime_47;
	// System.Single UIPanel::mUpdateTime
	float ___mUpdateTime_48;
	// System.Int32 UIPanel::mMatrixFrame
	int32_t ___mMatrixFrame_49;
	// System.Int32 UIPanel::mAlphaFrameID
	int32_t ___mAlphaFrameID_50;
	// System.Int32 UIPanel::mLayer
	int32_t ___mLayer_51;
	// UnityEngine.Vector2 UIPanel::mMin
	Vector2_t2243707579  ___mMin_53;
	// UnityEngine.Vector2 UIPanel::mMax
	Vector2_t2243707579  ___mMax_54;
	// System.Boolean UIPanel::mHalfPixelOffset
	bool ___mHalfPixelOffset_55;
	// System.Boolean UIPanel::mSortWidgets
	bool ___mSortWidgets_56;
	// System.Boolean UIPanel::mForced
	bool ___mForced_59;

public:
	inline static int32_t get_offset_of_onGeometryUpdated_23() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___onGeometryUpdated_23)); }
	inline OnGeometryUpdated_t754882645 * get_onGeometryUpdated_23() const { return ___onGeometryUpdated_23; }
	inline OnGeometryUpdated_t754882645 ** get_address_of_onGeometryUpdated_23() { return &___onGeometryUpdated_23; }
	inline void set_onGeometryUpdated_23(OnGeometryUpdated_t754882645 * value)
	{
		___onGeometryUpdated_23 = value;
		Il2CppCodeGenWriteBarrier(&___onGeometryUpdated_23, value);
	}

	inline static int32_t get_offset_of_showInPanelTool_24() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___showInPanelTool_24)); }
	inline bool get_showInPanelTool_24() const { return ___showInPanelTool_24; }
	inline bool* get_address_of_showInPanelTool_24() { return &___showInPanelTool_24; }
	inline void set_showInPanelTool_24(bool value)
	{
		___showInPanelTool_24 = value;
	}

	inline static int32_t get_offset_of_generateNormals_25() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___generateNormals_25)); }
	inline bool get_generateNormals_25() const { return ___generateNormals_25; }
	inline bool* get_address_of_generateNormals_25() { return &___generateNormals_25; }
	inline void set_generateNormals_25(bool value)
	{
		___generateNormals_25 = value;
	}

	inline static int32_t get_offset_of_widgetsAreStatic_26() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___widgetsAreStatic_26)); }
	inline bool get_widgetsAreStatic_26() const { return ___widgetsAreStatic_26; }
	inline bool* get_address_of_widgetsAreStatic_26() { return &___widgetsAreStatic_26; }
	inline void set_widgetsAreStatic_26(bool value)
	{
		___widgetsAreStatic_26 = value;
	}

	inline static int32_t get_offset_of_cullWhileDragging_27() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___cullWhileDragging_27)); }
	inline bool get_cullWhileDragging_27() const { return ___cullWhileDragging_27; }
	inline bool* get_address_of_cullWhileDragging_27() { return &___cullWhileDragging_27; }
	inline void set_cullWhileDragging_27(bool value)
	{
		___cullWhileDragging_27 = value;
	}

	inline static int32_t get_offset_of_alwaysOnScreen_28() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___alwaysOnScreen_28)); }
	inline bool get_alwaysOnScreen_28() const { return ___alwaysOnScreen_28; }
	inline bool* get_address_of_alwaysOnScreen_28() { return &___alwaysOnScreen_28; }
	inline void set_alwaysOnScreen_28(bool value)
	{
		___alwaysOnScreen_28 = value;
	}

	inline static int32_t get_offset_of_anchorOffset_29() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___anchorOffset_29)); }
	inline bool get_anchorOffset_29() const { return ___anchorOffset_29; }
	inline bool* get_address_of_anchorOffset_29() { return &___anchorOffset_29; }
	inline void set_anchorOffset_29(bool value)
	{
		___anchorOffset_29 = value;
	}

	inline static int32_t get_offset_of_renderQueue_30() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___renderQueue_30)); }
	inline int32_t get_renderQueue_30() const { return ___renderQueue_30; }
	inline int32_t* get_address_of_renderQueue_30() { return &___renderQueue_30; }
	inline void set_renderQueue_30(int32_t value)
	{
		___renderQueue_30 = value;
	}

	inline static int32_t get_offset_of_startingRenderQueue_31() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___startingRenderQueue_31)); }
	inline int32_t get_startingRenderQueue_31() const { return ___startingRenderQueue_31; }
	inline int32_t* get_address_of_startingRenderQueue_31() { return &___startingRenderQueue_31; }
	inline void set_startingRenderQueue_31(int32_t value)
	{
		___startingRenderQueue_31 = value;
	}

	inline static int32_t get_offset_of_widgets_32() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___widgets_32)); }
	inline BetterList_1_t1673430560 * get_widgets_32() const { return ___widgets_32; }
	inline BetterList_1_t1673430560 ** get_address_of_widgets_32() { return &___widgets_32; }
	inline void set_widgets_32(BetterList_1_t1673430560 * value)
	{
		___widgets_32 = value;
		Il2CppCodeGenWriteBarrier(&___widgets_32, value);
	}

	inline static int32_t get_offset_of_drawCalls_33() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___drawCalls_33)); }
	inline BetterList_1_t3512232154 * get_drawCalls_33() const { return ___drawCalls_33; }
	inline BetterList_1_t3512232154 ** get_address_of_drawCalls_33() { return &___drawCalls_33; }
	inline void set_drawCalls_33(BetterList_1_t3512232154 * value)
	{
		___drawCalls_33 = value;
		Il2CppCodeGenWriteBarrier(&___drawCalls_33, value);
	}

	inline static int32_t get_offset_of_renderQuenes_34() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___renderQuenes_34)); }
	inline BetterList_1_t1516581633 * get_renderQuenes_34() const { return ___renderQuenes_34; }
	inline BetterList_1_t1516581633 ** get_address_of_renderQuenes_34() { return &___renderQuenes_34; }
	inline void set_renderQuenes_34(BetterList_1_t1516581633 * value)
	{
		___renderQuenes_34 = value;
		Il2CppCodeGenWriteBarrier(&___renderQuenes_34, value);
	}

	inline static int32_t get_offset_of_worldToLocal_35() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___worldToLocal_35)); }
	inline Matrix4x4_t2933234003  get_worldToLocal_35() const { return ___worldToLocal_35; }
	inline Matrix4x4_t2933234003 * get_address_of_worldToLocal_35() { return &___worldToLocal_35; }
	inline void set_worldToLocal_35(Matrix4x4_t2933234003  value)
	{
		___worldToLocal_35 = value;
	}

	inline static int32_t get_offset_of_onClipMove_36() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___onClipMove_36)); }
	inline OnClippingMoved_t4045505957 * get_onClipMove_36() const { return ___onClipMove_36; }
	inline OnClippingMoved_t4045505957 ** get_address_of_onClipMove_36() { return &___onClipMove_36; }
	inline void set_onClipMove_36(OnClippingMoved_t4045505957 * value)
	{
		___onClipMove_36 = value;
		Il2CppCodeGenWriteBarrier(&___onClipMove_36, value);
	}

	inline static int32_t get_offset_of_mAlpha_37() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mAlpha_37)); }
	inline float get_mAlpha_37() const { return ___mAlpha_37; }
	inline float* get_address_of_mAlpha_37() { return &___mAlpha_37; }
	inline void set_mAlpha_37(float value)
	{
		___mAlpha_37 = value;
	}

	inline static int32_t get_offset_of_mClipping_38() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mClipping_38)); }
	inline int32_t get_mClipping_38() const { return ___mClipping_38; }
	inline int32_t* get_address_of_mClipping_38() { return &___mClipping_38; }
	inline void set_mClipping_38(int32_t value)
	{
		___mClipping_38 = value;
	}

	inline static int32_t get_offset_of_mClipRange_39() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mClipRange_39)); }
	inline Vector4_t2243707581  get_mClipRange_39() const { return ___mClipRange_39; }
	inline Vector4_t2243707581 * get_address_of_mClipRange_39() { return &___mClipRange_39; }
	inline void set_mClipRange_39(Vector4_t2243707581  value)
	{
		___mClipRange_39 = value;
	}

	inline static int32_t get_offset_of_mClipSoftness_40() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mClipSoftness_40)); }
	inline Vector2_t2243707579  get_mClipSoftness_40() const { return ___mClipSoftness_40; }
	inline Vector2_t2243707579 * get_address_of_mClipSoftness_40() { return &___mClipSoftness_40; }
	inline void set_mClipSoftness_40(Vector2_t2243707579  value)
	{
		___mClipSoftness_40 = value;
	}

	inline static int32_t get_offset_of_mDepth_41() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mDepth_41)); }
	inline int32_t get_mDepth_41() const { return ___mDepth_41; }
	inline int32_t* get_address_of_mDepth_41() { return &___mDepth_41; }
	inline void set_mDepth_41(int32_t value)
	{
		___mDepth_41 = value;
	}

	inline static int32_t get_offset_of_mSortingOrder_42() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mSortingOrder_42)); }
	inline int32_t get_mSortingOrder_42() const { return ___mSortingOrder_42; }
	inline int32_t* get_address_of_mSortingOrder_42() { return &___mSortingOrder_42; }
	inline void set_mSortingOrder_42(int32_t value)
	{
		___mSortingOrder_42 = value;
	}

	inline static int32_t get_offset_of_mRebuild_43() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mRebuild_43)); }
	inline bool get_mRebuild_43() const { return ___mRebuild_43; }
	inline bool* get_address_of_mRebuild_43() { return &___mRebuild_43; }
	inline void set_mRebuild_43(bool value)
	{
		___mRebuild_43 = value;
	}

	inline static int32_t get_offset_of_mResized_44() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mResized_44)); }
	inline bool get_mResized_44() const { return ___mResized_44; }
	inline bool* get_address_of_mResized_44() { return &___mResized_44; }
	inline void set_mResized_44(bool value)
	{
		___mResized_44 = value;
	}

	inline static int32_t get_offset_of_mCam_45() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mCam_45)); }
	inline Camera_t189460977 * get_mCam_45() const { return ___mCam_45; }
	inline Camera_t189460977 ** get_address_of_mCam_45() { return &___mCam_45; }
	inline void set_mCam_45(Camera_t189460977 * value)
	{
		___mCam_45 = value;
		Il2CppCodeGenWriteBarrier(&___mCam_45, value);
	}

	inline static int32_t get_offset_of_mClipOffset_46() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mClipOffset_46)); }
	inline Vector2_t2243707579  get_mClipOffset_46() const { return ___mClipOffset_46; }
	inline Vector2_t2243707579 * get_address_of_mClipOffset_46() { return &___mClipOffset_46; }
	inline void set_mClipOffset_46(Vector2_t2243707579  value)
	{
		___mClipOffset_46 = value;
	}

	inline static int32_t get_offset_of_mCullTime_47() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mCullTime_47)); }
	inline float get_mCullTime_47() const { return ___mCullTime_47; }
	inline float* get_address_of_mCullTime_47() { return &___mCullTime_47; }
	inline void set_mCullTime_47(float value)
	{
		___mCullTime_47 = value;
	}

	inline static int32_t get_offset_of_mUpdateTime_48() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mUpdateTime_48)); }
	inline float get_mUpdateTime_48() const { return ___mUpdateTime_48; }
	inline float* get_address_of_mUpdateTime_48() { return &___mUpdateTime_48; }
	inline void set_mUpdateTime_48(float value)
	{
		___mUpdateTime_48 = value;
	}

	inline static int32_t get_offset_of_mMatrixFrame_49() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mMatrixFrame_49)); }
	inline int32_t get_mMatrixFrame_49() const { return ___mMatrixFrame_49; }
	inline int32_t* get_address_of_mMatrixFrame_49() { return &___mMatrixFrame_49; }
	inline void set_mMatrixFrame_49(int32_t value)
	{
		___mMatrixFrame_49 = value;
	}

	inline static int32_t get_offset_of_mAlphaFrameID_50() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mAlphaFrameID_50)); }
	inline int32_t get_mAlphaFrameID_50() const { return ___mAlphaFrameID_50; }
	inline int32_t* get_address_of_mAlphaFrameID_50() { return &___mAlphaFrameID_50; }
	inline void set_mAlphaFrameID_50(int32_t value)
	{
		___mAlphaFrameID_50 = value;
	}

	inline static int32_t get_offset_of_mLayer_51() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mLayer_51)); }
	inline int32_t get_mLayer_51() const { return ___mLayer_51; }
	inline int32_t* get_address_of_mLayer_51() { return &___mLayer_51; }
	inline void set_mLayer_51(int32_t value)
	{
		___mLayer_51 = value;
	}

	inline static int32_t get_offset_of_mMin_53() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mMin_53)); }
	inline Vector2_t2243707579  get_mMin_53() const { return ___mMin_53; }
	inline Vector2_t2243707579 * get_address_of_mMin_53() { return &___mMin_53; }
	inline void set_mMin_53(Vector2_t2243707579  value)
	{
		___mMin_53 = value;
	}

	inline static int32_t get_offset_of_mMax_54() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mMax_54)); }
	inline Vector2_t2243707579  get_mMax_54() const { return ___mMax_54; }
	inline Vector2_t2243707579 * get_address_of_mMax_54() { return &___mMax_54; }
	inline void set_mMax_54(Vector2_t2243707579  value)
	{
		___mMax_54 = value;
	}

	inline static int32_t get_offset_of_mHalfPixelOffset_55() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mHalfPixelOffset_55)); }
	inline bool get_mHalfPixelOffset_55() const { return ___mHalfPixelOffset_55; }
	inline bool* get_address_of_mHalfPixelOffset_55() { return &___mHalfPixelOffset_55; }
	inline void set_mHalfPixelOffset_55(bool value)
	{
		___mHalfPixelOffset_55 = value;
	}

	inline static int32_t get_offset_of_mSortWidgets_56() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mSortWidgets_56)); }
	inline bool get_mSortWidgets_56() const { return ___mSortWidgets_56; }
	inline bool* get_address_of_mSortWidgets_56() { return &___mSortWidgets_56; }
	inline void set_mSortWidgets_56(bool value)
	{
		___mSortWidgets_56 = value;
	}

	inline static int32_t get_offset_of_mForced_59() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332, ___mForced_59)); }
	inline bool get_mForced_59() const { return ___mForced_59; }
	inline bool* get_address_of_mForced_59() { return &___mForced_59; }
	inline void set_mForced_59(bool value)
	{
		___mForced_59 = value;
	}
};

struct UIPanel_t1795085332_StaticFields
{
public:
	// BetterList`1<UIPanel> UIPanel::list
	BetterList_1_t2015473974 * ___list_22;
	// System.Single[] UIPanel::mTemp
	SingleU5BU5D_t577127397* ___mTemp_52;
	// UnityEngine.Vector3[] UIPanel::mCorners
	Vector3U5BU5D_t1172311765* ___mCorners_57;
	// System.Int32 UIPanel::mUpdateFrame
	int32_t ___mUpdateFrame_58;

public:
	inline static int32_t get_offset_of_list_22() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332_StaticFields, ___list_22)); }
	inline BetterList_1_t2015473974 * get_list_22() const { return ___list_22; }
	inline BetterList_1_t2015473974 ** get_address_of_list_22() { return &___list_22; }
	inline void set_list_22(BetterList_1_t2015473974 * value)
	{
		___list_22 = value;
		Il2CppCodeGenWriteBarrier(&___list_22, value);
	}

	inline static int32_t get_offset_of_mTemp_52() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332_StaticFields, ___mTemp_52)); }
	inline SingleU5BU5D_t577127397* get_mTemp_52() const { return ___mTemp_52; }
	inline SingleU5BU5D_t577127397** get_address_of_mTemp_52() { return &___mTemp_52; }
	inline void set_mTemp_52(SingleU5BU5D_t577127397* value)
	{
		___mTemp_52 = value;
		Il2CppCodeGenWriteBarrier(&___mTemp_52, value);
	}

	inline static int32_t get_offset_of_mCorners_57() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332_StaticFields, ___mCorners_57)); }
	inline Vector3U5BU5D_t1172311765* get_mCorners_57() const { return ___mCorners_57; }
	inline Vector3U5BU5D_t1172311765** get_address_of_mCorners_57() { return &___mCorners_57; }
	inline void set_mCorners_57(Vector3U5BU5D_t1172311765* value)
	{
		___mCorners_57 = value;
		Il2CppCodeGenWriteBarrier(&___mCorners_57, value);
	}

	inline static int32_t get_offset_of_mUpdateFrame_58() { return static_cast<int32_t>(offsetof(UIPanel_t1795085332_StaticFields, ___mUpdateFrame_58)); }
	inline int32_t get_mUpdateFrame_58() const { return ___mUpdateFrame_58; }
	inline int32_t* get_address_of_mUpdateFrame_58() { return &___mUpdateFrame_58; }
	inline void set_mUpdateFrame_58(int32_t value)
	{
		___mUpdateFrame_58 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
