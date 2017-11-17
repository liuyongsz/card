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

// System.Net.WebClient
struct WebClient_t1432723993;
// System.Net.DownloadProgressChangedEventHandler
struct DownloadProgressChangedEventHandler_t3683154451;
// System.Net.IWebProxy
struct IWebProxy_t3916853445;
// System.Uri
struct Uri_t19570940;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Net.WebRequest
struct WebRequest_t1365124353;
// System.ComponentModel.AsyncCompletedEventArgs
struct AsyncCompletedEventArgs_t83270938;
// System.Net.DownloadProgressChangedEventArgs
struct DownloadProgressChangedEventArgs_t3269688412;
// System.Net.WebResponse
struct WebResponse_t1895226051;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_DownloadProgressChangedEventHand3683154451.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_System_ComponentModel_AsyncCompletedEventArgs83270938.h"
#include "System_System_Net_DownloadProgressChangedEventArgs3269688412.h"
#include "System_System_Net_WebRequest1365124353.h"

// System.Void System.Net.WebClient::.ctor()
extern "C"  void WebClient__ctor_m660733025 (WebClient_t1432723993 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::.cctor()
extern "C"  void WebClient__cctor_m196213842 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::add_DownloadProgressChanged(System.Net.DownloadProgressChangedEventHandler)
extern "C"  void WebClient_add_DownloadProgressChanged_m2741836737 (WebClient_t1432723993 * __this, DownloadProgressChangedEventHandler_t3683154451 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::remove_DownloadProgressChanged(System.Net.DownloadProgressChangedEventHandler)
extern "C"  void WebClient_remove_DownloadProgressChanged_m2584783280 (WebClient_t1432723993 * __this, DownloadProgressChangedEventHandler_t3683154451 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebClient::get_Proxy()
extern "C"  Il2CppObject * WebClient_get_Proxy_m903524692 (WebClient_t1432723993 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebClient::get_IsBusy()
extern "C"  bool WebClient_get_IsBusy_m1483534531 (WebClient_t1432723993 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::CheckBusy()
extern "C"  void WebClient_CheckBusy_m3268863214 (WebClient_t1432723993 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::SetBusy()
extern "C"  void WebClient_SetBusy_m3197543546 (WebClient_t1432723993 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::DownloadFileCore(System.Uri,System.String,System.Object)
extern "C"  void WebClient_DownloadFileCore_m397348773 (WebClient_t1432723993 * __this, Uri_t19570940 * ___address0, String_t* ___fileName1, Il2CppObject * ___userToken2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.WebClient::SetupRequest(System.Uri)
extern "C"  WebRequest_t1365124353 * WebClient_SetupRequest_m3399367600 (WebClient_t1432723993 * __this, Uri_t19570940 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::CompleteAsync()
extern "C"  void WebClient_CompleteAsync_m1173274810 (WebClient_t1432723993 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::DownloadFileAsync(System.Uri,System.String)
extern "C"  void WebClient_DownloadFileAsync_m299188038 (WebClient_t1432723993 * __this, Uri_t19570940 * ___address0, String_t* ___fileName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::DownloadFileAsync(System.Uri,System.String,System.Object)
extern "C"  void WebClient_DownloadFileAsync_m367122348 (WebClient_t1432723993 * __this, Uri_t19570940 * ___address0, String_t* ___fileName1, Il2CppObject * ___userToken2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::OnDownloadFileCompleted(System.ComponentModel.AsyncCompletedEventArgs)
extern "C"  void WebClient_OnDownloadFileCompleted_m699159956 (WebClient_t1432723993 * __this, AsyncCompletedEventArgs_t83270938 * ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::OnDownloadProgressChanged(System.Net.DownloadProgressChangedEventArgs)
extern "C"  void WebClient_OnDownloadProgressChanged_m2431565293 (WebClient_t1432723993 * __this, DownloadProgressChangedEventArgs_t3269688412 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.WebClient::GetWebRequest(System.Uri)
extern "C"  WebRequest_t1365124353 * WebClient_GetWebRequest_m3663064103 (WebClient_t1432723993 * __this, Uri_t19570940 * ___address0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.WebClient::GetWebResponse(System.Net.WebRequest)
extern "C"  WebResponse_t1895226051 * WebClient_GetWebResponse_m247274309 (WebClient_t1432723993 * __this, WebRequest_t1365124353 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::<DownloadFileAsync>m__D(System.Object)
extern "C"  void WebClient_U3CDownloadFileAsyncU3Em__D_m3811773900 (WebClient_t1432723993 * __this, Il2CppObject * ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
