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

#include "AssemblyU2DCSharp_AssetBundles_NormalRes3181316491.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AssetBundles.TxtRes
struct  TxtRes_t2531878662  : public NormalRes_t3181316491
{
public:
	// System.String AssetBundles.TxtRes::m_txt
	String_t* ___m_txt_1;

public:
	inline static int32_t get_offset_of_m_txt_1() { return static_cast<int32_t>(offsetof(TxtRes_t2531878662, ___m_txt_1)); }
	inline String_t* get_m_txt_1() const { return ___m_txt_1; }
	inline String_t** get_address_of_m_txt_1() { return &___m_txt_1; }
	inline void set_m_txt_1(String_t* value)
	{
		___m_txt_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_txt_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
