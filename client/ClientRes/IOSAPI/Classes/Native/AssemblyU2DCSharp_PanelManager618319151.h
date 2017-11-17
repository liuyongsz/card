#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,UIBase>
struct Dictionary_2_t1814237745;
// System.Collections.Generic.List`1<AMLoadAssetOperation>
struct List_1_t1865434217;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "AssemblyU2DCSharp_ManagerTemplate_1_gen2950787494.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PanelManager
struct  PanelManager_t618319151  : public ManagerTemplate_1_t2950787494
{
public:

public:
};

struct PanelManager_t618319151_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UIBase> PanelManager::m_panels
	Dictionary_2_t1814237745 * ___m_panels_4;
	// System.Collections.Generic.List`1<AMLoadAssetOperation> PanelManager::m_assetOps
	List_1_t1865434217 * ___m_assetOps_5;
	// System.Int32 PanelManager::m_maxDepth
	int32_t ___m_maxDepth_6;
	// UnityEngine.Transform PanelManager::parent
	Transform_t3275118058 * ___parent_7;

public:
	inline static int32_t get_offset_of_m_panels_4() { return static_cast<int32_t>(offsetof(PanelManager_t618319151_StaticFields, ___m_panels_4)); }
	inline Dictionary_2_t1814237745 * get_m_panels_4() const { return ___m_panels_4; }
	inline Dictionary_2_t1814237745 ** get_address_of_m_panels_4() { return &___m_panels_4; }
	inline void set_m_panels_4(Dictionary_2_t1814237745 * value)
	{
		___m_panels_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_panels_4, value);
	}

	inline static int32_t get_offset_of_m_assetOps_5() { return static_cast<int32_t>(offsetof(PanelManager_t618319151_StaticFields, ___m_assetOps_5)); }
	inline List_1_t1865434217 * get_m_assetOps_5() const { return ___m_assetOps_5; }
	inline List_1_t1865434217 ** get_address_of_m_assetOps_5() { return &___m_assetOps_5; }
	inline void set_m_assetOps_5(List_1_t1865434217 * value)
	{
		___m_assetOps_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_assetOps_5, value);
	}

	inline static int32_t get_offset_of_m_maxDepth_6() { return static_cast<int32_t>(offsetof(PanelManager_t618319151_StaticFields, ___m_maxDepth_6)); }
	inline int32_t get_m_maxDepth_6() const { return ___m_maxDepth_6; }
	inline int32_t* get_address_of_m_maxDepth_6() { return &___m_maxDepth_6; }
	inline void set_m_maxDepth_6(int32_t value)
	{
		___m_maxDepth_6 = value;
	}

	inline static int32_t get_offset_of_parent_7() { return static_cast<int32_t>(offsetof(PanelManager_t618319151_StaticFields, ___parent_7)); }
	inline Transform_t3275118058 * get_parent_7() const { return ___parent_7; }
	inline Transform_t3275118058 ** get_address_of_parent_7() { return &___parent_7; }
	inline void set_parent_7(Transform_t3275118058 * value)
	{
		___parent_7 = value;
		Il2CppCodeGenWriteBarrier(&___parent_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
