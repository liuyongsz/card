#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t1642385972;
// System.Collections.Generic.List`1<System.String[]>
struct List_1_t1011507104;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TableParser/TableStore
struct  TableStore_t1976534993  : public Il2CppObject
{
public:
	// System.String[] TableParser/TableStore::header
	StringU5BU5D_t1642385972* ___header_0;
	// System.String[] TableParser/TableStore::desc
	StringU5BU5D_t1642385972* ___desc_1;
	// System.Collections.Generic.List`1<System.String[]> TableParser/TableStore::contents
	List_1_t1011507104 * ___contents_2;

public:
	inline static int32_t get_offset_of_header_0() { return static_cast<int32_t>(offsetof(TableStore_t1976534993, ___header_0)); }
	inline StringU5BU5D_t1642385972* get_header_0() const { return ___header_0; }
	inline StringU5BU5D_t1642385972** get_address_of_header_0() { return &___header_0; }
	inline void set_header_0(StringU5BU5D_t1642385972* value)
	{
		___header_0 = value;
		Il2CppCodeGenWriteBarrier(&___header_0, value);
	}

	inline static int32_t get_offset_of_desc_1() { return static_cast<int32_t>(offsetof(TableStore_t1976534993, ___desc_1)); }
	inline StringU5BU5D_t1642385972* get_desc_1() const { return ___desc_1; }
	inline StringU5BU5D_t1642385972** get_address_of_desc_1() { return &___desc_1; }
	inline void set_desc_1(StringU5BU5D_t1642385972* value)
	{
		___desc_1 = value;
		Il2CppCodeGenWriteBarrier(&___desc_1, value);
	}

	inline static int32_t get_offset_of_contents_2() { return static_cast<int32_t>(offsetof(TableStore_t1976534993, ___contents_2)); }
	inline List_1_t1011507104 * get_contents_2() const { return ___contents_2; }
	inline List_1_t1011507104 ** get_address_of_contents_2() { return &___contents_2; }
	inline void set_contents_2(List_1_t1011507104 * value)
	{
		___contents_2 = value;
		Il2CppCodeGenWriteBarrier(&___contents_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
