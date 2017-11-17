#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t193706927;

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MaterialAsset
struct  MaterialAsset_t708743757  : public ScriptableObject_t1975622470
{
public:
	// UnityEngine.Material MaterialAsset::material
	Material_t193706927 * ___material_2;

public:
	inline static int32_t get_offset_of_material_2() { return static_cast<int32_t>(offsetof(MaterialAsset_t708743757, ___material_2)); }
	inline Material_t193706927 * get_material_2() const { return ___material_2; }
	inline Material_t193706927 ** get_address_of_material_2() { return &___material_2; }
	inline void set_material_2(Material_t193706927 * value)
	{
		___material_2 = value;
		Il2CppCodeGenWriteBarrier(&___material_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
