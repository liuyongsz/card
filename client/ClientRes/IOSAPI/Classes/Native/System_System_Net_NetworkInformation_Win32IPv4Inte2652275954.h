#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "System_System_Net_NetworkInformation_IPv4Interface3946458365.h"
#include "System_System_Net_NetworkInformation_Win32_MIB_IFR4215928996.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32IPv4InterfaceStatistics
struct  Win32IPv4InterfaceStatistics_t2652275954  : public IPv4InterfaceStatistics_t3946458365
{
public:
	// System.Net.NetworkInformation.Win32_MIB_IFROW System.Net.NetworkInformation.Win32IPv4InterfaceStatistics::info
	Win32_MIB_IFROW_t4215928996  ___info_0;

public:
	inline static int32_t get_offset_of_info_0() { return static_cast<int32_t>(offsetof(Win32IPv4InterfaceStatistics_t2652275954, ___info_0)); }
	inline Win32_MIB_IFROW_t4215928996  get_info_0() const { return ___info_0; }
	inline Win32_MIB_IFROW_t4215928996 * get_address_of_info_0() { return &___info_0; }
	inline void set_info_0(Win32_MIB_IFROW_t4215928996  value)
	{
		___info_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
