#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lidgren.Network.NetBitVector
struct  NetBitVector_t1774780753  : public Il2CppObject
{
public:
	// System.Int32 Lidgren.Network.NetBitVector::m_capacity
	int32_t ___m_capacity_0;
	// System.Int32[] Lidgren.Network.NetBitVector::m_data
	Int32U5BU5D_t3030399641* ___m_data_1;
	// System.Int32 Lidgren.Network.NetBitVector::m_numBitsSet
	int32_t ___m_numBitsSet_2;

public:
	inline static int32_t get_offset_of_m_capacity_0() { return static_cast<int32_t>(offsetof(NetBitVector_t1774780753, ___m_capacity_0)); }
	inline int32_t get_m_capacity_0() const { return ___m_capacity_0; }
	inline int32_t* get_address_of_m_capacity_0() { return &___m_capacity_0; }
	inline void set_m_capacity_0(int32_t value)
	{
		___m_capacity_0 = value;
	}

	inline static int32_t get_offset_of_m_data_1() { return static_cast<int32_t>(offsetof(NetBitVector_t1774780753, ___m_data_1)); }
	inline Int32U5BU5D_t3030399641* get_m_data_1() const { return ___m_data_1; }
	inline Int32U5BU5D_t3030399641** get_address_of_m_data_1() { return &___m_data_1; }
	inline void set_m_data_1(Int32U5BU5D_t3030399641* value)
	{
		___m_data_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_data_1, value);
	}

	inline static int32_t get_offset_of_m_numBitsSet_2() { return static_cast<int32_t>(offsetof(NetBitVector_t1774780753, ___m_numBitsSet_2)); }
	inline int32_t get_m_numBitsSet_2() const { return ___m_numBitsSet_2; }
	inline int32_t* get_address_of_m_numBitsSet_2() { return &___m_numBitsSet_2; }
	inline void set_m_numBitsSet_2(int32_t value)
	{
		___m_numBitsSet_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
