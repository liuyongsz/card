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

// System.Net.WebResponse
struct WebResponse_t1895226051;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t3028142837;
// System.Exception
struct Exception_t1927440687;
// System.IO.Stream
struct Stream_t3255436806;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"

// System.Void System.Net.WebResponse::.ctor()
extern "C"  void WebResponse__ctor_m3371730835 (WebResponse_t1895226051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebResponse__ctor_m4250546700 (WebResponse_t1895226051 * __this, SerializationInfo_t228987430 * ___serializationInfo0, StreamingContext_t1417235061  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::System.IDisposable.Dispose()
extern "C"  void WebResponse_System_IDisposable_Dispose_m3951247338 (WebResponse_t1895226051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m3342517762 (WebResponse_t1895226051 * __this, SerializationInfo_t228987430 * ___serializationInfo0, StreamingContext_t1417235061  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.WebResponse::get_ContentLength()
extern "C"  int64_t WebResponse_get_ContentLength_m2058465454 (WebResponse_t1895226051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.WebResponse::get_Headers()
extern "C"  WebHeaderCollection_t3028142837 * WebResponse_get_Headers_m3170001788 (WebResponse_t1895226051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.WebResponse::GetMustImplement()
extern "C"  Exception_t1927440687 * WebResponse_GetMustImplement_m2853142170 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::Close()
extern "C"  void WebResponse_Close_m3788698729 (WebResponse_t1895226051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.WebResponse::GetResponseStream()
extern "C"  Stream_t3255436806 * WebResponse_GetResponseStream_m629848918 (WebResponse_t1895226051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebResponse_GetObjectData_m3352137755 (WebResponse_t1895226051 * __this, SerializationInfo_t228987430 * ___serializationInfo0, StreamingContext_t1417235061  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
