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

// Lidgren.Network.NetUPnP
struct NetUPnP_t2794379482;
// Lidgren.Network.NetPeer
struct NetPeer_t1779390221;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Lidgren_Network_Lidgren_Network_NetPeer1779390221.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Lidgren.Network.NetUPnP::.ctor(Lidgren.Network.NetPeer)
extern "C"  void NetUPnP__ctor_m1248845477 (NetUPnP_t2794379482 * __this, NetPeer_t1779390221 * ___peer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetUPnP::Discover(Lidgren.Network.NetPeer)
extern "C"  void NetUPnP_Discover_m2977051670 (NetUPnP_t2794379482 * __this, NetPeer_t1779390221 * ___peer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetUPnP::CheckForDiscoveryTimeout()
extern "C"  void NetUPnP_CheckForDiscoveryTimeout_m1059646905 (NetUPnP_t2794379482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetUPnP::ExtractServiceUrl(System.String)
extern "C"  void NetUPnP_ExtractServiceUrl_m1890440714 (NetUPnP_t2794379482 * __this, String_t* ___resp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Lidgren.Network.NetUPnP::CombineUrls(System.String,System.String)
extern "C"  String_t* NetUPnP_CombineUrls_m1444389121 (Il2CppObject * __this /* static, unused */, String_t* ___gatewayURL0, String_t* ___subURL1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
