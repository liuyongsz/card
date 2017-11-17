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
// UnityEngine.AsyncOperation
struct AsyncOperation_t3814632279;

#include "AssemblyU2DCSharp_AssetBundles_AssetLoadOperation1768276191.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AssetBundles.AssetBundleLoadLevelOperation
struct  AssetBundleLoadLevelOperation_t671266179  : public AssetLoadOperation_t1768276191
{
public:
	// System.String AssetBundles.AssetBundleLoadLevelOperation::m_AssetBundleName
	String_t* ___m_AssetBundleName_0;
	// System.String AssetBundles.AssetBundleLoadLevelOperation::m_LevelName
	String_t* ___m_LevelName_1;
	// System.Boolean AssetBundles.AssetBundleLoadLevelOperation::m_IsAdditive
	bool ___m_IsAdditive_2;
	// System.String AssetBundles.AssetBundleLoadLevelOperation::m_DownloadingError
	String_t* ___m_DownloadingError_3;
	// UnityEngine.AsyncOperation AssetBundles.AssetBundleLoadLevelOperation::m_Request
	AsyncOperation_t3814632279 * ___m_Request_4;

public:
	inline static int32_t get_offset_of_m_AssetBundleName_0() { return static_cast<int32_t>(offsetof(AssetBundleLoadLevelOperation_t671266179, ___m_AssetBundleName_0)); }
	inline String_t* get_m_AssetBundleName_0() const { return ___m_AssetBundleName_0; }
	inline String_t** get_address_of_m_AssetBundleName_0() { return &___m_AssetBundleName_0; }
	inline void set_m_AssetBundleName_0(String_t* value)
	{
		___m_AssetBundleName_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_AssetBundleName_0, value);
	}

	inline static int32_t get_offset_of_m_LevelName_1() { return static_cast<int32_t>(offsetof(AssetBundleLoadLevelOperation_t671266179, ___m_LevelName_1)); }
	inline String_t* get_m_LevelName_1() const { return ___m_LevelName_1; }
	inline String_t** get_address_of_m_LevelName_1() { return &___m_LevelName_1; }
	inline void set_m_LevelName_1(String_t* value)
	{
		___m_LevelName_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_LevelName_1, value);
	}

	inline static int32_t get_offset_of_m_IsAdditive_2() { return static_cast<int32_t>(offsetof(AssetBundleLoadLevelOperation_t671266179, ___m_IsAdditive_2)); }
	inline bool get_m_IsAdditive_2() const { return ___m_IsAdditive_2; }
	inline bool* get_address_of_m_IsAdditive_2() { return &___m_IsAdditive_2; }
	inline void set_m_IsAdditive_2(bool value)
	{
		___m_IsAdditive_2 = value;
	}

	inline static int32_t get_offset_of_m_DownloadingError_3() { return static_cast<int32_t>(offsetof(AssetBundleLoadLevelOperation_t671266179, ___m_DownloadingError_3)); }
	inline String_t* get_m_DownloadingError_3() const { return ___m_DownloadingError_3; }
	inline String_t** get_address_of_m_DownloadingError_3() { return &___m_DownloadingError_3; }
	inline void set_m_DownloadingError_3(String_t* value)
	{
		___m_DownloadingError_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_DownloadingError_3, value);
	}

	inline static int32_t get_offset_of_m_Request_4() { return static_cast<int32_t>(offsetof(AssetBundleLoadLevelOperation_t671266179, ___m_Request_4)); }
	inline AsyncOperation_t3814632279 * get_m_Request_4() const { return ___m_Request_4; }
	inline AsyncOperation_t3814632279 ** get_address_of_m_Request_4() { return &___m_Request_4; }
	inline void set_m_Request_4(AsyncOperation_t3814632279 * value)
	{
		___m_Request_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_Request_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
