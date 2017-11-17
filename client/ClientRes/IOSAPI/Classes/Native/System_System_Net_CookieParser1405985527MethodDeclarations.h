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

// System.Net.CookieParser
struct CookieParser_t1405985527;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Net.CookieParser::.ctor(System.String)
extern "C"  void CookieParser__ctor_m1435107037 (CookieParser_t1405985527 * __this, String_t* ___header0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieParser::.ctor(System.String,System.Int32)
extern "C"  void CookieParser__ctor_m3319922556 (CookieParser_t1405985527 * __this, String_t* ___header0, int32_t ___position1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.CookieParser::GetNextNameValue(System.String&,System.String&)
extern "C"  bool CookieParser_GetNextNameValue_m1766297820 (CookieParser_t1405985527 * __this, String_t** ___name0, String_t** ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.CookieParser::GetCookieName()
extern "C"  String_t* CookieParser_GetCookieName_m1217139115 (CookieParser_t1405985527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.CookieParser::GetCookieValue()
extern "C"  String_t* CookieParser_GetCookieValue_m1650827507 (CookieParser_t1405985527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
