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

// Lidgren.Network.NetUnreliableSenderChannel
struct NetUnreliableSenderChannel_t1909769502;
// Lidgren.Network.NetConnection
struct NetConnection_t3331492029;
// Lidgren.Network.NetOutgoingMessage
struct NetOutgoingMessage_t2016542980;

#include "codegen/il2cpp-codegen.h"
#include "Lidgren_Network_Lidgren_Network_NetConnection3331492029.h"
#include "Lidgren_Network_Lidgren_Network_NetDeliveryMethod3645638710.h"
#include "Lidgren_Network_Lidgren_Network_NetSendResult408708396.h"
#include "Lidgren_Network_Lidgren_Network_NetOutgoingMessage2016542980.h"

// System.Void Lidgren.Network.NetUnreliableSenderChannel::.ctor(Lidgren.Network.NetConnection,System.Int32,Lidgren.Network.NetDeliveryMethod)
extern "C"  void NetUnreliableSenderChannel__ctor_m2332360361 (NetUnreliableSenderChannel_t1909769502 * __this, NetConnection_t3331492029 * ___connection0, int32_t ___windowSize1, uint8_t ___method2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Lidgren.Network.NetUnreliableSenderChannel::GetAllowedSends()
extern "C"  int32_t NetUnreliableSenderChannel_GetAllowedSends_m4022653188 (NetUnreliableSenderChannel_t1909769502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetUnreliableSenderChannel::Reset()
extern "C"  void NetUnreliableSenderChannel_Reset_m2705274180 (NetUnreliableSenderChannel_t1909769502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Lidgren.Network.NetSendResult Lidgren.Network.NetUnreliableSenderChannel::Enqueue(Lidgren.Network.NetOutgoingMessage)
extern "C"  int32_t NetUnreliableSenderChannel_Enqueue_m3305376402 (NetUnreliableSenderChannel_t1909769502 * __this, NetOutgoingMessage_t2016542980 * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetUnreliableSenderChannel::SendQueuedMessages(System.Double)
extern "C"  void NetUnreliableSenderChannel_SendQueuedMessages_m1720590766 (NetUnreliableSenderChannel_t1909769502 * __this, double ___now0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetUnreliableSenderChannel::ExecuteSend(Lidgren.Network.NetOutgoingMessage)
extern "C"  void NetUnreliableSenderChannel_ExecuteSend_m3640853513 (NetUnreliableSenderChannel_t1909769502 * __this, NetOutgoingMessage_t2016542980 * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetUnreliableSenderChannel::ReceiveAcknowledge(System.Double,System.Int32)
extern "C"  void NetUnreliableSenderChannel_ReceiveAcknowledge_m3887587101 (NetUnreliableSenderChannel_t1909769502 * __this, double ___now0, int32_t ___seqNr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
