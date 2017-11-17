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

// ProtoBuf.BufferPool
struct BufferPool_t710398810;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void ProtoBuf.BufferPool::.ctor()
extern "C"  void BufferPool__ctor_m40889994 (BufferPool_t710398810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.BufferPool::.cctor()
extern "C"  void BufferPool__cctor_m3723354409 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.BufferPool::Flush()
extern "C"  void BufferPool_Flush_m3965233752 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ProtoBuf.BufferPool::GetBuffer()
extern "C"  ByteU5BU5D_t3397334013* BufferPool_GetBuffer_m4211481520 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.BufferPool::ResizeAndFlushLeft(System.Byte[]&,System.Int32,System.Int32,System.Int32)
extern "C"  void BufferPool_ResizeAndFlushLeft_m1536386150 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013** ___buffer0, int32_t ___toFitAtLeastBytes1, int32_t ___copyFromIndex2, int32_t ___copyBytes3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.BufferPool::ReleaseBufferToPool(System.Byte[]&)
extern "C"  void BufferPool_ReleaseBufferToPool_m3294640637 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013** ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
