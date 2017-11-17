#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<live2d.PhysicsHair>
struct List_1_t609521505;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.framework.L2DPhysics
struct  L2DPhysics_t11740845  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<live2d.PhysicsHair> live2d.framework.L2DPhysics::physicsList
	List_1_t609521505 * ___physicsList_0;
	// System.Int64 live2d.framework.L2DPhysics::startTimeMSec
	int64_t ___startTimeMSec_1;

public:
	inline static int32_t get_offset_of_physicsList_0() { return static_cast<int32_t>(offsetof(L2DPhysics_t11740845, ___physicsList_0)); }
	inline List_1_t609521505 * get_physicsList_0() const { return ___physicsList_0; }
	inline List_1_t609521505 ** get_address_of_physicsList_0() { return &___physicsList_0; }
	inline void set_physicsList_0(List_1_t609521505 * value)
	{
		___physicsList_0 = value;
		Il2CppCodeGenWriteBarrier(&___physicsList_0, value);
	}

	inline static int32_t get_offset_of_startTimeMSec_1() { return static_cast<int32_t>(offsetof(L2DPhysics_t11740845, ___startTimeMSec_1)); }
	inline int64_t get_startTimeMSec_1() const { return ___startTimeMSec_1; }
	inline int64_t* get_address_of_startTimeMSec_1() { return &___startTimeMSec_1; }
	inline void set_startTimeMSec_1(int64_t value)
	{
		___startTimeMSec_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
