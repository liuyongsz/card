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

// System.Net.NetworkInformation.Win32UnicastIPAddressInformation
struct Win32UnicastIPAddressInformation_t1388218403;
// System.Net.IPAddress
struct IPAddress_t1399971723;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_NetworkInformation_Win32_IP_ADAP1884414946.h"

// System.Void System.Net.NetworkInformation.Win32UnicastIPAddressInformation::.ctor(System.Int32,System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS)
extern "C"  void Win32UnicastIPAddressInformation__ctor_m265716656 (Win32UnicastIPAddressInformation_t1388218403 * __this, int32_t ___ifIndex0, Win32_IP_ADAPTER_UNICAST_ADDRESS_t1884414946  ___info1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.NetworkInformation.Win32UnicastIPAddressInformation::get_Address()
extern "C"  IPAddress_t1399971723 * Win32UnicastIPAddressInformation_get_Address_m2218061814 (Win32UnicastIPAddressInformation_t1388218403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.NetworkInformation.Win32UnicastIPAddressInformation::get_IPv4Mask()
extern "C"  IPAddress_t1399971723 * Win32UnicastIPAddressInformation_get_IPv4Mask_m1888140825 (Win32UnicastIPAddressInformation_t1388218403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
