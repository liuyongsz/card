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

#include "AssemblyU2DCSharp_AMLoadAssetOperation2496313085.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AssetBundleLoadAssetOperationSecond
struct  AssetBundleLoadAssetOperationSecond_t4050203981  : public AMLoadAssetOperation_t2496313085
{
public:
	// System.String AssetBundleLoadAssetOperationSecond::assetBundleName
	String_t* ___assetBundleName_0;
	// System.String AssetBundleLoadAssetOperationSecond::assetName
	String_t* ___assetName_1;
	// System.String AssetBundleLoadAssetOperationSecond::downloadingError
	String_t* ___downloadingError_2;
	// System.Type AssetBundleLoadAssetOperationSecond::type
	Type_t * ___type_3;
	// UnityEngine.AssetBundleRequest AssetBundleLoadAssetOperationSecond::request
	AssetBundleRequest_t2674559435 * ___request_4;
	// System.Boolean AssetBundleLoadAssetOperationSecond::cancelled
	bool ___cancelled_5;
	// System.Boolean AssetBundleLoadAssetOperationSecond::unloaded
	bool ___unloaded_6;

public:
	inline static int32_t get_offset_of_assetBundleName_0() { return static_cast<int32_t>(offsetof(AssetBundleLoadAssetOperationSecond_t4050203981, ___assetBundleName_0)); }
	inline String_t* get_assetBundleName_0() const { return ___assetBundleName_0; }
	inline String_t** get_address_of_assetBundleName_0() { return &___assetBundleName_0; }
	inline void set_assetBundleName_0(String_t* value)
	{
		___assetBundleName_0 = value;
		Il2CppCodeGenWriteBarrier(&___assetBundleName_0, value);
	}

	inline static int32_t get_offset_of_assetName_1() { return static_cast<int32_t>(offsetof(AssetBundleLoadAssetOperationSecond_t4050203981, ___assetName_1)); }
	inline String_t* get_assetName_1() const { return ___assetName_1; }
	inline String_t** get_address_of_assetName_1() { return &___assetName_1; }
	inline void set_assetName_1(String_t* value)
	{
		___assetName_1 = value;
		Il2CppCodeGenWriteBarrier(&___assetName_1, value);
	}

	inline static int32_t get_offset_of_downloadingError_2() { return static_cast<int32_t>(offsetof(AssetBundleLoadAssetOperationSecond_t4050203981, ___downloadingError_2)); }
	inline String_t* get_downloadingError_2() const { return ___downloadingError_2; }
	inline String_t** get_address_of_downloadingError_2() { return &___downloadingError_2; }
	inline void set_downloadingError_2(String_t* value)
	{
		___downloadingError_2 = value;
		Il2CppCodeGenWriteBarrier(&___downloadingError_2, value);
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(AssetBundleLoadAssetOperationSecond_t4050203981, ___type_3)); }
	inline Type_t * get_type_3() const { return ___type_3; }
	inline Type_t ** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(Type_t * value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier(&___type_3, value);
	}

	inline static int32_t get_offset_of_request_4() { return static_cast<int32_t>(offsetof(AssetBundleLoadAssetOperationSecond_t4050203981, ___request_4)); }
	inline AssetBundleRequest_t2674559435 * get_request_4() const { return ___request_4; }
	inline AssetBundleRequest_t2674559435 ** get_address_of_request_4() { return &___request_4; }
	inline void set_request_4(AssetBundleRequest_t2674559435 * value)
	{
		___request_4 = value;
		Il2CppCodeGenWriteBarrier(&___request_4, value);
	}

	inline static int32_t get_offset_of_cancelled_5() { return static_cast<int32_t>(offsetof(AssetBundleLoadAssetOperationSecond_t4050203981, ___cancelled_5)); }
	inline bool get_cancelled_5() const { return ___cancelled_5; }
	inline bool* get_address_of_cancelled_5() { return &___cancelled_5; }
	inline void set_cancelled_5(bool value)
	{
		___cancelled_5 = value;
	}

	inline static int32_t get_offset_of_unloaded_6() { return static_cast<int32_t>(offsetof(AssetBundleLoadAssetOperationSecond_t4050203981, ___unloaded_6)); }
	inline bool get_unloaded_6() const { return ___unloaded_6; }
	inline bool* get_address_of_unloaded_6() { return &___unloaded_6; }
	inline void set_unloaded_6(bool value)
	{
		___unloaded_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
