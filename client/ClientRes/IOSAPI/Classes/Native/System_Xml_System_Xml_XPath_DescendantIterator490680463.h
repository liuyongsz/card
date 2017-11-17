#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "System_Xml_System_Xml_XPath_SimpleIterator833624542.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.DescendantIterator
struct  DescendantIterator_t490680463  : public SimpleIterator_t833624542
{
public:
	// System.Int32 System.Xml.XPath.DescendantIterator::_depth
	int32_t ____depth_6;
	// System.Boolean System.Xml.XPath.DescendantIterator::_finished
	bool ____finished_7;

public:
	inline static int32_t get_offset_of__depth_6() { return static_cast<int32_t>(offsetof(DescendantIterator_t490680463, ____depth_6)); }
	inline int32_t get__depth_6() const { return ____depth_6; }
	inline int32_t* get_address_of__depth_6() { return &____depth_6; }
	inline void set__depth_6(int32_t value)
	{
		____depth_6 = value;
	}

	inline static int32_t get_offset_of__finished_7() { return static_cast<int32_t>(offsetof(DescendantIterator_t490680463, ____finished_7)); }
	inline bool get__finished_7() const { return ____finished_7; }
	inline bool* get_address_of__finished_7() { return &____finished_7; }
	inline void set__finished_7(bool value)
	{
		____finished_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
