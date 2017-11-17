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

#include "AssemblyU2DCSharpU2Dfirstpass_cn_sharesdk_unity3d_3743117949.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// cn.sharesdk.unity3d.iOSImpl
struct  iOSImpl_t2422426421  : public ShareSDKImpl_t3743117949
{
public:
	// System.String cn.sharesdk.unity3d.iOSImpl::_callbackObjectName
	String_t* ____callbackObjectName_0;
	// System.String cn.sharesdk.unity3d.iOSImpl::_appKey
	String_t* ____appKey_1;

public:
	inline static int32_t get_offset_of__callbackObjectName_0() { return static_cast<int32_t>(offsetof(iOSImpl_t2422426421, ____callbackObjectName_0)); }
	inline String_t* get__callbackObjectName_0() const { return ____callbackObjectName_0; }
	inline String_t** get_address_of__callbackObjectName_0() { return &____callbackObjectName_0; }
	inline void set__callbackObjectName_0(String_t* value)
	{
		____callbackObjectName_0 = value;
		Il2CppCodeGenWriteBarrier(&____callbackObjectName_0, value);
	}

	inline static int32_t get_offset_of__appKey_1() { return static_cast<int32_t>(offsetof(iOSImpl_t2422426421, ____appKey_1)); }
	inline String_t* get__appKey_1() const { return ____appKey_1; }
	inline String_t** get_address_of__appKey_1() { return &____appKey_1; }
	inline void set__appKey_1(String_t* value)
	{
		____appKey_1 = value;
		Il2CppCodeGenWriteBarrier(&____appKey_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
