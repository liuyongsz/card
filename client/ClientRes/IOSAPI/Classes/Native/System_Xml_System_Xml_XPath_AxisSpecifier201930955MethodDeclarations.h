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

// System.Xml.XPath.AxisSpecifier
struct AxisSpecifier_t201930955;
// System.String
struct String_t;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t2454437973;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_Axes2027048019.h"
#include "System_Xml_System_Xml_XPath_XPathNodeType817388867.h"
#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"

// System.Void System.Xml.XPath.AxisSpecifier::.ctor(System.Xml.XPath.Axes)
extern "C"  void AxisSpecifier__ctor_m1665857989 (AxisSpecifier_t201930955 * __this, int32_t ___axis0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeType System.Xml.XPath.AxisSpecifier::get_NodeType()
extern "C"  int32_t AxisSpecifier_get_NodeType_m4007321101 (AxisSpecifier_t201930955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.AxisSpecifier::ToString()
extern "C"  String_t* AxisSpecifier_ToString_m1212875126 (AxisSpecifier_t201930955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.Axes System.Xml.XPath.AxisSpecifier::get_Axis()
extern "C"  int32_t AxisSpecifier_get_Axis_m912459604 (AxisSpecifier_t201930955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.BaseIterator System.Xml.XPath.AxisSpecifier::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  BaseIterator_t2454437973 * AxisSpecifier_Evaluate_m1982812457 (AxisSpecifier_t201930955 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
