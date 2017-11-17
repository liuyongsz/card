#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.Material
struct Material_t193706927;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.Modules.SlotBlendModes/MaterialTexturePair
struct  MaterialTexturePair_t1520601627 
{
public:
	// UnityEngine.Texture2D Spine.Unity.Modules.SlotBlendModes/MaterialTexturePair::texture2D
	Texture2D_t3542995729 * ___texture2D_0;
	// UnityEngine.Material Spine.Unity.Modules.SlotBlendModes/MaterialTexturePair::material
	Material_t193706927 * ___material_1;

public:
	inline static int32_t get_offset_of_texture2D_0() { return static_cast<int32_t>(offsetof(MaterialTexturePair_t1520601627, ___texture2D_0)); }
	inline Texture2D_t3542995729 * get_texture2D_0() const { return ___texture2D_0; }
	inline Texture2D_t3542995729 ** get_address_of_texture2D_0() { return &___texture2D_0; }
	inline void set_texture2D_0(Texture2D_t3542995729 * value)
	{
		___texture2D_0 = value;
		Il2CppCodeGenWriteBarrier(&___texture2D_0, value);
	}

	inline static int32_t get_offset_of_material_1() { return static_cast<int32_t>(offsetof(MaterialTexturePair_t1520601627, ___material_1)); }
	inline Material_t193706927 * get_material_1() const { return ___material_1; }
	inline Material_t193706927 ** get_address_of_material_1() { return &___material_1; }
	inline void set_material_1(Material_t193706927 * value)
	{
		___material_1 = value;
		Il2CppCodeGenWriteBarrier(&___material_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Spine.Unity.Modules.SlotBlendModes/MaterialTexturePair
struct MaterialTexturePair_t1520601627_marshaled_pinvoke
{
	Texture2D_t3542995729 * ___texture2D_0;
	Material_t193706927 * ___material_1;
};
// Native definition for marshalling of: Spine.Unity.Modules.SlotBlendModes/MaterialTexturePair
struct MaterialTexturePair_t1520601627_marshaled_com
{
	Texture2D_t3542995729 * ___texture2D_0;
	Material_t193706927 * ___material_1;
};
