#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIWidget/OnDimensionsChanged
struct OnDimensionsChanged_t3620741577;
// UIWidget/HitCheck
struct HitCheck_t3590501724;
// UIPanel
struct UIPanel_t1795085332;
// UIGeometry
struct UIGeometry_t1005900006;
// UIDrawCall
struct UIDrawCall_t3291843512;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;

#include "AssemblyU2DCSharp_UIRect4127168124.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "AssemblyU2DCSharp_UIWidget_Pivot752586349.h"
#include "AssemblyU2DCSharp_UIWidget_AspectRatioSource2759843449.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "UnityEngine_UnityEngine_Bounds3033363703.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIWidget
struct  UIWidget_t1453041918  : public UIRect_t4127168124
{
public:
	// UnityEngine.Color UIWidget::mColor
	Color_t2020392075  ___mColor_22;
	// UIWidget/Pivot UIWidget::mPivot
	int32_t ___mPivot_23;
	// System.Int32 UIWidget::mWidth
	int32_t ___mWidth_24;
	// System.Int32 UIWidget::mHeight
	int32_t ___mHeight_25;
	// System.Int32 UIWidget::mDepth
	int32_t ___mDepth_26;
	// UIWidget/OnDimensionsChanged UIWidget::onChange
	OnDimensionsChanged_t3620741577 * ___onChange_27;
	// System.Boolean UIWidget::autoResizeBoxCollider
	bool ___autoResizeBoxCollider_28;
	// System.Boolean UIWidget::hideIfOffScreen
	bool ___hideIfOffScreen_29;
	// UIWidget/AspectRatioSource UIWidget::keepAspectRatio
	int32_t ___keepAspectRatio_30;
	// System.Single UIWidget::aspectRatio
	float ___aspectRatio_31;
	// UIWidget/HitCheck UIWidget::hitCheck
	HitCheck_t3590501724 * ___hitCheck_32;
	// UIPanel UIWidget::panel
	UIPanel_t1795085332 * ___panel_33;
	// UIGeometry UIWidget::geometry
	UIGeometry_t1005900006 * ___geometry_34;
	// System.Boolean UIWidget::fillGeometry
	bool ___fillGeometry_35;
	// System.Boolean UIWidget::mPlayMode
	bool ___mPlayMode_36;
	// UnityEngine.Vector4 UIWidget::mDrawRegion
	Vector4_t2243707581  ___mDrawRegion_37;
	// UnityEngine.Matrix4x4 UIWidget::mLocalToPanel
	Matrix4x4_t2933234003  ___mLocalToPanel_38;
	// System.Boolean UIWidget::mIsVisibleByAlpha
	bool ___mIsVisibleByAlpha_39;
	// System.Boolean UIWidget::mIsVisibleByPanel
	bool ___mIsVisibleByPanel_40;
	// System.Boolean UIWidget::mIsInFront
	bool ___mIsInFront_41;
	// System.Single UIWidget::mLastAlpha
	float ___mLastAlpha_42;
	// System.Boolean UIWidget::mMoved
	bool ___mMoved_43;
	// UIDrawCall UIWidget::drawCall
	UIDrawCall_t3291843512 * ___drawCall_44;
	// UnityEngine.Vector3[] UIWidget::mCorners
	Vector3U5BU5D_t1172311765* ___mCorners_45;
	// System.Int32 UIWidget::mAlphaFrameID
	int32_t ___mAlphaFrameID_46;
	// System.Int32 UIWidget::mMatrixFrame
	int32_t ___mMatrixFrame_48;
	// UnityEngine.Vector3 UIWidget::mOldV0
	Vector3_t2243707580  ___mOldV0_49;
	// UnityEngine.Vector3 UIWidget::mOldV1
	Vector3_t2243707580  ___mOldV1_50;

public:
	inline static int32_t get_offset_of_mColor_22() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mColor_22)); }
	inline Color_t2020392075  get_mColor_22() const { return ___mColor_22; }
	inline Color_t2020392075 * get_address_of_mColor_22() { return &___mColor_22; }
	inline void set_mColor_22(Color_t2020392075  value)
	{
		___mColor_22 = value;
	}

	inline static int32_t get_offset_of_mPivot_23() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mPivot_23)); }
	inline int32_t get_mPivot_23() const { return ___mPivot_23; }
	inline int32_t* get_address_of_mPivot_23() { return &___mPivot_23; }
	inline void set_mPivot_23(int32_t value)
	{
		___mPivot_23 = value;
	}

	inline static int32_t get_offset_of_mWidth_24() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mWidth_24)); }
	inline int32_t get_mWidth_24() const { return ___mWidth_24; }
	inline int32_t* get_address_of_mWidth_24() { return &___mWidth_24; }
	inline void set_mWidth_24(int32_t value)
	{
		___mWidth_24 = value;
	}

	inline static int32_t get_offset_of_mHeight_25() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mHeight_25)); }
	inline int32_t get_mHeight_25() const { return ___mHeight_25; }
	inline int32_t* get_address_of_mHeight_25() { return &___mHeight_25; }
	inline void set_mHeight_25(int32_t value)
	{
		___mHeight_25 = value;
	}

	inline static int32_t get_offset_of_mDepth_26() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mDepth_26)); }
	inline int32_t get_mDepth_26() const { return ___mDepth_26; }
	inline int32_t* get_address_of_mDepth_26() { return &___mDepth_26; }
	inline void set_mDepth_26(int32_t value)
	{
		___mDepth_26 = value;
	}

	inline static int32_t get_offset_of_onChange_27() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___onChange_27)); }
	inline OnDimensionsChanged_t3620741577 * get_onChange_27() const { return ___onChange_27; }
	inline OnDimensionsChanged_t3620741577 ** get_address_of_onChange_27() { return &___onChange_27; }
	inline void set_onChange_27(OnDimensionsChanged_t3620741577 * value)
	{
		___onChange_27 = value;
		Il2CppCodeGenWriteBarrier(&___onChange_27, value);
	}

	inline static int32_t get_offset_of_autoResizeBoxCollider_28() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___autoResizeBoxCollider_28)); }
	inline bool get_autoResizeBoxCollider_28() const { return ___autoResizeBoxCollider_28; }
	inline bool* get_address_of_autoResizeBoxCollider_28() { return &___autoResizeBoxCollider_28; }
	inline void set_autoResizeBoxCollider_28(bool value)
	{
		___autoResizeBoxCollider_28 = value;
	}

	inline static int32_t get_offset_of_hideIfOffScreen_29() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___hideIfOffScreen_29)); }
	inline bool get_hideIfOffScreen_29() const { return ___hideIfOffScreen_29; }
	inline bool* get_address_of_hideIfOffScreen_29() { return &___hideIfOffScreen_29; }
	inline void set_hideIfOffScreen_29(bool value)
	{
		___hideIfOffScreen_29 = value;
	}

	inline static int32_t get_offset_of_keepAspectRatio_30() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___keepAspectRatio_30)); }
	inline int32_t get_keepAspectRatio_30() const { return ___keepAspectRatio_30; }
	inline int32_t* get_address_of_keepAspectRatio_30() { return &___keepAspectRatio_30; }
	inline void set_keepAspectRatio_30(int32_t value)
	{
		___keepAspectRatio_30 = value;
	}

	inline static int32_t get_offset_of_aspectRatio_31() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___aspectRatio_31)); }
	inline float get_aspectRatio_31() const { return ___aspectRatio_31; }
	inline float* get_address_of_aspectRatio_31() { return &___aspectRatio_31; }
	inline void set_aspectRatio_31(float value)
	{
		___aspectRatio_31 = value;
	}

	inline static int32_t get_offset_of_hitCheck_32() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___hitCheck_32)); }
	inline HitCheck_t3590501724 * get_hitCheck_32() const { return ___hitCheck_32; }
	inline HitCheck_t3590501724 ** get_address_of_hitCheck_32() { return &___hitCheck_32; }
	inline void set_hitCheck_32(HitCheck_t3590501724 * value)
	{
		___hitCheck_32 = value;
		Il2CppCodeGenWriteBarrier(&___hitCheck_32, value);
	}

	inline static int32_t get_offset_of_panel_33() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___panel_33)); }
	inline UIPanel_t1795085332 * get_panel_33() const { return ___panel_33; }
	inline UIPanel_t1795085332 ** get_address_of_panel_33() { return &___panel_33; }
	inline void set_panel_33(UIPanel_t1795085332 * value)
	{
		___panel_33 = value;
		Il2CppCodeGenWriteBarrier(&___panel_33, value);
	}

	inline static int32_t get_offset_of_geometry_34() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___geometry_34)); }
	inline UIGeometry_t1005900006 * get_geometry_34() const { return ___geometry_34; }
	inline UIGeometry_t1005900006 ** get_address_of_geometry_34() { return &___geometry_34; }
	inline void set_geometry_34(UIGeometry_t1005900006 * value)
	{
		___geometry_34 = value;
		Il2CppCodeGenWriteBarrier(&___geometry_34, value);
	}

	inline static int32_t get_offset_of_fillGeometry_35() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___fillGeometry_35)); }
	inline bool get_fillGeometry_35() const { return ___fillGeometry_35; }
	inline bool* get_address_of_fillGeometry_35() { return &___fillGeometry_35; }
	inline void set_fillGeometry_35(bool value)
	{
		___fillGeometry_35 = value;
	}

	inline static int32_t get_offset_of_mPlayMode_36() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mPlayMode_36)); }
	inline bool get_mPlayMode_36() const { return ___mPlayMode_36; }
	inline bool* get_address_of_mPlayMode_36() { return &___mPlayMode_36; }
	inline void set_mPlayMode_36(bool value)
	{
		___mPlayMode_36 = value;
	}

	inline static int32_t get_offset_of_mDrawRegion_37() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mDrawRegion_37)); }
	inline Vector4_t2243707581  get_mDrawRegion_37() const { return ___mDrawRegion_37; }
	inline Vector4_t2243707581 * get_address_of_mDrawRegion_37() { return &___mDrawRegion_37; }
	inline void set_mDrawRegion_37(Vector4_t2243707581  value)
	{
		___mDrawRegion_37 = value;
	}

	inline static int32_t get_offset_of_mLocalToPanel_38() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mLocalToPanel_38)); }
	inline Matrix4x4_t2933234003  get_mLocalToPanel_38() const { return ___mLocalToPanel_38; }
	inline Matrix4x4_t2933234003 * get_address_of_mLocalToPanel_38() { return &___mLocalToPanel_38; }
	inline void set_mLocalToPanel_38(Matrix4x4_t2933234003  value)
	{
		___mLocalToPanel_38 = value;
	}

	inline static int32_t get_offset_of_mIsVisibleByAlpha_39() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mIsVisibleByAlpha_39)); }
	inline bool get_mIsVisibleByAlpha_39() const { return ___mIsVisibleByAlpha_39; }
	inline bool* get_address_of_mIsVisibleByAlpha_39() { return &___mIsVisibleByAlpha_39; }
	inline void set_mIsVisibleByAlpha_39(bool value)
	{
		___mIsVisibleByAlpha_39 = value;
	}

	inline static int32_t get_offset_of_mIsVisibleByPanel_40() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mIsVisibleByPanel_40)); }
	inline bool get_mIsVisibleByPanel_40() const { return ___mIsVisibleByPanel_40; }
	inline bool* get_address_of_mIsVisibleByPanel_40() { return &___mIsVisibleByPanel_40; }
	inline void set_mIsVisibleByPanel_40(bool value)
	{
		___mIsVisibleByPanel_40 = value;
	}

	inline static int32_t get_offset_of_mIsInFront_41() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mIsInFront_41)); }
	inline bool get_mIsInFront_41() const { return ___mIsInFront_41; }
	inline bool* get_address_of_mIsInFront_41() { return &___mIsInFront_41; }
	inline void set_mIsInFront_41(bool value)
	{
		___mIsInFront_41 = value;
	}

	inline static int32_t get_offset_of_mLastAlpha_42() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mLastAlpha_42)); }
	inline float get_mLastAlpha_42() const { return ___mLastAlpha_42; }
	inline float* get_address_of_mLastAlpha_42() { return &___mLastAlpha_42; }
	inline void set_mLastAlpha_42(float value)
	{
		___mLastAlpha_42 = value;
	}

	inline static int32_t get_offset_of_mMoved_43() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mMoved_43)); }
	inline bool get_mMoved_43() const { return ___mMoved_43; }
	inline bool* get_address_of_mMoved_43() { return &___mMoved_43; }
	inline void set_mMoved_43(bool value)
	{
		___mMoved_43 = value;
	}

	inline static int32_t get_offset_of_drawCall_44() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___drawCall_44)); }
	inline UIDrawCall_t3291843512 * get_drawCall_44() const { return ___drawCall_44; }
	inline UIDrawCall_t3291843512 ** get_address_of_drawCall_44() { return &___drawCall_44; }
	inline void set_drawCall_44(UIDrawCall_t3291843512 * value)
	{
		___drawCall_44 = value;
		Il2CppCodeGenWriteBarrier(&___drawCall_44, value);
	}

	inline static int32_t get_offset_of_mCorners_45() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mCorners_45)); }
	inline Vector3U5BU5D_t1172311765* get_mCorners_45() const { return ___mCorners_45; }
	inline Vector3U5BU5D_t1172311765** get_address_of_mCorners_45() { return &___mCorners_45; }
	inline void set_mCorners_45(Vector3U5BU5D_t1172311765* value)
	{
		___mCorners_45 = value;
		Il2CppCodeGenWriteBarrier(&___mCorners_45, value);
	}

	inline static int32_t get_offset_of_mAlphaFrameID_46() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mAlphaFrameID_46)); }
	inline int32_t get_mAlphaFrameID_46() const { return ___mAlphaFrameID_46; }
	inline int32_t* get_address_of_mAlphaFrameID_46() { return &___mAlphaFrameID_46; }
	inline void set_mAlphaFrameID_46(int32_t value)
	{
		___mAlphaFrameID_46 = value;
	}

	inline static int32_t get_offset_of_mMatrixFrame_48() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mMatrixFrame_48)); }
	inline int32_t get_mMatrixFrame_48() const { return ___mMatrixFrame_48; }
	inline int32_t* get_address_of_mMatrixFrame_48() { return &___mMatrixFrame_48; }
	inline void set_mMatrixFrame_48(int32_t value)
	{
		___mMatrixFrame_48 = value;
	}

	inline static int32_t get_offset_of_mOldV0_49() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mOldV0_49)); }
	inline Vector3_t2243707580  get_mOldV0_49() const { return ___mOldV0_49; }
	inline Vector3_t2243707580 * get_address_of_mOldV0_49() { return &___mOldV0_49; }
	inline void set_mOldV0_49(Vector3_t2243707580  value)
	{
		___mOldV0_49 = value;
	}

	inline static int32_t get_offset_of_mOldV1_50() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918, ___mOldV1_50)); }
	inline Vector3_t2243707580  get_mOldV1_50() const { return ___mOldV1_50; }
	inline Vector3_t2243707580 * get_address_of_mOldV1_50() { return &___mOldV1_50; }
	inline void set_mOldV1_50(Vector3_t2243707580  value)
	{
		___mOldV1_50 = value;
	}
};

struct UIWidget_t1453041918_StaticFields
{
public:
	// UnityEngine.Bounds UIWidget::tempZero
	Bounds_t3033363703  ___tempZero_47;

public:
	inline static int32_t get_offset_of_tempZero_47() { return static_cast<int32_t>(offsetof(UIWidget_t1453041918_StaticFields, ___tempZero_47)); }
	inline Bounds_t3033363703  get_tempZero_47() const { return ___tempZero_47; }
	inline Bounds_t3033363703 * get_address_of_tempZero_47() { return &___tempZero_47; }
	inline void set_tempZero_47(Bounds_t3033363703  value)
	{
		___tempZero_47 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
