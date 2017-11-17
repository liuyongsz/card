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

// System.Net.WebAsyncResult
struct WebAsyncResult_t905414499;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// System.Object
struct Il2CppObject;
// System.Net.HttpWebRequest
struct HttpWebRequest_t1951404513;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Exception
struct Exception_t1927440687;
// System.IO.Stream
struct Stream_t3255436806;
// System.Net.HttpWebResponse
struct HttpWebResponse_t2828383075;
// System.Threading.WaitHandle
struct WaitHandle_t677569169;
// System.IAsyncResult
struct IAsyncResult_t1999651008;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_AsyncCallback163412349.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_System_Net_HttpWebRequest1951404513.h"
#include "mscorlib_System_Exception1927440687.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "System_System_Net_HttpWebResponse2828383075.h"

// System.Void System.Net.WebAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern "C"  void WebAsyncResult__ctor_m3649882325 (WebAsyncResult_t905414499 * __this, AsyncCallback_t163412349 * ___cb0, Il2CppObject * ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::.ctor(System.Net.HttpWebRequest,System.AsyncCallback,System.Object)
extern "C"  void WebAsyncResult__ctor_m303387228 (WebAsyncResult_t905414499 * __this, HttpWebRequest_t1951404513 * ___request0, AsyncCallback_t163412349 * ___cb1, Il2CppObject * ___state2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.Int32,System.Int32)
extern "C"  void WebAsyncResult__ctor_m223741914 (WebAsyncResult_t905414499 * __this, AsyncCallback_t163412349 * ___cb0, Il2CppObject * ___state1, ByteU5BU5D_t3397334013* ___buffer2, int32_t ___offset3, int32_t ___size4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.Exception)
extern "C"  void WebAsyncResult_SetCompleted_m838588539 (WebAsyncResult_t905414499 * __this, bool ___synch0, Exception_t1927440687 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::Reset()
extern "C"  void WebAsyncResult_Reset_m2447089108 (WebAsyncResult_t905414499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.Int32)
extern "C"  void WebAsyncResult_SetCompleted_m2908552542 (WebAsyncResult_t905414499 * __this, bool ___synch0, int32_t ___nbytes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.IO.Stream)
extern "C"  void WebAsyncResult_SetCompleted_m479162096 (WebAsyncResult_t905414499 * __this, bool ___synch0, Stream_t3255436806 * ___writeStream1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.Net.HttpWebResponse)
extern "C"  void WebAsyncResult_SetCompleted_m1412952062 (WebAsyncResult_t905414499 * __this, bool ___synch0, HttpWebResponse_t2828383075 * ___response1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::DoCallback()
extern "C"  void WebAsyncResult_DoCallback_m3620301601 (WebAsyncResult_t905414499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::WaitUntilComplete()
extern "C"  void WebAsyncResult_WaitUntilComplete_m1323278311 (WebAsyncResult_t905414499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebAsyncResult::WaitUntilComplete(System.Int32,System.Boolean)
extern "C"  bool WebAsyncResult_WaitUntilComplete_m2767680653 (WebAsyncResult_t905414499 * __this, int32_t ___timeout0, bool ___exitContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.WebAsyncResult::get_AsyncState()
extern "C"  Il2CppObject * WebAsyncResult_get_AsyncState_m3444251194 (WebAsyncResult_t905414499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.WebAsyncResult::get_AsyncWaitHandle()
extern "C"  WaitHandle_t677569169 * WebAsyncResult_get_AsyncWaitHandle_m2959259286 (WebAsyncResult_t905414499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebAsyncResult::get_IsCompleted()
extern "C"  bool WebAsyncResult_get_IsCompleted_m1225098437 (WebAsyncResult_t905414499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebAsyncResult::get_GotException()
extern "C"  bool WebAsyncResult_get_GotException_m2936180225 (WebAsyncResult_t905414499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.WebAsyncResult::get_Exception()
extern "C"  Exception_t1927440687 * WebAsyncResult_get_Exception_m1262884414 (WebAsyncResult_t905414499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebAsyncResult::get_NBytes()
extern "C"  int32_t WebAsyncResult_get_NBytes_m1619460119 (WebAsyncResult_t905414499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::set_NBytes(System.Int32)
extern "C"  void WebAsyncResult_set_NBytes_m3760831766 (WebAsyncResult_t905414499 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebAsyncResult::get_InnerAsyncResult()
extern "C"  Il2CppObject * WebAsyncResult_get_InnerAsyncResult_m987999637 (WebAsyncResult_t905414499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::set_InnerAsyncResult(System.IAsyncResult)
extern "C"  void WebAsyncResult_set_InnerAsyncResult_m1600603984 (WebAsyncResult_t905414499 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpWebResponse System.Net.WebAsyncResult::get_Response()
extern "C"  HttpWebResponse_t2828383075 * WebAsyncResult_get_Response_m467499639 (WebAsyncResult_t905414499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebAsyncResult::get_Buffer()
extern "C"  ByteU5BU5D_t3397334013* WebAsyncResult_get_Buffer_m1206123640 (WebAsyncResult_t905414499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebAsyncResult::get_Offset()
extern "C"  int32_t WebAsyncResult_get_Offset_m2410050733 (WebAsyncResult_t905414499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebAsyncResult::get_Size()
extern "C"  int32_t WebAsyncResult_get_Size_m1090716073 (WebAsyncResult_t905414499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
