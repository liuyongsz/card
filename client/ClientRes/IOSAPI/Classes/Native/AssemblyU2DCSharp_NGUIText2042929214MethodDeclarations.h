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

// System.String
struct String_t;
// BMSymbol
struct BMSymbol_t1865486779;
// NGUIText/GlyphInfo
struct GlyphInfo_t3590955929;
// BetterList`1<UnityEngine.Color>
struct BetterList_1_t2240780717;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t2464096222;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t2464096221;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t1094906160;
// BetterList`1<System.Int32>
struct BetterList_1_t2292266090;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.Void NGUIText::.cctor()
extern "C"  void NGUIText__cctor_m3924362552 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::Update()
extern "C"  void NGUIText_Update_m3963317672 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::Update(System.Boolean)
extern "C"  void NGUIText_Update_m2822123233 (Il2CppObject * __this /* static, unused */, bool ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::Prepare(System.String)
extern "C"  void NGUIText_Prepare_m872412516 (Il2CppObject * __this /* static, unused */, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BMSymbol NGUIText::GetSymbol(System.String,System.Int32,System.Int32)
extern "C"  BMSymbol_t1865486779 * NGUIText_GetSymbol_m50256655 (Il2CppObject * __this /* static, unused */, String_t* ___text0, int32_t ___index1, int32_t ___textLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIText::GetGlyphWidth(System.Int32,System.Int32)
extern "C"  float NGUIText_GetGlyphWidth_m3445447203 (Il2CppObject * __this /* static, unused */, int32_t ___ch0, int32_t ___prev1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// NGUIText/GlyphInfo NGUIText::GetGlyph(System.Int32,System.Int32)
extern "C"  GlyphInfo_t3590955929 * NGUIText_GetGlyph_m2650405327 (Il2CppObject * __this /* static, unused */, int32_t ___ch0, int32_t ___prev1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NGUIText::ParseColor(System.String,System.Int32)
extern "C"  Color_t2020392075  NGUIText_ParseColor_m2346096245 (Il2CppObject * __this /* static, unused */, String_t* ___text0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIText::EncodeColor(UnityEngine.Color)
extern "C"  String_t* NGUIText_EncodeColor_m3944659951 (Il2CppObject * __this /* static, unused */, Color_t2020392075  ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUIText::ParseSymbol(System.String,System.Int32&)
extern "C"  bool NGUIText_ParseSymbol_m529556513 (Il2CppObject * __this /* static, unused */, String_t* ___text0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUIText::ParseSymbol(System.String,System.Int32&,BetterList`1<UnityEngine.Color>,System.Boolean,System.Int32&,System.Boolean&,System.Boolean&,System.Boolean&,System.Boolean&)
extern "C"  bool NGUIText_ParseSymbol_m1243260584 (Il2CppObject * __this /* static, unused */, String_t* ___text0, int32_t* ___index1, BetterList_1_t2240780717 * ___colors2, bool ___premultiply3, int32_t* ___sub4, bool* ___bold5, bool* ___italic6, bool* ___underline7, bool* ___strike8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIText::StripSymbols(System.String)
extern "C"  String_t* NGUIText_StripSymbols_m1227015469 (Il2CppObject * __this /* static, unused */, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::Align(BetterList`1<UnityEngine.Vector3>,System.Int32,System.Single)
extern "C"  void NGUIText_Align_m926950144 (Il2CppObject * __this /* static, unused */, BetterList_1_t2464096222 * ___verts0, int32_t ___indexOffset1, float ___printedWidth2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIText::GetClosestCharacter(BetterList`1<UnityEngine.Vector3>,UnityEngine.Vector2)
extern "C"  int32_t NGUIText_GetClosestCharacter_m4283388567 (Il2CppObject * __this /* static, unused */, BetterList_1_t2464096222 * ___verts0, Vector2_t2243707579  ___pos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::EndLine(System.Text.StringBuilder&)
extern "C"  void NGUIText_EndLine_m2354123552 (Il2CppObject * __this /* static, unused */, StringBuilder_t1221177846 ** ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::ReplaceSpaceWithNewline(System.Text.StringBuilder&)
extern "C"  void NGUIText_ReplaceSpaceWithNewline_m1051766721 (Il2CppObject * __this /* static, unused */, StringBuilder_t1221177846 ** ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIText::CalculatePrintedSize(System.String)
extern "C"  Vector2_t2243707579  NGUIText_CalculatePrintedSize_m2374104255 (Il2CppObject * __this /* static, unused */, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIText::CalculateOffsetToFit(System.String)
extern "C"  int32_t NGUIText_CalculateOffsetToFit_m1147202752 (Il2CppObject * __this /* static, unused */, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIText::GetEndOfLineThatFits(System.String)
extern "C"  String_t* NGUIText_GetEndOfLineThatFits_m1489487887 (Il2CppObject * __this /* static, unused */, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUIText::WrapText(System.String,System.String&)
extern "C"  bool NGUIText_WrapText_m690767618 (Il2CppObject * __this /* static, unused */, String_t* ___text0, String_t** ___finalText1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUIText::CustomWrapText(System.String,System.String&)
extern "C"  bool NGUIText_CustomWrapText_m631355563 (Il2CppObject * __this /* static, unused */, String_t* ___text0, String_t** ___finalText1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUIText::WrapSymbolText(System.String,System.String&,System.Int32)
extern "C"  bool NGUIText_WrapSymbolText_m1963291887 (Il2CppObject * __this /* static, unused */, String_t* ___text0, String_t** ___finalText1, int32_t ___symbolSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUIText::WrapText(System.String,System.String&,System.Boolean)
extern "C"  bool NGUIText_WrapText_m3011753727 (Il2CppObject * __this /* static, unused */, String_t* ___text0, String_t** ___finalText1, bool ___keepCharCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::Print(System.String,BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C"  void NGUIText_Print_m3630053003 (Il2CppObject * __this /* static, unused */, String_t* ___text0, BetterList_1_t2464096222 * ___verts1, BetterList_1_t2464096221 * ___uvs2, BetterList_1_t1094906160 * ___cols3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::PrintCharacterPositions(System.String,BetterList`1<UnityEngine.Vector3>,BetterList`1<System.Int32>)
extern "C"  void NGUIText_PrintCharacterPositions_m3831035519 (Il2CppObject * __this /* static, unused */, String_t* ___text0, BetterList_1_t2464096222 * ___verts1, BetterList_1_t2292266090 * ___indices2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::PrintCaretAndSelection(System.String,System.Int32,System.Int32,BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector3>)
extern "C"  void NGUIText_PrintCaretAndSelection_m1102244390 (Il2CppObject * __this /* static, unused */, String_t* ___text0, int32_t ___start1, int32_t ___end2, BetterList_1_t2464096222 * ___caret3, BetterList_1_t2464096222 * ___highlight4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
