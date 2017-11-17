#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CustomTableManager/PressTimer
struct  PressTimer_t2446953067  : public Il2CppObject
{
public:
	// System.Boolean CustomTableManager/PressTimer::press
	bool ___press_0;
	// System.Single CustomTableManager/PressTimer::timer
	float ___timer_1;

public:
	inline static int32_t get_offset_of_press_0() { return static_cast<int32_t>(offsetof(PressTimer_t2446953067, ___press_0)); }
	inline bool get_press_0() const { return ___press_0; }
	inline bool* get_address_of_press_0() { return &___press_0; }
	inline void set_press_0(bool value)
	{
		___press_0 = value;
	}

	inline static int32_t get_offset_of_timer_1() { return static_cast<int32_t>(offsetof(PressTimer_t2446953067, ___timer_1)); }
	inline float get_timer_1() const { return ___timer_1; }
	inline float* get_address_of_timer_1() { return &___timer_1; }
	inline void set_timer_1(float value)
	{
		___timer_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
