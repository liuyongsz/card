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

// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Texture2D3542995729.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_SpriteMeshType334427896.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"
#include "UnityEngine_UnityEngine_Bounds3033363703.h"
#include "UnityEngine_UnityEngine_SpritePackingRotation2206508470.h"

// UnityEngine.Sprite UnityEngine.Sprite::Create(UnityEngine.Texture2D,UnityEngine.Rect,UnityEngine.Vector2,System.Single)
extern "C"  Sprite_t309593783 * Sprite_Create_m634597153 (Il2CppObject * __this /* static, unused */, Texture2D_t3542995729 * ___texture0, Rect_t3681755626  ___rect1, Vector2_t2243707579  ___pivot2, float ___pixelsPerUnit3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite UnityEngine.Sprite::INTERNAL_CALL_Create(UnityEngine.Texture2D,UnityEngine.Rect&,UnityEngine.Vector2&,System.Single,System.UInt32,UnityEngine.SpriteMeshType,UnityEngine.Vector4&)
extern "C"  Sprite_t309593783 * Sprite_INTERNAL_CALL_Create_m2698929789 (Il2CppObject * __this /* static, unused */, Texture2D_t3542995729 * ___texture0, Rect_t3681755626 * ___rect1, Vector2_t2243707579 * ___pivot2, float ___pixelsPerUnit3, uint32_t ___extrude4, int32_t ___meshType5, Vector4_t2243707581 * ___border6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.Sprite::get_bounds()
extern "C"  Bounds_t3033363703  Sprite_get_bounds_m31809269 (Sprite_t309593783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Sprite::INTERNAL_get_bounds(UnityEngine.Bounds&)
extern "C"  void Sprite_INTERNAL_get_bounds_m1405549450 (Sprite_t309593783 * __this, Bounds_t3033363703 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Sprite::get_rect()
extern "C"  Rect_t3681755626  Sprite_get_rect_m4043737881 (Sprite_t309593783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Sprite::INTERNAL_get_rect(UnityEngine.Rect&)
extern "C"  void Sprite_INTERNAL_get_rect_m2819780324 (Sprite_t309593783 * __this, Rect_t3681755626 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Sprite::get_pixelsPerUnit()
extern "C"  float Sprite_get_pixelsPerUnit_m1785791149 (Sprite_t309593783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.Sprite::get_texture()
extern "C"  Texture2D_t3542995729 * Sprite_get_texture_m2733552707 (Sprite_t309593783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.Sprite::get_associatedAlphaSplitTexture()
extern "C"  Texture2D_t3542995729 * Sprite_get_associatedAlphaSplitTexture_m3617241169 (Sprite_t309593783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Sprite::get_textureRect()
extern "C"  Rect_t3681755626  Sprite_get_textureRect_m330371354 (Sprite_t309593783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Sprite::INTERNAL_get_textureRect(UnityEngine.Rect&)
extern "C"  void Sprite_INTERNAL_get_textureRect_m4189537307 (Sprite_t309593783 * __this, Rect_t3681755626 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Sprite::get_packed()
extern "C"  bool Sprite_get_packed_m1143987329 (Sprite_t309593783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SpritePackingRotation UnityEngine.Sprite::get_packingRotation()
extern "C"  int32_t Sprite_get_packingRotation_m1195280904 (Sprite_t309593783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Sprite::get_border()
extern "C"  Vector4_t2243707581  Sprite_get_border_m3513048554 (Sprite_t309593783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Sprite::INTERNAL_get_border(UnityEngine.Vector4&)
extern "C"  void Sprite_INTERNAL_get_border_m3676056217 (Sprite_t309593783 * __this, Vector4_t2243707581 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
