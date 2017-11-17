#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Config/NoticeInfo
struct  NoticeInfo_t2608510023  : public Il2CppObject
{
public:
	// System.String Config/NoticeInfo::strText
	String_t* ___strText_0;
	// System.Int32 Config/NoticeInfo::iIndex
	int32_t ___iIndex_1;

public:
	inline static int32_t get_offset_of_strText_0() { return static_cast<int32_t>(offsetof(NoticeInfo_t2608510023, ___strText_0)); }
	inline String_t* get_strText_0() const { return ___strText_0; }
	inline String_t** get_address_of_strText_0() { return &___strText_0; }
	inline void set_strText_0(String_t* value)
	{
		___strText_0 = value;
		Il2CppCodeGenWriteBarrier(&___strText_0, value);
	}

	inline static int32_t get_offset_of_iIndex_1() { return static_cast<int32_t>(offsetof(NoticeInfo_t2608510023, ___iIndex_1)); }
	inline int32_t get_iIndex_1() const { return ___iIndex_1; }
	inline int32_t* get_address_of_iIndex_1() { return &___iIndex_1; }
	inline void set_iIndex_1(int32_t value)
	{
		___iIndex_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
