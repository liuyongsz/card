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

// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t3364835593;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t2050913741;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t1944712516;
// System.Collections.ICollection
struct ICollection_t91669223;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t259680273;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlQualifiedName1944712516.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject2050913741.h"

// System.Void System.Xml.Schema.XmlSchemaObjectTable::.ctor()
extern "C"  void XmlSchemaObjectTable__ctor_m3056203773 (XmlSchemaObjectTable_t3364835593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaObjectTable::get_Item(System.Xml.XmlQualifiedName)
extern "C"  XmlSchemaObject_t2050913741 * XmlSchemaObjectTable_get_Item_m2036694478 (XmlSchemaObjectTable_t3364835593 * __this, XmlQualifiedName_t1944712516 * ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Schema.XmlSchemaObjectTable::get_Names()
extern "C"  Il2CppObject * XmlSchemaObjectTable_get_Names_m2653408148 (XmlSchemaObjectTable_t3364835593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Schema.XmlSchemaObjectTable::get_Values()
extern "C"  Il2CppObject * XmlSchemaObjectTable_get_Values_m1039657836 (XmlSchemaObjectTable_t3364835593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaObjectTable::Contains(System.Xml.XmlQualifiedName)
extern "C"  bool XmlSchemaObjectTable_Contains_m1479282534 (XmlSchemaObjectTable_t3364835593 * __this, XmlQualifiedName_t1944712516 * ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Xml.Schema.XmlSchemaObjectTable::GetEnumerator()
extern "C"  Il2CppObject * XmlSchemaObjectTable_GetEnumerator_m1580976009 (XmlSchemaObjectTable_t3364835593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectTable::Add(System.Xml.XmlQualifiedName,System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaObjectTable_Add_m925084110 (XmlSchemaObjectTable_t3364835593 * __this, XmlQualifiedName_t1944712516 * ___name0, XmlSchemaObject_t2050913741 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectTable::Clear()
extern "C"  void XmlSchemaObjectTable_Clear_m2854563720 (XmlSchemaObjectTable_t3364835593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectTable::Set(System.Xml.XmlQualifiedName,System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaObjectTable_Set_m1645146501 (XmlSchemaObjectTable_t3364835593 * __this, XmlQualifiedName_t1944712516 * ___name0, XmlSchemaObject_t2050913741 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
