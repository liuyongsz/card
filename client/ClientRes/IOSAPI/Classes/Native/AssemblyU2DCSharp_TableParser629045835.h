#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Char[]
struct CharU5BU5D_t1328083999;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TableParser
struct  TableParser_t629045835  : public Il2CppObject
{
public:

public:
};

struct TableParser_t629045835_StaticFields
{
public:
	// System.Char[] TableParser::strSplit
	CharU5BU5D_t1328083999* ___strSplit_0;
	// System.Char TableParser::chSpace
	Il2CppChar ___chSpace_1;

public:
	inline static int32_t get_offset_of_strSplit_0() { return static_cast<int32_t>(offsetof(TableParser_t629045835_StaticFields, ___strSplit_0)); }
	inline CharU5BU5D_t1328083999* get_strSplit_0() const { return ___strSplit_0; }
	inline CharU5BU5D_t1328083999** get_address_of_strSplit_0() { return &___strSplit_0; }
	inline void set_strSplit_0(CharU5BU5D_t1328083999* value)
	{
		___strSplit_0 = value;
		Il2CppCodeGenWriteBarrier(&___strSplit_0, value);
	}

	inline static int32_t get_offset_of_chSpace_1() { return static_cast<int32_t>(offsetof(TableParser_t629045835_StaticFields, ___chSpace_1)); }
	inline Il2CppChar get_chSpace_1() const { return ___chSpace_1; }
	inline Il2CppChar* get_address_of_chSpace_1() { return &___chSpace_1; }
	inline void set_chSpace_1(Il2CppChar value)
	{
		___chSpace_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
