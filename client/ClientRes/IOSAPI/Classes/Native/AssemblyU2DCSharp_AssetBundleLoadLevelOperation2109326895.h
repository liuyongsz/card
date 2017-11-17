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

#include "AssemblyU2DCSharp_AMLoadOperation148391793.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AssetBundleLoadLevelOperation
struct  AssetBundleLoadLevelOperation_t2109326895  : public AMLoadOperation_t148391793
{
public:
	// System.String AssetBundleLoadLevelOperation::assetBundleName
	String_t* ___assetBundleName_0;
	// System.String AssetBundleLoadLevelOperation::levelName
	String_t* ___levelName_1;
	// System.Boolean AssetBundleLoadLevelOperation::isAdditive
	bool ___isAdditive_2;
	// System.String AssetBundleLoadLevelOperation::downloadError
	String_t* ___downloadError_3;
	// UnityEngine.AsyncOperation AssetBundleLoadLevelOperation::request
	AsyncOperation_t3814632279 * ___request_4;
	// System.Boolean AssetBundleLoadLevelOperation::unloaded
	bool ___unloaded_5;

public:
	inline static int32_t get_offset_of_assetBundleName_0() { return static_cast<int32_t>(offsetof(AssetBundleLoadLevelOperation_t2109326895, ___assetBundleName_0)); }
	inline String_t* get_assetBundleName_0() const { return ___assetBundleName_0; }
	inline String_t** get_address_of_assetBundleName_0() { return &___assetBundleName_0; }
	inline void set_assetBundleName_0(String_t* value)
	{
		___assetBundleName_0 = value;
		Il2CppCodeGenWriteBarrier(&___assetBundleName_0, value);
	}

	inline static int32_t get_offset_of_levelName_1() { return static_cast<int32_t>(offsetof(AssetBundleLoadLevelOperation_t2109326895, ___levelName_1)); }
	inline String_t* get_levelName_1() const { return ___levelName_1; }
	inline String_t** get_address_of_levelName_1() { return &___levelName_1; }
	inline void set_levelName_1(String_t* value)
	{
		___levelName_1 = value;
		Il2CppCodeGenWriteBarrier(&___levelName_1, value);
	}

	inline static int32_t get_offset_of_isAdditive_2() { return static_cast<int32_t>(offsetof(AssetBundleLoadLevelOperation_t2109326895, ___isAdditive_2)); }
	inline bool get_isAdditive_2() const { return ___isAdditive_2; }
	inline bool* get_address_of_isAdditive_2() { return &___isAdditive_2; }
	inline void set_isAdditive_2(bool value)
	{
		___isAdditive_2 = value;
	}

	inline static int32_t get_offset_of_downloadError_3() { return static_cast<int32_t>(offsetof(AssetBundleLoadLevelOperation_t2109326895, ___downloadError_3)); }
	inline String_t* get_downloadError_3() const { return ___downloadError_3; }
	inline String_t** get_address_of_downloadError_3() { return &___downloadError_3; }
	inline void set_downloadError_3(String_t* value)
	{
		___downloadError_3 = value;
		Il2CppCodeGenWriteBarrier(&___downloadError_3, value);
	}

	inline static int32_t get_offset_of_request_4() { return static_cast<int32_t>(offsetof(AssetBundleLoadLevelOperation_t2109326895, ___request_4)); }
	inline AsyncOperation_t3814632279 * get_request_4() const { return ___request_4; }
	inline AsyncOperation_t3814632279 ** get_address_of_request_4() { return &___request_4; }
	inline void set_request_4(AsyncOperation_t3814632279 * value)
	{
		___request_4 = value;
		Il2CppCodeGenWriteBarrier(&___request_4, value);
	}

	inline static int32_t get_offset_of_unloaded_5() { return static_cast<int32_t>(offsetof(AssetBundleLoadLevelOperation_t2109326895, ___unloaded_5)); }
	inline bool get_unloaded_5() const { return ___unloaded_5; }
	inline bool* get_address_of_unloaded_5() { return &___unloaded_5; }
	inline void set_unloaded_5(bool value)
	{
		___unloaded_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
