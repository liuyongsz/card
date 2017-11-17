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

// cn.sharesdk.unity3d.TencentWeiboDevInfo
struct  TencentWeiboDevInfo_t502056320  : public DevInfo_t3603979713
{
public:
	// System.String cn.sharesdk.unity3d.TencentWeiboDevInfo::app_key
	String_t* ___app_key_2;
	// System.String cn.sharesdk.unity3d.TencentWeiboDevInfo::app_secret
	String_t* ___app_secret_3;
	// System.String cn.sharesdk.unity3d.TencentWeiboDevInfo::redirect_uri
	String_t* ___redirect_uri_4;

public:
	inline static int32_t get_offset_of_app_key_2() { return static_cast<int32_t>(offsetof(TencentWeiboDevInfo_t502056320, ___app_key_2)); }
	inline String_t* get_app_key_2() const { return ___app_key_2; }
	inline String_t** get_address_of_app_key_2() { return &___app_key_2; }
	inline void set_app_key_2(String_t* value)
	{
		___app_key_2 = value;
		Il2CppCodeGenWriteBarrier(&___app_key_2, value);
	}

	inline static int32_t get_offset_of_app_secret_3() { return static_cast<int32_t>(offsetof(TencentWeiboDevInfo_t502056320, ___app_secret_3)); }
	inline String_t* get_app_secret_3() const { return ___app_secret_3; }
	inline String_t** get_address_of_app_secret_3() { return &___app_secret_3; }
	inline void set_app_secret_3(String_t* value)
	{
		___app_secret_3 = value;
		Il2CppCodeGenWriteBarrier(&___app_secret_3, value);
	}

	inline static int32_t get_offset_of_redirect_uri_4() { return static_cast<int32_t>(offsetof(TencentWeiboDevInfo_t502056320, ___redirect_uri_4)); }
	inline String_t* get_redirect_uri_4() const { return ___redirect_uri_4; }
	inline String_t** get_address_of_redirect_uri_4() { return &___redirect_uri_4; }
	inline void set_redirect_uri_4(String_t* value)
	{
		___redirect_uri_4 = value;
		Il2CppCodeGenWriteBarrier(&___redirect_uri_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
