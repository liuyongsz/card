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

// UIAtlas
struct UIAtlas_t1304615221;
// UnityEngine.Material
struct Material_t193706927;
// System.Collections.Generic.List`1<UISpriteData>
struct List_1_t2231622491;
// UnityEngine.Texture
struct Texture_t2243626319;
// UISpriteData
struct UISpriteData_t2862501359;
// System.String
struct String_t;
// BetterList`1<System.String>
struct BetterList_1_t2249608875;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "AssemblyU2DCSharp_UIAtlas1304615221.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_UISpriteData2862501359.h"

// System.Void UIAtlas::.ctor()
extern "C"  void UIAtlas__ctor_m3221178888 (UIAtlas_t1304615221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIAtlas::get_scaleX()
extern "C"  float UIAtlas_get_scaleX_m1860553111 (UIAtlas_t1304615221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIAtlas::get_scaleY()
extern "C"  float UIAtlas_get_scaleY_m1860553016 (UIAtlas_t1304615221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UIAtlas::get_spriteMaterial()
extern "C"  Material_t193706927 * UIAtlas_get_spriteMaterial_m3928591568 (UIAtlas_t1304615221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIAtlas::set_spriteMaterial(UnityEngine.Material)
extern "C"  void UIAtlas_set_spriteMaterial_m567946767 (UIAtlas_t1304615221 * __this, Material_t193706927 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIAtlas::get_premultipliedAlpha()
extern "C"  bool UIAtlas_get_premultipliedAlpha_m1845283583 (UIAtlas_t1304615221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UISpriteData> UIAtlas::get_spriteList()
extern "C"  List_1_t2231622491 * UIAtlas_get_spriteList_m125809544 (UIAtlas_t1304615221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIAtlas::set_spriteList(System.Collections.Generic.List`1<UISpriteData>)
extern "C"  void UIAtlas_set_spriteList_m2060638693 (UIAtlas_t1304615221 * __this, List_1_t2231622491 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UIAtlas::get_texture()
extern "C"  Texture_t2243626319 * UIAtlas_get_texture_m3657597885 (UIAtlas_t1304615221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIAtlas::get_pixelSize()
extern "C"  float UIAtlas_get_pixelSize_m1880591844 (UIAtlas_t1304615221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIAtlas::set_pixelSize(System.Single)
extern "C"  void UIAtlas_set_pixelSize_m3237446769 (UIAtlas_t1304615221 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIAtlas UIAtlas::get_replacement()
extern "C"  UIAtlas_t1304615221 * UIAtlas_get_replacement_m2768374711 (UIAtlas_t1304615221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIAtlas::set_replacement(UIAtlas)
extern "C"  void UIAtlas_set_replacement_m1508465620 (UIAtlas_t1304615221 * __this, UIAtlas_t1304615221 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UISpriteData UIAtlas::GetSprite(System.String)
extern "C"  UISpriteData_t2862501359 * UIAtlas_GetSprite_m2728552167 (UIAtlas_t1304615221 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIAtlas::SortAlphabetically()
extern "C"  void UIAtlas_SortAlphabetically_m3180402935 (UIAtlas_t1304615221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetterList`1<System.String> UIAtlas::GetListOfSprites()
extern "C"  BetterList_1_t2249608875 * UIAtlas_GetListOfSprites_m2274312931 (UIAtlas_t1304615221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetterList`1<System.String> UIAtlas::GetListOfSprites(System.String)
extern "C"  BetterList_1_t2249608875 * UIAtlas_GetListOfSprites_m4074764649 (UIAtlas_t1304615221 * __this, String_t* ___match0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIAtlas::References(UIAtlas)
extern "C"  bool UIAtlas_References_m690578119 (UIAtlas_t1304615221 * __this, UIAtlas_t1304615221 * ___atlas0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIAtlas::CheckIfRelated(UIAtlas,UIAtlas)
extern "C"  bool UIAtlas_CheckIfRelated_m2184160748 (Il2CppObject * __this /* static, unused */, UIAtlas_t1304615221 * ___a0, UIAtlas_t1304615221 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIAtlas::MarkAsChanged()
extern "C"  void UIAtlas_MarkAsChanged_m243549185 (UIAtlas_t1304615221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIAtlas::Upgrade()
extern "C"  bool UIAtlas_Upgrade_m1929975178 (UIAtlas_t1304615221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIAtlas::<SortAlphabetically>m__C(UISpriteData,UISpriteData)
extern "C"  int32_t UIAtlas_U3CSortAlphabeticallyU3Em__C_m2712964129 (Il2CppObject * __this /* static, unused */, UISpriteData_t2862501359 * ___s10, UISpriteData_t2862501359 * ___s21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
