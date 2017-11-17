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

// LitJson.Lexer
struct Lexer_t186508296;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t1561828458;
// LitJson.FsmContext
struct FsmContext_t1296252303;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_TextReader1561828458.h"
#include "ls_client_tools_LitJson_FsmContext1296252303.h"

// System.Boolean LitJson.Lexer::get_EndOfInput()
extern "C"  bool Lexer_get_EndOfInput_m2672239228 (Lexer_t186508296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.Lexer::get_Token()
extern "C"  int32_t Lexer_get_Token_m208434335 (Lexer_t186508296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.Lexer::get_StringValue()
extern "C"  String_t* Lexer_get_StringValue_m1745897381 (Lexer_t186508296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::.cctor()
extern "C"  void Lexer__cctor_m3386707796 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::.ctor(System.IO.TextReader)
extern "C"  void Lexer__ctor_m1230721642 (Lexer_t186508296 * __this, TextReader_t1561828458 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.Lexer::HexValue(System.Int32)
extern "C"  int32_t Lexer_HexValue_m3140881606 (Il2CppObject * __this /* static, unused */, int32_t ___digit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::PopulateFsmTables()
extern "C"  void Lexer_PopulateFsmTables_m2076219028 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char LitJson.Lexer::ProcessEscChar(System.Int32)
extern "C"  Il2CppChar Lexer_ProcessEscChar_m3248893392 (Il2CppObject * __this /* static, unused */, int32_t ___esc_char0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State1(LitJson.FsmContext)
extern "C"  bool Lexer_State1_m3267813925 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State2(LitJson.FsmContext)
extern "C"  bool Lexer_State2_m3730017930 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State3(LitJson.FsmContext)
extern "C"  bool Lexer_State3_m3013464943 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State4(LitJson.FsmContext)
extern "C"  bool Lexer_State4_m3068810708 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State5(LitJson.FsmContext)
extern "C"  bool Lexer_State5_m2270666681 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State6(LitJson.FsmContext)
extern "C"  bool Lexer_State6_m2732870686 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State7(LitJson.FsmContext)
extern "C"  bool Lexer_State7_m2016317699 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State8(LitJson.FsmContext)
extern "C"  bool Lexer_State8_m3170049304 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State9(LitJson.FsmContext)
extern "C"  bool Lexer_State9_m2371905277 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State10(LitJson.FsmContext)
extern "C"  bool Lexer_State10_m1253881361 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State11(LitJson.FsmContext)
extern "C"  bool Lexer_State11_m4198841488 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State12(LitJson.FsmContext)
extern "C"  bool Lexer_State12_m3551322003 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State13(LitJson.FsmContext)
extern "C"  bool Lexer_State13_m2045134098 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State14(LitJson.FsmContext)
extern "C"  bool Lexer_State14_m124782101 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State15(LitJson.FsmContext)
extern "C"  bool Lexer_State15_m3069742228 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State16(LitJson.FsmContext)
extern "C"  bool Lexer_State16_m2422222743 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State17(LitJson.FsmContext)
extern "C"  bool Lexer_State17_m916034838 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State18(LitJson.FsmContext)
extern "C"  bool Lexer_State18_m2448758281 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State19(LitJson.FsmContext)
extern "C"  bool Lexer_State19_m1098751112 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State20(LitJson.FsmContext)
extern "C"  bool Lexer_State20_m1207647168 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State21(LitJson.FsmContext)
extern "C"  bool Lexer_State21_m4152607295 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State22(LitJson.FsmContext)
extern "C"  bool Lexer_State22_m3505087810 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State23(LitJson.FsmContext)
extern "C"  bool Lexer_State23_m1998899905 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State24(LitJson.FsmContext)
extern "C"  bool Lexer_State24_m78547908 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State25(LitJson.FsmContext)
extern "C"  bool Lexer_State25_m3023508035 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State26(LitJson.FsmContext)
extern "C"  bool Lexer_State26_m2375988550 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State27(LitJson.FsmContext)
extern "C"  bool Lexer_State27_m869800645 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State28(LitJson.FsmContext)
extern "C"  bool Lexer_State28_m2402524088 (Il2CppObject * __this /* static, unused */, FsmContext_t1296252303 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::GetChar()
extern "C"  bool Lexer_GetChar_m640992169 (Lexer_t186508296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.Lexer::NextChar()
extern "C"  int32_t Lexer_NextChar_m525461884 (Lexer_t186508296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::NextToken()
extern "C"  bool Lexer_NextToken_m3964518287 (Lexer_t186508296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::UngetChar()
extern "C"  void Lexer_UngetChar_m1121890520 (Lexer_t186508296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
