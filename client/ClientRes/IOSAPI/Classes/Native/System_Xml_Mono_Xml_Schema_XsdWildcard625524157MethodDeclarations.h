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

// Mono.Xml.Schema.XsdWildcard
struct XsdWildcard_t625524157;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t2050913741;
// System.String
struct String_t;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1580700381;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t880472818;
// System.Xml.Schema.XmlSchemaAny
struct XmlSchemaAny_t3277730824;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject2050913741.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle1580700381.h"
#include "System_Xml_System_Xml_Schema_XmlSchema880472818.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAny3277730824.h"
#include "System_Xml_Mono_Xml_Schema_XsdWildcard625524157.h"

// System.Void Mono.Xml.Schema.XsdWildcard::.ctor(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XsdWildcard__ctor_m3788857523 (XsdWildcard_t625524157 * __this, XmlSchemaObject_t2050913741 * ___wildcard0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdWildcard::Reset()
extern "C"  void XsdWildcard_Reset_m4183508512 (XsdWildcard_t625524157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdWildcard::Compile(System.String,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XsdWildcard_Compile_m2499551977 (XsdWildcard_t625524157 * __this, String_t* ___nss0, ValidationEventHandler_t1580700381 * ___h1, XmlSchema_t880472818 * ___schema2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdWildcard::ExamineAttributeWildcardIntersection(System.Xml.Schema.XmlSchemaAny,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  bool XsdWildcard_ExamineAttributeWildcardIntersection_m1703751471 (XsdWildcard_t625524157 * __this, XmlSchemaAny_t3277730824 * ___other0, ValidationEventHandler_t1580700381 * ___h1, XmlSchema_t880472818 * ___schema2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdWildcard::ValidateWildcardAllowsNamespaceName(System.String,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XsdWildcard_ValidateWildcardAllowsNamespaceName_m2534680641 (XsdWildcard_t625524157 * __this, String_t* ___ns0, ValidationEventHandler_t1580700381 * ___h1, XmlSchema_t880472818 * ___schema2, bool ___raiseError3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdWildcard::ValidateWildcardSubset(Mono.Xml.Schema.XsdWildcard,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XsdWildcard_ValidateWildcardSubset_m537457682 (XsdWildcard_t625524157 * __this, XsdWildcard_t625524157 * ___other0, ValidationEventHandler_t1580700381 * ___h1, XmlSchema_t880472818 * ___schema2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdWildcard::ValidateWildcardSubset(Mono.Xml.Schema.XsdWildcard,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C"  bool XsdWildcard_ValidateWildcardSubset_m2578406799 (XsdWildcard_t625524157 * __this, XsdWildcard_t625524157 * ___other0, ValidationEventHandler_t1580700381 * ___h1, XmlSchema_t880472818 * ___schema2, bool ___raiseError3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
