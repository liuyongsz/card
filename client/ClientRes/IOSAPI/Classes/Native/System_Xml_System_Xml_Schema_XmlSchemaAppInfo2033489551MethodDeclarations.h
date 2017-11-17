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

// System.Xml.Schema.XmlSchemaAppInfo
struct XmlSchemaAppInfo_t2033489551;
// System.Xml.XmlNode[]
struct XmlNodeU5BU5D_t2118142256;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3786681597;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1580700381;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader3786681597.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle1580700381.h"

// System.Void System.Xml.Schema.XmlSchemaAppInfo::.ctor()
extern "C"  void XmlSchemaAppInfo__ctor_m2373867453 (XmlSchemaAppInfo_t2033489551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode[] System.Xml.Schema.XmlSchemaAppInfo::get_Markup()
extern "C"  XmlNodeU5BU5D_t2118142256* XmlSchemaAppInfo_get_Markup_m1968874398 (XmlSchemaAppInfo_t2033489551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAppInfo::set_Markup(System.Xml.XmlNode[])
extern "C"  void XmlSchemaAppInfo_set_Markup_m212581595 (XmlSchemaAppInfo_t2033489551 * __this, XmlNodeU5BU5D_t2118142256* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAppInfo System.Xml.Schema.XmlSchemaAppInfo::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler,System.Boolean&)
extern "C"  XmlSchemaAppInfo_t2033489551 * XmlSchemaAppInfo_Read_m1918977215 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t3786681597 * ___reader0, ValidationEventHandler_t1580700381 * ___h1, bool* ___skip2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
