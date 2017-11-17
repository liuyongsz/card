#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIRect/AnchorPoint
struct AnchorPoint_t4057058294;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;
// BetterList`1<UIRect>
struct BetterList_1_t52589470;
// UIRoot
struct UIRoot_t389944298;
// UIRect
struct UIRect_t4127168124;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_UIRect_AnchorUpdate1517700609.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIRect
struct  UIRect_t4127168124  : public MonoBehaviour_t1158329972
{
public:
	// UIRect/AnchorPoint UIRect::leftAnchor
	AnchorPoint_t4057058294 * ___leftAnchor_2;
	// UIRect/AnchorPoint UIRect::rightAnchor
	AnchorPoint_t4057058294 * ___rightAnchor_3;
	// UIRect/AnchorPoint UIRect::bottomAnchor
	AnchorPoint_t4057058294 * ___bottomAnchor_4;
	// UIRect/AnchorPoint UIRect::topAnchor
	AnchorPoint_t4057058294 * ___topAnchor_5;
	// UIRect/AnchorUpdate UIRect::updateAnchors
	int32_t ___updateAnchors_6;
	// UnityEngine.GameObject UIRect::mGo
	GameObject_t1756533147 * ___mGo_7;
	// UnityEngine.Transform UIRect::mTrans
	Transform_t3275118058 * ___mTrans_8;
	// BetterList`1<UIRect> UIRect::mChildren
	BetterList_1_t52589470 * ___mChildren_9;
	// System.Boolean UIRect::mChanged
	bool ___mChanged_10;
	// System.Boolean UIRect::mStarted
	bool ___mStarted_11;
	// System.Boolean UIRect::mParentFound
	bool ___mParentFound_12;
	// System.Boolean UIRect::mUpdateAnchors
	bool ___mUpdateAnchors_13;
	// System.Single UIRect::finalAlpha
	float ___finalAlpha_14;
	// UIRoot UIRect::mRoot
	UIRoot_t389944298 * ___mRoot_15;
	// UIRect UIRect::mParent
	UIRect_t4127168124 * ___mParent_16;
	// UnityEngine.Camera UIRect::mMyCam
	Camera_t189460977 * ___mMyCam_17;
	// System.Int32 UIRect::mUpdateFrame
	int32_t ___mUpdateFrame_18;
	// System.Boolean UIRect::mAnchorsCached
	bool ___mAnchorsCached_19;
	// System.Boolean UIRect::mRootSet
	bool ___mRootSet_20;

public:
	inline static int32_t get_offset_of_leftAnchor_2() { return static_cast<int32_t>(offsetof(UIRect_t4127168124, ___leftAnchor_2)); }
	inline AnchorPoint_t4057058294 * get_leftAnchor_2() const { return ___leftAnchor_2; }
	inline AnchorPoint_t4057058294 ** get_address_of_leftAnchor_2() { return &___leftAnchor_2; }
	inline void set_leftAnchor_2(AnchorPoint_t4057058294 * value)
	{
		___leftAnchor_2 = value;
		Il2CppCodeGenWriteBarrier(&___leftAnchor_2, value);
	}

	inline static int32_t get_offset_of_rightAnchor_3() { return static_cast<int32_t>(offsetof(UIRect_t4127168124, ___rightAnchor_3)); }
	inline AnchorPoint_t4057058294 * get_rightAnchor_3() const { return ___rightAnchor_3; }
	inline AnchorPoint_t4057058294 ** get_address_of_rightAnchor_3() { return &___rightAnchor_3; }
	inline void set_rightAnchor_3(AnchorPoint_t4057058294 * value)
	{
		___rightAnchor_3 = value;
		Il2CppCodeGenWriteBarrier(&___rightAnchor_3, value);
	}

	inline static int32_t get_offset_of_bottomAnchor_4() { return static_cast<int32_t>(offsetof(UIRect_t4127168124, ___bottomAnchor_4)); }
	inline AnchorPoint_t4057058294 * get_bottomAnchor_4() const { return ___bottomAnchor_4; }
	inline AnchorPoint_t4057058294 ** get_address_of_bottomAnchor_4() { return &___bottomAnchor_4; }
	inline void set_bottomAnchor_4(AnchorPoint_t4057058294 * value)
	{
		___bottomAnchor_4 = value;
		Il2CppCodeGenWriteBarrier(&___bottomAnchor_4, value);
	}

	inline static int32_t get_offset_of_topAnchor_5() { return static_cast<int32_t>(offsetof(UIRect_t4127168124, ___topAnchor_5)); }
	inline AnchorPoint_t4057058294 * get_topAnchor_5() const { return ___topAnchor_5; }
	inline AnchorPoint_t4057058294 ** get_address_of_topAnchor_5() { return &___topAnchor_5; }
	inline void set_topAnchor_5(AnchorPoint_t4057058294 * value)
	{
		___topAnchor_5 = value;
		Il2CppCodeGenWriteBarrier(&___topAnchor_5, value);
	}

	inline static int32_t get_offset_of_updateAnchors_6() { return static_cast<int32_t>(offsetof(UIRect_t4127168124, ___updateAnchors_6)); }
	inline int32_t get_updateAnchors_6() const { return ___updateAnchors_6; }
	inline int32_t* get_address_of_updateAnchors_6() { return &___updateAnchors_6; }
	inline void set_updateAnchors_6(int32_t value)
	{
		___updateAnchors_6 = value;
	}

	inline static int32_t get_offset_of_mGo_7() { return static_cast<int32_t>(offsetof(UIRect_t4127168124, ___mGo_7)); }
	inline GameObject_t1756533147 * get_mGo_7() const { return ___mGo_7; }
	inline GameObject_t1756533147 ** get_address_of_mGo_7() { return &___mGo_7; }
	inline void set_mGo_7(GameObject_t1756533147 * value)
	{
		___mGo_7 = value;
		Il2CppCodeGenWriteBarrier(&___mGo_7, value);
	}

	inline static int32_t get_offset_of_mTrans_8() { return static_cast<int32_t>(offsetof(UIRect_t4127168124, ___mTrans_8)); }
	inline Transform_t3275118058 * get_mTrans_8() const { return ___mTrans_8; }
	inline Transform_t3275118058 ** get_address_of_mTrans_8() { return &___mTrans_8; }
	inline void set_mTrans_8(Transform_t3275118058 * value)
	{
		___mTrans_8 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_8, value);
	}

	inline static int32_t get_offset_of_mChildren_9() { return static_cast<int32_t>(offsetof(UIRect_t4127168124, ___mChildren_9)); }
	inline BetterList_1_t52589470 * get_mChildren_9() const { return ___mChildren_9; }
	inline BetterList_1_t52589470 ** get_address_of_mChildren_9() { return &___mChildren_9; }
	inline void set_mChildren_9(BetterList_1_t52589470 * value)
	{
		___mChildren_9 = value;
		Il2CppCodeGenWriteBarrier(&___mChildren_9, value);
	}

	inline static int32_t get_offset_of_mChanged_10() { return static_cast<int32_t>(offsetof(UIRect_t4127168124, ___mChanged_10)); }
	inline bool get_mChanged_10() const { return ___mChanged_10; }
	inline bool* get_address_of_mChanged_10() { return &___mChanged_10; }
	inline void set_mChanged_10(bool value)
	{
		___mChanged_10 = value;
	}

	inline static int32_t get_offset_of_mStarted_11() { return static_cast<int32_t>(offsetof(UIRect_t4127168124, ___mStarted_11)); }
	inline bool get_mStarted_11() const { return ___mStarted_11; }
	inline bool* get_address_of_mStarted_11() { return &___mStarted_11; }
	inline void set_mStarted_11(bool value)
	{
		___mStarted_11 = value;
	}

	inline static int32_t get_offset_of_mParentFound_12() { return static_cast<int32_t>(offsetof(UIRect_t4127168124, ___mParentFound_12)); }
	inline bool get_mParentFound_12() const { return ___mParentFound_12; }
	inline bool* get_address_of_mParentFound_12() { return &___mParentFound_12; }
	inline void set_mParentFound_12(bool value)
	{
		___mParentFound_12 = value;
	}

	inline static int32_t get_offset_of_mUpdateAnchors_13() { return static_cast<int32_t>(offsetof(UIRect_t4127168124, ___mUpdateAnchors_13)); }
	inline bool get_mUpdateAnchors_13() const { return ___mUpdateAnchors_13; }
	inline bool* get_address_of_mUpdateAnchors_13() { return &___mUpdateAnchors_13; }
	inline void set_mUpdateAnchors_13(bool value)
	{
		___mUpdateAnchors_13 = value;
	}

	inline static int32_t get_offset_of_finalAlpha_14() { return static_cast<int32_t>(offsetof(UIRect_t4127168124, ___finalAlpha_14)); }
	inline float get_finalAlpha_14() const { return ___finalAlpha_14; }
	inline float* get_address_of_finalAlpha_14() { return &___finalAlpha_14; }
	inline void set_finalAlpha_14(float value)
	{
		___finalAlpha_14 = value;
	}

	inline static int32_t get_offset_of_mRoot_15() { return static_cast<int32_t>(offsetof(UIRect_t4127168124, ___mRoot_15)); }
	inline UIRoot_t389944298 * get_mRoot_15() const { return ___mRoot_15; }
	inline UIRoot_t389944298 ** get_address_of_mRoot_15() { return &___mRoot_15; }
	inline void set_mRoot_15(UIRoot_t389944298 * value)
	{
		___mRoot_15 = value;
		Il2CppCodeGenWriteBarrier(&___mRoot_15, value);
	}

	inline static int32_t get_offset_of_mParent_16() { return static_cast<int32_t>(offsetof(UIRect_t4127168124, ___mParent_16)); }
	inline UIRect_t4127168124 * get_mParent_16() const { return ___mParent_16; }
	inline UIRect_t4127168124 ** get_address_of_mParent_16() { return &___mParent_16; }
	inline void set_mParent_16(UIRect_t4127168124 * value)
	{
		___mParent_16 = value;
		Il2CppCodeGenWriteBarrier(&___mParent_16, value);
	}

	inline static int32_t get_offset_of_mMyCam_17() { return static_cast<int32_t>(offsetof(UIRect_t4127168124, ___mMyCam_17)); }
	inline Camera_t189460977 * get_mMyCam_17() const { return ___mMyCam_17; }
	inline Camera_t189460977 ** get_address_of_mMyCam_17() { return &___mMyCam_17; }
	inline void set_mMyCam_17(Camera_t189460977 * value)
	{
		___mMyCam_17 = value;
		Il2CppCodeGenWriteBarrier(&___mMyCam_17, value);
	}

	inline static int32_t get_offset_of_mUpdateFrame_18() { return static_cast<int32_t>(offsetof(UIRect_t4127168124, ___mUpdateFrame_18)); }
	inline int32_t get_mUpdateFrame_18() const { return ___mUpdateFrame_18; }
	inline int32_t* get_address_of_mUpdateFrame_18() { return &___mUpdateFrame_18; }
	inline void set_mUpdateFrame_18(int32_t value)
	{
		___mUpdateFrame_18 = value;
	}

	inline static int32_t get_offset_of_mAnchorsCached_19() { return static_cast<int32_t>(offsetof(UIRect_t4127168124, ___mAnchorsCached_19)); }
	inline bool get_mAnchorsCached_19() const { return ___mAnchorsCached_19; }
	inline bool* get_address_of_mAnchorsCached_19() { return &___mAnchorsCached_19; }
	inline void set_mAnchorsCached_19(bool value)
	{
		___mAnchorsCached_19 = value;
	}

	inline static int32_t get_offset_of_mRootSet_20() { return static_cast<int32_t>(offsetof(UIRect_t4127168124, ___mRootSet_20)); }
	inline bool get_mRootSet_20() const { return ___mRootSet_20; }
	inline bool* get_address_of_mRootSet_20() { return &___mRootSet_20; }
	inline void set_mRootSet_20(bool value)
	{
		___mRootSet_20 = value;
	}
};

struct UIRect_t4127168124_StaticFields
{
public:
	// UnityEngine.Vector3[] UIRect::mSides
	Vector3U5BU5D_t1172311765* ___mSides_21;

public:
	inline static int32_t get_offset_of_mSides_21() { return static_cast<int32_t>(offsetof(UIRect_t4127168124_StaticFields, ___mSides_21)); }
	inline Vector3U5BU5D_t1172311765* get_mSides_21() const { return ___mSides_21; }
	inline Vector3U5BU5D_t1172311765** get_address_of_mSides_21() { return &___mSides_21; }
	inline void set_mSides_21(Vector3U5BU5D_t1172311765* value)
	{
		___mSides_21 = value;
		Il2CppCodeGenWriteBarrier(&___mSides_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
