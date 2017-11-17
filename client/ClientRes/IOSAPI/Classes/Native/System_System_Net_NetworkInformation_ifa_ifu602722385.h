#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"
#include "mscorlib_System_IntPtr2504060609.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.ifa_ifu
struct  ifa_ifu_t602722385 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.IntPtr System.Net.NetworkInformation.ifa_ifu::ifu_broadaddr
			IntPtr_t ___ifu_broadaddr_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			IntPtr_t ___ifu_broadaddr_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.IntPtr System.Net.NetworkInformation.ifa_ifu::ifu_dstaddr
			IntPtr_t ___ifu_dstaddr_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			IntPtr_t ___ifu_dstaddr_1_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_ifu_broadaddr_0() { return static_cast<int32_t>(offsetof(ifa_ifu_t602722385, ___ifu_broadaddr_0)); }
	inline IntPtr_t get_ifu_broadaddr_0() const { return ___ifu_broadaddr_0; }
	inline IntPtr_t* get_address_of_ifu_broadaddr_0() { return &___ifu_broadaddr_0; }
	inline void set_ifu_broadaddr_0(IntPtr_t value)
	{
		___ifu_broadaddr_0 = value;
	}

	inline static int32_t get_offset_of_ifu_dstaddr_1() { return static_cast<int32_t>(offsetof(ifa_ifu_t602722385, ___ifu_dstaddr_1)); }
	inline IntPtr_t get_ifu_dstaddr_1() const { return ___ifu_dstaddr_1; }
	inline IntPtr_t* get_address_of_ifu_dstaddr_1() { return &___ifu_dstaddr_1; }
	inline void set_ifu_dstaddr_1(IntPtr_t value)
	{
		___ifu_dstaddr_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.Net.NetworkInformation.ifa_ifu
struct ifa_ifu_t602722385_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___ifu_broadaddr_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___ifu_broadaddr_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___ifu_dstaddr_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___ifu_dstaddr_1_forAlignmentOnly;
		};
	};
};
// Native definition for marshalling of: System.Net.NetworkInformation.ifa_ifu
struct ifa_ifu_t602722385_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___ifu_broadaddr_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___ifu_broadaddr_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___ifu_dstaddr_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___ifu_dstaddr_1_forAlignmentOnly;
		};
	};
};
