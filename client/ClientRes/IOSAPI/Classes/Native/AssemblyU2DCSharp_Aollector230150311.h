#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Queue`1<System.Object>>
struct Dictionary_2_t151496731;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Aollector
struct  Aollector_t230150311  : public Il2CppObject
{
public:

public:
};

struct Aollector_t230150311_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Queue`1<System.Object>> Aollector::mQueues
	Dictionary_2_t151496731 * ___mQueues_0;

public:
	inline static int32_t get_offset_of_mQueues_0() { return static_cast<int32_t>(offsetof(Aollector_t230150311_StaticFields, ___mQueues_0)); }
	inline Dictionary_2_t151496731 * get_mQueues_0() const { return ___mQueues_0; }
	inline Dictionary_2_t151496731 ** get_address_of_mQueues_0() { return &___mQueues_0; }
	inline void set_mQueues_0(Dictionary_2_t151496731 * value)
	{
		___mQueues_0 = value;
		Il2CppCodeGenWriteBarrier(&___mQueues_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
