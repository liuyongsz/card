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

// System.Net.WebConnectionGroup
struct WebConnectionGroup_t3242458773;
// System.Net.ServicePoint
struct ServicePoint_t2765344313;
// System.String
struct String_t;
// System.Net.WebConnection
struct WebConnection_t324679648;
// System.Net.HttpWebRequest
struct HttpWebRequest_t1951404513;
// System.Collections.Queue
struct Queue_t1288490777;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_ServicePoint2765344313.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Net_HttpWebRequest1951404513.h"
#include "System_System_Net_WebConnection324679648.h"

// System.Void System.Net.WebConnectionGroup::.ctor(System.Net.ServicePoint,System.String)
extern "C"  void WebConnectionGroup__ctor_m986089174 (WebConnectionGroup_t3242458773 * __this, ServicePoint_t2765344313 * ___sPoint0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::GetConnection(System.Net.HttpWebRequest)
extern "C"  WebConnection_t324679648 * WebConnectionGroup_GetConnection_m3073081905 (WebConnectionGroup_t3242458773 * __this, HttpWebRequest_t1951404513 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionGroup::PrepareSharingNtlm(System.Net.WebConnection,System.Net.HttpWebRequest)
extern "C"  void WebConnectionGroup_PrepareSharingNtlm_m2263879438 (Il2CppObject * __this /* static, unused */, WebConnection_t324679648 * ___cnc0, HttpWebRequest_t1951404513 * ___request1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::CreateOrReuseConnection(System.Net.HttpWebRequest)
extern "C"  WebConnection_t324679648 * WebConnectionGroup_CreateOrReuseConnection_m512876780 (WebConnectionGroup_t3242458773 * __this, HttpWebRequest_t1951404513 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Queue System.Net.WebConnectionGroup::get_Queue()
extern "C"  Queue_t1288490777 * WebConnectionGroup_get_Queue_m768136775 (WebConnectionGroup_t3242458773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
