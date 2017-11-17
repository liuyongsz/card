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

// cn.sharesdk.unity3d.Flickr
struct  Flickr_t95868365  : public DevInfo_t3603979713
{
public:
	// System.String cn.sharesdk.unity3d.Flickr::api_key
	String_t* ___api_key_2;
	// System.String cn.sharesdk.unity3d.Flickr::api_secret
	String_t* ___api_secret_3;

public:
	inline static int32_t get_offset_of_api_key_2() { return static_cast<int32_t>(offsetof(Flickr_t95868365, ___api_key_2)); }
	inline String_t* get_api_key_2() const { return ___api_key_2; }
	inline String_t** get_address_of_api_key_2() { return &___api_key_2; }
	inline void set_api_key_2(String_t* value)
	{
		___api_key_2 = value;
		Il2CppCodeGenWriteBarrier(&___api_key_2, value);
	}

	inline static int32_t get_offset_of_api_secret_3() { return static_cast<int32_t>(offsetof(Flickr_t95868365, ___api_secret_3)); }
	inline String_t* get_api_secret_3() const { return ___api_secret_3; }
	inline String_t** get_address_of_api_secret_3() { return &___api_secret_3; }
	inline void set_api_secret_3(String_t* value)
	{
		___api_secret_3 = value;
		Il2CppCodeGenWriteBarrier(&___api_secret_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
