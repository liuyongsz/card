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

// Mono.Xml.Schema.XsdKeyEntryField
struct XsdKeyEntryField_t3632833996;
// Mono.Xml.Schema.XsdKeyEntry
struct XsdKeyEntry_t3532015222;
// Mono.Xml.Schema.XsdIdentityField
struct XsdIdentityField_t2563516441;
// System.Object
struct Il2CppObject;
// Mono.Xml.Schema.XsdAnySimpleType
struct XsdAnySimpleType_t1096449895;
// System.Xml.IXmlLineInfo
struct IXmlLineInfo_t135184468;
// Mono.Xml.Schema.XsdIdentityPath
struct XsdIdentityPath_t2037874;
// System.Xml.XmlNameTable
struct XmlNameTable_t1345805268;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.String
struct String_t;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3928241465;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_Schema_XsdKeyEntry3532015222.h"
#include "System_Xml_Mono_Xml_Schema_XsdIdentityField2563516441.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Xml_Mono_Xml_Schema_XsdAnySimpleType1096449895.h"
#include "System_Xml_System_Xml_XmlNameTable1345805268.h"
#include "mscorlib_System_Collections_ArrayList4252133567.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Mono.Xml.Schema.XsdKeyEntryField::.ctor(Mono.Xml.Schema.XsdKeyEntry,Mono.Xml.Schema.XsdIdentityField)
extern "C"  void XsdKeyEntryField__ctor_m2530912833 (XsdKeyEntryField_t3632833996 * __this, XsdKeyEntry_t3532015222 * ___entry0, XsdIdentityField_t2563516441 * ___field1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdKeyEntryField::SetIdentityField(System.Object,System.Boolean,Mono.Xml.Schema.XsdAnySimpleType,System.Int32,System.Xml.IXmlLineInfo)
extern "C"  bool XsdKeyEntryField_SetIdentityField_m716047290 (XsdKeyEntryField_t3632833996 * __this, Il2CppObject * ___identity0, bool ___isXsiNil1, XsdAnySimpleType_t1096449895 * ___type2, int32_t ___depth3, Il2CppObject * ___li4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentityPath Mono.Xml.Schema.XsdKeyEntryField::Matches(System.Boolean,System.Object,System.Xml.XmlNameTable,System.Collections.ArrayList,System.String,System.Object,System.Xml.IXmlNamespaceResolver,System.Xml.IXmlLineInfo,System.Int32,System.String,System.String,System.Object)
extern "C"  XsdIdentityPath_t2037874 * XsdKeyEntryField_Matches_m4154030365 (XsdKeyEntryField_t3632833996 * __this, bool ___matchesAttr0, Il2CppObject * ___sender1, XmlNameTable_t1345805268 * ___nameTable2, ArrayList_t4252133567 * ___qnameStack3, String_t* ___sourceUri4, Il2CppObject * ___schemaType5, Il2CppObject * ___nsResolver6, Il2CppObject * ___lineInfo7, int32_t ___depth8, String_t* ___attrName9, String_t* ___attrNS10, Il2CppObject * ___attrValue11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdKeyEntryField::FillAttributeFieldValue(System.Object,System.Xml.XmlNameTable,System.String,System.Object,System.Xml.IXmlNamespaceResolver,System.Object,System.Xml.IXmlLineInfo,System.Int32)
extern "C"  void XsdKeyEntryField_FillAttributeFieldValue_m1920739722 (XsdKeyEntryField_t3632833996 * __this, Il2CppObject * ___sender0, XmlNameTable_t1345805268 * ___nameTable1, String_t* ___sourceUri2, Il2CppObject * ___schemaType3, Il2CppObject * ___nsResolver4, Il2CppObject * ___identity5, Il2CppObject * ___lineInfo6, int32_t ___depth7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
