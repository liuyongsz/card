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

// System.Net.FtpWebRequest
struct FtpWebRequest_t3120721823;
// System.Uri
struct Uri_t19570940;
// System.Exception
struct Exception_t1927440687;
// System.String
struct String_t;
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
// System.Net.FtpStatus
struct FtpStatus_t3714482970;
// System.Net.Sockets.Socket
struct Socket_t3821512045;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.IO.Stream
struct Stream_t3255436806;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t283079845;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t777637347;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Net_WebHeaderCollection3028142837.h"
#include "System_System_Net_FtpWebRequest_RequestState4256633122.h"
#include "mscorlib_System_AsyncCallback163412349.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_System_Net_FtpStatus3714482970.h"
#include "mscorlib_System_Exception1927440687.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_Security_Cryptography_X509Certifica283079845.h"
#include "System_System_Security_Cryptography_X509Certificate777637347.h"
#include "System_System_Net_Security_SslPolicyErrors1928581431.h"

// System.Void System.Net.FtpWebRequest::.ctor(System.Uri)
extern "C"  void FtpWebRequest__ctor_m3003551676 (FtpWebRequest_t3120721823 * __this, Uri_t19570940 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::.cctor()
extern "C"  void FtpWebRequest__cctor_m2500702602 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.FtpWebRequest::GetMustImplement()
extern "C"  Exception_t1927440687 * FtpWebRequest_GetMustImplement_m1573950018 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::set_ContentType(System.String)
extern "C"  void FtpWebRequest_set_ContentType_m1822294709 (FtpWebRequest_t3120721823 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.FtpWebRequest::get_ContentLength()
extern "C"  int64_t FtpWebRequest_get_ContentLength_m1417244294 (FtpWebRequest_t3120721823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.FtpWebRequest::get_Credentials()
extern "C"  Il2CppObject * FtpWebRequest_get_Credentials_m1965483784 (FtpWebRequest_t3120721823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::set_Credentials(System.Net.ICredentials)
extern "C"  void FtpWebRequest_set_Credentials_m720584709 (FtpWebRequest_t3120721823 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::get_EnableSsl()
extern "C"  bool FtpWebRequest_get_EnableSsl_m4256945839 (FtpWebRequest_t3120721823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.FtpWebRequest::get_Headers()
extern "C"  WebHeaderCollection_t3028142837 * FtpWebRequest_get_Headers_m3224023044 (FtpWebRequest_t3120721823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::set_Headers(System.Net.WebHeaderCollection)
extern "C"  void FtpWebRequest_set_Headers_m3511120133 (FtpWebRequest_t3120721823 * __this, WebHeaderCollection_t3028142837 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpWebRequest::get_Method()
extern "C"  String_t* FtpWebRequest_get_Method_m2029197558 (FtpWebRequest_t3120721823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.FtpWebRequest::get_Proxy()
extern "C"  Il2CppObject * FtpWebRequest_get_Proxy_m443956992 (FtpWebRequest_t3120721823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::set_Proxy(System.Net.IWebProxy)
extern "C"  void FtpWebRequest_set_Proxy_m3703762677 (FtpWebRequest_t3120721823 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.FtpWebRequest::get_ReadWriteTimeout()
extern "C"  int32_t FtpWebRequest_get_ReadWriteTimeout_m338224764 (FtpWebRequest_t3120721823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.FtpWebRequest::get_RequestUri()
extern "C"  Uri_t19570940 * FtpWebRequest_get_RequestUri_m3106891487 (FtpWebRequest_t3120721823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.FtpWebRequest::get_ServicePoint()
extern "C"  ServicePoint_t2765344313 * FtpWebRequest_get_ServicePoint_m2108743615 (FtpWebRequest_t3120721823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpWebRequest::get_DataType()
extern "C"  String_t* FtpWebRequest_get_DataType_m3188490003 (FtpWebRequest_t3120721823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpWebRequest/RequestState System.Net.FtpWebRequest::get_State()
extern "C"  int32_t FtpWebRequest_get_State_m3926667756 (FtpWebRequest_t3120721823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::set_State(System.Net.FtpWebRequest/RequestState)
extern "C"  void FtpWebRequest_set_State_m2980238653 (FtpWebRequest_t3120721823 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::Abort()
extern "C"  void FtpWebRequest_Abort_m656841017 (FtpWebRequest_t3120721823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.FtpWebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * FtpWebRequest_BeginGetResponse_m780341269 (FtpWebRequest_t3120721823 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FtpWebRequest::EndGetResponse(System.IAsyncResult)
extern "C"  WebResponse_t1895226051 * FtpWebRequest_EndGetResponse_m454970948 (FtpWebRequest_t3120721823 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FtpWebRequest::GetResponse()
extern "C"  WebResponse_t1895226051 * FtpWebRequest_GetResponse_m3399201476 (FtpWebRequest_t3120721823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.FtpWebRequest::GetServicePoint()
extern "C"  ServicePoint_t2765344313 * FtpWebRequest_GetServicePoint_m4227759062 (FtpWebRequest_t3120721823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::ResolveHost()
extern "C"  void FtpWebRequest_ResolveHost_m3345380023 (FtpWebRequest_t3120721823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::ProcessRequest()
extern "C"  void FtpWebRequest_ProcessRequest_m699748941 (FtpWebRequest_t3120721823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::SetType()
extern "C"  void FtpWebRequest_SetType_m1214477901 (FtpWebRequest_t3120721823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpWebRequest::GetRemoteFolderPath(System.Uri)
extern "C"  String_t* FtpWebRequest_GetRemoteFolderPath_m62777050 (FtpWebRequest_t3120721823 * __this, Uri_t19570940 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CWDAndSetFileName(System.Uri)
extern "C"  void FtpWebRequest_CWDAndSetFileName_m1394411640 (FtpWebRequest_t3120721823 * __this, Uri_t19570940 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::ProcessMethod()
extern "C"  void FtpWebRequest_ProcessMethod_m869416203 (FtpWebRequest_t3120721823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CloseControlConnection()
extern "C"  void FtpWebRequest_CloseControlConnection_m3282930402 (FtpWebRequest_t3120721823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CloseDataConnection()
extern "C"  void FtpWebRequest_CloseDataConnection_m1970553575 (FtpWebRequest_t3120721823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CloseConnection()
extern "C"  void FtpWebRequest_CloseConnection_m3709421079 (FtpWebRequest_t3120721823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::ProcessSimpleMethod()
extern "C"  void FtpWebRequest_ProcessSimpleMethod_m1680449933 (FtpWebRequest_t3120721823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::UploadData()
extern "C"  void FtpWebRequest_UploadData_m3373136954 (FtpWebRequest_t3120721823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::DownloadData()
extern "C"  void FtpWebRequest_DownloadData_m766254495 (FtpWebRequest_t3120721823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CheckRequestStarted()
extern "C"  void FtpWebRequest_CheckRequestStarted_m3420959105 (FtpWebRequest_t3120721823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::OpenControlConnection()
extern "C"  void FtpWebRequest_OpenControlConnection_m1321276114 (FtpWebRequest_t3120721823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpWebRequest::GetInitialPath(System.Net.FtpStatus)
extern "C"  String_t* FtpWebRequest_GetInitialPath_m2338324411 (Il2CppObject * __this /* static, unused */, FtpStatus_t3714482970 * ___status0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.FtpWebRequest::SetupPassiveConnection(System.String)
extern "C"  Socket_t3821512045 * FtpWebRequest_SetupPassiveConnection_m390263975 (FtpWebRequest_t3120721823 * __this, String_t* ___statusDescription0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.FtpWebRequest::CreateExceptionFromResponse(System.Net.FtpStatus)
extern "C"  Exception_t1927440687 * FtpWebRequest_CreateExceptionFromResponse_m3026952486 (FtpWebRequest_t3120721823 * __this, FtpStatus_t3714482970 * ___status0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::SetTransferCompleted()
extern "C"  void FtpWebRequest_SetTransferCompleted_m2948802239 (FtpWebRequest_t3120721823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::OperationCompleted()
extern "C"  void FtpWebRequest_OperationCompleted_m3643941383 (FtpWebRequest_t3120721823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::SetCompleteWithError(System.Exception)
extern "C"  void FtpWebRequest_SetCompleteWithError_m1111796026 (FtpWebRequest_t3120721823 * __this, Exception_t1927440687 * ___exc0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.FtpWebRequest::InitDataConnection()
extern "C"  Socket_t3821512045 * FtpWebRequest_InitDataConnection_m3410412211 (FtpWebRequest_t3120721823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::OpenDataConnection()
extern "C"  void FtpWebRequest_OpenDataConnection_m2826818741 (FtpWebRequest_t3120721823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::Authenticate()
extern "C"  void FtpWebRequest_Authenticate_m1115079610 (FtpWebRequest_t3120721823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpStatus System.Net.FtpWebRequest::SendCommand(System.String,System.String[])
extern "C"  FtpStatus_t3714482970 * FtpWebRequest_SendCommand_m1012266661 (FtpWebRequest_t3120721823 * __this, String_t* ___command0, StringU5BU5D_t1642385972* ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpStatus System.Net.FtpWebRequest::SendCommand(System.Boolean,System.String,System.String[])
extern "C"  FtpStatus_t3714482970 * FtpWebRequest_SendCommand_m3169965468 (FtpWebRequest_t3120721823 * __this, bool ___waitResponse0, String_t* ___command1, StringU5BU5D_t1642385972* ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpStatus System.Net.FtpWebRequest::ServiceNotAvailable()
extern "C"  FtpStatus_t3714482970 * FtpWebRequest_ServiceNotAvailable_m3669891653 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpStatus System.Net.FtpWebRequest::GetResponseStatus()
extern "C"  FtpStatus_t3714482970 * FtpWebRequest_GetResponseStatus_m1744294869 (FtpWebRequest_t3120721823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::InitiateSecureConnection(System.IO.Stream&)
extern "C"  void FtpWebRequest_InitiateSecureConnection_m1051242526 (FtpWebRequest_t3120721823 * __this, Stream_t3255436806 ** ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::ChangeToSSLSocket(System.IO.Stream&)
extern "C"  bool FtpWebRequest_ChangeToSSLSocket_m271755528 (FtpWebRequest_t3120721823 * __this, Stream_t3255436806 ** ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::InFinalState()
extern "C"  bool FtpWebRequest_InFinalState_m3996200151 (FtpWebRequest_t3120721823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::InProgress()
extern "C"  bool FtpWebRequest_InProgress_m2664545345 (FtpWebRequest_t3120721823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CheckIfAborted()
extern "C"  void FtpWebRequest_CheckIfAborted_m2218534597 (FtpWebRequest_t3120721823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CheckFinalState()
extern "C"  void FtpWebRequest_CheckFinalState_m792267882 (FtpWebRequest_t3120721823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::<callback>m__B(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern "C"  bool FtpWebRequest_U3CcallbackU3Em__B_m4153123054 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___sender0, X509Certificate_t283079845 * ___certificate1, X509Chain_t777637347 * ___chain2, int32_t ___sslPolicyErrors3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
