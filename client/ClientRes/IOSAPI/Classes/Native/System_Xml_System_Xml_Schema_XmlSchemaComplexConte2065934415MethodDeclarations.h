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

// System.Xml.Schema.XmlSchemaComplexContent
struct XmlSchemaComplexContent_t2065934415;
// System.Xml.Schema.XmlSchemaContent
struct XmlSchemaContent_t3733871217;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t2050913741;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1580700381;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t880472818;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3786681597;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject2050913741.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle1580700381.h"
#include "System_Xml_System_Xml_Schema_XmlSchema880472818.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader3786681597.h"

// System.Void System.Xml.Schema.XmlSchemaComplexContent::.ctor()
extern "C"  void XmlSchemaComplexContent__ctor_m2926503699 (XmlSchemaComplexContent_t2065934415 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaComplexContent::get_IsMixed()
extern "C"  bool XmlSchemaComplexContent_get_IsMixed_m1225296133 (XmlSchemaComplexContent_t2065934415 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaContent System.Xml.Schema.XmlSchemaComplexContent::get_Content()
extern "C"  XmlSchemaContent_t3733871217 * XmlSchemaComplexContent_get_Content_m1073631830 (XmlSchemaComplexContent_t2065934415 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaComplexContent::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaComplexContent_SetParent_m2378217019 (XmlSchemaComplexContent_t2065934415 * __this, XmlSchemaObject_t2050913741 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaComplexContent::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaComplexContent_Compile_m3949605155 (XmlSchemaComplexContent_t2065934415 * __this, ValidationEventHandler_t1580700381 * ___h0, XmlSchema_t880472818 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaComplexContent::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaComplexContent_Validate_m231022662 (XmlSchemaComplexContent_t2065934415 * __this, ValidationEventHandler_t1580700381 * ___h0, XmlSchema_t880472818 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaComplexContent System.Xml.Schema.XmlSchemaComplexContent::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaComplexContent_t2065934415 * XmlSchemaComplexContent_Read_m1475042930 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t3786681597 * ___reader0, ValidationEventHandler_t1580700381 * ___h1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
