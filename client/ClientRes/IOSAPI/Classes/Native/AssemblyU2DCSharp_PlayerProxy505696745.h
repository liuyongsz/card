#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// NetProtocal.PlayerInfoMsg
struct PlayerInfoMsg_t3752910050;

#include "AssemblyU2DCSharp_PureMVC_Patterns_Proxy_1_gen1433420543.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerProxy
struct  PlayerProxy_t505696745  : public Proxy_1_t1433420543
{
public:
	// NetProtocal.PlayerInfoMsg PlayerProxy::Info
	PlayerInfoMsg_t3752910050 * ___Info_4;

public:
	inline static int32_t get_offset_of_Info_4() { return static_cast<int32_t>(offsetof(PlayerProxy_t505696745, ___Info_4)); }
	inline PlayerInfoMsg_t3752910050 * get_Info_4() const { return ___Info_4; }
	inline PlayerInfoMsg_t3752910050 ** get_address_of_Info_4() { return &___Info_4; }
	inline void set_Info_4(PlayerInfoMsg_t3752910050 * value)
	{
		___Info_4 = value;
		Il2CppCodeGenWriteBarrier(&___Info_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
