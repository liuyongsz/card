#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// NGUIGrid/OnReposition
struct OnReposition_t1041297655;
// UIPanel
struct UIPanel_t1795085332;

#include "AssemblyU2DCSharp_UIWidgetContainer701016325.h"
#include "AssemblyU2DCSharp_NGUIGrid_Arrangement4051174870.h"
#include "AssemblyU2DCSharp_NGUIGrid_Sorting1584090638.h"
#include "AssemblyU2DCSharp_UIWidget_Pivot752586349.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NGUIGrid
struct  NGUIGrid_t1102104747  : public UIWidgetContainer_t701016325
{
public:
	// NGUIGrid/Arrangement NGUIGrid::arrangement
	int32_t ___arrangement_2;
	// NGUIGrid/Sorting NGUIGrid::sorting
	int32_t ___sorting_3;
	// UIWidget/Pivot NGUIGrid::pivot
	int32_t ___pivot_4;
	// System.Int32 NGUIGrid::maxPerLine
	int32_t ___maxPerLine_5;
	// System.Single NGUIGrid::cellWidth
	float ___cellWidth_6;
	// System.Single NGUIGrid::cellHeight
	float ___cellHeight_7;
	// System.Boolean NGUIGrid::animateSmoothly
	bool ___animateSmoothly_8;
	// System.Boolean NGUIGrid::hideInactive
	bool ___hideInactive_9;
	// System.Boolean NGUIGrid::keepWithinPanel
	bool ___keepWithinPanel_10;
	// NGUIGrid/OnReposition NGUIGrid::onReposition
	OnReposition_t1041297655 * ___onReposition_11;
	// System.Boolean NGUIGrid::sorted
	bool ___sorted_12;
	// System.Boolean NGUIGrid::mReposition
	bool ___mReposition_13;
	// UIPanel NGUIGrid::mPanel
	UIPanel_t1795085332 * ___mPanel_14;
	// System.Boolean NGUIGrid::mInitDone
	bool ___mInitDone_15;

public:
	inline static int32_t get_offset_of_arrangement_2() { return static_cast<int32_t>(offsetof(NGUIGrid_t1102104747, ___arrangement_2)); }
	inline int32_t get_arrangement_2() const { return ___arrangement_2; }
	inline int32_t* get_address_of_arrangement_2() { return &___arrangement_2; }
	inline void set_arrangement_2(int32_t value)
	{
		___arrangement_2 = value;
	}

	inline static int32_t get_offset_of_sorting_3() { return static_cast<int32_t>(offsetof(NGUIGrid_t1102104747, ___sorting_3)); }
	inline int32_t get_sorting_3() const { return ___sorting_3; }
	inline int32_t* get_address_of_sorting_3() { return &___sorting_3; }
	inline void set_sorting_3(int32_t value)
	{
		___sorting_3 = value;
	}

	inline static int32_t get_offset_of_pivot_4() { return static_cast<int32_t>(offsetof(NGUIGrid_t1102104747, ___pivot_4)); }
	inline int32_t get_pivot_4() const { return ___pivot_4; }
	inline int32_t* get_address_of_pivot_4() { return &___pivot_4; }
	inline void set_pivot_4(int32_t value)
	{
		___pivot_4 = value;
	}

	inline static int32_t get_offset_of_maxPerLine_5() { return static_cast<int32_t>(offsetof(NGUIGrid_t1102104747, ___maxPerLine_5)); }
	inline int32_t get_maxPerLine_5() const { return ___maxPerLine_5; }
	inline int32_t* get_address_of_maxPerLine_5() { return &___maxPerLine_5; }
	inline void set_maxPerLine_5(int32_t value)
	{
		___maxPerLine_5 = value;
	}

	inline static int32_t get_offset_of_cellWidth_6() { return static_cast<int32_t>(offsetof(NGUIGrid_t1102104747, ___cellWidth_6)); }
	inline float get_cellWidth_6() const { return ___cellWidth_6; }
	inline float* get_address_of_cellWidth_6() { return &___cellWidth_6; }
	inline void set_cellWidth_6(float value)
	{
		___cellWidth_6 = value;
	}

	inline static int32_t get_offset_of_cellHeight_7() { return static_cast<int32_t>(offsetof(NGUIGrid_t1102104747, ___cellHeight_7)); }
	inline float get_cellHeight_7() const { return ___cellHeight_7; }
	inline float* get_address_of_cellHeight_7() { return &___cellHeight_7; }
	inline void set_cellHeight_7(float value)
	{
		___cellHeight_7 = value;
	}

	inline static int32_t get_offset_of_animateSmoothly_8() { return static_cast<int32_t>(offsetof(NGUIGrid_t1102104747, ___animateSmoothly_8)); }
	inline bool get_animateSmoothly_8() const { return ___animateSmoothly_8; }
	inline bool* get_address_of_animateSmoothly_8() { return &___animateSmoothly_8; }
	inline void set_animateSmoothly_8(bool value)
	{
		___animateSmoothly_8 = value;
	}

	inline static int32_t get_offset_of_hideInactive_9() { return static_cast<int32_t>(offsetof(NGUIGrid_t1102104747, ___hideInactive_9)); }
	inline bool get_hideInactive_9() const { return ___hideInactive_9; }
	inline bool* get_address_of_hideInactive_9() { return &___hideInactive_9; }
	inline void set_hideInactive_9(bool value)
	{
		___hideInactive_9 = value;
	}

	inline static int32_t get_offset_of_keepWithinPanel_10() { return static_cast<int32_t>(offsetof(NGUIGrid_t1102104747, ___keepWithinPanel_10)); }
	inline bool get_keepWithinPanel_10() const { return ___keepWithinPanel_10; }
	inline bool* get_address_of_keepWithinPanel_10() { return &___keepWithinPanel_10; }
	inline void set_keepWithinPanel_10(bool value)
	{
		___keepWithinPanel_10 = value;
	}

	inline static int32_t get_offset_of_onReposition_11() { return static_cast<int32_t>(offsetof(NGUIGrid_t1102104747, ___onReposition_11)); }
	inline OnReposition_t1041297655 * get_onReposition_11() const { return ___onReposition_11; }
	inline OnReposition_t1041297655 ** get_address_of_onReposition_11() { return &___onReposition_11; }
	inline void set_onReposition_11(OnReposition_t1041297655 * value)
	{
		___onReposition_11 = value;
		Il2CppCodeGenWriteBarrier(&___onReposition_11, value);
	}

	inline static int32_t get_offset_of_sorted_12() { return static_cast<int32_t>(offsetof(NGUIGrid_t1102104747, ___sorted_12)); }
	inline bool get_sorted_12() const { return ___sorted_12; }
	inline bool* get_address_of_sorted_12() { return &___sorted_12; }
	inline void set_sorted_12(bool value)
	{
		___sorted_12 = value;
	}

	inline static int32_t get_offset_of_mReposition_13() { return static_cast<int32_t>(offsetof(NGUIGrid_t1102104747, ___mReposition_13)); }
	inline bool get_mReposition_13() const { return ___mReposition_13; }
	inline bool* get_address_of_mReposition_13() { return &___mReposition_13; }
	inline void set_mReposition_13(bool value)
	{
		___mReposition_13 = value;
	}

	inline static int32_t get_offset_of_mPanel_14() { return static_cast<int32_t>(offsetof(NGUIGrid_t1102104747, ___mPanel_14)); }
	inline UIPanel_t1795085332 * get_mPanel_14() const { return ___mPanel_14; }
	inline UIPanel_t1795085332 ** get_address_of_mPanel_14() { return &___mPanel_14; }
	inline void set_mPanel_14(UIPanel_t1795085332 * value)
	{
		___mPanel_14 = value;
		Il2CppCodeGenWriteBarrier(&___mPanel_14, value);
	}

	inline static int32_t get_offset_of_mInitDone_15() { return static_cast<int32_t>(offsetof(NGUIGrid_t1102104747, ___mInitDone_15)); }
	inline bool get_mInitDone_15() const { return ___mInitDone_15; }
	inline bool* get_address_of_mInitDone_15() { return &___mInitDone_15; }
	inline void set_mInitDone_15(bool value)
	{
		___mInitDone_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
