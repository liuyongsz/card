#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,OfficalInfo>
struct Dictionary_2_t1402297859;

#include "AssemblyU2DCSharp_ConfigBase2330146533.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OfficalConfig
struct  OfficalConfig_t1526466786  : public ConfigBase_t2330146533
{
public:

public:
};

struct OfficalConfig_t1526466786_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,OfficalInfo> OfficalConfig::configList
	Dictionary_2_t1402297859 * ___configList_1;

public:
	inline static int32_t get_offset_of_configList_1() { return static_cast<int32_t>(offsetof(OfficalConfig_t1526466786_StaticFields, ___configList_1)); }
	inline Dictionary_2_t1402297859 * get_configList_1() const { return ___configList_1; }
	inline Dictionary_2_t1402297859 ** get_address_of_configList_1() { return &___configList_1; }
	inline void set_configList_1(Dictionary_2_t1402297859 * value)
	{
		___configList_1 = value;
		Il2CppCodeGenWriteBarrier(&___configList_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
