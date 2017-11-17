#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Threading.Thread
struct Thread_t241561612;
// System.Action`1<NotiData>
struct Action_1_t2706202782;
// System.Diagnostics.Stopwatch
struct Stopwatch_t1380178105;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.Queue`1<ThreadEvent>
struct Queue_1_t581160743;
// LuaFramework.ThreadManager/ThreadSyncEvent
struct ThreadSyncEvent_t2081187083;
// LuaFramework.ThreadManager
struct ThreadManager_t220076083;
// System.Collections.Generic.Dictionary`2<System.Net.WebClient,System.Int64>
struct Dictionary_2_t2908442563;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LuaFramework.ThreadManager
struct  ThreadManager_t220076083  : public MonoBehaviour_t1158329972
{
public:
	// System.Threading.Thread LuaFramework.ThreadManager::thread
	Thread_t241561612 * ___thread_2;
	// System.Action`1<NotiData> LuaFramework.ThreadManager::func
	Action_1_t2706202782 * ___func_3;
	// System.Diagnostics.Stopwatch LuaFramework.ThreadManager::sw
	Stopwatch_t1380178105 * ___sw_4;
	// System.String LuaFramework.ThreadManager::currDownFile
	String_t* ___currDownFile_5;
	// LuaFramework.ThreadManager/ThreadSyncEvent LuaFramework.ThreadManager::m_SyncEvent
	ThreadSyncEvent_t2081187083 * ___m_SyncEvent_8;
	// System.Collections.Generic.Dictionary`2<System.Net.WebClient,System.Int64> LuaFramework.ThreadManager::m_loadingLengthDic
	Dictionary_2_t2908442563 * ___m_loadingLengthDic_10;
	// System.Single LuaFramework.ThreadManager::LoadingProgress
	float ___LoadingProgress_11;

public:
	inline static int32_t get_offset_of_thread_2() { return static_cast<int32_t>(offsetof(ThreadManager_t220076083, ___thread_2)); }
	inline Thread_t241561612 * get_thread_2() const { return ___thread_2; }
	inline Thread_t241561612 ** get_address_of_thread_2() { return &___thread_2; }
	inline void set_thread_2(Thread_t241561612 * value)
	{
		___thread_2 = value;
		Il2CppCodeGenWriteBarrier(&___thread_2, value);
	}

	inline static int32_t get_offset_of_func_3() { return static_cast<int32_t>(offsetof(ThreadManager_t220076083, ___func_3)); }
	inline Action_1_t2706202782 * get_func_3() const { return ___func_3; }
	inline Action_1_t2706202782 ** get_address_of_func_3() { return &___func_3; }
	inline void set_func_3(Action_1_t2706202782 * value)
	{
		___func_3 = value;
		Il2CppCodeGenWriteBarrier(&___func_3, value);
	}

	inline static int32_t get_offset_of_sw_4() { return static_cast<int32_t>(offsetof(ThreadManager_t220076083, ___sw_4)); }
	inline Stopwatch_t1380178105 * get_sw_4() const { return ___sw_4; }
	inline Stopwatch_t1380178105 ** get_address_of_sw_4() { return &___sw_4; }
	inline void set_sw_4(Stopwatch_t1380178105 * value)
	{
		___sw_4 = value;
		Il2CppCodeGenWriteBarrier(&___sw_4, value);
	}

	inline static int32_t get_offset_of_currDownFile_5() { return static_cast<int32_t>(offsetof(ThreadManager_t220076083, ___currDownFile_5)); }
	inline String_t* get_currDownFile_5() const { return ___currDownFile_5; }
	inline String_t** get_address_of_currDownFile_5() { return &___currDownFile_5; }
	inline void set_currDownFile_5(String_t* value)
	{
		___currDownFile_5 = value;
		Il2CppCodeGenWriteBarrier(&___currDownFile_5, value);
	}

	inline static int32_t get_offset_of_m_SyncEvent_8() { return static_cast<int32_t>(offsetof(ThreadManager_t220076083, ___m_SyncEvent_8)); }
	inline ThreadSyncEvent_t2081187083 * get_m_SyncEvent_8() const { return ___m_SyncEvent_8; }
	inline ThreadSyncEvent_t2081187083 ** get_address_of_m_SyncEvent_8() { return &___m_SyncEvent_8; }
	inline void set_m_SyncEvent_8(ThreadSyncEvent_t2081187083 * value)
	{
		___m_SyncEvent_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_SyncEvent_8, value);
	}

	inline static int32_t get_offset_of_m_loadingLengthDic_10() { return static_cast<int32_t>(offsetof(ThreadManager_t220076083, ___m_loadingLengthDic_10)); }
	inline Dictionary_2_t2908442563 * get_m_loadingLengthDic_10() const { return ___m_loadingLengthDic_10; }
	inline Dictionary_2_t2908442563 ** get_address_of_m_loadingLengthDic_10() { return &___m_loadingLengthDic_10; }
	inline void set_m_loadingLengthDic_10(Dictionary_2_t2908442563 * value)
	{
		___m_loadingLengthDic_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_loadingLengthDic_10, value);
	}

	inline static int32_t get_offset_of_LoadingProgress_11() { return static_cast<int32_t>(offsetof(ThreadManager_t220076083, ___LoadingProgress_11)); }
	inline float get_LoadingProgress_11() const { return ___LoadingProgress_11; }
	inline float* get_address_of_LoadingProgress_11() { return &___LoadingProgress_11; }
	inline void set_LoadingProgress_11(float value)
	{
		___LoadingProgress_11 = value;
	}
};

struct ThreadManager_t220076083_StaticFields
{
public:
	// System.Object LuaFramework.ThreadManager::m_lockObject
	Il2CppObject * ___m_lockObject_6;
	// System.Collections.Generic.Queue`1<ThreadEvent> LuaFramework.ThreadManager::events
	Queue_1_t581160743 * ___events_7;
	// LuaFramework.ThreadManager LuaFramework.ThreadManager::m_instance
	ThreadManager_t220076083 * ___m_instance_9;

public:
	inline static int32_t get_offset_of_m_lockObject_6() { return static_cast<int32_t>(offsetof(ThreadManager_t220076083_StaticFields, ___m_lockObject_6)); }
	inline Il2CppObject * get_m_lockObject_6() const { return ___m_lockObject_6; }
	inline Il2CppObject ** get_address_of_m_lockObject_6() { return &___m_lockObject_6; }
	inline void set_m_lockObject_6(Il2CppObject * value)
	{
		___m_lockObject_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_lockObject_6, value);
	}

	inline static int32_t get_offset_of_events_7() { return static_cast<int32_t>(offsetof(ThreadManager_t220076083_StaticFields, ___events_7)); }
	inline Queue_1_t581160743 * get_events_7() const { return ___events_7; }
	inline Queue_1_t581160743 ** get_address_of_events_7() { return &___events_7; }
	inline void set_events_7(Queue_1_t581160743 * value)
	{
		___events_7 = value;
		Il2CppCodeGenWriteBarrier(&___events_7, value);
	}

	inline static int32_t get_offset_of_m_instance_9() { return static_cast<int32_t>(offsetof(ThreadManager_t220076083_StaticFields, ___m_instance_9)); }
	inline ThreadManager_t220076083 * get_m_instance_9() const { return ___m_instance_9; }
	inline ThreadManager_t220076083 ** get_address_of_m_instance_9() { return &___m_instance_9; }
	inline void set_m_instance_9(ThreadManager_t220076083 * value)
	{
		___m_instance_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_instance_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
