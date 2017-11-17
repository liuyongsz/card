#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "System_System_Net_NetworkInformation_UnicastIPAddr2919786644.h"
#include "System_System_Net_NetworkInformation_Win32_IP_ADAP1884414946.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32UnicastIPAddressInformation
struct  Win32UnicastIPAddressInformation_t1388218403  : public UnicastIPAddressInformation_t2919786644
{
public:
	// System.Int32 System.Net.NetworkInformation.Win32UnicastIPAddressInformation::if_index
	int32_t ___if_index_0;
	// System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS System.Net.NetworkInformation.Win32UnicastIPAddressInformation::info
	Win32_IP_ADAPTER_UNICAST_ADDRESS_t1884414946  ___info_1;

public:
	inline static int32_t get_offset_of_if_index_0() { return static_cast<int32_t>(offsetof(Win32UnicastIPAddressInformation_t1388218403, ___if_index_0)); }
	inline int32_t get_if_index_0() const { return ___if_index_0; }
	inline int32_t* get_address_of_if_index_0() { return &___if_index_0; }
	inline void set_if_index_0(int32_t value)
	{
		___if_index_0 = value;
	}

	inline static int32_t get_offset_of_info_1() { return static_cast<int32_t>(offsetof(Win32UnicastIPAddressInformation_t1388218403, ___info_1)); }
	inline Win32_IP_ADAPTER_UNICAST_ADDRESS_t1884414946  get_info_1() const { return ___info_1; }
	inline Win32_IP_ADAPTER_UNICAST_ADDRESS_t1884414946 * get_address_of_info_1() { return &___info_1; }
	inline void set_info_1(Win32_IP_ADAPTER_UNICAST_ADDRESS_t1884414946  value)
	{
		___info_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
