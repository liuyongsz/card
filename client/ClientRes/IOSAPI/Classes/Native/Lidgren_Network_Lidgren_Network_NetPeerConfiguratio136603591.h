#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Net.IPAddress
struct IPAddress_t1399971723;

#include "mscorlib_System_Object2689449295.h"
#include "Lidgren_Network_Lidgren_Network_NetUnreliableSizeB2550812882.h"
#include "Lidgren_Network_Lidgren_Network_NetIncomingMessage4279120760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lidgren.Network.NetPeerConfiguration
struct  NetPeerConfiguration_t136603591  : public Il2CppObject
{
public:
	// System.Boolean Lidgren.Network.NetPeerConfiguration::m_isLocked
	bool ___m_isLocked_0;
	// System.String Lidgren.Network.NetPeerConfiguration::m_appIdentifier
	String_t* ___m_appIdentifier_1;
	// System.String Lidgren.Network.NetPeerConfiguration::m_networkThreadName
	String_t* ___m_networkThreadName_2;
	// System.Net.IPAddress Lidgren.Network.NetPeerConfiguration::m_localAddress
	IPAddress_t1399971723 * ___m_localAddress_3;
	// System.Net.IPAddress Lidgren.Network.NetPeerConfiguration::m_broadcastAddress
	IPAddress_t1399971723 * ___m_broadcastAddress_4;
	// System.Boolean Lidgren.Network.NetPeerConfiguration::m_acceptIncomingConnections
	bool ___m_acceptIncomingConnections_5;
	// System.Int32 Lidgren.Network.NetPeerConfiguration::m_maximumConnections
	int32_t ___m_maximumConnections_6;
	// System.Int32 Lidgren.Network.NetPeerConfiguration::m_defaultOutgoingMessageCapacity
	int32_t ___m_defaultOutgoingMessageCapacity_7;
	// System.Single Lidgren.Network.NetPeerConfiguration::m_pingInterval
	float ___m_pingInterval_8;
	// System.Boolean Lidgren.Network.NetPeerConfiguration::m_useMessageRecycling
	bool ___m_useMessageRecycling_9;
	// System.Int32 Lidgren.Network.NetPeerConfiguration::m_recycledCacheMaxCount
	int32_t ___m_recycledCacheMaxCount_10;
	// System.Single Lidgren.Network.NetPeerConfiguration::m_connectionTimeout
	float ___m_connectionTimeout_11;
	// System.Boolean Lidgren.Network.NetPeerConfiguration::m_enableUPnP
	bool ___m_enableUPnP_12;
	// System.Boolean Lidgren.Network.NetPeerConfiguration::m_autoFlushSendQueue
	bool ___m_autoFlushSendQueue_13;
	// Lidgren.Network.NetUnreliableSizeBehaviour Lidgren.Network.NetPeerConfiguration::m_unreliableSizeBehaviour
	int32_t ___m_unreliableSizeBehaviour_14;
	// System.Boolean Lidgren.Network.NetPeerConfiguration::m_suppressUnreliableUnorderedAcks
	bool ___m_suppressUnreliableUnorderedAcks_15;
	// Lidgren.Network.NetIncomingMessageType Lidgren.Network.NetPeerConfiguration::m_disabledTypes
	int32_t ___m_disabledTypes_16;
	// System.Int32 Lidgren.Network.NetPeerConfiguration::m_port
	int32_t ___m_port_17;
	// System.Int32 Lidgren.Network.NetPeerConfiguration::m_receiveBufferSize
	int32_t ___m_receiveBufferSize_18;
	// System.Int32 Lidgren.Network.NetPeerConfiguration::m_sendBufferSize
	int32_t ___m_sendBufferSize_19;
	// System.Single Lidgren.Network.NetPeerConfiguration::m_resendHandshakeInterval
	float ___m_resendHandshakeInterval_20;
	// System.Int32 Lidgren.Network.NetPeerConfiguration::m_maximumHandshakeAttempts
	int32_t ___m_maximumHandshakeAttempts_21;
	// System.Single Lidgren.Network.NetPeerConfiguration::m_loss
	float ___m_loss_22;
	// System.Single Lidgren.Network.NetPeerConfiguration::m_duplicates
	float ___m_duplicates_23;
	// System.Single Lidgren.Network.NetPeerConfiguration::m_minimumOneWayLatency
	float ___m_minimumOneWayLatency_24;
	// System.Single Lidgren.Network.NetPeerConfiguration::m_randomOneWayLatency
	float ___m_randomOneWayLatency_25;
	// System.Int32 Lidgren.Network.NetPeerConfiguration::m_maximumTransmissionUnit
	int32_t ___m_maximumTransmissionUnit_26;
	// System.Boolean Lidgren.Network.NetPeerConfiguration::m_autoExpandMTU
	bool ___m_autoExpandMTU_27;
	// System.Single Lidgren.Network.NetPeerConfiguration::m_expandMTUFrequency
	float ___m_expandMTUFrequency_28;
	// System.Int32 Lidgren.Network.NetPeerConfiguration::m_expandMTUFailAttempts
	int32_t ___m_expandMTUFailAttempts_29;

public:
	inline static int32_t get_offset_of_m_isLocked_0() { return static_cast<int32_t>(offsetof(NetPeerConfiguration_t136603591, ___m_isLocked_0)); }
	inline bool get_m_isLocked_0() const { return ___m_isLocked_0; }
	inline bool* get_address_of_m_isLocked_0() { return &___m_isLocked_0; }
	inline void set_m_isLocked_0(bool value)
	{
		___m_isLocked_0 = value;
	}

	inline static int32_t get_offset_of_m_appIdentifier_1() { return static_cast<int32_t>(offsetof(NetPeerConfiguration_t136603591, ___m_appIdentifier_1)); }
	inline String_t* get_m_appIdentifier_1() const { return ___m_appIdentifier_1; }
	inline String_t** get_address_of_m_appIdentifier_1() { return &___m_appIdentifier_1; }
	inline void set_m_appIdentifier_1(String_t* value)
	{
		___m_appIdentifier_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_appIdentifier_1, value);
	}

	inline static int32_t get_offset_of_m_networkThreadName_2() { return static_cast<int32_t>(offsetof(NetPeerConfiguration_t136603591, ___m_networkThreadName_2)); }
	inline String_t* get_m_networkThreadName_2() const { return ___m_networkThreadName_2; }
	inline String_t** get_address_of_m_networkThreadName_2() { return &___m_networkThreadName_2; }
	inline void set_m_networkThreadName_2(String_t* value)
	{
		___m_networkThreadName_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_networkThreadName_2, value);
	}

	inline static int32_t get_offset_of_m_localAddress_3() { return static_cast<int32_t>(offsetof(NetPeerConfiguration_t136603591, ___m_localAddress_3)); }
	inline IPAddress_t1399971723 * get_m_localAddress_3() const { return ___m_localAddress_3; }
	inline IPAddress_t1399971723 ** get_address_of_m_localAddress_3() { return &___m_localAddress_3; }
	inline void set_m_localAddress_3(IPAddress_t1399971723 * value)
	{
		___m_localAddress_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_localAddress_3, value);
	}

	inline static int32_t get_offset_of_m_broadcastAddress_4() { return static_cast<int32_t>(offsetof(NetPeerConfiguration_t136603591, ___m_broadcastAddress_4)); }
	inline IPAddress_t1399971723 * get_m_broadcastAddress_4() const { return ___m_broadcastAddress_4; }
	inline IPAddress_t1399971723 ** get_address_of_m_broadcastAddress_4() { return &___m_broadcastAddress_4; }
	inline void set_m_broadcastAddress_4(IPAddress_t1399971723 * value)
	{
		___m_broadcastAddress_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_broadcastAddress_4, value);
	}

	inline static int32_t get_offset_of_m_acceptIncomingConnections_5() { return static_cast<int32_t>(offsetof(NetPeerConfiguration_t136603591, ___m_acceptIncomingConnections_5)); }
	inline bool get_m_acceptIncomingConnections_5() const { return ___m_acceptIncomingConnections_5; }
	inline bool* get_address_of_m_acceptIncomingConnections_5() { return &___m_acceptIncomingConnections_5; }
	inline void set_m_acceptIncomingConnections_5(bool value)
	{
		___m_acceptIncomingConnections_5 = value;
	}

	inline static int32_t get_offset_of_m_maximumConnections_6() { return static_cast<int32_t>(offsetof(NetPeerConfiguration_t136603591, ___m_maximumConnections_6)); }
	inline int32_t get_m_maximumConnections_6() const { return ___m_maximumConnections_6; }
	inline int32_t* get_address_of_m_maximumConnections_6() { return &___m_maximumConnections_6; }
	inline void set_m_maximumConnections_6(int32_t value)
	{
		___m_maximumConnections_6 = value;
	}

	inline static int32_t get_offset_of_m_defaultOutgoingMessageCapacity_7() { return static_cast<int32_t>(offsetof(NetPeerConfiguration_t136603591, ___m_defaultOutgoingMessageCapacity_7)); }
	inline int32_t get_m_defaultOutgoingMessageCapacity_7() const { return ___m_defaultOutgoingMessageCapacity_7; }
	inline int32_t* get_address_of_m_defaultOutgoingMessageCapacity_7() { return &___m_defaultOutgoingMessageCapacity_7; }
	inline void set_m_defaultOutgoingMessageCapacity_7(int32_t value)
	{
		___m_defaultOutgoingMessageCapacity_7 = value;
	}

	inline static int32_t get_offset_of_m_pingInterval_8() { return static_cast<int32_t>(offsetof(NetPeerConfiguration_t136603591, ___m_pingInterval_8)); }
	inline float get_m_pingInterval_8() const { return ___m_pingInterval_8; }
	inline float* get_address_of_m_pingInterval_8() { return &___m_pingInterval_8; }
	inline void set_m_pingInterval_8(float value)
	{
		___m_pingInterval_8 = value;
	}

	inline static int32_t get_offset_of_m_useMessageRecycling_9() { return static_cast<int32_t>(offsetof(NetPeerConfiguration_t136603591, ___m_useMessageRecycling_9)); }
	inline bool get_m_useMessageRecycling_9() const { return ___m_useMessageRecycling_9; }
	inline bool* get_address_of_m_useMessageRecycling_9() { return &___m_useMessageRecycling_9; }
	inline void set_m_useMessageRecycling_9(bool value)
	{
		___m_useMessageRecycling_9 = value;
	}

	inline static int32_t get_offset_of_m_recycledCacheMaxCount_10() { return static_cast<int32_t>(offsetof(NetPeerConfiguration_t136603591, ___m_recycledCacheMaxCount_10)); }
	inline int32_t get_m_recycledCacheMaxCount_10() const { return ___m_recycledCacheMaxCount_10; }
	inline int32_t* get_address_of_m_recycledCacheMaxCount_10() { return &___m_recycledCacheMaxCount_10; }
	inline void set_m_recycledCacheMaxCount_10(int32_t value)
	{
		___m_recycledCacheMaxCount_10 = value;
	}

	inline static int32_t get_offset_of_m_connectionTimeout_11() { return static_cast<int32_t>(offsetof(NetPeerConfiguration_t136603591, ___m_connectionTimeout_11)); }
	inline float get_m_connectionTimeout_11() const { return ___m_connectionTimeout_11; }
	inline float* get_address_of_m_connectionTimeout_11() { return &___m_connectionTimeout_11; }
	inline void set_m_connectionTimeout_11(float value)
	{
		___m_connectionTimeout_11 = value;
	}

	inline static int32_t get_offset_of_m_enableUPnP_12() { return static_cast<int32_t>(offsetof(NetPeerConfiguration_t136603591, ___m_enableUPnP_12)); }
	inline bool get_m_enableUPnP_12() const { return ___m_enableUPnP_12; }
	inline bool* get_address_of_m_enableUPnP_12() { return &___m_enableUPnP_12; }
	inline void set_m_enableUPnP_12(bool value)
	{
		___m_enableUPnP_12 = value;
	}

	inline static int32_t get_offset_of_m_autoFlushSendQueue_13() { return static_cast<int32_t>(offsetof(NetPeerConfiguration_t136603591, ___m_autoFlushSendQueue_13)); }
	inline bool get_m_autoFlushSendQueue_13() const { return ___m_autoFlushSendQueue_13; }
	inline bool* get_address_of_m_autoFlushSendQueue_13() { return &___m_autoFlushSendQueue_13; }
	inline void set_m_autoFlushSendQueue_13(bool value)
	{
		___m_autoFlushSendQueue_13 = value;
	}

	inline static int32_t get_offset_of_m_unreliableSizeBehaviour_14() { return static_cast<int32_t>(offsetof(NetPeerConfiguration_t136603591, ___m_unreliableSizeBehaviour_14)); }
	inline int32_t get_m_unreliableSizeBehaviour_14() const { return ___m_unreliableSizeBehaviour_14; }
	inline int32_t* get_address_of_m_unreliableSizeBehaviour_14() { return &___m_unreliableSizeBehaviour_14; }
	inline void set_m_unreliableSizeBehaviour_14(int32_t value)
	{
		___m_unreliableSizeBehaviour_14 = value;
	}

	inline static int32_t get_offset_of_m_suppressUnreliableUnorderedAcks_15() { return static_cast<int32_t>(offsetof(NetPeerConfiguration_t136603591, ___m_suppressUnreliableUnorderedAcks_15)); }
	inline bool get_m_suppressUnreliableUnorderedAcks_15() const { return ___m_suppressUnreliableUnorderedAcks_15; }
	inline bool* get_address_of_m_suppressUnreliableUnorderedAcks_15() { return &___m_suppressUnreliableUnorderedAcks_15; }
	inline void set_m_suppressUnreliableUnorderedAcks_15(bool value)
	{
		___m_suppressUnreliableUnorderedAcks_15 = value;
	}

	inline static int32_t get_offset_of_m_disabledTypes_16() { return static_cast<int32_t>(offsetof(NetPeerConfiguration_t136603591, ___m_disabledTypes_16)); }
	inline int32_t get_m_disabledTypes_16() const { return ___m_disabledTypes_16; }
	inline int32_t* get_address_of_m_disabledTypes_16() { return &___m_disabledTypes_16; }
	inline void set_m_disabledTypes_16(int32_t value)
	{
		___m_disabledTypes_16 = value;
	}

	inline static int32_t get_offset_of_m_port_17() { return static_cast<int32_t>(offsetof(NetPeerConfiguration_t136603591, ___m_port_17)); }
	inline int32_t get_m_port_17() const { return ___m_port_17; }
	inline int32_t* get_address_of_m_port_17() { return &___m_port_17; }
	inline void set_m_port_17(int32_t value)
	{
		___m_port_17 = value;
	}

	inline static int32_t get_offset_of_m_receiveBufferSize_18() { return static_cast<int32_t>(offsetof(NetPeerConfiguration_t136603591, ___m_receiveBufferSize_18)); }
	inline int32_t get_m_receiveBufferSize_18() const { return ___m_receiveBufferSize_18; }
	inline int32_t* get_address_of_m_receiveBufferSize_18() { return &___m_receiveBufferSize_18; }
	inline void set_m_receiveBufferSize_18(int32_t value)
	{
		___m_receiveBufferSize_18 = value;
	}

	inline static int32_t get_offset_of_m_sendBufferSize_19() { return static_cast<int32_t>(offsetof(NetPeerConfiguration_t136603591, ___m_sendBufferSize_19)); }
	inline int32_t get_m_sendBufferSize_19() const { return ___m_sendBufferSize_19; }
	inline int32_t* get_address_of_m_sendBufferSize_19() { return &___m_sendBufferSize_19; }
	inline void set_m_sendBufferSize_19(int32_t value)
	{
		___m_sendBufferSize_19 = value;
	}

	inline static int32_t get_offset_of_m_resendHandshakeInterval_20() { return static_cast<int32_t>(offsetof(NetPeerConfiguration_t136603591, ___m_resendHandshakeInterval_20)); }
	inline float get_m_resendHandshakeInterval_20() const { return ___m_resendHandshakeInterval_20; }
	inline float* get_address_of_m_resendHandshakeInterval_20() { return &___m_resendHandshakeInterval_20; }
	inline void set_m_resendHandshakeInterval_20(float value)
	{
		___m_resendHandshakeInterval_20 = value;
	}

	inline static int32_t get_offset_of_m_maximumHandshakeAttempts_21() { return static_cast<int32_t>(offsetof(NetPeerConfiguration_t136603591, ___m_maximumHandshakeAttempts_21)); }
	inline int32_t get_m_maximumHandshakeAttempts_21() const { return ___m_maximumHandshakeAttempts_21; }
	inline int32_t* get_address_of_m_maximumHandshakeAttempts_21() { return &___m_maximumHandshakeAttempts_21; }
	inline void set_m_maximumHandshakeAttempts_21(int32_t value)
	{
		___m_maximumHandshakeAttempts_21 = value;
	}

	inline static int32_t get_offset_of_m_loss_22() { return static_cast<int32_t>(offsetof(NetPeerConfiguration_t136603591, ___m_loss_22)); }
	inline float get_m_loss_22() const { return ___m_loss_22; }
	inline float* get_address_of_m_loss_22() { return &___m_loss_22; }
	inline void set_m_loss_22(float value)
	{
		___m_loss_22 = value;
	}

	inline static int32_t get_offset_of_m_duplicates_23() { return static_cast<int32_t>(offsetof(NetPeerConfiguration_t136603591, ___m_duplicates_23)); }
	inline float get_m_duplicates_23() const { return ___m_duplicates_23; }
	inline float* get_address_of_m_duplicates_23() { return &___m_duplicates_23; }
	inline void set_m_duplicates_23(float value)
	{
		___m_duplicates_23 = value;
	}

	inline static int32_t get_offset_of_m_minimumOneWayLatency_24() { return static_cast<int32_t>(offsetof(NetPeerConfiguration_t136603591, ___m_minimumOneWayLatency_24)); }
	inline float get_m_minimumOneWayLatency_24() const { return ___m_minimumOneWayLatency_24; }
	inline float* get_address_of_m_minimumOneWayLatency_24() { return &___m_minimumOneWayLatency_24; }
	inline void set_m_minimumOneWayLatency_24(float value)
	{
		___m_minimumOneWayLatency_24 = value;
	}

	inline static int32_t get_offset_of_m_randomOneWayLatency_25() { return static_cast<int32_t>(offsetof(NetPeerConfiguration_t136603591, ___m_randomOneWayLatency_25)); }
	inline float get_m_randomOneWayLatency_25() const { return ___m_randomOneWayLatency_25; }
	inline float* get_address_of_m_randomOneWayLatency_25() { return &___m_randomOneWayLatency_25; }
	inline void set_m_randomOneWayLatency_25(float value)
	{
		___m_randomOneWayLatency_25 = value;
	}

	inline static int32_t get_offset_of_m_maximumTransmissionUnit_26() { return static_cast<int32_t>(offsetof(NetPeerConfiguration_t136603591, ___m_maximumTransmissionUnit_26)); }
	inline int32_t get_m_maximumTransmissionUnit_26() const { return ___m_maximumTransmissionUnit_26; }
	inline int32_t* get_address_of_m_maximumTransmissionUnit_26() { return &___m_maximumTransmissionUnit_26; }
	inline void set_m_maximumTransmissionUnit_26(int32_t value)
	{
		___m_maximumTransmissionUnit_26 = value;
	}

	inline static int32_t get_offset_of_m_autoExpandMTU_27() { return static_cast<int32_t>(offsetof(NetPeerConfiguration_t136603591, ___m_autoExpandMTU_27)); }
	inline bool get_m_autoExpandMTU_27() const { return ___m_autoExpandMTU_27; }
	inline bool* get_address_of_m_autoExpandMTU_27() { return &___m_autoExpandMTU_27; }
	inline void set_m_autoExpandMTU_27(bool value)
	{
		___m_autoExpandMTU_27 = value;
	}

	inline static int32_t get_offset_of_m_expandMTUFrequency_28() { return static_cast<int32_t>(offsetof(NetPeerConfiguration_t136603591, ___m_expandMTUFrequency_28)); }
	inline float get_m_expandMTUFrequency_28() const { return ___m_expandMTUFrequency_28; }
	inline float* get_address_of_m_expandMTUFrequency_28() { return &___m_expandMTUFrequency_28; }
	inline void set_m_expandMTUFrequency_28(float value)
	{
		___m_expandMTUFrequency_28 = value;
	}

	inline static int32_t get_offset_of_m_expandMTUFailAttempts_29() { return static_cast<int32_t>(offsetof(NetPeerConfiguration_t136603591, ___m_expandMTUFailAttempts_29)); }
	inline int32_t get_m_expandMTUFailAttempts_29() const { return ___m_expandMTUFailAttempts_29; }
	inline int32_t* get_address_of_m_expandMTUFailAttempts_29() { return &___m_expandMTUFailAttempts_29; }
	inline void set_m_expandMTUFailAttempts_29(int32_t value)
	{
		___m_expandMTUFailAttempts_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
