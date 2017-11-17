#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Net.IPEndPoint
struct IPEndPoint_t2615413766;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lidgren.Network.NetPeer/DelayedPacket
struct  DelayedPacket_t1298207473  : public Il2CppObject
{
public:
	// System.Byte[] Lidgren.Network.NetPeer/DelayedPacket::Data
	ByteU5BU5D_t3397334013* ___Data_0;
	// System.Double Lidgren.Network.NetPeer/DelayedPacket::DelayedUntil
	double ___DelayedUntil_1;
	// System.Net.IPEndPoint Lidgren.Network.NetPeer/DelayedPacket::Target
	IPEndPoint_t2615413766 * ___Target_2;

public:
	inline static int32_t get_offset_of_Data_0() { return static_cast<int32_t>(offsetof(DelayedPacket_t1298207473, ___Data_0)); }
	inline ByteU5BU5D_t3397334013* get_Data_0() const { return ___Data_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_Data_0() { return &___Data_0; }
	inline void set_Data_0(ByteU5BU5D_t3397334013* value)
	{
		___Data_0 = value;
		Il2CppCodeGenWriteBarrier(&___Data_0, value);
	}

	inline static int32_t get_offset_of_DelayedUntil_1() { return static_cast<int32_t>(offsetof(DelayedPacket_t1298207473, ___DelayedUntil_1)); }
	inline double get_DelayedUntil_1() const { return ___DelayedUntil_1; }
	inline double* get_address_of_DelayedUntil_1() { return &___DelayedUntil_1; }
	inline void set_DelayedUntil_1(double value)
	{
		___DelayedUntil_1 = value;
	}

	inline static int32_t get_offset_of_Target_2() { return static_cast<int32_t>(offsetof(DelayedPacket_t1298207473, ___Target_2)); }
	inline IPEndPoint_t2615413766 * get_Target_2() const { return ___Target_2; }
	inline IPEndPoint_t2615413766 ** get_address_of_Target_2() { return &___Target_2; }
	inline void set_Target_2(IPEndPoint_t2615413766 * value)
	{
		___Target_2 = value;
		Il2CppCodeGenWriteBarrier(&___Target_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
