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

// System.Xml.Schema.XmlSchemaCollection
struct XmlSchemaCollection_t3518500204;
// System.Xml.XmlNameTable
struct XmlNameTable_t1345805268;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t313318308;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Object
struct Il2CppObject;
// System.Xml.Schema.XmlSchemaCollectionEnumerator
struct XmlSchemaCollectionEnumerator_t1538181312;
// System.Xml.Schema.ValidationEventArgs
struct ValidationEventArgs_t1577905814;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNameTable1345805268.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet313318308.h"
#include "mscorlib_System_Array3829468939.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Xml_System_Xml_Schema_ValidationEventArgs1577905814.h"

// System.Void System.Xml.Schema.XmlSchemaCollection::.ctor(System.Xml.XmlNameTable)
extern "C"  void XmlSchemaCollection__ctor_m4096888748 (XmlSchemaCollection_t3518500204 * __this, XmlNameTable_t1345805268 * ___nameTable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaCollection::.ctor(System.Xml.Schema.XmlSchemaSet)
extern "C"  void XmlSchemaCollection__ctor_m1133926657 (XmlSchemaCollection_t3518500204 * __this, XmlSchemaSet_t313318308 * ___schemaSet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaCollection::System.Collections.ICollection.get_Count()
extern "C"  int32_t XmlSchemaCollection_System_Collections_ICollection_get_Count_m1888700565 (XmlSchemaCollection_t3518500204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void XmlSchemaCollection_System_Collections_ICollection_CopyTo_m1625227336 (XmlSchemaCollection_t3518500204 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaCollection::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool XmlSchemaCollection_System_Collections_ICollection_get_IsSynchronized_m423318334 (XmlSchemaCollection_t3518500204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Xml.Schema.XmlSchemaCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * XmlSchemaCollection_System_Collections_IEnumerable_GetEnumerator_m2059563369 (XmlSchemaCollection_t3518500204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaCollection::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * XmlSchemaCollection_System_Collections_ICollection_get_SyncRoot_m4076677278 (XmlSchemaCollection_t3518500204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSet System.Xml.Schema.XmlSchemaCollection::get_SchemaSet()
extern "C"  XmlSchemaSet_t313318308 * XmlSchemaCollection_get_SchemaSet_m2073125170 (XmlSchemaCollection_t3518500204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaCollection::get_Count()
extern "C"  int32_t XmlSchemaCollection_get_Count_m2440745306 (XmlSchemaCollection_t3518500204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaCollectionEnumerator System.Xml.Schema.XmlSchemaCollection::GetEnumerator()
extern "C"  XmlSchemaCollectionEnumerator_t1538181312 * XmlSchemaCollection_GetEnumerator_m1019785948 (XmlSchemaCollection_t3518500204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaCollection::OnValidationError(System.Object,System.Xml.Schema.ValidationEventArgs)
extern "C"  void XmlSchemaCollection_OnValidationError_m706555727 (XmlSchemaCollection_t3518500204 * __this, Il2CppObject * ___o0, ValidationEventArgs_t1577905814 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
