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

// System.Net.WebConnection
struct WebConnection_t324679648;
// System.Net.WebConnectionGroup
struct WebConnectionGroup_t3242458773;
// System.Net.ServicePoint
struct ServicePoint_t2765344313;
// System.Exception
struct Exception_t1927440687;
// System.Net.HttpWebRequest
struct HttpWebRequest_t1951404513;
// System.IO.Stream
struct Stream_t3255436806;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t3028142837;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.Object
struct Il2CppObject;
// System.EventHandler
struct EventHandler_t277755526;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// System.EventArgs
struct EventArgs_t3289624707;
// System.Net.NetworkCredential
struct NetworkCredential_t1714133953;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_WebConnectionGroup3242458773.h"
#include "System_System_Net_ServicePoint2765344313.h"
#include "mscorlib_System_Exception1927440687.h"
#include "System_System_Net_HttpWebRequest1951404513.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "System_System_Net_WebExceptionStatus1169373531.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_AsyncCallback163412349.h"
#include "mscorlib_System_EventArgs3289624707.h"
#include "System_System_Net_NetworkCredential1714133953.h"

// System.Void System.Net.WebConnection::.ctor(System.Net.WebConnectionGroup,System.Net.ServicePoint)
extern "C"  void WebConnection__ctor_m4071853450 (WebConnection_t324679648 * __this, WebConnectionGroup_t3242458773 * ___group0, ServicePoint_t2765344313 * ___sPoint1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::.cctor()
extern "C"  void WebConnection__cctor_m773255733 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::CanReuse()
extern "C"  bool WebConnection_CanReuse_m1785872218 (WebConnection_t324679648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::LoggedThrow(System.Exception)
extern "C"  void WebConnection_LoggedThrow_m2053462498 (WebConnection_t324679648 * __this, Exception_t1927440687 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::CheckUnityWebSecurity(System.Net.HttpWebRequest)
extern "C"  void WebConnection_CheckUnityWebSecurity_m119477774 (WebConnection_t324679648 * __this, HttpWebRequest_t1951404513 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::Connect(System.Net.HttpWebRequest)
extern "C"  void WebConnection_Connect_m1917030087 (WebConnection_t324679648 * __this, HttpWebRequest_t1951404513 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::EnsureSSLStreamAvailable()
extern "C"  void WebConnection_EnsureSSLStreamAvailable_m3590850121 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::CreateTunnel(System.Net.HttpWebRequest,System.IO.Stream,System.Byte[]&)
extern "C"  bool WebConnection_CreateTunnel_m3630849615 (WebConnection_t324679648 * __this, HttpWebRequest_t1951404513 * ___request0, Stream_t3255436806 * ___stream1, ByteU5BU5D_t3397334013** ___buffer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.WebConnection::ReadHeaders(System.Net.HttpWebRequest,System.IO.Stream,System.Byte[]&,System.Int32&)
extern "C"  WebHeaderCollection_t3028142837 * WebConnection_ReadHeaders_m1843574590 (WebConnection_t324679648 * __this, HttpWebRequest_t1951404513 * ___request0, Stream_t3255436806 * ___stream1, ByteU5BU5D_t3397334013** ___retBuffer2, int32_t* ___status3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::CreateStream(System.Net.HttpWebRequest)
extern "C"  bool WebConnection_CreateStream_m3733999957 (WebConnection_t324679648 * __this, HttpWebRequest_t1951404513 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::HandleError(System.Net.WebExceptionStatus,System.Exception,System.String)
extern "C"  void WebConnection_HandleError_m3163879947 (WebConnection_t324679648 * __this, int32_t ___st0, Exception_t1927440687 * ___e1, String_t* ___where2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::ReadDone(System.IAsyncResult)
extern "C"  void WebConnection_ReadDone_m217187373 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::ExpectContent(System.Int32)
extern "C"  bool WebConnection_ExpectContent_m3205351917 (Il2CppObject * __this /* static, unused */, int32_t ___statusCode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::GetCertificates()
extern "C"  void WebConnection_GetCertificates_m3110585874 (WebConnection_t324679648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::InitRead(System.Object)
extern "C"  void WebConnection_InitRead_m3524022170 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnection::GetResponse(System.Byte[],System.Int32)
extern "C"  int32_t WebConnection_GetResponse_m345247439 (WebConnection_t324679648 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___max1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::InitConnection(System.Object)
extern "C"  void WebConnection_InitConnection_m4247041854 (WebConnection_t324679648 * __this, Il2CppObject * ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.EventHandler System.Net.WebConnection::SendRequest(System.Net.HttpWebRequest)
extern "C"  EventHandler_t277755526 * WebConnection_SendRequest_m1408289624 (WebConnection_t324679648 * __this, HttpWebRequest_t1951404513 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::SendNext()
extern "C"  void WebConnection_SendNext_m3551623477 (WebConnection_t324679648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::NextRead()
extern "C"  void WebConnection_NextRead_m3004476295 (WebConnection_t324679648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::ReadLine(System.Byte[],System.Int32&,System.Int32,System.String&)
extern "C"  bool WebConnection_ReadLine_m3030100107 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___buffer0, int32_t* ___start1, int32_t ___max2, String_t** ___output3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebConnection::BeginRead(System.Net.HttpWebRequest,System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * WebConnection_BeginRead_m1874868919 (WebConnection_t324679648 * __this, HttpWebRequest_t1951404513 * ___request0, ByteU5BU5D_t3397334013* ___buffer1, int32_t ___offset2, int32_t ___size3, AsyncCallback_t163412349 * ___cb4, Il2CppObject * ___state5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnection::EndRead(System.Net.HttpWebRequest,System.IAsyncResult)
extern "C"  int32_t WebConnection_EndRead_m34750803 (WebConnection_t324679648 * __this, HttpWebRequest_t1951404513 * ___request0, Il2CppObject * ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnection::EnsureRead(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t WebConnection_EnsureRead_m4100214407 (WebConnection_t324679648 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::CompleteChunkedRead()
extern "C"  bool WebConnection_CompleteChunkedRead_m1612840719 (WebConnection_t324679648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebConnection::BeginWrite(System.Net.HttpWebRequest,System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * WebConnection_BeginWrite_m1695738720 (WebConnection_t324679648 * __this, HttpWebRequest_t1951404513 * ___request0, ByteU5BU5D_t3397334013* ___buffer1, int32_t ___offset2, int32_t ___size3, AsyncCallback_t163412349 * ___cb4, Il2CppObject * ___state5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::EndWrite2(System.Net.HttpWebRequest,System.IAsyncResult)
extern "C"  void WebConnection_EndWrite2_m3735330562 (WebConnection_t324679648 * __this, HttpWebRequest_t1951404513 * ___request0, Il2CppObject * ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::EndWrite(System.Net.HttpWebRequest,System.IAsyncResult)
extern "C"  bool WebConnection_EndWrite_m2631776274 (WebConnection_t324679648 * __this, HttpWebRequest_t1951404513 * ___request0, Il2CppObject * ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnection::Read(System.Net.HttpWebRequest,System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t WebConnection_Read_m2887457638 (WebConnection_t324679648 * __this, HttpWebRequest_t1951404513 * ___request0, ByteU5BU5D_t3397334013* ___buffer1, int32_t ___offset2, int32_t ___size3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::Write(System.Net.HttpWebRequest,System.Byte[],System.Int32,System.Int32,System.String&)
extern "C"  bool WebConnection_Write_m1321663999 (WebConnection_t324679648 * __this, HttpWebRequest_t1951404513 * ___request0, ByteU5BU5D_t3397334013* ___buffer1, int32_t ___offset2, int32_t ___size3, String_t** ___err_msg4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::Close(System.Boolean)
extern "C"  void WebConnection_Close_m1644251019 (WebConnection_t324679648 * __this, bool ___sendNext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::Abort(System.Object,System.EventArgs)
extern "C"  void WebConnection_Abort_m1521278288 (WebConnection_t324679648 * __this, Il2CppObject * ___sender0, EventArgs_t3289624707 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::ResetNtlm()
extern "C"  void WebConnection_ResetNtlm_m2990956492 (WebConnection_t324679648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::get_Busy()
extern "C"  bool WebConnection_get_Busy_m1852327252 (WebConnection_t324679648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::set_PriorityRequest(System.Net.HttpWebRequest)
extern "C"  void WebConnection_set_PriorityRequest_m3162460175 (WebConnection_t324679648 * __this, HttpWebRequest_t1951404513 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::get_NtlmAuthenticated()
extern "C"  bool WebConnection_get_NtlmAuthenticated_m611990621 (WebConnection_t324679648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::set_NtlmAuthenticated(System.Boolean)
extern "C"  void WebConnection_set_NtlmAuthenticated_m65747104 (WebConnection_t324679648 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkCredential System.Net.WebConnection::get_NtlmCredential()
extern "C"  NetworkCredential_t1714133953 * WebConnection_get_NtlmCredential_m2370432819 (WebConnection_t324679648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::set_NtlmCredential(System.Net.NetworkCredential)
extern "C"  void WebConnection_set_NtlmCredential_m906757794 (WebConnection_t324679648 * __this, NetworkCredential_t1714133953 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::get_UnsafeAuthenticatedConnectionSharing()
extern "C"  bool WebConnection_get_UnsafeAuthenticatedConnectionSharing_m3404640630 (WebConnection_t324679648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::set_UnsafeAuthenticatedConnectionSharing(System.Boolean)
extern "C"  void WebConnection_set_UnsafeAuthenticatedConnectionSharing_m1912183833 (WebConnection_t324679648 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
