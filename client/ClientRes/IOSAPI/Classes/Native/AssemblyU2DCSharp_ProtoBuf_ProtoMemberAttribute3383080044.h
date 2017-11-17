#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.String
struct String_t;

#include "mscorlib_System_Attribute542643598.h"
#include "AssemblyU2DCSharp_ProtoBuf_DataFormat1866125683.h"
#include "AssemblyU2DCSharp_ProtoBuf_MemberSerializationOpti1047673488.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.ProtoMemberAttribute
struct  ProtoMemberAttribute_t3383080044  : public Attribute_t542643598
{
public:
	// System.Reflection.MemberInfo ProtoBuf.ProtoMemberAttribute::Member
	MemberInfo_t * ___Member_0;
	// System.Boolean ProtoBuf.ProtoMemberAttribute::TagIsPinned
	bool ___TagIsPinned_1;
	// System.String ProtoBuf.ProtoMemberAttribute::name
	String_t* ___name_2;
	// ProtoBuf.DataFormat ProtoBuf.ProtoMemberAttribute::dataFormat
	int32_t ___dataFormat_3;
	// System.Int32 ProtoBuf.ProtoMemberAttribute::tag
	int32_t ___tag_4;
	// ProtoBuf.MemberSerializationOptions ProtoBuf.ProtoMemberAttribute::options
	int32_t ___options_5;

public:
	inline static int32_t get_offset_of_Member_0() { return static_cast<int32_t>(offsetof(ProtoMemberAttribute_t3383080044, ___Member_0)); }
	inline MemberInfo_t * get_Member_0() const { return ___Member_0; }
	inline MemberInfo_t ** get_address_of_Member_0() { return &___Member_0; }
	inline void set_Member_0(MemberInfo_t * value)
	{
		___Member_0 = value;
		Il2CppCodeGenWriteBarrier(&___Member_0, value);
	}

	inline static int32_t get_offset_of_TagIsPinned_1() { return static_cast<int32_t>(offsetof(ProtoMemberAttribute_t3383080044, ___TagIsPinned_1)); }
	inline bool get_TagIsPinned_1() const { return ___TagIsPinned_1; }
	inline bool* get_address_of_TagIsPinned_1() { return &___TagIsPinned_1; }
	inline void set_TagIsPinned_1(bool value)
	{
		___TagIsPinned_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(ProtoMemberAttribute_t3383080044, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier(&___name_2, value);
	}

	inline static int32_t get_offset_of_dataFormat_3() { return static_cast<int32_t>(offsetof(ProtoMemberAttribute_t3383080044, ___dataFormat_3)); }
	inline int32_t get_dataFormat_3() const { return ___dataFormat_3; }
	inline int32_t* get_address_of_dataFormat_3() { return &___dataFormat_3; }
	inline void set_dataFormat_3(int32_t value)
	{
		___dataFormat_3 = value;
	}

	inline static int32_t get_offset_of_tag_4() { return static_cast<int32_t>(offsetof(ProtoMemberAttribute_t3383080044, ___tag_4)); }
	inline int32_t get_tag_4() const { return ___tag_4; }
	inline int32_t* get_address_of_tag_4() { return &___tag_4; }
	inline void set_tag_4(int32_t value)
	{
		___tag_4 = value;
	}

	inline static int32_t get_offset_of_options_5() { return static_cast<int32_t>(offsetof(ProtoMemberAttribute_t3383080044, ___options_5)); }
	inline int32_t get_options_5() const { return ___options_5; }
	inline int32_t* get_address_of_options_5() { return &___options_5; }
	inline void set_options_5(int32_t value)
	{
		___options_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
