#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"
#include "System_System_Net_NetworkInformation_in6_addr4035827331.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.sockaddr_in6
struct  sockaddr_in6_t2899168071 
{
public:
	// System.UInt16 System.Net.NetworkInformation.sockaddr_in6::sin6_family
	uint16_t ___sin6_family_0;
	// System.UInt16 System.Net.NetworkInformation.sockaddr_in6::sin6_port
	uint16_t ___sin6_port_1;
	// System.UInt32 System.Net.NetworkInformation.sockaddr_in6::sin6_flowinfo
	uint32_t ___sin6_flowinfo_2;
	// System.Net.NetworkInformation.in6_addr System.Net.NetworkInformation.sockaddr_in6::sin6_addr
	in6_addr_t4035827331  ___sin6_addr_3;
	// System.UInt32 System.Net.NetworkInformation.sockaddr_in6::sin6_scope_id
	uint32_t ___sin6_scope_id_4;

public:
	inline static int32_t get_offset_of_sin6_family_0() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2899168071, ___sin6_family_0)); }
	inline uint16_t get_sin6_family_0() const { return ___sin6_family_0; }
	inline uint16_t* get_address_of_sin6_family_0() { return &___sin6_family_0; }
	inline void set_sin6_family_0(uint16_t value)
	{
		___sin6_family_0 = value;
	}

	inline static int32_t get_offset_of_sin6_port_1() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2899168071, ___sin6_port_1)); }
	inline uint16_t get_sin6_port_1() const { return ___sin6_port_1; }
	inline uint16_t* get_address_of_sin6_port_1() { return &___sin6_port_1; }
	inline void set_sin6_port_1(uint16_t value)
	{
		___sin6_port_1 = value;
	}

	inline static int32_t get_offset_of_sin6_flowinfo_2() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2899168071, ___sin6_flowinfo_2)); }
	inline uint32_t get_sin6_flowinfo_2() const { return ___sin6_flowinfo_2; }
	inline uint32_t* get_address_of_sin6_flowinfo_2() { return &___sin6_flowinfo_2; }
	inline void set_sin6_flowinfo_2(uint32_t value)
	{
		___sin6_flowinfo_2 = value;
	}

	inline static int32_t get_offset_of_sin6_addr_3() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2899168071, ___sin6_addr_3)); }
	inline in6_addr_t4035827331  get_sin6_addr_3() const { return ___sin6_addr_3; }
	inline in6_addr_t4035827331 * get_address_of_sin6_addr_3() { return &___sin6_addr_3; }
	inline void set_sin6_addr_3(in6_addr_t4035827331  value)
	{
		___sin6_addr_3 = value;
	}

	inline static int32_t get_offset_of_sin6_scope_id_4() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2899168071, ___sin6_scope_id_4)); }
	inline uint32_t get_sin6_scope_id_4() const { return ___sin6_scope_id_4; }
	inline uint32_t* get_address_of_sin6_scope_id_4() { return &___sin6_scope_id_4; }
	inline void set_sin6_scope_id_4(uint32_t value)
	{
		___sin6_scope_id_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.Net.NetworkInformation.sockaddr_in6
struct sockaddr_in6_t2899168071_marshaled_pinvoke
{
	uint16_t ___sin6_family_0;
	uint16_t ___sin6_port_1;
	uint32_t ___sin6_flowinfo_2;
	in6_addr_t4035827331_marshaled_pinvoke ___sin6_addr_3;
	uint32_t ___sin6_scope_id_4;
};
// Native definition for marshalling of: System.Net.NetworkInformation.sockaddr_in6
struct sockaddr_in6_t2899168071_marshaled_com
{
	uint16_t ___sin6_family_0;
	uint16_t ___sin6_port_1;
	uint32_t ___sin6_flowinfo_2;
	in6_addr_t4035827331_marshaled_com ___sin6_addr_3;
	uint32_t ___sin6_scope_id_4;
};
