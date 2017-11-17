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

// System.Net.CookieContainer
struct CookieContainer_t2808809223;
// System.Net.Cookie
struct Cookie_t3154017544;
// System.String
struct String_t;
// System.Uri
struct Uri_t19570940;
// System.Net.CookieCollection
struct CookieCollection_t521422364;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Cookie3154017544.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Uri19570940.h"

// System.Void System.Net.CookieContainer::.ctor()
extern "C"  void CookieContainer__ctor_m2232515219 (CookieContainer_t2808809223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::AddCookie(System.Net.Cookie)
extern "C"  void CookieContainer_AddCookie_m2988233116 (CookieContainer_t2808809223 * __this, Cookie_t3154017544 * ___cookie0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.CookieContainer::CountDomain(System.String)
extern "C"  int32_t CookieContainer_CountDomain_m1088970898 (CookieContainer_t2808809223 * __this, String_t* ___domain0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::RemoveOldest(System.String)
extern "C"  void CookieContainer_RemoveOldest_m2278733834 (CookieContainer_t2808809223 * __this, String_t* ___domain0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::CheckExpiration()
extern "C"  void CookieContainer_CheckExpiration_m1872209538 (CookieContainer_t2808809223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::Cook(System.Uri,System.Net.Cookie)
extern "C"  void CookieContainer_Cook_m4063584936 (CookieContainer_t2808809223 * __this, Uri_t19570940 * ___uri0, Cookie_t3154017544 * ___cookie1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::Add(System.Uri,System.Net.Cookie)
extern "C"  void CookieContainer_Add_m1442357673 (CookieContainer_t2808809223 * __this, Uri_t19570940 * ___uri0, Cookie_t3154017544 * ___cookie1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.CookieContainer::GetCookieHeader(System.Uri)
extern "C"  String_t* CookieContainer_GetCookieHeader_m3789169220 (CookieContainer_t2808809223 * __this, Uri_t19570940 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.CookieContainer::CheckDomain(System.String,System.String,System.Boolean)
extern "C"  bool CookieContainer_CheckDomain_m3129371454 (Il2CppObject * __this /* static, unused */, String_t* ___domain0, String_t* ___host1, bool ___exact2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.CookieCollection System.Net.CookieContainer::GetCookies(System.Uri)
extern "C"  CookieCollection_t521422364 * CookieContainer_GetCookies_m781592810 (CookieContainer_t2808809223 * __this, Uri_t19570940 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.CookieContainer::IsNullOrEmpty(System.String)
extern "C"  bool CookieContainer_IsNullOrEmpty_m212241700 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
