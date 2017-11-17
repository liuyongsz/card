#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Lidgren.Network.NetRandom
struct NetRandom_t509742058;

#include "mscorlib_System_Random1044426839.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lidgren.Network.NetRandom
struct  NetRandom_t509742058  : public Random_t1044426839
{
public:

public:
};

struct NetRandom_t509742058_StaticFields
{
public:
	// Lidgren.Network.NetRandom Lidgren.Network.NetRandom::Instance
	NetRandom_t509742058 * ___Instance_3;

public:
	inline static int32_t get_offset_of_Instance_3() { return static_cast<int32_t>(offsetof(NetRandom_t509742058_StaticFields, ___Instance_3)); }
	inline NetRandom_t509742058 * get_Instance_3() const { return ___Instance_3; }
	inline NetRandom_t509742058 ** get_address_of_Instance_3() { return &___Instance_3; }
	inline void set_Instance_3(NetRandom_t509742058 * value)
	{
		___Instance_3 = value;
		Il2CppCodeGenWriteBarrier(&___Instance_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
