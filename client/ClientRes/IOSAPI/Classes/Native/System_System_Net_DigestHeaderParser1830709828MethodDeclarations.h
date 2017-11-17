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

// System.Net.DigestHeaderParser
struct DigestHeaderParser_t1830709828;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Net.DigestHeaderParser::.ctor(System.String)
extern "C"  void DigestHeaderParser__ctor_m1132350038 (DigestHeaderParser_t1830709828 * __this, String_t* ___header0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DigestHeaderParser::.cctor()
extern "C"  void DigestHeaderParser__cctor_m2908526115 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestHeaderParser::get_Realm()
extern "C"  String_t* DigestHeaderParser_get_Realm_m4127451387 (DigestHeaderParser_t1830709828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestHeaderParser::get_Opaque()
extern "C"  String_t* DigestHeaderParser_get_Opaque_m565321803 (DigestHeaderParser_t1830709828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestHeaderParser::get_Nonce()
extern "C"  String_t* DigestHeaderParser_get_Nonce_m186634421 (DigestHeaderParser_t1830709828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestHeaderParser::get_Algorithm()
extern "C"  String_t* DigestHeaderParser_get_Algorithm_m2820482383 (DigestHeaderParser_t1830709828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestHeaderParser::get_QOP()
extern "C"  String_t* DigestHeaderParser_get_QOP_m3066299586 (DigestHeaderParser_t1830709828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.DigestHeaderParser::Parse()
extern "C"  bool DigestHeaderParser_Parse_m1058517989 (DigestHeaderParser_t1830709828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DigestHeaderParser::SkipWhitespace()
extern "C"  void DigestHeaderParser_SkipWhitespace_m3836656284 (DigestHeaderParser_t1830709828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestHeaderParser::GetKey()
extern "C"  String_t* DigestHeaderParser_GetKey_m2228230838 (DigestHeaderParser_t1830709828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.DigestHeaderParser::GetKeywordAndValue(System.String&,System.String&)
extern "C"  bool DigestHeaderParser_GetKeywordAndValue_m2162997159 (DigestHeaderParser_t1830709828 * __this, String_t** ___key0, String_t** ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
