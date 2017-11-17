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

// System.Net.FileWebRequest
struct FileWebRequest_t1571840111;
// System.Uri
struct Uri_t19570940;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.String
struct String_t;
// System.Net.ICredentials
struct ICredentials_t3855617113;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t3028142837;
// System.Net.IWebProxy
struct IWebProxy_t3916853445;
// System.Exception
struct Exception_t1927440687;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// System.Object
struct Il2CppObject;
// System.Net.WebResponse
struct WebResponse_t1895226051;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_AsyncCallback163412349.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Net.FileWebRequest::.ctor(System.Uri)
extern "C"  void FileWebRequest__ctor_m4207307562 (FileWebRequest_t1571840111 * __this, Uri_t19570940 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileWebRequest__ctor_m4003648606 (FileWebRequest_t1571840111 * __this, SerializationInfo_t228987430 * ___serializationInfo0, StreamingContext_t1417235061  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m986334728 (FileWebRequest_t1571840111 * __this, SerializationInfo_t228987430 * ___serializationInfo0, StreamingContext_t1417235061  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.FileWebRequest::get_ContentLength()
extern "C"  int64_t FileWebRequest_get_ContentLength_m1842929418 (FileWebRequest_t1571840111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::set_ContentType(System.String)
extern "C"  void FileWebRequest_set_ContentType_m1683726709 (FileWebRequest_t1571840111 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.FileWebRequest::get_Credentials()
extern "C"  Il2CppObject * FileWebRequest_get_Credentials_m1452733518 (FileWebRequest_t1571840111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::set_Credentials(System.Net.ICredentials)
extern "C"  void FileWebRequest_set_Credentials_m2172997741 (FileWebRequest_t1571840111 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.FileWebRequest::get_Headers()
extern "C"  WebHeaderCollection_t3028142837 * FileWebRequest_get_Headers_m580634498 (FileWebRequest_t1571840111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FileWebRequest::get_Method()
extern "C"  String_t* FileWebRequest_get_Method_m3138344294 (FileWebRequest_t1571840111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.FileWebRequest::get_Proxy()
extern "C"  Il2CppObject * FileWebRequest_get_Proxy_m1638359118 (FileWebRequest_t1571840111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::set_Proxy(System.Net.IWebProxy)
extern "C"  void FileWebRequest_set_Proxy_m513863677 (FileWebRequest_t1571840111 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.FileWebRequest::get_RequestUri()
extern "C"  Uri_t19570940 * FileWebRequest_get_RequestUri_m983137131 (FileWebRequest_t1571840111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.FileWebRequest::GetMustImplement()
extern "C"  Exception_t1927440687 * FileWebRequest_GetMustImplement_m698617862 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::Abort()
extern "C"  void FileWebRequest_Abort_m2554867697 (FileWebRequest_t1571840111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.FileWebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * FileWebRequest_BeginGetResponse_m1636822097 (FileWebRequest_t1571840111 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest::EndGetResponse(System.IAsyncResult)
extern "C"  WebResponse_t1895226051 * FileWebRequest_EndGetResponse_m1504401314 (FileWebRequest_t1571840111 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest::GetResponse()
extern "C"  WebResponse_t1895226051 * FileWebRequest_GetResponse_m1845449278 (FileWebRequest_t1571840111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest::GetResponseInternal()
extern "C"  WebResponse_t1895226051 * FileWebRequest_GetResponseInternal_m2323755527 (FileWebRequest_t1571840111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileWebRequest_GetObjectData_m3667486695 (FileWebRequest_t1571840111 * __this, SerializationInfo_t228987430 * ___serializationInfo0, StreamingContext_t1417235061  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::Close()
extern "C"  void FileWebRequest_Close_m1199532357 (FileWebRequest_t1571840111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
