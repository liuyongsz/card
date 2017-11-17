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

// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Int32 Lidgren.Network.NetFragmentationHelper::WriteHeader(System.Byte[],System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t NetFragmentationHelper_WriteHeader_m2245683411 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___destination0, int32_t ___ptr1, int32_t ___group2, int32_t ___totalBits3, int32_t ___chunkByteSize4, int32_t ___chunkNumber5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Lidgren.Network.NetFragmentationHelper::ReadHeader(System.Byte[],System.Int32,System.Int32&,System.Int32&,System.Int32&,System.Int32&)
extern "C"  int32_t NetFragmentationHelper_ReadHeader_m1346941602 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___ptr1, int32_t* ___group2, int32_t* ___totalBits3, int32_t* ___chunkByteSize4, int32_t* ___chunkNumber5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Lidgren.Network.NetFragmentationHelper::GetFragmentationHeaderSize(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t NetFragmentationHelper_GetFragmentationHeaderSize_m3360396866 (Il2CppObject * __this /* static, unused */, int32_t ___groupId0, int32_t ___totalBytes1, int32_t ___chunkByteSize2, int32_t ___numChunks3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Lidgren.Network.NetFragmentationHelper::GetBestChunkSize(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t NetFragmentationHelper_GetBestChunkSize_m1359511180 (Il2CppObject * __this /* static, unused */, int32_t ___group0, int32_t ___totalBytes1, int32_t ___mtu2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
