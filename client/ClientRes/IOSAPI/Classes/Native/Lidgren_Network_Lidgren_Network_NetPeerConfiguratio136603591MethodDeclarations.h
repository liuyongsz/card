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

// Lidgren.Network.NetPeerConfiguration
struct NetPeerConfiguration_t136603591;
// System.String
struct String_t;
// System.Net.IPAddress
struct IPAddress_t1399971723;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "Lidgren_Network_Lidgren_Network_NetIncomingMessage4279120760.h"
#include "Lidgren_Network_Lidgren_Network_NetUnreliableSizeB2550812882.h"

// System.Void Lidgren.Network.NetPeerConfiguration::.ctor(System.String)
extern "C"  void NetPeerConfiguration__ctor_m2730954738 (NetPeerConfiguration_t136603591 * __this, String_t* ___appIdentifier0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetPeerConfiguration::Lock()
extern "C"  void NetPeerConfiguration_Lock_m363221111 (NetPeerConfiguration_t136603591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Lidgren.Network.NetPeerConfiguration::get_AppIdentifier()
extern "C"  String_t* NetPeerConfiguration_get_AppIdentifier_m1563815312 (NetPeerConfiguration_t136603591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetPeerConfiguration::EnableMessageType(Lidgren.Network.NetIncomingMessageType)
extern "C"  void NetPeerConfiguration_EnableMessageType_m3529385845 (NetPeerConfiguration_t136603591 * __this, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetPeerConfiguration::DisableMessageType(Lidgren.Network.NetIncomingMessageType)
extern "C"  void NetPeerConfiguration_DisableMessageType_m34389850 (NetPeerConfiguration_t136603591 * __this, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lidgren.Network.NetPeerConfiguration::IsMessageTypeEnabled(Lidgren.Network.NetIncomingMessageType)
extern "C"  bool NetPeerConfiguration_IsMessageTypeEnabled_m1110774391 (NetPeerConfiguration_t136603591 * __this, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Lidgren.Network.NetUnreliableSizeBehaviour Lidgren.Network.NetPeerConfiguration::get_UnreliableSizeBehaviour()
extern "C"  int32_t NetPeerConfiguration_get_UnreliableSizeBehaviour_m2649350738 (NetPeerConfiguration_t136603591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Lidgren.Network.NetPeerConfiguration::get_NetworkThreadName()
extern "C"  String_t* NetPeerConfiguration_get_NetworkThreadName_m2092581791 (NetPeerConfiguration_t136603591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetPeerConfiguration::set_NetworkThreadName(System.String)
extern "C"  void NetPeerConfiguration_set_NetworkThreadName_m1927203884 (NetPeerConfiguration_t136603591 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Lidgren.Network.NetPeerConfiguration::get_MaximumTransmissionUnit()
extern "C"  int32_t NetPeerConfiguration_get_MaximumTransmissionUnit_m2375210687 (NetPeerConfiguration_t136603591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lidgren.Network.NetPeerConfiguration::get_UseMessageRecycling()
extern "C"  bool NetPeerConfiguration_get_UseMessageRecycling_m3846967355 (NetPeerConfiguration_t136603591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Lidgren.Network.NetPeerConfiguration::get_RecycledCacheMaxCount()
extern "C"  int32_t NetPeerConfiguration_get_RecycledCacheMaxCount_m2721437515 (NetPeerConfiguration_t136603591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetPeerConfiguration::set_AutoFlushSendQueue(System.Boolean)
extern "C"  void NetPeerConfiguration_set_AutoFlushSendQueue_m1991348126 (NetPeerConfiguration_t136603591 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lidgren.Network.NetPeerConfiguration::get_SuppressUnreliableUnorderedAcks()
extern "C"  bool NetPeerConfiguration_get_SuppressUnreliableUnorderedAcks_m1255305261 (NetPeerConfiguration_t136603591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress Lidgren.Network.NetPeerConfiguration::get_LocalAddress()
extern "C"  IPAddress_t1399971723 * NetPeerConfiguration_get_LocalAddress_m4101942348 (NetPeerConfiguration_t136603591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress Lidgren.Network.NetPeerConfiguration::get_BroadcastAddress()
extern "C"  IPAddress_t1399971723 * NetPeerConfiguration_get_BroadcastAddress_m3449879104 (NetPeerConfiguration_t136603591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Lidgren.Network.NetPeerConfiguration::get_Port()
extern "C"  int32_t NetPeerConfiguration_get_Port_m3233330308 (NetPeerConfiguration_t136603591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Lidgren.Network.NetPeerConfiguration::get_ReceiveBufferSize()
extern "C"  int32_t NetPeerConfiguration_get_ReceiveBufferSize_m3874336565 (NetPeerConfiguration_t136603591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Lidgren.Network.NetPeerConfiguration::get_SendBufferSize()
extern "C"  int32_t NetPeerConfiguration_get_SendBufferSize_m1353049686 (NetPeerConfiguration_t136603591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lidgren.Network.NetPeerConfiguration::get_AcceptIncomingConnections()
extern "C"  bool NetPeerConfiguration_get_AcceptIncomingConnections_m878586354 (NetPeerConfiguration_t136603591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetPeerConfiguration::set_AcceptIncomingConnections(System.Boolean)
extern "C"  void NetPeerConfiguration_set_AcceptIncomingConnections_m1397507705 (NetPeerConfiguration_t136603591 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lidgren.Network.NetPeerConfiguration::get_AutoExpandMTU()
extern "C"  bool NetPeerConfiguration_get_AutoExpandMTU_m1376610458 (NetPeerConfiguration_t136603591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lidgren.Network.NetPeerConfiguration::get_ExpandMTUFrequency()
extern "C"  float NetPeerConfiguration_get_ExpandMTUFrequency_m1301209541 (NetPeerConfiguration_t136603591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Lidgren.Network.NetPeerConfiguration::get_ExpandMTUFailAttempts()
extern "C"  int32_t NetPeerConfiguration_get_ExpandMTUFailAttempts_m2610030021 (NetPeerConfiguration_t136603591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
