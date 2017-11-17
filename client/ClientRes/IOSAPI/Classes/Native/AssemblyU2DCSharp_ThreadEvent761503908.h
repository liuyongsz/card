#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Object>
struct List_1_t2058570427;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_NotificationID248744986.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ThreadEvent
struct  ThreadEvent_t761503908  : public Il2CppObject
{
public:
	// NotificationID ThreadEvent::Key
	int32_t ___Key_0;
	// System.Collections.Generic.List`1<System.Object> ThreadEvent::evParams
	List_1_t2058570427 * ___evParams_1;

public:
	inline static int32_t get_offset_of_Key_0() { return static_cast<int32_t>(offsetof(ThreadEvent_t761503908, ___Key_0)); }
	inline int32_t get_Key_0() const { return ___Key_0; }
	inline int32_t* get_address_of_Key_0() { return &___Key_0; }
	inline void set_Key_0(int32_t value)
	{
		___Key_0 = value;
	}

	inline static int32_t get_offset_of_evParams_1() { return static_cast<int32_t>(offsetof(ThreadEvent_t761503908, ___evParams_1)); }
	inline List_1_t2058570427 * get_evParams_1() const { return ___evParams_1; }
	inline List_1_t2058570427 ** get_address_of_evParams_1() { return &___evParams_1; }
	inline void set_evParams_1(List_1_t2058570427 * value)
	{
		___evParams_1 = value;
		Il2CppCodeGenWriteBarrier(&___evParams_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
