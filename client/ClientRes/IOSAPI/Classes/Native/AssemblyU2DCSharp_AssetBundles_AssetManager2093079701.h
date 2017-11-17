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
// System.String[]
struct StringU5BU5D_t1642385972;
// UnityEngine.AssetBundleManifest
struct AssetBundleManifest_t1328741589;
// System.Collections.Generic.Dictionary`2<System.String,AssetBundles.LoadedWWW>
struct Dictionary_2_t1411298132;
// System.Collections.Generic.Dictionary`2<System.String,AssetBundles.WWWLoadInfo>
struct Dictionary_2_t3297811049;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.Collections.Generic.Dictionary`2<System.String,AssetBundles.EResType>
struct Dictionary_2_t1879100579;
// System.Collections.Generic.List`1<AssetBundles.AssetLoadOperation>
struct List_1_t1137397323;
// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
struct Dictionary_2_t3557165234;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_AssetBundles_AssetManager_LogMod1326430292.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AssetBundles.AssetManager
struct  AssetManager_t2093079701  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct AssetManager_t2093079701_StaticFields
{
public:
	// AssetBundles.AssetManager/LogMode AssetBundles.AssetManager::m_LogMode
	int32_t ___m_LogMode_2;
	// System.String AssetBundles.AssetManager::m_BaseDownloadingURL
	String_t* ___m_BaseDownloadingURL_3;
	// System.String[] AssetBundles.AssetManager::m_ActiveVariants
	StringU5BU5D_t1642385972* ___m_ActiveVariants_4;
	// UnityEngine.AssetBundleManifest AssetBundles.AssetManager::m_AssetBundleManifest
	AssetBundleManifest_t1328741589 * ___m_AssetBundleManifest_5;
	// System.Collections.Generic.Dictionary`2<System.String,AssetBundles.LoadedWWW> AssetBundles.AssetManager::m_LoadedAssetBundles
	Dictionary_2_t1411298132 * ___m_LoadedAssetBundles_6;
	// System.Collections.Generic.Dictionary`2<System.String,AssetBundles.WWWLoadInfo> AssetBundles.AssetManager::m_DownloadingWWWs
	Dictionary_2_t3297811049 * ___m_DownloadingWWWs_7;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> AssetBundles.AssetManager::m_urls
	Dictionary_2_t3943999495 * ___m_urls_8;
	// System.Collections.Generic.Dictionary`2<System.String,AssetBundles.EResType> AssetBundles.AssetManager::m_types
	Dictionary_2_t1879100579 * ___m_types_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> AssetBundles.AssetManager::m_DownloadingErrors
	Dictionary_2_t3943999495 * ___m_DownloadingErrors_10;
	// System.Collections.Generic.List`1<AssetBundles.AssetLoadOperation> AssetBundles.AssetManager::m_InProgressOperations
	List_1_t1137397323 * ___m_InProgressOperations_11;
	// System.Collections.Generic.Dictionary`2<System.String,System.String[]> AssetBundles.AssetManager::m_Dependencies
	Dictionary_2_t3557165234 * ___m_Dependencies_12;

public:
	inline static int32_t get_offset_of_m_LogMode_2() { return static_cast<int32_t>(offsetof(AssetManager_t2093079701_StaticFields, ___m_LogMode_2)); }
	inline int32_t get_m_LogMode_2() const { return ___m_LogMode_2; }
	inline int32_t* get_address_of_m_LogMode_2() { return &___m_LogMode_2; }
	inline void set_m_LogMode_2(int32_t value)
	{
		___m_LogMode_2 = value;
	}

	inline static int32_t get_offset_of_m_BaseDownloadingURL_3() { return static_cast<int32_t>(offsetof(AssetManager_t2093079701_StaticFields, ___m_BaseDownloadingURL_3)); }
	inline String_t* get_m_BaseDownloadingURL_3() const { return ___m_BaseDownloadingURL_3; }
	inline String_t** get_address_of_m_BaseDownloadingURL_3() { return &___m_BaseDownloadingURL_3; }
	inline void set_m_BaseDownloadingURL_3(String_t* value)
	{
		___m_BaseDownloadingURL_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_BaseDownloadingURL_3, value);
	}

	inline static int32_t get_offset_of_m_ActiveVariants_4() { return static_cast<int32_t>(offsetof(AssetManager_t2093079701_StaticFields, ___m_ActiveVariants_4)); }
	inline StringU5BU5D_t1642385972* get_m_ActiveVariants_4() const { return ___m_ActiveVariants_4; }
	inline StringU5BU5D_t1642385972** get_address_of_m_ActiveVariants_4() { return &___m_ActiveVariants_4; }
	inline void set_m_ActiveVariants_4(StringU5BU5D_t1642385972* value)
	{
		___m_ActiveVariants_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_ActiveVariants_4, value);
	}

	inline static int32_t get_offset_of_m_AssetBundleManifest_5() { return static_cast<int32_t>(offsetof(AssetManager_t2093079701_StaticFields, ___m_AssetBundleManifest_5)); }
	inline AssetBundleManifest_t1328741589 * get_m_AssetBundleManifest_5() const { return ___m_AssetBundleManifest_5; }
	inline AssetBundleManifest_t1328741589 ** get_address_of_m_AssetBundleManifest_5() { return &___m_AssetBundleManifest_5; }
	inline void set_m_AssetBundleManifest_5(AssetBundleManifest_t1328741589 * value)
	{
		___m_AssetBundleManifest_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_AssetBundleManifest_5, value);
	}

	inline static int32_t get_offset_of_m_LoadedAssetBundles_6() { return static_cast<int32_t>(offsetof(AssetManager_t2093079701_StaticFields, ___m_LoadedAssetBundles_6)); }
	inline Dictionary_2_t1411298132 * get_m_LoadedAssetBundles_6() const { return ___m_LoadedAssetBundles_6; }
	inline Dictionary_2_t1411298132 ** get_address_of_m_LoadedAssetBundles_6() { return &___m_LoadedAssetBundles_6; }
	inline void set_m_LoadedAssetBundles_6(Dictionary_2_t1411298132 * value)
	{
		___m_LoadedAssetBundles_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_LoadedAssetBundles_6, value);
	}

	inline static int32_t get_offset_of_m_DownloadingWWWs_7() { return static_cast<int32_t>(offsetof(AssetManager_t2093079701_StaticFields, ___m_DownloadingWWWs_7)); }
	inline Dictionary_2_t3297811049 * get_m_DownloadingWWWs_7() const { return ___m_DownloadingWWWs_7; }
	inline Dictionary_2_t3297811049 ** get_address_of_m_DownloadingWWWs_7() { return &___m_DownloadingWWWs_7; }
	inline void set_m_DownloadingWWWs_7(Dictionary_2_t3297811049 * value)
	{
		___m_DownloadingWWWs_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_DownloadingWWWs_7, value);
	}

	inline static int32_t get_offset_of_m_urls_8() { return static_cast<int32_t>(offsetof(AssetManager_t2093079701_StaticFields, ___m_urls_8)); }
	inline Dictionary_2_t3943999495 * get_m_urls_8() const { return ___m_urls_8; }
	inline Dictionary_2_t3943999495 ** get_address_of_m_urls_8() { return &___m_urls_8; }
	inline void set_m_urls_8(Dictionary_2_t3943999495 * value)
	{
		___m_urls_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_urls_8, value);
	}

	inline static int32_t get_offset_of_m_types_9() { return static_cast<int32_t>(offsetof(AssetManager_t2093079701_StaticFields, ___m_types_9)); }
	inline Dictionary_2_t1879100579 * get_m_types_9() const { return ___m_types_9; }
	inline Dictionary_2_t1879100579 ** get_address_of_m_types_9() { return &___m_types_9; }
	inline void set_m_types_9(Dictionary_2_t1879100579 * value)
	{
		___m_types_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_types_9, value);
	}

	inline static int32_t get_offset_of_m_DownloadingErrors_10() { return static_cast<int32_t>(offsetof(AssetManager_t2093079701_StaticFields, ___m_DownloadingErrors_10)); }
	inline Dictionary_2_t3943999495 * get_m_DownloadingErrors_10() const { return ___m_DownloadingErrors_10; }
	inline Dictionary_2_t3943999495 ** get_address_of_m_DownloadingErrors_10() { return &___m_DownloadingErrors_10; }
	inline void set_m_DownloadingErrors_10(Dictionary_2_t3943999495 * value)
	{
		___m_DownloadingErrors_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_DownloadingErrors_10, value);
	}

	inline static int32_t get_offset_of_m_InProgressOperations_11() { return static_cast<int32_t>(offsetof(AssetManager_t2093079701_StaticFields, ___m_InProgressOperations_11)); }
	inline List_1_t1137397323 * get_m_InProgressOperations_11() const { return ___m_InProgressOperations_11; }
	inline List_1_t1137397323 ** get_address_of_m_InProgressOperations_11() { return &___m_InProgressOperations_11; }
	inline void set_m_InProgressOperations_11(List_1_t1137397323 * value)
	{
		___m_InProgressOperations_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_InProgressOperations_11, value);
	}

	inline static int32_t get_offset_of_m_Dependencies_12() { return static_cast<int32_t>(offsetof(AssetManager_t2093079701_StaticFields, ___m_Dependencies_12)); }
	inline Dictionary_2_t3557165234 * get_m_Dependencies_12() const { return ___m_Dependencies_12; }
	inline Dictionary_2_t3557165234 ** get_address_of_m_Dependencies_12() { return &___m_Dependencies_12; }
	inline void set_m_Dependencies_12(Dictionary_2_t3557165234 * value)
	{
		___m_Dependencies_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_Dependencies_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
