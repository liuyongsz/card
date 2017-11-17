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

// Mono.Xml.Schema.XsdBase64Binary
struct XsdBase64Binary_t1094704629;
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

// System.Void Mono.Xml.Schema.XsdBase64Binary::.ctor()
extern "C"  void XsdBase64Binary__ctor_m3813272667 (XsdBase64Binary_t1094704629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdBase64Binary::.cctor()
extern "C"  void XsdBase64Binary__cctor_m2588568478 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdBase64Binary::get_TypeCode()
extern "C"  int32_t XsdBase64Binary_get_TypeCode_m94530771 (XsdBase64Binary_t1094704629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdBase64Binary::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  Il2CppObject * XsdBase64Binary_ParseValue_m3012852687 (XsdBase64Binary_t1094704629 * __this, String_t* ___s0, XmlNameTable_t1345805268 * ___nameTable1, Il2CppObject * ___nsmgr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdBase64Binary::Length(System.String)
extern "C"  int32_t XsdBase64Binary_Length_m3094698075 (XsdBase64Binary_t1094704629 * __this, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdBase64Binary::isPad(System.Char)
extern "C"  bool XsdBase64Binary_isPad_m1579847207 (Il2CppObject * __this /* static, unused */, Il2CppChar ___octect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdBase64Binary::isData(System.Char)
extern "C"  bool XsdBase64Binary_isData_m1569197346 (Il2CppObject * __this /* static, unused */, Il2CppChar ___octect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdBase64Binary::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t3507792607 * XsdBase64Binary_ParseValueType_m3328162445 (XsdBase64Binary_t1094704629 * __this, String_t* ___s0, XmlNameTable_t1345805268 * ___nameTable1, Il2CppObject * ___nsmgr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
