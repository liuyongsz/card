#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Spine.Unity.MeshGenerator
struct MeshGenerator_t3385794548;
// Spine.Unity.SkeletonRendererInstruction
struct SkeletonRendererInstruction_t1881716398;
// Spine.Skeleton
struct Skeleton_t1387859465;
// UnityEngine.Material
struct Material_t193706927;
// System.Collections.Generic.Dictionary`2<Spine.Slot,UnityEngine.Material>
struct Dictionary_2_t1972914032;
// System.Collections.Generic.List`1<Spine.Slot>
struct List_1_t3970727598;
// Spine.ExposedList`1<Spine.Unity.SubmeshInstruction>
struct ExposedList_1_t2002718615;
// System.Collections.Generic.Dictionary`2<UnityEngine.Material,UnityEngine.Material>
struct Dictionary_2_t3590089903;
// UnityEngine.Mesh
struct Mesh_t1356156583;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t1658499504;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Unity_MeshGene3606452635.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Unity_Skeleton1881716398.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Skeleton1387859465.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Unity_SubmeshI2945816675.h"
#include "UnityEngine_UnityEngine_Mesh1356156583.h"

// System.Void Spine.Unity.MeshGenerator::.ctor()
extern "C"  void MeshGenerator__ctor_m1061499723 (MeshGenerator_t3385794548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.Unity.MeshGenerator::get_VertexCount()
extern "C"  int32_t MeshGenerator_get_VertexCount_m383722391 (MeshGenerator_t3385794548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Unity.MeshGeneratorBuffers Spine.Unity.MeshGenerator::get_Buffers()
extern "C"  MeshGeneratorBuffers_t3606452635  MeshGenerator_get_Buffers_m3986646559 (MeshGenerator_t3385794548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGenerator::GenerateSingleSubmeshInstruction(Spine.Unity.SkeletonRendererInstruction,Spine.Skeleton,UnityEngine.Material)
extern "C"  void MeshGenerator_GenerateSingleSubmeshInstruction_m704206857 (Il2CppObject * __this /* static, unused */, SkeletonRendererInstruction_t1881716398 * ___instructionOutput0, Skeleton_t1387859465 * ___skeleton1, Material_t193706927 * ___material2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGenerator::GenerateSkeletonRendererInstruction(Spine.Unity.SkeletonRendererInstruction,Spine.Skeleton,System.Collections.Generic.Dictionary`2<Spine.Slot,UnityEngine.Material>,System.Collections.Generic.List`1<Spine.Slot>,System.Boolean,System.Boolean)
extern "C"  void MeshGenerator_GenerateSkeletonRendererInstruction_m734968877 (Il2CppObject * __this /* static, unused */, SkeletonRendererInstruction_t1881716398 * ___instructionOutput0, Skeleton_t1387859465 * ___skeleton1, Dictionary_2_t1972914032 * ___customSlotMaterials2, List_1_t3970727598 * ___separatorSlots3, bool ___generateMeshOverride4, bool ___immutableTriangles5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGenerator::TryReplaceMaterials(Spine.ExposedList`1<Spine.Unity.SubmeshInstruction>,System.Collections.Generic.Dictionary`2<UnityEngine.Material,UnityEngine.Material>)
extern "C"  void MeshGenerator_TryReplaceMaterials_m2673191350 (Il2CppObject * __this /* static, unused */, ExposedList_1_t2002718615 * ___workingSubmeshInstructions0, Dictionary_2_t3590089903 * ___customMaterialOverride1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGenerator::Begin()
extern "C"  void MeshGenerator_Begin_m1634674428 (MeshGenerator_t3385794548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGenerator::AddSubmesh(Spine.Unity.SubmeshInstruction,System.Boolean)
extern "C"  void MeshGenerator_AddSubmesh_m4066084347 (MeshGenerator_t3385794548 * __this, SubmeshInstruction_t2945816675  ___instruction0, bool ___updateTriangles1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGenerator::BuildMesh(Spine.Unity.SkeletonRendererInstruction,System.Boolean)
extern "C"  void MeshGenerator_BuildMesh_m2107573071 (MeshGenerator_t3385794548 * __this, SkeletonRendererInstruction_t1881716398 * ___instruction0, bool ___updateTriangles1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGenerator::BuildMeshWithArrays(Spine.Unity.SkeletonRendererInstruction,System.Boolean)
extern "C"  void MeshGenerator_BuildMeshWithArrays_m1835780907 (MeshGenerator_t3385794548 * __this, SkeletonRendererInstruction_t1881716398 * ___instruction0, bool ___updateTriangles1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGenerator::ScaleVertexData(System.Single)
extern "C"  void MeshGenerator_ScaleVertexData_m4030397922 (MeshGenerator_t3385794548 * __this, float ___scale0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGenerator::AddAttachmentTintBlack(System.Single,System.Single,System.Single,System.Int32)
extern "C"  void MeshGenerator_AddAttachmentTintBlack_m1582033955 (MeshGenerator_t3385794548 * __this, float ___r20, float ___g21, float ___b22, int32_t ___vertexCount3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGenerator::FillVertexData(UnityEngine.Mesh)
extern "C"  void MeshGenerator_FillVertexData_m4108224232 (MeshGenerator_t3385794548 * __this, Mesh_t1356156583 * ___mesh0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGenerator::FillTriangles(UnityEngine.Mesh)
extern "C"  void MeshGenerator_FillTriangles_m799717157 (MeshGenerator_t3385794548 * __this, Mesh_t1356156583 * ___mesh0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGenerator::FillTrianglesSingle(UnityEngine.Mesh)
extern "C"  void MeshGenerator_FillTrianglesSingle_m2425268987 (MeshGenerator_t3385794548 * __this, Mesh_t1356156583 * ___mesh0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGenerator::TrimExcess()
extern "C"  void MeshGenerator_TrimExcess_m1000777498 (MeshGenerator_t3385794548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGenerator::SolveTangents2DEnsureSize(UnityEngine.Vector4[]&,UnityEngine.Vector2[]&,System.Int32)
extern "C"  void MeshGenerator_SolveTangents2DEnsureSize_m1888014734 (Il2CppObject * __this /* static, unused */, Vector4U5BU5D_t1658499504** ___tangentBuffer0, Vector2U5BU5D_t686124026** ___tempTanBuffer1, int32_t ___vertexCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGenerator::SolveTangents2DTriangles(UnityEngine.Vector2[],System.Int32[],System.Int32,UnityEngine.Vector3[],UnityEngine.Vector2[],System.Int32)
extern "C"  void MeshGenerator_SolveTangents2DTriangles_m1668050351 (Il2CppObject * __this /* static, unused */, Vector2U5BU5D_t686124026* ___tempTanBuffer0, Int32U5BU5D_t3030399641* ___triangles1, int32_t ___triangleCount2, Vector3U5BU5D_t1172311765* ___vertices3, Vector2U5BU5D_t686124026* ___uvs4, int32_t ___vertexCount5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshGenerator::SolveTangents2DBuffer(UnityEngine.Vector4[],UnityEngine.Vector2[],System.Int32)
extern "C"  void MeshGenerator_SolveTangents2DBuffer_m42680457 (Il2CppObject * __this /* static, unused */, Vector4U5BU5D_t1658499504* ___tangents0, Vector2U5BU5D_t686124026* ___tempTanBuffer1, int32_t ___vertexCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
