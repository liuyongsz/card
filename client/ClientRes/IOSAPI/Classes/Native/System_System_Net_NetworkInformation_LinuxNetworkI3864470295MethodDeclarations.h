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

// System.Net.NetworkInformation.LinuxNetworkInterface
struct LinuxNetworkInterface_t3864470295;
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

// System.Void System.Net.NetworkInformation.LinuxNetworkInterface::.ctor(System.String)
extern "C"  void LinuxNetworkInterface__ctor_m4238128715 (LinuxNetworkInterface_t3864470295 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.LinuxNetworkInterface::getifaddrs(System.IntPtr&)
extern "C"  int32_t LinuxNetworkInterface_getifaddrs_m3134495802 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___ifap0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.LinuxNetworkInterface::freeifaddrs(System.IntPtr)
extern "C"  void LinuxNetworkInterface_freeifaddrs_m2653481484 (Il2CppObject * __this /* static, unused */, IntPtr_t ___ifap0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkInformation.LinuxNetworkInterface::get_IfacePath()
extern "C"  String_t* LinuxNetworkInterface_get_IfacePath_m3341314018 (LinuxNetworkInterface_t3864470295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.NetworkInterface[] System.Net.NetworkInformation.LinuxNetworkInterface::ImplGetAllNetworkInterfaces()
extern "C"  NetworkInterfaceU5BU5D_t4157644364* LinuxNetworkInterface_ImplGetAllNetworkInterfaces_m2182664942 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPInterfaceProperties System.Net.NetworkInformation.LinuxNetworkInterface::GetIPProperties()
extern "C"  IPInterfaceProperties_t3986609851 * LinuxNetworkInterface_GetIPProperties_m4275696067 (LinuxNetworkInterface_t3864470295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.OperationalStatus System.Net.NetworkInformation.LinuxNetworkInterface::get_OperationalStatus()
extern "C"  int32_t LinuxNetworkInterface_get_OperationalStatus_m1075747317 (LinuxNetworkInterface_t3864470295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
