#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DictionaryEx`2<System.String,TimerManager/Timer>
struct DictionaryEx_2_t1200867791;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TimerManager
struct  TimerManager_t2982693712  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct TimerManager_t2982693712_StaticFields
{
public:
	// DictionaryEx`2<System.String,TimerManager/Timer> TimerManager::m_TimerList
	DictionaryEx_2_t1200867791 * ___m_TimerList_2;
	// DictionaryEx`2<System.String,TimerManager/Timer> TimerManager::m_AddTimerList
	DictionaryEx_2_t1200867791 * ___m_AddTimerList_3;
	// System.Collections.Generic.List`1<System.String> TimerManager::m_DestroyList
	List_1_t1398341365 * ___m_DestroyList_4;
	// System.Single TimerManager::m_oldRealtimeSinceStartup
	float ___m_oldRealtimeSinceStartup_5;
	// System.Single TimerManager::m_curRealtimeSinceStartup
	float ___m_curRealtimeSinceStartup_6;
	// System.Single TimerManager::DeltaTime
	float ___DeltaTime_7;

public:
	inline static int32_t get_offset_of_m_TimerList_2() { return static_cast<int32_t>(offsetof(TimerManager_t2982693712_StaticFields, ___m_TimerList_2)); }
	inline DictionaryEx_2_t1200867791 * get_m_TimerList_2() const { return ___m_TimerList_2; }
	inline DictionaryEx_2_t1200867791 ** get_address_of_m_TimerList_2() { return &___m_TimerList_2; }
	inline void set_m_TimerList_2(DictionaryEx_2_t1200867791 * value)
	{
		___m_TimerList_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_TimerList_2, value);
	}

	inline static int32_t get_offset_of_m_AddTimerList_3() { return static_cast<int32_t>(offsetof(TimerManager_t2982693712_StaticFields, ___m_AddTimerList_3)); }
	inline DictionaryEx_2_t1200867791 * get_m_AddTimerList_3() const { return ___m_AddTimerList_3; }
	inline DictionaryEx_2_t1200867791 ** get_address_of_m_AddTimerList_3() { return &___m_AddTimerList_3; }
	inline void set_m_AddTimerList_3(DictionaryEx_2_t1200867791 * value)
	{
		___m_AddTimerList_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_AddTimerList_3, value);
	}

	inline static int32_t get_offset_of_m_DestroyList_4() { return static_cast<int32_t>(offsetof(TimerManager_t2982693712_StaticFields, ___m_DestroyList_4)); }
	inline List_1_t1398341365 * get_m_DestroyList_4() const { return ___m_DestroyList_4; }
	inline List_1_t1398341365 ** get_address_of_m_DestroyList_4() { return &___m_DestroyList_4; }
	inline void set_m_DestroyList_4(List_1_t1398341365 * value)
	{
		___m_DestroyList_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_DestroyList_4, value);
	}

	inline static int32_t get_offset_of_m_oldRealtimeSinceStartup_5() { return static_cast<int32_t>(offsetof(TimerManager_t2982693712_StaticFields, ___m_oldRealtimeSinceStartup_5)); }
	inline float get_m_oldRealtimeSinceStartup_5() const { return ___m_oldRealtimeSinceStartup_5; }
	inline float* get_address_of_m_oldRealtimeSinceStartup_5() { return &___m_oldRealtimeSinceStartup_5; }
	inline void set_m_oldRealtimeSinceStartup_5(float value)
	{
		___m_oldRealtimeSinceStartup_5 = value;
	}

	inline static int32_t get_offset_of_m_curRealtimeSinceStartup_6() { return static_cast<int32_t>(offsetof(TimerManager_t2982693712_StaticFields, ___m_curRealtimeSinceStartup_6)); }
	inline float get_m_curRealtimeSinceStartup_6() const { return ___m_curRealtimeSinceStartup_6; }
	inline float* get_address_of_m_curRealtimeSinceStartup_6() { return &___m_curRealtimeSinceStartup_6; }
	inline void set_m_curRealtimeSinceStartup_6(float value)
	{
		___m_curRealtimeSinceStartup_6 = value;
	}

	inline static int32_t get_offset_of_DeltaTime_7() { return static_cast<int32_t>(offsetof(TimerManager_t2982693712_StaticFields, ___DeltaTime_7)); }
	inline float get_DeltaTime_7() const { return ___DeltaTime_7; }
	inline float* get_address_of_DeltaTime_7() { return &___DeltaTime_7; }
	inline void set_DeltaTime_7(float value)
	{
		___DeltaTime_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
