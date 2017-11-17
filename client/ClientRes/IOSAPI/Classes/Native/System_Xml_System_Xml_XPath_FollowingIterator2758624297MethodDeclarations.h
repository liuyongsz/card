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

// System.Xml.XPath.FollowingIterator
struct FollowingIterator_t2758624297;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t2454437973;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t3192332357;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"
#include "System_Xml_System_Xml_XPath_FollowingIterator2758624297.h"

// System.Void System.Xml.XPath.FollowingIterator::.ctor(System.Xml.XPath.BaseIterator)
extern "C"  void FollowingIterator__ctor_m3815114529 (FollowingIterator_t2758624297 * __this, BaseIterator_t2454437973 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.FollowingIterator::.ctor(System.Xml.XPath.FollowingIterator)
extern "C"  void FollowingIterator__ctor_m509424521 (FollowingIterator_t2758624297 * __this, FollowingIterator_t2758624297 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.FollowingIterator::Clone()
extern "C"  XPathNodeIterator_t3192332357 * FollowingIterator_Clone_m655730093 (FollowingIterator_t2758624297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.FollowingIterator::MoveNextCore()
extern "C"  bool FollowingIterator_MoveNextCore_m178934008 (FollowingIterator_t2758624297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
