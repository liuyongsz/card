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

// UIDrawCall
struct UIDrawCall_t3291843512;
// BetterList`1<UIDrawCall>
struct BetterList_1_t3512232154;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Texture
struct Texture_t2243626319;
// UnityEngine.Shader
struct Shader_t2430389951;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// UIPanel
struct UIPanel_t1795085332;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "UnityEngine_UnityEngine_Texture2243626319.h"
#include "UnityEngine_UnityEngine_Shader2430389951.h"
#include "AssemblyU2DCSharp_UIDrawCall_Clipping4042448929.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_UIPanel1795085332.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_UIDrawCall3291843512.h"

// System.Void UIDrawCall::.ctor()
extern "C"  void UIDrawCall__ctor_m2681451025 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::.cctor()
extern "C"  void UIDrawCall__cctor_m1043664882 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetterList`1<UIDrawCall> UIDrawCall::get_list()
extern "C"  BetterList_1_t3512232154 * UIDrawCall_get_list_m281580932 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetterList`1<UIDrawCall> UIDrawCall::get_activeList()
extern "C"  BetterList_1_t3512232154 * UIDrawCall_get_activeList_m442662138 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetterList`1<UIDrawCall> UIDrawCall::get_inactiveList()
extern "C"  BetterList_1_t3512232154 * UIDrawCall_get_inactiveList_m2331731169 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIDrawCall::get_renderQueue()
extern "C"  int32_t UIDrawCall_get_renderQueue_m2697288129 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_renderQueue(System.Int32)
extern "C"  void UIDrawCall_set_renderQueue_m1401490722 (UIDrawCall_t3291843512 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIDrawCall::get_sortingOrder()
extern "C"  int32_t UIDrawCall_get_sortingOrder_m2177827644 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_sortingOrder(System.Int32)
extern "C"  void UIDrawCall_set_sortingOrder_m2261644529 (UIDrawCall_t3291843512 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIDrawCall::get_finalRenderQueue()
extern "C"  int32_t UIDrawCall_get_finalRenderQueue_m3999468577 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UIDrawCall::get_cachedTransform()
extern "C"  Transform_t3275118058 * UIDrawCall_get_cachedTransform_m3072307484 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UIDrawCall::get_baseMaterial()
extern "C"  Material_t193706927 * UIDrawCall_get_baseMaterial_m1163998273 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_baseMaterial(UnityEngine.Material)
extern "C"  void UIDrawCall_set_baseMaterial_m3075112536 (UIDrawCall_t3291843512 * __this, Material_t193706927 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UIDrawCall::get_dynamicMaterial()
extern "C"  Material_t193706927 * UIDrawCall_get_dynamicMaterial_m76011065 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UIDrawCall::get_mainTexture()
extern "C"  Texture_t2243626319 * UIDrawCall_get_mainTexture_m1930380135 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_mainTexture(UnityEngine.Texture)
extern "C"  void UIDrawCall_set_mainTexture_m729525252 (UIDrawCall_t3291843512 * __this, Texture_t2243626319 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader UIDrawCall::get_shader()
extern "C"  Shader_t2430389951 * UIDrawCall_get_shader_m3395586662 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_shader(UnityEngine.Shader)
extern "C"  void UIDrawCall_set_shader_m962412499 (UIDrawCall_t3291843512 * __this, Shader_t2430389951 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIDrawCall::get_triangles()
extern "C"  int32_t UIDrawCall_get_triangles_m2367011471 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIDrawCall::get_isClipped()
extern "C"  bool UIDrawCall_get_isClipped_m1934861829 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIDrawCall/Clipping UIDrawCall::get_clipping()
extern "C"  int32_t UIDrawCall_get_clipping_m3699051176 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_clipping(UIDrawCall/Clipping)
extern "C"  void UIDrawCall_set_clipping_m2747106653 (UIDrawCall_t3291843512 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UIDrawCall::get_clipRange()
extern "C"  Vector4_t2243707581  UIDrawCall_get_clipRange_m134812808 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_clipRange(UnityEngine.Vector4)
extern "C"  void UIDrawCall_set_clipRange_m3555197731 (UIDrawCall_t3291843512 * __this, Vector4_t2243707581  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIDrawCall::get_clipSoftness()
extern "C"  Vector2_t2243707579  UIDrawCall_get_clipSoftness_m1698244424 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_clipSoftness(UnityEngine.Vector2)
extern "C"  void UIDrawCall_set_clipSoftness_m1852973607 (UIDrawCall_t3291843512 * __this, Vector2_t2243707579  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::CreateMaterial()
extern "C"  void UIDrawCall_CreateMaterial_m3460284722 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UIDrawCall::RebuildMaterial()
extern "C"  Material_t193706927 * UIDrawCall_RebuildMaterial_m3742491826 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::UpdateMaterials()
extern "C"  void UIDrawCall_UpdateMaterials_m437069610 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::UpdateGeometry()
extern "C"  void UIDrawCall_UpdateGeometry_m3840815606 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] UIDrawCall::GenerateCachedIndexBuffer(System.Int32,System.Int32)
extern "C"  Int32U5BU5D_t3030399641* UIDrawCall_GenerateCachedIndexBuffer_m3243077292 (UIDrawCall_t3291843512 * __this, int32_t ___vertexCount0, int32_t ___indexCount1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::OnWillRenderObject()
extern "C"  void UIDrawCall_OnWillRenderObject_m1693728361 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::OnEnable()
extern "C"  void UIDrawCall_OnEnable_m1963970617 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::OnDisable()
extern "C"  void UIDrawCall_OnDisable_m562679316 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::OnDestroy()
extern "C"  void UIDrawCall_OnDestroy_m4164280926 (UIDrawCall_t3291843512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIDrawCall UIDrawCall::Create(UIPanel,UnityEngine.Material,UnityEngine.Texture,UnityEngine.Shader)
extern "C"  UIDrawCall_t3291843512 * UIDrawCall_Create_m68224828 (Il2CppObject * __this /* static, unused */, UIPanel_t1795085332 * ___panel0, Material_t193706927 * ___mat1, Texture_t2243626319 * ___tex2, Shader_t2430389951 * ___shader3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIDrawCall UIDrawCall::Create(System.String,UIPanel,UnityEngine.Material,UnityEngine.Texture,UnityEngine.Shader)
extern "C"  UIDrawCall_t3291843512 * UIDrawCall_Create_m2207866268 (Il2CppObject * __this /* static, unused */, String_t* ___name0, UIPanel_t1795085332 * ___pan1, Material_t193706927 * ___mat2, Texture_t2243626319 * ___tex3, Shader_t2430389951 * ___shader4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIDrawCall UIDrawCall::Create(System.String)
extern "C"  UIDrawCall_t3291843512 * UIDrawCall_Create_m9969686 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::ClearAll()
extern "C"  void UIDrawCall_ClearAll_m62230569 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::ReleaseAll()
extern "C"  void UIDrawCall_ReleaseAll_m1453355429 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::ReleaseInactive()
extern "C"  void UIDrawCall_ReleaseInactive_m784056131 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIDrawCall::Count(UIPanel)
extern "C"  int32_t UIDrawCall_Count_m1750139584 (Il2CppObject * __this /* static, unused */, UIPanel_t1795085332 * ___panel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::Destroy(UIDrawCall)
extern "C"  void UIDrawCall_Destroy_m660608057 (Il2CppObject * __this /* static, unused */, UIDrawCall_t3291843512 * ___dc0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
