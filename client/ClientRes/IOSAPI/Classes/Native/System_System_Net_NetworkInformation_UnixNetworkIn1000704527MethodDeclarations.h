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

// System.Net.NetworkInformation.UnixNetworkInterface
struct UnixNetworkInterface_t1000704527;
// System.String
struct String_t;
// System.Net.IPAddress
struct IPAddress_t1399971723;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Net.NetworkInformation.PhysicalAddress
struct PhysicalAddress_t1613893277;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Net_IPAddress1399971723.h"
#include "System_System_Net_NetworkInformation_NetworkInterf4226883065.h"
#include "System_System_Net_NetworkInformation_NetworkInterf2376191102.h"

// System.Void System.Net.NetworkInformation.UnixNetworkInterface::.ctor(System.String)
extern "C"  void UnixNetworkInterface__ctor_m1628672279 (UnixNetworkInterface_t1000704527 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.UnixNetworkInterface::AddAddress(System.Net.IPAddress)
extern "C"  void UnixNetworkInterface_AddAddress_m1147233883 (UnixNetworkInterface_t1000704527 * __this, IPAddress_t1399971723 * ___address0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.UnixNetworkInterface::SetLinkLayerInfo(System.Int32,System.Byte[],System.Net.NetworkInformation.NetworkInterfaceType)
extern "C"  void UnixNetworkInterface_SetLinkLayerInfo_m963974689 (UnixNetworkInterface_t1000704527 * __this, int32_t ___index0, ByteU5BU5D_t3397334013* ___macAddress1, int32_t ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.PhysicalAddress System.Net.NetworkInformation.UnixNetworkInterface::GetPhysicalAddress()
extern "C"  PhysicalAddress_t1613893277 * UnixNetworkInterface_GetPhysicalAddress_m850246500 (UnixNetworkInterface_t1000704527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.UnixNetworkInterface::Supports(System.Net.NetworkInformation.NetworkInterfaceComponent)
extern "C"  bool UnixNetworkInterface_Supports_m4255863179 (UnixNetworkInterface_t1000704527 * __this, int32_t ___networkInterfaceComponent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.UnixNetworkInterface::get_NetworkInterfaceType()
extern "C"  int32_t UnixNetworkInterface_get_NetworkInterfaceType_m637614177 (UnixNetworkInterface_t1000704527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
