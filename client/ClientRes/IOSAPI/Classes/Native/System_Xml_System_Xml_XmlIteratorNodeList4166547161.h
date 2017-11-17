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
// System.Collections.ArrayList
struct ArrayList_t4252133567;

#include "System_Xml_System_Xml_XmlNodeList497326455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlIteratorNodeList
struct  XmlIteratorNodeList_t4166547161  : public XmlNodeList_t497326455
{
public:
	// System.Xml.XPath.XPathNodeIterator System.Xml.XmlIteratorNodeList::source
	XPathNodeIterator_t3192332357 * ___source_0;
	// System.Xml.XPath.XPathNodeIterator System.Xml.XmlIteratorNodeList::iterator
	XPathNodeIterator_t3192332357 * ___iterator_1;
	// System.Collections.ArrayList System.Xml.XmlIteratorNodeList::list
	ArrayList_t4252133567 * ___list_2;
	// System.Boolean System.Xml.XmlIteratorNodeList::finished
	bool ___finished_3;

public:
	inline static int32_t get_offset_of_source_0() { return static_cast<int32_t>(offsetof(XmlIteratorNodeList_t4166547161, ___source_0)); }
	inline XPathNodeIterator_t3192332357 * get_source_0() const { return ___source_0; }
	inline XPathNodeIterator_t3192332357 ** get_address_of_source_0() { return &___source_0; }
	inline void set_source_0(XPathNodeIterator_t3192332357 * value)
	{
		___source_0 = value;
		Il2CppCodeGenWriteBarrier(&___source_0, value);
	}

	inline static int32_t get_offset_of_iterator_1() { return static_cast<int32_t>(offsetof(XmlIteratorNodeList_t4166547161, ___iterator_1)); }
	inline XPathNodeIterator_t3192332357 * get_iterator_1() const { return ___iterator_1; }
	inline XPathNodeIterator_t3192332357 ** get_address_of_iterator_1() { return &___iterator_1; }
	inline void set_iterator_1(XPathNodeIterator_t3192332357 * value)
	{
		___iterator_1 = value;
		Il2CppCodeGenWriteBarrier(&___iterator_1, value);
	}

	inline static int32_t get_offset_of_list_2() { return static_cast<int32_t>(offsetof(XmlIteratorNodeList_t4166547161, ___list_2)); }
	inline ArrayList_t4252133567 * get_list_2() const { return ___list_2; }
	inline ArrayList_t4252133567 ** get_address_of_list_2() { return &___list_2; }
	inline void set_list_2(ArrayList_t4252133567 * value)
	{
		___list_2 = value;
		Il2CppCodeGenWriteBarrier(&___list_2, value);
	}

	inline static int32_t get_offset_of_finished_3() { return static_cast<int32_t>(offsetof(XmlIteratorNodeList_t4166547161, ___finished_3)); }
	inline bool get_finished_3() const { return ___finished_3; }
	inline bool* get_address_of_finished_3() { return &___finished_3; }
	inline void set_finished_3(bool value)
	{
		___finished_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
