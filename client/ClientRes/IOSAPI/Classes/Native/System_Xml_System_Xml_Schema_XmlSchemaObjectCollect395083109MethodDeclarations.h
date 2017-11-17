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

// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t395083109;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t2050913741;
// System.Xml.Schema.XmlSchemaObjectEnumerator
struct XmlSchemaObjectEnumerator_t2354997415;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject2050913741.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Xml.Schema.XmlSchemaObjectCollection::.ctor()
extern "C"  void XmlSchemaObjectCollection__ctor_m1110957957 (XmlSchemaObjectCollection_t395083109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectCollection::.ctor(System.Xml.Schema.XmlSchemaObject)
extern "C"  void XmlSchemaObjectCollection__ctor_m1941444399 (XmlSchemaObjectCollection_t395083109 * __this, XmlSchemaObject_t2050913741 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaObjectCollection::get_Item(System.Int32)
extern "C"  XmlSchemaObject_t2050913741 * XmlSchemaObjectCollection_get_Item_m971890469 (XmlSchemaObjectCollection_t395083109 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaObjectCollection::Add(System.Xml.Schema.XmlSchemaObject)
extern "C"  int32_t XmlSchemaObjectCollection_Add_m1540383378 (XmlSchemaObjectCollection_t395083109 * __this, XmlSchemaObject_t2050913741 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaObjectCollection::Contains(System.Xml.Schema.XmlSchemaObject)
extern "C"  bool XmlSchemaObjectCollection_Contains_m984801564 (XmlSchemaObjectCollection_t395083109 * __this, XmlSchemaObject_t2050913741 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectEnumerator System.Xml.Schema.XmlSchemaObjectCollection::GetEnumerator()
extern "C"  XmlSchemaObjectEnumerator_t2354997415 * XmlSchemaObjectCollection_GetEnumerator_m1015760060 (XmlSchemaObjectCollection_t395083109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectCollection::OnClear()
extern "C"  void XmlSchemaObjectCollection_OnClear_m2560364073 (XmlSchemaObjectCollection_t395083109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectCollection::OnInsert(System.Int32,System.Object)
extern "C"  void XmlSchemaObjectCollection_OnInsert_m3974649934 (XmlSchemaObjectCollection_t395083109 * __this, int32_t ___index0, Il2CppObject * ___item1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectCollection::OnRemove(System.Int32,System.Object)
extern "C"  void XmlSchemaObjectCollection_OnRemove_m3156398749 (XmlSchemaObjectCollection_t395083109 * __this, int32_t ___index0, Il2CppObject * ___item1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectCollection::OnSet(System.Int32,System.Object,System.Object)
extern "C"  void XmlSchemaObjectCollection_OnSet_m2666621551 (XmlSchemaObjectCollection_t395083109 * __this, int32_t ___index0, Il2CppObject * ___oldValue1, Il2CppObject * ___newValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
