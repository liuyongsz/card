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

// Lidgren.Network.NetConnectionStatistics
struct NetConnectionStatistics_t1235765202;
// Lidgren.Network.NetConnection
struct NetConnection_t3331492029;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Lidgren_Network_Lidgren_Network_NetConnection3331492029.h"
#include "Lidgren_Network_Lidgren_Network_MessageResendReason402253882.h"

// System.Void Lidgren.Network.NetConnectionStatistics::.ctor(Lidgren.Network.NetConnection)
extern "C"  void NetConnectionStatistics__ctor_m2288023573 (NetConnectionStatistics_t1235765202 * __this, NetConnection_t3331492029 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetConnectionStatistics::Reset()
extern "C"  void NetConnectionStatistics_Reset_m3876387378 (NetConnectionStatistics_t1235765202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetConnectionStatistics::PacketSent(System.Int32,System.Int32)
extern "C"  void NetConnectionStatistics_PacketSent_m833909693 (NetConnectionStatistics_t1235765202 * __this, int32_t ___numBytes0, int32_t ___numMessages1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetConnectionStatistics::PacketReceived(System.Int32,System.Int32,System.Int32)
extern "C"  void NetConnectionStatistics_PacketReceived_m1973808183 (NetConnectionStatistics_t1235765202 * __this, int32_t ___numBytes0, int32_t ___numMessages1, int32_t ___numFragments2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetConnectionStatistics::MessageResent(Lidgren.Network.MessageResendReason)
extern "C"  void NetConnectionStatistics_MessageResent_m3999886766 (NetConnectionStatistics_t1235765202 * __this, int32_t ___reason0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetConnectionStatistics::MessageDropped()
extern "C"  void NetConnectionStatistics_MessageDropped_m4117327218 (NetConnectionStatistics_t1235765202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Lidgren.Network.NetConnectionStatistics::ToString()
extern "C"  String_t* NetConnectionStatistics_ToString_m2368372030 (NetConnectionStatistics_t1235765202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
