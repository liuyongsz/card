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

// System.Net.HttpWebRequest
struct HttpWebRequest_t1951404513;
// System.Uri
struct Uri_t19570940;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1197680765;
// System.Net.ICredentials
struct ICredentials_t3855617113;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t3028142837;
// System.Net.IWebProxy
struct IWebProxy_t3916853445;
// System.Net.ServicePoint
struct ServicePoint_t2765344313;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// System.Object
struct Il2CppObject;
// System.Net.WebResponse
struct WebResponse_t1895226051;
// System.Net.WebAsyncResult
struct WebAsyncResult_t905414499;
// System.Exception
struct Exception_t1927440687;
// System.Net.WebConnectionStream
struct WebConnectionStream_t1922483508;
// System.Net.WebConnectionData
struct WebConnectionData_t3550260432;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Net_DecompressionMethods2530166567.h"
#include "System_System_Net_WebHeaderCollection3028142837.h"
#include "mscorlib_System_AsyncCallback163412349.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_System_Net_WebAsyncResult905414499.h"
#include "System_System_Net_HttpStatusCode1898409641.h"
#include "System_System_Net_WebExceptionStatus1169373531.h"
#include "mscorlib_System_Exception1927440687.h"
#include "System_System_Net_WebConnectionStream1922483508.h"
#include "System_System_Net_WebConnectionData3550260432.h"
#include "System_System_Net_WebResponse1895226051.h"

// System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
extern "C"  void HttpWebRequest__ctor_m3872859964 (HttpWebRequest_t1951404513 * __this, Uri_t19570940 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void HttpWebRequest__ctor_m1248252412 (HttpWebRequest_t1951404513 * __this, SerializationInfo_t228987430 * ___serializationInfo0, StreamingContext_t1417235061  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.cctor()
extern "C"  void HttpWebRequest__cctor_m3013631978 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m3671622902 (HttpWebRequest_t1951404513 * __this, SerializationInfo_t228987430 * ___serializationInfo0, StreamingContext_t1417235061  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_Accept(System.String)
extern "C"  void HttpWebRequest_set_Accept_m1297592740 (HttpWebRequest_t1951404513 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_Address()
extern "C"  Uri_t19570940 * HttpWebRequest_get_Address_m4268264978 (HttpWebRequest_t1951404513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.DecompressionMethods System.Net.HttpWebRequest::get_AutomaticDecompression()
extern "C"  int32_t HttpWebRequest_get_AutomaticDecompression_m1315413034 (HttpWebRequest_t1951404513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_InternalAllowBuffering()
extern "C"  bool HttpWebRequest_get_InternalAllowBuffering_m4029180298 (HttpWebRequest_t1951404513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.HttpWebRequest::get_ClientCertificates()
extern "C"  X509CertificateCollection_t1197680765 * HttpWebRequest_get_ClientCertificates_m211130650 (HttpWebRequest_t1951404513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_Connection(System.String)
extern "C"  void HttpWebRequest_set_Connection_m2269457892 (HttpWebRequest_t1951404513 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.HttpWebRequest::get_ContentLength()
extern "C"  int64_t HttpWebRequest_get_ContentLength_m2183698788 (HttpWebRequest_t1951404513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_InternalContentLength(System.Int64)
extern "C"  void HttpWebRequest_set_InternalContentLength_m534457654 (HttpWebRequest_t1951404513 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_ContentType(System.String)
extern "C"  void HttpWebRequest_set_ContentType_m1366840067 (HttpWebRequest_t1951404513 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.HttpWebRequest::get_Credentials()
extern "C"  Il2CppObject * HttpWebRequest_get_Credentials_m3753659148 (HttpWebRequest_t1951404513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_Credentials(System.Net.ICredentials)
extern "C"  void HttpWebRequest_set_Credentials_m3680668843 (HttpWebRequest_t1951404513 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_Expect(System.String)
extern "C"  void HttpWebRequest_set_Expect_m4244418389 (HttpWebRequest_t1951404513 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.HttpWebRequest::get_Headers()
extern "C"  WebHeaderCollection_t3028142837 * HttpWebRequest_get_Headers_m2346817200 (HttpWebRequest_t1951404513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_Headers(System.Net.WebHeaderCollection)
extern "C"  void HttpWebRequest_set_Headers_m853867863 (HttpWebRequest_t1951404513 * __this, WebHeaderCollection_t3028142837 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_KeepAlive()
extern "C"  bool HttpWebRequest_get_KeepAlive_m1340559842 (HttpWebRequest_t1951404513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.HttpWebRequest::get_ReadWriteTimeout()
extern "C"  int32_t HttpWebRequest_get_ReadWriteTimeout_m2226574868 (HttpWebRequest_t1951404513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebRequest::get_Method()
extern "C"  String_t* HttpWebRequest_get_Method_m305529728 (HttpWebRequest_t1951404513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.HttpWebRequest::get_Proxy()
extern "C"  Il2CppObject * HttpWebRequest_get_Proxy_m3973771312 (HttpWebRequest_t1951404513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_Proxy(System.Net.IWebProxy)
extern "C"  void HttpWebRequest_set_Proxy_m3826505947 (HttpWebRequest_t1951404513 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_Referer(System.String)
extern "C"  void HttpWebRequest_set_Referer_m2620041779 (HttpWebRequest_t1951404513 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_RequestUri()
extern "C"  Uri_t19570940 * HttpWebRequest_get_RequestUri_m458351293 (HttpWebRequest_t1951404513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_SendChunked()
extern "C"  bool HttpWebRequest_get_SendChunked_m2061793458 (HttpWebRequest_t1951404513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
extern "C"  ServicePoint_t2765344313 * HttpWebRequest_get_ServicePoint_m3235755721 (HttpWebRequest_t1951404513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebRequest::get_TransferEncoding()
extern "C"  String_t* HttpWebRequest_get_TransferEncoding_m3466636497 (HttpWebRequest_t1951404513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_UserAgent(System.String)
extern "C"  void HttpWebRequest_set_UserAgent_m2142360214 (HttpWebRequest_t1951404513 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_UnsafeAuthenticatedConnectionSharing()
extern "C"  bool HttpWebRequest_get_UnsafeAuthenticatedConnectionSharing_m2150911897 (HttpWebRequest_t1951404513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_ExpectContinue()
extern "C"  bool HttpWebRequest_get_ExpectContinue_m705519218 (HttpWebRequest_t1951404513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_ExpectContinue(System.Boolean)
extern "C"  void HttpWebRequest_set_ExpectContinue_m2674507305 (HttpWebRequest_t1951404513 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_AuthUri()
extern "C"  Uri_t19570940 * HttpWebRequest_get_AuthUri_m4186746998 (HttpWebRequest_t1951404513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_ProxyQuery()
extern "C"  bool HttpWebRequest_get_ProxyQuery_m343708170 (HttpWebRequest_t1951404513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
extern "C"  ServicePoint_t2765344313 * HttpWebRequest_GetServicePoint_m560807134 (HttpWebRequest_t1951404513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::CheckIfForceWrite()
extern "C"  void HttpWebRequest_CheckIfForceWrite_m3288670714 (HttpWebRequest_t1951404513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.HttpWebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * HttpWebRequest_BeginGetResponse_m3845297507 (HttpWebRequest_t1951404513 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.HttpWebRequest::EndGetResponse(System.IAsyncResult)
extern "C"  WebResponse_t1895226051 * HttpWebRequest_EndGetResponse_m2310834408 (HttpWebRequest_t1951404513 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.HttpWebRequest::GetResponse()
extern "C"  WebResponse_t1895226051 * HttpWebRequest_GetResponse_m3643964764 (HttpWebRequest_t1951404513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_FinishedReading()
extern "C"  bool HttpWebRequest_get_FinishedReading_m3120232566 (HttpWebRequest_t1951404513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_FinishedReading(System.Boolean)
extern "C"  void HttpWebRequest_set_FinishedReading_m2845978635 (HttpWebRequest_t1951404513 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_Aborted()
extern "C"  bool HttpWebRequest_get_Aborted_m837349671 (HttpWebRequest_t1951404513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::Abort()
extern "C"  void HttpWebRequest_Abort_m3613087047 (HttpWebRequest_t1951404513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void HttpWebRequest_GetObjectData_m1200570677 (HttpWebRequest_t1951404513 * __this, SerializationInfo_t228987430 * ___serializationInfo0, StreamingContext_t1417235061  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::CheckRequestStarted()
extern "C"  void HttpWebRequest_CheckRequestStarted_m3589854267 (HttpWebRequest_t1951404513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::DoContinueDelegate(System.Int32,System.Net.WebHeaderCollection)
extern "C"  void HttpWebRequest_DoContinueDelegate_m22231078 (HttpWebRequest_t1951404513 * __this, int32_t ___statusCode0, WebHeaderCollection_t3028142837 * ___headers1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::Redirect(System.Net.WebAsyncResult,System.Net.HttpStatusCode)
extern "C"  bool HttpWebRequest_Redirect_m1867273753 (HttpWebRequest_t1951404513 * __this, WebAsyncResult_t905414499 * ___result0, int32_t ___code1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebRequest::GetHeaders()
extern "C"  String_t* HttpWebRequest_GetHeaders_m3197447662 (HttpWebRequest_t1951404513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::DoPreAuthenticate()
extern "C"  void HttpWebRequest_DoPreAuthenticate_m2304545784 (HttpWebRequest_t1951404513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SetWriteStreamError(System.Net.WebExceptionStatus,System.Exception)
extern "C"  void HttpWebRequest_SetWriteStreamError_m2032733103 (HttpWebRequest_t1951404513 * __this, int32_t ___status0, Exception_t1927440687 * ___exc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SendRequestHeaders(System.Boolean)
extern "C"  void HttpWebRequest_SendRequestHeaders_m97433431 (HttpWebRequest_t1951404513 * __this, bool ___propagate_error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SetWriteStream(System.Net.WebConnectionStream)
extern "C"  void HttpWebRequest_SetWriteStream_m2523301716 (HttpWebRequest_t1951404513 * __this, WebConnectionStream_t1922483508 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SetResponseError(System.Net.WebExceptionStatus,System.Exception,System.String)
extern "C"  void HttpWebRequest_SetResponseError_m1533253571 (HttpWebRequest_t1951404513 * __this, int32_t ___status0, Exception_t1927440687 * ___e1, String_t* ___where2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::CheckSendError(System.Net.WebConnectionData)
extern "C"  void HttpWebRequest_CheckSendError_m3735410291 (HttpWebRequest_t1951404513 * __this, WebConnectionData_t3550260432 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::HandleNtlmAuth(System.Net.WebAsyncResult)
extern "C"  void HttpWebRequest_HandleNtlmAuth_m3359114285 (HttpWebRequest_t1951404513 * __this, WebAsyncResult_t905414499 * ___r0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SetResponseData(System.Net.WebConnectionData)
extern "C"  void HttpWebRequest_SetResponseData_m581390180 (HttpWebRequest_t1951404513 * __this, WebConnectionData_t3550260432 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::CheckAuthorization(System.Net.WebResponse,System.Net.HttpStatusCode)
extern "C"  bool HttpWebRequest_CheckAuthorization_m350356356 (HttpWebRequest_t1951404513 * __this, WebResponse_t1895226051 * ___response0, int32_t ___code1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::CheckFinalStatus(System.Net.WebAsyncResult)
extern "C"  bool HttpWebRequest_CheckFinalStatus_m3438683118 (HttpWebRequest_t1951404513 * __this, WebAsyncResult_t905414499 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
