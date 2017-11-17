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

// cn.sharesdk.unity3d.KakaoStory
struct  KakaoStory_t2722097256  : public DevInfo_t3603979713
{
public:
	// System.String cn.sharesdk.unity3d.KakaoStory::app_key
	String_t* ___app_key_2;
	// System.String cn.sharesdk.unity3d.KakaoStory::rest_api_key
	String_t* ___rest_api_key_3;
	// System.String cn.sharesdk.unity3d.KakaoStory::redirect_uri
	String_t* ___redirect_uri_4;
	// System.String cn.sharesdk.unity3d.KakaoStory::auth_type
	String_t* ___auth_type_5;

public:
	inline static int32_t get_offset_of_app_key_2() { return static_cast<int32_t>(offsetof(KakaoStory_t2722097256, ___app_key_2)); }
	inline String_t* get_app_key_2() const { return ___app_key_2; }
	inline String_t** get_address_of_app_key_2() { return &___app_key_2; }
	inline void set_app_key_2(String_t* value)
	{
		___app_key_2 = value;
		Il2CppCodeGenWriteBarrier(&___app_key_2, value);
	}

	inline static int32_t get_offset_of_rest_api_key_3() { return static_cast<int32_t>(offsetof(KakaoStory_t2722097256, ___rest_api_key_3)); }
	inline String_t* get_rest_api_key_3() const { return ___rest_api_key_3; }
	inline String_t** get_address_of_rest_api_key_3() { return &___rest_api_key_3; }
	inline void set_rest_api_key_3(String_t* value)
	{
		___rest_api_key_3 = value;
		Il2CppCodeGenWriteBarrier(&___rest_api_key_3, value);
	}

	inline static int32_t get_offset_of_redirect_uri_4() { return static_cast<int32_t>(offsetof(KakaoStory_t2722097256, ___redirect_uri_4)); }
	inline String_t* get_redirect_uri_4() const { return ___redirect_uri_4; }
	inline String_t** get_address_of_redirect_uri_4() { return &___redirect_uri_4; }
	inline void set_redirect_uri_4(String_t* value)
	{
		___redirect_uri_4 = value;
		Il2CppCodeGenWriteBarrier(&___redirect_uri_4, value);
	}

	inline static int32_t get_offset_of_auth_type_5() { return static_cast<int32_t>(offsetof(KakaoStory_t2722097256, ___auth_type_5)); }
	inline String_t* get_auth_type_5() const { return ___auth_type_5; }
	inline String_t** get_address_of_auth_type_5() { return &___auth_type_5; }
	inline void set_auth_type_5(String_t* value)
	{
		___auth_type_5 = value;
		Il2CppCodeGenWriteBarrier(&___auth_type_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
