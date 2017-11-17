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

// System.Net.NetworkInformation.sockaddr_ll
struct  sockaddr_ll_t1681025498 
{
public:
	// System.UInt16 System.Net.NetworkInformation.sockaddr_ll::sll_family
	uint16_t ___sll_family_0;
	// System.UInt16 System.Net.NetworkInformation.sockaddr_ll::sll_protocol
	uint16_t ___sll_protocol_1;
	// System.Int32 System.Net.NetworkInformation.sockaddr_ll::sll_ifindex
	int32_t ___sll_ifindex_2;
	// System.UInt16 System.Net.NetworkInformation.sockaddr_ll::sll_hatype
	uint16_t ___sll_hatype_3;
	// System.Byte System.Net.NetworkInformation.sockaddr_ll::sll_pkttype
	uint8_t ___sll_pkttype_4;
	// System.Byte System.Net.NetworkInformation.sockaddr_ll::sll_halen
	uint8_t ___sll_halen_5;
	// System.Byte[] System.Net.NetworkInformation.sockaddr_ll::sll_addr
	ByteU5BU5D_t3397334013* ___sll_addr_6;

public:
	inline static int32_t get_offset_of_sll_family_0() { return static_cast<int32_t>(offsetof(sockaddr_ll_t1681025498, ___sll_family_0)); }
	inline uint16_t get_sll_family_0() const { return ___sll_family_0; }
	inline uint16_t* get_address_of_sll_family_0() { return &___sll_family_0; }
	inline void set_sll_family_0(uint16_t value)
	{
		___sll_family_0 = value;
	}

	inline static int32_t get_offset_of_sll_protocol_1() { return static_cast<int32_t>(offsetof(sockaddr_ll_t1681025498, ___sll_protocol_1)); }
	inline uint16_t get_sll_protocol_1() const { return ___sll_protocol_1; }
	inline uint16_t* get_address_of_sll_protocol_1() { return &___sll_protocol_1; }
	inline void set_sll_protocol_1(uint16_t value)
	{
		___sll_protocol_1 = value;
	}

	inline static int32_t get_offset_of_sll_ifindex_2() { return static_cast<int32_t>(offsetof(sockaddr_ll_t1681025498, ___sll_ifindex_2)); }
	inline int32_t get_sll_ifindex_2() const { return ___sll_ifindex_2; }
	inline int32_t* get_address_of_sll_ifindex_2() { return &___sll_ifindex_2; }
	inline void set_sll_ifindex_2(int32_t value)
	{
		___sll_ifindex_2 = value;
	}

	inline static int32_t get_offset_of_sll_hatype_3() { return static_cast<int32_t>(offsetof(sockaddr_ll_t1681025498, ___sll_hatype_3)); }
	inline uint16_t get_sll_hatype_3() const { return ___sll_hatype_3; }
	inline uint16_t* get_address_of_sll_hatype_3() { return &___sll_hatype_3; }
	inline void set_sll_hatype_3(uint16_t value)
	{
		___sll_hatype_3 = value;
	}

	inline static int32_t get_offset_of_sll_pkttype_4() { return static_cast<int32_t>(offsetof(sockaddr_ll_t1681025498, ___sll_pkttype_4)); }
	inline uint8_t get_sll_pkttype_4() const { return ___sll_pkttype_4; }
	inline uint8_t* get_address_of_sll_pkttype_4() { return &___sll_pkttype_4; }
	inline void set_sll_pkttype_4(uint8_t value)
	{
		___sll_pkttype_4 = value;
	}

	inline static int32_t get_offset_of_sll_halen_5() { return static_cast<int32_t>(offsetof(sockaddr_ll_t1681025498, ___sll_halen_5)); }
	inline uint8_t get_sll_halen_5() const { return ___sll_halen_5; }
	inline uint8_t* get_address_of_sll_halen_5() { return &___sll_halen_5; }
	inline void set_sll_halen_5(uint8_t value)
	{
		___sll_halen_5 = value;
	}

	inline static int32_t get_offset_of_sll_addr_6() { return static_cast<int32_t>(offsetof(sockaddr_ll_t1681025498, ___sll_addr_6)); }
	inline ByteU5BU5D_t3397334013* get_sll_addr_6() const { return ___sll_addr_6; }
	inline ByteU5BU5D_t3397334013** get_address_of_sll_addr_6() { return &___sll_addr_6; }
	inline void set_sll_addr_6(ByteU5BU5D_t3397334013* value)
	{
		___sll_addr_6 = value;
		Il2CppCodeGenWriteBarrier(&___sll_addr_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.Net.NetworkInformation.sockaddr_ll
struct sockaddr_ll_t1681025498_marshaled_pinvoke
{
	uint16_t ___sll_family_0;
	uint16_t ___sll_protocol_1;
	int32_t ___sll_ifindex_2;
	uint16_t ___sll_hatype_3;
	uint8_t ___sll_pkttype_4;
	uint8_t ___sll_halen_5;
	uint8_t ___sll_addr_6[8];
};
// Native definition for marshalling of: System.Net.NetworkInformation.sockaddr_ll
struct sockaddr_ll_t1681025498_marshaled_com
{
	uint16_t ___sll_family_0;
	uint16_t ___sll_protocol_1;
	int32_t ___sll_ifindex_2;
	uint16_t ___sll_hatype_3;
	uint8_t ___sll_pkttype_4;
	uint8_t ___sll_halen_5;
	uint8_t ___sll_addr_6[8];
};
