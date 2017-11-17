#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"
#include "mscorlib_System_IntPtr2504060609.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_SOCKET_ADDRESS
struct  Win32_SOCKET_ADDRESS_t1093973396 
{
public:
	// System.IntPtr System.Net.NetworkInformation.Win32_SOCKET_ADDRESS::Sockaddr
	IntPtr_t ___Sockaddr_0;
	// System.Int32 System.Net.NetworkInformation.Win32_SOCKET_ADDRESS::SockaddrLength
	int32_t ___SockaddrLength_1;

public:
	inline static int32_t get_offset_of_Sockaddr_0() { return static_cast<int32_t>(offsetof(Win32_SOCKET_ADDRESS_t1093973396, ___Sockaddr_0)); }
	inline IntPtr_t get_Sockaddr_0() const { return ___Sockaddr_0; }
	inline IntPtr_t* get_address_of_Sockaddr_0() { return &___Sockaddr_0; }
	inline void set_Sockaddr_0(IntPtr_t value)
	{
		___Sockaddr_0 = value;
	}

	inline static int32_t get_offset_of_SockaddrLength_1() { return static_cast<int32_t>(offsetof(Win32_SOCKET_ADDRESS_t1093973396, ___SockaddrLength_1)); }
	inline int32_t get_SockaddrLength_1() const { return ___SockaddrLength_1; }
	inline int32_t* get_address_of_SockaddrLength_1() { return &___SockaddrLength_1; }
	inline void set_SockaddrLength_1(int32_t value)
	{
		___SockaddrLength_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.Net.NetworkInformation.Win32_SOCKET_ADDRESS
struct Win32_SOCKET_ADDRESS_t1093973396_marshaled_pinvoke
{
	intptr_t ___Sockaddr_0;
	int32_t ___SockaddrLength_1;
};
// Native definition for marshalling of: System.Net.NetworkInformation.Win32_SOCKET_ADDRESS
struct Win32_SOCKET_ADDRESS_t1093973396_marshaled_com
{
	intptr_t ___Sockaddr_0;
	int32_t ___SockaddrLength_1;
};
