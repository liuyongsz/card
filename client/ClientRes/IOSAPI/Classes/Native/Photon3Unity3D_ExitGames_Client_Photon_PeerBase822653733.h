#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;
// ExitGames.Client.Photon.IPhotonSocket
struct IPhotonSocket_t429031990;
// ExitGames.Client.Photon.NCommand
struct NCommand_t2133614299;
// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t250795966;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t2470135126;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>
struct Queue_1_t1477165535;
// Photon.SocketServer.Security.DiffieHellmanCryptoProvider
struct DiffieHellmanCryptoProvider_t4202550208;
// System.Random
struct Random_t1044426839;
// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>
struct LinkedList_1_t3721527771;
// ExitGames.Client.Photon.NetworkSimulationSet
struct NetworkSimulationSet_t2323123337;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.CmdLogItem>
struct Queue_1_t2194021988;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IO.MemoryStream
struct MemoryStream_t743994179;
// System.String
struct String_t;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t2218572769;

#include "mscorlib_System_Object2689449295.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP3211808698.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel980888449.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PeerBase_Con442361298.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.PeerBase
struct  PeerBase_t822653733  : public Il2CppObject
{
public:
	// System.Type ExitGames.Client.Photon.PeerBase::SocketImplementation
	Type_t * ___SocketImplementation_0;
	// ExitGames.Client.Photon.IPhotonSocket ExitGames.Client.Photon.PeerBase::rt
	IPhotonSocket_t429031990 * ___rt_1;
	// System.Int32 ExitGames.Client.Photon.PeerBase::ByteCountLastOperation
	int32_t ___ByteCountLastOperation_2;
	// System.Int32 ExitGames.Client.Photon.PeerBase::ByteCountCurrentDispatch
	int32_t ___ByteCountCurrentDispatch_3;
	// ExitGames.Client.Photon.NCommand ExitGames.Client.Photon.PeerBase::CommandInCurrentDispatch
	NCommand_t2133614299 * ___CommandInCurrentDispatch_4;
	// System.Int32 ExitGames.Client.Photon.PeerBase::TrafficPackageHeaderSize
	int32_t ___TrafficPackageHeaderSize_5;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PeerBase::TrafficStatsIncoming
	TrafficStats_t250795966 * ___TrafficStatsIncoming_6;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PeerBase::TrafficStatsOutgoing
	TrafficStats_t250795966 * ___TrafficStatsOutgoing_7;
	// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PeerBase::TrafficStatsGameLevel
	TrafficStatsGameLevel_t2470135126 * ___TrafficStatsGameLevel_8;
	// System.Boolean ExitGames.Client.Photon.PeerBase::trafficStatsEnabled
	bool ___trafficStatsEnabled_9;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PeerBase::usedProtocol
	uint8_t ___usedProtocol_10;
	// System.Boolean ExitGames.Client.Photon.PeerBase::crcEnabled
	bool ___crcEnabled_11;
	// System.Int32 ExitGames.Client.Photon.PeerBase::packetLossByCrc
	int32_t ___packetLossByCrc_12;
	// System.Int32 ExitGames.Client.Photon.PeerBase::packetLossByChallenge
	int32_t ___packetLossByChallenge_13;
	// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PeerBase::debugOut
	uint8_t ___debugOut_14;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction> ExitGames.Client.Photon.PeerBase::ActionQueue
	Queue_1_t1477165535 * ___ActionQueue_15;
	// System.Int16 ExitGames.Client.Photon.PeerBase::peerID
	int16_t ___peerID_16;
	// ExitGames.Client.Photon.PeerBase/ConnectionStateValue ExitGames.Client.Photon.PeerBase::peerConnectionState
	uint8_t ___peerConnectionState_17;
	// System.Int32 ExitGames.Client.Photon.PeerBase::serverTimeOffset
	int32_t ___serverTimeOffset_18;
	// System.Boolean ExitGames.Client.Photon.PeerBase::serverTimeOffsetIsAvailable
	bool ___serverTimeOffsetIsAvailable_19;
	// System.Int32 ExitGames.Client.Photon.PeerBase::roundTripTime
	int32_t ___roundTripTime_20;
	// System.Int32 ExitGames.Client.Photon.PeerBase::roundTripTimeVariance
	int32_t ___roundTripTimeVariance_21;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lastRoundTripTime
	int32_t ___lastRoundTripTime_22;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lowestRoundTripTime
	int32_t ___lowestRoundTripTime_23;
	// System.Int32 ExitGames.Client.Photon.PeerBase::highestRoundTripTimeVariance
	int32_t ___highestRoundTripTimeVariance_24;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timestampOfLastReceive
	int32_t ___timestampOfLastReceive_25;
	// System.Int32 ExitGames.Client.Photon.PeerBase::packetThrottleInterval
	int32_t ___packetThrottleInterval_26;
	// System.Int64 ExitGames.Client.Photon.PeerBase::bytesOut
	int64_t ___bytesOut_28;
	// System.Int64 ExitGames.Client.Photon.PeerBase::bytesIn
	int64_t ___bytesIn_29;
	// System.Int32 ExitGames.Client.Photon.PeerBase::commandBufferSize
	int32_t ___commandBufferSize_30;
	// System.Int32 ExitGames.Client.Photon.PeerBase::warningSize
	int32_t ___warningSize_31;
	// System.Int32 ExitGames.Client.Photon.PeerBase::sentCountAllowance
	int32_t ___sentCountAllowance_32;
	// System.Int32 ExitGames.Client.Photon.PeerBase::DisconnectTimeout
	int32_t ___DisconnectTimeout_33;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timePingInterval
	int32_t ___timePingInterval_34;
	// System.Byte ExitGames.Client.Photon.PeerBase::ChannelCount
	uint8_t ___ChannelCount_35;
	// System.Int32 ExitGames.Client.Photon.PeerBase::limitOfUnreliableCommands
	int32_t ___limitOfUnreliableCommands_36;
	// Photon.SocketServer.Security.DiffieHellmanCryptoProvider ExitGames.Client.Photon.PeerBase::CryptoProvider
	DiffieHellmanCryptoProvider_t4202550208 * ___CryptoProvider_37;
	// System.Random ExitGames.Client.Photon.PeerBase::lagRandomizer
	Random_t1044426839 * ___lagRandomizer_38;
	// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem> ExitGames.Client.Photon.PeerBase::NetSimListOutgoing
	LinkedList_1_t3721527771 * ___NetSimListOutgoing_39;
	// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem> ExitGames.Client.Photon.PeerBase::NetSimListIncoming
	LinkedList_1_t3721527771 * ___NetSimListIncoming_40;
	// ExitGames.Client.Photon.NetworkSimulationSet ExitGames.Client.Photon.PeerBase::networkSimulationSettings
	NetworkSimulationSet_t2323123337 * ___networkSimulationSettings_41;
	// System.Int32 ExitGames.Client.Photon.PeerBase::CommandLogSize
	int32_t ___CommandLogSize_42;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.CmdLogItem> ExitGames.Client.Photon.PeerBase::CommandLog
	Queue_1_t2194021988 * ___CommandLog_43;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.CmdLogItem> ExitGames.Client.Photon.PeerBase::InReliableLog
	Queue_1_t2194021988 * ___InReliableLog_44;
	// System.Byte[] ExitGames.Client.Photon.PeerBase::INIT_BYTES
	ByteU5BU5D_t3397334013* ___INIT_BYTES_45;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeBase
	int32_t ___timeBase_46;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeInt
	int32_t ___timeInt_47;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeoutInt
	int32_t ___timeoutInt_48;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastAckReceive
	int32_t ___timeLastAckReceive_49;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastSendAck
	int32_t ___timeLastSendAck_50;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastSendOutgoing
	int32_t ___timeLastSendOutgoing_51;
	// System.Boolean ExitGames.Client.Photon.PeerBase::ApplicationIsInitialized
	bool ___ApplicationIsInitialized_52;
	// System.Boolean ExitGames.Client.Photon.PeerBase::isEncryptionAvailable
	bool ___isEncryptionAvailable_53;
	// System.Int32 ExitGames.Client.Photon.PeerBase::outgoingCommandsInStream
	int32_t ___outgoingCommandsInStream_55;
	// System.Int32 ExitGames.Client.Photon.PeerBase::mtu
	int32_t ___mtu_56;
	// System.Int32 ExitGames.Client.Photon.PeerBase::rhttpMinConnections
	int32_t ___rhttpMinConnections_57;
	// System.Int32 ExitGames.Client.Photon.PeerBase::rhttpMaxConnections
	int32_t ___rhttpMaxConnections_58;
	// System.IO.MemoryStream ExitGames.Client.Photon.PeerBase::SerializeMemStream
	MemoryStream_t743994179 * ___SerializeMemStream_59;
	// System.String ExitGames.Client.Photon.PeerBase::<ServerAddress>k__BackingField
	String_t* ___U3CServerAddressU3Ek__BackingField_60;
	// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PeerBase::<Listener>k__BackingField
	Il2CppObject * ___U3CListenerU3Ek__BackingField_61;
	// System.Byte ExitGames.Client.Photon.PeerBase::<QuickResendAttempts>k__BackingField
	uint8_t ___U3CQuickResendAttemptsU3Ek__BackingField_62;
	// System.Boolean ExitGames.Client.Photon.PeerBase::<IsSendingOnlyAcks>k__BackingField
	bool ___U3CIsSendingOnlyAcksU3Ek__BackingField_63;

public:
	inline static int32_t get_offset_of_SocketImplementation_0() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___SocketImplementation_0)); }
	inline Type_t * get_SocketImplementation_0() const { return ___SocketImplementation_0; }
	inline Type_t ** get_address_of_SocketImplementation_0() { return &___SocketImplementation_0; }
	inline void set_SocketImplementation_0(Type_t * value)
	{
		___SocketImplementation_0 = value;
		Il2CppCodeGenWriteBarrier(&___SocketImplementation_0, value);
	}

	inline static int32_t get_offset_of_rt_1() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___rt_1)); }
	inline IPhotonSocket_t429031990 * get_rt_1() const { return ___rt_1; }
	inline IPhotonSocket_t429031990 ** get_address_of_rt_1() { return &___rt_1; }
	inline void set_rt_1(IPhotonSocket_t429031990 * value)
	{
		___rt_1 = value;
		Il2CppCodeGenWriteBarrier(&___rt_1, value);
	}

	inline static int32_t get_offset_of_ByteCountLastOperation_2() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___ByteCountLastOperation_2)); }
	inline int32_t get_ByteCountLastOperation_2() const { return ___ByteCountLastOperation_2; }
	inline int32_t* get_address_of_ByteCountLastOperation_2() { return &___ByteCountLastOperation_2; }
	inline void set_ByteCountLastOperation_2(int32_t value)
	{
		___ByteCountLastOperation_2 = value;
	}

	inline static int32_t get_offset_of_ByteCountCurrentDispatch_3() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___ByteCountCurrentDispatch_3)); }
	inline int32_t get_ByteCountCurrentDispatch_3() const { return ___ByteCountCurrentDispatch_3; }
	inline int32_t* get_address_of_ByteCountCurrentDispatch_3() { return &___ByteCountCurrentDispatch_3; }
	inline void set_ByteCountCurrentDispatch_3(int32_t value)
	{
		___ByteCountCurrentDispatch_3 = value;
	}

	inline static int32_t get_offset_of_CommandInCurrentDispatch_4() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___CommandInCurrentDispatch_4)); }
	inline NCommand_t2133614299 * get_CommandInCurrentDispatch_4() const { return ___CommandInCurrentDispatch_4; }
	inline NCommand_t2133614299 ** get_address_of_CommandInCurrentDispatch_4() { return &___CommandInCurrentDispatch_4; }
	inline void set_CommandInCurrentDispatch_4(NCommand_t2133614299 * value)
	{
		___CommandInCurrentDispatch_4 = value;
		Il2CppCodeGenWriteBarrier(&___CommandInCurrentDispatch_4, value);
	}

	inline static int32_t get_offset_of_TrafficPackageHeaderSize_5() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___TrafficPackageHeaderSize_5)); }
	inline int32_t get_TrafficPackageHeaderSize_5() const { return ___TrafficPackageHeaderSize_5; }
	inline int32_t* get_address_of_TrafficPackageHeaderSize_5() { return &___TrafficPackageHeaderSize_5; }
	inline void set_TrafficPackageHeaderSize_5(int32_t value)
	{
		___TrafficPackageHeaderSize_5 = value;
	}

	inline static int32_t get_offset_of_TrafficStatsIncoming_6() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___TrafficStatsIncoming_6)); }
	inline TrafficStats_t250795966 * get_TrafficStatsIncoming_6() const { return ___TrafficStatsIncoming_6; }
	inline TrafficStats_t250795966 ** get_address_of_TrafficStatsIncoming_6() { return &___TrafficStatsIncoming_6; }
	inline void set_TrafficStatsIncoming_6(TrafficStats_t250795966 * value)
	{
		___TrafficStatsIncoming_6 = value;
		Il2CppCodeGenWriteBarrier(&___TrafficStatsIncoming_6, value);
	}

	inline static int32_t get_offset_of_TrafficStatsOutgoing_7() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___TrafficStatsOutgoing_7)); }
	inline TrafficStats_t250795966 * get_TrafficStatsOutgoing_7() const { return ___TrafficStatsOutgoing_7; }
	inline TrafficStats_t250795966 ** get_address_of_TrafficStatsOutgoing_7() { return &___TrafficStatsOutgoing_7; }
	inline void set_TrafficStatsOutgoing_7(TrafficStats_t250795966 * value)
	{
		___TrafficStatsOutgoing_7 = value;
		Il2CppCodeGenWriteBarrier(&___TrafficStatsOutgoing_7, value);
	}

	inline static int32_t get_offset_of_TrafficStatsGameLevel_8() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___TrafficStatsGameLevel_8)); }
	inline TrafficStatsGameLevel_t2470135126 * get_TrafficStatsGameLevel_8() const { return ___TrafficStatsGameLevel_8; }
	inline TrafficStatsGameLevel_t2470135126 ** get_address_of_TrafficStatsGameLevel_8() { return &___TrafficStatsGameLevel_8; }
	inline void set_TrafficStatsGameLevel_8(TrafficStatsGameLevel_t2470135126 * value)
	{
		___TrafficStatsGameLevel_8 = value;
		Il2CppCodeGenWriteBarrier(&___TrafficStatsGameLevel_8, value);
	}

	inline static int32_t get_offset_of_trafficStatsEnabled_9() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___trafficStatsEnabled_9)); }
	inline bool get_trafficStatsEnabled_9() const { return ___trafficStatsEnabled_9; }
	inline bool* get_address_of_trafficStatsEnabled_9() { return &___trafficStatsEnabled_9; }
	inline void set_trafficStatsEnabled_9(bool value)
	{
		___trafficStatsEnabled_9 = value;
	}

	inline static int32_t get_offset_of_usedProtocol_10() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___usedProtocol_10)); }
	inline uint8_t get_usedProtocol_10() const { return ___usedProtocol_10; }
	inline uint8_t* get_address_of_usedProtocol_10() { return &___usedProtocol_10; }
	inline void set_usedProtocol_10(uint8_t value)
	{
		___usedProtocol_10 = value;
	}

	inline static int32_t get_offset_of_crcEnabled_11() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___crcEnabled_11)); }
	inline bool get_crcEnabled_11() const { return ___crcEnabled_11; }
	inline bool* get_address_of_crcEnabled_11() { return &___crcEnabled_11; }
	inline void set_crcEnabled_11(bool value)
	{
		___crcEnabled_11 = value;
	}

	inline static int32_t get_offset_of_packetLossByCrc_12() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___packetLossByCrc_12)); }
	inline int32_t get_packetLossByCrc_12() const { return ___packetLossByCrc_12; }
	inline int32_t* get_address_of_packetLossByCrc_12() { return &___packetLossByCrc_12; }
	inline void set_packetLossByCrc_12(int32_t value)
	{
		___packetLossByCrc_12 = value;
	}

	inline static int32_t get_offset_of_packetLossByChallenge_13() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___packetLossByChallenge_13)); }
	inline int32_t get_packetLossByChallenge_13() const { return ___packetLossByChallenge_13; }
	inline int32_t* get_address_of_packetLossByChallenge_13() { return &___packetLossByChallenge_13; }
	inline void set_packetLossByChallenge_13(int32_t value)
	{
		___packetLossByChallenge_13 = value;
	}

	inline static int32_t get_offset_of_debugOut_14() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___debugOut_14)); }
	inline uint8_t get_debugOut_14() const { return ___debugOut_14; }
	inline uint8_t* get_address_of_debugOut_14() { return &___debugOut_14; }
	inline void set_debugOut_14(uint8_t value)
	{
		___debugOut_14 = value;
	}

	inline static int32_t get_offset_of_ActionQueue_15() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___ActionQueue_15)); }
	inline Queue_1_t1477165535 * get_ActionQueue_15() const { return ___ActionQueue_15; }
	inline Queue_1_t1477165535 ** get_address_of_ActionQueue_15() { return &___ActionQueue_15; }
	inline void set_ActionQueue_15(Queue_1_t1477165535 * value)
	{
		___ActionQueue_15 = value;
		Il2CppCodeGenWriteBarrier(&___ActionQueue_15, value);
	}

	inline static int32_t get_offset_of_peerID_16() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___peerID_16)); }
	inline int16_t get_peerID_16() const { return ___peerID_16; }
	inline int16_t* get_address_of_peerID_16() { return &___peerID_16; }
	inline void set_peerID_16(int16_t value)
	{
		___peerID_16 = value;
	}

	inline static int32_t get_offset_of_peerConnectionState_17() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___peerConnectionState_17)); }
	inline uint8_t get_peerConnectionState_17() const { return ___peerConnectionState_17; }
	inline uint8_t* get_address_of_peerConnectionState_17() { return &___peerConnectionState_17; }
	inline void set_peerConnectionState_17(uint8_t value)
	{
		___peerConnectionState_17 = value;
	}

	inline static int32_t get_offset_of_serverTimeOffset_18() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___serverTimeOffset_18)); }
	inline int32_t get_serverTimeOffset_18() const { return ___serverTimeOffset_18; }
	inline int32_t* get_address_of_serverTimeOffset_18() { return &___serverTimeOffset_18; }
	inline void set_serverTimeOffset_18(int32_t value)
	{
		___serverTimeOffset_18 = value;
	}

	inline static int32_t get_offset_of_serverTimeOffsetIsAvailable_19() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___serverTimeOffsetIsAvailable_19)); }
	inline bool get_serverTimeOffsetIsAvailable_19() const { return ___serverTimeOffsetIsAvailable_19; }
	inline bool* get_address_of_serverTimeOffsetIsAvailable_19() { return &___serverTimeOffsetIsAvailable_19; }
	inline void set_serverTimeOffsetIsAvailable_19(bool value)
	{
		___serverTimeOffsetIsAvailable_19 = value;
	}

	inline static int32_t get_offset_of_roundTripTime_20() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___roundTripTime_20)); }
	inline int32_t get_roundTripTime_20() const { return ___roundTripTime_20; }
	inline int32_t* get_address_of_roundTripTime_20() { return &___roundTripTime_20; }
	inline void set_roundTripTime_20(int32_t value)
	{
		___roundTripTime_20 = value;
	}

	inline static int32_t get_offset_of_roundTripTimeVariance_21() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___roundTripTimeVariance_21)); }
	inline int32_t get_roundTripTimeVariance_21() const { return ___roundTripTimeVariance_21; }
	inline int32_t* get_address_of_roundTripTimeVariance_21() { return &___roundTripTimeVariance_21; }
	inline void set_roundTripTimeVariance_21(int32_t value)
	{
		___roundTripTimeVariance_21 = value;
	}

	inline static int32_t get_offset_of_lastRoundTripTime_22() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___lastRoundTripTime_22)); }
	inline int32_t get_lastRoundTripTime_22() const { return ___lastRoundTripTime_22; }
	inline int32_t* get_address_of_lastRoundTripTime_22() { return &___lastRoundTripTime_22; }
	inline void set_lastRoundTripTime_22(int32_t value)
	{
		___lastRoundTripTime_22 = value;
	}

	inline static int32_t get_offset_of_lowestRoundTripTime_23() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___lowestRoundTripTime_23)); }
	inline int32_t get_lowestRoundTripTime_23() const { return ___lowestRoundTripTime_23; }
	inline int32_t* get_address_of_lowestRoundTripTime_23() { return &___lowestRoundTripTime_23; }
	inline void set_lowestRoundTripTime_23(int32_t value)
	{
		___lowestRoundTripTime_23 = value;
	}

	inline static int32_t get_offset_of_highestRoundTripTimeVariance_24() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___highestRoundTripTimeVariance_24)); }
	inline int32_t get_highestRoundTripTimeVariance_24() const { return ___highestRoundTripTimeVariance_24; }
	inline int32_t* get_address_of_highestRoundTripTimeVariance_24() { return &___highestRoundTripTimeVariance_24; }
	inline void set_highestRoundTripTimeVariance_24(int32_t value)
	{
		___highestRoundTripTimeVariance_24 = value;
	}

	inline static int32_t get_offset_of_timestampOfLastReceive_25() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___timestampOfLastReceive_25)); }
	inline int32_t get_timestampOfLastReceive_25() const { return ___timestampOfLastReceive_25; }
	inline int32_t* get_address_of_timestampOfLastReceive_25() { return &___timestampOfLastReceive_25; }
	inline void set_timestampOfLastReceive_25(int32_t value)
	{
		___timestampOfLastReceive_25 = value;
	}

	inline static int32_t get_offset_of_packetThrottleInterval_26() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___packetThrottleInterval_26)); }
	inline int32_t get_packetThrottleInterval_26() const { return ___packetThrottleInterval_26; }
	inline int32_t* get_address_of_packetThrottleInterval_26() { return &___packetThrottleInterval_26; }
	inline void set_packetThrottleInterval_26(int32_t value)
	{
		___packetThrottleInterval_26 = value;
	}

	inline static int32_t get_offset_of_bytesOut_28() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___bytesOut_28)); }
	inline int64_t get_bytesOut_28() const { return ___bytesOut_28; }
	inline int64_t* get_address_of_bytesOut_28() { return &___bytesOut_28; }
	inline void set_bytesOut_28(int64_t value)
	{
		___bytesOut_28 = value;
	}

	inline static int32_t get_offset_of_bytesIn_29() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___bytesIn_29)); }
	inline int64_t get_bytesIn_29() const { return ___bytesIn_29; }
	inline int64_t* get_address_of_bytesIn_29() { return &___bytesIn_29; }
	inline void set_bytesIn_29(int64_t value)
	{
		___bytesIn_29 = value;
	}

	inline static int32_t get_offset_of_commandBufferSize_30() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___commandBufferSize_30)); }
	inline int32_t get_commandBufferSize_30() const { return ___commandBufferSize_30; }
	inline int32_t* get_address_of_commandBufferSize_30() { return &___commandBufferSize_30; }
	inline void set_commandBufferSize_30(int32_t value)
	{
		___commandBufferSize_30 = value;
	}

	inline static int32_t get_offset_of_warningSize_31() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___warningSize_31)); }
	inline int32_t get_warningSize_31() const { return ___warningSize_31; }
	inline int32_t* get_address_of_warningSize_31() { return &___warningSize_31; }
	inline void set_warningSize_31(int32_t value)
	{
		___warningSize_31 = value;
	}

	inline static int32_t get_offset_of_sentCountAllowance_32() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___sentCountAllowance_32)); }
	inline int32_t get_sentCountAllowance_32() const { return ___sentCountAllowance_32; }
	inline int32_t* get_address_of_sentCountAllowance_32() { return &___sentCountAllowance_32; }
	inline void set_sentCountAllowance_32(int32_t value)
	{
		___sentCountAllowance_32 = value;
	}

	inline static int32_t get_offset_of_DisconnectTimeout_33() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___DisconnectTimeout_33)); }
	inline int32_t get_DisconnectTimeout_33() const { return ___DisconnectTimeout_33; }
	inline int32_t* get_address_of_DisconnectTimeout_33() { return &___DisconnectTimeout_33; }
	inline void set_DisconnectTimeout_33(int32_t value)
	{
		___DisconnectTimeout_33 = value;
	}

	inline static int32_t get_offset_of_timePingInterval_34() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___timePingInterval_34)); }
	inline int32_t get_timePingInterval_34() const { return ___timePingInterval_34; }
	inline int32_t* get_address_of_timePingInterval_34() { return &___timePingInterval_34; }
	inline void set_timePingInterval_34(int32_t value)
	{
		___timePingInterval_34 = value;
	}

	inline static int32_t get_offset_of_ChannelCount_35() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___ChannelCount_35)); }
	inline uint8_t get_ChannelCount_35() const { return ___ChannelCount_35; }
	inline uint8_t* get_address_of_ChannelCount_35() { return &___ChannelCount_35; }
	inline void set_ChannelCount_35(uint8_t value)
	{
		___ChannelCount_35 = value;
	}

	inline static int32_t get_offset_of_limitOfUnreliableCommands_36() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___limitOfUnreliableCommands_36)); }
	inline int32_t get_limitOfUnreliableCommands_36() const { return ___limitOfUnreliableCommands_36; }
	inline int32_t* get_address_of_limitOfUnreliableCommands_36() { return &___limitOfUnreliableCommands_36; }
	inline void set_limitOfUnreliableCommands_36(int32_t value)
	{
		___limitOfUnreliableCommands_36 = value;
	}

	inline static int32_t get_offset_of_CryptoProvider_37() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___CryptoProvider_37)); }
	inline DiffieHellmanCryptoProvider_t4202550208 * get_CryptoProvider_37() const { return ___CryptoProvider_37; }
	inline DiffieHellmanCryptoProvider_t4202550208 ** get_address_of_CryptoProvider_37() { return &___CryptoProvider_37; }
	inline void set_CryptoProvider_37(DiffieHellmanCryptoProvider_t4202550208 * value)
	{
		___CryptoProvider_37 = value;
		Il2CppCodeGenWriteBarrier(&___CryptoProvider_37, value);
	}

	inline static int32_t get_offset_of_lagRandomizer_38() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___lagRandomizer_38)); }
	inline Random_t1044426839 * get_lagRandomizer_38() const { return ___lagRandomizer_38; }
	inline Random_t1044426839 ** get_address_of_lagRandomizer_38() { return &___lagRandomizer_38; }
	inline void set_lagRandomizer_38(Random_t1044426839 * value)
	{
		___lagRandomizer_38 = value;
		Il2CppCodeGenWriteBarrier(&___lagRandomizer_38, value);
	}

	inline static int32_t get_offset_of_NetSimListOutgoing_39() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___NetSimListOutgoing_39)); }
	inline LinkedList_1_t3721527771 * get_NetSimListOutgoing_39() const { return ___NetSimListOutgoing_39; }
	inline LinkedList_1_t3721527771 ** get_address_of_NetSimListOutgoing_39() { return &___NetSimListOutgoing_39; }
	inline void set_NetSimListOutgoing_39(LinkedList_1_t3721527771 * value)
	{
		___NetSimListOutgoing_39 = value;
		Il2CppCodeGenWriteBarrier(&___NetSimListOutgoing_39, value);
	}

	inline static int32_t get_offset_of_NetSimListIncoming_40() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___NetSimListIncoming_40)); }
	inline LinkedList_1_t3721527771 * get_NetSimListIncoming_40() const { return ___NetSimListIncoming_40; }
	inline LinkedList_1_t3721527771 ** get_address_of_NetSimListIncoming_40() { return &___NetSimListIncoming_40; }
	inline void set_NetSimListIncoming_40(LinkedList_1_t3721527771 * value)
	{
		___NetSimListIncoming_40 = value;
		Il2CppCodeGenWriteBarrier(&___NetSimListIncoming_40, value);
	}

	inline static int32_t get_offset_of_networkSimulationSettings_41() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___networkSimulationSettings_41)); }
	inline NetworkSimulationSet_t2323123337 * get_networkSimulationSettings_41() const { return ___networkSimulationSettings_41; }
	inline NetworkSimulationSet_t2323123337 ** get_address_of_networkSimulationSettings_41() { return &___networkSimulationSettings_41; }
	inline void set_networkSimulationSettings_41(NetworkSimulationSet_t2323123337 * value)
	{
		___networkSimulationSettings_41 = value;
		Il2CppCodeGenWriteBarrier(&___networkSimulationSettings_41, value);
	}

	inline static int32_t get_offset_of_CommandLogSize_42() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___CommandLogSize_42)); }
	inline int32_t get_CommandLogSize_42() const { return ___CommandLogSize_42; }
	inline int32_t* get_address_of_CommandLogSize_42() { return &___CommandLogSize_42; }
	inline void set_CommandLogSize_42(int32_t value)
	{
		___CommandLogSize_42 = value;
	}

	inline static int32_t get_offset_of_CommandLog_43() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___CommandLog_43)); }
	inline Queue_1_t2194021988 * get_CommandLog_43() const { return ___CommandLog_43; }
	inline Queue_1_t2194021988 ** get_address_of_CommandLog_43() { return &___CommandLog_43; }
	inline void set_CommandLog_43(Queue_1_t2194021988 * value)
	{
		___CommandLog_43 = value;
		Il2CppCodeGenWriteBarrier(&___CommandLog_43, value);
	}

	inline static int32_t get_offset_of_InReliableLog_44() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___InReliableLog_44)); }
	inline Queue_1_t2194021988 * get_InReliableLog_44() const { return ___InReliableLog_44; }
	inline Queue_1_t2194021988 ** get_address_of_InReliableLog_44() { return &___InReliableLog_44; }
	inline void set_InReliableLog_44(Queue_1_t2194021988 * value)
	{
		___InReliableLog_44 = value;
		Il2CppCodeGenWriteBarrier(&___InReliableLog_44, value);
	}

	inline static int32_t get_offset_of_INIT_BYTES_45() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___INIT_BYTES_45)); }
	inline ByteU5BU5D_t3397334013* get_INIT_BYTES_45() const { return ___INIT_BYTES_45; }
	inline ByteU5BU5D_t3397334013** get_address_of_INIT_BYTES_45() { return &___INIT_BYTES_45; }
	inline void set_INIT_BYTES_45(ByteU5BU5D_t3397334013* value)
	{
		___INIT_BYTES_45 = value;
		Il2CppCodeGenWriteBarrier(&___INIT_BYTES_45, value);
	}

	inline static int32_t get_offset_of_timeBase_46() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___timeBase_46)); }
	inline int32_t get_timeBase_46() const { return ___timeBase_46; }
	inline int32_t* get_address_of_timeBase_46() { return &___timeBase_46; }
	inline void set_timeBase_46(int32_t value)
	{
		___timeBase_46 = value;
	}

	inline static int32_t get_offset_of_timeInt_47() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___timeInt_47)); }
	inline int32_t get_timeInt_47() const { return ___timeInt_47; }
	inline int32_t* get_address_of_timeInt_47() { return &___timeInt_47; }
	inline void set_timeInt_47(int32_t value)
	{
		___timeInt_47 = value;
	}

	inline static int32_t get_offset_of_timeoutInt_48() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___timeoutInt_48)); }
	inline int32_t get_timeoutInt_48() const { return ___timeoutInt_48; }
	inline int32_t* get_address_of_timeoutInt_48() { return &___timeoutInt_48; }
	inline void set_timeoutInt_48(int32_t value)
	{
		___timeoutInt_48 = value;
	}

	inline static int32_t get_offset_of_timeLastAckReceive_49() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___timeLastAckReceive_49)); }
	inline int32_t get_timeLastAckReceive_49() const { return ___timeLastAckReceive_49; }
	inline int32_t* get_address_of_timeLastAckReceive_49() { return &___timeLastAckReceive_49; }
	inline void set_timeLastAckReceive_49(int32_t value)
	{
		___timeLastAckReceive_49 = value;
	}

	inline static int32_t get_offset_of_timeLastSendAck_50() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___timeLastSendAck_50)); }
	inline int32_t get_timeLastSendAck_50() const { return ___timeLastSendAck_50; }
	inline int32_t* get_address_of_timeLastSendAck_50() { return &___timeLastSendAck_50; }
	inline void set_timeLastSendAck_50(int32_t value)
	{
		___timeLastSendAck_50 = value;
	}

	inline static int32_t get_offset_of_timeLastSendOutgoing_51() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___timeLastSendOutgoing_51)); }
	inline int32_t get_timeLastSendOutgoing_51() const { return ___timeLastSendOutgoing_51; }
	inline int32_t* get_address_of_timeLastSendOutgoing_51() { return &___timeLastSendOutgoing_51; }
	inline void set_timeLastSendOutgoing_51(int32_t value)
	{
		___timeLastSendOutgoing_51 = value;
	}

	inline static int32_t get_offset_of_ApplicationIsInitialized_52() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___ApplicationIsInitialized_52)); }
	inline bool get_ApplicationIsInitialized_52() const { return ___ApplicationIsInitialized_52; }
	inline bool* get_address_of_ApplicationIsInitialized_52() { return &___ApplicationIsInitialized_52; }
	inline void set_ApplicationIsInitialized_52(bool value)
	{
		___ApplicationIsInitialized_52 = value;
	}

	inline static int32_t get_offset_of_isEncryptionAvailable_53() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___isEncryptionAvailable_53)); }
	inline bool get_isEncryptionAvailable_53() const { return ___isEncryptionAvailable_53; }
	inline bool* get_address_of_isEncryptionAvailable_53() { return &___isEncryptionAvailable_53; }
	inline void set_isEncryptionAvailable_53(bool value)
	{
		___isEncryptionAvailable_53 = value;
	}

	inline static int32_t get_offset_of_outgoingCommandsInStream_55() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___outgoingCommandsInStream_55)); }
	inline int32_t get_outgoingCommandsInStream_55() const { return ___outgoingCommandsInStream_55; }
	inline int32_t* get_address_of_outgoingCommandsInStream_55() { return &___outgoingCommandsInStream_55; }
	inline void set_outgoingCommandsInStream_55(int32_t value)
	{
		___outgoingCommandsInStream_55 = value;
	}

	inline static int32_t get_offset_of_mtu_56() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___mtu_56)); }
	inline int32_t get_mtu_56() const { return ___mtu_56; }
	inline int32_t* get_address_of_mtu_56() { return &___mtu_56; }
	inline void set_mtu_56(int32_t value)
	{
		___mtu_56 = value;
	}

	inline static int32_t get_offset_of_rhttpMinConnections_57() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___rhttpMinConnections_57)); }
	inline int32_t get_rhttpMinConnections_57() const { return ___rhttpMinConnections_57; }
	inline int32_t* get_address_of_rhttpMinConnections_57() { return &___rhttpMinConnections_57; }
	inline void set_rhttpMinConnections_57(int32_t value)
	{
		___rhttpMinConnections_57 = value;
	}

	inline static int32_t get_offset_of_rhttpMaxConnections_58() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___rhttpMaxConnections_58)); }
	inline int32_t get_rhttpMaxConnections_58() const { return ___rhttpMaxConnections_58; }
	inline int32_t* get_address_of_rhttpMaxConnections_58() { return &___rhttpMaxConnections_58; }
	inline void set_rhttpMaxConnections_58(int32_t value)
	{
		___rhttpMaxConnections_58 = value;
	}

	inline static int32_t get_offset_of_SerializeMemStream_59() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___SerializeMemStream_59)); }
	inline MemoryStream_t743994179 * get_SerializeMemStream_59() const { return ___SerializeMemStream_59; }
	inline MemoryStream_t743994179 ** get_address_of_SerializeMemStream_59() { return &___SerializeMemStream_59; }
	inline void set_SerializeMemStream_59(MemoryStream_t743994179 * value)
	{
		___SerializeMemStream_59 = value;
		Il2CppCodeGenWriteBarrier(&___SerializeMemStream_59, value);
	}

	inline static int32_t get_offset_of_U3CServerAddressU3Ek__BackingField_60() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___U3CServerAddressU3Ek__BackingField_60)); }
	inline String_t* get_U3CServerAddressU3Ek__BackingField_60() const { return ___U3CServerAddressU3Ek__BackingField_60; }
	inline String_t** get_address_of_U3CServerAddressU3Ek__BackingField_60() { return &___U3CServerAddressU3Ek__BackingField_60; }
	inline void set_U3CServerAddressU3Ek__BackingField_60(String_t* value)
	{
		___U3CServerAddressU3Ek__BackingField_60 = value;
		Il2CppCodeGenWriteBarrier(&___U3CServerAddressU3Ek__BackingField_60, value);
	}

	inline static int32_t get_offset_of_U3CListenerU3Ek__BackingField_61() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___U3CListenerU3Ek__BackingField_61)); }
	inline Il2CppObject * get_U3CListenerU3Ek__BackingField_61() const { return ___U3CListenerU3Ek__BackingField_61; }
	inline Il2CppObject ** get_address_of_U3CListenerU3Ek__BackingField_61() { return &___U3CListenerU3Ek__BackingField_61; }
	inline void set_U3CListenerU3Ek__BackingField_61(Il2CppObject * value)
	{
		___U3CListenerU3Ek__BackingField_61 = value;
		Il2CppCodeGenWriteBarrier(&___U3CListenerU3Ek__BackingField_61, value);
	}

	inline static int32_t get_offset_of_U3CQuickResendAttemptsU3Ek__BackingField_62() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___U3CQuickResendAttemptsU3Ek__BackingField_62)); }
	inline uint8_t get_U3CQuickResendAttemptsU3Ek__BackingField_62() const { return ___U3CQuickResendAttemptsU3Ek__BackingField_62; }
	inline uint8_t* get_address_of_U3CQuickResendAttemptsU3Ek__BackingField_62() { return &___U3CQuickResendAttemptsU3Ek__BackingField_62; }
	inline void set_U3CQuickResendAttemptsU3Ek__BackingField_62(uint8_t value)
	{
		___U3CQuickResendAttemptsU3Ek__BackingField_62 = value;
	}

	inline static int32_t get_offset_of_U3CIsSendingOnlyAcksU3Ek__BackingField_63() { return static_cast<int32_t>(offsetof(PeerBase_t822653733, ___U3CIsSendingOnlyAcksU3Ek__BackingField_63)); }
	inline bool get_U3CIsSendingOnlyAcksU3Ek__BackingField_63() const { return ___U3CIsSendingOnlyAcksU3Ek__BackingField_63; }
	inline bool* get_address_of_U3CIsSendingOnlyAcksU3Ek__BackingField_63() { return &___U3CIsSendingOnlyAcksU3Ek__BackingField_63; }
	inline void set_U3CIsSendingOnlyAcksU3Ek__BackingField_63(bool value)
	{
		___U3CIsSendingOnlyAcksU3Ek__BackingField_63 = value;
	}
};

struct PeerBase_t822653733_StaticFields
{
public:
	// System.Int16 ExitGames.Client.Photon.PeerBase::peerCount
	int16_t ___peerCount_27;
	// System.Int32 ExitGames.Client.Photon.PeerBase::outgoingStreamBufferSize
	int32_t ___outgoingStreamBufferSize_54;

public:
	inline static int32_t get_offset_of_peerCount_27() { return static_cast<int32_t>(offsetof(PeerBase_t822653733_StaticFields, ___peerCount_27)); }
	inline int16_t get_peerCount_27() const { return ___peerCount_27; }
	inline int16_t* get_address_of_peerCount_27() { return &___peerCount_27; }
	inline void set_peerCount_27(int16_t value)
	{
		___peerCount_27 = value;
	}

	inline static int32_t get_offset_of_outgoingStreamBufferSize_54() { return static_cast<int32_t>(offsetof(PeerBase_t822653733_StaticFields, ___outgoingStreamBufferSize_54)); }
	inline int32_t get_outgoingStreamBufferSize_54() const { return ___outgoingStreamBufferSize_54; }
	inline int32_t* get_address_of_outgoingStreamBufferSize_54() { return &___outgoingStreamBufferSize_54; }
	inline void set_outgoingStreamBufferSize_54(int32_t value)
	{
		___outgoingStreamBufferSize_54 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
