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

// System.Net.IPAddress
struct IPAddress_t1399971723;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Net.NetworkInformation.NetworkInterface
struct NetworkInterface_t63927633;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "Lidgren_Network_Lidgren_Network_NetDeliveryMethod3645638710.h"
#include "Lidgren_Network_Lidgren_Network_NetMessageType191235414.h"

// System.Net.IPAddress Lidgren.Network.NetUtility::GetCachedBroadcastAddress()
extern "C"  IPAddress_t1399971723 * NetUtility_GetCachedBroadcastAddress_m1409773543 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress Lidgren.Network.NetUtility::Resolve(System.String)
extern "C"  IPAddress_t1399971723 * NetUtility_Resolve_m1627662274 (Il2CppObject * __this /* static, unused */, String_t* ___ipOrHost0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Lidgren.Network.NetUtility::ToHexString(System.Int64)
extern "C"  String_t* NetUtility_ToHexString_m433916538 (Il2CppObject * __this /* static, unused */, int64_t ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Lidgren.Network.NetUtility::ToHexString(System.Byte[])
extern "C"  String_t* NetUtility_ToHexString_m3804094867 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Lidgren.Network.NetUtility::ToHexString(System.Byte[],System.Int32,System.Int32)
extern "C"  String_t* NetUtility_ToHexString_m2921421631 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, int32_t ___offset1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Lidgren.Network.NetUtility::BytesToHoldBits(System.Int32)
extern "C"  int32_t NetUtility_BytesToHoldBits_m1372162852 (Il2CppObject * __this /* static, unused */, int32_t ___numBits0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Lidgren.Network.NetUtility::RelativeSequenceNumber(System.Int32,System.Int32)
extern "C"  int32_t NetUtility_RelativeSequenceNumber_m1713083748 (Il2CppObject * __this /* static, unused */, int32_t ___nr0, int32_t ___expected1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Lidgren.Network.NetUtility::GetWindowSize(Lidgren.Network.NetDeliveryMethod)
extern "C"  int32_t NetUtility_GetWindowSize_m1637041950 (Il2CppObject * __this /* static, unused */, uint8_t ___method0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Lidgren.Network.NetDeliveryMethod Lidgren.Network.NetUtility::GetDeliveryMethod(Lidgren.Network.NetMessageType)
extern "C"  uint8_t NetUtility_GetDeliveryMethod_m2383198164 (Il2CppObject * __this /* static, unused */, uint8_t ___mtp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Lidgren.Network.NetUtility::ComputeSHAHash(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* NetUtility_ComputeSHAHash_m2577505156 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Lidgren.Network.NetUtility::GetPlatformSeed(System.Int32)
extern "C"  uint64_t NetUtility_GetPlatformSeed_m3510865201 (Il2CppObject * __this /* static, unused */, int32_t ___seedInc0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.NetworkInterface Lidgren.Network.NetUtility::GetNetworkInterface()
extern "C"  NetworkInterface_t63927633 * NetUtility_GetNetworkInterface_m1628895093 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Lidgren.Network.NetUtility::GetMacAddressBytes()
extern "C"  ByteU5BU5D_t3397334013* NetUtility_GetMacAddressBytes_m2783516176 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress Lidgren.Network.NetUtility::GetBroadcastAddress()
extern "C"  IPAddress_t1399971723 * NetUtility_GetBroadcastAddress_m2689141683 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetUtility::Sleep(System.Int32)
extern "C"  void NetUtility_Sleep_m886463228 (Il2CppObject * __this /* static, unused */, int32_t ___milliseconds0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress Lidgren.Network.NetUtility::CreateAddressFromBytes(System.Byte[])
extern "C"  IPAddress_t1399971723 * NetUtility_CreateAddressFromBytes_m1989273768 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Lidgren.Network.NetUtility::ComputeSHAHash(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* NetUtility_ComputeSHAHash_m3941709570 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetUtility::.cctor()
extern "C"  void NetUtility__cctor_m1679246969 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
