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

// Lidgren.Network.NetClient
struct NetClient_t1212131464;
// Lidgren.Network.NetConnection
struct NetConnection_t3331492029;
// Lidgren.Network.NetPeerConfiguration
struct NetPeerConfiguration_t136603591;
// System.Net.IPEndPoint
struct IPEndPoint_t2615413766;
// Lidgren.Network.NetOutgoingMessage
struct NetOutgoingMessage_t2016542980;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Lidgren_Network_Lidgren_Network_NetPeerConfiguratio136603591.h"
#include "System_System_Net_IPEndPoint2615413766.h"
#include "Lidgren_Network_Lidgren_Network_NetOutgoingMessage2016542980.h"
#include "Lidgren_Network_Lidgren_Network_NetSendResult408708396.h"
#include "Lidgren_Network_Lidgren_Network_NetDeliveryMethod3645638710.h"

// Lidgren.Network.NetConnection Lidgren.Network.NetClient::get_ServerConnection()
extern "C"  NetConnection_t3331492029 * NetClient_get_ServerConnection_m1176301950 (NetClient_t1212131464 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetClient::.ctor(Lidgren.Network.NetPeerConfiguration)
extern "C"  void NetClient__ctor_m488755095 (NetClient_t1212131464 * __this, NetPeerConfiguration_t136603591 * ___config0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Lidgren.Network.NetConnection Lidgren.Network.NetClient::Connect(System.Net.IPEndPoint,Lidgren.Network.NetOutgoingMessage)
extern "C"  NetConnection_t3331492029 * NetClient_Connect_m901032661 (NetClient_t1212131464 * __this, IPEndPoint_t2615413766 * ___remoteEndPoint0, NetOutgoingMessage_t2016542980 * ___hailMessage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Lidgren.Network.NetSendResult Lidgren.Network.NetClient::SendMessage(Lidgren.Network.NetOutgoingMessage,Lidgren.Network.NetDeliveryMethod)
extern "C"  int32_t NetClient_SendMessage_m1500161650 (NetClient_t1212131464 * __this, NetOutgoingMessage_t2016542980 * ___msg0, uint8_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Lidgren.Network.NetClient::ToString()
extern "C"  String_t* NetClient_ToString_m3242266770 (NetClient_t1212131464 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
