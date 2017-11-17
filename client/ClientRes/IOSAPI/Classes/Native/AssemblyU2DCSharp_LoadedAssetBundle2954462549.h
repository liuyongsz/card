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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoadedAssetBundle
struct  LoadedAssetBundle_t2954462549  : public Il2CppObject
{
public:
	// UnityEngine.AssetBundle LoadedAssetBundle::assetBundle
	AssetBundle_t2054978754 * ___assetBundle_0;
	// System.Int32 LoadedAssetBundle::referencedCount
	int32_t ___referencedCount_1;

public:
	inline static int32_t get_offset_of_assetBundle_0() { return static_cast<int32_t>(offsetof(LoadedAssetBundle_t2954462549, ___assetBundle_0)); }
	inline AssetBundle_t2054978754 * get_assetBundle_0() const { return ___assetBundle_0; }
	inline AssetBundle_t2054978754 ** get_address_of_assetBundle_0() { return &___assetBundle_0; }
	inline void set_assetBundle_0(AssetBundle_t2054978754 * value)
	{
		___assetBundle_0 = value;
		Il2CppCodeGenWriteBarrier(&___assetBundle_0, value);
	}

	inline static int32_t get_offset_of_referencedCount_1() { return static_cast<int32_t>(offsetof(LoadedAssetBundle_t2954462549, ___referencedCount_1)); }
	inline int32_t get_referencedCount_1() const { return ___referencedCount_1; }
	inline int32_t* get_address_of_referencedCount_1() { return &___referencedCount_1; }
	inline void set_referencedCount_1(int32_t value)
	{
		___referencedCount_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
