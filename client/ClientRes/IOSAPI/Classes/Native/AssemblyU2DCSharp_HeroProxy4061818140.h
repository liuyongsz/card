#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// NetProtocal.CardListMsg
struct CardListMsg_t1254004863;

#include "AssemblyU2DCSharp_PureMVC_Patterns_Proxy_1_gen694574642.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HeroProxy
struct  HeroProxy_t4061818140  : public Proxy_1_t694574642
{
public:
	// NetProtocal.CardListMsg HeroProxy::cardListMsg
	CardListMsg_t1254004863 * ___cardListMsg_4;

public:
	inline static int32_t get_offset_of_cardListMsg_4() { return static_cast<int32_t>(offsetof(HeroProxy_t4061818140, ___cardListMsg_4)); }
	inline CardListMsg_t1254004863 * get_cardListMsg_4() const { return ___cardListMsg_4; }
	inline CardListMsg_t1254004863 ** get_address_of_cardListMsg_4() { return &___cardListMsg_4; }
	inline void set_cardListMsg_4(CardListMsg_t1254004863 * value)
	{
		___cardListMsg_4 = value;
		Il2CppCodeGenWriteBarrier(&___cardListMsg_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
