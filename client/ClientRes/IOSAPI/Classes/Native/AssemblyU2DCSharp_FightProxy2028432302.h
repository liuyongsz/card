#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// NetProtocal.RoomInfoMsg
struct RoomInfoMsg_t1078239938;

#include "AssemblyU2DCSharp_PureMVC_Patterns_Proxy_1_gen2956156100.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FightProxy
struct  FightProxy_t2028432302  : public Proxy_1_t2956156100
{
public:
	// NetProtocal.RoomInfoMsg FightProxy::RoomInfo
	RoomInfoMsg_t1078239938 * ___RoomInfo_4;

public:
	inline static int32_t get_offset_of_RoomInfo_4() { return static_cast<int32_t>(offsetof(FightProxy_t2028432302, ___RoomInfo_4)); }
	inline RoomInfoMsg_t1078239938 * get_RoomInfo_4() const { return ___RoomInfo_4; }
	inline RoomInfoMsg_t1078239938 ** get_address_of_RoomInfo_4() { return &___RoomInfo_4; }
	inline void set_RoomInfo_4(RoomInfoMsg_t1078239938 * value)
	{
		___RoomInfo_4 = value;
		Il2CppCodeGenWriteBarrier(&___RoomInfo_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
