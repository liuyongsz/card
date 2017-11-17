#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct Win32_IP_ADAPTER_ADDRESSES_t680756680;

#include "System_System_Net_NetworkInformation_IPInterfacePr3986609851.h"
#include "System_System_Net_NetworkInformation_Win32_MIB_IFR4215928996.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32IPInterfaceProperties2
struct  Win32IPInterfaceProperties2_t3641679752  : public IPInterfaceProperties_t3986609851
{
public:
	// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES System.Net.NetworkInformation.Win32IPInterfaceProperties2::addr
	Win32_IP_ADAPTER_ADDRESSES_t680756680 * ___addr_0;
	// System.Net.NetworkInformation.Win32_MIB_IFROW System.Net.NetworkInformation.Win32IPInterfaceProperties2::mib4
	Win32_MIB_IFROW_t4215928996  ___mib4_1;
	// System.Net.NetworkInformation.Win32_MIB_IFROW System.Net.NetworkInformation.Win32IPInterfaceProperties2::mib6
	Win32_MIB_IFROW_t4215928996  ___mib6_2;

public:
	inline static int32_t get_offset_of_addr_0() { return static_cast<int32_t>(offsetof(Win32IPInterfaceProperties2_t3641679752, ___addr_0)); }
	inline Win32_IP_ADAPTER_ADDRESSES_t680756680 * get_addr_0() const { return ___addr_0; }
	inline Win32_IP_ADAPTER_ADDRESSES_t680756680 ** get_address_of_addr_0() { return &___addr_0; }
	inline void set_addr_0(Win32_IP_ADAPTER_ADDRESSES_t680756680 * value)
	{
		___addr_0 = value;
		Il2CppCodeGenWriteBarrier(&___addr_0, value);
	}

	inline static int32_t get_offset_of_mib4_1() { return static_cast<int32_t>(offsetof(Win32IPInterfaceProperties2_t3641679752, ___mib4_1)); }
	inline Win32_MIB_IFROW_t4215928996  get_mib4_1() const { return ___mib4_1; }
	inline Win32_MIB_IFROW_t4215928996 * get_address_of_mib4_1() { return &___mib4_1; }
	inline void set_mib4_1(Win32_MIB_IFROW_t4215928996  value)
	{
		___mib4_1 = value;
	}

	inline static int32_t get_offset_of_mib6_2() { return static_cast<int32_t>(offsetof(Win32IPInterfaceProperties2_t3641679752, ___mib6_2)); }
	inline Win32_MIB_IFROW_t4215928996  get_mib6_2() const { return ___mib6_2; }
	inline Win32_MIB_IFROW_t4215928996 * get_address_of_mib6_2() { return &___mib6_2; }
	inline void set_mib6_2(Win32_MIB_IFROW_t4215928996  value)
	{
		___mib6_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
