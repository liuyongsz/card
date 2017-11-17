#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<GameEventTypes,System.Collections.Generic.List`1<GameEventCallback>>
struct Dictionary_2_t2447976669;
// System.Collections.Generic.Queue`1<GameEventManager/GameEvent>
struct Queue_1_t1507975535;
// ObjectPool`1<GameEventManager/GameEvent>
struct ObjectPool_1_t3308594811;
// System.Object
struct Il2CppObject;

#include "AssemblyU2DCSharp_ManagerTemplate_1_gen3855945130.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameEventManager
struct  GameEventManager_t1523476787  : public ManagerTemplate_1_t3855945130
{
public:

public:
};

struct GameEventManager_t1523476787_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<GameEventTypes,System.Collections.Generic.List`1<GameEventCallback>> GameEventManager::eventMap
	Dictionary_2_t2447976669 * ___eventMap_4;
	// System.Collections.Generic.Queue`1<GameEventManager/GameEvent> GameEventManager::eventQueue
	Queue_1_t1507975535 * ___eventQueue_5;
	// System.Collections.Generic.Queue`1<GameEventManager/GameEvent> GameEventManager::eventBackQueue
	Queue_1_t1507975535 * ___eventBackQueue_6;
	// ObjectPool`1<GameEventManager/GameEvent> GameEventManager::eventPool
	ObjectPool_1_t3308594811 * ___eventPool_7;
	// System.Object GameEventManager::eventLock
	Il2CppObject * ___eventLock_8;
	// System.Boolean GameEventManager::EnableEventFiring
	bool ___EnableEventFiring_9;
	// System.Int32 GameEventManager::mainThreadID
	int32_t ___mainThreadID_10;

public:
	inline static int32_t get_offset_of_eventMap_4() { return static_cast<int32_t>(offsetof(GameEventManager_t1523476787_StaticFields, ___eventMap_4)); }
	inline Dictionary_2_t2447976669 * get_eventMap_4() const { return ___eventMap_4; }
	inline Dictionary_2_t2447976669 ** get_address_of_eventMap_4() { return &___eventMap_4; }
	inline void set_eventMap_4(Dictionary_2_t2447976669 * value)
	{
		___eventMap_4 = value;
		Il2CppCodeGenWriteBarrier(&___eventMap_4, value);
	}

	inline static int32_t get_offset_of_eventQueue_5() { return static_cast<int32_t>(offsetof(GameEventManager_t1523476787_StaticFields, ___eventQueue_5)); }
	inline Queue_1_t1507975535 * get_eventQueue_5() const { return ___eventQueue_5; }
	inline Queue_1_t1507975535 ** get_address_of_eventQueue_5() { return &___eventQueue_5; }
	inline void set_eventQueue_5(Queue_1_t1507975535 * value)
	{
		___eventQueue_5 = value;
		Il2CppCodeGenWriteBarrier(&___eventQueue_5, value);
	}

	inline static int32_t get_offset_of_eventBackQueue_6() { return static_cast<int32_t>(offsetof(GameEventManager_t1523476787_StaticFields, ___eventBackQueue_6)); }
	inline Queue_1_t1507975535 * get_eventBackQueue_6() const { return ___eventBackQueue_6; }
	inline Queue_1_t1507975535 ** get_address_of_eventBackQueue_6() { return &___eventBackQueue_6; }
	inline void set_eventBackQueue_6(Queue_1_t1507975535 * value)
	{
		___eventBackQueue_6 = value;
		Il2CppCodeGenWriteBarrier(&___eventBackQueue_6, value);
	}

	inline static int32_t get_offset_of_eventPool_7() { return static_cast<int32_t>(offsetof(GameEventManager_t1523476787_StaticFields, ___eventPool_7)); }
	inline ObjectPool_1_t3308594811 * get_eventPool_7() const { return ___eventPool_7; }
	inline ObjectPool_1_t3308594811 ** get_address_of_eventPool_7() { return &___eventPool_7; }
	inline void set_eventPool_7(ObjectPool_1_t3308594811 * value)
	{
		___eventPool_7 = value;
		Il2CppCodeGenWriteBarrier(&___eventPool_7, value);
	}

	inline static int32_t get_offset_of_eventLock_8() { return static_cast<int32_t>(offsetof(GameEventManager_t1523476787_StaticFields, ___eventLock_8)); }
	inline Il2CppObject * get_eventLock_8() const { return ___eventLock_8; }
	inline Il2CppObject ** get_address_of_eventLock_8() { return &___eventLock_8; }
	inline void set_eventLock_8(Il2CppObject * value)
	{
		___eventLock_8 = value;
		Il2CppCodeGenWriteBarrier(&___eventLock_8, value);
	}

	inline static int32_t get_offset_of_EnableEventFiring_9() { return static_cast<int32_t>(offsetof(GameEventManager_t1523476787_StaticFields, ___EnableEventFiring_9)); }
	inline bool get_EnableEventFiring_9() const { return ___EnableEventFiring_9; }
	inline bool* get_address_of_EnableEventFiring_9() { return &___EnableEventFiring_9; }
	inline void set_EnableEventFiring_9(bool value)
	{
		___EnableEventFiring_9 = value;
	}

	inline static int32_t get_offset_of_mainThreadID_10() { return static_cast<int32_t>(offsetof(GameEventManager_t1523476787_StaticFields, ___mainThreadID_10)); }
	inline int32_t get_mainThreadID_10() const { return ___mainThreadID_10; }
	inline int32_t* get_address_of_mainThreadID_10() { return &___mainThreadID_10; }
	inline void set_mainThreadID_10(int32_t value)
	{
		___mainThreadID_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
