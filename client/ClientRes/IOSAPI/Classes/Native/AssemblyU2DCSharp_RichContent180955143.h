#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_RichEnum989386705.h"
#include "AssemblyU2DCSharp_LinkType3478309428.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RichContent
struct  RichContent_t180955143  : public Il2CppObject
{
public:
	// RichEnum RichContent::richtype
	int32_t ___richtype_0;
	// LinkType RichContent::linktype
	int32_t ___linktype_1;
	// System.Object[] RichContent::args
	ObjectU5BU5D_t3614634134* ___args_2;
	// System.String RichContent::content
	String_t* ___content_3;
	// System.String RichContent::color
	String_t* ___color_4;

public:
	inline static int32_t get_offset_of_richtype_0() { return static_cast<int32_t>(offsetof(RichContent_t180955143, ___richtype_0)); }
	inline int32_t get_richtype_0() const { return ___richtype_0; }
	inline int32_t* get_address_of_richtype_0() { return &___richtype_0; }
	inline void set_richtype_0(int32_t value)
	{
		___richtype_0 = value;
	}

	inline static int32_t get_offset_of_linktype_1() { return static_cast<int32_t>(offsetof(RichContent_t180955143, ___linktype_1)); }
	inline int32_t get_linktype_1() const { return ___linktype_1; }
	inline int32_t* get_address_of_linktype_1() { return &___linktype_1; }
	inline void set_linktype_1(int32_t value)
	{
		___linktype_1 = value;
	}

	inline static int32_t get_offset_of_args_2() { return static_cast<int32_t>(offsetof(RichContent_t180955143, ___args_2)); }
	inline ObjectU5BU5D_t3614634134* get_args_2() const { return ___args_2; }
	inline ObjectU5BU5D_t3614634134** get_address_of_args_2() { return &___args_2; }
	inline void set_args_2(ObjectU5BU5D_t3614634134* value)
	{
		___args_2 = value;
		Il2CppCodeGenWriteBarrier(&___args_2, value);
	}

	inline static int32_t get_offset_of_content_3() { return static_cast<int32_t>(offsetof(RichContent_t180955143, ___content_3)); }
	inline String_t* get_content_3() const { return ___content_3; }
	inline String_t** get_address_of_content_3() { return &___content_3; }
	inline void set_content_3(String_t* value)
	{
		___content_3 = value;
		Il2CppCodeGenWriteBarrier(&___content_3, value);
	}

	inline static int32_t get_offset_of_color_4() { return static_cast<int32_t>(offsetof(RichContent_t180955143, ___color_4)); }
	inline String_t* get_color_4() const { return ___color_4; }
	inline String_t** get_address_of_color_4() { return &___color_4; }
	inline void set_color_4(String_t* value)
	{
		___color_4 = value;
		Il2CppCodeGenWriteBarrier(&___color_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
