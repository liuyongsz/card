#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// System.Collections.Generic.List`1<Lidgren.Network.NetConnection>
struct List_1_t2700613161;
// System.Collections.Generic.Dictionary`2<System.Net.IPEndPoint,Lidgren.Network.NetConnection>
struct Dictionary_2_t3898409514;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<Lidgren.Network.NetConnection,System.Collections.Generic.Dictionary`2<System.Int32,Lidgren.Network.ReceivedFragmentGroup>>
struct Dictionary_2_t2557578811;
// System.Threading.Thread
struct Thread_t241561612;
// System.Net.Sockets.Socket
struct Socket_t3821512045;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Lidgren.Network.NetIncomingMessage
struct NetIncomingMessage_t2014089816;
// System.Net.EndPoint
struct EndPoint_t4156119363;
// Lidgren.Network.NetUPnP
struct NetUPnP_t2794379482;
// Lidgren.Network.NetPeerConfiguration
struct NetPeerConfiguration_t136603591;
// Lidgren.Network.NetQueue`1<Lidgren.Network.NetIncomingMessage>
struct NetQueue_1_t4230780502;
// Lidgren.Network.NetQueue`1<Lidgren.Network.NetTuple`2<System.Net.IPEndPoint,Lidgren.Network.NetOutgoingMessage>>
struct NetQueue_1_t1703294902;
// Lidgren.Network.NetPeerStatistics
struct NetPeerStatistics_t101027066;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t15112628;
// System.Collections.Generic.List`1<Lidgren.Network.NetTuple`2<System.Threading.SynchronizationContext,System.Threading.SendOrPostCallback>>
struct List_1_t1255402771;
// System.Collections.Generic.List`1<Lidgren.Network.NetPeer/DelayedPacket>
struct List_1_t667328605;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t2766455145;
// Lidgren.Network.NetQueue`1<Lidgren.Network.NetOutgoingMessage>
struct NetQueue_1_t4233233666;

#include "mscorlib_System_Object2689449295.h"
#include "Lidgren_Network_Lidgren_Network_NetPeerStatus37952291.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lidgren.Network.NetPeer
struct  NetPeer_t1779390221  : public Il2CppObject
{
public:
	// System.Int32 Lidgren.Network.NetPeer::m_listenPort
	int32_t ___m_listenPort_1;
	// System.Object Lidgren.Network.NetPeer::m_messageReceivedEventCreationLock
	Il2CppObject * ___m_messageReceivedEventCreationLock_2;
	// System.Collections.Generic.List`1<Lidgren.Network.NetConnection> Lidgren.Network.NetPeer::m_connections
	List_1_t2700613161 * ___m_connections_3;
	// System.Collections.Generic.Dictionary`2<System.Net.IPEndPoint,Lidgren.Network.NetConnection> Lidgren.Network.NetPeer::m_connectionLookup
	Dictionary_2_t3898409514 * ___m_connectionLookup_4;
	// System.String Lidgren.Network.NetPeer::m_shutdownReason
	String_t* ___m_shutdownReason_5;
	// System.Int32 Lidgren.Network.NetPeer::m_lastUsedFragmentGroup
	int32_t ___m_lastUsedFragmentGroup_6;
	// System.Collections.Generic.Dictionary`2<Lidgren.Network.NetConnection,System.Collections.Generic.Dictionary`2<System.Int32,Lidgren.Network.ReceivedFragmentGroup>> Lidgren.Network.NetPeer::m_receivedFragmentGroups
	Dictionary_2_t2557578811 * ___m_receivedFragmentGroups_7;
	// Lidgren.Network.NetPeerStatus Lidgren.Network.NetPeer::m_status
	int32_t ___m_status_8;
	// System.Threading.Thread Lidgren.Network.NetPeer::m_networkThread
	Thread_t241561612 * ___m_networkThread_9;
	// System.Net.Sockets.Socket Lidgren.Network.NetPeer::m_socket
	Socket_t3821512045 * ___m_socket_10;
	// System.Byte[] Lidgren.Network.NetPeer::m_sendBuffer
	ByteU5BU5D_t3397334013* ___m_sendBuffer_11;
	// System.Byte[] Lidgren.Network.NetPeer::m_receiveBuffer
	ByteU5BU5D_t3397334013* ___m_receiveBuffer_12;
	// Lidgren.Network.NetIncomingMessage Lidgren.Network.NetPeer::m_readHelperMessage
	NetIncomingMessage_t2014089816 * ___m_readHelperMessage_13;
	// System.Net.EndPoint Lidgren.Network.NetPeer::m_senderRemote
	EndPoint_t4156119363 * ___m_senderRemote_14;
	// System.Object Lidgren.Network.NetPeer::m_initializeLock
	Il2CppObject * ___m_initializeLock_15;
	// System.UInt32 Lidgren.Network.NetPeer::m_frameCounter
	uint32_t ___m_frameCounter_16;
	// System.Double Lidgren.Network.NetPeer::m_lastHeartbeat
	double ___m_lastHeartbeat_17;
	// System.Double Lidgren.Network.NetPeer::m_lastSocketBind
	double ___m_lastSocketBind_18;
	// Lidgren.Network.NetUPnP Lidgren.Network.NetPeer::m_upnp
	NetUPnP_t2794379482 * ___m_upnp_19;
	// System.Boolean Lidgren.Network.NetPeer::m_needFlushSendQueue
	bool ___m_needFlushSendQueue_20;
	// Lidgren.Network.NetPeerConfiguration Lidgren.Network.NetPeer::m_configuration
	NetPeerConfiguration_t136603591 * ___m_configuration_21;
	// Lidgren.Network.NetQueue`1<Lidgren.Network.NetIncomingMessage> Lidgren.Network.NetPeer::m_releasedIncomingMessages
	NetQueue_1_t4230780502 * ___m_releasedIncomingMessages_22;
	// Lidgren.Network.NetQueue`1<Lidgren.Network.NetTuple`2<System.Net.IPEndPoint,Lidgren.Network.NetOutgoingMessage>> Lidgren.Network.NetPeer::m_unsentUnconnectedMessages
	NetQueue_1_t1703294902 * ___m_unsentUnconnectedMessages_23;
	// System.Collections.Generic.Dictionary`2<System.Net.IPEndPoint,Lidgren.Network.NetConnection> Lidgren.Network.NetPeer::m_handshakes
	Dictionary_2_t3898409514 * ___m_handshakes_24;
	// Lidgren.Network.NetPeerStatistics Lidgren.Network.NetPeer::m_statistics
	NetPeerStatistics_t101027066 * ___m_statistics_25;
	// System.Int64 Lidgren.Network.NetPeer::m_uniqueIdentifier
	int64_t ___m_uniqueIdentifier_26;
	// System.Boolean Lidgren.Network.NetPeer::m_executeFlushSendQueue
	bool ___m_executeFlushSendQueue_27;
	// System.Threading.AutoResetEvent Lidgren.Network.NetPeer::m_messageReceivedEvent
	AutoResetEvent_t15112628 * ___m_messageReceivedEvent_28;
	// System.Collections.Generic.List`1<Lidgren.Network.NetTuple`2<System.Threading.SynchronizationContext,System.Threading.SendOrPostCallback>> Lidgren.Network.NetPeer::m_receiveCallbacks
	List_1_t1255402771 * ___m_receiveCallbacks_29;
	// System.Collections.Generic.List`1<Lidgren.Network.NetPeer/DelayedPacket> Lidgren.Network.NetPeer::m_delayedPackets
	List_1_t667328605 * ___m_delayedPackets_30;
	// System.Collections.Generic.List`1<System.Byte[]> Lidgren.Network.NetPeer::m_storagePool
	List_1_t2766455145 * ___m_storagePool_31;
	// Lidgren.Network.NetQueue`1<Lidgren.Network.NetOutgoingMessage> Lidgren.Network.NetPeer::m_outgoingMessagesPool
	NetQueue_1_t4233233666 * ___m_outgoingMessagesPool_32;
	// Lidgren.Network.NetQueue`1<Lidgren.Network.NetIncomingMessage> Lidgren.Network.NetPeer::m_incomingMessagesPool
	NetQueue_1_t4230780502 * ___m_incomingMessagesPool_33;
	// System.Int32 Lidgren.Network.NetPeer::m_storagePoolBytes
	int32_t ___m_storagePoolBytes_34;
	// System.Int32 Lidgren.Network.NetPeer::m_storageSlotsUsedCount
	int32_t ___m_storageSlotsUsedCount_35;
	// System.Int32 Lidgren.Network.NetPeer::m_maxCacheCount
	int32_t ___m_maxCacheCount_36;

public:
	inline static int32_t get_offset_of_m_listenPort_1() { return static_cast<int32_t>(offsetof(NetPeer_t1779390221, ___m_listenPort_1)); }
	inline int32_t get_m_listenPort_1() const { return ___m_listenPort_1; }
	inline int32_t* get_address_of_m_listenPort_1() { return &___m_listenPort_1; }
	inline void set_m_listenPort_1(int32_t value)
	{
		___m_listenPort_1 = value;
	}

	inline static int32_t get_offset_of_m_messageReceivedEventCreationLock_2() { return static_cast<int32_t>(offsetof(NetPeer_t1779390221, ___m_messageReceivedEventCreationLock_2)); }
	inline Il2CppObject * get_m_messageReceivedEventCreationLock_2() const { return ___m_messageReceivedEventCreationLock_2; }
	inline Il2CppObject ** get_address_of_m_messageReceivedEventCreationLock_2() { return &___m_messageReceivedEventCreationLock_2; }
	inline void set_m_messageReceivedEventCreationLock_2(Il2CppObject * value)
	{
		___m_messageReceivedEventCreationLock_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_messageReceivedEventCreationLock_2, value);
	}

	inline static int32_t get_offset_of_m_connections_3() { return static_cast<int32_t>(offsetof(NetPeer_t1779390221, ___m_connections_3)); }
	inline List_1_t2700613161 * get_m_connections_3() const { return ___m_connections_3; }
	inline List_1_t2700613161 ** get_address_of_m_connections_3() { return &___m_connections_3; }
	inline void set_m_connections_3(List_1_t2700613161 * value)
	{
		___m_connections_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_connections_3, value);
	}

	inline static int32_t get_offset_of_m_connectionLookup_4() { return static_cast<int32_t>(offsetof(NetPeer_t1779390221, ___m_connectionLookup_4)); }
	inline Dictionary_2_t3898409514 * get_m_connectionLookup_4() const { return ___m_connectionLookup_4; }
	inline Dictionary_2_t3898409514 ** get_address_of_m_connectionLookup_4() { return &___m_connectionLookup_4; }
	inline void set_m_connectionLookup_4(Dictionary_2_t3898409514 * value)
	{
		___m_connectionLookup_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_connectionLookup_4, value);
	}

	inline static int32_t get_offset_of_m_shutdownReason_5() { return static_cast<int32_t>(offsetof(NetPeer_t1779390221, ___m_shutdownReason_5)); }
	inline String_t* get_m_shutdownReason_5() const { return ___m_shutdownReason_5; }
	inline String_t** get_address_of_m_shutdownReason_5() { return &___m_shutdownReason_5; }
	inline void set_m_shutdownReason_5(String_t* value)
	{
		___m_shutdownReason_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_shutdownReason_5, value);
	}

	inline static int32_t get_offset_of_m_lastUsedFragmentGroup_6() { return static_cast<int32_t>(offsetof(NetPeer_t1779390221, ___m_lastUsedFragmentGroup_6)); }
	inline int32_t get_m_lastUsedFragmentGroup_6() const { return ___m_lastUsedFragmentGroup_6; }
	inline int32_t* get_address_of_m_lastUsedFragmentGroup_6() { return &___m_lastUsedFragmentGroup_6; }
	inline void set_m_lastUsedFragmentGroup_6(int32_t value)
	{
		___m_lastUsedFragmentGroup_6 = value;
	}

	inline static int32_t get_offset_of_m_receivedFragmentGroups_7() { return static_cast<int32_t>(offsetof(NetPeer_t1779390221, ___m_receivedFragmentGroups_7)); }
	inline Dictionary_2_t2557578811 * get_m_receivedFragmentGroups_7() const { return ___m_receivedFragmentGroups_7; }
	inline Dictionary_2_t2557578811 ** get_address_of_m_receivedFragmentGroups_7() { return &___m_receivedFragmentGroups_7; }
	inline void set_m_receivedFragmentGroups_7(Dictionary_2_t2557578811 * value)
	{
		___m_receivedFragmentGroups_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_receivedFragmentGroups_7, value);
	}

	inline static int32_t get_offset_of_m_status_8() { return static_cast<int32_t>(offsetof(NetPeer_t1779390221, ___m_status_8)); }
	inline int32_t get_m_status_8() const { return ___m_status_8; }
	inline int32_t* get_address_of_m_status_8() { return &___m_status_8; }
	inline void set_m_status_8(int32_t value)
	{
		___m_status_8 = value;
	}

	inline static int32_t get_offset_of_m_networkThread_9() { return static_cast<int32_t>(offsetof(NetPeer_t1779390221, ___m_networkThread_9)); }
	inline Thread_t241561612 * get_m_networkThread_9() const { return ___m_networkThread_9; }
	inline Thread_t241561612 ** get_address_of_m_networkThread_9() { return &___m_networkThread_9; }
	inline void set_m_networkThread_9(Thread_t241561612 * value)
	{
		___m_networkThread_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_networkThread_9, value);
	}

	inline static int32_t get_offset_of_m_socket_10() { return static_cast<int32_t>(offsetof(NetPeer_t1779390221, ___m_socket_10)); }
	inline Socket_t3821512045 * get_m_socket_10() const { return ___m_socket_10; }
	inline Socket_t3821512045 ** get_address_of_m_socket_10() { return &___m_socket_10; }
	inline void set_m_socket_10(Socket_t3821512045 * value)
	{
		___m_socket_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_socket_10, value);
	}

	inline static int32_t get_offset_of_m_sendBuffer_11() { return static_cast<int32_t>(offsetof(NetPeer_t1779390221, ___m_sendBuffer_11)); }
	inline ByteU5BU5D_t3397334013* get_m_sendBuffer_11() const { return ___m_sendBuffer_11; }
	inline ByteU5BU5D_t3397334013** get_address_of_m_sendBuffer_11() { return &___m_sendBuffer_11; }
	inline void set_m_sendBuffer_11(ByteU5BU5D_t3397334013* value)
	{
		___m_sendBuffer_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_sendBuffer_11, value);
	}

	inline static int32_t get_offset_of_m_receiveBuffer_12() { return static_cast<int32_t>(offsetof(NetPeer_t1779390221, ___m_receiveBuffer_12)); }
	inline ByteU5BU5D_t3397334013* get_m_receiveBuffer_12() const { return ___m_receiveBuffer_12; }
	inline ByteU5BU5D_t3397334013** get_address_of_m_receiveBuffer_12() { return &___m_receiveBuffer_12; }
	inline void set_m_receiveBuffer_12(ByteU5BU5D_t3397334013* value)
	{
		___m_receiveBuffer_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_receiveBuffer_12, value);
	}

	inline static int32_t get_offset_of_m_readHelperMessage_13() { return static_cast<int32_t>(offsetof(NetPeer_t1779390221, ___m_readHelperMessage_13)); }
	inline NetIncomingMessage_t2014089816 * get_m_readHelperMessage_13() const { return ___m_readHelperMessage_13; }
	inline NetIncomingMessage_t2014089816 ** get_address_of_m_readHelperMessage_13() { return &___m_readHelperMessage_13; }
	inline void set_m_readHelperMessage_13(NetIncomingMessage_t2014089816 * value)
	{
		___m_readHelperMessage_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_readHelperMessage_13, value);
	}

	inline static int32_t get_offset_of_m_senderRemote_14() { return static_cast<int32_t>(offsetof(NetPeer_t1779390221, ___m_senderRemote_14)); }
	inline EndPoint_t4156119363 * get_m_senderRemote_14() const { return ___m_senderRemote_14; }
	inline EndPoint_t4156119363 ** get_address_of_m_senderRemote_14() { return &___m_senderRemote_14; }
	inline void set_m_senderRemote_14(EndPoint_t4156119363 * value)
	{
		___m_senderRemote_14 = value;
		Il2CppCodeGenWriteBarrier(&___m_senderRemote_14, value);
	}

	inline static int32_t get_offset_of_m_initializeLock_15() { return static_cast<int32_t>(offsetof(NetPeer_t1779390221, ___m_initializeLock_15)); }
	inline Il2CppObject * get_m_initializeLock_15() const { return ___m_initializeLock_15; }
	inline Il2CppObject ** get_address_of_m_initializeLock_15() { return &___m_initializeLock_15; }
	inline void set_m_initializeLock_15(Il2CppObject * value)
	{
		___m_initializeLock_15 = value;
		Il2CppCodeGenWriteBarrier(&___m_initializeLock_15, value);
	}

	inline static int32_t get_offset_of_m_frameCounter_16() { return static_cast<int32_t>(offsetof(NetPeer_t1779390221, ___m_frameCounter_16)); }
	inline uint32_t get_m_frameCounter_16() const { return ___m_frameCounter_16; }
	inline uint32_t* get_address_of_m_frameCounter_16() { return &___m_frameCounter_16; }
	inline void set_m_frameCounter_16(uint32_t value)
	{
		___m_frameCounter_16 = value;
	}

	inline static int32_t get_offset_of_m_lastHeartbeat_17() { return static_cast<int32_t>(offsetof(NetPeer_t1779390221, ___m_lastHeartbeat_17)); }
	inline double get_m_lastHeartbeat_17() const { return ___m_lastHeartbeat_17; }
	inline double* get_address_of_m_lastHeartbeat_17() { return &___m_lastHeartbeat_17; }
	inline void set_m_lastHeartbeat_17(double value)
	{
		___m_lastHeartbeat_17 = value;
	}

	inline static int32_t get_offset_of_m_lastSocketBind_18() { return static_cast<int32_t>(offsetof(NetPeer_t1779390221, ___m_lastSocketBind_18)); }
	inline double get_m_lastSocketBind_18() const { return ___m_lastSocketBind_18; }
	inline double* get_address_of_m_lastSocketBind_18() { return &___m_lastSocketBind_18; }
	inline void set_m_lastSocketBind_18(double value)
	{
		___m_lastSocketBind_18 = value;
	}

	inline static int32_t get_offset_of_m_upnp_19() { return static_cast<int32_t>(offsetof(NetPeer_t1779390221, ___m_upnp_19)); }
	inline NetUPnP_t2794379482 * get_m_upnp_19() const { return ___m_upnp_19; }
	inline NetUPnP_t2794379482 ** get_address_of_m_upnp_19() { return &___m_upnp_19; }
	inline void set_m_upnp_19(NetUPnP_t2794379482 * value)
	{
		___m_upnp_19 = value;
		Il2CppCodeGenWriteBarrier(&___m_upnp_19, value);
	}

	inline static int32_t get_offset_of_m_needFlushSendQueue_20() { return static_cast<int32_t>(offsetof(NetPeer_t1779390221, ___m_needFlushSendQueue_20)); }
	inline bool get_m_needFlushSendQueue_20() const { return ___m_needFlushSendQueue_20; }
	inline bool* get_address_of_m_needFlushSendQueue_20() { return &___m_needFlushSendQueue_20; }
	inline void set_m_needFlushSendQueue_20(bool value)
	{
		___m_needFlushSendQueue_20 = value;
	}

	inline static int32_t get_offset_of_m_configuration_21() { return static_cast<int32_t>(offsetof(NetPeer_t1779390221, ___m_configuration_21)); }
	inline NetPeerConfiguration_t136603591 * get_m_configuration_21() const { return ___m_configuration_21; }
	inline NetPeerConfiguration_t136603591 ** get_address_of_m_configuration_21() { return &___m_configuration_21; }
	inline void set_m_configuration_21(NetPeerConfiguration_t136603591 * value)
	{
		___m_configuration_21 = value;
		Il2CppCodeGenWriteBarrier(&___m_configuration_21, value);
	}

	inline static int32_t get_offset_of_m_releasedIncomingMessages_22() { return static_cast<int32_t>(offsetof(NetPeer_t1779390221, ___m_releasedIncomingMessages_22)); }
	inline NetQueue_1_t4230780502 * get_m_releasedIncomingMessages_22() const { return ___m_releasedIncomingMessages_22; }
	inline NetQueue_1_t4230780502 ** get_address_of_m_releasedIncomingMessages_22() { return &___m_releasedIncomingMessages_22; }
	inline void set_m_releasedIncomingMessages_22(NetQueue_1_t4230780502 * value)
	{
		___m_releasedIncomingMessages_22 = value;
		Il2CppCodeGenWriteBarrier(&___m_releasedIncomingMessages_22, value);
	}

	inline static int32_t get_offset_of_m_unsentUnconnectedMessages_23() { return static_cast<int32_t>(offsetof(NetPeer_t1779390221, ___m_unsentUnconnectedMessages_23)); }
	inline NetQueue_1_t1703294902 * get_m_unsentUnconnectedMessages_23() const { return ___m_unsentUnconnectedMessages_23; }
	inline NetQueue_1_t1703294902 ** get_address_of_m_unsentUnconnectedMessages_23() { return &___m_unsentUnconnectedMessages_23; }
	inline void set_m_unsentUnconnectedMessages_23(NetQueue_1_t1703294902 * value)
	{
		___m_unsentUnconnectedMessages_23 = value;
		Il2CppCodeGenWriteBarrier(&___m_unsentUnconnectedMessages_23, value);
	}

	inline static int32_t get_offset_of_m_handshakes_24() { return static_cast<int32_t>(offsetof(NetPeer_t1779390221, ___m_handshakes_24)); }
	inline Dictionary_2_t3898409514 * get_m_handshakes_24() const { return ___m_handshakes_24; }
	inline Dictionary_2_t3898409514 ** get_address_of_m_handshakes_24() { return &___m_handshakes_24; }
	inline void set_m_handshakes_24(Dictionary_2_t3898409514 * value)
	{
		___m_handshakes_24 = value;
		Il2CppCodeGenWriteBarrier(&___m_handshakes_24, value);
	}

	inline static int32_t get_offset_of_m_statistics_25() { return static_cast<int32_t>(offsetof(NetPeer_t1779390221, ___m_statistics_25)); }
	inline NetPeerStatistics_t101027066 * get_m_statistics_25() const { return ___m_statistics_25; }
	inline NetPeerStatistics_t101027066 ** get_address_of_m_statistics_25() { return &___m_statistics_25; }
	inline void set_m_statistics_25(NetPeerStatistics_t101027066 * value)
	{
		___m_statistics_25 = value;
		Il2CppCodeGenWriteBarrier(&___m_statistics_25, value);
	}

	inline static int32_t get_offset_of_m_uniqueIdentifier_26() { return static_cast<int32_t>(offsetof(NetPeer_t1779390221, ___m_uniqueIdentifier_26)); }
	inline int64_t get_m_uniqueIdentifier_26() const { return ___m_uniqueIdentifier_26; }
	inline int64_t* get_address_of_m_uniqueIdentifier_26() { return &___m_uniqueIdentifier_26; }
	inline void set_m_uniqueIdentifier_26(int64_t value)
	{
		___m_uniqueIdentifier_26 = value;
	}

	inline static int32_t get_offset_of_m_executeFlushSendQueue_27() { return static_cast<int32_t>(offsetof(NetPeer_t1779390221, ___m_executeFlushSendQueue_27)); }
	inline bool get_m_executeFlushSendQueue_27() const { return ___m_executeFlushSendQueue_27; }
	inline bool* get_address_of_m_executeFlushSendQueue_27() { return &___m_executeFlushSendQueue_27; }
	inline void set_m_executeFlushSendQueue_27(bool value)
	{
		___m_executeFlushSendQueue_27 = value;
	}

	inline static int32_t get_offset_of_m_messageReceivedEvent_28() { return static_cast<int32_t>(offsetof(NetPeer_t1779390221, ___m_messageReceivedEvent_28)); }
	inline AutoResetEvent_t15112628 * get_m_messageReceivedEvent_28() const { return ___m_messageReceivedEvent_28; }
	inline AutoResetEvent_t15112628 ** get_address_of_m_messageReceivedEvent_28() { return &___m_messageReceivedEvent_28; }
	inline void set_m_messageReceivedEvent_28(AutoResetEvent_t15112628 * value)
	{
		___m_messageReceivedEvent_28 = value;
		Il2CppCodeGenWriteBarrier(&___m_messageReceivedEvent_28, value);
	}

	inline static int32_t get_offset_of_m_receiveCallbacks_29() { return static_cast<int32_t>(offsetof(NetPeer_t1779390221, ___m_receiveCallbacks_29)); }
	inline List_1_t1255402771 * get_m_receiveCallbacks_29() const { return ___m_receiveCallbacks_29; }
	inline List_1_t1255402771 ** get_address_of_m_receiveCallbacks_29() { return &___m_receiveCallbacks_29; }
	inline void set_m_receiveCallbacks_29(List_1_t1255402771 * value)
	{
		___m_receiveCallbacks_29 = value;
		Il2CppCodeGenWriteBarrier(&___m_receiveCallbacks_29, value);
	}

	inline static int32_t get_offset_of_m_delayedPackets_30() { return static_cast<int32_t>(offsetof(NetPeer_t1779390221, ___m_delayedPackets_30)); }
	inline List_1_t667328605 * get_m_delayedPackets_30() const { return ___m_delayedPackets_30; }
	inline List_1_t667328605 ** get_address_of_m_delayedPackets_30() { return &___m_delayedPackets_30; }
	inline void set_m_delayedPackets_30(List_1_t667328605 * value)
	{
		___m_delayedPackets_30 = value;
		Il2CppCodeGenWriteBarrier(&___m_delayedPackets_30, value);
	}

	inline static int32_t get_offset_of_m_storagePool_31() { return static_cast<int32_t>(offsetof(NetPeer_t1779390221, ___m_storagePool_31)); }
	inline List_1_t2766455145 * get_m_storagePool_31() const { return ___m_storagePool_31; }
	inline List_1_t2766455145 ** get_address_of_m_storagePool_31() { return &___m_storagePool_31; }
	inline void set_m_storagePool_31(List_1_t2766455145 * value)
	{
		___m_storagePool_31 = value;
		Il2CppCodeGenWriteBarrier(&___m_storagePool_31, value);
	}

	inline static int32_t get_offset_of_m_outgoingMessagesPool_32() { return static_cast<int32_t>(offsetof(NetPeer_t1779390221, ___m_outgoingMessagesPool_32)); }
	inline NetQueue_1_t4233233666 * get_m_outgoingMessagesPool_32() const { return ___m_outgoingMessagesPool_32; }
	inline NetQueue_1_t4233233666 ** get_address_of_m_outgoingMessagesPool_32() { return &___m_outgoingMessagesPool_32; }
	inline void set_m_outgoingMessagesPool_32(NetQueue_1_t4233233666 * value)
	{
		___m_outgoingMessagesPool_32 = value;
		Il2CppCodeGenWriteBarrier(&___m_outgoingMessagesPool_32, value);
	}

	inline static int32_t get_offset_of_m_incomingMessagesPool_33() { return static_cast<int32_t>(offsetof(NetPeer_t1779390221, ___m_incomingMessagesPool_33)); }
	inline NetQueue_1_t4230780502 * get_m_incomingMessagesPool_33() const { return ___m_incomingMessagesPool_33; }
	inline NetQueue_1_t4230780502 ** get_address_of_m_incomingMessagesPool_33() { return &___m_incomingMessagesPool_33; }
	inline void set_m_incomingMessagesPool_33(NetQueue_1_t4230780502 * value)
	{
		___m_incomingMessagesPool_33 = value;
		Il2CppCodeGenWriteBarrier(&___m_incomingMessagesPool_33, value);
	}

	inline static int32_t get_offset_of_m_storagePoolBytes_34() { return static_cast<int32_t>(offsetof(NetPeer_t1779390221, ___m_storagePoolBytes_34)); }
	inline int32_t get_m_storagePoolBytes_34() const { return ___m_storagePoolBytes_34; }
	inline int32_t* get_address_of_m_storagePoolBytes_34() { return &___m_storagePoolBytes_34; }
	inline void set_m_storagePoolBytes_34(int32_t value)
	{
		___m_storagePoolBytes_34 = value;
	}

	inline static int32_t get_offset_of_m_storageSlotsUsedCount_35() { return static_cast<int32_t>(offsetof(NetPeer_t1779390221, ___m_storageSlotsUsedCount_35)); }
	inline int32_t get_m_storageSlotsUsedCount_35() const { return ___m_storageSlotsUsedCount_35; }
	inline int32_t* get_address_of_m_storageSlotsUsedCount_35() { return &___m_storageSlotsUsedCount_35; }
	inline void set_m_storageSlotsUsedCount_35(int32_t value)
	{
		___m_storageSlotsUsedCount_35 = value;
	}

	inline static int32_t get_offset_of_m_maxCacheCount_36() { return static_cast<int32_t>(offsetof(NetPeer_t1779390221, ___m_maxCacheCount_36)); }
	inline int32_t get_m_maxCacheCount_36() const { return ___m_maxCacheCount_36; }
	inline int32_t* get_address_of_m_maxCacheCount_36() { return &___m_maxCacheCount_36; }
	inline void set_m_maxCacheCount_36(int32_t value)
	{
		___m_maxCacheCount_36 = value;
	}
};

struct NetPeer_t1779390221_StaticFields
{
public:
	// System.Int32 Lidgren.Network.NetPeer::s_initializedPeersCount
	int32_t ___s_initializedPeersCount_0;

public:
	inline static int32_t get_offset_of_s_initializedPeersCount_0() { return static_cast<int32_t>(offsetof(NetPeer_t1779390221_StaticFields, ___s_initializedPeersCount_0)); }
	inline int32_t get_s_initializedPeersCount_0() const { return ___s_initializedPeersCount_0; }
	inline int32_t* get_address_of_s_initializedPeersCount_0() { return &___s_initializedPeersCount_0; }
	inline void set_s_initializedPeersCount_0(int32_t value)
	{
		___s_initializedPeersCount_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
