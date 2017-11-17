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

// Spine.Unity.MeshRendererBuffers
struct MeshRendererBuffers_t4206266905;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3123989686;
// Spine.ExposedList`1<Spine.Unity.SubmeshInstruction>
struct ExposedList_1_t2002718615;
// Spine.Unity.MeshRendererBuffers/SmartMesh
struct SmartMesh_t2575631256;

#include "codegen/il2cpp-codegen.h"

// System.Void Spine.Unity.MeshRendererBuffers::.ctor()
extern "C"  void MeshRendererBuffers__ctor_m3173359040 (MeshRendererBuffers_t4206266905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshRendererBuffers::Initialize()
extern "C"  void MeshRendererBuffers_Initialize_m2555422684 (MeshRendererBuffers_t4206266905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material[] Spine.Unity.MeshRendererBuffers::GetUpdatedShaderdMaterialsArray()
extern "C"  MaterialU5BU5D_t3123989686* MeshRendererBuffers_GetUpdatedShaderdMaterialsArray_m1570424468 (MeshRendererBuffers_t4206266905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Unity.MeshRendererBuffers::MaterialsChangedInLastUpdate()
extern "C"  bool MeshRendererBuffers_MaterialsChangedInLastUpdate_m426793792 (MeshRendererBuffers_t4206266905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshRendererBuffers::UpdateSharedMaterials(Spine.ExposedList`1<Spine.Unity.SubmeshInstruction>)
extern "C"  void MeshRendererBuffers_UpdateSharedMaterials_m3966997477 (MeshRendererBuffers_t4206266905 * __this, ExposedList_1_t2002718615 * ___instructions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Unity.MeshRendererBuffers/SmartMesh Spine.Unity.MeshRendererBuffers::GetNextMesh()
extern "C"  SmartMesh_t2575631256 * MeshRendererBuffers_GetNextMesh_m4031416873 (MeshRendererBuffers_t4206266905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshRendererBuffers::Clear()
extern "C"  void MeshRendererBuffers_Clear_m2822303555 (MeshRendererBuffers_t4206266905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MeshRendererBuffers::Dispose()
extern "C"  void MeshRendererBuffers_Dispose_m2143601809 (MeshRendererBuffers_t4206266905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
