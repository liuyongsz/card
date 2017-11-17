#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"
#include "System_System_Net_NetworkInformation_Win32LengthFl1910118479.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_Net_NetworkInformation_Win32_SOCKET_1093973396.h"
#include "System_System_Net_NetworkInformation_PrefixOrigin2896511548.h"
#include "System_System_Net_NetworkInformation_SuffixOrigin2288602937.h"
#include "System_System_Net_NetworkInformation_DuplicateAddr3969562151.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS
struct  Win32_IP_ADAPTER_UNICAST_ADDRESS_t1884414946 
{
public:
	// System.Net.NetworkInformation.Win32LengthFlagsUnion System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS::LengthFlags
	Win32LengthFlagsUnion_t1910118479  ___LengthFlags_0;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS::Next
	IntPtr_t ___Next_1;
	// System.Net.NetworkInformation.Win32_SOCKET_ADDRESS System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS::Address
	Win32_SOCKET_ADDRESS_t1093973396  ___Address_2;
	// System.Net.NetworkInformation.PrefixOrigin System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS::PrefixOrigin
	int32_t ___PrefixOrigin_3;
	// System.Net.NetworkInformation.SuffixOrigin System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS::SuffixOrigin
	int32_t ___SuffixOrigin_4;
	// System.Net.NetworkInformation.DuplicateAddressDetectionState System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS::DadState
	int32_t ___DadState_5;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS::ValidLifetime
	uint32_t ___ValidLifetime_6;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS::PreferredLifetime
	uint32_t ___PreferredLifetime_7;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS::LeaseLifetime
	uint32_t ___LeaseLifetime_8;
	// System.Byte System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS::OnLinkPrefixLength
	uint8_t ___OnLinkPrefixLength_9;

public:
	inline static int32_t get_offset_of_LengthFlags_0() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_UNICAST_ADDRESS_t1884414946, ___LengthFlags_0)); }
	inline Win32LengthFlagsUnion_t1910118479  get_LengthFlags_0() const { return ___LengthFlags_0; }
	inline Win32LengthFlagsUnion_t1910118479 * get_address_of_LengthFlags_0() { return &___LengthFlags_0; }
	inline void set_LengthFlags_0(Win32LengthFlagsUnion_t1910118479  value)
	{
		___LengthFlags_0 = value;
	}

	inline static int32_t get_offset_of_Next_1() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_UNICAST_ADDRESS_t1884414946, ___Next_1)); }
	inline IntPtr_t get_Next_1() const { return ___Next_1; }
	inline IntPtr_t* get_address_of_Next_1() { return &___Next_1; }
	inline void set_Next_1(IntPtr_t value)
	{
		___Next_1 = value;
	}

	inline static int32_t get_offset_of_Address_2() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_UNICAST_ADDRESS_t1884414946, ___Address_2)); }
	inline Win32_SOCKET_ADDRESS_t1093973396  get_Address_2() const { return ___Address_2; }
	inline Win32_SOCKET_ADDRESS_t1093973396 * get_address_of_Address_2() { return &___Address_2; }
	inline void set_Address_2(Win32_SOCKET_ADDRESS_t1093973396  value)
	{
		___Address_2 = value;
	}

	inline static int32_t get_offset_of_PrefixOrigin_3() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_UNICAST_ADDRESS_t1884414946, ___PrefixOrigin_3)); }
	inline int32_t get_PrefixOrigin_3() const { return ___PrefixOrigin_3; }
	inline int32_t* get_address_of_PrefixOrigin_3() { return &___PrefixOrigin_3; }
	inline void set_PrefixOrigin_3(int32_t value)
	{
		___PrefixOrigin_3 = value;
	}

	inline static int32_t get_offset_of_SuffixOrigin_4() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_UNICAST_ADDRESS_t1884414946, ___SuffixOrigin_4)); }
	inline int32_t get_SuffixOrigin_4() const { return ___SuffixOrigin_4; }
	inline int32_t* get_address_of_SuffixOrigin_4() { return &___SuffixOrigin_4; }
	inline void set_SuffixOrigin_4(int32_t value)
	{
		___SuffixOrigin_4 = value;
	}

	inline static int32_t get_offset_of_DadState_5() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_UNICAST_ADDRESS_t1884414946, ___DadState_5)); }
	inline int32_t get_DadState_5() const { return ___DadState_5; }
	inline int32_t* get_address_of_DadState_5() { return &___DadState_5; }
	inline void set_DadState_5(int32_t value)
	{
		___DadState_5 = value;
	}

	inline static int32_t get_offset_of_ValidLifetime_6() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_UNICAST_ADDRESS_t1884414946, ___ValidLifetime_6)); }
	inline uint32_t get_ValidLifetime_6() const { return ___ValidLifetime_6; }
	inline uint32_t* get_address_of_ValidLifetime_6() { return &___ValidLifetime_6; }
	inline void set_ValidLifetime_6(uint32_t value)
	{
		___ValidLifetime_6 = value;
	}

	inline static int32_t get_offset_of_PreferredLifetime_7() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_UNICAST_ADDRESS_t1884414946, ___PreferredLifetime_7)); }
	inline uint32_t get_PreferredLifetime_7() const { return ___PreferredLifetime_7; }
	inline uint32_t* get_address_of_PreferredLifetime_7() { return &___PreferredLifetime_7; }
	inline void set_PreferredLifetime_7(uint32_t value)
	{
		___PreferredLifetime_7 = value;
	}

	inline static int32_t get_offset_of_LeaseLifetime_8() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_UNICAST_ADDRESS_t1884414946, ___LeaseLifetime_8)); }
	inline uint32_t get_LeaseLifetime_8() const { return ___LeaseLifetime_8; }
	inline uint32_t* get_address_of_LeaseLifetime_8() { return &___LeaseLifetime_8; }
	inline void set_LeaseLifetime_8(uint32_t value)
	{
		___LeaseLifetime_8 = value;
	}

	inline static int32_t get_offset_of_OnLinkPrefixLength_9() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_UNICAST_ADDRESS_t1884414946, ___OnLinkPrefixLength_9)); }
	inline uint8_t get_OnLinkPrefixLength_9() const { return ___OnLinkPrefixLength_9; }
	inline uint8_t* get_address_of_OnLinkPrefixLength_9() { return &___OnLinkPrefixLength_9; }
	inline void set_OnLinkPrefixLength_9(uint8_t value)
	{
		___OnLinkPrefixLength_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS
struct Win32_IP_ADAPTER_UNICAST_ADDRESS_t1884414946_marshaled_pinvoke
{
	Win32LengthFlagsUnion_t1910118479_marshaled_pinvoke ___LengthFlags_0;
	intptr_t ___Next_1;
	Win32_SOCKET_ADDRESS_t1093973396_marshaled_pinvoke ___Address_2;
	int32_t ___PrefixOrigin_3;
	int32_t ___SuffixOrigin_4;
	int32_t ___DadState_5;
	uint32_t ___ValidLifetime_6;
	uint32_t ___PreferredLifetime_7;
	uint32_t ___LeaseLifetime_8;
	uint8_t ___OnLinkPrefixLength_9;
};
// Native definition for marshalling of: System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS
struct Win32_IP_ADAPTER_UNICAST_ADDRESS_t1884414946_marshaled_com
{
	Win32LengthFlagsUnion_t1910118479_marshaled_com ___LengthFlags_0;
	intptr_t ___Next_1;
	Win32_SOCKET_ADDRESS_t1093973396_marshaled_com ___Address_2;
	int32_t ___PrefixOrigin_3;
	int32_t ___SuffixOrigin_4;
	int32_t ___DadState_5;
	uint32_t ___ValidLifetime_6;
	uint32_t ___PreferredLifetime_7;
	uint32_t ___LeaseLifetime_8;
	uint8_t ___OnLinkPrefixLength_9;
};
