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

// System.Xml.NonBlockingStreamReader
struct NonBlockingStreamReader_t3963211903;
// System.IO.Stream
struct Stream_t3255436806;
// System.Text.Encoding
struct Encoding_t663144255;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_Text_Encoding663144255.h"

// System.Void System.Xml.NonBlockingStreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C"  void NonBlockingStreamReader__ctor_m1875423636 (NonBlockingStreamReader_t3963211903 * __this, Stream_t3255436806 * ___stream0, Encoding_t663144255 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Xml.NonBlockingStreamReader::get_Encoding()
extern "C"  Encoding_t663144255 * NonBlockingStreamReader_get_Encoding_m191321254 (NonBlockingStreamReader_t3963211903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.NonBlockingStreamReader::Close()
extern "C"  void NonBlockingStreamReader_Close_m3799311640 (NonBlockingStreamReader_t3963211903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.NonBlockingStreamReader::Dispose(System.Boolean)
extern "C"  void NonBlockingStreamReader_Dispose_m3673024616 (NonBlockingStreamReader_t3963211903 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.NonBlockingStreamReader::ReadBuffer()
extern "C"  int32_t NonBlockingStreamReader_ReadBuffer_m392123206 (NonBlockingStreamReader_t3963211903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.NonBlockingStreamReader::Peek()
extern "C"  int32_t NonBlockingStreamReader_Peek_m3179697911 (NonBlockingStreamReader_t3963211903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.NonBlockingStreamReader::Read()
extern "C"  int32_t NonBlockingStreamReader_Read_m3119340780 (NonBlockingStreamReader_t3963211903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.NonBlockingStreamReader::Read(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t NonBlockingStreamReader_Read_m2633625343 (NonBlockingStreamReader_t3963211903 * __this, CharU5BU5D_t1328083999* ___dest_buffer0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.NonBlockingStreamReader::FindNextEOL()
extern "C"  int32_t NonBlockingStreamReader_FindNextEOL_m1972310800 (NonBlockingStreamReader_t3963211903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.NonBlockingStreamReader::ReadLine()
extern "C"  String_t* NonBlockingStreamReader_ReadLine_m3661975471 (NonBlockingStreamReader_t3963211903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.NonBlockingStreamReader::ReadToEnd()
extern "C"  String_t* NonBlockingStreamReader_ReadToEnd_m3276186061 (NonBlockingStreamReader_t3963211903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
