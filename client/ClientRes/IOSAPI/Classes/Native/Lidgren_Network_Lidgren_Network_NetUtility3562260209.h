#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.IPAddress
struct IPAddress_t1399971723;
// System.Security.Cryptography.SHA256
struct SHA256_t582564463;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lidgren.Network.NetUtility
struct  NetUtility_t3562260209  : public Il2CppObject
{
public:

public:
};

struct NetUtility_t3562260209_StaticFields
{
public:
	// System.Boolean Lidgren.Network.NetUtility::IsMono
	bool ___IsMono_0;
	// System.Net.IPAddress Lidgren.Network.NetUtility::s_broadcastAddress
	IPAddress_t1399971723 * ___s_broadcastAddress_1;
	// System.Int64 Lidgren.Network.NetUtility::s_timeInitialized
	int64_t ___s_timeInitialized_2;
	// System.Double Lidgren.Network.NetUtility::s_dInvFreq
	double ___s_dInvFreq_3;
	// System.Security.Cryptography.SHA256 Lidgren.Network.NetUtility::s_sha
	SHA256_t582564463 * ___s_sha_4;

public:
	inline static int32_t get_offset_of_IsMono_0() { return static_cast<int32_t>(offsetof(NetUtility_t3562260209_StaticFields, ___IsMono_0)); }
	inline bool get_IsMono_0() const { return ___IsMono_0; }
	inline bool* get_address_of_IsMono_0() { return &___IsMono_0; }
	inline void set_IsMono_0(bool value)
	{
		___IsMono_0 = value;
	}

	inline static int32_t get_offset_of_s_broadcastAddress_1() { return static_cast<int32_t>(offsetof(NetUtility_t3562260209_StaticFields, ___s_broadcastAddress_1)); }
	inline IPAddress_t1399971723 * get_s_broadcastAddress_1() const { return ___s_broadcastAddress_1; }
	inline IPAddress_t1399971723 ** get_address_of_s_broadcastAddress_1() { return &___s_broadcastAddress_1; }
	inline void set_s_broadcastAddress_1(IPAddress_t1399971723 * value)
	{
		___s_broadcastAddress_1 = value;
		Il2CppCodeGenWriteBarrier(&___s_broadcastAddress_1, value);
	}

	inline static int32_t get_offset_of_s_timeInitialized_2() { return static_cast<int32_t>(offsetof(NetUtility_t3562260209_StaticFields, ___s_timeInitialized_2)); }
	inline int64_t get_s_timeInitialized_2() const { return ___s_timeInitialized_2; }
	inline int64_t* get_address_of_s_timeInitialized_2() { return &___s_timeInitialized_2; }
	inline void set_s_timeInitialized_2(int64_t value)
	{
		___s_timeInitialized_2 = value;
	}

	inline static int32_t get_offset_of_s_dInvFreq_3() { return static_cast<int32_t>(offsetof(NetUtility_t3562260209_StaticFields, ___s_dInvFreq_3)); }
	inline double get_s_dInvFreq_3() const { return ___s_dInvFreq_3; }
	inline double* get_address_of_s_dInvFreq_3() { return &___s_dInvFreq_3; }
	inline void set_s_dInvFreq_3(double value)
	{
		___s_dInvFreq_3 = value;
	}

	inline static int32_t get_offset_of_s_sha_4() { return static_cast<int32_t>(offsetof(NetUtility_t3562260209_StaticFields, ___s_sha_4)); }
	inline SHA256_t582564463 * get_s_sha_4() const { return ___s_sha_4; }
	inline SHA256_t582564463 ** get_address_of_s_sha_4() { return &___s_sha_4; }
	inline void set_s_sha_4(SHA256_t582564463 * value)
	{
		___s_sha_4 = value;
		Il2CppCodeGenWriteBarrier(&___s_sha_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
