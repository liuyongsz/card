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

// System.Net.NetworkInformation.UnixIPInterfaceProperties
struct UnixIPInterfaceProperties_t2418091637;
// System.Net.NetworkInformation.UnixNetworkInterface
struct UnixNetworkInterface_t1000704527;
// System.Collections.Generic.List`1<System.Net.IPAddress>
struct List_1_t769092855;
// System.Net.NetworkInformation.UnicastIPAddressInformationCollection
struct UnicastIPAddressInformationCollection_t347163204;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_NetworkInformation_UnixNetworkIn1000704527.h"

// System.Void System.Net.NetworkInformation.UnixIPInterfaceProperties::.ctor(System.Net.NetworkInformation.UnixNetworkInterface,System.Collections.Generic.List`1<System.Net.IPAddress>)
extern "C"  void UnixIPInterfaceProperties__ctor_m2539088987 (UnixIPInterfaceProperties_t2418091637 * __this, UnixNetworkInterface_t1000704527 * ___iface0, List_1_t769092855 * ___addresses1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.UnixIPInterfaceProperties::.cctor()
extern "C"  void UnixIPInterfaceProperties__cctor_m2472170512 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.UnicastIPAddressInformationCollection System.Net.NetworkInformation.UnixIPInterfaceProperties::get_UnicastAddresses()
extern "C"  UnicastIPAddressInformationCollection_t347163204 * UnixIPInterfaceProperties_get_UnicastAddresses_m3939955578 (UnixIPInterfaceProperties_t2418091637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
