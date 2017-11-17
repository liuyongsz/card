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

// System.Net.WebRequest
struct WebRequest_t1365124353;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.String
struct String_t;
// System.Exception
struct Exception_t1927440687;
// System.Net.ICredentials
struct ICredentials_t3855617113;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t3028142837;
// System.Net.IWebProxy
struct IWebProxy_t3916853445;
// System.Uri
struct Uri_t19570940;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// System.Object
struct Il2CppObject;
// System.Net.WebResponse
struct WebResponse_t1895226051;
// System.Net.IWebRequestCreate
struct IWebRequestCreate_t3933815702;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Net_WebHeaderCollection3028142837.h"
#include "mscorlib_System_AsyncCallback163412349.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void System.Net.WebRequest::.ctor()
extern "C"  void WebRequest__ctor_m2841187593 (WebRequest_t1365124353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebRequest__ctor_m1537196628 (WebRequest_t1365124353 * __this, SerializationInfo_t228987430 * ___serializationInfo0, StreamingContext_t1417235061  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::.cctor()
extern "C"  void WebRequest__cctor_m3509849914 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m3377822910 (WebRequest_t1365124353 * __this, SerializationInfo_t228987430 * ___serializationInfo0, StreamingContext_t1417235061  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::AddDynamicPrefix(System.String,System.String)
extern "C"  void WebRequest_AddDynamicPrefix_m1363854157 (Il2CppObject * __this /* static, unused */, String_t* ___protocol0, String_t* ___implementor1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.WebRequest::GetMustImplement()
extern "C"  Exception_t1927440687 * WebRequest_GetMustImplement_m2014409540 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.WebRequest::get_ContentLength()
extern "C"  int64_t WebRequest_get_ContentLength_m958359132 (WebRequest_t1365124353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::set_ContentType(System.String)
extern "C"  void WebRequest_set_ContentType_m3811714907 (WebRequest_t1365124353 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.WebRequest::get_Credentials()
extern "C"  Il2CppObject * WebRequest_get_Credentials_m2648907180 (WebRequest_t1365124353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::set_Credentials(System.Net.ICredentials)
extern "C"  void WebRequest_set_Credentials_m1156339835 (WebRequest_t1365124353 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.WebRequest::get_Headers()
extern "C"  WebHeaderCollection_t3028142837 * WebRequest_get_Headers_m4285955368 (WebRequest_t1365124353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::set_Headers(System.Net.WebHeaderCollection)
extern "C"  void WebRequest_set_Headers_m1614859391 (WebRequest_t1365124353 * __this, WebHeaderCollection_t3028142837 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebRequest::get_Method()
extern "C"  String_t* WebRequest_get_Method_m3935889216 (WebRequest_t1365124353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::get_Proxy()
extern "C"  Il2CppObject * WebRequest_get_Proxy_m2184384304 (WebRequest_t1365124353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::set_Proxy(System.Net.IWebProxy)
extern "C"  void WebRequest_set_Proxy_m1205812491 (WebRequest_t1365124353 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebRequest::get_RequestUri()
extern "C"  Uri_t19570940 * WebRequest_get_RequestUri_m10278461 (WebRequest_t1365124353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::get_DefaultWebProxy()
extern "C"  Il2CppObject * WebRequest_get_DefaultWebProxy_m741473019 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::GetDefaultWebProxy()
extern "C"  Il2CppObject * WebRequest_GetDefaultWebProxy_m1479642708 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::Abort()
extern "C"  void WebRequest_Abort_m1466873215 (WebRequest_t1365124353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * WebRequest_BeginGetResponse_m1390960979 (WebRequest_t1365124353 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.WebRequest::Create(System.String)
extern "C"  WebRequest_t1365124353 * WebRequest_Create_m274268363 (Il2CppObject * __this /* static, unused */, String_t* ___requestUriString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.WebRequest::Create(System.Uri)
extern "C"  WebRequest_t1365124353 * WebRequest_Create_m2515147542 (Il2CppObject * __this /* static, unused */, Uri_t19570940 * ___requestUri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.WebRequest::EndGetResponse(System.IAsyncResult)
extern "C"  WebResponse_t1895226051 * WebRequest_EndGetResponse_m179948544 (WebRequest_t1365124353 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.WebRequest::GetResponse()
extern "C"  WebResponse_t1895226051 * WebRequest_GetResponse_m665752724 (WebRequest_t1365124353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebRequest_GetObjectData_m2022281397 (WebRequest_t1365124353 * __this, SerializationInfo_t228987430 * ___serializationInfo0, StreamingContext_t1417235061  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebRequestCreate System.Net.WebRequest::GetCreator(System.String)
extern "C"  Il2CppObject * WebRequest_GetCreator_m4229310124 (Il2CppObject * __this /* static, unused */, String_t* ___prefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::AddPrefix(System.String,System.Type)
extern "C"  void WebRequest_AddPrefix_m3456797905 (Il2CppObject * __this /* static, unused */, String_t* ___prefix0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
