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

// System.Xml.XmlParserInput/XmlParserInputSource
struct XmlParserInputSource_t25800784;
// System.IO.TextReader
struct TextReader_t1561828458;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_TextReader1561828458.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Xml.XmlParserInput/XmlParserInputSource::.ctor(System.IO.TextReader,System.String,System.Boolean,System.Int32,System.Int32)
extern "C"  void XmlParserInputSource__ctor_m1017102513 (XmlParserInputSource_t25800784 * __this, TextReader_t1561828458 * ___reader0, String_t* ___baseUri1, bool ___pe2, int32_t ___line3, int32_t ___column4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::get_LineNumber()
extern "C"  int32_t XmlParserInputSource_get_LineNumber_m895859621 (XmlParserInputSource_t25800784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::get_LinePosition()
extern "C"  int32_t XmlParserInputSource_get_LinePosition_m422688527 (XmlParserInputSource_t25800784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserInput/XmlParserInputSource::Close()
extern "C"  void XmlParserInputSource_Close_m3324148421 (XmlParserInputSource_t25800784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::Read()
extern "C"  int32_t XmlParserInputSource_Read_m219529923 (XmlParserInputSource_t25800784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
