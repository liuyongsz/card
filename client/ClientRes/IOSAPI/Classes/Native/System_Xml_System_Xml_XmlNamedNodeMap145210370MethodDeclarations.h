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

// System.Xml.XmlNamedNodeMap
struct XmlNamedNodeMap_t145210370;
// System.Xml.XmlNode
struct XmlNode_t616554813;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNode616554813.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Xml.XmlNamedNodeMap::.ctor(System.Xml.XmlNode)
extern "C"  void XmlNamedNodeMap__ctor_m1439171130 (XmlNamedNodeMap_t145210370 * __this, XmlNode_t616554813 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamedNodeMap::.cctor()
extern "C"  void XmlNamedNodeMap__cctor_m3334495812 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.XmlNamedNodeMap::get_NodeList()
extern "C"  ArrayList_t4252133567 * XmlNamedNodeMap_get_NodeList_m2586570200 (XmlNamedNodeMap_t145210370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlNamedNodeMap::get_Count()
extern "C"  int32_t XmlNamedNodeMap_get_Count_m3703720931 (XmlNamedNodeMap_t145210370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Xml.XmlNamedNodeMap::GetEnumerator()
extern "C"  Il2CppObject * XmlNamedNodeMap_GetEnumerator_m1463535095 (XmlNamedNodeMap_t145210370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::GetNamedItem(System.String)
extern "C"  XmlNode_t616554813 * XmlNamedNodeMap_GetNamedItem_m1132410843 (XmlNamedNodeMap_t145210370 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::GetNamedItem(System.String,System.String)
extern "C"  XmlNode_t616554813 * XmlNamedNodeMap_GetNamedItem_m586188229 (XmlNamedNodeMap_t145210370 * __this, String_t* ___localName0, String_t* ___namespaceURI1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::RemoveNamedItem(System.String,System.String)
extern "C"  XmlNode_t616554813 * XmlNamedNodeMap_RemoveNamedItem_m450553113 (XmlNamedNodeMap_t145210370 * __this, String_t* ___localName0, String_t* ___namespaceURI1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::SetNamedItem(System.Xml.XmlNode)
extern "C"  XmlNode_t616554813 * XmlNamedNodeMap_SetNamedItem_m2980350708 (XmlNamedNodeMap_t145210370 * __this, XmlNode_t616554813 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::SetNamedItem(System.Xml.XmlNode,System.Int32,System.Boolean)
extern "C"  XmlNode_t616554813 * XmlNamedNodeMap_SetNamedItem_m3386233406 (XmlNamedNodeMap_t145210370 * __this, XmlNode_t616554813 * ___node0, int32_t ___pos1, bool ___raiseEvent2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.XmlNamedNodeMap::get_Nodes()
extern "C"  ArrayList_t4252133567 * XmlNamedNodeMap_get_Nodes_m3895346457 (XmlNamedNodeMap_t145210370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
