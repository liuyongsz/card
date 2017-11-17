#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MethodInfo>
struct Dictionary_2_t972936938;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lidgren.Network.NetBuffer
struct  NetBuffer_t3608062491  : public Il2CppObject
{
public:
	// System.Byte[] Lidgren.Network.NetBuffer::m_data
	ByteU5BU5D_t3397334013* ___m_data_2;
	// System.Int32 Lidgren.Network.NetBuffer::m_bitLength
	int32_t ___m_bitLength_3;
	// System.Int32 Lidgren.Network.NetBuffer::m_readPosition
	int32_t ___m_readPosition_4;

public:
	inline static int32_t get_offset_of_m_data_2() { return static_cast<int32_t>(offsetof(NetBuffer_t3608062491, ___m_data_2)); }
	inline ByteU5BU5D_t3397334013* get_m_data_2() const { return ___m_data_2; }
	inline ByteU5BU5D_t3397334013** get_address_of_m_data_2() { return &___m_data_2; }
	inline void set_m_data_2(ByteU5BU5D_t3397334013* value)
	{
		___m_data_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_data_2, value);
	}

	inline static int32_t get_offset_of_m_bitLength_3() { return static_cast<int32_t>(offsetof(NetBuffer_t3608062491, ___m_bitLength_3)); }
	inline int32_t get_m_bitLength_3() const { return ___m_bitLength_3; }
	inline int32_t* get_address_of_m_bitLength_3() { return &___m_bitLength_3; }
	inline void set_m_bitLength_3(int32_t value)
	{
		___m_bitLength_3 = value;
	}

	inline static int32_t get_offset_of_m_readPosition_4() { return static_cast<int32_t>(offsetof(NetBuffer_t3608062491, ___m_readPosition_4)); }
	inline int32_t get_m_readPosition_4() const { return ___m_readPosition_4; }
	inline int32_t* get_address_of_m_readPosition_4() { return &___m_readPosition_4; }
	inline void set_m_readPosition_4(int32_t value)
	{
		___m_readPosition_4 = value;
	}
};

struct NetBuffer_t3608062491_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MethodInfo> Lidgren.Network.NetBuffer::s_readMethods
	Dictionary_2_t972936938 * ___s_readMethods_0;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MethodInfo> Lidgren.Network.NetBuffer::s_writeMethods
	Dictionary_2_t972936938 * ___s_writeMethods_1;

public:
	inline static int32_t get_offset_of_s_readMethods_0() { return static_cast<int32_t>(offsetof(NetBuffer_t3608062491_StaticFields, ___s_readMethods_0)); }
	inline Dictionary_2_t972936938 * get_s_readMethods_0() const { return ___s_readMethods_0; }
	inline Dictionary_2_t972936938 ** get_address_of_s_readMethods_0() { return &___s_readMethods_0; }
	inline void set_s_readMethods_0(Dictionary_2_t972936938 * value)
	{
		___s_readMethods_0 = value;
		Il2CppCodeGenWriteBarrier(&___s_readMethods_0, value);
	}

	inline static int32_t get_offset_of_s_writeMethods_1() { return static_cast<int32_t>(offsetof(NetBuffer_t3608062491_StaticFields, ___s_writeMethods_1)); }
	inline Dictionary_2_t972936938 * get_s_writeMethods_1() const { return ___s_writeMethods_1; }
	inline Dictionary_2_t972936938 ** get_address_of_s_writeMethods_1() { return &___s_writeMethods_1; }
	inline void set_s_writeMethods_1(Dictionary_2_t972936938 * value)
	{
		___s_writeMethods_1 = value;
		Il2CppCodeGenWriteBarrier(&___s_writeMethods_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
