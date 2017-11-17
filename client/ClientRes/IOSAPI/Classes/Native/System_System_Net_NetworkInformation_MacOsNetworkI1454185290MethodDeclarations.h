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

// System.Net.NetworkInformation.MacOsNetworkInterface
struct MacOsNetworkInterface_t1454185290;
// System.String
struct String_t;
// System.Net.NetworkInformation.NetworkInterface[]
struct NetworkInterfaceU5BU5D_t4157644364;
// System.Net.NetworkInformation.IPInterfaceProperties
struct IPInterfaceProperties_t3986609851;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_Net_NetworkInformation_OperationalSt2833345236.h"

// System.Void System.Net.NetworkInformation.MacOsNetworkInterface::.ctor(System.String)
extern "C"  void MacOsNetworkInterface__ctor_m1351908890 (MacOsNetworkInterface_t1454185290 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.MacOsNetworkInterface::getifaddrs(System.IntPtr&)
extern "C"  int32_t MacOsNetworkInterface_getifaddrs_m2468800431 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___ifap0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.MacOsNetworkInterface::freeifaddrs(System.IntPtr)
extern "C"  void MacOsNetworkInterface_freeifaddrs_m3490628521 (Il2CppObject * __this /* static, unused */, IntPtr_t ___ifap0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.NetworkInterface[] System.Net.NetworkInformation.MacOsNetworkInterface::ImplGetAllNetworkInterfaces()
extern "C"  NetworkInterfaceU5BU5D_t4157644364* MacOsNetworkInterface_ImplGetAllNetworkInterfaces_m4010227571 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPInterfaceProperties System.Net.NetworkInformation.MacOsNetworkInterface::GetIPProperties()
extern "C"  IPInterfaceProperties_t3986609851 * MacOsNetworkInterface_GetIPProperties_m1108478090 (MacOsNetworkInterface_t1454185290 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.OperationalStatus System.Net.NetworkInformation.MacOsNetworkInterface::get_OperationalStatus()
extern "C"  int32_t MacOsNetworkInterface_get_OperationalStatus_m1712017450 (MacOsNetworkInterface_t1454185290 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
