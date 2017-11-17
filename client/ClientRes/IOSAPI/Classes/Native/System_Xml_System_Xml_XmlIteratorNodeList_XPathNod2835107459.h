#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t3192332357;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlIteratorNodeList/XPathNodeIteratorNodeListIterator
struct  XPathNodeIteratorNodeListIterator_t2835107459  : public Il2CppObject
{
public:
	// System.Xml.XPath.XPathNodeIterator System.Xml.XmlIteratorNodeList/XPathNodeIteratorNodeListIterator::iter
	XPathNodeIterator_t3192332357 * ___iter_0;
	// System.Xml.XPath.XPathNodeIterator System.Xml.XmlIteratorNodeList/XPathNodeIteratorNodeListIterator::source
	XPathNodeIterator_t3192332357 * ___source_1;

public:
	inline static int32_t get_offset_of_iter_0() { return static_cast<int32_t>(offsetof(XPathNodeIteratorNodeListIterator_t2835107459, ___iter_0)); }
	inline XPathNodeIterator_t3192332357 * get_iter_0() const { return ___iter_0; }
	inline XPathNodeIterator_t3192332357 ** get_address_of_iter_0() { return &___iter_0; }
	inline void set_iter_0(XPathNodeIterator_t3192332357 * value)
	{
		___iter_0 = value;
		Il2CppCodeGenWriteBarrier(&___iter_0, value);
	}

	inline static int32_t get_offset_of_source_1() { return static_cast<int32_t>(offsetof(XPathNodeIteratorNodeListIterator_t2835107459, ___source_1)); }
	inline XPathNodeIterator_t3192332357 * get_source_1() const { return ___source_1; }
	inline XPathNodeIterator_t3192332357 ** get_address_of_source_1() { return &___source_1; }
	inline void set_source_1(XPathNodeIterator_t3192332357 * value)
	{
		___source_1 = value;
		Il2CppCodeGenWriteBarrier(&___source_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
