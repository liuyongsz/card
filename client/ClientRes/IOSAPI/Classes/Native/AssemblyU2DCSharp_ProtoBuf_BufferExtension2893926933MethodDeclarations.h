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

// ProtoBuf.BufferExtension
struct BufferExtension_t2893926933;
// System.IO.Stream
struct Stream_t3255436806;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"

// System.Void ProtoBuf.BufferExtension::.ctor()
extern "C"  void BufferExtension__ctor_m1810071023 (BufferExtension_t2893926933 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.BufferExtension::ProtoBuf.IExtension.GetLength()
extern "C"  int32_t BufferExtension_ProtoBuf_IExtension_GetLength_m3048384590 (BufferExtension_t2893926933 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream ProtoBuf.BufferExtension::ProtoBuf.IExtension.BeginAppend()
extern "C"  Stream_t3255436806 * BufferExtension_ProtoBuf_IExtension_BeginAppend_m2544339049 (BufferExtension_t2893926933 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.BufferExtension::ProtoBuf.IExtension.EndAppend(System.IO.Stream,System.Boolean)
extern "C"  void BufferExtension_ProtoBuf_IExtension_EndAppend_m302980049 (BufferExtension_t2893926933 * __this, Stream_t3255436806 * ___stream0, bool ___commit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream ProtoBuf.BufferExtension::ProtoBuf.IExtension.BeginQuery()
extern "C"  Stream_t3255436806 * BufferExtension_ProtoBuf_IExtension_BeginQuery_m1197461069 (BufferExtension_t2893926933 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.BufferExtension::ProtoBuf.IExtension.EndQuery(System.IO.Stream)
extern "C"  void BufferExtension_ProtoBuf_IExtension_EndQuery_m1790384766 (BufferExtension_t2893926933 * __this, Stream_t3255436806 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
