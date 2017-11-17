#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UIButton>
struct List_1_t2746359438;
// RadioButtonGroup/RadioButtonDelagate
struct RadioButtonDelagate_t2619781725;
// UIButton
struct UIButton_t3377238306;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RadioButtonGroup
struct  RadioButtonGroup_t3566528634  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<UIButton> RadioButtonGroup::list
	List_1_t2746359438 * ___list_2;
	// RadioButtonGroup/RadioButtonDelagate RadioButtonGroup::m_GroupChangeEvent
	RadioButtonDelagate_t2619781725 * ___m_GroupChangeEvent_3;
	// System.Int32 RadioButtonGroup::m_selectedIndex
	int32_t ___m_selectedIndex_4;
	// UIButton RadioButtonGroup::m_lastButton
	UIButton_t3377238306 * ___m_lastButton_5;

public:
	inline static int32_t get_offset_of_list_2() { return static_cast<int32_t>(offsetof(RadioButtonGroup_t3566528634, ___list_2)); }
	inline List_1_t2746359438 * get_list_2() const { return ___list_2; }
	inline List_1_t2746359438 ** get_address_of_list_2() { return &___list_2; }
	inline void set_list_2(List_1_t2746359438 * value)
	{
		___list_2 = value;
		Il2CppCodeGenWriteBarrier(&___list_2, value);
	}

	inline static int32_t get_offset_of_m_GroupChangeEvent_3() { return static_cast<int32_t>(offsetof(RadioButtonGroup_t3566528634, ___m_GroupChangeEvent_3)); }
	inline RadioButtonDelagate_t2619781725 * get_m_GroupChangeEvent_3() const { return ___m_GroupChangeEvent_3; }
	inline RadioButtonDelagate_t2619781725 ** get_address_of_m_GroupChangeEvent_3() { return &___m_GroupChangeEvent_3; }
	inline void set_m_GroupChangeEvent_3(RadioButtonDelagate_t2619781725 * value)
	{
		___m_GroupChangeEvent_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_GroupChangeEvent_3, value);
	}

	inline static int32_t get_offset_of_m_selectedIndex_4() { return static_cast<int32_t>(offsetof(RadioButtonGroup_t3566528634, ___m_selectedIndex_4)); }
	inline int32_t get_m_selectedIndex_4() const { return ___m_selectedIndex_4; }
	inline int32_t* get_address_of_m_selectedIndex_4() { return &___m_selectedIndex_4; }
	inline void set_m_selectedIndex_4(int32_t value)
	{
		___m_selectedIndex_4 = value;
	}

	inline static int32_t get_offset_of_m_lastButton_5() { return static_cast<int32_t>(offsetof(RadioButtonGroup_t3566528634, ___m_lastButton_5)); }
	inline UIButton_t3377238306 * get_m_lastButton_5() const { return ___m_lastButton_5; }
	inline UIButton_t3377238306 ** get_address_of_m_lastButton_5() { return &___m_lastButton_5; }
	inline void set_m_lastButton_5(UIButton_t3377238306 * value)
	{
		___m_lastButton_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_lastButton_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
