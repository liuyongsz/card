#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.NetworkInformation.PhysicalAddress
struct PhysicalAddress_t1613893277;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.PhysicalAddress
struct  PhysicalAddress_t1613893277  : public Il2CppObject
{
public:
	// System.Byte[] System.Net.NetworkInformation.PhysicalAddress::bytes
	ByteU5BU5D_t3397334013* ___bytes_1;

public:
	inline static int32_t get_offset_of_bytes_1() { return static_cast<int32_t>(offsetof(PhysicalAddress_t1613893277, ___bytes_1)); }
	inline ByteU5BU5D_t3397334013* get_bytes_1() const { return ___bytes_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_bytes_1() { return &___bytes_1; }
	inline void set_bytes_1(ByteU5BU5D_t3397334013* value)
	{
		___bytes_1 = value;
		Il2CppCodeGenWriteBarrier(&___bytes_1, value);
	}
};

struct PhysicalAddress_t1613893277_StaticFields
{
public:
	// System.Net.NetworkInformation.PhysicalAddress System.Net.NetworkInformation.PhysicalAddress::None
	PhysicalAddress_t1613893277 * ___None_0;

public:
	inline static int32_t get_offset_of_None_0() { return static_cast<int32_t>(offsetof(PhysicalAddress_t1613893277_StaticFields, ___None_0)); }
	inline PhysicalAddress_t1613893277 * get_None_0() const { return ___None_0; }
	inline PhysicalAddress_t1613893277 ** get_address_of_None_0() { return &___None_0; }
	inline void set_None_0(PhysicalAddress_t1613893277 * value)
	{
		___None_0 = value;
		Il2CppCodeGenWriteBarrier(&___None_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
