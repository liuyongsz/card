#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Mesh
struct Mesh_t1356156583;

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MeshAsset
struct  MeshAsset_t3951057469  : public ScriptableObject_t1975622470
{
public:
	// UnityEngine.Mesh MeshAsset::mesh
	Mesh_t1356156583 * ___mesh_2;

public:
	inline static int32_t get_offset_of_mesh_2() { return static_cast<int32_t>(offsetof(MeshAsset_t3951057469, ___mesh_2)); }
	inline Mesh_t1356156583 * get_mesh_2() const { return ___mesh_2; }
	inline Mesh_t1356156583 ** get_address_of_mesh_2() { return &___mesh_2; }
	inline void set_mesh_2(Mesh_t1356156583 * value)
	{
		___mesh_2 = value;
		Il2CppCodeGenWriteBarrier(&___mesh_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
