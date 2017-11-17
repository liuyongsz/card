#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Net.NetworkInformation.Win32IPInterfaceProperties2
struct Win32IPInterfaceProperties2_t3641679752;
// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct Win32_IP_ADAPTER_ADDRESSES_t680756680;
// System.Net.NetworkInformation.UnicastIPAddressInformationCollection
struct UnicastIPAddressInformationCollection_t347163204;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_NetworkInformation_Win32_IP_ADAPT680756680.h"
#include "System_System_Net_NetworkInformation_Win32_MIB_IFR4215928996.h"

// System.Void System.Net.NetworkInformation.Win32IPInterfaceProperties2::.ctor(System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES,System.Net.NetworkInformation.Win32_MIB_IFROW,System.Net.NetworkInformation.Win32_MIB_IFROW)
extern "C"  void Win32IPInterfaceProperties2__ctor_m3917205584 (Win32IPInterfaceProperties2_t3641679752 * __this, Win32_IP_ADAPTER_ADDRESSES_t680756680 * ___addr0, Win32_MIB_IFROW_t4215928996  ___mib41, Win32_MIB_IFROW_t4215928996  ___mib62, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.UnicastIPAddressInformationCollection System.Net.NetworkInformation.Win32IPInterfaceProperties2::get_UnicastAddresses()
extern "C"  UnicastIPAddressInformationCollection_t347163204 * Win32IPInterfaceProperties2_get_UnicastAddresses_m3041646099 (Win32IPInterfaceProperties2_t3641679752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
