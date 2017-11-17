#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Type,ConfigLoaderBase>
struct Dictionary_2_t324497721;
// UnityEngine.AssetBundle
struct AssetBundle_t2054978754;

#include "AssemblyU2DCSharp_ManagerTemplate_1_gen277203774.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ConfigManager
struct  ConfigManager_t2239702727  : public ManagerTemplate_1_t277203774
{
public:
	// UnityEngine.AssetBundle ConfigManager::CfgBundle
	AssetBundle_t2054978754 * ___CfgBundle_5;

public:
	inline static int32_t get_offset_of_CfgBundle_5() { return static_cast<int32_t>(offsetof(ConfigManager_t2239702727, ___CfgBundle_5)); }
	inline AssetBundle_t2054978754 * get_CfgBundle_5() const { return ___CfgBundle_5; }
	inline AssetBundle_t2054978754 ** get_address_of_CfgBundle_5() { return &___CfgBundle_5; }
	inline void set_CfgBundle_5(AssetBundle_t2054978754 * value)
	{
		___CfgBundle_5 = value;
		Il2CppCodeGenWriteBarrier(&___CfgBundle_5, value);
	}
};

struct ConfigManager_t2239702727_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,ConfigLoaderBase> ConfigManager::m_configLoaders
	Dictionary_2_t324497721 * ___m_configLoaders_4;

public:
	inline static int32_t get_offset_of_m_configLoaders_4() { return static_cast<int32_t>(offsetof(ConfigManager_t2239702727_StaticFields, ___m_configLoaders_4)); }
	inline Dictionary_2_t324497721 * get_m_configLoaders_4() const { return ___m_configLoaders_4; }
	inline Dictionary_2_t324497721 ** get_address_of_m_configLoaders_4() { return &___m_configLoaders_4; }
	inline void set_m_configLoaders_4(Dictionary_2_t324497721 * value)
	{
		___m_configLoaders_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_configLoaders_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
