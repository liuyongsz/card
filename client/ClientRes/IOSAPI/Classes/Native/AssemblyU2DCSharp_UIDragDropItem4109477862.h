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
// UnityEngine.Collider
struct Collider_t3497673348;
// UIRoot
struct UIRoot_t389944298;
// UIGrid
struct UIGrid_t2420180906;
// UITable
struct UITable_t3717403602;
// UIDragScrollView
struct UIDragScrollView_t2942595320;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_UIDragDropItem_Restriction3942216849.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIDragDropItem
struct  UIDragDropItem_t4109477862  : public MonoBehaviour_t1158329972
{
public:
	// UIDragDropItem/Restriction UIDragDropItem::restriction
	int32_t ___restriction_2;
	// System.Boolean UIDragDropItem::cloneOnDrag
	bool ___cloneOnDrag_3;
	// UnityEngine.Transform UIDragDropItem::mTrans
	Transform_t3275118058 * ___mTrans_4;
	// UnityEngine.Transform UIDragDropItem::mParent
	Transform_t3275118058 * ___mParent_5;
	// UnityEngine.Collider UIDragDropItem::mCollider
	Collider_t3497673348 * ___mCollider_6;
	// UIRoot UIDragDropItem::mRoot
	UIRoot_t389944298 * ___mRoot_7;
	// UIGrid UIDragDropItem::mGrid
	UIGrid_t2420180906 * ___mGrid_8;
	// UITable UIDragDropItem::mTable
	UITable_t3717403602 * ___mTable_9;
	// System.Int32 UIDragDropItem::mTouchID
	int32_t ___mTouchID_10;
	// System.Single UIDragDropItem::mPressTime
	float ___mPressTime_11;
	// UIDragScrollView UIDragDropItem::mDragScrollView
	UIDragScrollView_t2942595320 * ___mDragScrollView_12;

public:
	inline static int32_t get_offset_of_restriction_2() { return static_cast<int32_t>(offsetof(UIDragDropItem_t4109477862, ___restriction_2)); }
	inline int32_t get_restriction_2() const { return ___restriction_2; }
	inline int32_t* get_address_of_restriction_2() { return &___restriction_2; }
	inline void set_restriction_2(int32_t value)
	{
		___restriction_2 = value;
	}

	inline static int32_t get_offset_of_cloneOnDrag_3() { return static_cast<int32_t>(offsetof(UIDragDropItem_t4109477862, ___cloneOnDrag_3)); }
	inline bool get_cloneOnDrag_3() const { return ___cloneOnDrag_3; }
	inline bool* get_address_of_cloneOnDrag_3() { return &___cloneOnDrag_3; }
	inline void set_cloneOnDrag_3(bool value)
	{
		___cloneOnDrag_3 = value;
	}

	inline static int32_t get_offset_of_mTrans_4() { return static_cast<int32_t>(offsetof(UIDragDropItem_t4109477862, ___mTrans_4)); }
	inline Transform_t3275118058 * get_mTrans_4() const { return ___mTrans_4; }
	inline Transform_t3275118058 ** get_address_of_mTrans_4() { return &___mTrans_4; }
	inline void set_mTrans_4(Transform_t3275118058 * value)
	{
		___mTrans_4 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_4, value);
	}

	inline static int32_t get_offset_of_mParent_5() { return static_cast<int32_t>(offsetof(UIDragDropItem_t4109477862, ___mParent_5)); }
	inline Transform_t3275118058 * get_mParent_5() const { return ___mParent_5; }
	inline Transform_t3275118058 ** get_address_of_mParent_5() { return &___mParent_5; }
	inline void set_mParent_5(Transform_t3275118058 * value)
	{
		___mParent_5 = value;
		Il2CppCodeGenWriteBarrier(&___mParent_5, value);
	}

	inline static int32_t get_offset_of_mCollider_6() { return static_cast<int32_t>(offsetof(UIDragDropItem_t4109477862, ___mCollider_6)); }
	inline Collider_t3497673348 * get_mCollider_6() const { return ___mCollider_6; }
	inline Collider_t3497673348 ** get_address_of_mCollider_6() { return &___mCollider_6; }
	inline void set_mCollider_6(Collider_t3497673348 * value)
	{
		___mCollider_6 = value;
		Il2CppCodeGenWriteBarrier(&___mCollider_6, value);
	}

	inline static int32_t get_offset_of_mRoot_7() { return static_cast<int32_t>(offsetof(UIDragDropItem_t4109477862, ___mRoot_7)); }
	inline UIRoot_t389944298 * get_mRoot_7() const { return ___mRoot_7; }
	inline UIRoot_t389944298 ** get_address_of_mRoot_7() { return &___mRoot_7; }
	inline void set_mRoot_7(UIRoot_t389944298 * value)
	{
		___mRoot_7 = value;
		Il2CppCodeGenWriteBarrier(&___mRoot_7, value);
	}

	inline static int32_t get_offset_of_mGrid_8() { return static_cast<int32_t>(offsetof(UIDragDropItem_t4109477862, ___mGrid_8)); }
	inline UIGrid_t2420180906 * get_mGrid_8() const { return ___mGrid_8; }
	inline UIGrid_t2420180906 ** get_address_of_mGrid_8() { return &___mGrid_8; }
	inline void set_mGrid_8(UIGrid_t2420180906 * value)
	{
		___mGrid_8 = value;
		Il2CppCodeGenWriteBarrier(&___mGrid_8, value);
	}

	inline static int32_t get_offset_of_mTable_9() { return static_cast<int32_t>(offsetof(UIDragDropItem_t4109477862, ___mTable_9)); }
	inline UITable_t3717403602 * get_mTable_9() const { return ___mTable_9; }
	inline UITable_t3717403602 ** get_address_of_mTable_9() { return &___mTable_9; }
	inline void set_mTable_9(UITable_t3717403602 * value)
	{
		___mTable_9 = value;
		Il2CppCodeGenWriteBarrier(&___mTable_9, value);
	}

	inline static int32_t get_offset_of_mTouchID_10() { return static_cast<int32_t>(offsetof(UIDragDropItem_t4109477862, ___mTouchID_10)); }
	inline int32_t get_mTouchID_10() const { return ___mTouchID_10; }
	inline int32_t* get_address_of_mTouchID_10() { return &___mTouchID_10; }
	inline void set_mTouchID_10(int32_t value)
	{
		___mTouchID_10 = value;
	}

	inline static int32_t get_offset_of_mPressTime_11() { return static_cast<int32_t>(offsetof(UIDragDropItem_t4109477862, ___mPressTime_11)); }
	inline float get_mPressTime_11() const { return ___mPressTime_11; }
	inline float* get_address_of_mPressTime_11() { return &___mPressTime_11; }
	inline void set_mPressTime_11(float value)
	{
		___mPressTime_11 = value;
	}

	inline static int32_t get_offset_of_mDragScrollView_12() { return static_cast<int32_t>(offsetof(UIDragDropItem_t4109477862, ___mDragScrollView_12)); }
	inline UIDragScrollView_t2942595320 * get_mDragScrollView_12() const { return ___mDragScrollView_12; }
	inline UIDragScrollView_t2942595320 ** get_address_of_mDragScrollView_12() { return &___mDragScrollView_12; }
	inline void set_mDragScrollView_12(UIDragScrollView_t2942595320 * value)
	{
		___mDragScrollView_12 = value;
		Il2CppCodeGenWriteBarrier(&___mDragScrollView_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
