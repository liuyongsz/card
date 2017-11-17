#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32LengthFlagsUnion
struct  Win32LengthFlagsUnion_t1910118479 
{
public:
	// System.UInt32 System.Net.NetworkInformation.Win32LengthFlagsUnion::Length
	uint32_t ___Length_0;
	// System.UInt32 System.Net.NetworkInformation.Win32LengthFlagsUnion::Flags
	uint32_t ___Flags_1;

public:
	inline static int32_t get_offset_of_Length_0() { return static_cast<int32_t>(offsetof(Win32LengthFlagsUnion_t1910118479, ___Length_0)); }
	inline uint32_t get_Length_0() const { return ___Length_0; }
	inline uint32_t* get_address_of_Length_0() { return &___Length_0; }
	inline void set_Length_0(uint32_t value)
	{
		___Length_0 = value;
	}

	inline static int32_t get_offset_of_Flags_1() { return static_cast<int32_t>(offsetof(Win32LengthFlagsUnion_t1910118479, ___Flags_1)); }
	inline uint32_t get_Flags_1() const { return ___Flags_1; }
	inline uint32_t* get_address_of_Flags_1() { return &___Flags_1; }
	inline void set_Flags_1(uint32_t value)
	{
		___Flags_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.Net.NetworkInformation.Win32LengthFlagsUnion
struct Win32LengthFlagsUnion_t1910118479_marshaled_pinvoke
{
	uint32_t ___Length_0;
	uint32_t ___Flags_1;
};
// Native definition for marshalling of: System.Net.NetworkInformation.Win32LengthFlagsUnion
struct Win32LengthFlagsUnion_t1910118479_marshaled_com
{
	uint32_t ___Length_0;
	uint32_t ___Flags_1;
};
