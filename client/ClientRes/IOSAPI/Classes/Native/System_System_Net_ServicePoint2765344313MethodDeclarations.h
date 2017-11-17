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

// System.Net.ServicePoint
struct ServicePoint_t2765344313;
// System.Uri
struct Uri_t19570940;
// System.Version
struct Version_t1755874712;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Net.IPHostEntry
struct IPHostEntry_t994738509;
// System.Net.WebConnectionGroup
struct WebConnectionGroup_t3242458773;
// System.String
struct String_t;
// System.EventHandler
struct EventHandler_t277755526;
// System.Net.HttpWebRequest
struct HttpWebRequest_t1951404513;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t283079845;
// System.Net.Sockets.Socket
struct Socket_t3821512045;
// System.Net.IPEndPoint
struct IPEndPoint_t2615413766;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_Version1755874712.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Net_HttpWebRequest1951404513.h"
#include "mscorlib_System_Security_Cryptography_X509Certifica283079845.h"
#include "System_System_Net_Sockets_Socket3821512045.h"
#include "System_System_Net_IPEndPoint2615413766.h"

// System.Void System.Net.ServicePoint::.ctor(System.Uri,System.Int32,System.Int32)
extern "C"  void ServicePoint__ctor_m4262863078 (ServicePoint_t2765344313 * __this, Uri_t19570940 * ___uri0, int32_t ___connectionLimit1, int32_t ___maxIdleTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.ServicePoint::get_Address()
extern "C"  Uri_t19570940 * ServicePoint_get_Address_m578153126 (ServicePoint_t2765344313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePoint::get_ConnectionLimit()
extern "C"  int32_t ServicePoint_get_ConnectionLimit_m4195278873 (ServicePoint_t2765344313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePoint::get_CurrentConnections()
extern "C"  int32_t ServicePoint_get_CurrentConnections_m2605637468 (ServicePoint_t2765344313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.ServicePoint::get_IdleSince()
extern "C"  DateTime_t693205669  ServicePoint_get_IdleSince_m1157936783 (ServicePoint_t2765344313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_IdleSince(System.DateTime)
extern "C"  void ServicePoint_set_IdleSince_m797014038 (ServicePoint_t2765344313 * __this, DateTime_t693205669  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Net.ServicePoint::get_ProtocolVersion()
extern "C"  Version_t1755874712 * ServicePoint_get_ProtocolVersion_m2377015684 (ServicePoint_t2765344313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_Expect100Continue(System.Boolean)
extern "C"  void ServicePoint_set_Expect100Continue_m426209852 (ServicePoint_t2765344313 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_UseNagleAlgorithm()
extern "C"  bool ServicePoint_get_UseNagleAlgorithm_m2583989021 (ServicePoint_t2765344313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UseNagleAlgorithm(System.Boolean)
extern "C"  void ServicePoint_set_UseNagleAlgorithm_m2618011464 (ServicePoint_t2765344313 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_SendContinue()
extern "C"  bool ServicePoint_get_SendContinue_m1132433849 (ServicePoint_t2765344313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_SendContinue(System.Boolean)
extern "C"  void ServicePoint_set_SendContinue_m2270873616 (ServicePoint_t2765344313 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_UsesProxy()
extern "C"  bool ServicePoint_get_UsesProxy_m3145250328 (ServicePoint_t2765344313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UsesProxy(System.Boolean)
extern "C"  void ServicePoint_set_UsesProxy_m654127651 (ServicePoint_t2765344313 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_UseConnect()
extern "C"  bool ServicePoint_get_UseConnect_m1283748389 (ServicePoint_t2765344313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UseConnect(System.Boolean)
extern "C"  void ServicePoint_set_UseConnect_m3091750992 (ServicePoint_t2765344313 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_AvailableForRecycling()
extern "C"  bool ServicePoint_get_AvailableForRecycling_m1105513096 (ServicePoint_t2765344313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Net.ServicePoint::get_Groups()
extern "C"  Hashtable_t909839986 * ServicePoint_get_Groups_m2401736203 (ServicePoint_t2765344313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.ServicePoint::get_HostEntry()
extern "C"  IPHostEntry_t994738509 * ServicePoint_get_HostEntry_m47187818 (ServicePoint_t2765344313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::SetVersion(System.Version)
extern "C"  void ServicePoint_SetVersion_m3167721742 (ServicePoint_t2765344313 * __this, Version_t1755874712 * ___version0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnectionGroup System.Net.ServicePoint::GetConnectionGroup(System.String)
extern "C"  WebConnectionGroup_t3242458773 * ServicePoint_GetConnectionGroup_m2232740970 (ServicePoint_t2765344313 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.EventHandler System.Net.ServicePoint::SendRequest(System.Net.HttpWebRequest,System.String)
extern "C"  EventHandler_t277755526 * ServicePoint_SendRequest_m24875517 (ServicePoint_t2765344313 * __this, HttpWebRequest_t1951404513 * ___request0, String_t* ___groupName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::SetCertificates(System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C"  void ServicePoint_SetCertificates_m3461684685 (ServicePoint_t2765344313 * __this, X509Certificate_t283079845 * ___client0, X509Certificate_t283079845 * ___server1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::CallEndPointDelegate(System.Net.Sockets.Socket,System.Net.IPEndPoint)
extern "C"  bool ServicePoint_CallEndPointDelegate_m3054494018 (ServicePoint_t2765344313 * __this, Socket_t3821512045 * ___sock0, IPEndPoint_t2615413766 * ___remote1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
