#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Lidgren.Network.NetTuple`2<System.Object,System.Object>[]
struct NetTuple_2U5BU5D_t317503987;
// System.Threading.ReaderWriterLockSlim
struct ReaderWriterLockSlim_t3961242320;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lidgren.Network.NetQueue`1<Lidgren.Network.NetTuple`2<System.Object,System.Object>>
struct  NetQueue_1_t1401343860  : public Il2CppObject
{
public:
	// T[] Lidgren.Network.NetQueue`1::m_items
	NetTuple_2U5BU5D_t317503987* ___m_items_0;
	// System.Threading.ReaderWriterLockSlim Lidgren.Network.NetQueue`1::m_lock
	ReaderWriterLockSlim_t3961242320 * ___m_lock_1;
	// System.Int32 Lidgren.Network.NetQueue`1::m_size
	int32_t ___m_size_2;
	// System.Int32 Lidgren.Network.NetQueue`1::m_head
	int32_t ___m_head_3;

public:
	inline static int32_t get_offset_of_m_items_0() { return static_cast<int32_t>(offsetof(NetQueue_1_t1401343860, ___m_items_0)); }
	inline NetTuple_2U5BU5D_t317503987* get_m_items_0() const { return ___m_items_0; }
	inline NetTuple_2U5BU5D_t317503987** get_address_of_m_items_0() { return &___m_items_0; }
	inline void set_m_items_0(NetTuple_2U5BU5D_t317503987* value)
	{
		___m_items_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_items_0, value);
	}

	inline static int32_t get_offset_of_m_lock_1() { return static_cast<int32_t>(offsetof(NetQueue_1_t1401343860, ___m_lock_1)); }
	inline ReaderWriterLockSlim_t3961242320 * get_m_lock_1() const { return ___m_lock_1; }
	inline ReaderWriterLockSlim_t3961242320 ** get_address_of_m_lock_1() { return &___m_lock_1; }
	inline void set_m_lock_1(ReaderWriterLockSlim_t3961242320 * value)
	{
		___m_lock_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_lock_1, value);
	}

	inline static int32_t get_offset_of_m_size_2() { return static_cast<int32_t>(offsetof(NetQueue_1_t1401343860, ___m_size_2)); }
	inline int32_t get_m_size_2() const { return ___m_size_2; }
	inline int32_t* get_address_of_m_size_2() { return &___m_size_2; }
	inline void set_m_size_2(int32_t value)
	{
		___m_size_2 = value;
	}

	inline static int32_t get_offset_of_m_head_3() { return static_cast<int32_t>(offsetof(NetQueue_1_t1401343860, ___m_head_3)); }
	inline int32_t get_m_head_3() const { return ___m_head_3; }
	inline int32_t* get_address_of_m_head_3() { return &___m_head_3; }
	inline void set_m_head_3(int32_t value)
	{
		___m_head_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
