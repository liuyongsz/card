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

// System.Xml.XPath.XPathSorters
struct XPathSorters_t4019574815;
// System.Object
struct Il2CppObject;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t2454437973;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3928241465;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"
#include "mscorlib_System_Collections_ArrayList4252133567.h"

// System.Int32 System.Xml.XPath.XPathSorters::System.Collections.IComparer.Compare(System.Object,System.Object)
extern "C"  int32_t XPathSorters_System_Collections_IComparer_Compare_m845991242 (XPathSorters_t4019574815 * __this, Il2CppObject * ___o10, Il2CppObject * ___o21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.BaseIterator System.Xml.XPath.XPathSorters::Sort(System.Xml.XPath.BaseIterator)
extern "C"  BaseIterator_t2454437973 * XPathSorters_Sort_m3354109990 (XPathSorters_t4019574815 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.XPath.XPathSorters::ToSortElementList(System.Xml.XPath.BaseIterator)
extern "C"  ArrayList_t4252133567 * XPathSorters_ToSortElementList_m407179934 (XPathSorters_t4019574815 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.BaseIterator System.Xml.XPath.XPathSorters::Sort(System.Collections.ArrayList,System.Xml.IXmlNamespaceResolver)
extern "C"  BaseIterator_t2454437973 * XPathSorters_Sort_m3271859196 (XPathSorters_t4019574815 * __this, ArrayList_t4252133567 * ___rgElts0, Il2CppObject * ___nsm1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
