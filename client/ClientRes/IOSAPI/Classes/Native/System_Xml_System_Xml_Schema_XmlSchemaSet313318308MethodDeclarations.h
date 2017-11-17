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

// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t313318308;
// System.Xml.XmlNameTable
struct XmlNameTable_t1345805268;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1580700381;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t3364835593;
// System.Xml.Schema.XmlSchemaCompilationSettings
struct XmlSchemaCompilationSettings_t2971213394;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t880472818;
// System.String
struct String_t;
// System.Array
struct Il2CppArray;
// System.Collections.ICollection
struct ICollection_t91669223;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNameTable1345805268.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle1580700381.h"
#include "System_Xml_System_Xml_Schema_XmlSchema880472818.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Array3829468939.h"

// System.Void System.Xml.Schema.XmlSchemaSet::.ctor()
extern "C"  void XmlSchemaSet__ctor_m3318200246 (XmlSchemaSet_t313318308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::.ctor(System.Xml.XmlNameTable)
extern "C"  void XmlSchemaSet__ctor_m3053843282 (XmlSchemaSet_t313318308 * __this, XmlNameTable_t1345805268 * ___nameTable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::add_ValidationEventHandler(System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchemaSet_add_ValidationEventHandler_m2030700253 (XmlSchemaSet_t313318308 * __this, ValidationEventHandler_t1580700381 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::remove_ValidationEventHandler(System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchemaSet_remove_ValidationEventHandler_m4031167272 (XmlSchemaSet_t313318308 * __this, ValidationEventHandler_t1580700381 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSet::get_Count()
extern "C"  int32_t XmlSchemaSet_get_Count_m3829509880 (XmlSchemaSet_t313318308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::get_GlobalAttributes()
extern "C"  XmlSchemaObjectTable_t3364835593 * XmlSchemaSet_get_GlobalAttributes_m1212192400 (XmlSchemaSet_t313318308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::get_GlobalElements()
extern "C"  XmlSchemaObjectTable_t3364835593 * XmlSchemaSet_get_GlobalElements_m3579992680 (XmlSchemaSet_t313318308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::get_GlobalTypes()
extern "C"  XmlSchemaObjectTable_t3364835593 * XmlSchemaSet_get_GlobalTypes_m3159353004 (XmlSchemaSet_t313318308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSet::get_IsCompiled()
extern "C"  bool XmlSchemaSet_get_IsCompiled_m888834092 (XmlSchemaSet_t313318308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaCompilationSettings System.Xml.Schema.XmlSchemaSet::get_CompilationSettings()
extern "C"  XmlSchemaCompilationSettings_t2971213394 * XmlSchemaSet_get_CompilationSettings_m2408638369 (XmlSchemaSet_t313318308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Xml.Schema.XmlSchemaSet::get_IDCollection()
extern "C"  Hashtable_t909839986 * XmlSchemaSet_get_IDCollection_m2618355533 (XmlSchemaSet_t313318308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaSet::get_NamedIdentities()
extern "C"  XmlSchemaObjectTable_t3364835593 * XmlSchemaSet_get_NamedIdentities_m3730694689 (XmlSchemaSet_t313318308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema System.Xml.Schema.XmlSchemaSet::Add(System.Xml.Schema.XmlSchema)
extern "C"  XmlSchema_t880472818 * XmlSchemaSet_Add_m285595436 (XmlSchemaSet_t313318308 * __this, XmlSchema_t880472818 * ___schema0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::Compile()
extern "C"  void XmlSchemaSet_Compile_m3323111621 (XmlSchemaSet_t313318308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::ClearGlobalComponents()
extern "C"  void XmlSchemaSet_ClearGlobalComponents_m2063606020 (XmlSchemaSet_t313318308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::AddGlobalComponents(System.Xml.Schema.XmlSchema)
extern "C"  void XmlSchemaSet_AddGlobalComponents_m447214081 (XmlSchemaSet_t313318308 * __this, XmlSchema_t880472818 * ___schema0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSet::Contains(System.String)
extern "C"  bool XmlSchemaSet_Contains_m1190409001 (XmlSchemaSet_t313318308 * __this, String_t* ___targetNamespace0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSet::Contains(System.Xml.Schema.XmlSchema)
extern "C"  bool XmlSchemaSet_Contains_m552636402 (XmlSchemaSet_t313318308 * __this, XmlSchema_t880472818 * ___targetNamespace0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::CopyTo(System.Array,System.Int32)
extern "C"  void XmlSchemaSet_CopyTo_m817431561 (XmlSchemaSet_t313318308 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaSet::GetSafeNs(System.String)
extern "C"  String_t* XmlSchemaSet_GetSafeNs_m1561653057 (XmlSchemaSet_t313318308 * __this, String_t* ___ns0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSet::ResetCompile()
extern "C"  void XmlSchemaSet_ResetCompile_m1822144836 (XmlSchemaSet_t313318308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Schema.XmlSchemaSet::Schemas()
extern "C"  Il2CppObject * XmlSchemaSet_Schemas_m3177370376 (XmlSchemaSet_t313318308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Schema.XmlSchemaSet::Schemas(System.String)
extern "C"  Il2CppObject * XmlSchemaSet_Schemas_m2214101426 (XmlSchemaSet_t313318308 * __this, String_t* ___targetNamespace0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSet::MissedSubComponents(System.String)
extern "C"  bool XmlSchemaSet_MissedSubComponents_m2616455095 (XmlSchemaSet_t313318308 * __this, String_t* ___targetNamespace0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
