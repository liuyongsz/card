#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<RichContent>
struct List_1_t3845043571;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_ChannelType487727853.h"
#include "AssemblyU2DCSharp_OwnerType1657261651.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RichData
struct  RichData_t3375335906  : public Il2CppObject
{
public:
	// ChannelType RichData::channelType
	int32_t ___channelType_0;
	// OwnerType RichData::ownerType
	int32_t ___ownerType_1;
	// System.Collections.Generic.List`1<RichContent> RichData::richContentList
	List_1_t3845043571 * ___richContentList_2;

public:
	inline static int32_t get_offset_of_channelType_0() { return static_cast<int32_t>(offsetof(RichData_t3375335906, ___channelType_0)); }
	inline int32_t get_channelType_0() const { return ___channelType_0; }
	inline int32_t* get_address_of_channelType_0() { return &___channelType_0; }
	inline void set_channelType_0(int32_t value)
	{
		___channelType_0 = value;
	}

	inline static int32_t get_offset_of_ownerType_1() { return static_cast<int32_t>(offsetof(RichData_t3375335906, ___ownerType_1)); }
	inline int32_t get_ownerType_1() const { return ___ownerType_1; }
	inline int32_t* get_address_of_ownerType_1() { return &___ownerType_1; }
	inline void set_ownerType_1(int32_t value)
	{
		___ownerType_1 = value;
	}

	inline static int32_t get_offset_of_richContentList_2() { return static_cast<int32_t>(offsetof(RichData_t3375335906, ___richContentList_2)); }
	inline List_1_t3845043571 * get_richContentList_2() const { return ___richContentList_2; }
	inline List_1_t3845043571 ** get_address_of_richContentList_2() { return &___richContentList_2; }
	inline void set_richContentList_2(List_1_t3845043571 * value)
	{
		___richContentList_2 = value;
		Il2CppCodeGenWriteBarrier(&___richContentList_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
