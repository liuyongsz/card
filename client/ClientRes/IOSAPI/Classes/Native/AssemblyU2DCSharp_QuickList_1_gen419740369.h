#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameEventManager/GameEvent[]
struct GameEventU5BU5D_t4093994981;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// QuickList`1<GameEventManager/GameEvent>
struct  QuickList_1_t419740369  : public Il2CppObject
{
public:
	// T[] QuickList`1::m_buffer
	GameEventU5BU5D_t4093994981* ___m_buffer_0;
	// System.Int32 QuickList`1::m_size
	int32_t ___m_size_1;

public:
	inline static int32_t get_offset_of_m_buffer_0() { return static_cast<int32_t>(offsetof(QuickList_1_t419740369, ___m_buffer_0)); }
	inline GameEventU5BU5D_t4093994981* get_m_buffer_0() const { return ___m_buffer_0; }
	inline GameEventU5BU5D_t4093994981** get_address_of_m_buffer_0() { return &___m_buffer_0; }
	inline void set_m_buffer_0(GameEventU5BU5D_t4093994981* value)
	{
		___m_buffer_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_buffer_0, value);
	}

	inline static int32_t get_offset_of_m_size_1() { return static_cast<int32_t>(offsetof(QuickList_1_t419740369, ___m_size_1)); }
	inline int32_t get_m_size_1() const { return ___m_size_1; }
	inline int32_t* get_address_of_m_size_1() { return &___m_size_1; }
	inline void set_m_size_1(int32_t value)
	{
		___m_size_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
