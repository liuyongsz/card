#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,LoadedAssetBundle>
struct Dictionary_2_t574274515;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.WWW>
struct Dictionary_2_t539757005;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.Collections.Generic.List`1<AMLoadOperation>
struct List_1_t3812480221;
// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
struct Dictionary_2_t3557165234;

#include "AssemblyU2DCSharp_ManagerTemplate_1_gen2957356684.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AssetBundleManager
struct  AssetBundleManager_t624888341  : public ManagerTemplate_1_t2957356684
{
public:

public:
};

struct AssetBundleManager_t624888341_StaticFields
{
public:
	// System.Boolean AssetBundleManager::SimulateAssetBundleInEditor
	bool ___SimulateAssetBundleInEditor_4;
	// System.Collections.Generic.Dictionary`2<System.String,LoadedAssetBundle> AssetBundleManager::m_loadedAssetBundles
	Dictionary_2_t574274515 * ___m_loadedAssetBundles_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> AssetBundleManager::m_downloadingErrors
	Dictionary_2_t3943999495 * ___m_downloadingErrors_6;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.WWW> AssetBundleManager::m_downloadingWWWs
	Dictionary_2_t539757005 * ___m_downloadingWWWs_7;
	// System.String AssetBundleManager::m_baseDownloadingURL
	String_t* ___m_baseDownloadingURL_8;
	// System.String AssetBundleManager::m_baseLocalStorage
	String_t* ___m_baseLocalStorage_9;
	// System.Collections.Generic.List`1<System.String> AssetBundleManager::m_keysToRemove
	List_1_t1398341365 * ___m_keysToRemove_10;
	// System.Collections.Generic.List`1<AMLoadOperation> AssetBundleManager::m_inProgressOperations
	List_1_t3812480221 * ___m_inProgressOperations_11;
	// System.Collections.Generic.Dictionary`2<System.String,System.String[]> AssetBundleManager::m_dependencies
	Dictionary_2_t3557165234 * ___m_dependencies_12;

public:
	inline static int32_t get_offset_of_SimulateAssetBundleInEditor_4() { return static_cast<int32_t>(offsetof(AssetBundleManager_t624888341_StaticFields, ___SimulateAssetBundleInEditor_4)); }
	inline bool get_SimulateAssetBundleInEditor_4() const { return ___SimulateAssetBundleInEditor_4; }
	inline bool* get_address_of_SimulateAssetBundleInEditor_4() { return &___SimulateAssetBundleInEditor_4; }
	inline void set_SimulateAssetBundleInEditor_4(bool value)
	{
		___SimulateAssetBundleInEditor_4 = value;
	}

	inline static int32_t get_offset_of_m_loadedAssetBundles_5() { return static_cast<int32_t>(offsetof(AssetBundleManager_t624888341_StaticFields, ___m_loadedAssetBundles_5)); }
	inline Dictionary_2_t574274515 * get_m_loadedAssetBundles_5() const { return ___m_loadedAssetBundles_5; }
	inline Dictionary_2_t574274515 ** get_address_of_m_loadedAssetBundles_5() { return &___m_loadedAssetBundles_5; }
	inline void set_m_loadedAssetBundles_5(Dictionary_2_t574274515 * value)
	{
		___m_loadedAssetBundles_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_loadedAssetBundles_5, value);
	}

	inline static int32_t get_offset_of_m_downloadingErrors_6() { return static_cast<int32_t>(offsetof(AssetBundleManager_t624888341_StaticFields, ___m_downloadingErrors_6)); }
	inline Dictionary_2_t3943999495 * get_m_downloadingErrors_6() const { return ___m_downloadingErrors_6; }
	inline Dictionary_2_t3943999495 ** get_address_of_m_downloadingErrors_6() { return &___m_downloadingErrors_6; }
	inline void set_m_downloadingErrors_6(Dictionary_2_t3943999495 * value)
	{
		___m_downloadingErrors_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_downloadingErrors_6, value);
	}

	inline static int32_t get_offset_of_m_downloadingWWWs_7() { return static_cast<int32_t>(offsetof(AssetBundleManager_t624888341_StaticFields, ___m_downloadingWWWs_7)); }
	inline Dictionary_2_t539757005 * get_m_downloadingWWWs_7() const { return ___m_downloadingWWWs_7; }
	inline Dictionary_2_t539757005 ** get_address_of_m_downloadingWWWs_7() { return &___m_downloadingWWWs_7; }
	inline void set_m_downloadingWWWs_7(Dictionary_2_t539757005 * value)
	{
		___m_downloadingWWWs_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_downloadingWWWs_7, value);
	}

	inline static int32_t get_offset_of_m_baseDownloadingURL_8() { return static_cast<int32_t>(offsetof(AssetBundleManager_t624888341_StaticFields, ___m_baseDownloadingURL_8)); }
	inline String_t* get_m_baseDownloadingURL_8() const { return ___m_baseDownloadingURL_8; }
	inline String_t** get_address_of_m_baseDownloadingURL_8() { return &___m_baseDownloadingURL_8; }
	inline void set_m_baseDownloadingURL_8(String_t* value)
	{
		___m_baseDownloadingURL_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_baseDownloadingURL_8, value);
	}

	inline static int32_t get_offset_of_m_baseLocalStorage_9() { return static_cast<int32_t>(offsetof(AssetBundleManager_t624888341_StaticFields, ___m_baseLocalStorage_9)); }
	inline String_t* get_m_baseLocalStorage_9() const { return ___m_baseLocalStorage_9; }
	inline String_t** get_address_of_m_baseLocalStorage_9() { return &___m_baseLocalStorage_9; }
	inline void set_m_baseLocalStorage_9(String_t* value)
	{
		___m_baseLocalStorage_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_baseLocalStorage_9, value);
	}

	inline static int32_t get_offset_of_m_keysToRemove_10() { return static_cast<int32_t>(offsetof(AssetBundleManager_t624888341_StaticFields, ___m_keysToRemove_10)); }
	inline List_1_t1398341365 * get_m_keysToRemove_10() const { return ___m_keysToRemove_10; }
	inline List_1_t1398341365 ** get_address_of_m_keysToRemove_10() { return &___m_keysToRemove_10; }
	inline void set_m_keysToRemove_10(List_1_t1398341365 * value)
	{
		___m_keysToRemove_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_keysToRemove_10, value);
	}

	inline static int32_t get_offset_of_m_inProgressOperations_11() { return static_cast<int32_t>(offsetof(AssetBundleManager_t624888341_StaticFields, ___m_inProgressOperations_11)); }
	inline List_1_t3812480221 * get_m_inProgressOperations_11() const { return ___m_inProgressOperations_11; }
	inline List_1_t3812480221 ** get_address_of_m_inProgressOperations_11() { return &___m_inProgressOperations_11; }
	inline void set_m_inProgressOperations_11(List_1_t3812480221 * value)
	{
		___m_inProgressOperations_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_inProgressOperations_11, value);
	}

	inline static int32_t get_offset_of_m_dependencies_12() { return static_cast<int32_t>(offsetof(AssetBundleManager_t624888341_StaticFields, ___m_dependencies_12)); }
	inline Dictionary_2_t3557165234 * get_m_dependencies_12() const { return ___m_dependencies_12; }
	inline Dictionary_2_t3557165234 ** get_address_of_m_dependencies_12() { return &___m_dependencies_12; }
	inline void set_m_dependencies_12(Dictionary_2_t3557165234 * value)
	{
		___m_dependencies_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_dependencies_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
