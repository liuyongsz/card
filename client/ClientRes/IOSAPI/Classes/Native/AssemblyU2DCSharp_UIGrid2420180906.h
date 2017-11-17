#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIGrid/OnReposition
struct OnReposition_t581118304;
// UIPanel
struct UIPanel_t1795085332;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t2644239190;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2058570427;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Transform>
struct Dictionary_2_t2867178186;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UIGrid/OnUpdateDataRow
struct OnUpdateDataRow_t314779399;
// UIGridItem
struct UIGridItem_t3654720203;
// UIGrid/OnClickSubItem
struct OnClickSubItem_t1478391043;
// UIGrid/OnSelectEvent
struct OnSelectEvent_t2498511342;
// BetterList`1<UnityEngine.Transform>
struct BetterList_1_t3495506700;
// System.Action
struct Action_t3226471752;

#include "AssemblyU2DCSharp_UIWidgetContainer701016325.h"
#include "AssemblyU2DCSharp_UIGrid_Arrangement177822543.h"
#include "AssemblyU2DCSharp_UIGrid_Sorting2413224087.h"
#include "AssemblyU2DCSharp_UIWidget_Pivot752586349.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIGrid
struct  UIGrid_t2420180906  : public UIWidgetContainer_t701016325
{
public:
	// System.Boolean UIGrid::LimitNumber
	bool ___LimitNumber_2;
	// UIGrid/Arrangement UIGrid::arrangement
	int32_t ___arrangement_3;
	// UIGrid/Sorting UIGrid::sorting
	int32_t ___sorting_4;
	// UIWidget/Pivot UIGrid::pivot
	int32_t ___pivot_5;
	// System.Int32 UIGrid::maxPerLine
	int32_t ___maxPerLine_6;
	// System.Int32 UIGrid::maxPerRank
	int32_t ___maxPerRank_7;
	// System.Single UIGrid::cellWidth
	float ___cellWidth_8;
	// System.Single UIGrid::cellHeight
	float ___cellHeight_9;
	// System.Boolean UIGrid::animateSmoothly
	bool ___animateSmoothly_10;
	// System.Boolean UIGrid::hideInactive
	bool ___hideInactive_11;
	// System.Boolean UIGrid::keepWithinPanel
	bool ___keepWithinPanel_12;
	// UIGrid/OnReposition UIGrid::onReposition
	OnReposition_t581118304 * ___onReposition_13;
	// System.Boolean UIGrid::sorted
	bool ___sorted_14;
	// System.Boolean UIGrid::mReposition
	bool ___mReposition_15;
	// UIPanel UIGrid::mPanel
	UIPanel_t1795085332 * ___mPanel_16;
	// System.Boolean UIGrid::mInitDone
	bool ___mInitDone_17;
	// System.Boolean UIGrid::mbCustomGrid
	bool ___mbCustomGrid_18;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UIGrid::mTransSource
	List_1_t2644239190 * ___mTransSource_19;
	// System.Collections.Generic.List`1<System.Object> UIGrid::mDataSource
	List_1_t2058570427 * ___mDataSource_20;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UIGrid::mFreeTrans
	List_1_t2644239190 * ___mFreeTrans_21;
	// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Transform> UIGrid::mDataToTrans
	Dictionary_2_t2867178186 * ___mDataToTrans_22;
	// UnityEngine.GameObject UIGrid::mgridItem
	GameObject_t1756533147 * ___mgridItem_23;
	// UnityEngine.GameObject UIGrid::mSelectItem
	GameObject_t1756533147 * ___mSelectItem_24;
	// UIGrid/OnUpdateDataRow UIGrid::mfnOnChangeRow
	OnUpdateDataRow_t314779399 * ___mfnOnChangeRow_25;
	// UnityEngine.Vector3 UIGrid::mPanelPos
	Vector3_t2243707580  ___mPanelPos_26;
	// UnityEngine.Vector3 UIGrid::mPanelInitPos
	Vector3_t2243707580  ___mPanelInitPos_27;
	// UnityEngine.Vector2 UIGrid::mPanelInitOffest
	Vector2_t2243707579  ___mPanelInitOffest_28;
	// System.Int32 UIGrid::mOffsetRows
	int32_t ___mOffsetRows_29;
	// UIGridItem UIGrid::OldSelectedItem
	UIGridItem_t3654720203 * ___OldSelectedItem_30;
	// UIGrid/OnClickSubItem UIGrid::fnonClickSubItem
	OnClickSubItem_t1478391043 * ___fnonClickSubItem_31;
	// System.Int32 UIGrid::iMaxRows
	int32_t ___iMaxRows_32;
	// System.Int32 UIGrid::iTotalRows
	int32_t ___iTotalRows_33;
	// System.Int32 UIGrid::iOffset
	int32_t ___iOffset_34;
	// UIGrid/OnSelectEvent UIGrid::SelectItem
	OnSelectEvent_t2498511342 * ___SelectItem_35;
	// System.Int32 UIGrid::miSelectIndex
	int32_t ___miSelectIndex_36;
	// BetterList`1<UnityEngine.Transform> UIGrid::list
	BetterList_1_t3495506700 * ___list_37;
	// System.Boolean UIGrid::mbIsUpdateByFrameMode
	bool ___mbIsUpdateByFrameMode_38;
	// System.Int32 UIGrid::miUpdateNumPerFrame
	int32_t ___miUpdateNumPerFrame_39;
	// System.Int32 UIGrid::miCurUpdateNum
	int32_t ___miCurUpdateNum_40;
	// System.Boolean UIGrid::mbGoToFirstLineWhileFinish
	bool ___mbGoToFirstLineWhileFinish_41;
	// System.Collections.Generic.List`1<System.Object> UIGrid::moTargetList
	List_1_t2058570427 * ___moTargetList_42;
	// System.Collections.Generic.List`1<System.Object> UIGrid::moCurrentList
	List_1_t2058570427 * ___moCurrentList_43;
	// System.Boolean UIGrid::mbIsGridUpdating
	bool ___mbIsGridUpdating_44;
	// System.Action UIGrid::mStartAction
	Action_t3226471752 * ___mStartAction_45;
	// System.Action UIGrid::mEndAction
	Action_t3226471752 * ___mEndAction_46;

public:
	inline static int32_t get_offset_of_LimitNumber_2() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___LimitNumber_2)); }
	inline bool get_LimitNumber_2() const { return ___LimitNumber_2; }
	inline bool* get_address_of_LimitNumber_2() { return &___LimitNumber_2; }
	inline void set_LimitNumber_2(bool value)
	{
		___LimitNumber_2 = value;
	}

	inline static int32_t get_offset_of_arrangement_3() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___arrangement_3)); }
	inline int32_t get_arrangement_3() const { return ___arrangement_3; }
	inline int32_t* get_address_of_arrangement_3() { return &___arrangement_3; }
	inline void set_arrangement_3(int32_t value)
	{
		___arrangement_3 = value;
	}

	inline static int32_t get_offset_of_sorting_4() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___sorting_4)); }
	inline int32_t get_sorting_4() const { return ___sorting_4; }
	inline int32_t* get_address_of_sorting_4() { return &___sorting_4; }
	inline void set_sorting_4(int32_t value)
	{
		___sorting_4 = value;
	}

	inline static int32_t get_offset_of_pivot_5() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___pivot_5)); }
	inline int32_t get_pivot_5() const { return ___pivot_5; }
	inline int32_t* get_address_of_pivot_5() { return &___pivot_5; }
	inline void set_pivot_5(int32_t value)
	{
		___pivot_5 = value;
	}

	inline static int32_t get_offset_of_maxPerLine_6() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___maxPerLine_6)); }
	inline int32_t get_maxPerLine_6() const { return ___maxPerLine_6; }
	inline int32_t* get_address_of_maxPerLine_6() { return &___maxPerLine_6; }
	inline void set_maxPerLine_6(int32_t value)
	{
		___maxPerLine_6 = value;
	}

	inline static int32_t get_offset_of_maxPerRank_7() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___maxPerRank_7)); }
	inline int32_t get_maxPerRank_7() const { return ___maxPerRank_7; }
	inline int32_t* get_address_of_maxPerRank_7() { return &___maxPerRank_7; }
	inline void set_maxPerRank_7(int32_t value)
	{
		___maxPerRank_7 = value;
	}

	inline static int32_t get_offset_of_cellWidth_8() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___cellWidth_8)); }
	inline float get_cellWidth_8() const { return ___cellWidth_8; }
	inline float* get_address_of_cellWidth_8() { return &___cellWidth_8; }
	inline void set_cellWidth_8(float value)
	{
		___cellWidth_8 = value;
	}

	inline static int32_t get_offset_of_cellHeight_9() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___cellHeight_9)); }
	inline float get_cellHeight_9() const { return ___cellHeight_9; }
	inline float* get_address_of_cellHeight_9() { return &___cellHeight_9; }
	inline void set_cellHeight_9(float value)
	{
		___cellHeight_9 = value;
	}

	inline static int32_t get_offset_of_animateSmoothly_10() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___animateSmoothly_10)); }
	inline bool get_animateSmoothly_10() const { return ___animateSmoothly_10; }
	inline bool* get_address_of_animateSmoothly_10() { return &___animateSmoothly_10; }
	inline void set_animateSmoothly_10(bool value)
	{
		___animateSmoothly_10 = value;
	}

	inline static int32_t get_offset_of_hideInactive_11() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___hideInactive_11)); }
	inline bool get_hideInactive_11() const { return ___hideInactive_11; }
	inline bool* get_address_of_hideInactive_11() { return &___hideInactive_11; }
	inline void set_hideInactive_11(bool value)
	{
		___hideInactive_11 = value;
	}

	inline static int32_t get_offset_of_keepWithinPanel_12() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___keepWithinPanel_12)); }
	inline bool get_keepWithinPanel_12() const { return ___keepWithinPanel_12; }
	inline bool* get_address_of_keepWithinPanel_12() { return &___keepWithinPanel_12; }
	inline void set_keepWithinPanel_12(bool value)
	{
		___keepWithinPanel_12 = value;
	}

	inline static int32_t get_offset_of_onReposition_13() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___onReposition_13)); }
	inline OnReposition_t581118304 * get_onReposition_13() const { return ___onReposition_13; }
	inline OnReposition_t581118304 ** get_address_of_onReposition_13() { return &___onReposition_13; }
	inline void set_onReposition_13(OnReposition_t581118304 * value)
	{
		___onReposition_13 = value;
		Il2CppCodeGenWriteBarrier(&___onReposition_13, value);
	}

	inline static int32_t get_offset_of_sorted_14() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___sorted_14)); }
	inline bool get_sorted_14() const { return ___sorted_14; }
	inline bool* get_address_of_sorted_14() { return &___sorted_14; }
	inline void set_sorted_14(bool value)
	{
		___sorted_14 = value;
	}

	inline static int32_t get_offset_of_mReposition_15() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___mReposition_15)); }
	inline bool get_mReposition_15() const { return ___mReposition_15; }
	inline bool* get_address_of_mReposition_15() { return &___mReposition_15; }
	inline void set_mReposition_15(bool value)
	{
		___mReposition_15 = value;
	}

	inline static int32_t get_offset_of_mPanel_16() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___mPanel_16)); }
	inline UIPanel_t1795085332 * get_mPanel_16() const { return ___mPanel_16; }
	inline UIPanel_t1795085332 ** get_address_of_mPanel_16() { return &___mPanel_16; }
	inline void set_mPanel_16(UIPanel_t1795085332 * value)
	{
		___mPanel_16 = value;
		Il2CppCodeGenWriteBarrier(&___mPanel_16, value);
	}

	inline static int32_t get_offset_of_mInitDone_17() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___mInitDone_17)); }
	inline bool get_mInitDone_17() const { return ___mInitDone_17; }
	inline bool* get_address_of_mInitDone_17() { return &___mInitDone_17; }
	inline void set_mInitDone_17(bool value)
	{
		___mInitDone_17 = value;
	}

	inline static int32_t get_offset_of_mbCustomGrid_18() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___mbCustomGrid_18)); }
	inline bool get_mbCustomGrid_18() const { return ___mbCustomGrid_18; }
	inline bool* get_address_of_mbCustomGrid_18() { return &___mbCustomGrid_18; }
	inline void set_mbCustomGrid_18(bool value)
	{
		___mbCustomGrid_18 = value;
	}

	inline static int32_t get_offset_of_mTransSource_19() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___mTransSource_19)); }
	inline List_1_t2644239190 * get_mTransSource_19() const { return ___mTransSource_19; }
	inline List_1_t2644239190 ** get_address_of_mTransSource_19() { return &___mTransSource_19; }
	inline void set_mTransSource_19(List_1_t2644239190 * value)
	{
		___mTransSource_19 = value;
		Il2CppCodeGenWriteBarrier(&___mTransSource_19, value);
	}

	inline static int32_t get_offset_of_mDataSource_20() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___mDataSource_20)); }
	inline List_1_t2058570427 * get_mDataSource_20() const { return ___mDataSource_20; }
	inline List_1_t2058570427 ** get_address_of_mDataSource_20() { return &___mDataSource_20; }
	inline void set_mDataSource_20(List_1_t2058570427 * value)
	{
		___mDataSource_20 = value;
		Il2CppCodeGenWriteBarrier(&___mDataSource_20, value);
	}

	inline static int32_t get_offset_of_mFreeTrans_21() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___mFreeTrans_21)); }
	inline List_1_t2644239190 * get_mFreeTrans_21() const { return ___mFreeTrans_21; }
	inline List_1_t2644239190 ** get_address_of_mFreeTrans_21() { return &___mFreeTrans_21; }
	inline void set_mFreeTrans_21(List_1_t2644239190 * value)
	{
		___mFreeTrans_21 = value;
		Il2CppCodeGenWriteBarrier(&___mFreeTrans_21, value);
	}

	inline static int32_t get_offset_of_mDataToTrans_22() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___mDataToTrans_22)); }
	inline Dictionary_2_t2867178186 * get_mDataToTrans_22() const { return ___mDataToTrans_22; }
	inline Dictionary_2_t2867178186 ** get_address_of_mDataToTrans_22() { return &___mDataToTrans_22; }
	inline void set_mDataToTrans_22(Dictionary_2_t2867178186 * value)
	{
		___mDataToTrans_22 = value;
		Il2CppCodeGenWriteBarrier(&___mDataToTrans_22, value);
	}

	inline static int32_t get_offset_of_mgridItem_23() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___mgridItem_23)); }
	inline GameObject_t1756533147 * get_mgridItem_23() const { return ___mgridItem_23; }
	inline GameObject_t1756533147 ** get_address_of_mgridItem_23() { return &___mgridItem_23; }
	inline void set_mgridItem_23(GameObject_t1756533147 * value)
	{
		___mgridItem_23 = value;
		Il2CppCodeGenWriteBarrier(&___mgridItem_23, value);
	}

	inline static int32_t get_offset_of_mSelectItem_24() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___mSelectItem_24)); }
	inline GameObject_t1756533147 * get_mSelectItem_24() const { return ___mSelectItem_24; }
	inline GameObject_t1756533147 ** get_address_of_mSelectItem_24() { return &___mSelectItem_24; }
	inline void set_mSelectItem_24(GameObject_t1756533147 * value)
	{
		___mSelectItem_24 = value;
		Il2CppCodeGenWriteBarrier(&___mSelectItem_24, value);
	}

	inline static int32_t get_offset_of_mfnOnChangeRow_25() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___mfnOnChangeRow_25)); }
	inline OnUpdateDataRow_t314779399 * get_mfnOnChangeRow_25() const { return ___mfnOnChangeRow_25; }
	inline OnUpdateDataRow_t314779399 ** get_address_of_mfnOnChangeRow_25() { return &___mfnOnChangeRow_25; }
	inline void set_mfnOnChangeRow_25(OnUpdateDataRow_t314779399 * value)
	{
		___mfnOnChangeRow_25 = value;
		Il2CppCodeGenWriteBarrier(&___mfnOnChangeRow_25, value);
	}

	inline static int32_t get_offset_of_mPanelPos_26() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___mPanelPos_26)); }
	inline Vector3_t2243707580  get_mPanelPos_26() const { return ___mPanelPos_26; }
	inline Vector3_t2243707580 * get_address_of_mPanelPos_26() { return &___mPanelPos_26; }
	inline void set_mPanelPos_26(Vector3_t2243707580  value)
	{
		___mPanelPos_26 = value;
	}

	inline static int32_t get_offset_of_mPanelInitPos_27() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___mPanelInitPos_27)); }
	inline Vector3_t2243707580  get_mPanelInitPos_27() const { return ___mPanelInitPos_27; }
	inline Vector3_t2243707580 * get_address_of_mPanelInitPos_27() { return &___mPanelInitPos_27; }
	inline void set_mPanelInitPos_27(Vector3_t2243707580  value)
	{
		___mPanelInitPos_27 = value;
	}

	inline static int32_t get_offset_of_mPanelInitOffest_28() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___mPanelInitOffest_28)); }
	inline Vector2_t2243707579  get_mPanelInitOffest_28() const { return ___mPanelInitOffest_28; }
	inline Vector2_t2243707579 * get_address_of_mPanelInitOffest_28() { return &___mPanelInitOffest_28; }
	inline void set_mPanelInitOffest_28(Vector2_t2243707579  value)
	{
		___mPanelInitOffest_28 = value;
	}

	inline static int32_t get_offset_of_mOffsetRows_29() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___mOffsetRows_29)); }
	inline int32_t get_mOffsetRows_29() const { return ___mOffsetRows_29; }
	inline int32_t* get_address_of_mOffsetRows_29() { return &___mOffsetRows_29; }
	inline void set_mOffsetRows_29(int32_t value)
	{
		___mOffsetRows_29 = value;
	}

	inline static int32_t get_offset_of_OldSelectedItem_30() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___OldSelectedItem_30)); }
	inline UIGridItem_t3654720203 * get_OldSelectedItem_30() const { return ___OldSelectedItem_30; }
	inline UIGridItem_t3654720203 ** get_address_of_OldSelectedItem_30() { return &___OldSelectedItem_30; }
	inline void set_OldSelectedItem_30(UIGridItem_t3654720203 * value)
	{
		___OldSelectedItem_30 = value;
		Il2CppCodeGenWriteBarrier(&___OldSelectedItem_30, value);
	}

	inline static int32_t get_offset_of_fnonClickSubItem_31() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___fnonClickSubItem_31)); }
	inline OnClickSubItem_t1478391043 * get_fnonClickSubItem_31() const { return ___fnonClickSubItem_31; }
	inline OnClickSubItem_t1478391043 ** get_address_of_fnonClickSubItem_31() { return &___fnonClickSubItem_31; }
	inline void set_fnonClickSubItem_31(OnClickSubItem_t1478391043 * value)
	{
		___fnonClickSubItem_31 = value;
		Il2CppCodeGenWriteBarrier(&___fnonClickSubItem_31, value);
	}

	inline static int32_t get_offset_of_iMaxRows_32() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___iMaxRows_32)); }
	inline int32_t get_iMaxRows_32() const { return ___iMaxRows_32; }
	inline int32_t* get_address_of_iMaxRows_32() { return &___iMaxRows_32; }
	inline void set_iMaxRows_32(int32_t value)
	{
		___iMaxRows_32 = value;
	}

	inline static int32_t get_offset_of_iTotalRows_33() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___iTotalRows_33)); }
	inline int32_t get_iTotalRows_33() const { return ___iTotalRows_33; }
	inline int32_t* get_address_of_iTotalRows_33() { return &___iTotalRows_33; }
	inline void set_iTotalRows_33(int32_t value)
	{
		___iTotalRows_33 = value;
	}

	inline static int32_t get_offset_of_iOffset_34() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___iOffset_34)); }
	inline int32_t get_iOffset_34() const { return ___iOffset_34; }
	inline int32_t* get_address_of_iOffset_34() { return &___iOffset_34; }
	inline void set_iOffset_34(int32_t value)
	{
		___iOffset_34 = value;
	}

	inline static int32_t get_offset_of_SelectItem_35() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___SelectItem_35)); }
	inline OnSelectEvent_t2498511342 * get_SelectItem_35() const { return ___SelectItem_35; }
	inline OnSelectEvent_t2498511342 ** get_address_of_SelectItem_35() { return &___SelectItem_35; }
	inline void set_SelectItem_35(OnSelectEvent_t2498511342 * value)
	{
		___SelectItem_35 = value;
		Il2CppCodeGenWriteBarrier(&___SelectItem_35, value);
	}

	inline static int32_t get_offset_of_miSelectIndex_36() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___miSelectIndex_36)); }
	inline int32_t get_miSelectIndex_36() const { return ___miSelectIndex_36; }
	inline int32_t* get_address_of_miSelectIndex_36() { return &___miSelectIndex_36; }
	inline void set_miSelectIndex_36(int32_t value)
	{
		___miSelectIndex_36 = value;
	}

	inline static int32_t get_offset_of_list_37() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___list_37)); }
	inline BetterList_1_t3495506700 * get_list_37() const { return ___list_37; }
	inline BetterList_1_t3495506700 ** get_address_of_list_37() { return &___list_37; }
	inline void set_list_37(BetterList_1_t3495506700 * value)
	{
		___list_37 = value;
		Il2CppCodeGenWriteBarrier(&___list_37, value);
	}

	inline static int32_t get_offset_of_mbIsUpdateByFrameMode_38() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___mbIsUpdateByFrameMode_38)); }
	inline bool get_mbIsUpdateByFrameMode_38() const { return ___mbIsUpdateByFrameMode_38; }
	inline bool* get_address_of_mbIsUpdateByFrameMode_38() { return &___mbIsUpdateByFrameMode_38; }
	inline void set_mbIsUpdateByFrameMode_38(bool value)
	{
		___mbIsUpdateByFrameMode_38 = value;
	}

	inline static int32_t get_offset_of_miUpdateNumPerFrame_39() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___miUpdateNumPerFrame_39)); }
	inline int32_t get_miUpdateNumPerFrame_39() const { return ___miUpdateNumPerFrame_39; }
	inline int32_t* get_address_of_miUpdateNumPerFrame_39() { return &___miUpdateNumPerFrame_39; }
	inline void set_miUpdateNumPerFrame_39(int32_t value)
	{
		___miUpdateNumPerFrame_39 = value;
	}

	inline static int32_t get_offset_of_miCurUpdateNum_40() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___miCurUpdateNum_40)); }
	inline int32_t get_miCurUpdateNum_40() const { return ___miCurUpdateNum_40; }
	inline int32_t* get_address_of_miCurUpdateNum_40() { return &___miCurUpdateNum_40; }
	inline void set_miCurUpdateNum_40(int32_t value)
	{
		___miCurUpdateNum_40 = value;
	}

	inline static int32_t get_offset_of_mbGoToFirstLineWhileFinish_41() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___mbGoToFirstLineWhileFinish_41)); }
	inline bool get_mbGoToFirstLineWhileFinish_41() const { return ___mbGoToFirstLineWhileFinish_41; }
	inline bool* get_address_of_mbGoToFirstLineWhileFinish_41() { return &___mbGoToFirstLineWhileFinish_41; }
	inline void set_mbGoToFirstLineWhileFinish_41(bool value)
	{
		___mbGoToFirstLineWhileFinish_41 = value;
	}

	inline static int32_t get_offset_of_moTargetList_42() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___moTargetList_42)); }
	inline List_1_t2058570427 * get_moTargetList_42() const { return ___moTargetList_42; }
	inline List_1_t2058570427 ** get_address_of_moTargetList_42() { return &___moTargetList_42; }
	inline void set_moTargetList_42(List_1_t2058570427 * value)
	{
		___moTargetList_42 = value;
		Il2CppCodeGenWriteBarrier(&___moTargetList_42, value);
	}

	inline static int32_t get_offset_of_moCurrentList_43() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___moCurrentList_43)); }
	inline List_1_t2058570427 * get_moCurrentList_43() const { return ___moCurrentList_43; }
	inline List_1_t2058570427 ** get_address_of_moCurrentList_43() { return &___moCurrentList_43; }
	inline void set_moCurrentList_43(List_1_t2058570427 * value)
	{
		___moCurrentList_43 = value;
		Il2CppCodeGenWriteBarrier(&___moCurrentList_43, value);
	}

	inline static int32_t get_offset_of_mbIsGridUpdating_44() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___mbIsGridUpdating_44)); }
	inline bool get_mbIsGridUpdating_44() const { return ___mbIsGridUpdating_44; }
	inline bool* get_address_of_mbIsGridUpdating_44() { return &___mbIsGridUpdating_44; }
	inline void set_mbIsGridUpdating_44(bool value)
	{
		___mbIsGridUpdating_44 = value;
	}

	inline static int32_t get_offset_of_mStartAction_45() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___mStartAction_45)); }
	inline Action_t3226471752 * get_mStartAction_45() const { return ___mStartAction_45; }
	inline Action_t3226471752 ** get_address_of_mStartAction_45() { return &___mStartAction_45; }
	inline void set_mStartAction_45(Action_t3226471752 * value)
	{
		___mStartAction_45 = value;
		Il2CppCodeGenWriteBarrier(&___mStartAction_45, value);
	}

	inline static int32_t get_offset_of_mEndAction_46() { return static_cast<int32_t>(offsetof(UIGrid_t2420180906, ___mEndAction_46)); }
	inline Action_t3226471752 * get_mEndAction_46() const { return ___mEndAction_46; }
	inline Action_t3226471752 ** get_address_of_mEndAction_46() { return &___mEndAction_46; }
	inline void set_mEndAction_46(Action_t3226471752 * value)
	{
		___mEndAction_46 = value;
		Il2CppCodeGenWriteBarrier(&___mEndAction_46, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
