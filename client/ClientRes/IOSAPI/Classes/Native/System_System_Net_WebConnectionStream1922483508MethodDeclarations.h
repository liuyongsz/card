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

// System.Net.WebConnectionStream
struct WebConnectionStream_t1922483508;
// System.Net.WebConnection
struct WebConnection_t324679648;
// System.Net.HttpWebRequest
struct HttpWebRequest_t1951404513;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_WebConnection324679648.h"
#include "System_System_Net_HttpWebRequest1951404513.h"
#include "mscorlib_System_AsyncCallback163412349.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IO_SeekOrigin2475945306.h"

// System.Void System.Net.WebConnectionStream::.ctor(System.Net.WebConnection)
extern "C"  void WebConnectionStream__ctor_m3756482990 (WebConnectionStream_t1922483508 * __this, WebConnection_t324679648 * ___cnc0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::.ctor(System.Net.WebConnection,System.Net.HttpWebRequest)
extern "C"  void WebConnectionStream__ctor_m7947237 (WebConnectionStream_t1922483508 * __this, WebConnection_t324679648 * ___cnc0, HttpWebRequest_t1951404513 * ___request1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::.cctor()
extern "C"  void WebConnectionStream__cctor_m3884083129 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::IsNtlmAuth()
extern "C"  bool WebConnectionStream_IsNtlmAuth_m1119502383 (WebConnectionStream_t1922483508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::CheckResponseInBuffer()
extern "C"  void WebConnectionStream_CheckResponseInBuffer_m1497002300 (WebConnectionStream_t1922483508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionStream::get_Connection()
extern "C"  WebConnection_t324679648 * WebConnectionStream_get_Connection_m3232129880 (WebConnectionStream_t1922483508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::get_ReadTimeout()
extern "C"  int32_t WebConnectionStream_get_ReadTimeout_m2163859558 (WebConnectionStream_t1922483508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::get_WriteTimeout()
extern "C"  int32_t WebConnectionStream_get_WriteTimeout_m1234514247 (WebConnectionStream_t1922483508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_CompleteRequestWritten()
extern "C"  bool WebConnectionStream_get_CompleteRequestWritten_m2866283642 (WebConnectionStream_t1922483508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_SendChunked(System.Boolean)
extern "C"  void WebConnectionStream_set_SendChunked_m2739119874 (WebConnectionStream_t1922483508 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_ReadBuffer(System.Byte[])
extern "C"  void WebConnectionStream_set_ReadBuffer_m113189622 (WebConnectionStream_t1922483508 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_ReadBufferOffset(System.Int32)
extern "C"  void WebConnectionStream_set_ReadBufferOffset_m4053177349 (WebConnectionStream_t1922483508 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_ReadBufferSize(System.Int32)
extern "C"  void WebConnectionStream_set_ReadBufferSize_m851988969 (WebConnectionStream_t1922483508 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebConnectionStream::get_WriteBuffer()
extern "C"  ByteU5BU5D_t3397334013* WebConnectionStream_get_WriteBuffer_m2514343296 (WebConnectionStream_t1922483508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::get_WriteBufferLength()
extern "C"  int32_t WebConnectionStream_get_WriteBufferLength_m1219819000 (WebConnectionStream_t1922483508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::ForceCompletion()
extern "C"  void WebConnectionStream_ForceCompletion_m4006958823 (WebConnectionStream_t1922483508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::CheckComplete()
extern "C"  void WebConnectionStream_CheckComplete_m1102446653 (WebConnectionStream_t1922483508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::ReadAll()
extern "C"  void WebConnectionStream_ReadAll_m4162337241 (WebConnectionStream_t1922483508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::WriteCallbackWrapper(System.IAsyncResult)
extern "C"  void WebConnectionStream_WriteCallbackWrapper_m701322192 (WebConnectionStream_t1922483508 * __this, Il2CppObject * ___r0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::ReadCallbackWrapper(System.IAsyncResult)
extern "C"  void WebConnectionStream_ReadCallbackWrapper_m2960324003 (WebConnectionStream_t1922483508 * __this, Il2CppObject * ___r0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t WebConnectionStream_Read_m4228867297 (WebConnectionStream_t1922483508 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebConnectionStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * WebConnectionStream_BeginRead_m949461718 (WebConnectionStream_t1922483508 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___size2, AsyncCallback_t163412349 * ___cb3, Il2CppObject * ___state4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::EndRead(System.IAsyncResult)
extern "C"  int32_t WebConnectionStream_EndRead_m2677870820 (WebConnectionStream_t1922483508 * __this, Il2CppObject * ___r0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::WriteRequestAsyncCB(System.IAsyncResult)
extern "C"  void WebConnectionStream_WriteRequestAsyncCB_m1435068736 (WebConnectionStream_t1922483508 * __this, Il2CppObject * ___r0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebConnectionStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * WebConnectionStream_BeginWrite_m826475291 (WebConnectionStream_t1922483508 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___size2, AsyncCallback_t163412349 * ___cb3, Il2CppObject * ___state4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::CheckWriteOverflow(System.Int64,System.Int64,System.Int64)
extern "C"  void WebConnectionStream_CheckWriteOverflow_m1112324483 (WebConnectionStream_t1922483508 * __this, int64_t ___contentLength0, int64_t ___totalWritten1, int64_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::EndWrite(System.IAsyncResult)
extern "C"  void WebConnectionStream_EndWrite_m3252995173 (WebConnectionStream_t1922483508 * __this, Il2CppObject * ___r0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void WebConnectionStream_Write_m1127239850 (WebConnectionStream_t1922483508 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::Flush()
extern "C"  void WebConnectionStream_Flush_m1863568152 (WebConnectionStream_t1922483508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::SetHeaders(System.Byte[])
extern "C"  void WebConnectionStream_SetHeaders_m744225755 (WebConnectionStream_t1922483508 * __this, ByteU5BU5D_t3397334013* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_RequestWritten()
extern "C"  bool WebConnectionStream_get_RequestWritten_m1381033641 (WebConnectionStream_t1922483508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebConnectionStream::WriteRequestAsync(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * WebConnectionStream_WriteRequestAsync_m379244206 (WebConnectionStream_t1922483508 * __this, AsyncCallback_t163412349 * ___cb0, Il2CppObject * ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::WriteHeaders()
extern "C"  void WebConnectionStream_WriteHeaders_m574317763 (WebConnectionStream_t1922483508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::WriteRequest()
extern "C"  void WebConnectionStream_WriteRequest_m970214216 (WebConnectionStream_t1922483508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::InternalClose()
extern "C"  void WebConnectionStream_InternalClose_m2297817819 (WebConnectionStream_t1922483508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::Close()
extern "C"  void WebConnectionStream_Close_m1980242366 (WebConnectionStream_t1922483508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::KillBuffer()
extern "C"  void WebConnectionStream_KillBuffer_m4024145806 (WebConnectionStream_t1922483508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.WebConnectionStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t WebConnectionStream_Seek_m1474255664 (WebConnectionStream_t1922483508 * __this, int64_t ___a0, int32_t ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::SetLength(System.Int64)
extern "C"  void WebConnectionStream_SetLength_m3238549034 (WebConnectionStream_t1922483508 * __this, int64_t ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_CanSeek()
extern "C"  bool WebConnectionStream_get_CanSeek_m3916140943 (WebConnectionStream_t1922483508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_CanRead()
extern "C"  bool WebConnectionStream_get_CanRead_m470990249 (WebConnectionStream_t1922483508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_CanWrite()
extern "C"  bool WebConnectionStream_get_CanWrite_m1184934156 (WebConnectionStream_t1922483508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.WebConnectionStream::get_Length()
extern "C"  int64_t WebConnectionStream_get_Length_m2687402700 (WebConnectionStream_t1922483508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.WebConnectionStream::get_Position()
extern "C"  int64_t WebConnectionStream_get_Position_m3700190811 (WebConnectionStream_t1922483508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_Position(System.Int64)
extern "C"  void WebConnectionStream_set_Position_m2423198378 (WebConnectionStream_t1922483508 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
