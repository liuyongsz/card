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

// Mono.Xml.Schema.XsdKeyTable
struct XsdKeyTable_t2980902100;
// System.Xml.Schema.XmlSchemaIdentityConstraint
struct XmlSchemaIdentityConstraint_t1058613623;
// Mono.Xml.Schema.XsdIdentitySelector
struct XsdIdentitySelector_t185499482;
// Mono.Xml.Schema.XsdIdentityPath
struct XsdIdentityPath_t2037874;
// System.Collections.ArrayList
struct ArrayList_t4252133567;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaIdentityCons1058613623.h"
#include "mscorlib_System_Collections_ArrayList4252133567.h"

// System.Void Mono.Xml.Schema.XsdKeyTable::.ctor(System.Xml.Schema.XmlSchemaIdentityConstraint)
extern "C"  void XsdKeyTable__ctor_m3808547814 (XsdKeyTable_t2980902100 * __this, XmlSchemaIdentityConstraint_t1058613623 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaIdentityConstraint Mono.Xml.Schema.XsdKeyTable::get_SourceSchemaIdentity()
extern "C"  XmlSchemaIdentityConstraint_t1058613623 * XsdKeyTable_get_SourceSchemaIdentity_m2469763964 (XsdKeyTable_t2980902100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentitySelector Mono.Xml.Schema.XsdKeyTable::get_Selector()
extern "C"  XsdIdentitySelector_t185499482 * XsdKeyTable_get_Selector_m2004045656 (XsdKeyTable_t2980902100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdKeyTable::Reset(System.Xml.Schema.XmlSchemaIdentityConstraint)
extern "C"  void XsdKeyTable_Reset_m2051768471 (XsdKeyTable_t2980902100 * __this, XmlSchemaIdentityConstraint_t1058613623 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentityPath Mono.Xml.Schema.XsdKeyTable::SelectorMatches(System.Collections.ArrayList,System.Int32)
extern "C"  XsdIdentityPath_t2037874 * XsdKeyTable_SelectorMatches_m4009879112 (XsdKeyTable_t2980902100 * __this, ArrayList_t4252133567 * ___qnameStack0, int32_t ___depth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
