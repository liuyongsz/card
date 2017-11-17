#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SharpJson.Lexer
struct Lexer_t1055722548;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SharpJson.JsonDecoder
struct  JsonDecoder_t1005059584  : public Il2CppObject
{
public:
	// SharpJson.Lexer SharpJson.JsonDecoder::lexer
	Lexer_t1055722548 * ___lexer_0;
	// System.String SharpJson.JsonDecoder::<errorMessage>k__BackingField
	String_t* ___U3CerrorMessageU3Ek__BackingField_1;
	// System.Boolean SharpJson.JsonDecoder::<parseNumbersAsFloat>k__BackingField
	bool ___U3CparseNumbersAsFloatU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_lexer_0() { return static_cast<int32_t>(offsetof(JsonDecoder_t1005059584, ___lexer_0)); }
	inline Lexer_t1055722548 * get_lexer_0() const { return ___lexer_0; }
	inline Lexer_t1055722548 ** get_address_of_lexer_0() { return &___lexer_0; }
	inline void set_lexer_0(Lexer_t1055722548 * value)
	{
		___lexer_0 = value;
		Il2CppCodeGenWriteBarrier(&___lexer_0, value);
	}

	inline static int32_t get_offset_of_U3CerrorMessageU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(JsonDecoder_t1005059584, ___U3CerrorMessageU3Ek__BackingField_1)); }
	inline String_t* get_U3CerrorMessageU3Ek__BackingField_1() const { return ___U3CerrorMessageU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CerrorMessageU3Ek__BackingField_1() { return &___U3CerrorMessageU3Ek__BackingField_1; }
	inline void set_U3CerrorMessageU3Ek__BackingField_1(String_t* value)
	{
		___U3CerrorMessageU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CerrorMessageU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CparseNumbersAsFloatU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(JsonDecoder_t1005059584, ___U3CparseNumbersAsFloatU3Ek__BackingField_2)); }
	inline bool get_U3CparseNumbersAsFloatU3Ek__BackingField_2() const { return ___U3CparseNumbersAsFloatU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CparseNumbersAsFloatU3Ek__BackingField_2() { return &___U3CparseNumbersAsFloatU3Ek__BackingField_2; }
	inline void set_U3CparseNumbersAsFloatU3Ek__BackingField_2(bool value)
	{
		___U3CparseNumbersAsFloatU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
