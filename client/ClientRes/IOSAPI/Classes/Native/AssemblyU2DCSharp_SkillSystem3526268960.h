#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;
// System.Collections.Generic.List`1<SkillInstance>
struct List_1_t1659619130;

#include "AssemblyU2DCSharp_PureMVC_Patterns_Proxy_1_gen159025462.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkillSystem
struct  SkillSystem_t3526268960  : public Proxy_1_t159025462
{
public:
	// UnityEngine.Events.UnityAction SkillSystem::TriggerStay
	UnityAction_t4025899511 * ___TriggerStay_4;
	// System.Collections.Generic.List`1<SkillInstance> SkillSystem::mSkillIns
	List_1_t1659619130 * ___mSkillIns_5;

public:
	inline static int32_t get_offset_of_TriggerStay_4() { return static_cast<int32_t>(offsetof(SkillSystem_t3526268960, ___TriggerStay_4)); }
	inline UnityAction_t4025899511 * get_TriggerStay_4() const { return ___TriggerStay_4; }
	inline UnityAction_t4025899511 ** get_address_of_TriggerStay_4() { return &___TriggerStay_4; }
	inline void set_TriggerStay_4(UnityAction_t4025899511 * value)
	{
		___TriggerStay_4 = value;
		Il2CppCodeGenWriteBarrier(&___TriggerStay_4, value);
	}

	inline static int32_t get_offset_of_mSkillIns_5() { return static_cast<int32_t>(offsetof(SkillSystem_t3526268960, ___mSkillIns_5)); }
	inline List_1_t1659619130 * get_mSkillIns_5() const { return ___mSkillIns_5; }
	inline List_1_t1659619130 ** get_address_of_mSkillIns_5() { return &___mSkillIns_5; }
	inline void set_mSkillIns_5(List_1_t1659619130 * value)
	{
		___mSkillIns_5 = value;
		Il2CppCodeGenWriteBarrier(&___mSkillIns_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
