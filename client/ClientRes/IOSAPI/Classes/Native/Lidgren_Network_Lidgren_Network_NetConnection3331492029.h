#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Lidgren.Network.NetPeer
struct NetPeer_t1779390221;
// Lidgren.Network.NetPeerConfiguration
struct NetPeerConfiguration_t136603591;
// System.Net.IPEndPoint
struct IPEndPoint_t2615413766;
// Lidgren.Network.NetSenderChannelBase[]
struct NetSenderChannelBaseU5BU5D_t470374901;
// Lidgren.Network.NetReceiverChannelBase[]
struct NetReceiverChannelBaseU5BU5D_t1250440839;
// Lidgren.Network.NetOutgoingMessage
struct NetOutgoingMessage_t2016542980;
// Lidgren.Network.NetQueue`1<Lidgren.Network.NetTuple`2<Lidgren.Network.NetMessageType,System.Int32>>
struct NetQueue_1_t1156019562;
// Lidgren.Network.NetConnectionStatistics
struct NetConnectionStatistics_t1235765202;
// System.String
struct String_t;
// Lidgren.Network.NetIncomingMessage
struct NetIncomingMessage_t2014089816;

#include "mscorlib_System_Object2689449295.h"
#include "Lidgren_Network_Lidgren_Network_NetConnectionStatus952199027.h"
#include "Lidgren_Network_Lidgren_Network_NetConnection_Expa3530790055.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lidgren.Network.NetConnection
struct  NetConnection_t3331492029  : public Il2CppObject
{
public:
	// Lidgren.Network.NetPeer Lidgren.Network.NetConnection::m_peer
	NetPeer_t1779390221 * ___m_peer_0;
	// Lidgren.Network.NetPeerConfiguration Lidgren.Network.NetConnection::m_peerConfiguration
	NetPeerConfiguration_t136603591 * ___m_peerConfiguration_1;
	// Lidgren.Network.NetConnectionStatus Lidgren.Network.NetConnection::m_status
	int32_t ___m_status_2;
	// Lidgren.Network.NetConnectionStatus Lidgren.Network.NetConnection::m_outputtedStatus
	int32_t ___m_outputtedStatus_3;
	// Lidgren.Network.NetConnectionStatus Lidgren.Network.NetConnection::m_visibleStatus
	int32_t ___m_visibleStatus_4;
	// System.Net.IPEndPoint Lidgren.Network.NetConnection::m_remoteEndPoint
	IPEndPoint_t2615413766 * ___m_remoteEndPoint_5;
	// Lidgren.Network.NetSenderChannelBase[] Lidgren.Network.NetConnection::m_sendChannels
	NetSenderChannelBaseU5BU5D_t470374901* ___m_sendChannels_6;
	// Lidgren.Network.NetReceiverChannelBase[] Lidgren.Network.NetConnection::m_receiveChannels
	NetReceiverChannelBaseU5BU5D_t1250440839* ___m_receiveChannels_7;
	// Lidgren.Network.NetOutgoingMessage Lidgren.Network.NetConnection::m_localHailMessage
	NetOutgoingMessage_t2016542980 * ___m_localHailMessage_8;
	// System.Int64 Lidgren.Network.NetConnection::m_remoteUniqueIdentifier
	int64_t ___m_remoteUniqueIdentifier_9;
	// Lidgren.Network.NetQueue`1<Lidgren.Network.NetTuple`2<Lidgren.Network.NetMessageType,System.Int32>> Lidgren.Network.NetConnection::m_queuedOutgoingAcks
	NetQueue_1_t1156019562 * ___m_queuedOutgoingAcks_10;
	// Lidgren.Network.NetQueue`1<Lidgren.Network.NetTuple`2<Lidgren.Network.NetMessageType,System.Int32>> Lidgren.Network.NetConnection::m_queuedIncomingAcks
	NetQueue_1_t1156019562 * ___m_queuedIncomingAcks_11;
	// System.Int32 Lidgren.Network.NetConnection::m_sendBufferWritePtr
	int32_t ___m_sendBufferWritePtr_12;
	// System.Int32 Lidgren.Network.NetConnection::m_sendBufferNumMessages
	int32_t ___m_sendBufferNumMessages_13;
	// Lidgren.Network.NetConnectionStatistics Lidgren.Network.NetConnection::m_statistics
	NetConnectionStatistics_t1235765202 * ___m_statistics_14;
	// System.Boolean Lidgren.Network.NetConnection::m_connectRequested
	bool ___m_connectRequested_15;
	// System.Boolean Lidgren.Network.NetConnection::m_disconnectRequested
	bool ___m_disconnectRequested_16;
	// System.Boolean Lidgren.Network.NetConnection::m_disconnectReqSendBye
	bool ___m_disconnectReqSendBye_17;
	// System.String Lidgren.Network.NetConnection::m_disconnectMessage
	String_t* ___m_disconnectMessage_18;
	// System.Boolean Lidgren.Network.NetConnection::m_connectionInitiator
	bool ___m_connectionInitiator_19;
	// Lidgren.Network.NetIncomingMessage Lidgren.Network.NetConnection::m_remoteHailMessage
	NetIncomingMessage_t2014089816 * ___m_remoteHailMessage_20;
	// System.Double Lidgren.Network.NetConnection::m_lastHandshakeSendTime
	double ___m_lastHandshakeSendTime_21;
	// System.Int32 Lidgren.Network.NetConnection::m_handshakeAttempts
	int32_t ___m_handshakeAttempts_22;
	// System.Double Lidgren.Network.NetConnection::m_sentPingTime
	double ___m_sentPingTime_23;
	// System.Int32 Lidgren.Network.NetConnection::m_sentPingNumber
	int32_t ___m_sentPingNumber_24;
	// System.Double Lidgren.Network.NetConnection::m_averageRoundtripTime
	double ___m_averageRoundtripTime_25;
	// System.Double Lidgren.Network.NetConnection::m_timeoutDeadline
	double ___m_timeoutDeadline_26;
	// System.Double Lidgren.Network.NetConnection::m_remoteTimeOffset
	double ___m_remoteTimeOffset_27;
	// Lidgren.Network.NetConnection/ExpandMTUStatus Lidgren.Network.NetConnection::m_expandMTUStatus
	int32_t ___m_expandMTUStatus_28;
	// System.Int32 Lidgren.Network.NetConnection::m_largestSuccessfulMTU
	int32_t ___m_largestSuccessfulMTU_29;
	// System.Int32 Lidgren.Network.NetConnection::m_smallestFailedMTU
	int32_t ___m_smallestFailedMTU_30;
	// System.Int32 Lidgren.Network.NetConnection::m_lastSentMTUAttemptSize
	int32_t ___m_lastSentMTUAttemptSize_31;
	// System.Double Lidgren.Network.NetConnection::m_lastSentMTUAttemptTime
	double ___m_lastSentMTUAttemptTime_32;
	// System.Int32 Lidgren.Network.NetConnection::m_mtuAttemptFails
	int32_t ___m_mtuAttemptFails_33;
	// System.Int32 Lidgren.Network.NetConnection::m_currentMTU
	int32_t ___m_currentMTU_34;

public:
	inline static int32_t get_offset_of_m_peer_0() { return static_cast<int32_t>(offsetof(NetConnection_t3331492029, ___m_peer_0)); }
	inline NetPeer_t1779390221 * get_m_peer_0() const { return ___m_peer_0; }
	inline NetPeer_t1779390221 ** get_address_of_m_peer_0() { return &___m_peer_0; }
	inline void set_m_peer_0(NetPeer_t1779390221 * value)
	{
		___m_peer_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_peer_0, value);
	}

	inline static int32_t get_offset_of_m_peerConfiguration_1() { return static_cast<int32_t>(offsetof(NetConnection_t3331492029, ___m_peerConfiguration_1)); }
	inline NetPeerConfiguration_t136603591 * get_m_peerConfiguration_1() const { return ___m_peerConfiguration_1; }
	inline NetPeerConfiguration_t136603591 ** get_address_of_m_peerConfiguration_1() { return &___m_peerConfiguration_1; }
	inline void set_m_peerConfiguration_1(NetPeerConfiguration_t136603591 * value)
	{
		___m_peerConfiguration_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_peerConfiguration_1, value);
	}

	inline static int32_t get_offset_of_m_status_2() { return static_cast<int32_t>(offsetof(NetConnection_t3331492029, ___m_status_2)); }
	inline int32_t get_m_status_2() const { return ___m_status_2; }
	inline int32_t* get_address_of_m_status_2() { return &___m_status_2; }
	inline void set_m_status_2(int32_t value)
	{
		___m_status_2 = value;
	}

	inline static int32_t get_offset_of_m_outputtedStatus_3() { return static_cast<int32_t>(offsetof(NetConnection_t3331492029, ___m_outputtedStatus_3)); }
	inline int32_t get_m_outputtedStatus_3() const { return ___m_outputtedStatus_3; }
	inline int32_t* get_address_of_m_outputtedStatus_3() { return &___m_outputtedStatus_3; }
	inline void set_m_outputtedStatus_3(int32_t value)
	{
		___m_outputtedStatus_3 = value;
	}

	inline static int32_t get_offset_of_m_visibleStatus_4() { return static_cast<int32_t>(offsetof(NetConnection_t3331492029, ___m_visibleStatus_4)); }
	inline int32_t get_m_visibleStatus_4() const { return ___m_visibleStatus_4; }
	inline int32_t* get_address_of_m_visibleStatus_4() { return &___m_visibleStatus_4; }
	inline void set_m_visibleStatus_4(int32_t value)
	{
		___m_visibleStatus_4 = value;
	}

	inline static int32_t get_offset_of_m_remoteEndPoint_5() { return static_cast<int32_t>(offsetof(NetConnection_t3331492029, ___m_remoteEndPoint_5)); }
	inline IPEndPoint_t2615413766 * get_m_remoteEndPoint_5() const { return ___m_remoteEndPoint_5; }
	inline IPEndPoint_t2615413766 ** get_address_of_m_remoteEndPoint_5() { return &___m_remoteEndPoint_5; }
	inline void set_m_remoteEndPoint_5(IPEndPoint_t2615413766 * value)
	{
		___m_remoteEndPoint_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_remoteEndPoint_5, value);
	}

	inline static int32_t get_offset_of_m_sendChannels_6() { return static_cast<int32_t>(offsetof(NetConnection_t3331492029, ___m_sendChannels_6)); }
	inline NetSenderChannelBaseU5BU5D_t470374901* get_m_sendChannels_6() const { return ___m_sendChannels_6; }
	inline NetSenderChannelBaseU5BU5D_t470374901** get_address_of_m_sendChannels_6() { return &___m_sendChannels_6; }
	inline void set_m_sendChannels_6(NetSenderChannelBaseU5BU5D_t470374901* value)
	{
		___m_sendChannels_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_sendChannels_6, value);
	}

	inline static int32_t get_offset_of_m_receiveChannels_7() { return static_cast<int32_t>(offsetof(NetConnection_t3331492029, ___m_receiveChannels_7)); }
	inline NetReceiverChannelBaseU5BU5D_t1250440839* get_m_receiveChannels_7() const { return ___m_receiveChannels_7; }
	inline NetReceiverChannelBaseU5BU5D_t1250440839** get_address_of_m_receiveChannels_7() { return &___m_receiveChannels_7; }
	inline void set_m_receiveChannels_7(NetReceiverChannelBaseU5BU5D_t1250440839* value)
	{
		___m_receiveChannels_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_receiveChannels_7, value);
	}

	inline static int32_t get_offset_of_m_localHailMessage_8() { return static_cast<int32_t>(offsetof(NetConnection_t3331492029, ___m_localHailMessage_8)); }
	inline NetOutgoingMessage_t2016542980 * get_m_localHailMessage_8() const { return ___m_localHailMessage_8; }
	inline NetOutgoingMessage_t2016542980 ** get_address_of_m_localHailMessage_8() { return &___m_localHailMessage_8; }
	inline void set_m_localHailMessage_8(NetOutgoingMessage_t2016542980 * value)
	{
		___m_localHailMessage_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_localHailMessage_8, value);
	}

	inline static int32_t get_offset_of_m_remoteUniqueIdentifier_9() { return static_cast<int32_t>(offsetof(NetConnection_t3331492029, ___m_remoteUniqueIdentifier_9)); }
	inline int64_t get_m_remoteUniqueIdentifier_9() const { return ___m_remoteUniqueIdentifier_9; }
	inline int64_t* get_address_of_m_remoteUniqueIdentifier_9() { return &___m_remoteUniqueIdentifier_9; }
	inline void set_m_remoteUniqueIdentifier_9(int64_t value)
	{
		___m_remoteUniqueIdentifier_9 = value;
	}

	inline static int32_t get_offset_of_m_queuedOutgoingAcks_10() { return static_cast<int32_t>(offsetof(NetConnection_t3331492029, ___m_queuedOutgoingAcks_10)); }
	inline NetQueue_1_t1156019562 * get_m_queuedOutgoingAcks_10() const { return ___m_queuedOutgoingAcks_10; }
	inline NetQueue_1_t1156019562 ** get_address_of_m_queuedOutgoingAcks_10() { return &___m_queuedOutgoingAcks_10; }
	inline void set_m_queuedOutgoingAcks_10(NetQueue_1_t1156019562 * value)
	{
		___m_queuedOutgoingAcks_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_queuedOutgoingAcks_10, value);
	}

	inline static int32_t get_offset_of_m_queuedIncomingAcks_11() { return static_cast<int32_t>(offsetof(NetConnection_t3331492029, ___m_queuedIncomingAcks_11)); }
	inline NetQueue_1_t1156019562 * get_m_queuedIncomingAcks_11() const { return ___m_queuedIncomingAcks_11; }
	inline NetQueue_1_t1156019562 ** get_address_of_m_queuedIncomingAcks_11() { return &___m_queuedIncomingAcks_11; }
	inline void set_m_queuedIncomingAcks_11(NetQueue_1_t1156019562 * value)
	{
		___m_queuedIncomingAcks_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_queuedIncomingAcks_11, value);
	}

	inline static int32_t get_offset_of_m_sendBufferWritePtr_12() { return static_cast<int32_t>(offsetof(NetConnection_t3331492029, ___m_sendBufferWritePtr_12)); }
	inline int32_t get_m_sendBufferWritePtr_12() const { return ___m_sendBufferWritePtr_12; }
	inline int32_t* get_address_of_m_sendBufferWritePtr_12() { return &___m_sendBufferWritePtr_12; }
	inline void set_m_sendBufferWritePtr_12(int32_t value)
	{
		___m_sendBufferWritePtr_12 = value;
	}

	inline static int32_t get_offset_of_m_sendBufferNumMessages_13() { return static_cast<int32_t>(offsetof(NetConnection_t3331492029, ___m_sendBufferNumMessages_13)); }
	inline int32_t get_m_sendBufferNumMessages_13() const { return ___m_sendBufferNumMessages_13; }
	inline int32_t* get_address_of_m_sendBufferNumMessages_13() { return &___m_sendBufferNumMessages_13; }
	inline void set_m_sendBufferNumMessages_13(int32_t value)
	{
		___m_sendBufferNumMessages_13 = value;
	}

	inline static int32_t get_offset_of_m_statistics_14() { return static_cast<int32_t>(offsetof(NetConnection_t3331492029, ___m_statistics_14)); }
	inline NetConnectionStatistics_t1235765202 * get_m_statistics_14() const { return ___m_statistics_14; }
	inline NetConnectionStatistics_t1235765202 ** get_address_of_m_statistics_14() { return &___m_statistics_14; }
	inline void set_m_statistics_14(NetConnectionStatistics_t1235765202 * value)
	{
		___m_statistics_14 = value;
		Il2CppCodeGenWriteBarrier(&___m_statistics_14, value);
	}

	inline static int32_t get_offset_of_m_connectRequested_15() { return static_cast<int32_t>(offsetof(NetConnection_t3331492029, ___m_connectRequested_15)); }
	inline bool get_m_connectRequested_15() const { return ___m_connectRequested_15; }
	inline bool* get_address_of_m_connectRequested_15() { return &___m_connectRequested_15; }
	inline void set_m_connectRequested_15(bool value)
	{
		___m_connectRequested_15 = value;
	}

	inline static int32_t get_offset_of_m_disconnectRequested_16() { return static_cast<int32_t>(offsetof(NetConnection_t3331492029, ___m_disconnectRequested_16)); }
	inline bool get_m_disconnectRequested_16() const { return ___m_disconnectRequested_16; }
	inline bool* get_address_of_m_disconnectRequested_16() { return &___m_disconnectRequested_16; }
	inline void set_m_disconnectRequested_16(bool value)
	{
		___m_disconnectRequested_16 = value;
	}

	inline static int32_t get_offset_of_m_disconnectReqSendBye_17() { return static_cast<int32_t>(offsetof(NetConnection_t3331492029, ___m_disconnectReqSendBye_17)); }
	inline bool get_m_disconnectReqSendBye_17() const { return ___m_disconnectReqSendBye_17; }
	inline bool* get_address_of_m_disconnectReqSendBye_17() { return &___m_disconnectReqSendBye_17; }
	inline void set_m_disconnectReqSendBye_17(bool value)
	{
		___m_disconnectReqSendBye_17 = value;
	}

	inline static int32_t get_offset_of_m_disconnectMessage_18() { return static_cast<int32_t>(offsetof(NetConnection_t3331492029, ___m_disconnectMessage_18)); }
	inline String_t* get_m_disconnectMessage_18() const { return ___m_disconnectMessage_18; }
	inline String_t** get_address_of_m_disconnectMessage_18() { return &___m_disconnectMessage_18; }
	inline void set_m_disconnectMessage_18(String_t* value)
	{
		___m_disconnectMessage_18 = value;
		Il2CppCodeGenWriteBarrier(&___m_disconnectMessage_18, value);
	}

	inline static int32_t get_offset_of_m_connectionInitiator_19() { return static_cast<int32_t>(offsetof(NetConnection_t3331492029, ___m_connectionInitiator_19)); }
	inline bool get_m_connectionInitiator_19() const { return ___m_connectionInitiator_19; }
	inline bool* get_address_of_m_connectionInitiator_19() { return &___m_connectionInitiator_19; }
	inline void set_m_connectionInitiator_19(bool value)
	{
		___m_connectionInitiator_19 = value;
	}

	inline static int32_t get_offset_of_m_remoteHailMessage_20() { return static_cast<int32_t>(offsetof(NetConnection_t3331492029, ___m_remoteHailMessage_20)); }
	inline NetIncomingMessage_t2014089816 * get_m_remoteHailMessage_20() const { return ___m_remoteHailMessage_20; }
	inline NetIncomingMessage_t2014089816 ** get_address_of_m_remoteHailMessage_20() { return &___m_remoteHailMessage_20; }
	inline void set_m_remoteHailMessage_20(NetIncomingMessage_t2014089816 * value)
	{
		___m_remoteHailMessage_20 = value;
		Il2CppCodeGenWriteBarrier(&___m_remoteHailMessage_20, value);
	}

	inline static int32_t get_offset_of_m_lastHandshakeSendTime_21() { return static_cast<int32_t>(offsetof(NetConnection_t3331492029, ___m_lastHandshakeSendTime_21)); }
	inline double get_m_lastHandshakeSendTime_21() const { return ___m_lastHandshakeSendTime_21; }
	inline double* get_address_of_m_lastHandshakeSendTime_21() { return &___m_lastHandshakeSendTime_21; }
	inline void set_m_lastHandshakeSendTime_21(double value)
	{
		___m_lastHandshakeSendTime_21 = value;
	}

	inline static int32_t get_offset_of_m_handshakeAttempts_22() { return static_cast<int32_t>(offsetof(NetConnection_t3331492029, ___m_handshakeAttempts_22)); }
	inline int32_t get_m_handshakeAttempts_22() const { return ___m_handshakeAttempts_22; }
	inline int32_t* get_address_of_m_handshakeAttempts_22() { return &___m_handshakeAttempts_22; }
	inline void set_m_handshakeAttempts_22(int32_t value)
	{
		___m_handshakeAttempts_22 = value;
	}

	inline static int32_t get_offset_of_m_sentPingTime_23() { return static_cast<int32_t>(offsetof(NetConnection_t3331492029, ___m_sentPingTime_23)); }
	inline double get_m_sentPingTime_23() const { return ___m_sentPingTime_23; }
	inline double* get_address_of_m_sentPingTime_23() { return &___m_sentPingTime_23; }
	inline void set_m_sentPingTime_23(double value)
	{
		___m_sentPingTime_23 = value;
	}

	inline static int32_t get_offset_of_m_sentPingNumber_24() { return static_cast<int32_t>(offsetof(NetConnection_t3331492029, ___m_sentPingNumber_24)); }
	inline int32_t get_m_sentPingNumber_24() const { return ___m_sentPingNumber_24; }
	inline int32_t* get_address_of_m_sentPingNumber_24() { return &___m_sentPingNumber_24; }
	inline void set_m_sentPingNumber_24(int32_t value)
	{
		___m_sentPingNumber_24 = value;
	}

	inline static int32_t get_offset_of_m_averageRoundtripTime_25() { return static_cast<int32_t>(offsetof(NetConnection_t3331492029, ___m_averageRoundtripTime_25)); }
	inline double get_m_averageRoundtripTime_25() const { return ___m_averageRoundtripTime_25; }
	inline double* get_address_of_m_averageRoundtripTime_25() { return &___m_averageRoundtripTime_25; }
	inline void set_m_averageRoundtripTime_25(double value)
	{
		___m_averageRoundtripTime_25 = value;
	}

	inline static int32_t get_offset_of_m_timeoutDeadline_26() { return static_cast<int32_t>(offsetof(NetConnection_t3331492029, ___m_timeoutDeadline_26)); }
	inline double get_m_timeoutDeadline_26() const { return ___m_timeoutDeadline_26; }
	inline double* get_address_of_m_timeoutDeadline_26() { return &___m_timeoutDeadline_26; }
	inline void set_m_timeoutDeadline_26(double value)
	{
		___m_timeoutDeadline_26 = value;
	}

	inline static int32_t get_offset_of_m_remoteTimeOffset_27() { return static_cast<int32_t>(offsetof(NetConnection_t3331492029, ___m_remoteTimeOffset_27)); }
	inline double get_m_remoteTimeOffset_27() const { return ___m_remoteTimeOffset_27; }
	inline double* get_address_of_m_remoteTimeOffset_27() { return &___m_remoteTimeOffset_27; }
	inline void set_m_remoteTimeOffset_27(double value)
	{
		___m_remoteTimeOffset_27 = value;
	}

	inline static int32_t get_offset_of_m_expandMTUStatus_28() { return static_cast<int32_t>(offsetof(NetConnection_t3331492029, ___m_expandMTUStatus_28)); }
	inline int32_t get_m_expandMTUStatus_28() const { return ___m_expandMTUStatus_28; }
	inline int32_t* get_address_of_m_expandMTUStatus_28() { return &___m_expandMTUStatus_28; }
	inline void set_m_expandMTUStatus_28(int32_t value)
	{
		___m_expandMTUStatus_28 = value;
	}

	inline static int32_t get_offset_of_m_largestSuccessfulMTU_29() { return static_cast<int32_t>(offsetof(NetConnection_t3331492029, ___m_largestSuccessfulMTU_29)); }
	inline int32_t get_m_largestSuccessfulMTU_29() const { return ___m_largestSuccessfulMTU_29; }
	inline int32_t* get_address_of_m_largestSuccessfulMTU_29() { return &___m_largestSuccessfulMTU_29; }
	inline void set_m_largestSuccessfulMTU_29(int32_t value)
	{
		___m_largestSuccessfulMTU_29 = value;
	}

	inline static int32_t get_offset_of_m_smallestFailedMTU_30() { return static_cast<int32_t>(offsetof(NetConnection_t3331492029, ___m_smallestFailedMTU_30)); }
	inline int32_t get_m_smallestFailedMTU_30() const { return ___m_smallestFailedMTU_30; }
	inline int32_t* get_address_of_m_smallestFailedMTU_30() { return &___m_smallestFailedMTU_30; }
	inline void set_m_smallestFailedMTU_30(int32_t value)
	{
		___m_smallestFailedMTU_30 = value;
	}

	inline static int32_t get_offset_of_m_lastSentMTUAttemptSize_31() { return static_cast<int32_t>(offsetof(NetConnection_t3331492029, ___m_lastSentMTUAttemptSize_31)); }
	inline int32_t get_m_lastSentMTUAttemptSize_31() const { return ___m_lastSentMTUAttemptSize_31; }
	inline int32_t* get_address_of_m_lastSentMTUAttemptSize_31() { return &___m_lastSentMTUAttemptSize_31; }
	inline void set_m_lastSentMTUAttemptSize_31(int32_t value)
	{
		___m_lastSentMTUAttemptSize_31 = value;
	}

	inline static int32_t get_offset_of_m_lastSentMTUAttemptTime_32() { return static_cast<int32_t>(offsetof(NetConnection_t3331492029, ___m_lastSentMTUAttemptTime_32)); }
	inline double get_m_lastSentMTUAttemptTime_32() const { return ___m_lastSentMTUAttemptTime_32; }
	inline double* get_address_of_m_lastSentMTUAttemptTime_32() { return &___m_lastSentMTUAttemptTime_32; }
	inline void set_m_lastSentMTUAttemptTime_32(double value)
	{
		___m_lastSentMTUAttemptTime_32 = value;
	}

	inline static int32_t get_offset_of_m_mtuAttemptFails_33() { return static_cast<int32_t>(offsetof(NetConnection_t3331492029, ___m_mtuAttemptFails_33)); }
	inline int32_t get_m_mtuAttemptFails_33() const { return ___m_mtuAttemptFails_33; }
	inline int32_t* get_address_of_m_mtuAttemptFails_33() { return &___m_mtuAttemptFails_33; }
	inline void set_m_mtuAttemptFails_33(int32_t value)
	{
		___m_mtuAttemptFails_33 = value;
	}

	inline static int32_t get_offset_of_m_currentMTU_34() { return static_cast<int32_t>(offsetof(NetConnection_t3331492029, ___m_currentMTU_34)); }
	inline int32_t get_m_currentMTU_34() const { return ___m_currentMTU_34; }
	inline int32_t* get_address_of_m_currentMTU_34() { return &___m_currentMTU_34; }
	inline void set_m_currentMTU_34(int32_t value)
	{
		___m_currentMTU_34 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
