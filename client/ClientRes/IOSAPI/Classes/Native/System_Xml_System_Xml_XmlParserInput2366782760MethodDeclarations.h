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

// System.Xml.XmlParserInput
struct XmlParserInput_t2366782760;
// System.IO.TextReader
struct TextReader_t1561828458;
// System.String
struct String_t;
// Mono.Xml.DTDParameterEntityDeclaration
struct DTDParameterEntityDeclaration_t252230634;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_TextReader1561828458.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_Mono_Xml_DTDParameterEntityDeclaration252230634.h"

// System.Void System.Xml.XmlParserInput::.ctor(System.IO.TextReader,System.String)
extern "C"  void XmlParserInput__ctor_m3670366216 (XmlParserInput_t2366782760 * __this, TextReader_t1561828458 * ___reader0, String_t* ___baseURI1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserInput::.ctor(System.IO.TextReader,System.String,System.Int32,System.Int32)
extern "C"  void XmlParserInput__ctor_m824048566 (XmlParserInput_t2366782760 * __this, TextReader_t1561828458 * ___reader0, String_t* ___baseURI1, int32_t ___line2, int32_t ___column3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserInput::Close()
extern "C"  void XmlParserInput_Close_m3504584711 (XmlParserInput_t2366782760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserInput::PushPEBuffer(Mono.Xml.DTDParameterEntityDeclaration)
extern "C"  void XmlParserInput_PushPEBuffer_m985241856 (XmlParserInput_t2366782760 * __this, DTDParameterEntityDeclaration_t252230634 * ___pe0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput::ReadSourceChar()
extern "C"  int32_t XmlParserInput_ReadSourceChar_m1731584072 (XmlParserInput_t2366782760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput::PeekChar()
extern "C"  int32_t XmlParserInput_PeekChar_m3994390574 (XmlParserInput_t2366782760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput::ReadChar()
extern "C"  int32_t XmlParserInput_ReadChar_m3242686505 (XmlParserInput_t2366782760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlParserInput::get_BaseURI()
extern "C"  String_t* XmlParserInput_get_BaseURI_m2885964388 (XmlParserInput_t2366782760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlParserInput::get_HasPEBuffer()
extern "C"  bool XmlParserInput_get_HasPEBuffer_m346869395 (XmlParserInput_t2366782760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput::get_LineNumber()
extern "C"  int32_t XmlParserInput_get_LineNumber_m2726790419 (XmlParserInput_t2366782760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput::get_LinePosition()
extern "C"  int32_t XmlParserInput_get_LinePosition_m330612741 (XmlParserInput_t2366782760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlParserInput::get_AllowTextDecl()
extern "C"  bool XmlParserInput_get_AllowTextDecl_m873538628 (XmlParserInput_t2366782760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserInput::set_AllowTextDecl(System.Boolean)
extern "C"  void XmlParserInput_set_AllowTextDecl_m3407374261 (XmlParserInput_t2366782760 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
