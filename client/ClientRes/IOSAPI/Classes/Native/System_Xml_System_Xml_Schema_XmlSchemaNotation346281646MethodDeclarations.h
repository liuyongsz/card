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

// System.Xml.Schema.XmlSchemaNotation
struct XmlSchemaNotation_t346281646;
// System.String
struct String_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t1944712516;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1580700381;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t880472818;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3786681597;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle1580700381.h"
#include "System_Xml_System_Xml_Schema_XmlSchema880472818.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader3786681597.h"

// System.Void System.Xml.Schema.XmlSchemaNotation::.ctor()
extern "C"  void XmlSchemaNotation__ctor_m827171046 (XmlSchemaNotation_t346281646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaNotation::get_Name()
extern "C"  String_t* XmlSchemaNotation_get_Name_m2955530133 (XmlSchemaNotation_t346281646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaNotation::get_Public()
extern "C"  String_t* XmlSchemaNotation_get_Public_m3665679395 (XmlSchemaNotation_t346281646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaNotation::get_QualifiedName()
extern "C"  XmlQualifiedName_t1944712516 * XmlSchemaNotation_get_QualifiedName_m1266743881 (XmlSchemaNotation_t346281646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaNotation::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaNotation_Compile_m1154841372 (XmlSchemaNotation_t346281646 * __this, ValidationEventHandler_t1580700381 * ___h0, XmlSchema_t880472818 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaNotation::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaNotation_Validate_m4011171577 (XmlSchemaNotation_t346281646 * __this, ValidationEventHandler_t1580700381 * ___h0, XmlSchema_t880472818 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaNotation System.Xml.Schema.XmlSchemaNotation::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaNotation_t346281646 * XmlSchemaNotation_Read_m2324612466 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t3786681597 * ___reader0, ValidationEventHandler_t1580700381 * ___h1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
