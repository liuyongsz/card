#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UIWidget
struct UIWidget_t1453041918;
// UnityEngine.Transform
struct Transform_t3275118058;
// UISprite
struct UISprite_t603616735;
// UIPanel
struct UIPanel_t1795085332;
// UIRoot
struct UIRoot_t389944298;
// UnityEngine.Animation
struct Animation_t2068071072;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_UIStretch_Style1693551353.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIStretch
struct  UIStretch_t4076885229  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera UIStretch::uiCamera
	Camera_t189460977 * ___uiCamera_2;
	// UnityEngine.GameObject UIStretch::container
	GameObject_t1756533147 * ___container_3;
	// UIStretch/Style UIStretch::style
	int32_t ___style_4;
	// System.Boolean UIStretch::runOnlyOnce
	bool ___runOnlyOnce_5;
	// UnityEngine.Vector2 UIStretch::relativeSize
	Vector2_t2243707579  ___relativeSize_6;
	// UnityEngine.Vector2 UIStretch::initialSize
	Vector2_t2243707579  ___initialSize_7;
	// UnityEngine.Vector2 UIStretch::borderPadding
	Vector2_t2243707579  ___borderPadding_8;
	// UIWidget UIStretch::widgetContainer
	UIWidget_t1453041918 * ___widgetContainer_9;
	// UnityEngine.Transform UIStretch::mTrans
	Transform_t3275118058 * ___mTrans_10;
	// UIWidget UIStretch::mWidget
	UIWidget_t1453041918 * ___mWidget_11;
	// UISprite UIStretch::mSprite
	UISprite_t603616735 * ___mSprite_12;
	// UIPanel UIStretch::mPanel
	UIPanel_t1795085332 * ___mPanel_13;
	// UIRoot UIStretch::mRoot
	UIRoot_t389944298 * ___mRoot_14;
	// UnityEngine.Animation UIStretch::mAnim
	Animation_t2068071072 * ___mAnim_15;
	// UnityEngine.Rect UIStretch::mRect
	Rect_t3681755626  ___mRect_16;
	// System.Boolean UIStretch::mStarted
	bool ___mStarted_17;

public:
	inline static int32_t get_offset_of_uiCamera_2() { return static_cast<int32_t>(offsetof(UIStretch_t4076885229, ___uiCamera_2)); }
	inline Camera_t189460977 * get_uiCamera_2() const { return ___uiCamera_2; }
	inline Camera_t189460977 ** get_address_of_uiCamera_2() { return &___uiCamera_2; }
	inline void set_uiCamera_2(Camera_t189460977 * value)
	{
		___uiCamera_2 = value;
		Il2CppCodeGenWriteBarrier(&___uiCamera_2, value);
	}

	inline static int32_t get_offset_of_container_3() { return static_cast<int32_t>(offsetof(UIStretch_t4076885229, ___container_3)); }
	inline GameObject_t1756533147 * get_container_3() const { return ___container_3; }
	inline GameObject_t1756533147 ** get_address_of_container_3() { return &___container_3; }
	inline void set_container_3(GameObject_t1756533147 * value)
	{
		___container_3 = value;
		Il2CppCodeGenWriteBarrier(&___container_3, value);
	}

	inline static int32_t get_offset_of_style_4() { return static_cast<int32_t>(offsetof(UIStretch_t4076885229, ___style_4)); }
	inline int32_t get_style_4() const { return ___style_4; }
	inline int32_t* get_address_of_style_4() { return &___style_4; }
	inline void set_style_4(int32_t value)
	{
		___style_4 = value;
	}

	inline static int32_t get_offset_of_runOnlyOnce_5() { return static_cast<int32_t>(offsetof(UIStretch_t4076885229, ___runOnlyOnce_5)); }
	inline bool get_runOnlyOnce_5() const { return ___runOnlyOnce_5; }
	inline bool* get_address_of_runOnlyOnce_5() { return &___runOnlyOnce_5; }
	inline void set_runOnlyOnce_5(bool value)
	{
		___runOnlyOnce_5 = value;
	}

	inline static int32_t get_offset_of_relativeSize_6() { return static_cast<int32_t>(offsetof(UIStretch_t4076885229, ___relativeSize_6)); }
	inline Vector2_t2243707579  get_relativeSize_6() const { return ___relativeSize_6; }
	inline Vector2_t2243707579 * get_address_of_relativeSize_6() { return &___relativeSize_6; }
	inline void set_relativeSize_6(Vector2_t2243707579  value)
	{
		___relativeSize_6 = value;
	}

	inline static int32_t get_offset_of_initialSize_7() { return static_cast<int32_t>(offsetof(UIStretch_t4076885229, ___initialSize_7)); }
	inline Vector2_t2243707579  get_initialSize_7() const { return ___initialSize_7; }
	inline Vector2_t2243707579 * get_address_of_initialSize_7() { return &___initialSize_7; }
	inline void set_initialSize_7(Vector2_t2243707579  value)
	{
		___initialSize_7 = value;
	}

	inline static int32_t get_offset_of_borderPadding_8() { return static_cast<int32_t>(offsetof(UIStretch_t4076885229, ___borderPadding_8)); }
	inline Vector2_t2243707579  get_borderPadding_8() const { return ___borderPadding_8; }
	inline Vector2_t2243707579 * get_address_of_borderPadding_8() { return &___borderPadding_8; }
	inline void set_borderPadding_8(Vector2_t2243707579  value)
	{
		___borderPadding_8 = value;
	}

	inline static int32_t get_offset_of_widgetContainer_9() { return static_cast<int32_t>(offsetof(UIStretch_t4076885229, ___widgetContainer_9)); }
	inline UIWidget_t1453041918 * get_widgetContainer_9() const { return ___widgetContainer_9; }
	inline UIWidget_t1453041918 ** get_address_of_widgetContainer_9() { return &___widgetContainer_9; }
	inline void set_widgetContainer_9(UIWidget_t1453041918 * value)
	{
		___widgetContainer_9 = value;
		Il2CppCodeGenWriteBarrier(&___widgetContainer_9, value);
	}

	inline static int32_t get_offset_of_mTrans_10() { return static_cast<int32_t>(offsetof(UIStretch_t4076885229, ___mTrans_10)); }
	inline Transform_t3275118058 * get_mTrans_10() const { return ___mTrans_10; }
	inline Transform_t3275118058 ** get_address_of_mTrans_10() { return &___mTrans_10; }
	inline void set_mTrans_10(Transform_t3275118058 * value)
	{
		___mTrans_10 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_10, value);
	}

	inline static int32_t get_offset_of_mWidget_11() { return static_cast<int32_t>(offsetof(UIStretch_t4076885229, ___mWidget_11)); }
	inline UIWidget_t1453041918 * get_mWidget_11() const { return ___mWidget_11; }
	inline UIWidget_t1453041918 ** get_address_of_mWidget_11() { return &___mWidget_11; }
	inline void set_mWidget_11(UIWidget_t1453041918 * value)
	{
		___mWidget_11 = value;
		Il2CppCodeGenWriteBarrier(&___mWidget_11, value);
	}

	inline static int32_t get_offset_of_mSprite_12() { return static_cast<int32_t>(offsetof(UIStretch_t4076885229, ___mSprite_12)); }
	inline UISprite_t603616735 * get_mSprite_12() const { return ___mSprite_12; }
	inline UISprite_t603616735 ** get_address_of_mSprite_12() { return &___mSprite_12; }
	inline void set_mSprite_12(UISprite_t603616735 * value)
	{
		___mSprite_12 = value;
		Il2CppCodeGenWriteBarrier(&___mSprite_12, value);
	}

	inline static int32_t get_offset_of_mPanel_13() { return static_cast<int32_t>(offsetof(UIStretch_t4076885229, ___mPanel_13)); }
	inline UIPanel_t1795085332 * get_mPanel_13() const { return ___mPanel_13; }
	inline UIPanel_t1795085332 ** get_address_of_mPanel_13() { return &___mPanel_13; }
	inline void set_mPanel_13(UIPanel_t1795085332 * value)
	{
		___mPanel_13 = value;
		Il2CppCodeGenWriteBarrier(&___mPanel_13, value);
	}

	inline static int32_t get_offset_of_mRoot_14() { return static_cast<int32_t>(offsetof(UIStretch_t4076885229, ___mRoot_14)); }
	inline UIRoot_t389944298 * get_mRoot_14() const { return ___mRoot_14; }
	inline UIRoot_t389944298 ** get_address_of_mRoot_14() { return &___mRoot_14; }
	inline void set_mRoot_14(UIRoot_t389944298 * value)
	{
		___mRoot_14 = value;
		Il2CppCodeGenWriteBarrier(&___mRoot_14, value);
	}

	inline static int32_t get_offset_of_mAnim_15() { return static_cast<int32_t>(offsetof(UIStretch_t4076885229, ___mAnim_15)); }
	inline Animation_t2068071072 * get_mAnim_15() const { return ___mAnim_15; }
	inline Animation_t2068071072 ** get_address_of_mAnim_15() { return &___mAnim_15; }
	inline void set_mAnim_15(Animation_t2068071072 * value)
	{
		___mAnim_15 = value;
		Il2CppCodeGenWriteBarrier(&___mAnim_15, value);
	}

	inline static int32_t get_offset_of_mRect_16() { return static_cast<int32_t>(offsetof(UIStretch_t4076885229, ___mRect_16)); }
	inline Rect_t3681755626  get_mRect_16() const { return ___mRect_16; }
	inline Rect_t3681755626 * get_address_of_mRect_16() { return &___mRect_16; }
	inline void set_mRect_16(Rect_t3681755626  value)
	{
		___mRect_16 = value;
	}

	inline static int32_t get_offset_of_mStarted_17() { return static_cast<int32_t>(offsetof(UIStretch_t4076885229, ___mStarted_17)); }
	inline bool get_mStarted_17() const { return ___mStarted_17; }
	inline bool* get_address_of_mStarted_17() { return &___mStarted_17; }
	inline void set_mStarted_17(bool value)
	{
		___mStarted_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
