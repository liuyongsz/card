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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.　　　　/ 
struct  U20_t3561515127  : public Il2CppObject
{
public:
	// UnityEngine.Material live2d.　　　　/ ::material
	Material_t193706927 * ___material_0;

public:
	inline static int32_t get_offset_of_material_0() { return static_cast<int32_t>(offsetof(U20_t3561515127, ___material_0)); }
	inline Material_t193706927 * get_material_0() const { return ___material_0; }
	inline Material_t193706927 ** get_address_of_material_0() { return &___material_0; }
	inline void set_material_0(Material_t193706927 * value)
	{
		___material_0 = value;
		Il2CppCodeGenWriteBarrier(&___material_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
