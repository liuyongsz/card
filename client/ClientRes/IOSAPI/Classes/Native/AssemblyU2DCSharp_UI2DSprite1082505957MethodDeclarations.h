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

// UI2DSprite
struct UI2DSprite_t1082505957;
// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Shader
struct Shader_t2430389951;
// UnityEngine.Texture
struct Texture_t2243626319;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t2464096222;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t2464096221;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t1094906160;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Sprite309593783.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "UnityEngine_UnityEngine_Shader2430389951.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

// System.Void UI2DSprite::.ctor()
extern "C"  void UI2DSprite__ctor_m2740384932 (UI2DSprite_t1082505957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite UI2DSprite::get_sprite2D()
extern "C"  Sprite_t309593783 * UI2DSprite_get_sprite2D_m2817313295 (UI2DSprite_t1082505957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UI2DSprite::set_sprite2D(UnityEngine.Sprite)
extern "C"  void UI2DSprite_set_sprite2D_m1284703770 (UI2DSprite_t1082505957 * __this, Sprite_t309593783 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UI2DSprite::get_material()
extern "C"  Material_t193706927 * UI2DSprite_get_material_m483886433 (UI2DSprite_t1082505957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UI2DSprite::set_material(UnityEngine.Material)
extern "C"  void UI2DSprite_set_material_m4089755336 (UI2DSprite_t1082505957 * __this, Material_t193706927 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader UI2DSprite::get_shader()
extern "C"  Shader_t2430389951 * UI2DSprite_get_shader_m376668525 (UI2DSprite_t1082505957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UI2DSprite::set_shader(UnityEngine.Shader)
extern "C"  void UI2DSprite_set_shader_m2890615712 (UI2DSprite_t1082505957 * __this, Shader_t2430389951 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UI2DSprite::get_mainTexture()
extern "C"  Texture_t2243626319 * UI2DSprite_get_mainTexture_m589730474 (UI2DSprite_t1082505957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UI2DSprite::get_premultipliedAlpha()
extern "C"  bool UI2DSprite_get_premultipliedAlpha_m867705927 (UI2DSprite_t1082505957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UI2DSprite::get_drawingDimensions()
extern "C"  Vector4_t2243707581  UI2DSprite_get_drawingDimensions_m1749435483 (UI2DSprite_t1082505957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UI2DSprite::get_uvRect()
extern "C"  Rect_t3681755626  UI2DSprite_get_uvRect_m288551154 (UI2DSprite_t1082505957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UI2DSprite::OnUpdate()
extern "C"  void UI2DSprite_OnUpdate_m252237586 (UI2DSprite_t1082505957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UI2DSprite::MakePixelPerfect()
extern "C"  void UI2DSprite_MakePixelPerfect_m2262079141 (UI2DSprite_t1082505957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UI2DSprite::OnFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C"  void UI2DSprite_OnFill_m4227993993 (UI2DSprite_t1082505957 * __this, BetterList_1_t2464096222 * ___verts0, BetterList_1_t2464096221 * ___uvs1, BetterList_1_t1094906160 * ___cols2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
