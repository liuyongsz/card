#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// TimerManager/TimerManagerHandler
struct TimerManagerHandler_t3618852277;
// TimerManager/TimerManagerHandlerArgs
struct TimerManagerHandlerArgs_t2673666506;
// TimerManager/TimerManagerCountHandlerArgs
struct TimerManagerCountHandlerArgs_t3148830105;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_TimerManager_TIMER_MODE3322086008.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TimerManager/Timer
struct  Timer_t1674779990  : public Il2CppObject
{
public:
	// System.String TimerManager/Timer::m_Name
	String_t* ___m_Name_0;
	// TimerManager/TIMER_MODE TimerManager/Timer::m_Mode
	int32_t ___m_Mode_1;
	// System.Single TimerManager/Timer::m_StartTime
	float ___m_StartTime_2;
	// System.Single TimerManager/Timer::m_duration
	float ___m_duration_3;
	// System.Single TimerManager/Timer::m_time
	float ___m_time_4;
	// TimerManager/TimerManagerHandler TimerManager/Timer::m_TimerEvent
	TimerManagerHandler_t3618852277 * ___m_TimerEvent_5;
	// TimerManager/TimerManagerHandlerArgs TimerManager/Timer::m_TimerArgsEvent
	TimerManagerHandlerArgs_t2673666506 * ___m_TimerArgsEvent_6;
	// TimerManager/TimerManagerCountHandlerArgs TimerManager/Timer::m_TimerCountArgsEvent
	TimerManagerCountHandlerArgs_t3148830105 * ___m_TimerCountArgsEvent_7;
	// System.Object[] TimerManager/Timer::m_Args
	ObjectU5BU5D_t3614634134* ___m_Args_8;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(Timer_t1674779990, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Name_0, value);
	}

	inline static int32_t get_offset_of_m_Mode_1() { return static_cast<int32_t>(offsetof(Timer_t1674779990, ___m_Mode_1)); }
	inline int32_t get_m_Mode_1() const { return ___m_Mode_1; }
	inline int32_t* get_address_of_m_Mode_1() { return &___m_Mode_1; }
	inline void set_m_Mode_1(int32_t value)
	{
		___m_Mode_1 = value;
	}

	inline static int32_t get_offset_of_m_StartTime_2() { return static_cast<int32_t>(offsetof(Timer_t1674779990, ___m_StartTime_2)); }
	inline float get_m_StartTime_2() const { return ___m_StartTime_2; }
	inline float* get_address_of_m_StartTime_2() { return &___m_StartTime_2; }
	inline void set_m_StartTime_2(float value)
	{
		___m_StartTime_2 = value;
	}

	inline static int32_t get_offset_of_m_duration_3() { return static_cast<int32_t>(offsetof(Timer_t1674779990, ___m_duration_3)); }
	inline float get_m_duration_3() const { return ___m_duration_3; }
	inline float* get_address_of_m_duration_3() { return &___m_duration_3; }
	inline void set_m_duration_3(float value)
	{
		___m_duration_3 = value;
	}

	inline static int32_t get_offset_of_m_time_4() { return static_cast<int32_t>(offsetof(Timer_t1674779990, ___m_time_4)); }
	inline float get_m_time_4() const { return ___m_time_4; }
	inline float* get_address_of_m_time_4() { return &___m_time_4; }
	inline void set_m_time_4(float value)
	{
		___m_time_4 = value;
	}

	inline static int32_t get_offset_of_m_TimerEvent_5() { return static_cast<int32_t>(offsetof(Timer_t1674779990, ___m_TimerEvent_5)); }
	inline TimerManagerHandler_t3618852277 * get_m_TimerEvent_5() const { return ___m_TimerEvent_5; }
	inline TimerManagerHandler_t3618852277 ** get_address_of_m_TimerEvent_5() { return &___m_TimerEvent_5; }
	inline void set_m_TimerEvent_5(TimerManagerHandler_t3618852277 * value)
	{
		___m_TimerEvent_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_TimerEvent_5, value);
	}

	inline static int32_t get_offset_of_m_TimerArgsEvent_6() { return static_cast<int32_t>(offsetof(Timer_t1674779990, ___m_TimerArgsEvent_6)); }
	inline TimerManagerHandlerArgs_t2673666506 * get_m_TimerArgsEvent_6() const { return ___m_TimerArgsEvent_6; }
	inline TimerManagerHandlerArgs_t2673666506 ** get_address_of_m_TimerArgsEvent_6() { return &___m_TimerArgsEvent_6; }
	inline void set_m_TimerArgsEvent_6(TimerManagerHandlerArgs_t2673666506 * value)
	{
		___m_TimerArgsEvent_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_TimerArgsEvent_6, value);
	}

	inline static int32_t get_offset_of_m_TimerCountArgsEvent_7() { return static_cast<int32_t>(offsetof(Timer_t1674779990, ___m_TimerCountArgsEvent_7)); }
	inline TimerManagerCountHandlerArgs_t3148830105 * get_m_TimerCountArgsEvent_7() const { return ___m_TimerCountArgsEvent_7; }
	inline TimerManagerCountHandlerArgs_t3148830105 ** get_address_of_m_TimerCountArgsEvent_7() { return &___m_TimerCountArgsEvent_7; }
	inline void set_m_TimerCountArgsEvent_7(TimerManagerCountHandlerArgs_t3148830105 * value)
	{
		___m_TimerCountArgsEvent_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_TimerCountArgsEvent_7, value);
	}

	inline static int32_t get_offset_of_m_Args_8() { return static_cast<int32_t>(offsetof(Timer_t1674779990, ___m_Args_8)); }
	inline ObjectU5BU5D_t3614634134* get_m_Args_8() const { return ___m_Args_8; }
	inline ObjectU5BU5D_t3614634134** get_address_of_m_Args_8() { return &___m_Args_8; }
	inline void set_m_Args_8(ObjectU5BU5D_t3614634134* value)
	{
		___m_Args_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_Args_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
