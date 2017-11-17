#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.ArrayList
struct ArrayList_t4252133567;

#include "System_Xml_System_Xml_XPath_BaseIterator2454437973.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.SortedIterator
struct  SortedIterator_t3199707209  : public BaseIterator_t2454437973
{
public:
	// System.Collections.ArrayList System.Xml.XPath.SortedIterator::list
	ArrayList_t4252133567 * ___list_3;

public:
	inline static int32_t get_offset_of_list_3() { return static_cast<int32_t>(offsetof(SortedIterator_t3199707209, ___list_3)); }
	inline ArrayList_t4252133567 * get_list_3() const { return ___list_3; }
	inline ArrayList_t4252133567 ** get_address_of_list_3() { return &___list_3; }
	inline void set_list_3(ArrayList_t4252133567 * value)
	{
		___list_3 = value;
		Il2CppCodeGenWriteBarrier(&___list_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
