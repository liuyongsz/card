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

// Mono.Xml.Schema.XsdDuration
struct XsdDuration_t1605638443;
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

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaFacet_Facet3019654938.h"
#include "System_Xml_System_Xml_XmlTokenizedType1619571710.h"
#include "System_Xml_System_Xml_Schema_XmlTypeCode58293802.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_XmlNameTable1345805268.h"
#include "System_Xml_Mono_Xml_Schema_XsdOrdering3741887935.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Mono.Xml.Schema.XsdDuration::.ctor()
extern "C"  void XsdDuration__ctor_m3647457165 (XsdDuration_t1605638443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaFacet/Facet Mono.Xml.Schema.XsdDuration::get_AllowedFacets()
extern "C"  int32_t XsdDuration_get_AllowedFacets_m1672069349 (XsdDuration_t1605638443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlTokenizedType Mono.Xml.Schema.XsdDuration::get_TokenizedType()
extern "C"  int32_t XsdDuration_get_TokenizedType_m3497966700 (XsdDuration_t1605638443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdDuration::get_TypeCode()
extern "C"  int32_t XsdDuration_get_TypeCode_m3979477773 (XsdDuration_t1605638443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdDuration::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  Il2CppObject * XsdDuration_ParseValue_m2253149565 (XsdDuration_t1605638443 * __this, String_t* ___s0, XmlNameTable_t1345805268 * ___nameTable1, Il2CppObject * ___nsmgr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdDuration::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t3507792607 * XsdDuration_ParseValueType_m2853719483 (XsdDuration_t1605638443 * __this, String_t* ___s0, XmlNameTable_t1345805268 * ___nameTable1, Il2CppObject * ___nsmgr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdOrdering Mono.Xml.Schema.XsdDuration::Compare(System.Object,System.Object)
extern "C"  int32_t XsdDuration_Compare_m1168374945 (XsdDuration_t1605638443 * __this, Il2CppObject * ___x0, Il2CppObject * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
