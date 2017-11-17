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

// System.Net.FtpAsyncResult
struct FtpAsyncResult_t770082413;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// System.Object
struct Il2CppObject;
// System.Threading.WaitHandle
struct WaitHandle_t677569169;
// System.Exception
struct Exception_t1927440687;
// System.Net.FtpWebResponse
struct FtpWebResponse_t2609078769;
// System.IO.Stream
struct Stream_t3255436806;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_AsyncCallback163412349.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_Exception1927440687.h"
#include "System_System_Net_FtpWebResponse2609078769.h"

// System.Void System.Net.FtpAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern "C"  void FtpAsyncResult__ctor_m2490841827 (FtpAsyncResult_t770082413 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.FtpAsyncResult::get_AsyncState()
extern "C"  Il2CppObject * FtpAsyncResult_get_AsyncState_m3918311982 (FtpAsyncResult_t770082413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.FtpAsyncResult::get_AsyncWaitHandle()
extern "C"  WaitHandle_t677569169 * FtpAsyncResult_get_AsyncWaitHandle_m3211241954 (FtpAsyncResult_t770082413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::get_IsCompleted()
extern "C"  bool FtpAsyncResult_get_IsCompleted_m4117381667 (FtpAsyncResult_t770082413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::get_GotException()
extern "C"  bool FtpAsyncResult_get_GotException_m3227359427 (FtpAsyncResult_t770082413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.FtpAsyncResult::get_Exception()
extern "C"  Exception_t1927440687 * FtpAsyncResult_get_Exception_m1523986986 (FtpAsyncResult_t770082413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpWebResponse System.Net.FtpAsyncResult::get_Response()
extern "C"  FtpWebResponse_t2609078769 * FtpAsyncResult_get_Response_m3922624847 (FtpAsyncResult_t770082413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::set_Stream(System.IO.Stream)
extern "C"  void FtpAsyncResult_set_Stream_m3072722563 (FtpAsyncResult_t770082413 * __this, Stream_t3255436806 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::WaitUntilComplete(System.Int32,System.Boolean)
extern "C"  bool FtpAsyncResult_WaitUntilComplete_m336498979 (FtpAsyncResult_t770082413 * __this, int32_t ___timeout0, bool ___exitContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Exception,System.Net.FtpWebResponse)
extern "C"  void FtpAsyncResult_SetCompleted_m3047448942 (FtpAsyncResult_t770082413 * __this, bool ___synch0, Exception_t1927440687 * ___exc1, FtpWebResponse_t2609078769 * ___response2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Net.FtpWebResponse)
extern "C"  void FtpAsyncResult_SetCompleted_m296092652 (FtpAsyncResult_t770082413 * __this, bool ___synch0, FtpWebResponse_t2609078769 * ___response1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Exception)
extern "C"  void FtpAsyncResult_SetCompleted_m2643134993 (FtpAsyncResult_t770082413 * __this, bool ___synch0, Exception_t1927440687 * ___exc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::DoCallback()
extern "C"  void FtpAsyncResult_DoCallback_m1497652311 (FtpAsyncResult_t770082413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
