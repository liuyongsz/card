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

// System.Net.DigestSession
struct DigestSession_t3531077550;
// System.String
struct String_t;
// System.Net.HttpWebRequest
struct HttpWebRequest_t1951404513;
// System.Net.Authorization
struct Authorization_t1602399;
// System.Net.WebRequest
struct WebRequest_t1365124353;
// System.Net.ICredentials
struct ICredentials_t3855617113;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Net_HttpWebRequest1951404513.h"
#include "System_System_Net_WebRequest1365124353.h"
#include "mscorlib_System_DateTime693205669.h"

// System.Void System.Net.DigestSession::.ctor()
extern "C"  void DigestSession__ctor_m219247524 (DigestSession_t3531077550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DigestSession::.cctor()
extern "C"  void DigestSession__cctor_m740195973 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_Algorithm()
extern "C"  String_t* DigestSession_get_Algorithm_m585149861 (DigestSession_t3531077550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_Realm()
extern "C"  String_t* DigestSession_get_Realm_m673529869 (DigestSession_t3531077550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_Nonce()
extern "C"  String_t* DigestSession_get_Nonce_m906301747 (DigestSession_t3531077550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_Opaque()
extern "C"  String_t* DigestSession_get_Opaque_m2278283157 (DigestSession_t3531077550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_QOP()
extern "C"  String_t* DigestSession_get_QOP_m1113039172 (DigestSession_t3531077550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_CNonce()
extern "C"  String_t* DigestSession_get_CNonce_m3370172786 (DigestSession_t3531077550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.DigestSession::Parse(System.String)
extern "C"  bool DigestSession_Parse_m264955329 (DigestSession_t3531077550 * __this, String_t* ___challenge0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::HashToHexString(System.String)
extern "C"  String_t* DigestSession_HashToHexString_m2072787046 (DigestSession_t3531077550 * __this, String_t* ___toBeHashed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::HA1(System.String,System.String)
extern "C"  String_t* DigestSession_HA1_m1737037599 (DigestSession_t3531077550 * __this, String_t* ___username0, String_t* ___password1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::HA2(System.Net.HttpWebRequest)
extern "C"  String_t* DigestSession_HA2_m3561412987 (DigestSession_t3531077550 * __this, HttpWebRequest_t1951404513 * ___webRequest0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::Response(System.String,System.String,System.Net.HttpWebRequest)
extern "C"  String_t* DigestSession_Response_m2907830879 (DigestSession_t3531077550 * __this, String_t* ___username0, String_t* ___password1, HttpWebRequest_t1951404513 * ___webRequest2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.DigestSession::Authenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C"  Authorization_t1602399 * DigestSession_Authenticate_m2834933581 (DigestSession_t3531077550 * __this, WebRequest_t1365124353 * ___webRequest0, Il2CppObject * ___credentials1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.DigestSession::get_LastUse()
extern "C"  DateTime_t693205669  DigestSession_get_LastUse_m1368265751 (DigestSession_t3531077550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
