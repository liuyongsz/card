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

// System.Xml.XPath.AttributeIterator
struct AttributeIterator_t2403056388;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t2454437973;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t3192332357;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"
#include "System_Xml_System_Xml_XPath_AttributeIterator2403056388.h"

// System.Void System.Xml.XPath.AttributeIterator::.ctor(System.Xml.XPath.BaseIterator)
extern "C"  void AttributeIterator__ctor_m4066647194 (AttributeIterator_t2403056388 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.AttributeIterator::.ctor(System.Xml.XPath.AttributeIterator)
extern "C"  void AttributeIterator__ctor_m3467311593 (AttributeIterator_t2403056388 * __this, AttributeIterator_t2403056388 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.AttributeIterator::Clone()
extern "C"  XPathNodeIterator_t3192332357 * AttributeIterator_Clone_m74047088 (AttributeIterator_t2403056388 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.AttributeIterator::MoveNextCore()
extern "C"  bool AttributeIterator_MoveNextCore_m3987350797 (AttributeIterator_t2403056388 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
