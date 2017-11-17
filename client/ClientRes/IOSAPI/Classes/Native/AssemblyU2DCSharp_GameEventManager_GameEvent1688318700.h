#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_GameEventTypes243168119.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameEventManager/GameEvent
struct  GameEvent_t1688318700  : public Il2CppObject
{
public:
	// GameEventTypes GameEventManager/GameEvent::eventType
	int32_t ___eventType_0;
	// System.Object[] GameEventManager/GameEvent::args
	ObjectU5BU5D_t3614634134* ___args_1;

public:
	inline static int32_t get_offset_of_eventType_0() { return static_cast<int32_t>(offsetof(GameEvent_t1688318700, ___eventType_0)); }
	inline int32_t get_eventType_0() const { return ___eventType_0; }
	inline int32_t* get_address_of_eventType_0() { return &___eventType_0; }
	inline void set_eventType_0(int32_t value)
	{
		___eventType_0 = value;
	}

	inline static int32_t get_offset_of_args_1() { return static_cast<int32_t>(offsetof(GameEvent_t1688318700, ___args_1)); }
	inline ObjectU5BU5D_t3614634134* get_args_1() const { return ___args_1; }
	inline ObjectU5BU5D_t3614634134** get_address_of_args_1() { return &___args_1; }
	inline void set_args_1(ObjectU5BU5D_t3614634134* value)
	{
		___args_1 = value;
		Il2CppCodeGenWriteBarrier(&___args_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
