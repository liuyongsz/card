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
// live2d.Value
struct Value_t2003474955;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// live2d.Json
struct  Json_t357458016  : public Il2CppObject
{
public:
	// System.Char[] live2d.Json::buf
	CharU5BU5D_t1328083999* ___buf_0;
	// System.Int32 live2d.Json::len
	int32_t ___len_1;
	// System.Int32 live2d.Json::line_count
	int32_t ___line_count_2;
	// live2d.Value live2d.Json::root
	Value_t2003474955 * ___root_3;

public:
	inline static int32_t get_offset_of_buf_0() { return static_cast<int32_t>(offsetof(Json_t357458016, ___buf_0)); }
	inline CharU5BU5D_t1328083999* get_buf_0() const { return ___buf_0; }
	inline CharU5BU5D_t1328083999** get_address_of_buf_0() { return &___buf_0; }
	inline void set_buf_0(CharU5BU5D_t1328083999* value)
	{
		___buf_0 = value;
		Il2CppCodeGenWriteBarrier(&___buf_0, value);
	}

	inline static int32_t get_offset_of_len_1() { return static_cast<int32_t>(offsetof(Json_t357458016, ___len_1)); }
	inline int32_t get_len_1() const { return ___len_1; }
	inline int32_t* get_address_of_len_1() { return &___len_1; }
	inline void set_len_1(int32_t value)
	{
		___len_1 = value;
	}

	inline static int32_t get_offset_of_line_count_2() { return static_cast<int32_t>(offsetof(Json_t357458016, ___line_count_2)); }
	inline int32_t get_line_count_2() const { return ___line_count_2; }
	inline int32_t* get_address_of_line_count_2() { return &___line_count_2; }
	inline void set_line_count_2(int32_t value)
	{
		___line_count_2 = value;
	}

	inline static int32_t get_offset_of_root_3() { return static_cast<int32_t>(offsetof(Json_t357458016, ___root_3)); }
	inline Value_t2003474955 * get_root_3() const { return ___root_3; }
	inline Value_t2003474955 ** get_address_of_root_3() { return &___root_3; }
	inline void set_root_3(Value_t2003474955 * value)
	{
		___root_3 = value;
		Il2CppCodeGenWriteBarrier(&___root_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
