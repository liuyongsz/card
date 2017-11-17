#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<EffectLevel>
struct List_1_t1919181155;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_GameQuality783479189.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EffectLevel
struct  EffectLevel_t2550060023  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean EffectLevel::mbHigh
	bool ___mbHigh_4;
	// System.Boolean EffectLevel::mbMiddle
	bool ___mbMiddle_5;
	// System.Boolean EffectLevel::mbLow
	bool ___mbLow_6;
	// System.Boolean EffectLevel::mbMinimalism
	bool ___mbMinimalism_7;
	// System.Boolean EffectLevel::mbCurActive
	bool ___mbCurActive_8;

public:
	inline static int32_t get_offset_of_mbHigh_4() { return static_cast<int32_t>(offsetof(EffectLevel_t2550060023, ___mbHigh_4)); }
	inline bool get_mbHigh_4() const { return ___mbHigh_4; }
	inline bool* get_address_of_mbHigh_4() { return &___mbHigh_4; }
	inline void set_mbHigh_4(bool value)
	{
		___mbHigh_4 = value;
	}

	inline static int32_t get_offset_of_mbMiddle_5() { return static_cast<int32_t>(offsetof(EffectLevel_t2550060023, ___mbMiddle_5)); }
	inline bool get_mbMiddle_5() const { return ___mbMiddle_5; }
	inline bool* get_address_of_mbMiddle_5() { return &___mbMiddle_5; }
	inline void set_mbMiddle_5(bool value)
	{
		___mbMiddle_5 = value;
	}

	inline static int32_t get_offset_of_mbLow_6() { return static_cast<int32_t>(offsetof(EffectLevel_t2550060023, ___mbLow_6)); }
	inline bool get_mbLow_6() const { return ___mbLow_6; }
	inline bool* get_address_of_mbLow_6() { return &___mbLow_6; }
	inline void set_mbLow_6(bool value)
	{
		___mbLow_6 = value;
	}

	inline static int32_t get_offset_of_mbMinimalism_7() { return static_cast<int32_t>(offsetof(EffectLevel_t2550060023, ___mbMinimalism_7)); }
	inline bool get_mbMinimalism_7() const { return ___mbMinimalism_7; }
	inline bool* get_address_of_mbMinimalism_7() { return &___mbMinimalism_7; }
	inline void set_mbMinimalism_7(bool value)
	{
		___mbMinimalism_7 = value;
	}

	inline static int32_t get_offset_of_mbCurActive_8() { return static_cast<int32_t>(offsetof(EffectLevel_t2550060023, ___mbCurActive_8)); }
	inline bool get_mbCurActive_8() const { return ___mbCurActive_8; }
	inline bool* get_address_of_mbCurActive_8() { return &___mbCurActive_8; }
	inline void set_mbCurActive_8(bool value)
	{
		___mbCurActive_8 = value;
	}
};

struct EffectLevel_t2550060023_StaticFields
{
public:
	// GameQuality EffectLevel::iEffectLevel
	int32_t ___iEffectLevel_2;
	// System.Collections.Generic.List`1<EffectLevel> EffectLevel::mGoList
	List_1_t1919181155 * ___mGoList_3;

public:
	inline static int32_t get_offset_of_iEffectLevel_2() { return static_cast<int32_t>(offsetof(EffectLevel_t2550060023_StaticFields, ___iEffectLevel_2)); }
	inline int32_t get_iEffectLevel_2() const { return ___iEffectLevel_2; }
	inline int32_t* get_address_of_iEffectLevel_2() { return &___iEffectLevel_2; }
	inline void set_iEffectLevel_2(int32_t value)
	{
		___iEffectLevel_2 = value;
	}

	inline static int32_t get_offset_of_mGoList_3() { return static_cast<int32_t>(offsetof(EffectLevel_t2550060023_StaticFields, ___mGoList_3)); }
	inline List_1_t1919181155 * get_mGoList_3() const { return ___mGoList_3; }
	inline List_1_t1919181155 ** get_address_of_mGoList_3() { return &___mGoList_3; }
	inline void set_mGoList_3(List_1_t1919181155 * value)
	{
		___mGoList_3 = value;
		Il2CppCodeGenWriteBarrier(&___mGoList_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
