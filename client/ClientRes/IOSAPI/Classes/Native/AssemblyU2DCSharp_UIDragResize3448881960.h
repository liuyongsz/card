#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIWidget
struct UIWidget_t1453041918;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_UIWidget_Pivot752586349.h"
#include "UnityEngine_UnityEngine_Plane3727654732.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIDragResize
struct  UIDragResize_t3448881960  : public MonoBehaviour_t1158329972
{
public:
	// UIWidget UIDragResize::target
	UIWidget_t1453041918 * ___target_2;
	// UIWidget/Pivot UIDragResize::pivot
	int32_t ___pivot_3;
	// System.Int32 UIDragResize::minWidth
	int32_t ___minWidth_4;
	// System.Int32 UIDragResize::minHeight
	int32_t ___minHeight_5;
	// System.Int32 UIDragResize::maxWidth
	int32_t ___maxWidth_6;
	// System.Int32 UIDragResize::maxHeight
	int32_t ___maxHeight_7;
	// UnityEngine.Plane UIDragResize::mPlane
	Plane_t3727654732  ___mPlane_8;
	// UnityEngine.Vector3 UIDragResize::mRayPos
	Vector3_t2243707580  ___mRayPos_9;
	// UnityEngine.Vector3 UIDragResize::mLocalPos
	Vector3_t2243707580  ___mLocalPos_10;
	// System.Int32 UIDragResize::mWidth
	int32_t ___mWidth_11;
	// System.Int32 UIDragResize::mHeight
	int32_t ___mHeight_12;
	// System.Boolean UIDragResize::mDragging
	bool ___mDragging_13;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(UIDragResize_t3448881960, ___target_2)); }
	inline UIWidget_t1453041918 * get_target_2() const { return ___target_2; }
	inline UIWidget_t1453041918 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(UIWidget_t1453041918 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_pivot_3() { return static_cast<int32_t>(offsetof(UIDragResize_t3448881960, ___pivot_3)); }
	inline int32_t get_pivot_3() const { return ___pivot_3; }
	inline int32_t* get_address_of_pivot_3() { return &___pivot_3; }
	inline void set_pivot_3(int32_t value)
	{
		___pivot_3 = value;
	}

	inline static int32_t get_offset_of_minWidth_4() { return static_cast<int32_t>(offsetof(UIDragResize_t3448881960, ___minWidth_4)); }
	inline int32_t get_minWidth_4() const { return ___minWidth_4; }
	inline int32_t* get_address_of_minWidth_4() { return &___minWidth_4; }
	inline void set_minWidth_4(int32_t value)
	{
		___minWidth_4 = value;
	}

	inline static int32_t get_offset_of_minHeight_5() { return static_cast<int32_t>(offsetof(UIDragResize_t3448881960, ___minHeight_5)); }
	inline int32_t get_minHeight_5() const { return ___minHeight_5; }
	inline int32_t* get_address_of_minHeight_5() { return &___minHeight_5; }
	inline void set_minHeight_5(int32_t value)
	{
		___minHeight_5 = value;
	}

	inline static int32_t get_offset_of_maxWidth_6() { return static_cast<int32_t>(offsetof(UIDragResize_t3448881960, ___maxWidth_6)); }
	inline int32_t get_maxWidth_6() const { return ___maxWidth_6; }
	inline int32_t* get_address_of_maxWidth_6() { return &___maxWidth_6; }
	inline void set_maxWidth_6(int32_t value)
	{
		___maxWidth_6 = value;
	}

	inline static int32_t get_offset_of_maxHeight_7() { return static_cast<int32_t>(offsetof(UIDragResize_t3448881960, ___maxHeight_7)); }
	inline int32_t get_maxHeight_7() const { return ___maxHeight_7; }
	inline int32_t* get_address_of_maxHeight_7() { return &___maxHeight_7; }
	inline void set_maxHeight_7(int32_t value)
	{
		___maxHeight_7 = value;
	}

	inline static int32_t get_offset_of_mPlane_8() { return static_cast<int32_t>(offsetof(UIDragResize_t3448881960, ___mPlane_8)); }
	inline Plane_t3727654732  get_mPlane_8() const { return ___mPlane_8; }
	inline Plane_t3727654732 * get_address_of_mPlane_8() { return &___mPlane_8; }
	inline void set_mPlane_8(Plane_t3727654732  value)
	{
		___mPlane_8 = value;
	}

	inline static int32_t get_offset_of_mRayPos_9() { return static_cast<int32_t>(offsetof(UIDragResize_t3448881960, ___mRayPos_9)); }
	inline Vector3_t2243707580  get_mRayPos_9() const { return ___mRayPos_9; }
	inline Vector3_t2243707580 * get_address_of_mRayPos_9() { return &___mRayPos_9; }
	inline void set_mRayPos_9(Vector3_t2243707580  value)
	{
		___mRayPos_9 = value;
	}

	inline static int32_t get_offset_of_mLocalPos_10() { return static_cast<int32_t>(offsetof(UIDragResize_t3448881960, ___mLocalPos_10)); }
	inline Vector3_t2243707580  get_mLocalPos_10() const { return ___mLocalPos_10; }
	inline Vector3_t2243707580 * get_address_of_mLocalPos_10() { return &___mLocalPos_10; }
	inline void set_mLocalPos_10(Vector3_t2243707580  value)
	{
		___mLocalPos_10 = value;
	}

	inline static int32_t get_offset_of_mWidth_11() { return static_cast<int32_t>(offsetof(UIDragResize_t3448881960, ___mWidth_11)); }
	inline int32_t get_mWidth_11() const { return ___mWidth_11; }
	inline int32_t* get_address_of_mWidth_11() { return &___mWidth_11; }
	inline void set_mWidth_11(int32_t value)
	{
		___mWidth_11 = value;
	}

	inline static int32_t get_offset_of_mHeight_12() { return static_cast<int32_t>(offsetof(UIDragResize_t3448881960, ___mHeight_12)); }
	inline int32_t get_mHeight_12() const { return ___mHeight_12; }
	inline int32_t* get_address_of_mHeight_12() { return &___mHeight_12; }
	inline void set_mHeight_12(int32_t value)
	{
		___mHeight_12 = value;
	}

	inline static int32_t get_offset_of_mDragging_13() { return static_cast<int32_t>(offsetof(UIDragResize_t3448881960, ___mDragging_13)); }
	inline bool get_mDragging_13() const { return ___mDragging_13; }
	inline bool* get_address_of_mDragging_13() { return &___mDragging_13; }
	inline void set_mDragging_13(bool value)
	{
		___mDragging_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
