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

// UIFont
struct UIFont_t389944949;
// BMFont
struct BMFont_t421884312;
// System.Collections.Generic.List`1<BMSymbol>
struct List_1_t1234607911;
// UIAtlas
struct UIAtlas_t1304615221;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.String
struct String_t;
// UISpriteData
struct UISpriteData_t2862501359;
// UnityEngine.Font
struct Font_t4239498691;
// UnityEngine.Texture
struct Texture_t2243626319;
// BMSymbol
struct BMSymbol_t1865486779;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BMFont421884312.h"
#include "AssemblyU2DCSharp_UIAtlas1304615221.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_UIFont389944949.h"
#include "UnityEngine_UnityEngine_Font4239498691.h"
#include "UnityEngine_UnityEngine_FontStyle2764949590.h"

// System.Void UIFont::.ctor()
extern "C"  void UIFont__ctor_m2527350482 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BMFont UIFont::get_bmFont()
extern "C"  BMFont_t421884312 * UIFont_get_bmFont_m2906105458 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_bmFont(BMFont)
extern "C"  void UIFont_set_bmFont_m682267561 (UIFont_t389944949 * __this, BMFont_t421884312 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIFont::get_texWidth()
extern "C"  int32_t UIFont_get_texWidth_m1785076744 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_texWidth(System.Int32)
extern "C"  void UIFont_set_texWidth_m3252934663 (UIFont_t389944949 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIFont::get_texHeight()
extern "C"  int32_t UIFont_get_texHeight_m404198245 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_texHeight(System.Int32)
extern "C"  void UIFont_set_texHeight_m3161286598 (UIFont_t389944949 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::get_hasSymbols()
extern "C"  bool UIFont_get_hasSymbols_m2356923234 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<BMSymbol> UIFont::get_symbols()
extern "C"  List_1_t1234607911 * UIFont_get_symbols_m199140244 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIAtlas UIFont::get_atlas()
extern "C"  UIAtlas_t1304615221 * UIFont_get_atlas_m2530562324 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_atlas(UIAtlas)
extern "C"  void UIFont_set_atlas_m2779347313 (UIFont_t389944949 * __this, UIAtlas_t1304615221 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UIFont::get_material()
extern "C"  Material_t193706927 * UIFont_get_material_m2422080949 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_material(UnityEngine.Material)
extern "C"  void UIFont_set_material_m2850561022 (UIFont_t389944949 * __this, Material_t193706927 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::get_premultipliedAlphaShader()
extern "C"  bool UIFont_get_premultipliedAlphaShader_m3814573626 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::get_packedFontShader()
extern "C"  bool UIFont_get_packedFontShader_m3013696035 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UIFont::get_texture()
extern "C"  Texture2D_t3542995729 * UIFont_get_texture_m419031323 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UIFont::get_uvRect()
extern "C"  Rect_t3681755626  UIFont_get_uvRect_m367419500 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_uvRect(UnityEngine.Rect)
extern "C"  void UIFont_set_uvRect_m2747150545 (UIFont_t389944949 * __this, Rect_t3681755626  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIFont::get_spriteName()
extern "C"  String_t* UIFont_get_spriteName_m3352312938 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_spriteName(System.String)
extern "C"  void UIFont_set_spriteName_m55877617 (UIFont_t389944949 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::get_isValid()
extern "C"  bool UIFont_get_isValid_m2021120409 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIFont::get_size()
extern "C"  int32_t UIFont_get_size_m744911966 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_size(System.Int32)
extern "C"  void UIFont_set_size_m1018502617 (UIFont_t389944949 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIFont::get_defaultSize()
extern "C"  int32_t UIFont_get_defaultSize_m322943281 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_defaultSize(System.Int32)
extern "C"  void UIFont_set_defaultSize_m4062132004 (UIFont_t389944949 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UISpriteData UIFont::get_sprite()
extern "C"  UISpriteData_t2862501359 * UIFont_get_sprite_m276414486 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIFont UIFont::get_replacement()
extern "C"  UIFont_t389944949 * UIFont_get_replacement_m2434960259 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_replacement(UIFont)
extern "C"  void UIFont_set_replacement_m4092540652 (UIFont_t389944949 * __this, UIFont_t389944949 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::get_isDynamic()
extern "C"  bool UIFont_get_isDynamic_m4260164930 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UIFont::get_dynamicFont()
extern "C"  Font_t4239498691 * UIFont_get_dynamicFont_m2797798366 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_dynamicFont(UnityEngine.Font)
extern "C"  void UIFont_set_dynamicFont_m244592551 (UIFont_t389944949 * __this, Font_t4239498691 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.FontStyle UIFont::get_dynamicFontStyle()
extern "C"  int32_t UIFont_get_dynamicFontStyle_m3376376108 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_dynamicFontStyle(UnityEngine.FontStyle)
extern "C"  void UIFont_set_dynamicFontStyle_m105008447 (UIFont_t389944949 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::Trim()
extern "C"  void UIFont_Trim_m852672452 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::References(UIFont)
extern "C"  bool UIFont_References_m2203481619 (UIFont_t389944949 * __this, UIFont_t389944949 * ___font0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::CheckIfRelated(UIFont,UIFont)
extern "C"  bool UIFont_CheckIfRelated_m2340705004 (Il2CppObject * __this /* static, unused */, UIFont_t389944949 * ___a0, UIFont_t389944949 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UIFont::get_dynamicTexture()
extern "C"  Texture_t2243626319 * UIFont_get_dynamicTexture_m3690725334 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::MarkAsChanged()
extern "C"  void UIFont_MarkAsChanged_m251056173 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::UpdateUVRect()
extern "C"  void UIFont_UpdateUVRect_m3479615972 (UIFont_t389944949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BMSymbol UIFont::GetSymbol(System.String,System.Boolean)
extern "C"  BMSymbol_t1865486779 * UIFont_GetSymbol_m4243773895 (UIFont_t389944949 * __this, String_t* ___sequence0, bool ___createIfMissing1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BMSymbol UIFont::MatchSymbol(System.String,System.Int32,System.Int32)
extern "C"  BMSymbol_t1865486779 * UIFont_MatchSymbol_m2621651169 (UIFont_t389944949 * __this, String_t* ___text0, int32_t ___offset1, int32_t ___textLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::AddSymbol(System.String,System.String)
extern "C"  void UIFont_AddSymbol_m3472955699 (UIFont_t389944949 * __this, String_t* ___sequence0, String_t* ___spriteName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::RemoveSymbol(System.String)
extern "C"  void UIFont_RemoveSymbol_m1668972986 (UIFont_t389944949 * __this, String_t* ___sequence0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::RenameSymbol(System.String,System.String)
extern "C"  void UIFont_RenameSymbol_m2558660220 (UIFont_t389944949 * __this, String_t* ___before0, String_t* ___after1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::UsesSprite(System.String)
extern "C"  bool UIFont_UsesSprite_m2655989147 (UIFont_t389944949 * __this, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
