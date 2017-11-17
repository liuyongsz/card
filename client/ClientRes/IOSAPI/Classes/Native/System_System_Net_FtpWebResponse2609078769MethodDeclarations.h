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

// System.Net.FtpWebResponse
struct FtpWebResponse_t2609078769;
// System.Net.FtpWebRequest
struct FtpWebRequest_t3120721823;
// System.Uri
struct Uri_t19570940;
// System.String
struct String_t;
// System.Net.FtpStatus
struct FtpStatus_t3714482970;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t3028142837;
// System.IO.Stream
struct Stream_t3255436806;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_FtpWebRequest3120721823.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Net_FtpStatusCode1448112771.h"
#include "System_System_Net_FtpStatus3714482970.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_IO_Stream3255436806.h"

// System.Void System.Net.FtpWebResponse::.ctor(System.Net.FtpWebRequest,System.Uri,System.String,System.Boolean)
extern "C"  void FtpWebResponse__ctor_m3415597482 (FtpWebResponse_t2609078769 * __this, FtpWebRequest_t3120721823 * ___request0, Uri_t19570940 * ___uri1, String_t* ___method2, bool ___keepAlive3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::.ctor(System.Net.FtpWebRequest,System.Uri,System.String,System.Net.FtpStatusCode,System.String)
extern "C"  void FtpWebResponse__ctor_m4120357874 (FtpWebResponse_t2609078769 * __this, FtpWebRequest_t3120721823 * ___request0, Uri_t19570940 * ___uri1, String_t* ___method2, int32_t ___statusCode3, String_t* ___statusDescription4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::.ctor(System.Net.FtpWebRequest,System.Uri,System.String,System.Net.FtpStatus)
extern "C"  void FtpWebResponse__ctor_m831861715 (FtpWebResponse_t2609078769 * __this, FtpWebRequest_t3120721823 * ___request0, Uri_t19570940 * ___uri1, String_t* ___method2, FtpStatus_t3714482970 * ___status3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.FtpWebResponse::get_ContentLength()
extern "C"  int64_t FtpWebResponse_get_ContentLength_m2675366284 (FtpWebResponse_t2609078769 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.FtpWebResponse::get_Headers()
extern "C"  WebHeaderCollection_t3028142837 * FtpWebResponse_get_Headers_m1164624792 (FtpWebResponse_t2609078769 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_LastModified(System.DateTime)
extern "C"  void FtpWebResponse_set_LastModified_m1306853857 (FtpWebResponse_t2609078769 * __this, DateTime_t693205669  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_BannerMessage(System.String)
extern "C"  void FtpWebResponse_set_BannerMessage_m4184029017 (FtpWebResponse_t2609078769 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_WelcomeMessage(System.String)
extern "C"  void FtpWebResponse_set_WelcomeMessage_m754604223 (FtpWebResponse_t2609078769 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::Close()
extern "C"  void FtpWebResponse_Close_m3435771463 (FtpWebResponse_t2609078769 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FtpWebResponse::GetResponseStream()
extern "C"  Stream_t3255436806 * FtpWebResponse_GetResponseStream_m782137646 (FtpWebResponse_t2609078769 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_Stream(System.IO.Stream)
extern "C"  void FtpWebResponse_set_Stream_m1759459143 (FtpWebResponse_t2609078769 * __this, Stream_t3255436806 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::UpdateStatus(System.Net.FtpStatus)
extern "C"  void FtpWebResponse_UpdateStatus_m1392245858 (FtpWebResponse_t2609078769 * __this, FtpStatus_t3714482970 * ___status0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::CheckDisposed()
extern "C"  void FtpWebResponse_CheckDisposed_m1532914452 (FtpWebResponse_t2609078769 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebResponse::IsFinal()
extern "C"  bool FtpWebResponse_IsFinal_m1790980787 (FtpWebResponse_t2609078769 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
