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
#include "AssemblyU2DCSharp_ProtoBuf_ImplicitFields2119185212.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.ProtoContractAttribute
struct  ProtoContractAttribute_t1463874358  : public Attribute_t542643598
{
public:
	// System.String ProtoBuf.ProtoContractAttribute::name
	String_t* ___name_8;
	// System.Int32 ProtoBuf.ProtoContractAttribute::implicitFirstTag
	int32_t ___implicitFirstTag_9;
	// ProtoBuf.ImplicitFields ProtoBuf.ProtoContractAttribute::implicitFields
	int32_t ___implicitFields_10;
	// System.Int32 ProtoBuf.ProtoContractAttribute::dataMemberOffset
	int32_t ___dataMemberOffset_11;
	// System.Byte ProtoBuf.ProtoContractAttribute::flags
	uint8_t ___flags_12;

public:
	inline static int32_t get_offset_of_name_8() { return static_cast<int32_t>(offsetof(ProtoContractAttribute_t1463874358, ___name_8)); }
	inline String_t* get_name_8() const { return ___name_8; }
	inline String_t** get_address_of_name_8() { return &___name_8; }
	inline void set_name_8(String_t* value)
	{
		___name_8 = value;
		Il2CppCodeGenWriteBarrier(&___name_8, value);
	}

	inline static int32_t get_offset_of_implicitFirstTag_9() { return static_cast<int32_t>(offsetof(ProtoContractAttribute_t1463874358, ___implicitFirstTag_9)); }
	inline int32_t get_implicitFirstTag_9() const { return ___implicitFirstTag_9; }
	inline int32_t* get_address_of_implicitFirstTag_9() { return &___implicitFirstTag_9; }
	inline void set_implicitFirstTag_9(int32_t value)
	{
		___implicitFirstTag_9 = value;
	}

	inline static int32_t get_offset_of_implicitFields_10() { return static_cast<int32_t>(offsetof(ProtoContractAttribute_t1463874358, ___implicitFields_10)); }
	inline int32_t get_implicitFields_10() const { return ___implicitFields_10; }
	inline int32_t* get_address_of_implicitFields_10() { return &___implicitFields_10; }
	inline void set_implicitFields_10(int32_t value)
	{
		___implicitFields_10 = value;
	}

	inline static int32_t get_offset_of_dataMemberOffset_11() { return static_cast<int32_t>(offsetof(ProtoContractAttribute_t1463874358, ___dataMemberOffset_11)); }
	inline int32_t get_dataMemberOffset_11() const { return ___dataMemberOffset_11; }
	inline int32_t* get_address_of_dataMemberOffset_11() { return &___dataMemberOffset_11; }
	inline void set_dataMemberOffset_11(int32_t value)
	{
		___dataMemberOffset_11 = value;
	}

	inline static int32_t get_offset_of_flags_12() { return static_cast<int32_t>(offsetof(ProtoContractAttribute_t1463874358, ___flags_12)); }
	inline uint8_t get_flags_12() const { return ___flags_12; }
	inline uint8_t* get_address_of_flags_12() { return &___flags_12; }
	inline void set_flags_12(uint8_t value)
	{
		___flags_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
