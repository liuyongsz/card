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

// System.Net.HttpWebResponse
struct HttpWebResponse_t2828383075;
// System.Uri
struct Uri_t19570940;
// System.String
struct String_t;
// System.Net.WebConnectionData
struct WebConnectionData_t3550260432;
// System.Net.CookieContainer
struct CookieContainer_t2808809223;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t3028142837;
// System.IO.Stream
struct Stream_t3255436806;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Net_WebConnectionData3550260432.h"
#include "System_System_Net_CookieContainer2808809223.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "System_System_Net_HttpStatusCode1898409641.h"
#include "mscorlib_System_DateTime693205669.h"

// System.Void System.Net.HttpWebResponse::.ctor(System.Uri,System.String,System.Net.WebConnectionData,System.Net.CookieContainer)
extern "C"  void HttpWebResponse__ctor_m2248254905 (HttpWebResponse_t2828383075 * __this, Uri_t19570940 * ___uri0, String_t* ___method1, WebConnectionData_t3550260432 * ___data2, CookieContainer_t2808809223 * ___container3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void HttpWebResponse__ctor_m3455005236 (HttpWebResponse_t2828383075 * __this, SerializationInfo_t228987430 * ___serializationInfo0, StreamingContext_t1417235061  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void HttpWebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m381391898 (HttpWebResponse_t2828383075 * __this, SerializationInfo_t228987430 * ___serializationInfo0, StreamingContext_t1417235061  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::System.IDisposable.Dispose()
extern "C"  void HttpWebResponse_System_IDisposable_Dispose_m3100301154 (HttpWebResponse_t2828383075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.HttpWebResponse::get_ContentLength()
extern "C"  int64_t HttpWebResponse_get_ContentLength_m489158902 (HttpWebResponse_t2828383075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.HttpWebResponse::get_Headers()
extern "C"  WebHeaderCollection_t3028142837 * HttpWebResponse_get_Headers_m2263588500 (HttpWebResponse_t2828383075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpStatusCode System.Net.HttpWebResponse::get_StatusCode()
extern "C"  int32_t HttpWebResponse_get_StatusCode_m1275359591 (HttpWebResponse_t2828383075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebResponse::get_StatusDescription()
extern "C"  String_t* HttpWebResponse_get_StatusDescription_m3067865 (HttpWebResponse_t2828383075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::ReadAll()
extern "C"  void HttpWebResponse_ReadAll_m4206570716 (HttpWebResponse_t2828383075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.HttpWebResponse::GetResponseStream()
extern "C"  Stream_t3255436806 * HttpWebResponse_GetResponseStream_m2057333534 (HttpWebResponse_t2828383075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void HttpWebResponse_GetObjectData_m1820028123 (HttpWebResponse_t2828383075 * __this, SerializationInfo_t228987430 * ___serializationInfo0, StreamingContext_t1417235061  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::Close()
extern "C"  void HttpWebResponse_Close_m470074137 (HttpWebResponse_t2828383075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::Dispose(System.Boolean)
extern "C"  void HttpWebResponse_Dispose_m3723705951 (HttpWebResponse_t2828383075 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::CheckDisposed()
extern "C"  void HttpWebResponse_CheckDisposed_m3986878416 (HttpWebResponse_t2828383075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::FillCookies()
extern "C"  void HttpWebResponse_FillCookies_m2854870415 (HttpWebResponse_t2828383075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::SetCookie(System.String)
extern "C"  void HttpWebResponse_SetCookie_m4142391783 (HttpWebResponse_t2828383075 * __this, String_t* ___header0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::SetCookie2(System.String)
extern "C"  void HttpWebResponse_SetCookie2_m2722448709 (HttpWebResponse_t2828383075 * __this, String_t* ___cookies_str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.HttpWebResponse::TryParseCookieExpires(System.String)
extern "C"  DateTime_t693205669  HttpWebResponse_TryParseCookieExpires_m1863373408 (HttpWebResponse_t2828383075 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
