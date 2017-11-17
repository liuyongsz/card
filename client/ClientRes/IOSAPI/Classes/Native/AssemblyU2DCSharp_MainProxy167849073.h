#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.UInt64,System.Collections.Generic.Dictionary`2<System.String,System.Object>>
struct Dictionary_2_t2250343326;

#include "AssemblyU2DCSharp_PureMVC_Patterns_Proxy_1_gen1095572871.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainProxy
struct  MainProxy_t167849073  : public Proxy_1_t1095572871
{
public:
	// System.Collections.Generic.Dictionary`2<System.UInt64,System.Collections.Generic.Dictionary`2<System.String,System.Object>> MainProxy::m_avatarList
	Dictionary_2_t2250343326 * ___m_avatarList_4;

public:
	inline static int32_t get_offset_of_m_avatarList_4() { return static_cast<int32_t>(offsetof(MainProxy_t167849073, ___m_avatarList_4)); }
	inline Dictionary_2_t2250343326 * get_m_avatarList_4() const { return ___m_avatarList_4; }
	inline Dictionary_2_t2250343326 ** get_address_of_m_avatarList_4() { return &___m_avatarList_4; }
	inline void set_m_avatarList_4(Dictionary_2_t2250343326 * value)
	{
		___m_avatarList_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_avatarList_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
