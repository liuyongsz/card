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

// HighlightingSystem.Highlighter
struct Highlighter_t958778585;
// UnityEngine.Shader
struct Shader_t2430389951;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t1204166949;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.Collections.Generic.List`1<UnityEngine.Renderer>
struct List_1_t3921398993;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Rendering_CommandBuffer1204166949.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"

// System.Void HighlightingSystem.Highlighter::.ctor()
extern "C"  void Highlighter__ctor_m1870385233 (Highlighter_t958778585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::.cctor()
extern "C"  void Highlighter__cctor_m3873170132 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::ReinitMaterials()
extern "C"  void Highlighter_ReinitMaterials_m2811231566 (Highlighter_t958778585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::OnParams(UnityEngine.Color)
extern "C"  void Highlighter_OnParams_m3546271198 (Highlighter_t958778585 * __this, Color_t2020392075  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::On()
extern "C"  void Highlighter_On_m3369021276 (Highlighter_t958778585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::On(UnityEngine.Color)
extern "C"  void Highlighter_On_m2605899832 (Highlighter_t958778585 * __this, Color_t2020392075  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::FlashingParams(UnityEngine.Color,UnityEngine.Color,System.Single)
extern "C"  void Highlighter_FlashingParams_m3382565974 (Highlighter_t958778585 * __this, Color_t2020392075  ___color10, Color_t2020392075  ___color21, float ___freq2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::FlashingOn()
extern "C"  void Highlighter_FlashingOn_m194070706 (Highlighter_t958778585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::FlashingOn(UnityEngine.Color,UnityEngine.Color)
extern "C"  void Highlighter_FlashingOn_m1390834640 (Highlighter_t958778585 * __this, Color_t2020392075  ___color10, Color_t2020392075  ___color21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::FlashingOn(UnityEngine.Color,UnityEngine.Color,System.Single)
extern "C"  void Highlighter_FlashingOn_m2927979613 (Highlighter_t958778585 * __this, Color_t2020392075  ___color10, Color_t2020392075  ___color21, float ___freq2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::FlashingOn(System.Single)
extern "C"  void Highlighter_FlashingOn_m1790714077 (Highlighter_t958778585 * __this, float ___freq0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::FlashingOff()
extern "C"  void Highlighter_FlashingOff_m1115705326 (Highlighter_t958778585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::FlashingSwitch()
extern "C"  void Highlighter_FlashingSwitch_m2852614083 (Highlighter_t958778585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::ConstantParams(UnityEngine.Color)
extern "C"  void Highlighter_ConstantParams_m3662601853 (Highlighter_t958778585 * __this, Color_t2020392075  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::ConstantOn()
extern "C"  void Highlighter_ConstantOn_m1109760180 (Highlighter_t958778585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::ConstantOn(UnityEngine.Color)
extern "C"  void Highlighter_ConstantOn_m204420996 (Highlighter_t958778585 * __this, Color_t2020392075  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::ConstantOff()
extern "C"  void Highlighter_ConstantOff_m657453612 (Highlighter_t958778585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::ConstantSwitch()
extern "C"  void Highlighter_ConstantSwitch_m3124823089 (Highlighter_t958778585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::ConstantOnImmediate()
extern "C"  void Highlighter_ConstantOnImmediate_m2971091603 (Highlighter_t958778585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::ConstantOnImmediate(UnityEngine.Color)
extern "C"  void Highlighter_ConstantOnImmediate_m704471569 (Highlighter_t958778585 * __this, Color_t2020392075  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::ConstantOffImmediate()
extern "C"  void Highlighter_ConstantOffImmediate_m4107465673 (Highlighter_t958778585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::ConstantSwitchImmediate()
extern "C"  void Highlighter_ConstantSwitchImmediate_m2315164720 (Highlighter_t958778585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::SeeThroughOn()
extern "C"  void Highlighter_SeeThroughOn_m1888285312 (Highlighter_t958778585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::SeeThroughOff()
extern "C"  void Highlighter_SeeThroughOff_m3980756644 (Highlighter_t958778585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::SeeThroughSwitch()
extern "C"  void Highlighter_SeeThroughSwitch_m285041647 (Highlighter_t958778585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::OccluderOn()
extern "C"  void Highlighter_OccluderOn_m1893637277 (Highlighter_t958778585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::OccluderOff()
extern "C"  void Highlighter_OccluderOff_m843899443 (Highlighter_t958778585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::OccluderSwitch()
extern "C"  void Highlighter_OccluderSwitch_m951874390 (Highlighter_t958778585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::Off()
extern "C"  void Highlighter_Off_m2257449156 (Highlighter_t958778585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::Die()
extern "C"  void Highlighter_Die_m1665957649 (Highlighter_t958778585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HighlightingSystem.Highlighter::get_highlighted()
extern "C"  bool Highlighter_get_highlighted_m1789674221 (Highlighter_t958778585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::set_highlighted(System.Boolean)
extern "C"  void Highlighter_set_highlighted_m1068406202 (Highlighter_t958778585 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HighlightingSystem.Highlighter::get_once()
extern "C"  bool Highlighter_get_once_m104830995 (Highlighter_t958778585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::set_once(System.Boolean)
extern "C"  void Highlighter_set_once_m951767820 (Highlighter_t958778585 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single HighlightingSystem.Highlighter::get_zTestFloat()
extern "C"  float Highlighter_get_zTestFloat_m868646946 (Highlighter_t958778585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single HighlightingSystem.Highlighter::get_stencilRefFloat()
extern "C"  float Highlighter_get_stencilRefFloat_m3351034773 (Highlighter_t958778585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader HighlightingSystem.Highlighter::get_opaqueShader()
extern "C"  Shader_t2430389951 * Highlighter_get_opaqueShader_m1430768539 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader HighlightingSystem.Highlighter::get_transparentShader()
extern "C"  Shader_t2430389951 * Highlighter_get_transparentShader_m3015025486 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material HighlightingSystem.Highlighter::get_opaqueMaterial()
extern "C"  Material_t193706927 * Highlighter_get_opaqueMaterial_m1991552851 (Highlighter_t958778585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::Awake()
extern "C"  void Highlighter_Awake_m1238830174 (Highlighter_t958778585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::OnEnable()
extern "C"  void Highlighter_OnEnable_m278852705 (Highlighter_t958778585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::OnDisable()
extern "C"  void Highlighter_OnDisable_m3975849982 (Highlighter_t958778585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::Update()
extern "C"  void Highlighter_Update_m1915287488 (Highlighter_t958778585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HighlightingSystem.Highlighter::UpdateHighlighting(System.Boolean)
extern "C"  bool Highlighter_UpdateHighlighting_m261098155 (Highlighter_t958778585 * __this, bool ___isDepthAvailable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::FillBuffer(UnityEngine.Rendering.CommandBuffer&,System.Boolean)
extern "C"  void Highlighter_FillBuffer_m3073957379 (Highlighter_t958778585 * __this, CommandBuffer_t1204166949 ** ___buffer0, bool ___renderQueue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HighlightingSystem.Highlighter::CheckInstance()
extern "C"  bool Highlighter_CheckInstance_m3308716652 (Highlighter_t958778585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HighlightingSystem.Highlighter::UpdateRenderers()
extern "C"  bool Highlighter_UpdateRenderers_m1138342132 (Highlighter_t958778585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HighlightingSystem.Highlighter::UpdateVisibility()
extern "C"  bool Highlighter_UpdateVisibility_m1808339734 (Highlighter_t958778585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::GrabRenderers(UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.Renderer>&)
extern "C"  void Highlighter_GrabRenderers_m1205447232 (Highlighter_t958778585 * __this, Transform_t3275118058 * ___t0, List_1_t3921398993 ** ___renderers1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::UpdateShaderParams(System.Boolean,System.Boolean)
extern "C"  void Highlighter_UpdateShaderParams_m3938890225 (Highlighter_t958778585 * __this, bool ___zt0, bool ___sr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::UpdateColors()
extern "C"  void Highlighter_UpdateColors_m3432148212 (Highlighter_t958778585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::SetColor(UnityEngine.Color)
extern "C"  void Highlighter_SetColor_m2752020918 (Highlighter_t958778585 * __this, Color_t2020392075  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::PerformTransition()
extern "C"  void Highlighter_PerformTransition_m797421435 (Highlighter_t958778585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::SetZWrite(System.Single)
extern "C"  void Highlighter_SetZWrite_m3823587309 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::SetOffsetFactor(System.Single)
extern "C"  void Highlighter_SetOffsetFactor_m1804810322 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HighlightingSystem.Highlighter::SetOffsetUnits(System.Single)
extern "C"  void Highlighter_SetOffsetUnits_m623061432 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
