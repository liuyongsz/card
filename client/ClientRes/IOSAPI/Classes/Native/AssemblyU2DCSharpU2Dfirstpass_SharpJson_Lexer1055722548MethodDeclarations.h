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

// SharpJson.Lexer
struct Lexer_t1055722548;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t1328083999;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SharpJson_Lexer_Toke2967303148.h"

// System.Void SharpJson.Lexer::.ctor(System.String)
extern "C"  void Lexer__ctor_m223824587 (Lexer_t1055722548 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SharpJson.Lexer::get_hasError()
extern "C"  bool Lexer_get_hasError_m81244526 (Lexer_t1055722548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SharpJson.Lexer::get_lineNumber()
extern "C"  int32_t Lexer_get_lineNumber_m1494572391 (Lexer_t1055722548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SharpJson.Lexer::set_lineNumber(System.Int32)
extern "C"  void Lexer_set_lineNumber_m164587988 (Lexer_t1055722548 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SharpJson.Lexer::get_parseNumbersAsFloat()
extern "C"  bool Lexer_get_parseNumbersAsFloat_m4030313939 (Lexer_t1055722548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SharpJson.Lexer::set_parseNumbersAsFloat(System.Boolean)
extern "C"  void Lexer_set_parseNumbersAsFloat_m558444054 (Lexer_t1055722548 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SharpJson.Lexer::Reset()
extern "C"  void Lexer_Reset_m3750381944 (Lexer_t1055722548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SharpJson.Lexer::ParseString()
extern "C"  String_t* Lexer_ParseString_m1957421324 (Lexer_t1055722548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SharpJson.Lexer::GetNumberString()
extern "C"  String_t* Lexer_GetNumberString_m4085550994 (Lexer_t1055722548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single SharpJson.Lexer::ParseFloatNumber()
extern "C"  float Lexer_ParseFloatNumber_m929660801 (Lexer_t1055722548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double SharpJson.Lexer::ParseDoubleNumber()
extern "C"  double Lexer_ParseDoubleNumber_m3686146499 (Lexer_t1055722548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SharpJson.Lexer::GetLastIndexOfNumber(System.Int32)
extern "C"  int32_t Lexer_GetLastIndexOfNumber_m2634613376 (Lexer_t1055722548 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SharpJson.Lexer::SkipWhiteSpaces()
extern "C"  void Lexer_SkipWhiteSpaces_m2297780908 (Lexer_t1055722548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SharpJson.Lexer/Token SharpJson.Lexer::LookAhead()
extern "C"  int32_t Lexer_LookAhead_m3981468590 (Lexer_t1055722548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SharpJson.Lexer/Token SharpJson.Lexer::NextToken()
extern "C"  int32_t Lexer_NextToken_m162093224 (Lexer_t1055722548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SharpJson.Lexer/Token SharpJson.Lexer::NextToken(System.Char[],System.Int32&)
extern "C"  int32_t Lexer_NextToken_m3104828628 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
