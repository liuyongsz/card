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

// System.Net.ChunkStream
struct ChunkStream_t91719323;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t3028142837;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_WebHeaderCollection3028142837.h"
#include "System_System_Net_ChunkStream_State4001596355.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Net.ChunkStream::.ctor(System.Byte[],System.Int32,System.Int32,System.Net.WebHeaderCollection)
extern "C"  void ChunkStream__ctor_m2091082235 (ChunkStream_t91719323 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___size2, WebHeaderCollection_t3028142837 * ___headers3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::.ctor(System.Net.WebHeaderCollection)
extern "C"  void ChunkStream__ctor_m2666552004 (ChunkStream_t91719323 * __this, WebHeaderCollection_t3028142837 * ___headers0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::ResetBuffer()
extern "C"  void ChunkStream_ResetBuffer_m2756575142 (ChunkStream_t91719323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::WriteAndReadBack(System.Byte[],System.Int32,System.Int32,System.Int32&)
extern "C"  void ChunkStream_WriteAndReadBack_m4051447520 (ChunkStream_t91719323 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___size2, int32_t* ___read3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ChunkStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ChunkStream_Read_m2644745368 (ChunkStream_t91719323 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ChunkStream::ReadFromChunks(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ChunkStream_ReadFromChunks_m227440694 (ChunkStream_t91719323 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void ChunkStream_Write_m1232124261 (ChunkStream_t91719323 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::InternalWrite(System.Byte[],System.Int32&,System.Int32)
extern "C"  void ChunkStream_InternalWrite_m1159278446 (ChunkStream_t91719323 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t* ___offset1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ChunkStream::get_WantMore()
extern "C"  bool ChunkStream_get_WantMore_m1215897223 (ChunkStream_t91719323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ChunkStream::get_ChunkLeft()
extern "C"  int32_t ChunkStream_get_ChunkLeft_m3001057228 (ChunkStream_t91719323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ChunkStream/State System.Net.ChunkStream::ReadBody(System.Byte[],System.Int32&,System.Int32)
extern "C"  int32_t ChunkStream_ReadBody_m4069812912 (ChunkStream_t91719323 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t* ___offset1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ChunkStream/State System.Net.ChunkStream::GetChunkSize(System.Byte[],System.Int32&,System.Int32)
extern "C"  int32_t ChunkStream_GetChunkSize_m3708881784 (ChunkStream_t91719323 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t* ___offset1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.ChunkStream::RemoveChunkExtension(System.String)
extern "C"  String_t* ChunkStream_RemoveChunkExtension_m551025530 (Il2CppObject * __this /* static, unused */, String_t* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ChunkStream/State System.Net.ChunkStream::ReadCRLF(System.Byte[],System.Int32&,System.Int32)
extern "C"  int32_t ChunkStream_ReadCRLF_m651757405 (ChunkStream_t91719323 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t* ___offset1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ChunkStream/State System.Net.ChunkStream::ReadTrailer(System.Byte[],System.Int32&,System.Int32)
extern "C"  int32_t ChunkStream_ReadTrailer_m1002886219 (ChunkStream_t91719323 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t* ___offset1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::ThrowProtocolViolation(System.String)
extern "C"  void ChunkStream_ThrowProtocolViolation_m900952530 (Il2CppObject * __this /* static, unused */, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
