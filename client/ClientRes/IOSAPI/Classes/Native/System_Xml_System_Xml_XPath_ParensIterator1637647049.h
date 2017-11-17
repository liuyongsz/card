#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XPath.BaseIterator
struct BaseIterator_t2454437973;

#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ParensIterator
struct  ParensIterator_t1637647049  : public BaseIterator_t2454437973
{
public:
	// System.Xml.XPath.BaseIterator System.Xml.XPath.ParensIterator::_iter
	BaseIterator_t2454437973 * ____iter_3;

public:
	inline static int32_t get_offset_of__iter_3() { return static_cast<int32_t>(offsetof(ParensIterator_t1637647049, ____iter_3)); }
	inline BaseIterator_t2454437973 * get__iter_3() const { return ____iter_3; }
	inline BaseIterator_t2454437973 ** get_address_of__iter_3() { return &____iter_3; }
	inline void set__iter_3(BaseIterator_t2454437973 * value)
	{
		____iter_3 = value;
		Il2CppCodeGenWriteBarrier(&____iter_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
