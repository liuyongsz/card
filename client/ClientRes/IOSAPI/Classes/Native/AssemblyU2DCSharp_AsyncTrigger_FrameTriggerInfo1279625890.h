#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// AsyncTrigger/OnTrigger
struct OnTrigger_t3198001564;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AsyncTrigger/FrameTriggerInfo
struct  FrameTriggerInfo_t1279625890  : public Il2CppObject
{
public:
	// System.Int32 AsyncTrigger/FrameTriggerInfo::iFrameDelay
	int32_t ___iFrameDelay_0;
	// AsyncTrigger/OnTrigger AsyncTrigger/FrameTriggerInfo::onTrigger
	OnTrigger_t3198001564 * ___onTrigger_1;
	// System.Object[] AsyncTrigger/FrameTriggerInfo::args
	ObjectU5BU5D_t3614634134* ___args_2;

public:
	inline static int32_t get_offset_of_iFrameDelay_0() { return static_cast<int32_t>(offsetof(FrameTriggerInfo_t1279625890, ___iFrameDelay_0)); }
	inline int32_t get_iFrameDelay_0() const { return ___iFrameDelay_0; }
	inline int32_t* get_address_of_iFrameDelay_0() { return &___iFrameDelay_0; }
	inline void set_iFrameDelay_0(int32_t value)
	{
		___iFrameDelay_0 = value;
	}

	inline static int32_t get_offset_of_onTrigger_1() { return static_cast<int32_t>(offsetof(FrameTriggerInfo_t1279625890, ___onTrigger_1)); }
	inline OnTrigger_t3198001564 * get_onTrigger_1() const { return ___onTrigger_1; }
	inline OnTrigger_t3198001564 ** get_address_of_onTrigger_1() { return &___onTrigger_1; }
	inline void set_onTrigger_1(OnTrigger_t3198001564 * value)
	{
		___onTrigger_1 = value;
		Il2CppCodeGenWriteBarrier(&___onTrigger_1, value);
	}

	inline static int32_t get_offset_of_args_2() { return static_cast<int32_t>(offsetof(FrameTriggerInfo_t1279625890, ___args_2)); }
	inline ObjectU5BU5D_t3614634134* get_args_2() const { return ___args_2; }
	inline ObjectU5BU5D_t3614634134** get_address_of_args_2() { return &___args_2; }
	inline void set_args_2(ObjectU5BU5D_t3614634134* value)
	{
		___args_2 = value;
		Il2CppCodeGenWriteBarrier(&___args_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
