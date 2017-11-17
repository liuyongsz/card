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

// BMFont
struct BMFont_t421884312;
// System.String
struct String_t;
// System.Collections.Generic.List`1<BMGlyph>
struct List_1_t3272617963;
// BMGlyph
struct BMGlyph_t3903496831;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void BMFont::.ctor()
extern "C"  void BMFont__ctor_m2748453639 (BMFont_t421884312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BMFont::get_isValid()
extern "C"  bool BMFont_get_isValid_m2851869616 (BMFont_t421884312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMFont::get_charSize()
extern "C"  int32_t BMFont_get_charSize_m3110935453 (BMFont_t421884312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BMFont::set_charSize(System.Int32)
extern "C"  void BMFont_set_charSize_m3815280998 (BMFont_t421884312 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMFont::get_baseOffset()
extern "C"  int32_t BMFont_get_baseOffset_m3007123846 (BMFont_t421884312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BMFont::set_baseOffset(System.Int32)
extern "C"  void BMFont_set_baseOffset_m1332242807 (BMFont_t421884312 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMFont::get_texWidth()
extern "C"  int32_t BMFont_get_texWidth_m407547427 (BMFont_t421884312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BMFont::set_texWidth(System.Int32)
extern "C"  void BMFont_set_texWidth_m1925539812 (BMFont_t421884312 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMFont::get_texHeight()
extern "C"  int32_t BMFont_get_texHeight_m1097717428 (BMFont_t421884312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BMFont::set_texHeight(System.Int32)
extern "C"  void BMFont_set_texHeight_m3457358441 (BMFont_t421884312 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMFont::get_glyphCount()
extern "C"  int32_t BMFont_get_glyphCount_m3550360705 (BMFont_t421884312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BMFont::get_spriteName()
extern "C"  String_t* BMFont_get_spriteName_m1389745457 (BMFont_t421884312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BMFont::set_spriteName(System.String)
extern "C"  void BMFont_set_spriteName_m822954138 (BMFont_t421884312 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<BMGlyph> BMFont::get_glyphs()
extern "C"  List_1_t3272617963 * BMFont_get_glyphs_m1208414335 (BMFont_t421884312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BMGlyph BMFont::GetGlyph(System.Int32,System.Boolean)
extern "C"  BMGlyph_t3903496831 * BMFont_GetGlyph_m371899891 (BMFont_t421884312 * __this, int32_t ___index0, bool ___createIfMissing1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BMGlyph BMFont::GetGlyph(System.Int32)
extern "C"  BMGlyph_t3903496831 * BMFont_GetGlyph_m329785742 (BMFont_t421884312 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BMFont::Clear()
extern "C"  void BMFont_Clear_m3571887230 (BMFont_t421884312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BMFont::Trim(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void BMFont_Trim_m2426894545 (BMFont_t421884312 * __this, int32_t ___xMin0, int32_t ___yMin1, int32_t ___xMax2, int32_t ___yMax3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
