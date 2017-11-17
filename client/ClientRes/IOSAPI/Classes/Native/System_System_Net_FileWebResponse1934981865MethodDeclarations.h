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

// System.Net.FileWebResponse
struct FileWebResponse_t1934981865;
// System.Uri
struct Uri_t19570940;
// System.IO.FileStream
struct FileStream_t1695958676;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t3028142837;
// System.IO.Stream
struct Stream_t3255436806;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_IO_FileStream1695958676.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"

// System.Void System.Net.FileWebResponse::.ctor(System.Uri,System.IO.FileStream)
extern "C"  void FileWebResponse__ctor_m4027310473 (FileWebResponse_t1934981865 * __this, Uri_t19570940 * ___responseUri0, FileStream_t1695958676 * ___fileStream1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileWebResponse__ctor_m2805366530 (FileWebResponse_t1934981865 * __this, SerializationInfo_t228987430 * ___serializationInfo0, StreamingContext_t1417235061  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileWebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m2098319096 (FileWebResponse_t1934981865 * __this, SerializationInfo_t228987430 * ___serializationInfo0, StreamingContext_t1417235061  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::System.IDisposable.Dispose()
extern "C"  void FileWebResponse_System_IDisposable_Dispose_m3709383336 (FileWebResponse_t1934981865 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.FileWebResponse::get_ContentLength()
extern "C"  int64_t FileWebResponse_get_ContentLength_m2354914076 (FileWebResponse_t1934981865 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.FileWebResponse::get_Headers()
extern "C"  WebHeaderCollection_t3028142837 * FileWebResponse_get_Headers_m1529728342 (FileWebResponse_t1934981865 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileWebResponse_GetObjectData_m436518413 (FileWebResponse_t1934981865 * __this, SerializationInfo_t228987430 * ___serializationInfo0, StreamingContext_t1417235061  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FileWebResponse::GetResponseStream()
extern "C"  Stream_t3255436806 * FileWebResponse_GetResponseStream_m3207033384 (FileWebResponse_t1934981865 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::Finalize()
extern "C"  void FileWebResponse_Finalize_m2293616471 (FileWebResponse_t1934981865 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::Close()
extern "C"  void FileWebResponse_Close_m3851120995 (FileWebResponse_t1934981865 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::Dispose(System.Boolean)
extern "C"  void FileWebResponse_Dispose_m2881165725 (FileWebResponse_t1934981865 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::CheckDisposed()
extern "C"  void FileWebResponse_CheckDisposed_m2872507370 (FileWebResponse_t1934981865 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
