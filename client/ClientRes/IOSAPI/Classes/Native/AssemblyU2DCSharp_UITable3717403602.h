#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UITable/OnReposition
struct OnReposition_t1194954916;
// UITable/OnRepositionFinish
struct OnRepositionFinish_t4117272867;
// UIPanel
struct UIPanel_t1795085332;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t2644239190;

#include "AssemblyU2DCSharp_UIWidgetContainer701016325.h"
#include "AssemblyU2DCSharp_UITable_Direction1281150584.h"
#include "AssemblyU2DCSharp_UITable_Sorting3318157469.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UITable
struct  UITable_t3717403602  : public UIWidgetContainer_t701016325
{
public:
	// System.Int32 UITable::columns
	int32_t ___columns_2;
	// UITable/Direction UITable::direction
	int32_t ___direction_3;
	// UITable/Sorting UITable::sorting
	int32_t ___sorting_4;
	// System.Boolean UITable::hideInactive
	bool ___hideInactive_5;
	// System.Boolean UITable::keepWithinPanel
	bool ___keepWithinPanel_6;
	// UnityEngine.Vector2 UITable::padding
	Vector2_t2243707579  ___padding_7;
	// UITable/OnReposition UITable::onReposition
	OnReposition_t1194954916 * ___onReposition_8;
	// UITable/OnRepositionFinish UITable::onRepositionFinish
	OnRepositionFinish_t4117272867 * ___onRepositionFinish_9;
	// UIPanel UITable::mPanel
	UIPanel_t1795085332 * ___mPanel_10;
	// System.Boolean UITable::mInitDone
	bool ___mInitDone_11;
	// System.Boolean UITable::mReposition
	bool ___mReposition_12;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UITable::mChildren
	List_1_t2644239190 * ___mChildren_13;
	// System.Boolean UITable::sorted
	bool ___sorted_14;

public:
	inline static int32_t get_offset_of_columns_2() { return static_cast<int32_t>(offsetof(UITable_t3717403602, ___columns_2)); }
	inline int32_t get_columns_2() const { return ___columns_2; }
	inline int32_t* get_address_of_columns_2() { return &___columns_2; }
	inline void set_columns_2(int32_t value)
	{
		___columns_2 = value;
	}

	inline static int32_t get_offset_of_direction_3() { return static_cast<int32_t>(offsetof(UITable_t3717403602, ___direction_3)); }
	inline int32_t get_direction_3() const { return ___direction_3; }
	inline int32_t* get_address_of_direction_3() { return &___direction_3; }
	inline void set_direction_3(int32_t value)
	{
		___direction_3 = value;
	}

	inline static int32_t get_offset_of_sorting_4() { return static_cast<int32_t>(offsetof(UITable_t3717403602, ___sorting_4)); }
	inline int32_t get_sorting_4() const { return ___sorting_4; }
	inline int32_t* get_address_of_sorting_4() { return &___sorting_4; }
	inline void set_sorting_4(int32_t value)
	{
		___sorting_4 = value;
	}

	inline static int32_t get_offset_of_hideInactive_5() { return static_cast<int32_t>(offsetof(UITable_t3717403602, ___hideInactive_5)); }
	inline bool get_hideInactive_5() const { return ___hideInactive_5; }
	inline bool* get_address_of_hideInactive_5() { return &___hideInactive_5; }
	inline void set_hideInactive_5(bool value)
	{
		___hideInactive_5 = value;
	}

	inline static int32_t get_offset_of_keepWithinPanel_6() { return static_cast<int32_t>(offsetof(UITable_t3717403602, ___keepWithinPanel_6)); }
	inline bool get_keepWithinPanel_6() const { return ___keepWithinPanel_6; }
	inline bool* get_address_of_keepWithinPanel_6() { return &___keepWithinPanel_6; }
	inline void set_keepWithinPanel_6(bool value)
	{
		___keepWithinPanel_6 = value;
	}

	inline static int32_t get_offset_of_padding_7() { return static_cast<int32_t>(offsetof(UITable_t3717403602, ___padding_7)); }
	inline Vector2_t2243707579  get_padding_7() const { return ___padding_7; }
	inline Vector2_t2243707579 * get_address_of_padding_7() { return &___padding_7; }
	inline void set_padding_7(Vector2_t2243707579  value)
	{
		___padding_7 = value;
	}

	inline static int32_t get_offset_of_onReposition_8() { return static_cast<int32_t>(offsetof(UITable_t3717403602, ___onReposition_8)); }
	inline OnReposition_t1194954916 * get_onReposition_8() const { return ___onReposition_8; }
	inline OnReposition_t1194954916 ** get_address_of_onReposition_8() { return &___onReposition_8; }
	inline void set_onReposition_8(OnReposition_t1194954916 * value)
	{
		___onReposition_8 = value;
		Il2CppCodeGenWriteBarrier(&___onReposition_8, value);
	}

	inline static int32_t get_offset_of_onRepositionFinish_9() { return static_cast<int32_t>(offsetof(UITable_t3717403602, ___onRepositionFinish_9)); }
	inline OnRepositionFinish_t4117272867 * get_onRepositionFinish_9() const { return ___onRepositionFinish_9; }
	inline OnRepositionFinish_t4117272867 ** get_address_of_onRepositionFinish_9() { return &___onRepositionFinish_9; }
	inline void set_onRepositionFinish_9(OnRepositionFinish_t4117272867 * value)
	{
		___onRepositionFinish_9 = value;
		Il2CppCodeGenWriteBarrier(&___onRepositionFinish_9, value);
	}

	inline static int32_t get_offset_of_mPanel_10() { return static_cast<int32_t>(offsetof(UITable_t3717403602, ___mPanel_10)); }
	inline UIPanel_t1795085332 * get_mPanel_10() const { return ___mPanel_10; }
	inline UIPanel_t1795085332 ** get_address_of_mPanel_10() { return &___mPanel_10; }
	inline void set_mPanel_10(UIPanel_t1795085332 * value)
	{
		___mPanel_10 = value;
		Il2CppCodeGenWriteBarrier(&___mPanel_10, value);
	}

	inline static int32_t get_offset_of_mInitDone_11() { return static_cast<int32_t>(offsetof(UITable_t3717403602, ___mInitDone_11)); }
	inline bool get_mInitDone_11() const { return ___mInitDone_11; }
	inline bool* get_address_of_mInitDone_11() { return &___mInitDone_11; }
	inline void set_mInitDone_11(bool value)
	{
		___mInitDone_11 = value;
	}

	inline static int32_t get_offset_of_mReposition_12() { return static_cast<int32_t>(offsetof(UITable_t3717403602, ___mReposition_12)); }
	inline bool get_mReposition_12() const { return ___mReposition_12; }
	inline bool* get_address_of_mReposition_12() { return &___mReposition_12; }
	inline void set_mReposition_12(bool value)
	{
		___mReposition_12 = value;
	}

	inline static int32_t get_offset_of_mChildren_13() { return static_cast<int32_t>(offsetof(UITable_t3717403602, ___mChildren_13)); }
	inline List_1_t2644239190 * get_mChildren_13() const { return ___mChildren_13; }
	inline List_1_t2644239190 ** get_address_of_mChildren_13() { return &___mChildren_13; }
	inline void set_mChildren_13(List_1_t2644239190 * value)
	{
		___mChildren_13 = value;
		Il2CppCodeGenWriteBarrier(&___mChildren_13, value);
	}

	inline static int32_t get_offset_of_sorted_14() { return static_cast<int32_t>(offsetof(UITable_t3717403602, ___sorted_14)); }
	inline bool get_sorted_14() const { return ___sorted_14; }
	inline bool* get_address_of_sorted_14() { return &___sorted_14; }
	inline void set_sorted_14(bool value)
	{
		___sorted_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
