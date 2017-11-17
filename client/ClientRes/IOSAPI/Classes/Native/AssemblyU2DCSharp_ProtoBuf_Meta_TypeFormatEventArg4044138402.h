#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;
// System.String
struct String_t;

#include "mscorlib_System_EventArgs3289624707.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Meta.TypeFormatEventArgs
struct  TypeFormatEventArgs_t4044138402  : public EventArgs_t3289624707
{
public:
	// System.Type ProtoBuf.Meta.TypeFormatEventArgs::type
	Type_t * ___type_1;
	// System.String ProtoBuf.Meta.TypeFormatEventArgs::formattedName
	String_t* ___formattedName_2;
	// System.Boolean ProtoBuf.Meta.TypeFormatEventArgs::typeFixed
	bool ___typeFixed_3;

public:
	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(TypeFormatEventArgs_t4044138402, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier(&___type_1, value);
	}

	inline static int32_t get_offset_of_formattedName_2() { return static_cast<int32_t>(offsetof(TypeFormatEventArgs_t4044138402, ___formattedName_2)); }
	inline String_t* get_formattedName_2() const { return ___formattedName_2; }
	inline String_t** get_address_of_formattedName_2() { return &___formattedName_2; }
	inline void set_formattedName_2(String_t* value)
	{
		___formattedName_2 = value;
		Il2CppCodeGenWriteBarrier(&___formattedName_2, value);
	}

	inline static int32_t get_offset_of_typeFixed_3() { return static_cast<int32_t>(offsetof(TypeFormatEventArgs_t4044138402, ___typeFixed_3)); }
	inline bool get_typeFixed_3() const { return ___typeFixed_3; }
	inline bool* get_address_of_typeFixed_3() { return &___typeFixed_3; }
	inline void set_typeFixed_3(bool value)
	{
		___typeFixed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
