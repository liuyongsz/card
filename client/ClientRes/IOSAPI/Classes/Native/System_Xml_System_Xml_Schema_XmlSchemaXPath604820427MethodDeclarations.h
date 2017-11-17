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

// System.Xml.Schema.XmlSchemaXPath
struct XmlSchemaXPath_t604820427;
// System.String
struct String_t;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1580700381;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t880472818;
// Mono.Xml.Schema.XsdIdentityPath[]
struct XsdIdentityPathU5BU5D_t526781831;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3786681597;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle1580700381.h"
#include "System_Xml_System_Xml_Schema_XmlSchema880472818.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Collections_ArrayList4252133567.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader3786681597.h"

// System.Void System.Xml.Schema.XmlSchemaXPath::.ctor()
extern "C"  void XmlSchemaXPath__ctor_m2816021755 (XmlSchemaXPath_t604820427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaXPath::get_XPath()
extern "C"  String_t* XmlSchemaXPath_get_XPath_m4131018624 (XmlSchemaXPath_t604820427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaXPath::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaXPath_Compile_m3229682475 (XmlSchemaXPath_t604820427 * __this, ValidationEventHandler_t1580700381 * ___h0, XmlSchema_t880472818 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentityPath[] System.Xml.Schema.XmlSchemaXPath::get_CompiledExpression()
extern "C"  XsdIdentityPathU5BU5D_t526781831* XmlSchemaXPath_get_CompiledExpression_m191981789 (XmlSchemaXPath_t604820427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaXPath::ParseExpression(System.String,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaXPath_ParseExpression_m2889750833 (XmlSchemaXPath_t604820427 * __this, String_t* ___xpath0, ValidationEventHandler_t1580700381 * ___h1, XmlSchema_t880472818 * ___schema2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaXPath::ParsePath(System.String,System.Int32,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaXPath_ParsePath_m3096919798 (XmlSchemaXPath_t604820427 * __this, String_t* ___xpath0, int32_t ___pos1, ArrayList_t4252133567 * ___paths2, ValidationEventHandler_t1580700381 * ___h3, XmlSchema_t880472818 * ___schema4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaXPath::ParseStep(System.String,System.Int32,System.Collections.ArrayList,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaXPath_ParseStep_m3101262568 (XmlSchemaXPath_t604820427 * __this, String_t* ___xpath0, int32_t ___pos1, ArrayList_t4252133567 * ___steps2, ArrayList_t4252133567 * ___paths3, ValidationEventHandler_t1580700381 * ___h4, XmlSchema_t880472818 * ___schema5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaXPath::SkipWhitespace(System.String,System.Int32)
extern "C"  int32_t XmlSchemaXPath_SkipWhitespace_m2374744006 (XmlSchemaXPath_t604820427 * __this, String_t* ___xpath0, int32_t ___pos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaXPath System.Xml.Schema.XmlSchemaXPath::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler,System.String)
extern "C"  XmlSchemaXPath_t604820427 * XmlSchemaXPath_Read_m3281688930 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t3786681597 * ___reader0, ValidationEventHandler_t1580700381 * ___h1, String_t* ___name2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
