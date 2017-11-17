#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,EffectCfg>
struct Dictionary_2_t2421081586;

#include "AssemblyU2DCSharp_ConfigLoaderBase2682107120.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EffectConfig
struct  EffectConfig_t1693570711  : public ConfigLoaderBase_t2682107120
{
public:

public:
};

struct EffectConfig_t1693570711_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,EffectCfg> EffectConfig::m_data
	Dictionary_2_t2421081586 * ___m_data_1;

public:
	inline static int32_t get_offset_of_m_data_1() { return static_cast<int32_t>(offsetof(EffectConfig_t1693570711_StaticFields, ___m_data_1)); }
	inline Dictionary_2_t2421081586 * get_m_data_1() const { return ___m_data_1; }
	inline Dictionary_2_t2421081586 ** get_address_of_m_data_1() { return &___m_data_1; }
	inline void set_m_data_1(Dictionary_2_t2421081586 * value)
	{
		___m_data_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_data_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
