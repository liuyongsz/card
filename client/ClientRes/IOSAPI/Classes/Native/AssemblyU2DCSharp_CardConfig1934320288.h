#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<TD_Card>
struct List_1_t3709129105;
// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;

#include "AssemblyU2DCSharp_ConfigBase2330146533.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CardConfig
struct  CardConfig_t1934320288  : public ConfigBase_t2330146533
{
public:
	// UnityEngine.Events.UnityAction CardConfig::m_callBack
	UnityAction_t4025899511 * ___m_callBack_2;

public:
	inline static int32_t get_offset_of_m_callBack_2() { return static_cast<int32_t>(offsetof(CardConfig_t1934320288, ___m_callBack_2)); }
	inline UnityAction_t4025899511 * get_m_callBack_2() const { return ___m_callBack_2; }
	inline UnityAction_t4025899511 ** get_address_of_m_callBack_2() { return &___m_callBack_2; }
	inline void set_m_callBack_2(UnityAction_t4025899511 * value)
	{
		___m_callBack_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_callBack_2, value);
	}
};

struct CardConfig_t1934320288_StaticFields
{
public:
	// System.Collections.Generic.List`1<TD_Card> CardConfig::m_data
	List_1_t3709129105 * ___m_data_1;

public:
	inline static int32_t get_offset_of_m_data_1() { return static_cast<int32_t>(offsetof(CardConfig_t1934320288_StaticFields, ___m_data_1)); }
	inline List_1_t3709129105 * get_m_data_1() const { return ___m_data_1; }
	inline List_1_t3709129105 ** get_address_of_m_data_1() { return &___m_data_1; }
	inline void set_m_data_1(List_1_t3709129105 * value)
	{
		___m_data_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_data_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
