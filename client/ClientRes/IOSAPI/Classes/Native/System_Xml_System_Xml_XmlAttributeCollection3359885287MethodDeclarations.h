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

// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_t3359885287;
// System.Xml.XmlNode
struct XmlNode_t616554813;
// System.Object
struct Il2CppObject;
// System.Array
struct Il2CppArray;
// System.Xml.XmlAttribute
struct XmlAttribute_t175731005;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNode616554813.h"
#include "mscorlib_System_Array3829468939.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_XmlAttribute175731005.h"

// System.Void System.Xml.XmlAttributeCollection::.ctor(System.Xml.XmlNode)
extern "C"  void XmlAttributeCollection__ctor_m1553454851 (XmlAttributeCollection_t3359885287 * __this, XmlNode_t616554813 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlAttributeCollection::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool XmlAttributeCollection_System_Collections_ICollection_get_IsSynchronized_m197325354 (XmlAttributeCollection_t3359885287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XmlAttributeCollection::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * XmlAttributeCollection_System_Collections_ICollection_get_SyncRoot_m3415810582 (XmlAttributeCollection_t3359885287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttributeCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void XmlAttributeCollection_System_Collections_ICollection_CopyTo_m991882444 (XmlAttributeCollection_t3359885287 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlAttributeCollection::get_IsReadOnly()
extern "C"  bool XmlAttributeCollection_get_IsReadOnly_m1820463207 (XmlAttributeCollection_t3359885287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlAttributeCollection::get_ItemOf(System.String)
extern "C"  XmlAttribute_t175731005 * XmlAttributeCollection_get_ItemOf_m2084104187 (XmlAttributeCollection_t3359885287 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlAttributeCollection::get_ItemOf(System.Int32)
extern "C"  XmlAttribute_t175731005 * XmlAttributeCollection_get_ItemOf_m177692376 (XmlAttributeCollection_t3359885287 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlAttributeCollection::get_ItemOf(System.String,System.String)
extern "C"  XmlAttribute_t175731005 * XmlAttributeCollection_get_ItemOf_m832735469 (XmlAttributeCollection_t3359885287 * __this, String_t* ___localName0, String_t* ___namespaceURI1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlAttributeCollection::Remove(System.Xml.XmlAttribute)
extern "C"  XmlAttribute_t175731005 * XmlAttributeCollection_Remove_m3813259959 (XmlAttributeCollection_t3359885287 * __this, XmlAttribute_t175731005 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttributeCollection::RemoveAll()
extern "C"  void XmlAttributeCollection_RemoveAll_m1569676469 (XmlAttributeCollection_t3359885287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttributeCollection::SetNamedItem(System.Xml.XmlNode)
extern "C"  XmlNode_t616554813 * XmlAttributeCollection_SetNamedItem_m4075586749 (XmlAttributeCollection_t3359885287 * __this, XmlNode_t616554813 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttributeCollection::AdjustIdenticalAttributes(System.Xml.XmlAttribute,System.Xml.XmlNode)
extern "C"  void XmlAttributeCollection_AdjustIdenticalAttributes_m3978819537 (XmlAttributeCollection_t3359885287 * __this, XmlAttribute_t175731005 * ___node0, XmlNode_t616554813 * ___existing1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttributeCollection::RemoveIdenticalAttribute(System.Xml.XmlNode)
extern "C"  XmlNode_t616554813 * XmlAttributeCollection_RemoveIdenticalAttribute_m657940140 (XmlAttributeCollection_t3359885287 * __this, XmlNode_t616554813 * ___existing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
