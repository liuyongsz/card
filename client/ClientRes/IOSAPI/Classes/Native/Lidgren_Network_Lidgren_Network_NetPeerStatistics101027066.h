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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lidgren.Network.NetPeerStatistics
struct  NetPeerStatistics_t101027066  : public Il2CppObject
{
public:
	// Lidgren.Network.NetPeer Lidgren.Network.NetPeerStatistics::m_peer
	NetPeer_t1779390221 * ___m_peer_0;
	// System.Int32 Lidgren.Network.NetPeerStatistics::m_sentPackets
	int32_t ___m_sentPackets_1;
	// System.Int32 Lidgren.Network.NetPeerStatistics::m_receivedPackets
	int32_t ___m_receivedPackets_2;
	// System.Int32 Lidgren.Network.NetPeerStatistics::m_sentMessages
	int32_t ___m_sentMessages_3;
	// System.Int32 Lidgren.Network.NetPeerStatistics::m_receivedMessages
	int32_t ___m_receivedMessages_4;
	// System.Int32 Lidgren.Network.NetPeerStatistics::m_receivedFragments
	int32_t ___m_receivedFragments_5;
	// System.Int32 Lidgren.Network.NetPeerStatistics::m_sentBytes
	int32_t ___m_sentBytes_6;
	// System.Int32 Lidgren.Network.NetPeerStatistics::m_receivedBytes
	int32_t ___m_receivedBytes_7;
	// System.Int64 Lidgren.Network.NetPeerStatistics::m_bytesAllocated
	int64_t ___m_bytesAllocated_8;

public:
	inline static int32_t get_offset_of_m_peer_0() { return static_cast<int32_t>(offsetof(NetPeerStatistics_t101027066, ___m_peer_0)); }
	inline NetPeer_t1779390221 * get_m_peer_0() const { return ___m_peer_0; }
	inline NetPeer_t1779390221 ** get_address_of_m_peer_0() { return &___m_peer_0; }
	inline void set_m_peer_0(NetPeer_t1779390221 * value)
	{
		___m_peer_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_peer_0, value);
	}

	inline static int32_t get_offset_of_m_sentPackets_1() { return static_cast<int32_t>(offsetof(NetPeerStatistics_t101027066, ___m_sentPackets_1)); }
	inline int32_t get_m_sentPackets_1() const { return ___m_sentPackets_1; }
	inline int32_t* get_address_of_m_sentPackets_1() { return &___m_sentPackets_1; }
	inline void set_m_sentPackets_1(int32_t value)
	{
		___m_sentPackets_1 = value;
	}

	inline static int32_t get_offset_of_m_receivedPackets_2() { return static_cast<int32_t>(offsetof(NetPeerStatistics_t101027066, ___m_receivedPackets_2)); }
	inline int32_t get_m_receivedPackets_2() const { return ___m_receivedPackets_2; }
	inline int32_t* get_address_of_m_receivedPackets_2() { return &___m_receivedPackets_2; }
	inline void set_m_receivedPackets_2(int32_t value)
	{
		___m_receivedPackets_2 = value;
	}

	inline static int32_t get_offset_of_m_sentMessages_3() { return static_cast<int32_t>(offsetof(NetPeerStatistics_t101027066, ___m_sentMessages_3)); }
	inline int32_t get_m_sentMessages_3() const { return ___m_sentMessages_3; }
	inline int32_t* get_address_of_m_sentMessages_3() { return &___m_sentMessages_3; }
	inline void set_m_sentMessages_3(int32_t value)
	{
		___m_sentMessages_3 = value;
	}

	inline static int32_t get_offset_of_m_receivedMessages_4() { return static_cast<int32_t>(offsetof(NetPeerStatistics_t101027066, ___m_receivedMessages_4)); }
	inline int32_t get_m_receivedMessages_4() const { return ___m_receivedMessages_4; }
	inline int32_t* get_address_of_m_receivedMessages_4() { return &___m_receivedMessages_4; }
	inline void set_m_receivedMessages_4(int32_t value)
	{
		___m_receivedMessages_4 = value;
	}

	inline static int32_t get_offset_of_m_receivedFragments_5() { return static_cast<int32_t>(offsetof(NetPeerStatistics_t101027066, ___m_receivedFragments_5)); }
	inline int32_t get_m_receivedFragments_5() const { return ___m_receivedFragments_5; }
	inline int32_t* get_address_of_m_receivedFragments_5() { return &___m_receivedFragments_5; }
	inline void set_m_receivedFragments_5(int32_t value)
	{
		___m_receivedFragments_5 = value;
	}

	inline static int32_t get_offset_of_m_sentBytes_6() { return static_cast<int32_t>(offsetof(NetPeerStatistics_t101027066, ___m_sentBytes_6)); }
	inline int32_t get_m_sentBytes_6() const { return ___m_sentBytes_6; }
	inline int32_t* get_address_of_m_sentBytes_6() { return &___m_sentBytes_6; }
	inline void set_m_sentBytes_6(int32_t value)
	{
		___m_sentBytes_6 = value;
	}

	inline static int32_t get_offset_of_m_receivedBytes_7() { return static_cast<int32_t>(offsetof(NetPeerStatistics_t101027066, ___m_receivedBytes_7)); }
	inline int32_t get_m_receivedBytes_7() const { return ___m_receivedBytes_7; }
	inline int32_t* get_address_of_m_receivedBytes_7() { return &___m_receivedBytes_7; }
	inline void set_m_receivedBytes_7(int32_t value)
	{
		___m_receivedBytes_7 = value;
	}

	inline static int32_t get_offset_of_m_bytesAllocated_8() { return static_cast<int32_t>(offsetof(NetPeerStatistics_t101027066, ___m_bytesAllocated_8)); }
	inline int64_t get_m_bytesAllocated_8() const { return ___m_bytesAllocated_8; }
	inline int64_t* get_address_of_m_bytesAllocated_8() { return &___m_bytesAllocated_8; }
	inline void set_m_bytesAllocated_8(int64_t value)
	{
		___m_bytesAllocated_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
