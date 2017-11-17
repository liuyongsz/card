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

// Mono.Xml.Schema.XsdEntities
struct XsdEntities_t1103053540;
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

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlTokenizedType1619571710.h"
#include "System_Xml_System_Xml_Schema_XmlTypeCode58293802.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_XmlNameTable1345805268.h"

// System.Void Mono.Xml.Schema.XsdEntities::.ctor()
extern "C"  void XsdEntities__ctor_m969339632 (XsdEntities_t1103053540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlTokenizedType Mono.Xml.Schema.XsdEntities::get_TokenizedType()
extern "C"  int32_t XsdEntities_get_TokenizedType_m1786468849 (XsdEntities_t1103053540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdEntities::get_TypeCode()
extern "C"  int32_t XsdEntities_get_TypeCode_m2927447888 (XsdEntities_t1103053540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdEntities::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  Il2CppObject * XsdEntities_ParseValue_m2830002554 (XsdEntities_t1103053540 * __this, String_t* ___value0, XmlNameTable_t1345805268 * ___nt1, Il2CppObject * ___nsmgr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdEntities::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t3507792607 * XsdEntities_ParseValueType_m1518286516 (XsdEntities_t1103053540 * __this, String_t* ___s0, XmlNameTable_t1345805268 * ___nameTable1, Il2CppObject * ___nsmgr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Xml.Schema.XsdEntities::GetValidatedArray(System.String,System.Xml.XmlNameTable)
extern "C"  StringU5BU5D_t1642385972* XsdEntities_GetValidatedArray_m3750097794 (XsdEntities_t1103053540 * __this, String_t* ___value0, XmlNameTable_t1345805268 * ___nt1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
