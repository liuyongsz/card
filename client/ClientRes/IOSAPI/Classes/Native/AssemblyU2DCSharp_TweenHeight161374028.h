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
// UITable
struct UITable_t3717403602;

#include "AssemblyU2DCSharp_UITweener2986641582.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TweenHeight
struct  TweenHeight_t161374028  : public UITweener_t2986641582
{
public:
	// System.Int32 TweenHeight::from
	int32_t ___from_20;
	// System.Int32 TweenHeight::to
	int32_t ___to_21;
	// System.Boolean TweenHeight::updateTable
	bool ___updateTable_22;
	// UIWidget TweenHeight::mWidget
	UIWidget_t1453041918 * ___mWidget_23;
	// UITable TweenHeight::mTable
	UITable_t3717403602 * ___mTable_24;

public:
	inline static int32_t get_offset_of_from_20() { return static_cast<int32_t>(offsetof(TweenHeight_t161374028, ___from_20)); }
	inline int32_t get_from_20() const { return ___from_20; }
	inline int32_t* get_address_of_from_20() { return &___from_20; }
	inline void set_from_20(int32_t value)
	{
		___from_20 = value;
	}

	inline static int32_t get_offset_of_to_21() { return static_cast<int32_t>(offsetof(TweenHeight_t161374028, ___to_21)); }
	inline int32_t get_to_21() const { return ___to_21; }
	inline int32_t* get_address_of_to_21() { return &___to_21; }
	inline void set_to_21(int32_t value)
	{
		___to_21 = value;
	}

	inline static int32_t get_offset_of_updateTable_22() { return static_cast<int32_t>(offsetof(TweenHeight_t161374028, ___updateTable_22)); }
	inline bool get_updateTable_22() const { return ___updateTable_22; }
	inline bool* get_address_of_updateTable_22() { return &___updateTable_22; }
	inline void set_updateTable_22(bool value)
	{
		___updateTable_22 = value;
	}

	inline static int32_t get_offset_of_mWidget_23() { return static_cast<int32_t>(offsetof(TweenHeight_t161374028, ___mWidget_23)); }
	inline UIWidget_t1453041918 * get_mWidget_23() const { return ___mWidget_23; }
	inline UIWidget_t1453041918 ** get_address_of_mWidget_23() { return &___mWidget_23; }
	inline void set_mWidget_23(UIWidget_t1453041918 * value)
	{
		___mWidget_23 = value;
		Il2CppCodeGenWriteBarrier(&___mWidget_23, value);
	}

	inline static int32_t get_offset_of_mTable_24() { return static_cast<int32_t>(offsetof(TweenHeight_t161374028, ___mTable_24)); }
	inline UITable_t3717403602 * get_mTable_24() const { return ___mTable_24; }
	inline UITable_t3717403602 ** get_address_of_mTable_24() { return &___mTable_24; }
	inline void set_mTable_24(UITable_t3717403602 * value)
	{
		___mTable_24 = value;
		Il2CppCodeGenWriteBarrier(&___mTable_24, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
