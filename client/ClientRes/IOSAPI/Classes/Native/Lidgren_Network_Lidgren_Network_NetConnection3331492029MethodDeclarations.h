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

// Lidgren.Network.NetConnection
struct NetConnection_t3331492029;
// Lidgren.Network.NetPeer
struct NetPeer_t1779390221;
// System.Net.IPEndPoint
struct IPEndPoint_t2615413766;
// System.String
struct String_t;
// Lidgren.Network.NetOutgoingMessage
struct NetOutgoingMessage_t2016542980;
// Lidgren.Network.NetSenderChannelBase
struct NetSenderChannelBase_t3096690204;
// Lidgren.Network.NetIncomingMessage
struct NetIncomingMessage_t2014089816;
// Lidgren.Network.NetReceiverChannelBase
struct NetReceiverChannelBase_t908288882;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "Lidgren_Network_Lidgren_Network_NetConnectionStatus952199027.h"
#include "Lidgren_Network_Lidgren_Network_NetPeer1779390221.h"
#include "System_System_Net_IPEndPoint2615413766.h"
#include "mscorlib_System_String2029220233.h"
#include "Lidgren_Network_Lidgren_Network_NetOutgoingMessage2016542980.h"
#include "Lidgren_Network_Lidgren_Network_NetSendResult408708396.h"
#include "Lidgren_Network_Lidgren_Network_NetDeliveryMethod3645638710.h"
#include "Lidgren_Network_Lidgren_Network_NetMessageType191235414.h"
#include "Lidgren_Network_Lidgren_Network_NetIncomingMessage2014089816.h"

// Lidgren.Network.NetPeer Lidgren.Network.NetConnection::get_Peer()
extern "C"  NetPeer_t1779390221 * NetConnection_get_Peer_m784846870 (NetConnection_t3331492029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Lidgren.Network.NetConnectionStatus Lidgren.Network.NetConnection::get_Status()
extern "C"  int32_t NetConnection_get_Status_m2998852826 (NetConnection_t3331492029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint Lidgren.Network.NetConnection::get_RemoteEndPoint()
extern "C"  IPEndPoint_t2615413766 * NetConnection_get_RemoteEndPoint_m1562753089 (NetConnection_t3331492029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Lidgren.Network.NetConnection::GetResendDelay()
extern "C"  double NetConnection_GetResendDelay_m601539877 (NetConnection_t3331492029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetConnection::.ctor(Lidgren.Network.NetPeer,System.Net.IPEndPoint)
extern "C"  void NetConnection__ctor_m695103806 (NetConnection_t3331492029 * __this, NetPeer_t1779390221 * ___peer0, IPEndPoint_t2615413766 * ___remoteEndPoint1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetConnection::MutateEndPoint(System.Net.IPEndPoint)
extern "C"  void NetConnection_MutateEndPoint_m3264432459 (NetConnection_t3331492029 * __this, IPEndPoint_t2615413766 * ___endPoint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetConnection::ResetTimeout(System.Double)
extern "C"  void NetConnection_ResetTimeout_m3986183602 (NetConnection_t3331492029 * __this, double ___now0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetConnection::SetStatus(Lidgren.Network.NetConnectionStatus,System.String)
extern "C"  void NetConnection_SetStatus_m2040093136 (NetConnection_t3331492029 * __this, int32_t ___status0, String_t* ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetConnection::Heartbeat(System.Double,System.UInt32)
extern "C"  void NetConnection_Heartbeat_m3721342474 (NetConnection_t3331492029 * __this, double ___now0, uint32_t ___frameCounter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetConnection::QueueSendMessage(Lidgren.Network.NetOutgoingMessage,System.Int32)
extern "C"  void NetConnection_QueueSendMessage_m496824802 (NetConnection_t3331492029 * __this, NetOutgoingMessage_t2016542980 * ___om0, int32_t ___seqNr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Lidgren.Network.NetSendResult Lidgren.Network.NetConnection::SendMessage(Lidgren.Network.NetOutgoingMessage,Lidgren.Network.NetDeliveryMethod,System.Int32)
extern "C"  int32_t NetConnection_SendMessage_m179193270 (NetConnection_t3331492029 * __this, NetOutgoingMessage_t2016542980 * ___msg0, uint8_t ___method1, int32_t ___sequenceChannel2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Lidgren.Network.NetSendResult Lidgren.Network.NetConnection::EnqueueMessage(Lidgren.Network.NetOutgoingMessage,Lidgren.Network.NetDeliveryMethod,System.Int32)
extern "C"  int32_t NetConnection_EnqueueMessage_m3897273412 (NetConnection_t3331492029 * __this, NetOutgoingMessage_t2016542980 * ___msg0, uint8_t ___method1, int32_t ___sequenceChannel2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Lidgren.Network.NetSenderChannelBase Lidgren.Network.NetConnection::CreateSenderChannel(Lidgren.Network.NetMessageType)
extern "C"  NetSenderChannelBase_t3096690204 * NetConnection_CreateSenderChannel_m4115641717 (NetConnection_t3331492029 * __this, uint8_t ___tp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetConnection::ReceivedLibraryMessage(Lidgren.Network.NetMessageType,System.Int32,System.Int32)
extern "C"  void NetConnection_ReceivedLibraryMessage_m3458110466 (NetConnection_t3331492029 * __this, uint8_t ___tp0, int32_t ___ptr1, int32_t ___payloadLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetConnection::ReceivedMessage(Lidgren.Network.NetIncomingMessage)
extern "C"  void NetConnection_ReceivedMessage_m864391479 (NetConnection_t3331492029 * __this, NetIncomingMessage_t2014089816 * ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Lidgren.Network.NetReceiverChannelBase Lidgren.Network.NetConnection::CreateReceiverChannel(Lidgren.Network.NetMessageType)
extern "C"  NetReceiverChannelBase_t908288882 * NetConnection_CreateReceiverChannel_m1916476265 (NetConnection_t3331492029 * __this, uint8_t ___tp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetConnection::QueueAck(Lidgren.Network.NetMessageType,System.Int32)
extern "C"  void NetConnection_QueueAck_m3101883724 (NetConnection_t3331492029 * __this, uint8_t ___tp0, int32_t ___sequenceNumber1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetConnection::Shutdown(System.String)
extern "C"  void NetConnection_Shutdown_m3044084954 (NetConnection_t3331492029 * __this, String_t* ___reason0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Lidgren.Network.NetConnection::ToString()
extern "C"  String_t* NetConnection_ToString_m1379453827 (NetConnection_t3331492029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetConnection::UnconnectedHeartbeat(System.Double)
extern "C"  void NetConnection_UnconnectedHeartbeat_m3795858382 (NetConnection_t3331492029 * __this, double ___now0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetConnection::ExecuteDisconnect(System.String,System.Boolean)
extern "C"  void NetConnection_ExecuteDisconnect_m666203348 (NetConnection_t3331492029 * __this, String_t* ___reason0, bool ___sendByeMessage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetConnection::SendConnect(System.Double)
extern "C"  void NetConnection_SendConnect_m3418894170 (NetConnection_t3331492029 * __this, double ___now0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetConnection::SendConnectResponse(System.Double,System.Boolean)
extern "C"  void NetConnection_SendConnectResponse_m1494124902 (NetConnection_t3331492029 * __this, double ___now0, bool ___onLibraryThread1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetConnection::SendDisconnect(System.String,System.Boolean)
extern "C"  void NetConnection_SendDisconnect_m1840522381 (NetConnection_t3331492029 * __this, String_t* ___reason0, bool ___onLibraryThread1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetConnection::WriteLocalHail(Lidgren.Network.NetOutgoingMessage)
extern "C"  void NetConnection_WriteLocalHail_m1600369383 (NetConnection_t3331492029 * __this, NetOutgoingMessage_t2016542980 * ___om0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetConnection::SendConnectionEstablished()
extern "C"  void NetConnection_SendConnectionEstablished_m3743151856 (NetConnection_t3331492029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetConnection::ReceivedHandshake(System.Double,Lidgren.Network.NetMessageType,System.Int32,System.Int32)
extern "C"  void NetConnection_ReceivedHandshake_m1128410455 (NetConnection_t3331492029 * __this, double ___now0, uint8_t ___tp1, int32_t ___ptr2, int32_t ___payloadLength3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetConnection::HandleConnectResponse(System.Double,Lidgren.Network.NetMessageType,System.Int32,System.Int32)
extern "C"  void NetConnection_HandleConnectResponse_m2887867750 (NetConnection_t3331492029 * __this, double ___now0, uint8_t ___tp1, int32_t ___ptr2, int32_t ___payloadLength3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lidgren.Network.NetConnection::ValidateHandshakeData(System.Int32,System.Int32,System.Byte[]&)
extern "C"  bool NetConnection_ValidateHandshakeData_m3971068028 (NetConnection_t3331492029 * __this, int32_t ___ptr0, int32_t ___payloadLength1, ByteU5BU5D_t3397334013** ___hail2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetConnection::InitializeRemoteTimeOffset(System.Single)
extern "C"  void NetConnection_InitializeRemoteTimeOffset_m4193429857 (NetConnection_t3331492029 * __this, float ___remoteSendTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetConnection::InitializePing()
extern "C"  void NetConnection_InitializePing_m1433079092 (NetConnection_t3331492029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetConnection::SendPing()
extern "C"  void NetConnection_SendPing_m2389823252 (NetConnection_t3331492029 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetConnection::SendPong(System.Int32)
extern "C"  void NetConnection_SendPong_m2305285507 (NetConnection_t3331492029 * __this, int32_t ___pingNumber0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetConnection::ReceivedPong(System.Double,System.Int32,System.Single)
extern "C"  void NetConnection_ReceivedPong_m1658356675 (NetConnection_t3331492029 * __this, double ___now0, int32_t ___pongNumber1, float ___remoteSendTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetConnection::InitExpandMTU(System.Double)
extern "C"  void NetConnection_InitExpandMTU_m3761872672 (NetConnection_t3331492029 * __this, double ___now0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetConnection::MTUExpansionHeartbeat(System.Double)
extern "C"  void NetConnection_MTUExpansionHeartbeat_m2691120475 (NetConnection_t3331492029 * __this, double ___now0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetConnection::ExpandMTU(System.Double)
extern "C"  void NetConnection_ExpandMTU_m3901073334 (NetConnection_t3331492029 * __this, double ___now0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetConnection::SendExpandMTU(System.Double,System.Int32)
extern "C"  void NetConnection_SendExpandMTU_m2101316153 (NetConnection_t3331492029 * __this, double ___now0, int32_t ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetConnection::FinalizeMTU(System.Int32)
extern "C"  void NetConnection_FinalizeMTU_m2014645003 (NetConnection_t3331492029 * __this, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetConnection::SendMTUSuccess(System.Int32)
extern "C"  void NetConnection_SendMTUSuccess_m827100686 (NetConnection_t3331492029 * __this, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetConnection::HandleExpandMTUSuccess(System.Double,System.Int32)
extern "C"  void NetConnection_HandleExpandMTUSuccess_m3820777494 (NetConnection_t3331492029 * __this, double ___now0, int32_t ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
