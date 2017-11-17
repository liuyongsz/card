#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "mscorlib_System_ValueType3507792607.h"
#include "mscorlib_System_Byte3683104436.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.in6_addr
struct  in6_addr_t4035827331 
{
public:
	// System.Byte[] System.Net.NetworkInformation.in6_addr::u6_addr8
	ByteU5BU5D_t3397334013* ___u6_addr8_0;

public:
	inline static int32_t get_offset_of_u6_addr8_0() { return static_cast<int32_t>(offsetof(in6_addr_t4035827331, ___u6_addr8_0)); }
	inline ByteU5BU5D_t3397334013* get_u6_addr8_0() const { return ___u6_addr8_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_u6_addr8_0() { return &___u6_addr8_0; }
	inline void set_u6_addr8_0(ByteU5BU5D_t3397334013* value)
	{
		___u6_addr8_0 = value;
		Il2CppCodeGenWriteBarrier(&___u6_addr8_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.Net.NetworkInformation.in6_addr
struct in6_addr_t4035827331_marshaled_pinvoke
{
	uint8_t ___u6_addr8_0[16];
};
// Native definition for marshalling of: System.Net.NetworkInformation.in6_addr
struct in6_addr_t4035827331_marshaled_com
{
	uint8_t ___u6_addr8_0[16];
};
