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

// UITexture
struct UITexture_t2537039969;
// UnityEngine.Texture
struct Texture_t2243626319;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Shader
struct Shader_t2430389951;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t2464096222;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t2464096221;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t1094906160;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Texture2243626319.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "UnityEngine_UnityEngine_Shader2430389951.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"

// System.Void UITexture::.ctor()
extern "C"  void UITexture__ctor_m488982864 (UITexture_t2537039969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UITexture::get_MirrorHorizontal()
extern "C"  bool UITexture_get_MirrorHorizontal_m3360139910 (UITexture_t2537039969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::set_MirrorHorizontal(System.Boolean)
extern "C"  void UITexture_set_MirrorHorizontal_m136540233 (UITexture_t2537039969 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UITexture::get_MirrorVertical()
extern "C"  bool UITexture_get_MirrorVertical_m2185120512 (UITexture_t2537039969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::set_MirrorVertical(System.Boolean)
extern "C"  void UITexture_set_MirrorVertical_m336316125 (UITexture_t2537039969 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::OnDestroy()
extern "C"  void UITexture_OnDestroy_m3437063991 (UITexture_t2537039969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UITexture::get_mainTexture()
extern "C"  Texture_t2243626319 * UITexture_get_mainTexture_m2427918336 (UITexture_t2537039969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::set_mainTexture(UnityEngine.Texture)
extern "C"  void UITexture_set_mainTexture_m4061503025 (UITexture_t2537039969 * __this, Texture_t2243626319 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UITexture::get_material()
extern "C"  Material_t193706927 * UITexture_get_material_m4212599041 (UITexture_t2537039969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::set_material(UnityEngine.Material)
extern "C"  void UITexture_set_material_m343400984 (UITexture_t2537039969 * __this, Material_t193706927 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader UITexture::get_shader()
extern "C"  Shader_t2430389951 * UITexture_get_shader_m1619297057 (UITexture_t2537039969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::set_shader(UnityEngine.Shader)
extern "C"  void UITexture_set_shader_m3459312240 (UITexture_t2537039969 * __this, Shader_t2430389951 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UITexture::get_premultipliedAlpha()
extern "C"  bool UITexture_get_premultipliedAlpha_m3787724459 (UITexture_t2537039969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UITexture::get_uvRect()
extern "C"  Rect_t3681755626  UITexture_get_uvRect_m4034063954 (UITexture_t2537039969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::set_uvRect(UnityEngine.Rect)
extern "C"  void UITexture_set_uvRect_m56074597 (UITexture_t2537039969 * __this, Rect_t3681755626  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UITexture::get_drawingDimensions()
extern "C"  Vector4_t2243707581  UITexture_get_drawingDimensions_m2720269915 (UITexture_t2537039969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::MakePixelPerfect()
extern "C"  void UITexture_MakePixelPerfect_m1800436093 (UITexture_t2537039969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::OnFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C"  void UITexture_OnFill_m1697394353 (UITexture_t2537039969 * __this, BetterList_1_t2464096222 * ___verts0, BetterList_1_t2464096221 * ___uvs1, BetterList_1_t1094906160 * ___cols2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
