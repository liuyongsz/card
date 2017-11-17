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

// System.Net.FtpDataStream
struct FtpDataStream_t3588258764;
// System.Net.FtpWebRequest
struct FtpWebRequest_t3120721823;
// System.IO.Stream
struct Stream_t3255436806;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_FtpWebRequest3120721823.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_IO_SeekOrigin2475945306.h"
#include "mscorlib_System_AsyncCallback163412349.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Net.FtpDataStream::.ctor(System.Net.FtpWebRequest,System.IO.Stream,System.Boolean)
extern "C"  void FtpDataStream__ctor_m3342132319 (FtpDataStream_t3588258764 * __this, FtpWebRequest_t3120721823 * ___request0, Stream_t3255436806 * ___stream1, bool ___isRead2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::System.IDisposable.Dispose()
extern "C"  void FtpDataStream_System_IDisposable_Dispose_m145808093 (FtpDataStream_t3588258764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpDataStream::get_CanRead()
extern "C"  bool FtpDataStream_get_CanRead_m3424996377 (FtpDataStream_t3588258764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpDataStream::get_CanWrite()
extern "C"  bool FtpDataStream_get_CanWrite_m2192632440 (FtpDataStream_t3588258764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpDataStream::get_CanSeek()
extern "C"  bool FtpDataStream_get_CanSeek_m3223741395 (FtpDataStream_t3588258764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.FtpDataStream::get_Length()
extern "C"  int64_t FtpDataStream_get_Length_m983365416 (FtpDataStream_t3588258764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.FtpDataStream::get_Position()
extern "C"  int64_t FtpDataStream_get_Position_m811209735 (FtpDataStream_t3588258764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::set_Position(System.Int64)
extern "C"  void FtpDataStream_set_Position_m2509352202 (FtpDataStream_t3588258764 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::Close()
extern "C"  void FtpDataStream_Close_m1717626910 (FtpDataStream_t3588258764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::Flush()
extern "C"  void FtpDataStream_Flush_m1403626052 (FtpDataStream_t3588258764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.FtpDataStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t FtpDataStream_Seek_m2681225308 (FtpDataStream_t3588258764 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::SetLength(System.Int64)
extern "C"  void FtpDataStream_SetLength_m1296403598 (FtpDataStream_t3588258764 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.FtpDataStream::ReadInternal(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t FtpDataStream_ReadInternal_m753593190 (FtpDataStream_t3588258764 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.FtpDataStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * FtpDataStream_BeginRead_m3442528438 (FtpDataStream_t3588258764 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___size2, AsyncCallback_t163412349 * ___cb3, Il2CppObject * ___state4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.FtpDataStream::EndRead(System.IAsyncResult)
extern "C"  int32_t FtpDataStream_EndRead_m85311356 (FtpDataStream_t3588258764 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.FtpDataStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t FtpDataStream_Read_m1313204657 (FtpDataStream_t3588258764 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::WriteInternal(System.Byte[],System.Int32,System.Int32)
extern "C"  void FtpDataStream_WriteInternal_m3792405519 (FtpDataStream_t3588258764 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.FtpDataStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * FtpDataStream_BeginWrite_m3360549687 (FtpDataStream_t3588258764 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___size2, AsyncCallback_t163412349 * ___cb3, Il2CppObject * ___state4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::EndWrite(System.IAsyncResult)
extern "C"  void FtpDataStream_EndWrite_m979742021 (FtpDataStream_t3588258764 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void FtpDataStream_Write_m376875914 (FtpDataStream_t3588258764 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::Finalize()
extern "C"  void FtpDataStream_Finalize_m2792209758 (FtpDataStream_t3588258764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::Dispose(System.Boolean)
extern "C"  void FtpDataStream_Dispose_m540724146 (FtpDataStream_t3588258764 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::CheckDisposed()
extern "C"  void FtpDataStream_CheckDisposed_m12972947 (FtpDataStream_t3588258764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
