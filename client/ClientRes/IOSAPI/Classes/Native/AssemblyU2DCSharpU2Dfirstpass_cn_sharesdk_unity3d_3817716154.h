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

// cn.sharesdk.unity3d.Facebook
struct  Facebook_t3817716154  : public DevInfo_t3603979713
{
public:
	// System.String cn.sharesdk.unity3d.Facebook::api_key
	String_t* ___api_key_2;
	// System.String cn.sharesdk.unity3d.Facebook::app_secret
	String_t* ___app_secret_3;
	// System.String cn.sharesdk.unity3d.Facebook::auth_type
	String_t* ___auth_type_4;
	// System.String cn.sharesdk.unity3d.Facebook::display_name
	String_t* ___display_name_5;

public:
	inline static int32_t get_offset_of_api_key_2() { return static_cast<int32_t>(offsetof(Facebook_t3817716154, ___api_key_2)); }
	inline String_t* get_api_key_2() const { return ___api_key_2; }
	inline String_t** get_address_of_api_key_2() { return &___api_key_2; }
	inline void set_api_key_2(String_t* value)
	{
		___api_key_2 = value;
		Il2CppCodeGenWriteBarrier(&___api_key_2, value);
	}

	inline static int32_t get_offset_of_app_secret_3() { return static_cast<int32_t>(offsetof(Facebook_t3817716154, ___app_secret_3)); }
	inline String_t* get_app_secret_3() const { return ___app_secret_3; }
	inline String_t** get_address_of_app_secret_3() { return &___app_secret_3; }
	inline void set_app_secret_3(String_t* value)
	{
		___app_secret_3 = value;
		Il2CppCodeGenWriteBarrier(&___app_secret_3, value);
	}

	inline static int32_t get_offset_of_auth_type_4() { return static_cast<int32_t>(offsetof(Facebook_t3817716154, ___auth_type_4)); }
	inline String_t* get_auth_type_4() const { return ___auth_type_4; }
	inline String_t** get_address_of_auth_type_4() { return &___auth_type_4; }
	inline void set_auth_type_4(String_t* value)
	{
		___auth_type_4 = value;
		Il2CppCodeGenWriteBarrier(&___auth_type_4, value);
	}

	inline static int32_t get_offset_of_display_name_5() { return static_cast<int32_t>(offsetof(Facebook_t3817716154, ___display_name_5)); }
	inline String_t* get_display_name_5() const { return ___display_name_5; }
	inline String_t** get_address_of_display_name_5() { return &___display_name_5; }
	inline void set_display_name_5(String_t* value)
	{
		___display_name_5 = value;
		Il2CppCodeGenWriteBarrier(&___display_name_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
