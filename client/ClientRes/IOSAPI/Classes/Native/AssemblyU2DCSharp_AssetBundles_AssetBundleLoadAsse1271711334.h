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
// System.Type
struct Type_t;
// UnityEngine.AssetBundleRequest
struct AssetBundleRequest_t2674559435;

#include "AssemblyU2DCSharp_AssetBundles_AssetBundleLoadAsset108400409.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AssetBundles.AssetBundleLoadAssetOperationFull
struct  AssetBundleLoadAssetOperationFull_t1271711334  : public AssetBundleLoadAssetOperation_t108400409
{
public:
	// System.String AssetBundles.AssetBundleLoadAssetOperationFull::m_AssetBundleName
	String_t* ___m_AssetBundleName_0;
	// System.String AssetBundles.AssetBundleLoadAssetOperationFull::m_AssetName
	String_t* ___m_AssetName_1;
	// System.String AssetBundles.AssetBundleLoadAssetOperationFull::m_DownloadingError
	String_t* ___m_DownloadingError_2;
	// System.Type AssetBundles.AssetBundleLoadAssetOperationFull::m_Type
	Type_t * ___m_Type_3;
	// UnityEngine.AssetBundleRequest AssetBundles.AssetBundleLoadAssetOperationFull::m_Request
	AssetBundleRequest_t2674559435 * ___m_Request_4;
	// System.Boolean AssetBundles.AssetBundleLoadAssetOperationFull::m_loadall
	bool ___m_loadall_5;

public:
	inline static int32_t get_offset_of_m_AssetBundleName_0() { return static_cast<int32_t>(offsetof(AssetBundleLoadAssetOperationFull_t1271711334, ___m_AssetBundleName_0)); }
	inline String_t* get_m_AssetBundleName_0() const { return ___m_AssetBundleName_0; }
	inline String_t** get_address_of_m_AssetBundleName_0() { return &___m_AssetBundleName_0; }
	inline void set_m_AssetBundleName_0(String_t* value)
	{
		___m_AssetBundleName_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_AssetBundleName_0, value);
	}

	inline static int32_t get_offset_of_m_AssetName_1() { return static_cast<int32_t>(offsetof(AssetBundleLoadAssetOperationFull_t1271711334, ___m_AssetName_1)); }
	inline String_t* get_m_AssetName_1() const { return ___m_AssetName_1; }
	inline String_t** get_address_of_m_AssetName_1() { return &___m_AssetName_1; }
	inline void set_m_AssetName_1(String_t* value)
	{
		___m_AssetName_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_AssetName_1, value);
	}

	inline static int32_t get_offset_of_m_DownloadingError_2() { return static_cast<int32_t>(offsetof(AssetBundleLoadAssetOperationFull_t1271711334, ___m_DownloadingError_2)); }
	inline String_t* get_m_DownloadingError_2() const { return ___m_DownloadingError_2; }
	inline String_t** get_address_of_m_DownloadingError_2() { return &___m_DownloadingError_2; }
	inline void set_m_DownloadingError_2(String_t* value)
	{
		___m_DownloadingError_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_DownloadingError_2, value);
	}

	inline static int32_t get_offset_of_m_Type_3() { return static_cast<int32_t>(offsetof(AssetBundleLoadAssetOperationFull_t1271711334, ___m_Type_3)); }
	inline Type_t * get_m_Type_3() const { return ___m_Type_3; }
	inline Type_t ** get_address_of_m_Type_3() { return &___m_Type_3; }
	inline void set_m_Type_3(Type_t * value)
	{
		___m_Type_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Type_3, value);
	}

	inline static int32_t get_offset_of_m_Request_4() { return static_cast<int32_t>(offsetof(AssetBundleLoadAssetOperationFull_t1271711334, ___m_Request_4)); }
	inline AssetBundleRequest_t2674559435 * get_m_Request_4() const { return ___m_Request_4; }
	inline AssetBundleRequest_t2674559435 ** get_address_of_m_Request_4() { return &___m_Request_4; }
	inline void set_m_Request_4(AssetBundleRequest_t2674559435 * value)
	{
		___m_Request_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_Request_4, value);
	}

	inline static int32_t get_offset_of_m_loadall_5() { return static_cast<int32_t>(offsetof(AssetBundleLoadAssetOperationFull_t1271711334, ___m_loadall_5)); }
	inline bool get_m_loadall_5() const { return ___m_loadall_5; }
	inline bool* get_address_of_m_loadall_5() { return &___m_loadall_5; }
	inline void set_m_loadall_5(bool value)
	{
		___m_loadall_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
