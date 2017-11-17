#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Lidgren.Network.NetConnection
struct NetConnection_t3331492029;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lidgren.Network.NetConnectionStatistics
struct  NetConnectionStatistics_t1235765202  : public Il2CppObject
{
public:
	// Lidgren.Network.NetConnection Lidgren.Network.NetConnectionStatistics::m_connection
	NetConnection_t3331492029 * ___m_connection_0;
	// System.Int64 Lidgren.Network.NetConnectionStatistics::m_sentPackets
	int64_t ___m_sentPackets_1;
	// System.Int64 Lidgren.Network.NetConnectionStatistics::m_receivedPackets
	int64_t ___m_receivedPackets_2;
	// System.Int64 Lidgren.Network.NetConnectionStatistics::m_sentMessages
	int64_t ___m_sentMessages_3;
	// System.Int64 Lidgren.Network.NetConnectionStatistics::m_receivedMessages
	int64_t ___m_receivedMessages_4;
	// System.Int64 Lidgren.Network.NetConnectionStatistics::m_droppedMessages
	int64_t ___m_droppedMessages_5;
	// System.Int64 Lidgren.Network.NetConnectionStatistics::m_receivedFragments
	int64_t ___m_receivedFragments_6;
	// System.Int64 Lidgren.Network.NetConnectionStatistics::m_sentBytes
	int64_t ___m_sentBytes_7;
	// System.Int64 Lidgren.Network.NetConnectionStatistics::m_receivedBytes
	int64_t ___m_receivedBytes_8;
	// System.Int64 Lidgren.Network.NetConnectionStatistics::m_resentMessagesDueToDelay
	int64_t ___m_resentMessagesDueToDelay_9;
	// System.Int64 Lidgren.Network.NetConnectionStatistics::m_resentMessagesDueToHole
	int64_t ___m_resentMessagesDueToHole_10;

public:
	inline static int32_t get_offset_of_m_connection_0() { return static_cast<int32_t>(offsetof(NetConnectionStatistics_t1235765202, ___m_connection_0)); }
	inline NetConnection_t3331492029 * get_m_connection_0() const { return ___m_connection_0; }
	inline NetConnection_t3331492029 ** get_address_of_m_connection_0() { return &___m_connection_0; }
	inline void set_m_connection_0(NetConnection_t3331492029 * value)
	{
		___m_connection_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_connection_0, value);
	}

	inline static int32_t get_offset_of_m_sentPackets_1() { return static_cast<int32_t>(offsetof(NetConnectionStatistics_t1235765202, ___m_sentPackets_1)); }
	inline int64_t get_m_sentPackets_1() const { return ___m_sentPackets_1; }
	inline int64_t* get_address_of_m_sentPackets_1() { return &___m_sentPackets_1; }
	inline void set_m_sentPackets_1(int64_t value)
	{
		___m_sentPackets_1 = value;
	}

	inline static int32_t get_offset_of_m_receivedPackets_2() { return static_cast<int32_t>(offsetof(NetConnectionStatistics_t1235765202, ___m_receivedPackets_2)); }
	inline int64_t get_m_receivedPackets_2() const { return ___m_receivedPackets_2; }
	inline int64_t* get_address_of_m_receivedPackets_2() { return &___m_receivedPackets_2; }
	inline void set_m_receivedPackets_2(int64_t value)
	{
		___m_receivedPackets_2 = value;
	}

	inline static int32_t get_offset_of_m_sentMessages_3() { return static_cast<int32_t>(offsetof(NetConnectionStatistics_t1235765202, ___m_sentMessages_3)); }
	inline int64_t get_m_sentMessages_3() const { return ___m_sentMessages_3; }
	inline int64_t* get_address_of_m_sentMessages_3() { return &___m_sentMessages_3; }
	inline void set_m_sentMessages_3(int64_t value)
	{
		___m_sentMessages_3 = value;
	}

	inline static int32_t get_offset_of_m_receivedMessages_4() { return static_cast<int32_t>(offsetof(NetConnectionStatistics_t1235765202, ___m_receivedMessages_4)); }
	inline int64_t get_m_receivedMessages_4() const { return ___m_receivedMessages_4; }
	inline int64_t* get_address_of_m_receivedMessages_4() { return &___m_receivedMessages_4; }
	inline void set_m_receivedMessages_4(int64_t value)
	{
		___m_receivedMessages_4 = value;
	}

	inline static int32_t get_offset_of_m_droppedMessages_5() { return static_cast<int32_t>(offsetof(NetConnectionStatistics_t1235765202, ___m_droppedMessages_5)); }
	inline int64_t get_m_droppedMessages_5() const { return ___m_droppedMessages_5; }
	inline int64_t* get_address_of_m_droppedMessages_5() { return &___m_droppedMessages_5; }
	inline void set_m_droppedMessages_5(int64_t value)
	{
		___m_droppedMessages_5 = value;
	}

	inline static int32_t get_offset_of_m_receivedFragments_6() { return static_cast<int32_t>(offsetof(NetConnectionStatistics_t1235765202, ___m_receivedFragments_6)); }
	inline int64_t get_m_receivedFragments_6() const { return ___m_receivedFragments_6; }
	inline int64_t* get_address_of_m_receivedFragments_6() { return &___m_receivedFragments_6; }
	inline void set_m_receivedFragments_6(int64_t value)
	{
		___m_receivedFragments_6 = value;
	}

	inline static int32_t get_offset_of_m_sentBytes_7() { return static_cast<int32_t>(offsetof(NetConnectionStatistics_t1235765202, ___m_sentBytes_7)); }
	inline int64_t get_m_sentBytes_7() const { return ___m_sentBytes_7; }
	inline int64_t* get_address_of_m_sentBytes_7() { return &___m_sentBytes_7; }
	inline void set_m_sentBytes_7(int64_t value)
	{
		___m_sentBytes_7 = value;
	}

	inline static int32_t get_offset_of_m_receivedBytes_8() { return static_cast<int32_t>(offsetof(NetConnectionStatistics_t1235765202, ___m_receivedBytes_8)); }
	inline int64_t get_m_receivedBytes_8() const { return ___m_receivedBytes_8; }
	inline int64_t* get_address_of_m_receivedBytes_8() { return &___m_receivedBytes_8; }
	inline void set_m_receivedBytes_8(int64_t value)
	{
		___m_receivedBytes_8 = value;
	}

	inline static int32_t get_offset_of_m_resentMessagesDueToDelay_9() { return static_cast<int32_t>(offsetof(NetConnectionStatistics_t1235765202, ___m_resentMessagesDueToDelay_9)); }
	inline int64_t get_m_resentMessagesDueToDelay_9() const { return ___m_resentMessagesDueToDelay_9; }
	inline int64_t* get_address_of_m_resentMessagesDueToDelay_9() { return &___m_resentMessagesDueToDelay_9; }
	inline void set_m_resentMessagesDueToDelay_9(int64_t value)
	{
		___m_resentMessagesDueToDelay_9 = value;
	}

	inline static int32_t get_offset_of_m_resentMessagesDueToHole_10() { return static_cast<int32_t>(offsetof(NetConnectionStatistics_t1235765202, ___m_resentMessagesDueToHole_10)); }
	inline int64_t get_m_resentMessagesDueToHole_10() const { return ___m_resentMessagesDueToHole_10; }
	inline int64_t* get_address_of_m_resentMessagesDueToHole_10() { return &___m_resentMessagesDueToHole_10; }
	inline void set_m_resentMessagesDueToHole_10(int64_t value)
	{
		___m_resentMessagesDueToHole_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
