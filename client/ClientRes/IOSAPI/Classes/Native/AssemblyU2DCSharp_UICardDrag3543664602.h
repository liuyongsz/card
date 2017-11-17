#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CardRole
struct CardRole_t1983515686;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "AssemblyU2DCSharp_UIDragDropItem4109477862.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UICardDrag
struct  UICardDrag_t3543664602  : public UIDragDropItem_t4109477862
{
public:
	// System.Boolean UICardDrag::HitTest
	bool ___HitTest_13;
	// System.Boolean UICardDrag::IsDrag
	bool ___IsDrag_14;
	// System.Boolean UICardDrag::IsCustomDrag
	bool ___IsCustomDrag_15;
	// CardRole UICardDrag::mCardRole
	CardRole_t1983515686 * ___mCardRole_16;
	// CardRole UICardDrag::mUpdateHitTestCardRole
	CardRole_t1983515686 * ___mUpdateHitTestCardRole_17;
	// UnityEngine.Vector3 UICardDrag::mOldPostion
	Vector3_t2243707580  ___mOldPostion_18;
	// UnityEngine.Vector3 UICardDrag::mSlotPostion
	Vector3_t2243707580  ___mSlotPostion_19;
	// UnityEngine.Transform UICardDrag::mDragObject
	Transform_t3275118058 * ___mDragObject_20;
	// System.Boolean UICardDrag::IsClicked
	bool ___IsClicked_21;

public:
	inline static int32_t get_offset_of_HitTest_13() { return static_cast<int32_t>(offsetof(UICardDrag_t3543664602, ___HitTest_13)); }
	inline bool get_HitTest_13() const { return ___HitTest_13; }
	inline bool* get_address_of_HitTest_13() { return &___HitTest_13; }
	inline void set_HitTest_13(bool value)
	{
		___HitTest_13 = value;
	}

	inline static int32_t get_offset_of_IsDrag_14() { return static_cast<int32_t>(offsetof(UICardDrag_t3543664602, ___IsDrag_14)); }
	inline bool get_IsDrag_14() const { return ___IsDrag_14; }
	inline bool* get_address_of_IsDrag_14() { return &___IsDrag_14; }
	inline void set_IsDrag_14(bool value)
	{
		___IsDrag_14 = value;
	}

	inline static int32_t get_offset_of_IsCustomDrag_15() { return static_cast<int32_t>(offsetof(UICardDrag_t3543664602, ___IsCustomDrag_15)); }
	inline bool get_IsCustomDrag_15() const { return ___IsCustomDrag_15; }
	inline bool* get_address_of_IsCustomDrag_15() { return &___IsCustomDrag_15; }
	inline void set_IsCustomDrag_15(bool value)
	{
		___IsCustomDrag_15 = value;
	}

	inline static int32_t get_offset_of_mCardRole_16() { return static_cast<int32_t>(offsetof(UICardDrag_t3543664602, ___mCardRole_16)); }
	inline CardRole_t1983515686 * get_mCardRole_16() const { return ___mCardRole_16; }
	inline CardRole_t1983515686 ** get_address_of_mCardRole_16() { return &___mCardRole_16; }
	inline void set_mCardRole_16(CardRole_t1983515686 * value)
	{
		___mCardRole_16 = value;
		Il2CppCodeGenWriteBarrier(&___mCardRole_16, value);
	}

	inline static int32_t get_offset_of_mUpdateHitTestCardRole_17() { return static_cast<int32_t>(offsetof(UICardDrag_t3543664602, ___mUpdateHitTestCardRole_17)); }
	inline CardRole_t1983515686 * get_mUpdateHitTestCardRole_17() const { return ___mUpdateHitTestCardRole_17; }
	inline CardRole_t1983515686 ** get_address_of_mUpdateHitTestCardRole_17() { return &___mUpdateHitTestCardRole_17; }
	inline void set_mUpdateHitTestCardRole_17(CardRole_t1983515686 * value)
	{
		___mUpdateHitTestCardRole_17 = value;
		Il2CppCodeGenWriteBarrier(&___mUpdateHitTestCardRole_17, value);
	}

	inline static int32_t get_offset_of_mOldPostion_18() { return static_cast<int32_t>(offsetof(UICardDrag_t3543664602, ___mOldPostion_18)); }
	inline Vector3_t2243707580  get_mOldPostion_18() const { return ___mOldPostion_18; }
	inline Vector3_t2243707580 * get_address_of_mOldPostion_18() { return &___mOldPostion_18; }
	inline void set_mOldPostion_18(Vector3_t2243707580  value)
	{
		___mOldPostion_18 = value;
	}

	inline static int32_t get_offset_of_mSlotPostion_19() { return static_cast<int32_t>(offsetof(UICardDrag_t3543664602, ___mSlotPostion_19)); }
	inline Vector3_t2243707580  get_mSlotPostion_19() const { return ___mSlotPostion_19; }
	inline Vector3_t2243707580 * get_address_of_mSlotPostion_19() { return &___mSlotPostion_19; }
	inline void set_mSlotPostion_19(Vector3_t2243707580  value)
	{
		___mSlotPostion_19 = value;
	}

	inline static int32_t get_offset_of_mDragObject_20() { return static_cast<int32_t>(offsetof(UICardDrag_t3543664602, ___mDragObject_20)); }
	inline Transform_t3275118058 * get_mDragObject_20() const { return ___mDragObject_20; }
	inline Transform_t3275118058 ** get_address_of_mDragObject_20() { return &___mDragObject_20; }
	inline void set_mDragObject_20(Transform_t3275118058 * value)
	{
		___mDragObject_20 = value;
		Il2CppCodeGenWriteBarrier(&___mDragObject_20, value);
	}

	inline static int32_t get_offset_of_IsClicked_21() { return static_cast<int32_t>(offsetof(UICardDrag_t3543664602, ___IsClicked_21)); }
	inline bool get_IsClicked_21() const { return ___IsClicked_21; }
	inline bool* get_address_of_IsClicked_21() { return &___IsClicked_21; }
	inline void set_IsClicked_21(bool value)
	{
		___IsClicked_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
