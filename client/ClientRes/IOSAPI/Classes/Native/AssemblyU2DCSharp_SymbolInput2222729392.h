#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SymbolLabel
struct SymbolLabel_t2491497006;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_UIInput860674234.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SymbolInput
struct  SymbolInput_t2222729392  : public UIInput_t860674234
{
public:
	// SymbolLabel SymbolInput::newLabel
	SymbolLabel_t2491497006 * ___newLabel_40;
	// System.String SymbolInput::mCached
	String_t* ___mCached_41;

public:
	inline static int32_t get_offset_of_newLabel_40() { return static_cast<int32_t>(offsetof(SymbolInput_t2222729392, ___newLabel_40)); }
	inline SymbolLabel_t2491497006 * get_newLabel_40() const { return ___newLabel_40; }
	inline SymbolLabel_t2491497006 ** get_address_of_newLabel_40() { return &___newLabel_40; }
	inline void set_newLabel_40(SymbolLabel_t2491497006 * value)
	{
		___newLabel_40 = value;
		Il2CppCodeGenWriteBarrier(&___newLabel_40, value);
	}

	inline static int32_t get_offset_of_mCached_41() { return static_cast<int32_t>(offsetof(SymbolInput_t2222729392, ___mCached_41)); }
	inline String_t* get_mCached_41() const { return ___mCached_41; }
	inline String_t** get_address_of_mCached_41() { return &___mCached_41; }
	inline void set_mCached_41(String_t* value)
	{
		___mCached_41 = value;
		Il2CppCodeGenWriteBarrier(&___mCached_41, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
