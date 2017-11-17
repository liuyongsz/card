#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Random
struct Random_t1044426839;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.SupportClass/ThreadSafeRandom
struct  ThreadSafeRandom_t4155706194  : public Il2CppObject
{
public:

public:
};

struct ThreadSafeRandom_t4155706194_StaticFields
{
public:
	// System.Random ExitGames.Client.Photon.SupportClass/ThreadSafeRandom::_r
	Random_t1044426839 * ____r_0;

public:
	inline static int32_t get_offset_of__r_0() { return static_cast<int32_t>(offsetof(ThreadSafeRandom_t4155706194_StaticFields, ____r_0)); }
	inline Random_t1044426839 * get__r_0() const { return ____r_0; }
	inline Random_t1044426839 ** get_address_of__r_0() { return &____r_0; }
	inline void set__r_0(Random_t1044426839 * value)
	{
		____r_0 = value;
		Il2CppCodeGenWriteBarrier(&____r_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
