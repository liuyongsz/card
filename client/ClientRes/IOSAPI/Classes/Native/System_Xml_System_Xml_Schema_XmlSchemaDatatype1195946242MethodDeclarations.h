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

// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t1195946242;
// System.ValueType
struct ValueType_t3507792607;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t1345805268;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3928241465;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t1944712516;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_Schema_XsdWhitespaceFacet2758097827.h"
#include "System_Xml_System_Xml_Schema_XmlTypeCode58293802.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_XmlNameTable1345805268.h"
#include "System_Xml_System_Xml_XmlQualifiedName1944712516.h"

// System.Void System.Xml.Schema.XmlSchemaDatatype::.ctor()
extern "C"  void XmlSchemaDatatype__ctor_m1277848188 (XmlSchemaDatatype_t1195946242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaDatatype::.cctor()
extern "C"  void XmlSchemaDatatype__cctor_m74693117 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdWhitespaceFacet System.Xml.Schema.XmlSchemaDatatype::get_Whitespace()
extern "C"  int32_t XmlSchemaDatatype_get_Whitespace_m75825991 (XmlSchemaDatatype_t1195946242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode System.Xml.Schema.XmlSchemaDatatype::get_TypeCode()
extern "C"  int32_t XmlSchemaDatatype_get_TypeCode_m3835652596 (XmlSchemaDatatype_t1195946242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType System.Xml.Schema.XmlSchemaDatatype::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t3507792607 * XmlSchemaDatatype_ParseValueType_m4026618656 (XmlSchemaDatatype_t1195946242 * __this, String_t* ___s0, XmlNameTable_t1345805268 * ___nameTable1, Il2CppObject * ___nsmgr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaDatatype::Normalize(System.String)
extern "C"  String_t* XmlSchemaDatatype_Normalize_m3717401456 (XmlSchemaDatatype_t1195946242 * __this, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaDatatype::Normalize(System.String,Mono.Xml.Schema.XsdWhitespaceFacet)
extern "C"  String_t* XmlSchemaDatatype_Normalize_m1908434418 (XmlSchemaDatatype_t1195946242 * __this, String_t* ___s0, int32_t ___whitespaceFacet1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.XmlSchemaDatatype::FromName(System.Xml.XmlQualifiedName)
extern "C"  XmlSchemaDatatype_t1195946242 * XmlSchemaDatatype_FromName_m3581122103 (Il2CppObject * __this /* static, unused */, XmlQualifiedName_t1944712516 * ___qname0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.XmlSchemaDatatype::FromName(System.String,System.String)
extern "C"  XmlSchemaDatatype_t1195946242 * XmlSchemaDatatype_FromName_m1134999227 (Il2CppObject * __this /* static, unused */, String_t* ___localName0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
