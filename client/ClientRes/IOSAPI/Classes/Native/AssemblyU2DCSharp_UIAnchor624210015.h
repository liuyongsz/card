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
// UnityEngine.Animation
struct Animation_t2068071072;
// UIRoot
struct UIRoot_t389944298;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_UIAnchor_Side3421105907.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIAnchor
struct  UIAnchor_t624210015  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera UIAnchor::uiCamera
	Camera_t189460977 * ___uiCamera_2;
	// UnityEngine.GameObject UIAnchor::container
	GameObject_t1756533147 * ___container_3;
	// UIAnchor/Side UIAnchor::side
	int32_t ___side_4;
	// System.Boolean UIAnchor::runOnlyOnce
	bool ___runOnlyOnce_5;
	// UnityEngine.Vector2 UIAnchor::relativeOffset
	Vector2_t2243707579  ___relativeOffset_6;
	// UnityEngine.Vector2 UIAnchor::pixelOffset
	Vector2_t2243707579  ___pixelOffset_7;
	// UIWidget UIAnchor::widgetContainer
	UIWidget_t1453041918 * ___widgetContainer_8;
	// UnityEngine.Transform UIAnchor::mTrans
	Transform_t3275118058 * ___mTrans_9;
	// UnityEngine.Animation UIAnchor::mAnim
	Animation_t2068071072 * ___mAnim_10;
	// UnityEngine.Rect UIAnchor::mRect
	Rect_t3681755626  ___mRect_11;
	// UIRoot UIAnchor::mRoot
	UIRoot_t389944298 * ___mRoot_12;
	// System.Boolean UIAnchor::mStarted
	bool ___mStarted_13;

public:
	inline static int32_t get_offset_of_uiCamera_2() { return static_cast<int32_t>(offsetof(UIAnchor_t624210015, ___uiCamera_2)); }
	inline Camera_t189460977 * get_uiCamera_2() const { return ___uiCamera_2; }
	inline Camera_t189460977 ** get_address_of_uiCamera_2() { return &___uiCamera_2; }
	inline void set_uiCamera_2(Camera_t189460977 * value)
	{
		___uiCamera_2 = value;
		Il2CppCodeGenWriteBarrier(&___uiCamera_2, value);
	}

	inline static int32_t get_offset_of_container_3() { return static_cast<int32_t>(offsetof(UIAnchor_t624210015, ___container_3)); }
	inline GameObject_t1756533147 * get_container_3() const { return ___container_3; }
	inline GameObject_t1756533147 ** get_address_of_container_3() { return &___container_3; }
	inline void set_container_3(GameObject_t1756533147 * value)
	{
		___container_3 = value;
		Il2CppCodeGenWriteBarrier(&___container_3, value);
	}

	inline static int32_t get_offset_of_side_4() { return static_cast<int32_t>(offsetof(UIAnchor_t624210015, ___side_4)); }
	inline int32_t get_side_4() const { return ___side_4; }
	inline int32_t* get_address_of_side_4() { return &___side_4; }
	inline void set_side_4(int32_t value)
	{
		___side_4 = value;
	}

	inline static int32_t get_offset_of_runOnlyOnce_5() { return static_cast<int32_t>(offsetof(UIAnchor_t624210015, ___runOnlyOnce_5)); }
	inline bool get_runOnlyOnce_5() const { return ___runOnlyOnce_5; }
	inline bool* get_address_of_runOnlyOnce_5() { return &___runOnlyOnce_5; }
	inline void set_runOnlyOnce_5(bool value)
	{
		___runOnlyOnce_5 = value;
	}

	inline static int32_t get_offset_of_relativeOffset_6() { return static_cast<int32_t>(offsetof(UIAnchor_t624210015, ___relativeOffset_6)); }
	inline Vector2_t2243707579  get_relativeOffset_6() const { return ___relativeOffset_6; }
	inline Vector2_t2243707579 * get_address_of_relativeOffset_6() { return &___relativeOffset_6; }
	inline void set_relativeOffset_6(Vector2_t2243707579  value)
	{
		___relativeOffset_6 = value;
	}

	inline static int32_t get_offset_of_pixelOffset_7() { return static_cast<int32_t>(offsetof(UIAnchor_t624210015, ___pixelOffset_7)); }
	inline Vector2_t2243707579  get_pixelOffset_7() const { return ___pixelOffset_7; }
	inline Vector2_t2243707579 * get_address_of_pixelOffset_7() { return &___pixelOffset_7; }
	inline void set_pixelOffset_7(Vector2_t2243707579  value)
	{
		___pixelOffset_7 = value;
	}

	inline static int32_t get_offset_of_widgetContainer_8() { return static_cast<int32_t>(offsetof(UIAnchor_t624210015, ___widgetContainer_8)); }
	inline UIWidget_t1453041918 * get_widgetContainer_8() const { return ___widgetContainer_8; }
	inline UIWidget_t1453041918 ** get_address_of_widgetContainer_8() { return &___widgetContainer_8; }
	inline void set_widgetContainer_8(UIWidget_t1453041918 * value)
	{
		___widgetContainer_8 = value;
		Il2CppCodeGenWriteBarrier(&___widgetContainer_8, value);
	}

	inline static int32_t get_offset_of_mTrans_9() { return static_cast<int32_t>(offsetof(UIAnchor_t624210015, ___mTrans_9)); }
	inline Transform_t3275118058 * get_mTrans_9() const { return ___mTrans_9; }
	inline Transform_t3275118058 ** get_address_of_mTrans_9() { return &___mTrans_9; }
	inline void set_mTrans_9(Transform_t3275118058 * value)
	{
		___mTrans_9 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_9, value);
	}

	inline static int32_t get_offset_of_mAnim_10() { return static_cast<int32_t>(offsetof(UIAnchor_t624210015, ___mAnim_10)); }
	inline Animation_t2068071072 * get_mAnim_10() const { return ___mAnim_10; }
	inline Animation_t2068071072 ** get_address_of_mAnim_10() { return &___mAnim_10; }
	inline void set_mAnim_10(Animation_t2068071072 * value)
	{
		___mAnim_10 = value;
		Il2CppCodeGenWriteBarrier(&___mAnim_10, value);
	}

	inline static int32_t get_offset_of_mRect_11() { return static_cast<int32_t>(offsetof(UIAnchor_t624210015, ___mRect_11)); }
	inline Rect_t3681755626  get_mRect_11() const { return ___mRect_11; }
	inline Rect_t3681755626 * get_address_of_mRect_11() { return &___mRect_11; }
	inline void set_mRect_11(Rect_t3681755626  value)
	{
		___mRect_11 = value;
	}

	inline static int32_t get_offset_of_mRoot_12() { return static_cast<int32_t>(offsetof(UIAnchor_t624210015, ___mRoot_12)); }
	inline UIRoot_t389944298 * get_mRoot_12() const { return ___mRoot_12; }
	inline UIRoot_t389944298 ** get_address_of_mRoot_12() { return &___mRoot_12; }
	inline void set_mRoot_12(UIRoot_t389944298 * value)
	{
		___mRoot_12 = value;
		Il2CppCodeGenWriteBarrier(&___mRoot_12, value);
	}

	inline static int32_t get_offset_of_mStarted_13() { return static_cast<int32_t>(offsetof(UIAnchor_t624210015, ___mStarted_13)); }
	inline bool get_mStarted_13() const { return ___mStarted_13; }
	inline bool* get_address_of_mStarted_13() { return &___mStarted_13; }
	inline void set_mStarted_13(bool value)
	{
		___mStarted_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
