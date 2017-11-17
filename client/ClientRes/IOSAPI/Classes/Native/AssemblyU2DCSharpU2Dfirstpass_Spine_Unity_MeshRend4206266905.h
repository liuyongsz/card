#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.Unity.DoubleBuffered`1<Spine.Unity.MeshRendererBuffers/SmartMesh>
struct DoubleBuffered_1_t4168345978;
// Spine.ExposedList`1<UnityEngine.Material>
struct ExposedList_1_t3545576163;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3123989686;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.MeshRendererBuffers
struct  MeshRendererBuffers_t4206266905  : public Il2CppObject
{
public:
	// Spine.Unity.DoubleBuffered`1<Spine.Unity.MeshRendererBuffers/SmartMesh> Spine.Unity.MeshRendererBuffers::doubleBufferedMesh
	DoubleBuffered_1_t4168345978 * ___doubleBufferedMesh_0;
	// Spine.ExposedList`1<UnityEngine.Material> Spine.Unity.MeshRendererBuffers::submeshMaterials
	ExposedList_1_t3545576163 * ___submeshMaterials_1;
	// UnityEngine.Material[] Spine.Unity.MeshRendererBuffers::sharedMaterials
	MaterialU5BU5D_t3123989686* ___sharedMaterials_2;

public:
	inline static int32_t get_offset_of_doubleBufferedMesh_0() { return static_cast<int32_t>(offsetof(MeshRendererBuffers_t4206266905, ___doubleBufferedMesh_0)); }
	inline DoubleBuffered_1_t4168345978 * get_doubleBufferedMesh_0() const { return ___doubleBufferedMesh_0; }
	inline DoubleBuffered_1_t4168345978 ** get_address_of_doubleBufferedMesh_0() { return &___doubleBufferedMesh_0; }
	inline void set_doubleBufferedMesh_0(DoubleBuffered_1_t4168345978 * value)
	{
		___doubleBufferedMesh_0 = value;
		Il2CppCodeGenWriteBarrier(&___doubleBufferedMesh_0, value);
	}

	inline static int32_t get_offset_of_submeshMaterials_1() { return static_cast<int32_t>(offsetof(MeshRendererBuffers_t4206266905, ___submeshMaterials_1)); }
	inline ExposedList_1_t3545576163 * get_submeshMaterials_1() const { return ___submeshMaterials_1; }
	inline ExposedList_1_t3545576163 ** get_address_of_submeshMaterials_1() { return &___submeshMaterials_1; }
	inline void set_submeshMaterials_1(ExposedList_1_t3545576163 * value)
	{
		___submeshMaterials_1 = value;
		Il2CppCodeGenWriteBarrier(&___submeshMaterials_1, value);
	}

	inline static int32_t get_offset_of_sharedMaterials_2() { return static_cast<int32_t>(offsetof(MeshRendererBuffers_t4206266905, ___sharedMaterials_2)); }
	inline MaterialU5BU5D_t3123989686* get_sharedMaterials_2() const { return ___sharedMaterials_2; }
	inline MaterialU5BU5D_t3123989686** get_address_of_sharedMaterials_2() { return &___sharedMaterials_2; }
	inline void set_sharedMaterials_2(MaterialU5BU5D_t3123989686* value)
	{
		___sharedMaterials_2 = value;
		Il2CppCodeGenWriteBarrier(&___sharedMaterials_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
