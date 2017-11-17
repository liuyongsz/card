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
// Lidgren.Network.NetBitVector
struct NetBitVector_t1774780753;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lidgren.Network.ReceivedFragmentGroup
struct  ReceivedFragmentGroup_t4108580702  : public Il2CppObject
{
public:
	// System.Byte[] Lidgren.Network.ReceivedFragmentGroup::Data
	ByteU5BU5D_t3397334013* ___Data_0;
	// Lidgren.Network.NetBitVector Lidgren.Network.ReceivedFragmentGroup::ReceivedChunks
	NetBitVector_t1774780753 * ___ReceivedChunks_1;

public:
	inline static int32_t get_offset_of_Data_0() { return static_cast<int32_t>(offsetof(ReceivedFragmentGroup_t4108580702, ___Data_0)); }
	inline ByteU5BU5D_t3397334013* get_Data_0() const { return ___Data_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_Data_0() { return &___Data_0; }
	inline void set_Data_0(ByteU5BU5D_t3397334013* value)
	{
		___Data_0 = value;
		Il2CppCodeGenWriteBarrier(&___Data_0, value);
	}

	inline static int32_t get_offset_of_ReceivedChunks_1() { return static_cast<int32_t>(offsetof(ReceivedFragmentGroup_t4108580702, ___ReceivedChunks_1)); }
	inline NetBitVector_t1774780753 * get_ReceivedChunks_1() const { return ___ReceivedChunks_1; }
	inline NetBitVector_t1774780753 ** get_address_of_ReceivedChunks_1() { return &___ReceivedChunks_1; }
	inline void set_ReceivedChunks_1(NetBitVector_t1774780753 * value)
	{
		___ReceivedChunks_1 = value;
		Il2CppCodeGenWriteBarrier(&___ReceivedChunks_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
