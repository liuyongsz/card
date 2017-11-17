#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AssetBundle
struct AssetBundle_t2054978754;
// AssetBundles.NormalRes
struct NormalRes_t3181316491;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AssetBundles.LoadedWWW
struct  LoadedWWW_t3791486166  : public Il2CppObject
{
public:
	// UnityEngine.AssetBundle AssetBundles.LoadedWWW::m_AssetBundle
	AssetBundle_t2054978754 * ___m_AssetBundle_0;
	// AssetBundles.NormalRes AssetBundles.LoadedWWW::m_normalres
	NormalRes_t3181316491 * ___m_normalres_1;
	// System.Int32 AssetBundles.LoadedWWW::m_ReferencedCount
	int32_t ___m_ReferencedCount_2;

public:
	inline static int32_t get_offset_of_m_AssetBundle_0() { return static_cast<int32_t>(offsetof(LoadedWWW_t3791486166, ___m_AssetBundle_0)); }
	inline AssetBundle_t2054978754 * get_m_AssetBundle_0() const { return ___m_AssetBundle_0; }
	inline AssetBundle_t2054978754 ** get_address_of_m_AssetBundle_0() { return &___m_AssetBundle_0; }
	inline void set_m_AssetBundle_0(AssetBundle_t2054978754 * value)
	{
		___m_AssetBundle_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_AssetBundle_0, value);
	}

	inline static int32_t get_offset_of_m_normalres_1() { return static_cast<int32_t>(offsetof(LoadedWWW_t3791486166, ___m_normalres_1)); }
	inline NormalRes_t3181316491 * get_m_normalres_1() const { return ___m_normalres_1; }
	inline NormalRes_t3181316491 ** get_address_of_m_normalres_1() { return &___m_normalres_1; }
	inline void set_m_normalres_1(NormalRes_t3181316491 * value)
	{
		___m_normalres_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_normalres_1, value);
	}

	inline static int32_t get_offset_of_m_ReferencedCount_2() { return static_cast<int32_t>(offsetof(LoadedWWW_t3791486166, ___m_ReferencedCount_2)); }
	inline int32_t get_m_ReferencedCount_2() const { return ___m_ReferencedCount_2; }
	inline int32_t* get_address_of_m_ReferencedCount_2() { return &___m_ReferencedCount_2; }
	inline void set_m_ReferencedCount_2(int32_t value)
	{
		___m_ReferencedCount_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
