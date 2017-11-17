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

// Mono.Xml.Schema.XsdAnySimpleType
struct XsdAnySimpleType_t1096449895;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t1345805268;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3928241465;
// System.ValueType
struct ValueType_t3507792607;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Xml.Schema.XmlSchemaFacet
struct XmlSchemaFacet_t614309579;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlTypeCode58293802.h"
#include "System_Xml_System_Xml_XmlTokenizedType1619571710.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_XmlNameTable1345805268.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaFacet614309579.h"
#include "System_Xml_Mono_Xml_Schema_XsdOrdering3741887935.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaFacet_Facet3019654938.h"

// System.Void Mono.Xml.Schema.XsdAnySimpleType::.ctor()
extern "C"  void XsdAnySimpleType__ctor_m1678232259 (XsdAnySimpleType_t1096449895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdAnySimpleType::.cctor()
extern "C"  void XsdAnySimpleType__cctor_m2633275492 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdAnySimpleType Mono.Xml.Schema.XsdAnySimpleType::get_Instance()
extern "C"  XsdAnySimpleType_t1096449895 * XsdAnySimpleType_get_Instance_m2353095684 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdAnySimpleType::get_TypeCode()
extern "C"  int32_t XsdAnySimpleType_get_TypeCode_m2945772331 (XsdAnySimpleType_t1096449895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlTokenizedType Mono.Xml.Schema.XsdAnySimpleType::get_TokenizedType()
extern "C"  int32_t XsdAnySimpleType_get_TokenizedType_m3587653510 (XsdAnySimpleType_t1096449895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdAnySimpleType::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  Il2CppObject * XsdAnySimpleType_ParseValue_m3484369835 (XsdAnySimpleType_t1096449895 * __this, String_t* ___s0, XmlNameTable_t1345805268 * ___nameTable1, Il2CppObject * ___nsmgr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdAnySimpleType::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t3507792607 * XsdAnySimpleType_ParseValueType_m3886768761 (XsdAnySimpleType_t1096449895 * __this, String_t* ___s0, XmlNameTable_t1345805268 * ___nameTable1, Il2CppObject * ___nsmgr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Xml.Schema.XsdAnySimpleType::ParseListValue(System.String,System.Xml.XmlNameTable)
extern "C"  StringU5BU5D_t1642385972* XsdAnySimpleType_ParseListValue_m4200464484 (XsdAnySimpleType_t1096449895 * __this, String_t* ___s0, XmlNameTable_t1345805268 * ___nameTable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAnySimpleType::AllowsFacet(System.Xml.Schema.XmlSchemaFacet)
extern "C"  bool XsdAnySimpleType_AllowsFacet_m4290949480 (XsdAnySimpleType_t1096449895 * __this, XmlSchemaFacet_t614309579 * ___xsf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdOrdering Mono.Xml.Schema.XsdAnySimpleType::Compare(System.Object,System.Object)
extern "C"  int32_t XsdAnySimpleType_Compare_m3168856083 (XsdAnySimpleType_t1096449895 * __this, Il2CppObject * ___x0, Il2CppObject * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdAnySimpleType::Length(System.String)
extern "C"  int32_t XsdAnySimpleType_Length_m734148715 (XsdAnySimpleType_t1096449895 * __this, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaFacet/Facet Mono.Xml.Schema.XsdAnySimpleType::get_AllowedFacets()
extern "C"  int32_t XsdAnySimpleType_get_AllowedFacets_m2937678503 (XsdAnySimpleType_t1096449895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
