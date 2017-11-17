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

// Lidgren.Network.NetReliableSenderChannel
struct NetReliableSenderChannel_t2899775811;
// Lidgren.Network.NetConnection
struct NetConnection_t3331492029;
// Lidgren.Network.NetOutgoingMessage
struct NetOutgoingMessage_t2016542980;

#include "codegen/il2cpp-codegen.h"
#include "Lidgren_Network_Lidgren_Network_NetConnection3331492029.h"
#include "Lidgren_Network_Lidgren_Network_NetSendResult408708396.h"
#include "Lidgren_Network_Lidgren_Network_NetOutgoingMessage2016542980.h"

// System.Boolean Lidgren.Network.NetReliableSenderChannel::NeedToSendMessages()
extern "C"  bool NetReliableSenderChannel_NeedToSendMessages_m909824567 (NetReliableSenderChannel_t2899775811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetReliableSenderChannel::.ctor(Lidgren.Network.NetConnection,System.Int32)
extern "C"  void NetReliableSenderChannel__ctor_m2647494615 (NetReliableSenderChannel_t2899775811 * __this, NetConnection_t3331492029 * ___connection0, int32_t ___windowSize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Lidgren.Network.NetReliableSenderChannel::GetAllowedSends()
extern "C"  int32_t NetReliableSenderChannel_GetAllowedSends_m1553689841 (NetReliableSenderChannel_t2899775811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetReliableSenderChannel::Reset()
extern "C"  void NetReliableSenderChannel_Reset_m2812992339 (NetReliableSenderChannel_t2899775811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Lidgren.Network.NetSendResult Lidgren.Network.NetReliableSenderChannel::Enqueue(Lidgren.Network.NetOutgoingMessage)
extern "C"  int32_t NetReliableSenderChannel_Enqueue_m2590298439 (NetReliableSenderChannel_t2899775811 * __this, NetOutgoingMessage_t2016542980 * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetReliableSenderChannel::SendQueuedMessages(System.Double)
extern "C"  void NetReliableSenderChannel_SendQueuedMessages_m1852233465 (NetReliableSenderChannel_t2899775811 * __this, double ___now0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetReliableSenderChannel::ExecuteSend(System.Double,Lidgren.Network.NetOutgoingMessage)
extern "C"  void NetReliableSenderChannel_ExecuteSend_m2366433064 (NetReliableSenderChannel_t2899775811 * __this, double ___now0, NetOutgoingMessage_t2016542980 * ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetReliableSenderChannel::DestoreMessage(System.Double,System.Int32,System.Boolean&)
extern "C"  void NetReliableSenderChannel_DestoreMessage_m167941949 (NetReliableSenderChannel_t2899775811 * __this, double ___now0, int32_t ___storeIndex1, bool* ___resetTimeout2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetReliableSenderChannel::ReceiveAcknowledge(System.Double,System.Int32)
extern "C"  void NetReliableSenderChannel_ReceiveAcknowledge_m3155274464 (NetReliableSenderChannel_t2899775811 * __this, double ___now0, int32_t ___seqNr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
