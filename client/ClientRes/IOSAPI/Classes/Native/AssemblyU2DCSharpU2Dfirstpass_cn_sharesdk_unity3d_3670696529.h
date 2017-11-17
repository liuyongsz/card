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

// cn.sharesdk.unity3d.YouDao
struct  YouDao_t3670696529  : public DevInfo_t3603979713
{
public:
	// System.String cn.sharesdk.unity3d.YouDao::consumer_key
	String_t* ___consumer_key_2;
	// System.String cn.sharesdk.unity3d.YouDao::consumer_secret
	String_t* ___consumer_secret_3;
	// System.String cn.sharesdk.unity3d.YouDao::oauth_callback
	String_t* ___oauth_callback_4;

public:
	inline static int32_t get_offset_of_consumer_key_2() { return static_cast<int32_t>(offsetof(YouDao_t3670696529, ___consumer_key_2)); }
	inline String_t* get_consumer_key_2() const { return ___consumer_key_2; }
	inline String_t** get_address_of_consumer_key_2() { return &___consumer_key_2; }
	inline void set_consumer_key_2(String_t* value)
	{
		___consumer_key_2 = value;
		Il2CppCodeGenWriteBarrier(&___consumer_key_2, value);
	}

	inline static int32_t get_offset_of_consumer_secret_3() { return static_cast<int32_t>(offsetof(YouDao_t3670696529, ___consumer_secret_3)); }
	inline String_t* get_consumer_secret_3() const { return ___consumer_secret_3; }
	inline String_t** get_address_of_consumer_secret_3() { return &___consumer_secret_3; }
	inline void set_consumer_secret_3(String_t* value)
	{
		___consumer_secret_3 = value;
		Il2CppCodeGenWriteBarrier(&___consumer_secret_3, value);
	}

	inline static int32_t get_offset_of_oauth_callback_4() { return static_cast<int32_t>(offsetof(YouDao_t3670696529, ___oauth_callback_4)); }
	inline String_t* get_oauth_callback_4() const { return ___oauth_callback_4; }
	inline String_t** get_address_of_oauth_callback_4() { return &___oauth_callback_4; }
	inline void set_oauth_callback_4(String_t* value)
	{
		___oauth_callback_4 = value;
		Il2CppCodeGenWriteBarrier(&___oauth_callback_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
