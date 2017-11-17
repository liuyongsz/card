#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,AsyncTrigger/TriggerInfo>
struct Dictionary_2_t145230371;
// System.Collections.Generic.List`1<AsyncTrigger/FrameTriggerInfo>
struct List_1_t648747022;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AsyncTrigger
struct  AsyncTrigger_t2868772296  : public Il2CppObject
{
public:

public:
};

struct AsyncTrigger_t2868772296_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,AsyncTrigger/TriggerInfo> AsyncTrigger::mTriggers
	Dictionary_2_t145230371 * ___mTriggers_0;
	// System.Collections.Generic.List`1<AsyncTrigger/FrameTriggerInfo> AsyncTrigger::mFrameTrigger
	List_1_t648747022 * ___mFrameTrigger_1;

public:
	inline static int32_t get_offset_of_mTriggers_0() { return static_cast<int32_t>(offsetof(AsyncTrigger_t2868772296_StaticFields, ___mTriggers_0)); }
	inline Dictionary_2_t145230371 * get_mTriggers_0() const { return ___mTriggers_0; }
	inline Dictionary_2_t145230371 ** get_address_of_mTriggers_0() { return &___mTriggers_0; }
	inline void set_mTriggers_0(Dictionary_2_t145230371 * value)
	{
		___mTriggers_0 = value;
		Il2CppCodeGenWriteBarrier(&___mTriggers_0, value);
	}

	inline static int32_t get_offset_of_mFrameTrigger_1() { return static_cast<int32_t>(offsetof(AsyncTrigger_t2868772296_StaticFields, ___mFrameTrigger_1)); }
	inline List_1_t648747022 * get_mFrameTrigger_1() const { return ___mFrameTrigger_1; }
	inline List_1_t648747022 ** get_address_of_mFrameTrigger_1() { return &___mFrameTrigger_1; }
	inline void set_mFrameTrigger_1(List_1_t648747022 * value)
	{
		___mFrameTrigger_1 = value;
		Il2CppCodeGenWriteBarrier(&___mFrameTrigger_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
