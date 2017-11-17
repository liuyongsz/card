#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.WWW
struct WWW_t2919945039;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_AssetBundles_EResType4259288613.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AssetBundles.WWWLoadInfo
struct  WWWLoadInfo_t1383031787  : public Il2CppObject
{
public:
	// UnityEngine.WWW AssetBundles.WWWLoadInfo::m_www
	WWW_t2919945039 * ___m_www_0;
	// AssetBundles.EResType AssetBundles.WWWLoadInfo::m_type
	int32_t ___m_type_1;

public:
	inline static int32_t get_offset_of_m_www_0() { return static_cast<int32_t>(offsetof(WWWLoadInfo_t1383031787, ___m_www_0)); }
	inline WWW_t2919945039 * get_m_www_0() const { return ___m_www_0; }
	inline WWW_t2919945039 ** get_address_of_m_www_0() { return &___m_www_0; }
	inline void set_m_www_0(WWW_t2919945039 * value)
	{
		___m_www_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_www_0, value);
	}

	inline static int32_t get_offset_of_m_type_1() { return static_cast<int32_t>(offsetof(WWWLoadInfo_t1383031787, ___m_type_1)); }
	inline int32_t get_m_type_1() const { return ___m_type_1; }
	inline int32_t* get_address_of_m_type_1() { return &___m_type_1; }
	inline void set_m_type_1(int32_t value)
	{
		___m_type_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
