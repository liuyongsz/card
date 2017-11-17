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

// System.Net.BasicClient
struct BasicClient_t3996961659;
// System.Net.Authorization
struct Authorization_t1602399;
// System.String
struct String_t;
// System.Net.WebRequest
struct WebRequest_t1365124353;
// System.Net.ICredentials
struct ICredentials_t3855617113;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Net_WebRequest1365124353.h"

// System.Void System.Net.BasicClient::.ctor()
extern "C"  void BasicClient__ctor_m2878156907 (BasicClient_t3996961659 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.BasicClient::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern "C"  Authorization_t1602399 * BasicClient_Authenticate_m1195963312 (BasicClient_t3996961659 * __this, String_t* ___challenge0, WebRequest_t1365124353 * ___webRequest1, Il2CppObject * ___credentials2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.BasicClient::GetBytes(System.String)
extern "C"  ByteU5BU5D_t3397334013* BasicClient_GetBytes_m2438601342 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.BasicClient::InternalAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C"  Authorization_t1602399 * BasicClient_InternalAuthenticate_m84947107 (Il2CppObject * __this /* static, unused */, WebRequest_t1365124353 * ___webRequest0, Il2CppObject * ___credentials1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.BasicClient::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C"  Authorization_t1602399 * BasicClient_PreAuthenticate_m1447712807 (BasicClient_t3996961659 * __this, WebRequest_t1365124353 * ___webRequest0, Il2CppObject * ___credentials1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.BasicClient::get_AuthenticationType()
extern "C"  String_t* BasicClient_get_AuthenticationType_m430846715 (BasicClient_t3996961659 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
