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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathSorters
struct  XPathSorters_t4019574815  : public Il2CppObject
{
public:
	// System.Collections.ArrayList System.Xml.XPath.XPathSorters::_rgSorters
	ArrayList_t4252133567 * ____rgSorters_0;

public:
	inline static int32_t get_offset_of__rgSorters_0() { return static_cast<int32_t>(offsetof(XPathSorters_t4019574815, ____rgSorters_0)); }
	inline ArrayList_t4252133567 * get__rgSorters_0() const { return ____rgSorters_0; }
	inline ArrayList_t4252133567 ** get_address_of__rgSorters_0() { return &____rgSorters_0; }
	inline void set__rgSorters_0(ArrayList_t4252133567 * value)
	{
		____rgSorters_0 = value;
		Il2CppCodeGenWriteBarrier(&____rgSorters_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
