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

// System.Xml.XmlIteratorNodeList
struct XmlIteratorNodeList_t4166547161;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t3192332357;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Xml.XmlNode
struct XmlNode_t616554813;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_XPathNodeIterator3192332357.h"

// System.Void System.Xml.XmlIteratorNodeList::.ctor(System.Xml.XPath.XPathNodeIterator)
extern "C"  void XmlIteratorNodeList__ctor_m3242565740 (XmlIteratorNodeList_t4166547161 * __this, XPathNodeIterator_t3192332357 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlIteratorNodeList::get_Count()
extern "C"  int32_t XmlIteratorNodeList_get_Count_m3218127158 (XmlIteratorNodeList_t4166547161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Xml.XmlIteratorNodeList::GetEnumerator()
extern "C"  Il2CppObject * XmlIteratorNodeList_GetEnumerator_m3708556302 (XmlIteratorNodeList_t4166547161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlIteratorNodeList::Item(System.Int32)
extern "C"  XmlNode_t616554813 * XmlIteratorNodeList_Item_m2886221704 (XmlIteratorNodeList_t4166547161 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
