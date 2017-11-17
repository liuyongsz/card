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

// System.IO.Stream
struct Stream_t3255436806;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharp_ProtoBuf_PrefixStyle2069489999.h"

// System.Boolean ProtoBuf.Serializer::TryReadLengthPrefix(System.IO.Stream,ProtoBuf.PrefixStyle,System.Int32&)
extern "C"  bool Serializer_TryReadLengthPrefix_m3811472645 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___source0, int32_t ___style1, int32_t* ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializer::TryReadLengthPrefix(System.Byte[],System.Int32,System.Int32,ProtoBuf.PrefixStyle,System.Int32&)
extern "C"  bool Serializer_TryReadLengthPrefix_m3886871589 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___index1, int32_t ___count2, int32_t ___style3, int32_t* ___length4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializer::FlushPool()
extern "C"  void Serializer_FlushPool_m1479481390 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
