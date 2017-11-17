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

// System.Xml.Schema.XmlSchemaInclude
struct XmlSchemaInclude_t2752556710;
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

// System.Void System.Xml.Schema.XmlSchemaInclude::.ctor()
extern "C"  void XmlSchemaInclude__ctor_m2507466506 (XmlSchemaInclude_t2752556710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaInclude::set_Annotation(System.Xml.Schema.XmlSchemaAnnotation)
extern "C"  void XmlSchemaInclude_set_Annotation_m789528408 (XmlSchemaInclude_t2752556710 * __this, XmlSchemaAnnotation_t2400301303 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaInclude System.Xml.Schema.XmlSchemaInclude::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaInclude_t2752556710 * XmlSchemaInclude_Read_m2387479304 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t3786681597 * ___reader0, ValidationEventHandler_t1580700381 * ___h1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
