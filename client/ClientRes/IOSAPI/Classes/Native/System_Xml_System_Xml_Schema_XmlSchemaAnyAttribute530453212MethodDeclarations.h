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

// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t530453212;
// System.String
struct String_t;
// System.Collections.Specialized.StringCollection
struct StringCollection_t352985975;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1580700381;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t880472818;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3786681597;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaContentProcess74226324.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle1580700381.h"
#include "System_Xml_System_Xml_Schema_XmlSchema880472818.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAnyAttribute530453212.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaReader3786681597.h"

// System.Void System.Xml.Schema.XmlSchemaAnyAttribute::.ctor()
extern "C"  void XmlSchemaAnyAttribute__ctor_m3255879010 (XmlSchemaAnyAttribute_t530453212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAnyAttribute::get_Namespace()
extern "C"  String_t* XmlSchemaAnyAttribute_get_Namespace_m1930822983 (XmlSchemaAnyAttribute_t530453212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::get_HasValueAny()
extern "C"  bool XmlSchemaAnyAttribute_get_HasValueAny_m763154870 (XmlSchemaAnyAttribute_t530453212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::get_HasValueLocal()
extern "C"  bool XmlSchemaAnyAttribute_get_HasValueLocal_m756502669 (XmlSchemaAnyAttribute_t530453212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::get_HasValueOther()
extern "C"  bool XmlSchemaAnyAttribute_get_HasValueOther_m1035903466 (XmlSchemaAnyAttribute_t530453212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::get_HasValueTargetNamespace()
extern "C"  bool XmlSchemaAnyAttribute_get_HasValueTargetNamespace_m91797544 (XmlSchemaAnyAttribute_t530453212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringCollection System.Xml.Schema.XmlSchemaAnyAttribute::get_ResolvedNamespaces()
extern "C"  StringCollection_t352985975 * XmlSchemaAnyAttribute_get_ResolvedNamespaces_m2021581246 (XmlSchemaAnyAttribute_t530453212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaContentProcessing System.Xml.Schema.XmlSchemaAnyAttribute::get_ResolvedProcessContents()
extern "C"  int32_t XmlSchemaAnyAttribute_get_ResolvedProcessContents_m2028673908 (XmlSchemaAnyAttribute_t530453212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAnyAttribute::get_TargetNamespace()
extern "C"  String_t* XmlSchemaAnyAttribute_get_TargetNamespace_m1415155904 (XmlSchemaAnyAttribute_t530453212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAnyAttribute::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaAnyAttribute_Compile_m4001469764 (XmlSchemaAnyAttribute_t530453212 * __this, ValidationEventHandler_t1580700381 * ___h0, XmlSchema_t880472818 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAnyAttribute::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  int32_t XmlSchemaAnyAttribute_Validate_m494848451 (XmlSchemaAnyAttribute_t530453212 * __this, ValidationEventHandler_t1580700381 * ___h0, XmlSchema_t880472818 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAnyAttribute::ValidateWildcardSubset(System.Xml.Schema.XmlSchemaAnyAttribute,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaAnyAttribute_ValidateWildcardSubset_m1770406546 (XmlSchemaAnyAttribute_t530453212 * __this, XmlSchemaAnyAttribute_t530453212 * ___other0, ValidationEventHandler_t1580700381 * ___h1, XmlSchema_t880472818 * ___schema2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::ValidateWildcardAllowsNamespaceName(System.String,System.Xml.Schema.XmlSchema)
extern "C"  bool XmlSchemaAnyAttribute_ValidateWildcardAllowsNamespaceName_m3154725827 (XmlSchemaAnyAttribute_t530453212 * __this, String_t* ___ns0, XmlSchema_t880472818 * ___schema1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaAnyAttribute::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C"  XmlSchemaAnyAttribute_t530453212 * XmlSchemaAnyAttribute_Read_m121804594 (Il2CppObject * __this /* static, unused */, XmlSchemaReader_t3786681597 * ___reader0, ValidationEventHandler_t1580700381 * ___h1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
