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

// Lidgren.Network.NetTime
struct  NetTime_t3056501352  : public Il2CppObject
{
public:

public:
};

struct NetTime_t3056501352_StaticFields
{
public:
	// System.Int64 Lidgren.Network.NetTime::s_timeInitialized
	int64_t ___s_timeInitialized_0;
	// System.Double Lidgren.Network.NetTime::s_dInvFreq
	double ___s_dInvFreq_1;

public:
	inline static int32_t get_offset_of_s_timeInitialized_0() { return static_cast<int32_t>(offsetof(NetTime_t3056501352_StaticFields, ___s_timeInitialized_0)); }
	inline int64_t get_s_timeInitialized_0() const { return ___s_timeInitialized_0; }
	inline int64_t* get_address_of_s_timeInitialized_0() { return &___s_timeInitialized_0; }
	inline void set_s_timeInitialized_0(int64_t value)
	{
		___s_timeInitialized_0 = value;
	}

	inline static int32_t get_offset_of_s_dInvFreq_1() { return static_cast<int32_t>(offsetof(NetTime_t3056501352_StaticFields, ___s_dInvFreq_1)); }
	inline double get_s_dInvFreq_1() const { return ___s_dInvFreq_1; }
	inline double* get_address_of_s_dInvFreq_1() { return &___s_dInvFreq_1; }
	inline void set_s_dInvFreq_1(double value)
	{
		___s_dInvFreq_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
