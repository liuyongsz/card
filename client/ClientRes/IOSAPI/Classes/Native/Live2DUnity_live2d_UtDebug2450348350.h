#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,live2d.UtDebug/DebugTimer>
struct Dictionary_2_t120258975;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.UtDebug
struct  UtDebug_t2450348350  : public Il2CppObject
{
public:

public:
};

struct UtDebug_t2450348350_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,live2d.UtDebug/DebugTimer> live2d.UtDebug::timerMap
	Dictionary_2_t120258975 * ___timerMap_0;

public:
	inline static int32_t get_offset_of_timerMap_0() { return static_cast<int32_t>(offsetof(UtDebug_t2450348350_StaticFields, ___timerMap_0)); }
	inline Dictionary_2_t120258975 * get_timerMap_0() const { return ___timerMap_0; }
	inline Dictionary_2_t120258975 ** get_address_of_timerMap_0() { return &___timerMap_0; }
	inline void set_timerMap_0(Dictionary_2_t120258975 * value)
	{
		___timerMap_0 = value;
		Il2CppCodeGenWriteBarrier(&___timerMap_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
