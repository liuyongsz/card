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

// Lidgren.Network.NetBuffer
struct NetBuffer_t3608062491;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// System.Net.IPEndPoint
struct IPEndPoint_t2615413766;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Byte[] Lidgren.Network.NetBuffer::get_Data()
extern "C"  ByteU5BU5D_t3397334013* NetBuffer_get_Data_m1302059707 (NetBuffer_t3608062491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Lidgren.Network.NetBuffer::get_LengthBytes()
extern "C"  int32_t NetBuffer_get_LengthBytes_m2765088638 (NetBuffer_t3608062491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Lidgren.Network.NetBuffer::get_LengthBits()
extern "C"  int32_t NetBuffer_get_LengthBits_m2426148225 (NetBuffer_t3608062491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetBuffer::set_LengthBits(System.Int32)
extern "C"  void NetBuffer_set_LengthBits_m2102256812 (NetBuffer_t3608062491 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Lidgren.Network.NetBuffer::get_PositionInBytes()
extern "C"  int32_t NetBuffer_get_PositionInBytes_m2104121730 (NetBuffer_t3608062491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetBuffer::.cctor()
extern "C"  void NetBuffer__cctor_m1227205649 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Lidgren.Network.NetBuffer::PeekByte()
extern "C"  uint8_t NetBuffer_PeekByte_m934254441 (NetBuffer_t3608062491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Lidgren.Network.NetBuffer::ReadByte()
extern "C"  uint8_t NetBuffer_ReadByte_m3348400846 (NetBuffer_t3608062491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Lidgren.Network.NetBuffer::ReadBytes(System.Int32)
extern "C"  ByteU5BU5D_t3397334013* NetBuffer_ReadBytes_m4004009464 (NetBuffer_t3608062491 * __this, int32_t ___numberOfBytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 Lidgren.Network.NetBuffer::ReadUInt16()
extern "C"  uint16_t NetBuffer_ReadUInt16_m907876270 (NetBuffer_t3608062491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Lidgren.Network.NetBuffer::ReadInt32()
extern "C"  int32_t NetBuffer_ReadInt32_m2479521906 (NetBuffer_t3608062491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Lidgren.Network.NetBuffer::ReadUInt64()
extern "C"  uint64_t NetBuffer_ReadUInt64_m475056270 (NetBuffer_t3608062491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Lidgren.Network.NetBuffer::ReadInt64()
extern "C"  int64_t NetBuffer_ReadInt64_m2415498424 (NetBuffer_t3608062491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Lidgren.Network.NetBuffer::ReadSingle()
extern "C"  float NetBuffer_ReadSingle_m2767420110 (NetBuffer_t3608062491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Lidgren.Network.NetBuffer::ReadVariableUInt32()
extern "C"  uint32_t NetBuffer_ReadVariableUInt32_m100620994 (NetBuffer_t3608062491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Lidgren.Network.NetBuffer::ReadString()
extern "C"  String_t* NetBuffer_ReadString_m1223210798 (NetBuffer_t3608062491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint Lidgren.Network.NetBuffer::ReadIPEndPoint()
extern "C"  IPEndPoint_t2615413766 * NetBuffer_ReadIPEndPoint_m430505649 (NetBuffer_t3608062491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetBuffer::EnsureBufferSize(System.Int32)
extern "C"  void NetBuffer_EnsureBufferSize_m2910474188 (NetBuffer_t3608062491 * __this, int32_t ___numberOfBits0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetBuffer::InternalEnsureBufferSize(System.Int32)
extern "C"  void NetBuffer_InternalEnsureBufferSize_m2673967747 (NetBuffer_t3608062491 * __this, int32_t ___numberOfBits0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetBuffer::Write(System.Byte)
extern "C"  void NetBuffer_Write_m4142810212 (NetBuffer_t3608062491 * __this, uint8_t ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetBuffer::Write(System.Byte[])
extern "C"  void NetBuffer_Write_m3595600516 (NetBuffer_t3608062491 * __this, ByteU5BU5D_t3397334013* ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetBuffer::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void NetBuffer_Write_m3872681458 (NetBuffer_t3608062491 * __this, ByteU5BU5D_t3397334013* ___source0, int32_t ___offsetInBytes1, int32_t ___numberOfBytes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetBuffer::Write(System.Int32)
extern "C"  void NetBuffer_Write_m3675152492 (NetBuffer_t3608062491 * __this, int32_t ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetBuffer::Write(System.UInt32)
extern "C"  void NetBuffer_Write_m2917047851 (NetBuffer_t3608062491 * __this, uint32_t ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetBuffer::Write(System.Int64)
extern "C"  void NetBuffer_Write_m4098639993 (NetBuffer_t3608062491 * __this, int64_t ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetBuffer::Write(System.Single)
extern "C"  void NetBuffer_Write_m2191092918 (NetBuffer_t3608062491 * __this, float ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Lidgren.Network.NetBuffer::WriteVariableUInt32(System.UInt32)
extern "C"  int32_t NetBuffer_WriteVariableUInt32_m1610554926 (NetBuffer_t3608062491 * __this, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetBuffer::Write(System.String)
extern "C"  void NetBuffer_Write_m962556565 (NetBuffer_t3608062491 * __this, String_t* ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Lidgren.Network.NetBuffer::.ctor()
extern "C"  void NetBuffer__ctor_m3780783062 (NetBuffer_t3608062491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
