#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<TD_SkillPrefabInfo>
struct List_1_t667413704;
// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;

#include "AssemblyU2DCSharp_ConfigBase2330146533.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillPrefabInfoConfig
struct  SkillPrefabInfoConfig_t548050565  : public ConfigBase_t2330146533
{
public:
	// System.Collections.Generic.List`1<TD_SkillPrefabInfo> SkillPrefabInfoConfig::m_data
	List_1_t667413704 * ___m_data_1;
	// UnityEngine.Events.UnityAction SkillPrefabInfoConfig::m_callBack
	UnityAction_t4025899511 * ___m_callBack_2;

public:
	inline static int32_t get_offset_of_m_data_1() { return static_cast<int32_t>(offsetof(SkillPrefabInfoConfig_t548050565, ___m_data_1)); }
	inline List_1_t667413704 * get_m_data_1() const { return ___m_data_1; }
	inline List_1_t667413704 ** get_address_of_m_data_1() { return &___m_data_1; }
	inline void set_m_data_1(List_1_t667413704 * value)
	{
		___m_data_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_data_1, value);
	}

	inline static int32_t get_offset_of_m_callBack_2() { return static_cast<int32_t>(offsetof(SkillPrefabInfoConfig_t548050565, ___m_callBack_2)); }
	inline UnityAction_t4025899511 * get_m_callBack_2() const { return ___m_callBack_2; }
	inline UnityAction_t4025899511 ** get_address_of_m_callBack_2() { return &___m_callBack_2; }
	inline void set_m_callBack_2(UnityAction_t4025899511 * value)
	{
		___m_callBack_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_callBack_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
