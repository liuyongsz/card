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

// UnityEngine.Mesh
struct Mesh_t1356156583;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t3303648957;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t1827099467;
// UnityEngine.Texture
struct Texture_t2243626319;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Mesh1356156583.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UnityEngine_MaterialPropertyBlock3303648957.h"
#include "UnityEngine_UnityEngine_Rendering_ShadowCastingMod4042762198.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Internal_DrawMeshMatrixArg4188113582.h"
#include "UnityEngine_UnityEngine_MeshTopology3586470668.h"
#include "UnityEngine_UnityEngine_ComputeBuffer1827099467.h"
#include "UnityEngine_UnityEngine_Texture2243626319.h"
#include "UnityEngine_UnityEngine_RenderTexture2666733923.h"
#include "UnityEngine_UnityEngine_RenderBuffer2767087968.h"
#include "UnityEngine_UnityEngine_CubemapFace1725775554.h"

// System.Void UnityEngine.Graphics::DrawMesh(UnityEngine.Mesh,UnityEngine.Matrix4x4,UnityEngine.Material,System.Int32,UnityEngine.Camera,System.Int32,UnityEngine.MaterialPropertyBlock)
extern "C"  void Graphics_DrawMesh_m2423591975 (Il2CppObject * __this /* static, unused */, Mesh_t1356156583 * ___mesh0, Matrix4x4_t2933234003  ___matrix1, Material_t193706927 * ___material2, int32_t ___layer3, Camera_t189460977 * ___camera4, int32_t ___submeshIndex5, MaterialPropertyBlock_t3303648957 * ___properties6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawMesh(UnityEngine.Mesh,UnityEngine.Matrix4x4,UnityEngine.Material,System.Int32,UnityEngine.Camera,System.Int32,UnityEngine.MaterialPropertyBlock,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void Graphics_DrawMesh_m3872434986 (Il2CppObject * __this /* static, unused */, Mesh_t1356156583 * ___mesh0, Matrix4x4_t2933234003  ___matrix1, Material_t193706927 * ___material2, int32_t ___layer3, Camera_t189460977 * ___camera4, int32_t ___submeshIndex5, MaterialPropertyBlock_t3303648957 * ___properties6, bool ___castShadows7, bool ___receiveShadows8, bool ___useLightProbes9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawMesh(UnityEngine.Mesh,UnityEngine.Matrix4x4,UnityEngine.Material,System.Int32,UnityEngine.Camera,System.Int32,UnityEngine.MaterialPropertyBlock,UnityEngine.Rendering.ShadowCastingMode,System.Boolean,UnityEngine.Transform,System.Boolean)
extern "C"  void Graphics_DrawMesh_m2126202847 (Il2CppObject * __this /* static, unused */, Mesh_t1356156583 * ___mesh0, Matrix4x4_t2933234003  ___matrix1, Material_t193706927 * ___material2, int32_t ___layer3, Camera_t189460977 * ___camera4, int32_t ___submeshIndex5, MaterialPropertyBlock_t3303648957 * ___properties6, int32_t ___castShadows7, bool ___receiveShadows8, Transform_t3275118058 * ___probeAnchor9, bool ___useLightProbes10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_DrawMeshMatrix(UnityEngine.Internal_DrawMeshMatrixArguments&,UnityEngine.MaterialPropertyBlock,UnityEngine.Material,UnityEngine.Mesh,UnityEngine.Camera)
extern "C"  void Graphics_Internal_DrawMeshMatrix_m2757306173 (Il2CppObject * __this /* static, unused */, Internal_DrawMeshMatrixArguments_t4188113582 * ___arguments0, MaterialPropertyBlock_t3303648957 * ___properties1, Material_t193706927 * ___material2, Mesh_t1356156583 * ___mesh3, Camera_t189460977 * ___camera4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawMeshNow(UnityEngine.Mesh,UnityEngine.Matrix4x4)
extern "C"  void Graphics_DrawMeshNow_m150453421 (Il2CppObject * __this /* static, unused */, Mesh_t1356156583 * ___mesh0, Matrix4x4_t2933234003  ___matrix1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_DrawMeshNow2(UnityEngine.Mesh,UnityEngine.Matrix4x4,System.Int32)
extern "C"  void Graphics_Internal_DrawMeshNow2_m2841272972 (Il2CppObject * __this /* static, unused */, Mesh_t1356156583 * ___mesh0, Matrix4x4_t2933234003  ___matrix1, int32_t ___materialIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::INTERNAL_CALL_Internal_DrawMeshNow2(UnityEngine.Mesh,UnityEngine.Matrix4x4&,System.Int32)
extern "C"  void Graphics_INTERNAL_CALL_Internal_DrawMeshNow2_m434064341 (Il2CppObject * __this /* static, unused */, Mesh_t1356156583 * ___mesh0, Matrix4x4_t2933234003 * ___matrix1, int32_t ___materialIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawProceduralIndirect(UnityEngine.MeshTopology,UnityEngine.ComputeBuffer,System.Int32)
extern "C"  void Graphics_DrawProceduralIndirect_m1742458937 (Il2CppObject * __this /* static, unused */, int32_t ___topology0, ComputeBuffer_t1827099467 * ___bufferWithArgs1, int32_t ___argsOffset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
extern "C"  void Graphics_Blit_m2123328641 (Il2CppObject * __this /* static, unused */, Texture_t2243626319 * ___source0, RenderTexture_t2666733923 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
extern "C"  void Graphics_Blit_m4129959705 (Il2CppObject * __this /* static, unused */, Texture_t2243626319 * ___source0, RenderTexture_t2666733923 * ___dest1, Material_t193706927 * ___mat2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
extern "C"  void Graphics_Blit_m2987760672 (Il2CppObject * __this /* static, unused */, Texture_t2243626319 * ___source0, RenderTexture_t2666733923 * ___dest1, Material_t193706927 * ___mat2, int32_t ___pass3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_BlitMaterial(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32,System.Boolean)
extern "C"  void Graphics_Internal_BlitMaterial_m2512431126 (Il2CppObject * __this /* static, unused */, Texture_t2243626319 * ___source0, RenderTexture_t2666733923 * ___dest1, Material_t193706927 * ___mat2, int32_t ___pass3, bool ___setRT4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::BlitMultiTap(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Vector2[])
extern "C"  void Graphics_BlitMultiTap_m1361831915 (Il2CppObject * __this /* static, unused */, Texture_t2243626319 * ___source0, RenderTexture_t2666733923 * ___dest1, Material_t193706927 * ___mat2, Vector2U5BU5D_t686124026* ___offsets3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_BlitMultiTap(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Vector2[])
extern "C"  void Graphics_Internal_BlitMultiTap_m671685431 (Il2CppObject * __this /* static, unused */, Texture_t2243626319 * ___source0, RenderTexture_t2666733923 * ___dest1, Material_t193706927 * ___mat2, Vector2U5BU5D_t686124026* ___offsets3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_SetNullRT()
extern "C"  void Graphics_Internal_SetNullRT_m3380023195 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_SetRTSimple(UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&,System.Int32,UnityEngine.CubemapFace,System.Int32)
extern "C"  void Graphics_Internal_SetRTSimple_m1052203585 (Il2CppObject * __this /* static, unused */, RenderBuffer_t2767087968 * ___color0, RenderBuffer_t2767087968 * ___depth1, int32_t ___mip2, int32_t ___face3, int32_t ___depthSlice4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRandomWriteTarget(System.Int32,UnityEngine.ComputeBuffer)
extern "C"  void Graphics_SetRandomWriteTarget_m3626433912 (Il2CppObject * __this /* static, unused */, int32_t ___index0, ComputeBuffer_t1827099467 * ___uav1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRandomWriteTarget(System.Int32,UnityEngine.ComputeBuffer,System.Boolean)
extern "C"  void Graphics_SetRandomWriteTarget_m946408349 (Il2CppObject * __this /* static, unused */, int32_t ___index0, ComputeBuffer_t1827099467 * ___uav1, bool ___preserveCounterValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::ClearRandomWriteTargets()
extern "C"  void Graphics_ClearRandomWriteTargets_m1829463965 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_SetRandomWriteTargetBuffer(System.Int32,UnityEngine.ComputeBuffer,System.Boolean)
extern "C"  void Graphics_Internal_SetRandomWriteTargetBuffer_m1619563557 (Il2CppObject * __this /* static, unused */, int32_t ___index0, ComputeBuffer_t1827099467 * ___uav1, bool ___preserveCounterValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRenderTargetImpl(UnityEngine.RenderBuffer,UnityEngine.RenderBuffer,System.Int32,UnityEngine.CubemapFace,System.Int32)
extern "C"  void Graphics_SetRenderTargetImpl_m2993156656 (Il2CppObject * __this /* static, unused */, RenderBuffer_t2767087968  ___colorBuffer0, RenderBuffer_t2767087968  ___depthBuffer1, int32_t ___mipLevel2, int32_t ___face3, int32_t ___depthSlice4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRenderTargetImpl(UnityEngine.RenderTexture,System.Int32,UnityEngine.CubemapFace,System.Int32)
extern "C"  void Graphics_SetRenderTargetImpl_m2225187728 (Il2CppObject * __this /* static, unused */, RenderTexture_t2666733923 * ___rt0, int32_t ___mipLevel1, int32_t ___face2, int32_t ___depthSlice3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRenderTarget(UnityEngine.RenderTexture)
extern "C"  void Graphics_SetRenderTarget_m3661877391 (Il2CppObject * __this /* static, unused */, RenderTexture_t2666733923 * ___rt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
