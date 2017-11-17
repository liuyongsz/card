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

// System.Net.ChunkStream/Chunk
struct Chunk_t3860501603;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.ChunkStream/Chunk::.ctor(System.Byte[])
extern "C"  void Chunk__ctor_m1510239680 (Chunk_t3860501603 * __this, ByteU5BU5D_t3397334013* ___chunk0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ChunkStream/Chunk::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t Chunk_Read_m647929994 (Chunk_t3860501603 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
