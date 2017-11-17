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

// System.Byte Lidgren.Network.NetBitWriter::ReadByte(System.Byte[],System.Int32,System.Int32)
extern "C"  uint8_t NetBitWriter_ReadByte_m1673854543 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___fromBuffer0, int32_t ___numberOfBits1, int32_t ___readBitOffset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetBitWriter::ReadBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  void NetBitWriter_ReadBytes_m2825983754 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___fromBuffer0, int32_t ___numberOfBytes1, int32_t ___readBitOffset2, ByteU5BU5D_t3397334013* ___destination3, int32_t ___destinationByteOffset4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetBitWriter::WriteByte(System.Byte,System.Int32,System.Byte[],System.Int32)
extern "C"  void NetBitWriter_WriteByte_m1348088823 (Il2CppObject * __this /* static, unused */, uint8_t ___source0, int32_t ___numberOfBits1, ByteU5BU5D_t3397334013* ___destination2, int32_t ___destBitOffset3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetBitWriter::WriteBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  void NetBitWriter_WriteBytes_m3262891483 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___source0, int32_t ___sourceByteOffset1, int32_t ___numberOfBytes2, ByteU5BU5D_t3397334013* ___destination3, int32_t ___destBitOffset4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 Lidgren.Network.NetBitWriter::ReadUInt16(System.Byte[],System.Int32,System.Int32)
extern "C"  uint16_t NetBitWriter_ReadUInt16_m634713443 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___fromBuffer0, int32_t ___numberOfBits1, int32_t ___readBitOffset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Lidgren.Network.NetBitWriter::ReadUInt32(System.Byte[],System.Int32,System.Int32)
extern "C"  uint32_t NetBitWriter_ReadUInt32_m1364064019 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___fromBuffer0, int32_t ___numberOfBits1, int32_t ___readBitOffset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Lidgren.Network.NetBitWriter::WriteUInt32(System.UInt32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t NetBitWriter_WriteUInt32_m1361372613 (Il2CppObject * __this /* static, unused */, uint32_t ___source0, int32_t ___numberOfBits1, ByteU5BU5D_t3397334013* ___destination2, int32_t ___destinationBitOffset3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Lidgren.Network.NetBitWriter::WriteUInt64(System.UInt64,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t NetBitWriter_WriteUInt64_m3878476069 (Il2CppObject * __this /* static, unused */, uint64_t ___source0, int32_t ___numberOfBits1, ByteU5BU5D_t3397334013* ___destination2, int32_t ___destinationBitOffset3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
