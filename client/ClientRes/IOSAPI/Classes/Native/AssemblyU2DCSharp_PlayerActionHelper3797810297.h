#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerActionHelper
struct  PlayerActionHelper_t3797810297  : public Il2CppObject
{
public:
	// UnityEngine.Events.UnityAction PlayerActionHelper::RunCallBack
	UnityAction_t4025899511 * ___RunCallBack_0;
	// System.Single PlayerActionHelper::RunTimer
	float ___RunTimer_1;
	// System.Single PlayerActionHelper::m_runCurrentTimer
	float ___m_runCurrentTimer_2;
	// System.Boolean PlayerActionHelper::m_run
	bool ___m_run_3;

public:
	inline static int32_t get_offset_of_RunCallBack_0() { return static_cast<int32_t>(offsetof(PlayerActionHelper_t3797810297, ___RunCallBack_0)); }
	inline UnityAction_t4025899511 * get_RunCallBack_0() const { return ___RunCallBack_0; }
	inline UnityAction_t4025899511 ** get_address_of_RunCallBack_0() { return &___RunCallBack_0; }
	inline void set_RunCallBack_0(UnityAction_t4025899511 * value)
	{
		___RunCallBack_0 = value;
		Il2CppCodeGenWriteBarrier(&___RunCallBack_0, value);
	}

	inline static int32_t get_offset_of_RunTimer_1() { return static_cast<int32_t>(offsetof(PlayerActionHelper_t3797810297, ___RunTimer_1)); }
	inline float get_RunTimer_1() const { return ___RunTimer_1; }
	inline float* get_address_of_RunTimer_1() { return &___RunTimer_1; }
	inline void set_RunTimer_1(float value)
	{
		___RunTimer_1 = value;
	}

	inline static int32_t get_offset_of_m_runCurrentTimer_2() { return static_cast<int32_t>(offsetof(PlayerActionHelper_t3797810297, ___m_runCurrentTimer_2)); }
	inline float get_m_runCurrentTimer_2() const { return ___m_runCurrentTimer_2; }
	inline float* get_address_of_m_runCurrentTimer_2() { return &___m_runCurrentTimer_2; }
	inline void set_m_runCurrentTimer_2(float value)
	{
		___m_runCurrentTimer_2 = value;
	}

	inline static int32_t get_offset_of_m_run_3() { return static_cast<int32_t>(offsetof(PlayerActionHelper_t3797810297, ___m_run_3)); }
	inline bool get_m_run_3() const { return ___m_run_3; }
	inline bool* get_address_of_m_run_3() { return &___m_run_3; }
	inline void set_m_run_3(bool value)
	{
		___m_run_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
