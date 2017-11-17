#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.ExposedList`1<UnityEngine.Vector3>
struct ExposedList_1_t1300609520;
// Spine.ExposedList`1<UnityEngine.Vector2>
struct ExposedList_1_t1300609519;
// Spine.ExposedList`1<UnityEngine.Color32>
struct ExposedList_1_t4226386754;
// Spine.ExposedList`1<Spine.ExposedList`1<System.Int32>>
struct ExposedList_1_t185681328;
// Spine.SkeletonClipping
struct SkeletonClipping_t2783913743;
// System.Single[]
struct SingleU5BU5D_t577127397;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t1658499504;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Unity_MeshGene4090363268.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.MeshGenerator
struct  MeshGenerator_t3385794548  : public Il2CppObject
{
public:
	// Spine.Unity.MeshGenerator/Settings Spine.Unity.MeshGenerator::settings
	Settings_t4090363268  ___settings_2;
	// Spine.ExposedList`1<UnityEngine.Vector3> Spine.Unity.MeshGenerator::vertexBuffer
	ExposedList_1_t1300609520 * ___vertexBuffer_3;
	// Spine.ExposedList`1<UnityEngine.Vector2> Spine.Unity.MeshGenerator::uvBuffer
	ExposedList_1_t1300609519 * ___uvBuffer_4;
	// Spine.ExposedList`1<UnityEngine.Color32> Spine.Unity.MeshGenerator::colorBuffer
	ExposedList_1_t4226386754 * ___colorBuffer_5;
	// Spine.ExposedList`1<Spine.ExposedList`1<System.Int32>> Spine.Unity.MeshGenerator::submeshes
	ExposedList_1_t185681328 * ___submeshes_6;
	// UnityEngine.Vector2 Spine.Unity.MeshGenerator::meshBoundsMin
	Vector2_t2243707579  ___meshBoundsMin_7;
	// UnityEngine.Vector2 Spine.Unity.MeshGenerator::meshBoundsMax
	Vector2_t2243707579  ___meshBoundsMax_8;
	// System.Single Spine.Unity.MeshGenerator::meshBoundsThickness
	float ___meshBoundsThickness_9;
	// System.Int32 Spine.Unity.MeshGenerator::submeshIndex
	int32_t ___submeshIndex_10;
	// Spine.SkeletonClipping Spine.Unity.MeshGenerator::clipper
	SkeletonClipping_t2783913743 * ___clipper_11;
	// System.Single[] Spine.Unity.MeshGenerator::tempVerts
	SingleU5BU5D_t577127397* ___tempVerts_12;
	// System.Int32[] Spine.Unity.MeshGenerator::regionTriangles
	Int32U5BU5D_t3030399641* ___regionTriangles_13;
	// UnityEngine.Vector3[] Spine.Unity.MeshGenerator::normals
	Vector3U5BU5D_t1172311765* ___normals_14;
	// UnityEngine.Vector4[] Spine.Unity.MeshGenerator::tangents
	Vector4U5BU5D_t1658499504* ___tangents_15;
	// UnityEngine.Vector2[] Spine.Unity.MeshGenerator::tempTanBuffer
	Vector2U5BU5D_t686124026* ___tempTanBuffer_16;
	// Spine.ExposedList`1<UnityEngine.Vector2> Spine.Unity.MeshGenerator::uv2
	ExposedList_1_t1300609519 * ___uv2_17;
	// Spine.ExposedList`1<UnityEngine.Vector2> Spine.Unity.MeshGenerator::uv3
	ExposedList_1_t1300609519 * ___uv3_18;

public:
	inline static int32_t get_offset_of_settings_2() { return static_cast<int32_t>(offsetof(MeshGenerator_t3385794548, ___settings_2)); }
	inline Settings_t4090363268  get_settings_2() const { return ___settings_2; }
	inline Settings_t4090363268 * get_address_of_settings_2() { return &___settings_2; }
	inline void set_settings_2(Settings_t4090363268  value)
	{
		___settings_2 = value;
	}

	inline static int32_t get_offset_of_vertexBuffer_3() { return static_cast<int32_t>(offsetof(MeshGenerator_t3385794548, ___vertexBuffer_3)); }
	inline ExposedList_1_t1300609520 * get_vertexBuffer_3() const { return ___vertexBuffer_3; }
	inline ExposedList_1_t1300609520 ** get_address_of_vertexBuffer_3() { return &___vertexBuffer_3; }
	inline void set_vertexBuffer_3(ExposedList_1_t1300609520 * value)
	{
		___vertexBuffer_3 = value;
		Il2CppCodeGenWriteBarrier(&___vertexBuffer_3, value);
	}

	inline static int32_t get_offset_of_uvBuffer_4() { return static_cast<int32_t>(offsetof(MeshGenerator_t3385794548, ___uvBuffer_4)); }
	inline ExposedList_1_t1300609519 * get_uvBuffer_4() const { return ___uvBuffer_4; }
	inline ExposedList_1_t1300609519 ** get_address_of_uvBuffer_4() { return &___uvBuffer_4; }
	inline void set_uvBuffer_4(ExposedList_1_t1300609519 * value)
	{
		___uvBuffer_4 = value;
		Il2CppCodeGenWriteBarrier(&___uvBuffer_4, value);
	}

	inline static int32_t get_offset_of_colorBuffer_5() { return static_cast<int32_t>(offsetof(MeshGenerator_t3385794548, ___colorBuffer_5)); }
	inline ExposedList_1_t4226386754 * get_colorBuffer_5() const { return ___colorBuffer_5; }
	inline ExposedList_1_t4226386754 ** get_address_of_colorBuffer_5() { return &___colorBuffer_5; }
	inline void set_colorBuffer_5(ExposedList_1_t4226386754 * value)
	{
		___colorBuffer_5 = value;
		Il2CppCodeGenWriteBarrier(&___colorBuffer_5, value);
	}

	inline static int32_t get_offset_of_submeshes_6() { return static_cast<int32_t>(offsetof(MeshGenerator_t3385794548, ___submeshes_6)); }
	inline ExposedList_1_t185681328 * get_submeshes_6() const { return ___submeshes_6; }
	inline ExposedList_1_t185681328 ** get_address_of_submeshes_6() { return &___submeshes_6; }
	inline void set_submeshes_6(ExposedList_1_t185681328 * value)
	{
		___submeshes_6 = value;
		Il2CppCodeGenWriteBarrier(&___submeshes_6, value);
	}

	inline static int32_t get_offset_of_meshBoundsMin_7() { return static_cast<int32_t>(offsetof(MeshGenerator_t3385794548, ___meshBoundsMin_7)); }
	inline Vector2_t2243707579  get_meshBoundsMin_7() const { return ___meshBoundsMin_7; }
	inline Vector2_t2243707579 * get_address_of_meshBoundsMin_7() { return &___meshBoundsMin_7; }
	inline void set_meshBoundsMin_7(Vector2_t2243707579  value)
	{
		___meshBoundsMin_7 = value;
	}

	inline static int32_t get_offset_of_meshBoundsMax_8() { return static_cast<int32_t>(offsetof(MeshGenerator_t3385794548, ___meshBoundsMax_8)); }
	inline Vector2_t2243707579  get_meshBoundsMax_8() const { return ___meshBoundsMax_8; }
	inline Vector2_t2243707579 * get_address_of_meshBoundsMax_8() { return &___meshBoundsMax_8; }
	inline void set_meshBoundsMax_8(Vector2_t2243707579  value)
	{
		___meshBoundsMax_8 = value;
	}

	inline static int32_t get_offset_of_meshBoundsThickness_9() { return static_cast<int32_t>(offsetof(MeshGenerator_t3385794548, ___meshBoundsThickness_9)); }
	inline float get_meshBoundsThickness_9() const { return ___meshBoundsThickness_9; }
	inline float* get_address_of_meshBoundsThickness_9() { return &___meshBoundsThickness_9; }
	inline void set_meshBoundsThickness_9(float value)
	{
		___meshBoundsThickness_9 = value;
	}

	inline static int32_t get_offset_of_submeshIndex_10() { return static_cast<int32_t>(offsetof(MeshGenerator_t3385794548, ___submeshIndex_10)); }
	inline int32_t get_submeshIndex_10() const { return ___submeshIndex_10; }
	inline int32_t* get_address_of_submeshIndex_10() { return &___submeshIndex_10; }
	inline void set_submeshIndex_10(int32_t value)
	{
		___submeshIndex_10 = value;
	}

	inline static int32_t get_offset_of_clipper_11() { return static_cast<int32_t>(offsetof(MeshGenerator_t3385794548, ___clipper_11)); }
	inline SkeletonClipping_t2783913743 * get_clipper_11() const { return ___clipper_11; }
	inline SkeletonClipping_t2783913743 ** get_address_of_clipper_11() { return &___clipper_11; }
	inline void set_clipper_11(SkeletonClipping_t2783913743 * value)
	{
		___clipper_11 = value;
		Il2CppCodeGenWriteBarrier(&___clipper_11, value);
	}

	inline static int32_t get_offset_of_tempVerts_12() { return static_cast<int32_t>(offsetof(MeshGenerator_t3385794548, ___tempVerts_12)); }
	inline SingleU5BU5D_t577127397* get_tempVerts_12() const { return ___tempVerts_12; }
	inline SingleU5BU5D_t577127397** get_address_of_tempVerts_12() { return &___tempVerts_12; }
	inline void set_tempVerts_12(SingleU5BU5D_t577127397* value)
	{
		___tempVerts_12 = value;
		Il2CppCodeGenWriteBarrier(&___tempVerts_12, value);
	}

	inline static int32_t get_offset_of_regionTriangles_13() { return static_cast<int32_t>(offsetof(MeshGenerator_t3385794548, ___regionTriangles_13)); }
	inline Int32U5BU5D_t3030399641* get_regionTriangles_13() const { return ___regionTriangles_13; }
	inline Int32U5BU5D_t3030399641** get_address_of_regionTriangles_13() { return &___regionTriangles_13; }
	inline void set_regionTriangles_13(Int32U5BU5D_t3030399641* value)
	{
		___regionTriangles_13 = value;
		Il2CppCodeGenWriteBarrier(&___regionTriangles_13, value);
	}

	inline static int32_t get_offset_of_normals_14() { return static_cast<int32_t>(offsetof(MeshGenerator_t3385794548, ___normals_14)); }
	inline Vector3U5BU5D_t1172311765* get_normals_14() const { return ___normals_14; }
	inline Vector3U5BU5D_t1172311765** get_address_of_normals_14() { return &___normals_14; }
	inline void set_normals_14(Vector3U5BU5D_t1172311765* value)
	{
		___normals_14 = value;
		Il2CppCodeGenWriteBarrier(&___normals_14, value);
	}

	inline static int32_t get_offset_of_tangents_15() { return static_cast<int32_t>(offsetof(MeshGenerator_t3385794548, ___tangents_15)); }
	inline Vector4U5BU5D_t1658499504* get_tangents_15() const { return ___tangents_15; }
	inline Vector4U5BU5D_t1658499504** get_address_of_tangents_15() { return &___tangents_15; }
	inline void set_tangents_15(Vector4U5BU5D_t1658499504* value)
	{
		___tangents_15 = value;
		Il2CppCodeGenWriteBarrier(&___tangents_15, value);
	}

	inline static int32_t get_offset_of_tempTanBuffer_16() { return static_cast<int32_t>(offsetof(MeshGenerator_t3385794548, ___tempTanBuffer_16)); }
	inline Vector2U5BU5D_t686124026* get_tempTanBuffer_16() const { return ___tempTanBuffer_16; }
	inline Vector2U5BU5D_t686124026** get_address_of_tempTanBuffer_16() { return &___tempTanBuffer_16; }
	inline void set_tempTanBuffer_16(Vector2U5BU5D_t686124026* value)
	{
		___tempTanBuffer_16 = value;
		Il2CppCodeGenWriteBarrier(&___tempTanBuffer_16, value);
	}

	inline static int32_t get_offset_of_uv2_17() { return static_cast<int32_t>(offsetof(MeshGenerator_t3385794548, ___uv2_17)); }
	inline ExposedList_1_t1300609519 * get_uv2_17() const { return ___uv2_17; }
	inline ExposedList_1_t1300609519 ** get_address_of_uv2_17() { return &___uv2_17; }
	inline void set_uv2_17(ExposedList_1_t1300609519 * value)
	{
		___uv2_17 = value;
		Il2CppCodeGenWriteBarrier(&___uv2_17, value);
	}

	inline static int32_t get_offset_of_uv3_18() { return static_cast<int32_t>(offsetof(MeshGenerator_t3385794548, ___uv3_18)); }
	inline ExposedList_1_t1300609519 * get_uv3_18() const { return ___uv3_18; }
	inline ExposedList_1_t1300609519 ** get_address_of_uv3_18() { return &___uv3_18; }
	inline void set_uv3_18(ExposedList_1_t1300609519 * value)
	{
		___uv3_18 = value;
		Il2CppCodeGenWriteBarrier(&___uv3_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
