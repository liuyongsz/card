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

// System.Net.DigestClient
struct DigestClient_t4126467897;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Net.Authorization
struct Authorization_t1602399;
// System.String
struct String_t;
// System.Net.WebRequest
struct WebRequest_t1365124353;
// System.Net.ICredentials
struct ICredentials_t3855617113;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Net_WebRequest1365124353.h"

// System.Void System.Net.DigestClient::.ctor()
extern "C"  void DigestClient__ctor_m2516808581 (DigestClient_t4126467897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DigestClient::.cctor()
extern "C"  void DigestClient__cctor_m3778947826 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Net.DigestClient::get_Cache()
extern "C"  Hashtable_t909839986 * DigestClient_get_Cache_m409674515 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DigestClient::CheckExpired(System.Int32)
extern "C"  void DigestClient_CheckExpired_m2025209953 (Il2CppObject * __this /* static, unused */, int32_t ___count0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.DigestClient::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern "C"  Authorization_t1602399 * DigestClient_Authenticate_m266117528 (DigestClient_t4126467897 * __this, String_t* ___challenge0, WebRequest_t1365124353 * ___webRequest1, Il2CppObject * ___credentials2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.DigestClient::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C"  Authorization_t1602399 * DigestClient_PreAuthenticate_m3602073897 (DigestClient_t4126467897 * __this, WebRequest_t1365124353 * ___webRequest0, Il2CppObject * ___credentials1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestClient::get_AuthenticationType()
extern "C"  String_t* DigestClient_get_AuthenticationType_m828232277 (DigestClient_t4126467897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
