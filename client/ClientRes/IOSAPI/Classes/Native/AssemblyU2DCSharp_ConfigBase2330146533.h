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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ConfigBase
struct  ConfigBase_t2330146533  : public Il2CppObject
{
public:
	// UnityEngine.Events.UnityAction ConfigBase::m_onLoaded
	UnityAction_t4025899511 * ___m_onLoaded_0;

public:
	inline static int32_t get_offset_of_m_onLoaded_0() { return static_cast<int32_t>(offsetof(ConfigBase_t2330146533, ___m_onLoaded_0)); }
	inline UnityAction_t4025899511 * get_m_onLoaded_0() const { return ___m_onLoaded_0; }
	inline UnityAction_t4025899511 ** get_address_of_m_onLoaded_0() { return &___m_onLoaded_0; }
	inline void set_m_onLoaded_0(UnityAction_t4025899511 * value)
	{
		___m_onLoaded_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_onLoaded_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
