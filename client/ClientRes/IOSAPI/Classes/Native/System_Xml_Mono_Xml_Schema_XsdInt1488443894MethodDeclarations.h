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

// Mono.Xml.Schema.XsdInt
struct XsdInt_t1488443894;
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

// System.Void Mono.Xml.Schema.XsdInt::.ctor()
extern "C"  void XsdInt__ctor_m3428494266 (XsdInt_t1488443894 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdInt::get_TypeCode()
extern "C"  int32_t XsdInt_get_TypeCode_m684640354 (XsdInt_t1488443894 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdInt::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  Il2CppObject * XsdInt_ParseValue_m2376990646 (XsdInt_t1488443894 * __this, String_t* ___s0, XmlNameTable_t1345805268 * ___nameTable1, Il2CppObject * ___nsmgr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdInt::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t3507792607 * XsdInt_ParseValueType_m3483879048 (XsdInt_t1488443894 * __this, String_t* ___s0, XmlNameTable_t1345805268 * ___nameTable1, Il2CppObject * ___nsmgr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdOrdering Mono.Xml.Schema.XsdInt::Compare(System.Object,System.Object)
extern "C"  int32_t XsdInt_Compare_m2360929220 (XsdInt_t1488443894 * __this, Il2CppObject * ___x0, Il2CppObject * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
