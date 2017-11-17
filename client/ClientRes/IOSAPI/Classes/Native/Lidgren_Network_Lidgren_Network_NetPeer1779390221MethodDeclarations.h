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

// Lidgren.Network.NetPeer
struct NetPeer_t1779390221;
// System.Net.IPEndPoint
struct IPEndPoint_t2615413766;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t15112628;
// Lidgren.Network.NetPeerConfiguration
struct NetPeerConfiguration_t136603591;
// Lidgren.Network.NetIncomingMessage
struct NetIncomingMessage_t2014089816;
// Lidgren.Network.NetOutgoingMessage
struct NetOutgoingMessage_t2016542980;
// System.String
struct String_t;
// Lidgren.Network.NetConnection
struct NetConnection_t3331492029;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Collections.Generic.IList`1<Lidgren.Network.NetConnection>
struct IList_1_t3872432630;
// System.Net.Sockets.Socket
struct Socket_t3821512045;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_IPEndPoint2615413766.h"
#include "Lidgren_Network_Lidgren_Network_NetPeerConfiguratio136603591.h"
#include "Lidgren_Network_Lidgren_Network_NetOutgoingMessage2016542980.h"
#include "mscorlib_System_String2029220233.h"
#include "Lidgren_Network_Lidgren_Network_NetSendResult408708396.h"
#include "Lidgren_Network_Lidgren_Network_NetDeliveryMethod3645638710.h"
#include "Lidgren_Network_Lidgren_Network_NetIncomingMessage2014089816.h"
#include "Lidgren_Network_Lidgren_Network_NetMessageType191235414.h"
#include "Lidgren_Network_Lidgren_Network_NetConnection3331492029.h"
#include "Lidgren_Network_Lidgren_Network_NetIncomingMessage4279120760.h"

// System.Void Lidgren.Network.NetPeer::HandleNatIntroduction(System.Int32)
extern "C"  void NetPeer_HandleNatIntroduction_m4079714032 (NetPeer_t1779390221 * __this, int32_t ___ptr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetPeer::HandleNatPunch(System.Int32,System.Net.IPEndPoint)
extern "C"  void NetPeer_HandleNatPunch_m77480994 (NetPeer_t1779390221 * __this, int32_t ___ptr0, IPEndPoint_t2615413766 * ___senderEndPoint1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetPeer::HandleNatPunchConfirmRequest(System.Int32,System.Net.IPEndPoint)
extern "C"  void NetPeer_HandleNatPunchConfirmRequest_m3944409323 (NetPeer_t1779390221 * __this, int32_t ___ptr0, IPEndPoint_t2615413766 * ___senderEndPoint1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetPeer::HandleNatPunchConfirmed(System.Int32,System.Net.IPEndPoint)
extern "C"  void NetPeer_HandleNatPunchConfirmed_m1119557487 (NetPeer_t1779390221 * __this, int32_t ___ptr0, IPEndPoint_t2615413766 * ___senderEndPoint1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.AutoResetEvent Lidgren.Network.NetPeer::get_MessageReceivedEvent()
extern "C"  AutoResetEvent_t15112628 * NetPeer_get_MessageReceivedEvent_m4116203547 (NetPeer_t1779390221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Lidgren.Network.NetPeer::get_ConnectionsCount()
extern "C"  int32_t NetPeer_get_ConnectionsCount_m847920945 (NetPeer_t1779390221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Lidgren.Network.NetPeerConfiguration Lidgren.Network.NetPeer::get_Configuration()
extern "C"  NetPeerConfiguration_t136603591 * NetPeer_get_Configuration_m323836264 (NetPeer_t1779390221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetPeer::.ctor(Lidgren.Network.NetPeerConfiguration)
extern "C"  void NetPeer__ctor_m1244084668 (NetPeer_t1779390221 * __this, NetPeerConfiguration_t136603591 * ___config0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetPeer::Start()
extern "C"  void NetPeer_Start_m3936372496 (NetPeer_t1779390221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Lidgren.Network.NetIncomingMessage Lidgren.Network.NetPeer::ReadMessage()
extern "C"  NetIncomingMessage_t2014089816 * NetPeer_ReadMessage_m1719847425 (NetPeer_t1779390221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetPeer::SendLibrary(Lidgren.Network.NetOutgoingMessage,System.Net.IPEndPoint)
extern "C"  void NetPeer_SendLibrary_m4133093622 (NetPeer_t1779390221 * __this, NetOutgoingMessage_t2016542980 * ___msg0, IPEndPoint_t2615413766 * ___recipient1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint Lidgren.Network.NetPeer::GetNetEndPoint(System.String,System.Int32)
extern "C"  IPEndPoint_t2615413766 * NetPeer_GetNetEndPoint_m1659140620 (Il2CppObject * __this /* static, unused */, String_t* ___host0, int32_t ___port1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Lidgren.Network.NetConnection Lidgren.Network.NetPeer::Connect(System.String,System.Int32)
extern "C"  NetConnection_t3331492029 * NetPeer_Connect_m1304614920 (NetPeer_t1779390221 * __this, String_t* ___host0, int32_t ___port1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Lidgren.Network.NetConnection Lidgren.Network.NetPeer::Connect(System.Net.IPEndPoint,Lidgren.Network.NetOutgoingMessage)
extern "C"  NetConnection_t3331492029 * NetPeer_Connect_m539482134 (NetPeer_t1779390221 * __this, IPEndPoint_t2615413766 * ___remoteEndPoint0, NetOutgoingMessage_t2016542980 * ___hailMessage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetPeer::RawSend(System.Byte[],System.Int32,System.Int32,System.Net.IPEndPoint)
extern "C"  void NetPeer_RawSend_m737396087 (NetPeer_t1779390221 * __this, ByteU5BU5D_t3397334013* ___arr0, int32_t ___offset1, int32_t ___length2, IPEndPoint_t2615413766 * ___destination3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetPeer::ThrowOrLog(System.String)
extern "C"  void NetPeer_ThrowOrLog_m2301784333 (NetPeer_t1779390221 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Lidgren.Network.NetSendResult Lidgren.Network.NetPeer::SendFragmentedMessage(Lidgren.Network.NetOutgoingMessage,System.Collections.Generic.IList`1<Lidgren.Network.NetConnection>,Lidgren.Network.NetDeliveryMethod,System.Int32)
extern "C"  int32_t NetPeer_SendFragmentedMessage_m1345482430 (NetPeer_t1779390221 * __this, NetOutgoingMessage_t2016542980 * ___msg0, Il2CppObject* ___recipients1, uint8_t ___method2, int32_t ___sequenceChannel3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetPeer::HandleReleasedFragment(Lidgren.Network.NetIncomingMessage)
extern "C"  void NetPeer_HandleReleasedFragment_m1676538552 (NetPeer_t1779390221 * __this, NetIncomingMessage_t2014089816 * ___im0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket Lidgren.Network.NetPeer::get_Socket()
extern "C"  Socket_t3821512045 * NetPeer_get_Socket_m1042619742 (NetPeer_t1779390221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetPeer::ReleaseMessage(Lidgren.Network.NetIncomingMessage)
extern "C"  void NetPeer_ReleaseMessage_m3520648965 (NetPeer_t1779390221 * __this, NetIncomingMessage_t2014089816 * ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetPeer::BindSocket(System.Boolean)
extern "C"  void NetPeer_BindSocket_m3838079755 (NetPeer_t1779390221 * __this, bool ___reBind0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetPeer::InitializeNetwork()
extern "C"  void NetPeer_InitializeNetwork_m4038073148 (NetPeer_t1779390221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetPeer::NetworkLoop()
extern "C"  void NetPeer_NetworkLoop_m1488252008 (NetPeer_t1779390221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetPeer::ExecutePeerShutdown()
extern "C"  void NetPeer_ExecutePeerShutdown_m4009449549 (NetPeer_t1779390221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetPeer::Heartbeat()
extern "C"  void NetPeer_Heartbeat_m4039216740 (NetPeer_t1779390221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetPeer::FlushSendQueue()
extern "C"  void NetPeer_FlushSendQueue_m2253071797 (NetPeer_t1779390221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetPeer::HandleIncomingDiscoveryRequest(System.Double,System.Net.IPEndPoint,System.Int32,System.Int32)
extern "C"  void NetPeer_HandleIncomingDiscoveryRequest_m4170027425 (NetPeer_t1779390221 * __this, double ___now0, IPEndPoint_t2615413766 * ___senderEndPoint1, int32_t ___ptr2, int32_t ___payloadByteLength3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetPeer::HandleIncomingDiscoveryResponse(System.Double,System.Net.IPEndPoint,System.Int32,System.Int32)
extern "C"  void NetPeer_HandleIncomingDiscoveryResponse_m1395777003 (NetPeer_t1779390221 * __this, double ___now0, IPEndPoint_t2615413766 * ___senderEndPoint1, int32_t ___ptr2, int32_t ___payloadByteLength3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetPeer::ReceivedUnconnectedLibraryMessage(System.Double,System.Net.IPEndPoint,Lidgren.Network.NetMessageType,System.Int32,System.Int32)
extern "C"  void NetPeer_ReceivedUnconnectedLibraryMessage_m2683277802 (NetPeer_t1779390221 * __this, double ___now0, IPEndPoint_t2615413766 * ___senderEndPoint1, uint8_t ___tp2, int32_t ___ptr3, int32_t ___payloadByteLength4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetPeer::AcceptConnection(Lidgren.Network.NetConnection)
extern "C"  void NetPeer_AcceptConnection_m1347999118 (NetPeer_t1779390221 * __this, NetConnection_t3331492029 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetPeer::VerifyNetworkThread()
extern "C"  void NetPeer_VerifyNetworkThread_m4075953563 (NetPeer_t1779390221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Lidgren.Network.NetIncomingMessage Lidgren.Network.NetPeer::SetupReadHelperMessage(System.Int32,System.Int32)
extern "C"  NetIncomingMessage_t2014089816 * NetPeer_SetupReadHelperMessage_m906183392 (NetPeer_t1779390221 * __this, int32_t ___ptr0, int32_t ___payloadLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetPeer::SendPacket(System.Int32,System.Net.IPEndPoint,System.Int32,System.Boolean&)
extern "C"  void NetPeer_SendPacket_m625616909 (NetPeer_t1779390221 * __this, int32_t ___numBytes0, IPEndPoint_t2615413766 * ___target1, int32_t ___numMessages2, bool* ___connectionReset3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetPeer::SendDelayedPackets()
extern "C"  void NetPeer_SendDelayedPackets_m213428423 (NetPeer_t1779390221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetPeer::FlushDelayedPackets()
extern "C"  void NetPeer_FlushDelayedPackets_m2271676463 (NetPeer_t1779390221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lidgren.Network.NetPeer::ActuallySendPacket(System.Byte[],System.Int32,System.Net.IPEndPoint,System.Boolean&)
extern "C"  bool NetPeer_ActuallySendPacket_m4213106728 (NetPeer_t1779390221 * __this, ByteU5BU5D_t3397334013* ___data0, int32_t ___numBytes1, IPEndPoint_t2615413766 * ___target2, bool* ___connectionReset3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Lidgren.Network.NetPeer::SendMTUPacket(System.Int32,System.Net.IPEndPoint)
extern "C"  bool NetPeer_SendMTUPacket_m1323873705 (NetPeer_t1779390221 * __this, int32_t ___numBytes0, IPEndPoint_t2615413766 * ___target1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetPeer::LogVerbose(System.String)
extern "C"  void NetPeer_LogVerbose_m3434660420 (NetPeer_t1779390221 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetPeer::LogDebug(System.String)
extern "C"  void NetPeer_LogDebug_m2983960595 (NetPeer_t1779390221 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetPeer::LogWarning(System.String)
extern "C"  void NetPeer_LogWarning_m3266657906 (NetPeer_t1779390221 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetPeer::LogError(System.String)
extern "C"  void NetPeer_LogError_m1931099304 (NetPeer_t1779390221 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetPeer::InitializePools()
extern "C"  void NetPeer_InitializePools_m2290904387 (NetPeer_t1779390221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Lidgren.Network.NetPeer::GetStorage(System.Int32)
extern "C"  ByteU5BU5D_t3397334013* NetPeer_GetStorage_m389417990 (NetPeer_t1779390221 * __this, int32_t ___minimumCapacityInBytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetPeer::Recycle(System.Byte[])
extern "C"  void NetPeer_Recycle_m1253877116 (NetPeer_t1779390221 * __this, ByteU5BU5D_t3397334013* ___storage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Lidgren.Network.NetOutgoingMessage Lidgren.Network.NetPeer::CreateMessage()
extern "C"  NetOutgoingMessage_t2016542980 * NetPeer_CreateMessage_m4252675839 (NetPeer_t1779390221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Lidgren.Network.NetOutgoingMessage Lidgren.Network.NetPeer::CreateMessage(System.String)
extern "C"  NetOutgoingMessage_t2016542980 * NetPeer_CreateMessage_m3445598245 (NetPeer_t1779390221 * __this, String_t* ___content0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Lidgren.Network.NetOutgoingMessage Lidgren.Network.NetPeer::CreateMessage(System.Int32)
extern "C"  NetOutgoingMessage_t2016542980 * NetPeer_CreateMessage_m3328975762 (NetPeer_t1779390221 * __this, int32_t ___initialCapacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Lidgren.Network.NetIncomingMessage Lidgren.Network.NetPeer::CreateIncomingMessage(Lidgren.Network.NetIncomingMessageType,System.Byte[])
extern "C"  NetIncomingMessage_t2014089816 * NetPeer_CreateIncomingMessage_m1102215321 (NetPeer_t1779390221 * __this, int32_t ___tp0, ByteU5BU5D_t3397334013* ___useStorageData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Lidgren.Network.NetIncomingMessage Lidgren.Network.NetPeer::CreateIncomingMessage(Lidgren.Network.NetIncomingMessageType,System.Int32)
extern "C"  NetIncomingMessage_t2014089816 * NetPeer_CreateIncomingMessage_m2109562735 (NetPeer_t1779390221 * __this, int32_t ___tp0, int32_t ___minimumByteSize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetPeer::Recycle(Lidgren.Network.NetIncomingMessage)
extern "C"  void NetPeer_Recycle_m1601919902 (NetPeer_t1779390221 * __this, NetIncomingMessage_t2014089816 * ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetPeer::Recycle(Lidgren.Network.NetOutgoingMessage)
extern "C"  void NetPeer_Recycle_m2290156780 (NetPeer_t1779390221 * __this, NetOutgoingMessage_t2016542980 * ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Lidgren.Network.NetIncomingMessage Lidgren.Network.NetPeer::CreateIncomingMessage(Lidgren.Network.NetIncomingMessageType,System.String)
extern "C"  NetIncomingMessage_t2014089816 * NetPeer_CreateIncomingMessage_m226906442 (NetPeer_t1779390221 * __this, int32_t ___tp0, String_t* ___text1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Lidgren.Network.NetSendResult Lidgren.Network.NetPeer::SendMessage(Lidgren.Network.NetOutgoingMessage,Lidgren.Network.NetConnection,Lidgren.Network.NetDeliveryMethod,System.Int32)
extern "C"  int32_t NetPeer_SendMessage_m3610804500 (NetPeer_t1779390221 * __this, NetOutgoingMessage_t2016542980 * ___msg0, NetConnection_t3331492029 * ___recipient1, uint8_t ___method2, int32_t ___sequenceChannel3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Lidgren.Network.NetPeer::GetMTU(System.Collections.Generic.IList`1<Lidgren.Network.NetConnection>)
extern "C"  int32_t NetPeer_GetMTU_m2569335695 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___recipients0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
