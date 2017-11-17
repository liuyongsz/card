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

// System.Xml.XmlStreamReader
struct XmlStreamReader_t2725532304;
// System.Xml.XmlInputStream
struct XmlInputStream_t2650744719;
// System.IO.Stream
struct Stream_t3255436806;
// System.Char[]
struct CharU5BU5D_t1328083999;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlInputStream2650744719.h"
#include "mscorlib_System_IO_Stream3255436806.h"

// System.Void System.Xml.XmlStreamReader::.ctor(System.Xml.XmlInputStream)
extern "C"  void XmlStreamReader__ctor_m1774999454 (XmlStreamReader_t2725532304 * __this, XmlInputStream_t2650744719 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlStreamReader::.ctor(System.IO.Stream)
extern "C"  void XmlStreamReader__ctor_m180296020 (XmlStreamReader_t2725532304 * __this, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlStreamReader::.cctor()
extern "C"  void XmlStreamReader__cctor_m2112518874 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlStreamReader::Close()
extern "C"  void XmlStreamReader_Close_m2848123827 (XmlStreamReader_t2725532304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlStreamReader::Read(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t XmlStreamReader_Read_m3157282800 (XmlStreamReader_t2725532304 * __this, CharU5BU5D_t1328083999* ___dest_buffer0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlStreamReader::Dispose(System.Boolean)
extern "C"  void XmlStreamReader_Dispose_m3256843505 (XmlStreamReader_t2725532304 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
