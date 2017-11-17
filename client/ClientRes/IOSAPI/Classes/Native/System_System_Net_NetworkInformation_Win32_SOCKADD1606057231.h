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

// System.Net.NetworkInformation.Win32_SOCKADDR
struct  Win32_SOCKADDR_t1606057231 
{
public:
	// System.UInt16 System.Net.NetworkInformation.Win32_SOCKADDR::AddressFamily
	uint16_t ___AddressFamily_0;
	// System.Byte[] System.Net.NetworkInformation.Win32_SOCKADDR::AddressData
	ByteU5BU5D_t3397334013* ___AddressData_1;

public:
	inline static int32_t get_offset_of_AddressFamily_0() { return static_cast<int32_t>(offsetof(Win32_SOCKADDR_t1606057231, ___AddressFamily_0)); }
	inline uint16_t get_AddressFamily_0() const { return ___AddressFamily_0; }
	inline uint16_t* get_address_of_AddressFamily_0() { return &___AddressFamily_0; }
	inline void set_AddressFamily_0(uint16_t value)
	{
		___AddressFamily_0 = value;
	}

	inline static int32_t get_offset_of_AddressData_1() { return static_cast<int32_t>(offsetof(Win32_SOCKADDR_t1606057231, ___AddressData_1)); }
	inline ByteU5BU5D_t3397334013* get_AddressData_1() const { return ___AddressData_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_AddressData_1() { return &___AddressData_1; }
	inline void set_AddressData_1(ByteU5BU5D_t3397334013* value)
	{
		___AddressData_1 = value;
		Il2CppCodeGenWriteBarrier(&___AddressData_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.Net.NetworkInformation.Win32_SOCKADDR
struct Win32_SOCKADDR_t1606057231_marshaled_pinvoke
{
	uint16_t ___AddressFamily_0;
	uint8_t ___AddressData_1[28];
};
// Native definition for marshalling of: System.Net.NetworkInformation.Win32_SOCKADDR
struct Win32_SOCKADDR_t1606057231_marshaled_com
{
	uint16_t ___AddressFamily_0;
	uint8_t ___AddressData_1[28];
};
