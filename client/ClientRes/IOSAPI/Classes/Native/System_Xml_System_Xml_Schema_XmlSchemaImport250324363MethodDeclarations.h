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

// System.Xml.Schema.XmlSchemaImport
struct XmlSchemaImport_t250324363;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaAnnotation
struct XmlSchemaAnnotation_t2400301303;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3786681597;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1580700381;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAnnotation2400301303.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader3786681597.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle1580700381.h"

// System.Void System.Xml.Schema.XmlSchemaImport::.ctor()
extern "C"  void XmlSchemaImport__ctor_m4024590631 (XmlSchemaImport_t250324363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaImport::get_Namespace()
extern "C"  String_t* XmlSchemaImport_get_Namespace_m4085014218 (XmlSchemaImport_t250324363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaImport::set_Annotation(System.Xml.Schema.XmlSchemaAnnotation)
extern "C"  void XmlSchemaImport_set_Annotation_m2100583617 (XmlSchemaImport_t250324363 * __this, XmlSchemaAnnotation_t2400301303 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaImport System.Xml.Schema.XmlSchemaImport::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaImport_t250324363 * XmlSchemaImport_Read_m110282802 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t3786681597 * ___reader0, ValidationEventHandler_t1580700381 * ___h1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
