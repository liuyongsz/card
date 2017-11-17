#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CustomScrollView
struct CustomScrollView_t1642058881;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// CustomTableManager/PressTimer
struct PressTimer_t2446953067;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CustomTableManager
struct  CustomTableManager_t2506548688  : public MonoBehaviour_t1158329972
{
public:
	// CustomScrollView CustomTableManager::view
	CustomScrollView_t1642058881 * ___view_2;
	// UnityEngine.MonoBehaviour CustomTableManager::up
	MonoBehaviour_t1158329972 * ___up_3;
	// UnityEngine.MonoBehaviour CustomTableManager::down
	MonoBehaviour_t1158329972 * ___down_4;
	// System.Single CustomTableManager::dragFower
	float ___dragFower_5;
	// UnityEngine.Vector3 CustomTableManager::offset
	Vector3_t2243707580  ___offset_6;
	// CustomTableManager/PressTimer CustomTableManager::pTimer
	PressTimer_t2446953067 * ___pTimer_7;
	// UnityEngine.Vector3 CustomTableManager::dragDelta
	Vector3_t2243707580  ___dragDelta_8;

public:
	inline static int32_t get_offset_of_view_2() { return static_cast<int32_t>(offsetof(CustomTableManager_t2506548688, ___view_2)); }
	inline CustomScrollView_t1642058881 * get_view_2() const { return ___view_2; }
	inline CustomScrollView_t1642058881 ** get_address_of_view_2() { return &___view_2; }
	inline void set_view_2(CustomScrollView_t1642058881 * value)
	{
		___view_2 = value;
		Il2CppCodeGenWriteBarrier(&___view_2, value);
	}

	inline static int32_t get_offset_of_up_3() { return static_cast<int32_t>(offsetof(CustomTableManager_t2506548688, ___up_3)); }
	inline MonoBehaviour_t1158329972 * get_up_3() const { return ___up_3; }
	inline MonoBehaviour_t1158329972 ** get_address_of_up_3() { return &___up_3; }
	inline void set_up_3(MonoBehaviour_t1158329972 * value)
	{
		___up_3 = value;
		Il2CppCodeGenWriteBarrier(&___up_3, value);
	}

	inline static int32_t get_offset_of_down_4() { return static_cast<int32_t>(offsetof(CustomTableManager_t2506548688, ___down_4)); }
	inline MonoBehaviour_t1158329972 * get_down_4() const { return ___down_4; }
	inline MonoBehaviour_t1158329972 ** get_address_of_down_4() { return &___down_4; }
	inline void set_down_4(MonoBehaviour_t1158329972 * value)
	{
		___down_4 = value;
		Il2CppCodeGenWriteBarrier(&___down_4, value);
	}

	inline static int32_t get_offset_of_dragFower_5() { return static_cast<int32_t>(offsetof(CustomTableManager_t2506548688, ___dragFower_5)); }
	inline float get_dragFower_5() const { return ___dragFower_5; }
	inline float* get_address_of_dragFower_5() { return &___dragFower_5; }
	inline void set_dragFower_5(float value)
	{
		___dragFower_5 = value;
	}

	inline static int32_t get_offset_of_offset_6() { return static_cast<int32_t>(offsetof(CustomTableManager_t2506548688, ___offset_6)); }
	inline Vector3_t2243707580  get_offset_6() const { return ___offset_6; }
	inline Vector3_t2243707580 * get_address_of_offset_6() { return &___offset_6; }
	inline void set_offset_6(Vector3_t2243707580  value)
	{
		___offset_6 = value;
	}

	inline static int32_t get_offset_of_pTimer_7() { return static_cast<int32_t>(offsetof(CustomTableManager_t2506548688, ___pTimer_7)); }
	inline PressTimer_t2446953067 * get_pTimer_7() const { return ___pTimer_7; }
	inline PressTimer_t2446953067 ** get_address_of_pTimer_7() { return &___pTimer_7; }
	inline void set_pTimer_7(PressTimer_t2446953067 * value)
	{
		___pTimer_7 = value;
		Il2CppCodeGenWriteBarrier(&___pTimer_7, value);
	}

	inline static int32_t get_offset_of_dragDelta_8() { return static_cast<int32_t>(offsetof(CustomTableManager_t2506548688, ___dragDelta_8)); }
	inline Vector3_t2243707580  get_dragDelta_8() const { return ___dragDelta_8; }
	inline Vector3_t2243707580 * get_address_of_dragDelta_8() { return &___dragDelta_8; }
	inline void set_dragDelta_8(Vector3_t2243707580  value)
	{
		___dragDelta_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
