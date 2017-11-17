#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIGridItem
struct UIGridItem_t3654720203;
// UIGrid
struct UIGrid_t2420180906;
// UIPlayTween
struct UIPlayTween_t2614996159;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2058570427;
// System.Action`1<UIGridItem>
struct Action_1_t3456519585;
// System.Action`1<System.Int32>
struct Action_1_t1873676830;
// System.Action`1<System.Object>
struct Action_1_t2491248677;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_CustomPopList_Movement3030376394.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CustomPopList
struct  CustomPopList_t762917710  : public MonoBehaviour_t1158329972
{
public:
	// CustomPopList/Movement CustomPopList::movement
	int32_t ___movement_2;
	// UIGridItem CustomPopList::self
	UIGridItem_t3654720203 * ___self_3;
	// UIGrid CustomPopList::m_gird
	UIGrid_t2420180906 * ___m_gird_4;
	// UIPlayTween CustomPopList::playTween
	UIPlayTween_t2614996159 * ___playTween_5;
	// System.Collections.Generic.List`1<System.Object> CustomPopList::oDatas
	List_1_t2058570427 * ___oDatas_6;
	// System.Action`1<UIGridItem> CustomPopList::UpdateDataCallBack
	Action_1_t3456519585 * ___UpdateDataCallBack_7;
	// System.Action`1<System.Int32> CustomPopList::onSelectedIndex
	Action_1_t1873676830 * ___onSelectedIndex_8;
	// System.Action`1<System.Object> CustomPopList::onSelectedObject
	Action_1_t2491248677 * ___onSelectedObject_9;
	// System.Int32 CustomPopList::selectedIndex
	int32_t ___selectedIndex_10;

public:
	inline static int32_t get_offset_of_movement_2() { return static_cast<int32_t>(offsetof(CustomPopList_t762917710, ___movement_2)); }
	inline int32_t get_movement_2() const { return ___movement_2; }
	inline int32_t* get_address_of_movement_2() { return &___movement_2; }
	inline void set_movement_2(int32_t value)
	{
		___movement_2 = value;
	}

	inline static int32_t get_offset_of_self_3() { return static_cast<int32_t>(offsetof(CustomPopList_t762917710, ___self_3)); }
	inline UIGridItem_t3654720203 * get_self_3() const { return ___self_3; }
	inline UIGridItem_t3654720203 ** get_address_of_self_3() { return &___self_3; }
	inline void set_self_3(UIGridItem_t3654720203 * value)
	{
		___self_3 = value;
		Il2CppCodeGenWriteBarrier(&___self_3, value);
	}

	inline static int32_t get_offset_of_m_gird_4() { return static_cast<int32_t>(offsetof(CustomPopList_t762917710, ___m_gird_4)); }
	inline UIGrid_t2420180906 * get_m_gird_4() const { return ___m_gird_4; }
	inline UIGrid_t2420180906 ** get_address_of_m_gird_4() { return &___m_gird_4; }
	inline void set_m_gird_4(UIGrid_t2420180906 * value)
	{
		___m_gird_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_gird_4, value);
	}

	inline static int32_t get_offset_of_playTween_5() { return static_cast<int32_t>(offsetof(CustomPopList_t762917710, ___playTween_5)); }
	inline UIPlayTween_t2614996159 * get_playTween_5() const { return ___playTween_5; }
	inline UIPlayTween_t2614996159 ** get_address_of_playTween_5() { return &___playTween_5; }
	inline void set_playTween_5(UIPlayTween_t2614996159 * value)
	{
		___playTween_5 = value;
		Il2CppCodeGenWriteBarrier(&___playTween_5, value);
	}

	inline static int32_t get_offset_of_oDatas_6() { return static_cast<int32_t>(offsetof(CustomPopList_t762917710, ___oDatas_6)); }
	inline List_1_t2058570427 * get_oDatas_6() const { return ___oDatas_6; }
	inline List_1_t2058570427 ** get_address_of_oDatas_6() { return &___oDatas_6; }
	inline void set_oDatas_6(List_1_t2058570427 * value)
	{
		___oDatas_6 = value;
		Il2CppCodeGenWriteBarrier(&___oDatas_6, value);
	}

	inline static int32_t get_offset_of_UpdateDataCallBack_7() { return static_cast<int32_t>(offsetof(CustomPopList_t762917710, ___UpdateDataCallBack_7)); }
	inline Action_1_t3456519585 * get_UpdateDataCallBack_7() const { return ___UpdateDataCallBack_7; }
	inline Action_1_t3456519585 ** get_address_of_UpdateDataCallBack_7() { return &___UpdateDataCallBack_7; }
	inline void set_UpdateDataCallBack_7(Action_1_t3456519585 * value)
	{
		___UpdateDataCallBack_7 = value;
		Il2CppCodeGenWriteBarrier(&___UpdateDataCallBack_7, value);
	}

	inline static int32_t get_offset_of_onSelectedIndex_8() { return static_cast<int32_t>(offsetof(CustomPopList_t762917710, ___onSelectedIndex_8)); }
	inline Action_1_t1873676830 * get_onSelectedIndex_8() const { return ___onSelectedIndex_8; }
	inline Action_1_t1873676830 ** get_address_of_onSelectedIndex_8() { return &___onSelectedIndex_8; }
	inline void set_onSelectedIndex_8(Action_1_t1873676830 * value)
	{
		___onSelectedIndex_8 = value;
		Il2CppCodeGenWriteBarrier(&___onSelectedIndex_8, value);
	}

	inline static int32_t get_offset_of_onSelectedObject_9() { return static_cast<int32_t>(offsetof(CustomPopList_t762917710, ___onSelectedObject_9)); }
	inline Action_1_t2491248677 * get_onSelectedObject_9() const { return ___onSelectedObject_9; }
	inline Action_1_t2491248677 ** get_address_of_onSelectedObject_9() { return &___onSelectedObject_9; }
	inline void set_onSelectedObject_9(Action_1_t2491248677 * value)
	{
		___onSelectedObject_9 = value;
		Il2CppCodeGenWriteBarrier(&___onSelectedObject_9, value);
	}

	inline static int32_t get_offset_of_selectedIndex_10() { return static_cast<int32_t>(offsetof(CustomPopList_t762917710, ___selectedIndex_10)); }
	inline int32_t get_selectedIndex_10() const { return ___selectedIndex_10; }
	inline int32_t* get_address_of_selectedIndex_10() { return &___selectedIndex_10; }
	inline void set_selectedIndex_10(int32_t value)
	{
		___selectedIndex_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
