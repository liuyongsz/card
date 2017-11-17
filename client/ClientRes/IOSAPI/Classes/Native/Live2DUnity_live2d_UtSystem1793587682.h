#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Diagnostics.Stopwatch
struct Stopwatch_t1380178105;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.UtSystem
struct  UtSystem_t1793587682  : public Il2CppObject
{
public:

public:
};

struct UtSystem_t1793587682_StaticFields
{
public:
	// System.Diagnostics.Stopwatch live2d.UtSystem::sw
	Stopwatch_t1380178105 * ___sw_0;
	// System.Int64 live2d.UtSystem::userTimeMSec
	int64_t ___userTimeMSec_1;

public:
	inline static int32_t get_offset_of_sw_0() { return static_cast<int32_t>(offsetof(UtSystem_t1793587682_StaticFields, ___sw_0)); }
	inline Stopwatch_t1380178105 * get_sw_0() const { return ___sw_0; }
	inline Stopwatch_t1380178105 ** get_address_of_sw_0() { return &___sw_0; }
	inline void set_sw_0(Stopwatch_t1380178105 * value)
	{
		___sw_0 = value;
		Il2CppCodeGenWriteBarrier(&___sw_0, value);
	}

	inline static int32_t get_offset_of_userTimeMSec_1() { return static_cast<int32_t>(offsetof(UtSystem_t1793587682_StaticFields, ___userTimeMSec_1)); }
	inline int64_t get_userTimeMSec_1() const { return ___userTimeMSec_1; }
	inline int64_t* get_address_of_userTimeMSec_1() { return &___userTimeMSec_1; }
	inline void set_userTimeMSec_1(int64_t value)
	{
		___userTimeMSec_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
