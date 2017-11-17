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

// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t1204166949;
// System.String
struct String_t;
// UnityEngine.Mesh
struct Mesh_t1356156583;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t3303648957;
// UnityEngine.Renderer
struct Renderer_t257310565;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rendering_CommandBuffer1204166949.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Mesh1356156583.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "UnityEngine_UnityEngine_MaterialPropertyBlock3303648957.h"
#include "UnityEngine_UnityEngine_Renderer257310565.h"
#include "UnityEngine_UnityEngine_Rendering_RenderTargetIdent772440638.h"
#include "UnityEngine_UnityEngine_CubemapFace1725775554.h"
#include "UnityEngine_UnityEngine_FilterMode10814199.h"
#include "UnityEngine_UnityEngine_RenderTextureFormat3360518468.h"
#include "UnityEngine_UnityEngine_RenderTextureReadWrite2842868372.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"

// System.Void UnityEngine.Rendering.CommandBuffer::.ctor()
extern "C"  void CommandBuffer__ctor_m3893953450 (CommandBuffer_t1204166949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::Finalize()
extern "C"  void CommandBuffer_Finalize_m1203429902 (CommandBuffer_t1204166949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::Dispose()
extern "C"  void CommandBuffer_Dispose_m337661605 (CommandBuffer_t1204166949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::Dispose(System.Boolean)
extern "C"  void CommandBuffer_Dispose_m952026238 (CommandBuffer_t1204166949 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::InitBuffer(UnityEngine.Rendering.CommandBuffer)
extern "C"  void CommandBuffer_InitBuffer_m1772081346 (Il2CppObject * __this /* static, unused */, CommandBuffer_t1204166949 * ___buf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::ReleaseBuffer()
extern "C"  void CommandBuffer_ReleaseBuffer_m1335923659 (CommandBuffer_t1204166949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::set_name(System.String)
extern "C"  void CommandBuffer_set_name_m4179675112 (CommandBuffer_t1204166949 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::Clear()
extern "C"  void CommandBuffer_Clear_m3644095167 (CommandBuffer_t1204166949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::DrawMesh(UnityEngine.Mesh,UnityEngine.Matrix4x4,UnityEngine.Material)
extern "C"  void CommandBuffer_DrawMesh_m1921916513 (CommandBuffer_t1204166949 * __this, Mesh_t1356156583 * ___mesh0, Matrix4x4_t2933234003  ___matrix1, Material_t193706927 * ___material2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::INTERNAL_CALL_DrawMesh(UnityEngine.Rendering.CommandBuffer,UnityEngine.Mesh,UnityEngine.Matrix4x4&,UnityEngine.Material,System.Int32,System.Int32,UnityEngine.MaterialPropertyBlock)
extern "C"  void CommandBuffer_INTERNAL_CALL_DrawMesh_m1580915110 (Il2CppObject * __this /* static, unused */, CommandBuffer_t1204166949 * ___self0, Mesh_t1356156583 * ___mesh1, Matrix4x4_t2933234003 * ___matrix2, Material_t193706927 * ___material3, int32_t ___submeshIndex4, int32_t ___shaderPass5, MaterialPropertyBlock_t3303648957 * ___properties6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::DrawRenderer(UnityEngine.Renderer,UnityEngine.Material,System.Int32,System.Int32)
extern "C"  void CommandBuffer_DrawRenderer_m1863368857 (CommandBuffer_t1204166949 * __this, Renderer_t257310565 * ___renderer0, Material_t193706927 * ___material1, int32_t ___submeshIndex2, int32_t ___shaderPass3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::DrawRenderer(UnityEngine.Renderer,UnityEngine.Material,System.Int32)
extern "C"  void CommandBuffer_DrawRenderer_m878488214 (CommandBuffer_t1204166949 * __this, Renderer_t257310565 * ___renderer0, Material_t193706927 * ___material1, int32_t ___submeshIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::SetRenderTarget(UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderTargetIdentifier)
extern "C"  void CommandBuffer_SetRenderTarget_m3943293835 (CommandBuffer_t1204166949 * __this, RenderTargetIdentifier_t772440638  ___color0, RenderTargetIdentifier_t772440638  ___depth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::SetRenderTarget_ColDepth(UnityEngine.Rendering.RenderTargetIdentifier&,UnityEngine.Rendering.RenderTargetIdentifier&,System.Int32,UnityEngine.CubemapFace,System.Int32)
extern "C"  void CommandBuffer_SetRenderTarget_ColDepth_m1949509926 (CommandBuffer_t1204166949 * __this, RenderTargetIdentifier_t772440638 * ___color0, RenderTargetIdentifier_t772440638 * ___depth1, int32_t ___mipLevel2, int32_t ___cubemapFace3, int32_t ___depthSlice4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::Blit(UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderTargetIdentifier)
extern "C"  void CommandBuffer_Blit_m2244621585 (CommandBuffer_t1204166949 * __this, RenderTargetIdentifier_t772440638  ___source0, RenderTargetIdentifier_t772440638  ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::Blit(UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Material)
extern "C"  void CommandBuffer_Blit_m3411770257 (CommandBuffer_t1204166949 * __this, RenderTargetIdentifier_t772440638  ___source0, RenderTargetIdentifier_t772440638  ___dest1, Material_t193706927 * ___mat2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::Blit_Identifier(UnityEngine.Rendering.RenderTargetIdentifier&,UnityEngine.Rendering.RenderTargetIdentifier&,UnityEngine.Material,System.Int32)
extern "C"  void CommandBuffer_Blit_Identifier_m4266849170 (CommandBuffer_t1204166949 * __this, RenderTargetIdentifier_t772440638 * ___source0, RenderTargetIdentifier_t772440638 * ___dest1, Material_t193706927 * ___mat2, int32_t ___pass3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::GetTemporaryRT(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.FilterMode,UnityEngine.RenderTextureFormat,UnityEngine.RenderTextureReadWrite,System.Int32)
extern "C"  void CommandBuffer_GetTemporaryRT_m2978147788 (CommandBuffer_t1204166949 * __this, int32_t ___nameID0, int32_t ___width1, int32_t ___height2, int32_t ___depthBuffer3, int32_t ___filter4, int32_t ___format5, int32_t ___readWrite6, int32_t ___antiAliasing7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::GetTemporaryRT(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.FilterMode,UnityEngine.RenderTextureFormat,UnityEngine.RenderTextureReadWrite)
extern "C"  void CommandBuffer_GetTemporaryRT_m435236685 (CommandBuffer_t1204166949 * __this, int32_t ___nameID0, int32_t ___width1, int32_t ___height2, int32_t ___depthBuffer3, int32_t ___filter4, int32_t ___format5, int32_t ___readWrite6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::ReleaseTemporaryRT(System.Int32)
extern "C"  void CommandBuffer_ReleaseTemporaryRT_m2210944847 (CommandBuffer_t1204166949 * __this, int32_t ___nameID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::ClearRenderTarget(System.Boolean,System.Boolean,UnityEngine.Color)
extern "C"  void CommandBuffer_ClearRenderTarget_m4246011180 (CommandBuffer_t1204166949 * __this, bool ___clearDepth0, bool ___clearColor1, Color_t2020392075  ___backgroundColor2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::INTERNAL_CALL_ClearRenderTarget(UnityEngine.Rendering.CommandBuffer,System.Boolean,System.Boolean,UnityEngine.Color&,System.Single)
extern "C"  void CommandBuffer_INTERNAL_CALL_ClearRenderTarget_m3568876474 (Il2CppObject * __this /* static, unused */, CommandBuffer_t1204166949 * ___self0, bool ___clearDepth1, bool ___clearColor2, Color_t2020392075 * ___backgroundColor3, float ___depth4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalFloat(System.Int32,System.Single)
extern "C"  void CommandBuffer_SetGlobalFloat_m2538455203 (CommandBuffer_t1204166949 * __this, int32_t ___nameID0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalVector(System.Int32,UnityEngine.Vector4)
extern "C"  void CommandBuffer_SetGlobalVector_m784779361 (CommandBuffer_t1204166949 * __this, int32_t ___nameID0, Vector4_t2243707581  ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::INTERNAL_CALL_SetGlobalVector(UnityEngine.Rendering.CommandBuffer,System.Int32,UnityEngine.Vector4&)
extern "C"  void CommandBuffer_INTERNAL_CALL_SetGlobalVector_m585317562 (Il2CppObject * __this /* static, unused */, CommandBuffer_t1204166949 * ___self0, int32_t ___nameID1, Vector4_t2243707581 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalTexture(System.Int32,UnityEngine.Rendering.RenderTargetIdentifier)
extern "C"  void CommandBuffer_SetGlobalTexture_m3541048502 (CommandBuffer_t1204166949 * __this, int32_t ___nameID0, RenderTargetIdentifier_t772440638  ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalTexture_Impl(System.Int32,UnityEngine.Rendering.RenderTargetIdentifier&)
extern "C"  void CommandBuffer_SetGlobalTexture_Impl_m1544405271 (CommandBuffer_t1204166949 * __this, int32_t ___nameID0, RenderTargetIdentifier_t772440638 * ___rt1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
