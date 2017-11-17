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

// Lidgren.Network.NetPeerStatistics
struct NetPeerStatistics_t101027066;
// Lidgren.Network.NetPeer
struct NetPeer_t1779390221;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Lidgren_Network_Lidgren_Network_NetPeer1779390221.h"

// System.Void Lidgren.Network.NetPeerStatistics::.ctor(Lidgren.Network.NetPeer)
extern "C"  void NetPeerStatistics__ctor_m358809733 (NetPeerStatistics_t101027066 * __this, NetPeer_t1779390221 * ___peer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetPeerStatistics::Reset()
extern "C"  void NetPeerStatistics_Reset_m36393242 (NetPeerStatistics_t101027066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetPeerStatistics::PacketSent(System.Int32,System.Int32)
extern "C"  void NetPeerStatistics_PacketSent_m2099282197 (NetPeerStatistics_t101027066 * __this, int32_t ___numBytes0, int32_t ___numMessages1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetPeerStatistics::PacketReceived(System.Int32,System.Int32,System.Int32)
extern "C"  void NetPeerStatistics_PacketReceived_m2812231107 (NetPeerStatistics_t101027066 * __this, int32_t ___numBytes0, int32_t ___numMessages1, int32_t ___numFragments2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Lidgren.Network.NetPeerStatistics::ToString()
extern "C"  String_t* NetPeerStatistics_ToString_m3092286938 (NetPeerStatistics_t101027066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
