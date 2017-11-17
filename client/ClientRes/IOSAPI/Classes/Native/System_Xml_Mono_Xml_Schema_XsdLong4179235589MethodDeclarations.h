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

// Mono.Xml.Schema.XsdLong
struct XsdLong_t4179235589;
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
#include "System_Xml_System_Xml_Schema_XmlTypeCode58293802.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_XmlNameTable1345805268.h"
#include "System_Xml_Mono_Xml_Schema_XsdOrdering3741887935.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Mono.Xml.Schema.XsdLong::.ctor()
extern "C"  void XsdLong__ctor_m112802409 (XsdLong_t4179235589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdLong::get_TypeCode()
extern "C"  int32_t XsdLong_get_TypeCode_m2861508465 (XsdLong_t4179235589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdLong::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  Il2CppObject * XsdLong_ParseValue_m1304364417 (XsdLong_t4179235589 * __this, String_t* ___s0, XmlNameTable_t1345805268 * ___nameTable1, Il2CppObject * ___nsmgr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdLong::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t3507792607 * XsdLong_ParseValueType_m4014747475 (XsdLong_t4179235589 * __this, String_t* ___s0, XmlNameTable_t1345805268 * ___nameTable1, Il2CppObject * ___nsmgr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdOrdering Mono.Xml.Schema.XsdLong::Compare(System.Object,System.Object)
extern "C"  int32_t XsdLong_Compare_m365645845 (XsdLong_t4179235589 * __this, Il2CppObject * ___x0, Il2CppObject * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
