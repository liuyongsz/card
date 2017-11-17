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

// Mono.Xml.XPath.Tokenizer
struct Tokenizer_t2998805977;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Mono.Xml.XPath.Tokenizer::.ctor(System.String)
extern "C"  void Tokenizer__ctor_m1398203389 (Tokenizer_t2998805977 * __this, String_t* ___strInput0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.XPath.Tokenizer::.cctor()
extern "C"  void Tokenizer__cctor_m2060900514 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Mono.Xml.XPath.Tokenizer::Peek(System.Int32)
extern "C"  Il2CppChar Tokenizer_Peek_m2430039125 (Tokenizer_t2998805977 * __this, int32_t ___iOffset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Mono.Xml.XPath.Tokenizer::Peek()
extern "C"  Il2CppChar Tokenizer_Peek_m4092849854 (Tokenizer_t2998805977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Mono.Xml.XPath.Tokenizer::GetChar()
extern "C"  Il2CppChar Tokenizer_GetChar_m1400237669 (Tokenizer_t2998805977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Mono.Xml.XPath.Tokenizer::PutBack()
extern "C"  Il2CppChar Tokenizer_PutBack_m867424057 (Tokenizer_t2998805977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XPath.Tokenizer::SkipWhitespace()
extern "C"  bool Tokenizer_SkipWhitespace_m2497068197 (Tokenizer_t2998805977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.XPath.Tokenizer::ParseNumber()
extern "C"  int32_t Tokenizer_ParseNumber_m467074155 (Tokenizer_t2998805977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.XPath.Tokenizer::ParseLiteral()
extern "C"  int32_t Tokenizer_ParseLiteral_m2938550991 (Tokenizer_t2998805977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.XPath.Tokenizer::ReadIdentifier()
extern "C"  String_t* Tokenizer_ReadIdentifier_m2324954551 (Tokenizer_t2998805977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.XPath.Tokenizer::ParseIdentifier()
extern "C"  int32_t Tokenizer_ParseIdentifier_m1812339463 (Tokenizer_t2998805977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XPath.Tokenizer::IsWhitespace(System.Char)
extern "C"  bool Tokenizer_IsWhitespace_m2427259549 (Il2CppObject * __this /* static, unused */, Il2CppChar ___ch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XPath.Tokenizer::IsDigit(System.Char)
extern "C"  bool Tokenizer_IsDigit_m2184602637 (Il2CppObject * __this /* static, unused */, Il2CppChar ___ch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.XPath.Tokenizer::ParseToken()
extern "C"  int32_t Tokenizer_ParseToken_m2433209371 (Tokenizer_t2998805977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XPath.Tokenizer::advance()
extern "C"  bool Tokenizer_advance_m369343213 (Tokenizer_t2998805977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.XPath.Tokenizer::token()
extern "C"  int32_t Tokenizer_token_m146958280 (Tokenizer_t2998805977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.XPath.Tokenizer::value()
extern "C"  Il2CppObject * Tokenizer_value_m563653837 (Tokenizer_t2998805977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XPath.Tokenizer::get_IsFirstToken()
extern "C"  bool Tokenizer_get_IsFirstToken_m1793553257 (Tokenizer_t2998805977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XPath.Tokenizer::IsNodeType(System.Int32)
extern "C"  bool Tokenizer_IsNodeType_m1033733148 (Tokenizer_t2998805977 * __this, int32_t ___iToken0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XPath.Tokenizer::IsOperatorName(System.Int32)
extern "C"  bool Tokenizer_IsOperatorName_m418883819 (Tokenizer_t2998805977 * __this, int32_t ___iToken0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XPath.Tokenizer::IsAxisName(System.Int32)
extern "C"  bool Tokenizer_IsAxisName_m4030271918 (Tokenizer_t2998805977 * __this, int32_t ___iToken0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
