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
// Spine.Unity.SkeletonRendererInstruction
struct SkeletonRendererInstruction_t1881716398;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.MeshRendererBuffers/SmartMesh
struct  SmartMesh_t2575631256  : public Il2CppObject
{
public:
	// UnityEngine.Mesh Spine.Unity.MeshRendererBuffers/SmartMesh::mesh
	Mesh_t1356156583 * ___mesh_0;
	// Spine.Unity.SkeletonRendererInstruction Spine.Unity.MeshRendererBuffers/SmartMesh::instructionUsed
	SkeletonRendererInstruction_t1881716398 * ___instructionUsed_1;

public:
	inline static int32_t get_offset_of_mesh_0() { return static_cast<int32_t>(offsetof(SmartMesh_t2575631256, ___mesh_0)); }
	inline Mesh_t1356156583 * get_mesh_0() const { return ___mesh_0; }
	inline Mesh_t1356156583 ** get_address_of_mesh_0() { return &___mesh_0; }
	inline void set_mesh_0(Mesh_t1356156583 * value)
	{
		___mesh_0 = value;
		Il2CppCodeGenWriteBarrier(&___mesh_0, value);
	}

	inline static int32_t get_offset_of_instructionUsed_1() { return static_cast<int32_t>(offsetof(SmartMesh_t2575631256, ___instructionUsed_1)); }
	inline SkeletonRendererInstruction_t1881716398 * get_instructionUsed_1() const { return ___instructionUsed_1; }
	inline SkeletonRendererInstruction_t1881716398 ** get_address_of_instructionUsed_1() { return &___instructionUsed_1; }
	inline void set_instructionUsed_1(SkeletonRendererInstruction_t1881716398 * value)
	{
		___instructionUsed_1 = value;
		Il2CppCodeGenWriteBarrier(&___instructionUsed_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
