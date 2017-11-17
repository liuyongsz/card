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

// System.Xml.Schema.XmlSchemaRedefine
struct XmlSchemaRedefine_t3478619248;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t395083109;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t2050913741;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3786681597;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1580700381;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject2050913741.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader3786681597.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle1580700381.h"

// System.Void System.Xml.Schema.XmlSchemaRedefine::.ctor()
extern "C"  void XmlSchemaRedefine__ctor_m3443064582 (XmlSchemaRedefine_t3478619248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaRedefine::get_Items()
extern "C"  XmlSchemaObjectCollection_t395083109 * XmlSchemaRedefine_get_Items_m118653912 (XmlSchemaRedefine_t3478619248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaRedefine::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaRedefine_SetParent_m2685823132 (XmlSchemaRedefine_t3478619248 * __this, XmlSchemaObject_t2050913741 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaRedefine System.Xml.Schema.XmlSchemaRedefine::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaRedefine_t3478619248 * XmlSchemaRedefine_Read_m3351980082 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t3786681597 * ___reader0, ValidationEventHandler_t1580700381 * ___h1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
