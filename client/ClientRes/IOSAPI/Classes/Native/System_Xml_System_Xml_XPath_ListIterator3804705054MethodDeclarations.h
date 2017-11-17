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

// System.Xml.XPath.ListIterator
struct ListIterator_t3804705054;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t2454437973;
// System.Collections.IList
struct IList_t3321498491;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3928241465;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t3192332357;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t3981235968;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"
#include "System_Xml_System_Xml_XPath_ListIterator3804705054.h"

// System.Void System.Xml.XPath.ListIterator::.ctor(System.Xml.XPath.BaseIterator,System.Collections.IList)
extern "C"  void ListIterator__ctor_m3877910109 (ListIterator_t3804705054 * __this, BaseIterator_t2454437973 * ___iter0, Il2CppObject * ___list1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.ListIterator::.ctor(System.Collections.IList,System.Xml.IXmlNamespaceResolver)
extern "C"  void ListIterator__ctor_m1817971076 (ListIterator_t3804705054 * __this, Il2CppObject * ___list0, Il2CppObject * ___nsm1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.ListIterator::.ctor(System.Xml.XPath.ListIterator)
extern "C"  void ListIterator__ctor_m448838369 (ListIterator_t3804705054 * __this, ListIterator_t3804705054 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.ListIterator::Clone()
extern "C"  XPathNodeIterator_t3192332357 * ListIterator_Clone_m1632161528 (ListIterator_t3804705054 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ListIterator::MoveNextCore()
extern "C"  bool ListIterator_MoveNextCore_m1530505859 (ListIterator_t3804705054 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNavigator System.Xml.XPath.ListIterator::get_Current()
extern "C"  XPathNavigator_t3981235968 * ListIterator_get_Current_m3858044268 (ListIterator_t3804705054 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XPath.ListIterator::get_Count()
extern "C"  int32_t ListIterator_get_Count_m1051828176 (ListIterator_t3804705054 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
