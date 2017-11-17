#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Mesh[]
struct MeshU5BU5D_t894826206;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Triangles
struct  Triangles_t1046072227  : public Il2CppObject
{
public:

public:
};

struct Triangles_t1046072227_StaticFields
{
public:
	// UnityEngine.Mesh[] UnityStandardAssets.ImageEffects.Triangles::meshes
	MeshU5BU5D_t894826206* ___meshes_0;
	// System.Int32 UnityStandardAssets.ImageEffects.Triangles::currentTris
	int32_t ___currentTris_1;

public:
	inline static int32_t get_offset_of_meshes_0() { return static_cast<int32_t>(offsetof(Triangles_t1046072227_StaticFields, ___meshes_0)); }
	inline MeshU5BU5D_t894826206* get_meshes_0() const { return ___meshes_0; }
	inline MeshU5BU5D_t894826206** get_address_of_meshes_0() { return &___meshes_0; }
	inline void set_meshes_0(MeshU5BU5D_t894826206* value)
	{
		___meshes_0 = value;
		Il2CppCodeGenWriteBarrier(&___meshes_0, value);
	}

	inline static int32_t get_offset_of_currentTris_1() { return static_cast<int32_t>(offsetof(Triangles_t1046072227_StaticFields, ___currentTris_1)); }
	inline int32_t get_currentTris_1() const { return ___currentTris_1; }
	inline int32_t* get_address_of_currentTris_1() { return &___currentTris_1; }
	inline void set_currentTris_1(int32_t value)
	{
		___currentTris_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
