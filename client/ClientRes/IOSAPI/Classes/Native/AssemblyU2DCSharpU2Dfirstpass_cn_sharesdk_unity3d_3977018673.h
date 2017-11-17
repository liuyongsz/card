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

#include "AssemblyU2DCSharpU2Dfirstpass_cn_sharesdk_unity3d_3603979713.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// cn.sharesdk.unity3d.MeiPai
struct  MeiPai_t3977018673  : public DevInfo_t3603979713
{
public:
	// System.String cn.sharesdk.unity3d.MeiPai::app_key
	String_t* ___app_key_2;

public:
	inline static int32_t get_offset_of_app_key_2() { return static_cast<int32_t>(offsetof(MeiPai_t3977018673, ___app_key_2)); }
	inline String_t* get_app_key_2() const { return ___app_key_2; }
	inline String_t** get_address_of_app_key_2() { return &___app_key_2; }
	inline void set_app_key_2(String_t* value)
	{
		___app_key_2 = value;
		Il2CppCodeGenWriteBarrier(&___app_key_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
