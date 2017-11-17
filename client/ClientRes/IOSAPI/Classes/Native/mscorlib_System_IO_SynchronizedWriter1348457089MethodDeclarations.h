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

// System.IO.SynchronizedWriter
struct SynchronizedWriter_t1348457089;
// System.IO.TextWriter
struct TextWriter_t4027217640;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Text.Encoding
struct Encoding_t663144255;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_TextWriter4027217640.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.IO.SynchronizedWriter::.ctor(System.IO.TextWriter,System.Boolean)
extern "C"  void SynchronizedWriter__ctor_m3807976982 (SynchronizedWriter_t1348457089 * __this, TextWriter_t4027217640 * ___writer0, bool ___neverClose1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Close()
extern "C"  void SynchronizedWriter_Close_m703846000 (SynchronizedWriter_t1348457089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Flush()
extern "C"  void SynchronizedWriter_Flush_m1017846858 (SynchronizedWriter_t1348457089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char)
extern "C"  void SynchronizedWriter_Write_m2959867908 (SynchronizedWriter_t1348457089 * __this, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char[])
extern "C"  void SynchronizedWriter_Write_m269261988 (SynchronizedWriter_t1348457089 * __this, CharU5BU5D_t1328083999* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.String)
extern "C"  void SynchronizedWriter_Write_m1924840393 (SynchronizedWriter_t1348457089 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.String,System.Object)
extern "C"  void SynchronizedWriter_Write_m2300084471 (SynchronizedWriter_t1348457089 * __this, String_t* ___format0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C"  void SynchronizedWriter_Write_m3986949870 (SynchronizedWriter_t1348457089 * __this, CharU5BU5D_t1328083999* ___buffer0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.String,System.Object,System.Object)
extern "C"  void SynchronizedWriter_Write_m4052085001 (SynchronizedWriter_t1348457089 * __this, String_t* ___format0, Il2CppObject * ___arg01, Il2CppObject * ___arg12, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine()
extern "C"  void SynchronizedWriter_WriteLine_m2959837929 (SynchronizedWriter_t1348457089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String)
extern "C"  void SynchronizedWriter_WriteLine_m1575974363 (SynchronizedWriter_t1348457089 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String,System.Object)
extern "C"  void SynchronizedWriter_WriteLine_m1727363325 (SynchronizedWriter_t1348457089 * __this, String_t* ___format0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String,System.Object,System.Object)
extern "C"  void SynchronizedWriter_WriteLine_m3145308443 (SynchronizedWriter_t1348457089 * __this, String_t* ___format0, Il2CppObject * ___arg01, Il2CppObject * ___arg12, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.IO.SynchronizedWriter::get_Encoding()
extern "C"  Encoding_t663144255 * SynchronizedWriter_get_Encoding_m340234200 (SynchronizedWriter_t1348457089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.SynchronizedWriter::get_NewLine()
extern "C"  String_t* SynchronizedWriter_get_NewLine_m1043974560 (SynchronizedWriter_t1348457089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
