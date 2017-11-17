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

// AsyncTrigger/TriggerInfo
struct  TriggerInfo_t2525418405  : public Il2CppObject
{
public:
	// System.String AsyncTrigger/TriggerInfo::strTriggerName
	String_t* ___strTriggerName_0;
	// System.Int32 AsyncTrigger/TriggerInfo::iTriggerCount
	int32_t ___iTriggerCount_1;
	// AsyncTrigger/OnTrigger AsyncTrigger/TriggerInfo::onTrigger
	OnTrigger_t3198001564 * ___onTrigger_2;
	// System.Object[] AsyncTrigger/TriggerInfo::args
	ObjectU5BU5D_t3614634134* ___args_3;

public:
	inline static int32_t get_offset_of_strTriggerName_0() { return static_cast<int32_t>(offsetof(TriggerInfo_t2525418405, ___strTriggerName_0)); }
	inline String_t* get_strTriggerName_0() const { return ___strTriggerName_0; }
	inline String_t** get_address_of_strTriggerName_0() { return &___strTriggerName_0; }
	inline void set_strTriggerName_0(String_t* value)
	{
		___strTriggerName_0 = value;
		Il2CppCodeGenWriteBarrier(&___strTriggerName_0, value);
	}

	inline static int32_t get_offset_of_iTriggerCount_1() { return static_cast<int32_t>(offsetof(TriggerInfo_t2525418405, ___iTriggerCount_1)); }
	inline int32_t get_iTriggerCount_1() const { return ___iTriggerCount_1; }
	inline int32_t* get_address_of_iTriggerCount_1() { return &___iTriggerCount_1; }
	inline void set_iTriggerCount_1(int32_t value)
	{
		___iTriggerCount_1 = value;
	}

	inline static int32_t get_offset_of_onTrigger_2() { return static_cast<int32_t>(offsetof(TriggerInfo_t2525418405, ___onTrigger_2)); }
	inline OnTrigger_t3198001564 * get_onTrigger_2() const { return ___onTrigger_2; }
	inline OnTrigger_t3198001564 ** get_address_of_onTrigger_2() { return &___onTrigger_2; }
	inline void set_onTrigger_2(OnTrigger_t3198001564 * value)
	{
		___onTrigger_2 = value;
		Il2CppCodeGenWriteBarrier(&___onTrigger_2, value);
	}

	inline static int32_t get_offset_of_args_3() { return static_cast<int32_t>(offsetof(TriggerInfo_t2525418405, ___args_3)); }
	inline ObjectU5BU5D_t3614634134* get_args_3() const { return ___args_3; }
	inline ObjectU5BU5D_t3614634134** get_address_of_args_3() { return &___args_3; }
	inline void set_args_3(ObjectU5BU5D_t3614634134* value)
	{
		___args_3 = value;
		Il2CppCodeGenWriteBarrier(&___args_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
