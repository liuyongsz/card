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

#include "mscorlib_System_Attribute542643598.h"
#include "AssemblyU2DCSharp_ProtoBuf_DataFormat1866125683.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.ProtoIncludeAttribute
struct  ProtoIncludeAttribute_t2843742276  : public Attribute_t542643598
{
public:
	// System.Int32 ProtoBuf.ProtoIncludeAttribute::tag
	int32_t ___tag_0;
	// System.String ProtoBuf.ProtoIncludeAttribute::knownTypeName
	String_t* ___knownTypeName_1;
	// ProtoBuf.DataFormat ProtoBuf.ProtoIncludeAttribute::dataFormat
	int32_t ___dataFormat_2;

public:
	inline static int32_t get_offset_of_tag_0() { return static_cast<int32_t>(offsetof(ProtoIncludeAttribute_t2843742276, ___tag_0)); }
	inline int32_t get_tag_0() const { return ___tag_0; }
	inline int32_t* get_address_of_tag_0() { return &___tag_0; }
	inline void set_tag_0(int32_t value)
	{
		___tag_0 = value;
	}

	inline static int32_t get_offset_of_knownTypeName_1() { return static_cast<int32_t>(offsetof(ProtoIncludeAttribute_t2843742276, ___knownTypeName_1)); }
	inline String_t* get_knownTypeName_1() const { return ___knownTypeName_1; }
	inline String_t** get_address_of_knownTypeName_1() { return &___knownTypeName_1; }
	inline void set_knownTypeName_1(String_t* value)
	{
		___knownTypeName_1 = value;
		Il2CppCodeGenWriteBarrier(&___knownTypeName_1, value);
	}

	inline static int32_t get_offset_of_dataFormat_2() { return static_cast<int32_t>(offsetof(ProtoIncludeAttribute_t2843742276, ___dataFormat_2)); }
	inline int32_t get_dataFormat_2() const { return ___dataFormat_2; }
	inline int32_t* get_address_of_dataFormat_2() { return &___dataFormat_2; }
	inline void set_dataFormat_2(int32_t value)
	{
		___dataFormat_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
