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

// System.Xml.Schema.XmlSchemaSimpleContentExtension
struct XmlSchemaSimpleContentExtension_t3718357176;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t1944712516;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t395083109;
// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t530453212;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t2050913741;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1580700381;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t880472818;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3786681597;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAnyAttribute530453212.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject2050913741.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle1580700381.h"
#include "System_Xml_System_Xml_Schema_XmlSchema880472818.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader3786681597.h"

// System.Void System.Xml.Schema.XmlSchemaSimpleContentExtension::.ctor()
extern "C"  void XmlSchemaSimpleContentExtension__ctor_m3558938004 (XmlSchemaSimpleContentExtension_t3718357176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaSimpleContentExtension::get_BaseTypeName()
extern "C"  XmlQualifiedName_t1944712516 * XmlSchemaSimpleContentExtension_get_BaseTypeName_m1000074508 (XmlSchemaSimpleContentExtension_t3718357176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaSimpleContentExtension::get_Attributes()
extern "C"  XmlSchemaObjectCollection_t395083109 * XmlSchemaSimpleContentExtension_get_Attributes_m3508944345 (XmlSchemaSimpleContentExtension_t3718357176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaSimpleContentExtension::get_AnyAttribute()
extern "C"  XmlSchemaAnyAttribute_t530453212 * XmlSchemaSimpleContentExtension_get_AnyAttribute_m3303977301 (XmlSchemaSimpleContentExtension_t3718357176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleContentExtension::set_AnyAttribute(System.Xml.Schema.XmlSchemaAnyAttribute)
extern "C"  void XmlSchemaSimpleContentExtension_set_AnyAttribute_m812745402 (XmlSchemaSimpleContentExtension_t3718357176 * __this, XmlSchemaAnyAttribute_t530453212 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleContentExtension::get_IsExtension()
extern "C"  bool XmlSchemaSimpleContentExtension_get_IsExtension_m715405004 (XmlSchemaSimpleContentExtension_t3718357176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleContentExtension::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaSimpleContentExtension_SetParent_m1140680302 (XmlSchemaSimpleContentExtension_t3718357176 * __this, XmlSchemaObject_t2050913741 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleContentExtension::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaSimpleContentExtension_Compile_m2724209778 (XmlSchemaSimpleContentExtension_t3718357176 * __this, ValidationEventHandler_t1580700381 * ___h0, XmlSchema_t880472818 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaSimpleContentExtension::GetBaseTypeName()
extern "C"  XmlQualifiedName_t1944712516 * XmlSchemaSimpleContentExtension_GetBaseTypeName_m3864964643 (XmlSchemaSimpleContentExtension_t3718357176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleContentExtension::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaSimpleContentExtension_Validate_m764841531 (XmlSchemaSimpleContentExtension_t3718357176 * __this, ValidationEventHandler_t1580700381 * ___h0, XmlSchema_t880472818 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleContentExtension System.Xml.Schema.XmlSchemaSimpleContentExtension::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaSimpleContentExtension_t3718357176 * XmlSchemaSimpleContentExtension_Read_m2772444626 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t3786681597 * ___reader0, ValidationEventHandler_t1580700381 * ___h1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
