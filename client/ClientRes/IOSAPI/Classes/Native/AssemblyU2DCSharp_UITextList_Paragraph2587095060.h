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
// System.String[]
struct StringU5BU5D_t1642385972;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UITextList/Paragraph
struct  Paragraph_t2587095060  : public Il2CppObject
{
public:
	// System.String UITextList/Paragraph::text
	String_t* ___text_0;
	// System.String[] UITextList/Paragraph::lines
	StringU5BU5D_t1642385972* ___lines_1;

public:
	inline static int32_t get_offset_of_text_0() { return static_cast<int32_t>(offsetof(Paragraph_t2587095060, ___text_0)); }
	inline String_t* get_text_0() const { return ___text_0; }
	inline String_t** get_address_of_text_0() { return &___text_0; }
	inline void set_text_0(String_t* value)
	{
		___text_0 = value;
		Il2CppCodeGenWriteBarrier(&___text_0, value);
	}

	inline static int32_t get_offset_of_lines_1() { return static_cast<int32_t>(offsetof(Paragraph_t2587095060, ___lines_1)); }
	inline StringU5BU5D_t1642385972* get_lines_1() const { return ___lines_1; }
	inline StringU5BU5D_t1642385972** get_address_of_lines_1() { return &___lines_1; }
	inline void set_lines_1(StringU5BU5D_t1642385972* value)
	{
		___lines_1 = value;
		Il2CppCodeGenWriteBarrier(&___lines_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
