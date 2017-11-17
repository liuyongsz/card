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
// AssetBundles.AssetBundleLoadAssetOperation
struct AssetBundleLoadAssetOperation_t108400409;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Action`3<System.String,UnityEngine.GameObject,System.Object>
struct Action_3_t1036994317;
// System.Object
struct Il2CppObject;
// System.Action`1<System.String>
struct Action_1_t1831019615;
// ResourceManager
struct ResourceManager_t4136494783;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ResourceManager/<InstantiateGameObjectAsync>c__Iterator9
struct  U3CInstantiateGameObjectAsyncU3Ec__Iterator9_t538513457  : public Il2CppObject
{
public:
	// System.Single ResourceManager/<InstantiateGameObjectAsync>c__Iterator9::<startTime>__0
	float ___U3CstartTimeU3E__0_0;
	// System.String ResourceManager/<InstantiateGameObjectAsync>c__Iterator9::assetBundleName
	String_t* ___assetBundleName_1;
	// System.String ResourceManager/<InstantiateGameObjectAsync>c__Iterator9::assetName
	String_t* ___assetName_2;
	// AssetBundles.AssetBundleLoadAssetOperation ResourceManager/<InstantiateGameObjectAsync>c__Iterator9::<request>__1
	AssetBundleLoadAssetOperation_t108400409 * ___U3CrequestU3E__1_3;
	// UnityEngine.GameObject ResourceManager/<InstantiateGameObjectAsync>c__Iterator9::<prefab>__2
	GameObject_t1756533147 * ___U3CprefabU3E__2_4;
	// UnityEngine.GameObject ResourceManager/<InstantiateGameObjectAsync>c__Iterator9::<go>__3
	GameObject_t1756533147 * ___U3CgoU3E__3_5;
	// System.Action`3<System.String,UnityEngine.GameObject,System.Object> ResourceManager/<InstantiateGameObjectAsync>c__Iterator9::OnPackCompleted
	Action_3_t1036994317 * ___OnPackCompleted_6;
	// System.Object ResourceManager/<InstantiateGameObjectAsync>c__Iterator9::data
	Il2CppObject * ___data_7;
	// System.Action`1<System.String> ResourceManager/<InstantiateGameObjectAsync>c__Iterator9::OnPackError
	Action_1_t1831019615 * ___OnPackError_8;
	// System.Single ResourceManager/<InstantiateGameObjectAsync>c__Iterator9::<elapsedTime>__4
	float ___U3CelapsedTimeU3E__4_9;
	// System.Int32 ResourceManager/<InstantiateGameObjectAsync>c__Iterator9::$PC
	int32_t ___U24PC_10;
	// System.Object ResourceManager/<InstantiateGameObjectAsync>c__Iterator9::$current
	Il2CppObject * ___U24current_11;
	// System.String ResourceManager/<InstantiateGameObjectAsync>c__Iterator9::<$>assetBundleName
	String_t* ___U3CU24U3EassetBundleName_12;
	// System.String ResourceManager/<InstantiateGameObjectAsync>c__Iterator9::<$>assetName
	String_t* ___U3CU24U3EassetName_13;
	// System.Action`3<System.String,UnityEngine.GameObject,System.Object> ResourceManager/<InstantiateGameObjectAsync>c__Iterator9::<$>OnPackCompleted
	Action_3_t1036994317 * ___U3CU24U3EOnPackCompleted_14;
	// System.Object ResourceManager/<InstantiateGameObjectAsync>c__Iterator9::<$>data
	Il2CppObject * ___U3CU24U3Edata_15;
	// System.Action`1<System.String> ResourceManager/<InstantiateGameObjectAsync>c__Iterator9::<$>OnPackError
	Action_1_t1831019615 * ___U3CU24U3EOnPackError_16;
	// ResourceManager ResourceManager/<InstantiateGameObjectAsync>c__Iterator9::<>f__this
	ResourceManager_t4136494783 * ___U3CU3Ef__this_17;

public:
	inline static int32_t get_offset_of_U3CstartTimeU3E__0_0() { return static_cast<int32_t>(offsetof(U3CInstantiateGameObjectAsyncU3Ec__Iterator9_t538513457, ___U3CstartTimeU3E__0_0)); }
	inline float get_U3CstartTimeU3E__0_0() const { return ___U3CstartTimeU3E__0_0; }
	inline float* get_address_of_U3CstartTimeU3E__0_0() { return &___U3CstartTimeU3E__0_0; }
	inline void set_U3CstartTimeU3E__0_0(float value)
	{
		___U3CstartTimeU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_assetBundleName_1() { return static_cast<int32_t>(offsetof(U3CInstantiateGameObjectAsyncU3Ec__Iterator9_t538513457, ___assetBundleName_1)); }
	inline String_t* get_assetBundleName_1() const { return ___assetBundleName_1; }
	inline String_t** get_address_of_assetBundleName_1() { return &___assetBundleName_1; }
	inline void set_assetBundleName_1(String_t* value)
	{
		___assetBundleName_1 = value;
		Il2CppCodeGenWriteBarrier(&___assetBundleName_1, value);
	}

	inline static int32_t get_offset_of_assetName_2() { return static_cast<int32_t>(offsetof(U3CInstantiateGameObjectAsyncU3Ec__Iterator9_t538513457, ___assetName_2)); }
	inline String_t* get_assetName_2() const { return ___assetName_2; }
	inline String_t** get_address_of_assetName_2() { return &___assetName_2; }
	inline void set_assetName_2(String_t* value)
	{
		___assetName_2 = value;
		Il2CppCodeGenWriteBarrier(&___assetName_2, value);
	}

	inline static int32_t get_offset_of_U3CrequestU3E__1_3() { return static_cast<int32_t>(offsetof(U3CInstantiateGameObjectAsyncU3Ec__Iterator9_t538513457, ___U3CrequestU3E__1_3)); }
	inline AssetBundleLoadAssetOperation_t108400409 * get_U3CrequestU3E__1_3() const { return ___U3CrequestU3E__1_3; }
	inline AssetBundleLoadAssetOperation_t108400409 ** get_address_of_U3CrequestU3E__1_3() { return &___U3CrequestU3E__1_3; }
	inline void set_U3CrequestU3E__1_3(AssetBundleLoadAssetOperation_t108400409 * value)
	{
		___U3CrequestU3E__1_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CrequestU3E__1_3, value);
	}

	inline static int32_t get_offset_of_U3CprefabU3E__2_4() { return static_cast<int32_t>(offsetof(U3CInstantiateGameObjectAsyncU3Ec__Iterator9_t538513457, ___U3CprefabU3E__2_4)); }
	inline GameObject_t1756533147 * get_U3CprefabU3E__2_4() const { return ___U3CprefabU3E__2_4; }
	inline GameObject_t1756533147 ** get_address_of_U3CprefabU3E__2_4() { return &___U3CprefabU3E__2_4; }
	inline void set_U3CprefabU3E__2_4(GameObject_t1756533147 * value)
	{
		___U3CprefabU3E__2_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CprefabU3E__2_4, value);
	}

	inline static int32_t get_offset_of_U3CgoU3E__3_5() { return static_cast<int32_t>(offsetof(U3CInstantiateGameObjectAsyncU3Ec__Iterator9_t538513457, ___U3CgoU3E__3_5)); }
	inline GameObject_t1756533147 * get_U3CgoU3E__3_5() const { return ___U3CgoU3E__3_5; }
	inline GameObject_t1756533147 ** get_address_of_U3CgoU3E__3_5() { return &___U3CgoU3E__3_5; }
	inline void set_U3CgoU3E__3_5(GameObject_t1756533147 * value)
	{
		___U3CgoU3E__3_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CgoU3E__3_5, value);
	}

	inline static int32_t get_offset_of_OnPackCompleted_6() { return static_cast<int32_t>(offsetof(U3CInstantiateGameObjectAsyncU3Ec__Iterator9_t538513457, ___OnPackCompleted_6)); }
	inline Action_3_t1036994317 * get_OnPackCompleted_6() const { return ___OnPackCompleted_6; }
	inline Action_3_t1036994317 ** get_address_of_OnPackCompleted_6() { return &___OnPackCompleted_6; }
	inline void set_OnPackCompleted_6(Action_3_t1036994317 * value)
	{
		___OnPackCompleted_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnPackCompleted_6, value);
	}

	inline static int32_t get_offset_of_data_7() { return static_cast<int32_t>(offsetof(U3CInstantiateGameObjectAsyncU3Ec__Iterator9_t538513457, ___data_7)); }
	inline Il2CppObject * get_data_7() const { return ___data_7; }
	inline Il2CppObject ** get_address_of_data_7() { return &___data_7; }
	inline void set_data_7(Il2CppObject * value)
	{
		___data_7 = value;
		Il2CppCodeGenWriteBarrier(&___data_7, value);
	}

	inline static int32_t get_offset_of_OnPackError_8() { return static_cast<int32_t>(offsetof(U3CInstantiateGameObjectAsyncU3Ec__Iterator9_t538513457, ___OnPackError_8)); }
	inline Action_1_t1831019615 * get_OnPackError_8() const { return ___OnPackError_8; }
	inline Action_1_t1831019615 ** get_address_of_OnPackError_8() { return &___OnPackError_8; }
	inline void set_OnPackError_8(Action_1_t1831019615 * value)
	{
		___OnPackError_8 = value;
		Il2CppCodeGenWriteBarrier(&___OnPackError_8, value);
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E__4_9() { return static_cast<int32_t>(offsetof(U3CInstantiateGameObjectAsyncU3Ec__Iterator9_t538513457, ___U3CelapsedTimeU3E__4_9)); }
	inline float get_U3CelapsedTimeU3E__4_9() const { return ___U3CelapsedTimeU3E__4_9; }
	inline float* get_address_of_U3CelapsedTimeU3E__4_9() { return &___U3CelapsedTimeU3E__4_9; }
	inline void set_U3CelapsedTimeU3E__4_9(float value)
	{
		___U3CelapsedTimeU3E__4_9 = value;
	}

	inline static int32_t get_offset_of_U24PC_10() { return static_cast<int32_t>(offsetof(U3CInstantiateGameObjectAsyncU3Ec__Iterator9_t538513457, ___U24PC_10)); }
	inline int32_t get_U24PC_10() const { return ___U24PC_10; }
	inline int32_t* get_address_of_U24PC_10() { return &___U24PC_10; }
	inline void set_U24PC_10(int32_t value)
	{
		___U24PC_10 = value;
	}

	inline static int32_t get_offset_of_U24current_11() { return static_cast<int32_t>(offsetof(U3CInstantiateGameObjectAsyncU3Ec__Iterator9_t538513457, ___U24current_11)); }
	inline Il2CppObject * get_U24current_11() const { return ___U24current_11; }
	inline Il2CppObject ** get_address_of_U24current_11() { return &___U24current_11; }
	inline void set_U24current_11(Il2CppObject * value)
	{
		___U24current_11 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_11, value);
	}

	inline static int32_t get_offset_of_U3CU24U3EassetBundleName_12() { return static_cast<int32_t>(offsetof(U3CInstantiateGameObjectAsyncU3Ec__Iterator9_t538513457, ___U3CU24U3EassetBundleName_12)); }
	inline String_t* get_U3CU24U3EassetBundleName_12() const { return ___U3CU24U3EassetBundleName_12; }
	inline String_t** get_address_of_U3CU24U3EassetBundleName_12() { return &___U3CU24U3EassetBundleName_12; }
	inline void set_U3CU24U3EassetBundleName_12(String_t* value)
	{
		___U3CU24U3EassetBundleName_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3EassetBundleName_12, value);
	}

	inline static int32_t get_offset_of_U3CU24U3EassetName_13() { return static_cast<int32_t>(offsetof(U3CInstantiateGameObjectAsyncU3Ec__Iterator9_t538513457, ___U3CU24U3EassetName_13)); }
	inline String_t* get_U3CU24U3EassetName_13() const { return ___U3CU24U3EassetName_13; }
	inline String_t** get_address_of_U3CU24U3EassetName_13() { return &___U3CU24U3EassetName_13; }
	inline void set_U3CU24U3EassetName_13(String_t* value)
	{
		___U3CU24U3EassetName_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3EassetName_13, value);
	}

	inline static int32_t get_offset_of_U3CU24U3EOnPackCompleted_14() { return static_cast<int32_t>(offsetof(U3CInstantiateGameObjectAsyncU3Ec__Iterator9_t538513457, ___U3CU24U3EOnPackCompleted_14)); }
	inline Action_3_t1036994317 * get_U3CU24U3EOnPackCompleted_14() const { return ___U3CU24U3EOnPackCompleted_14; }
	inline Action_3_t1036994317 ** get_address_of_U3CU24U3EOnPackCompleted_14() { return &___U3CU24U3EOnPackCompleted_14; }
	inline void set_U3CU24U3EOnPackCompleted_14(Action_3_t1036994317 * value)
	{
		___U3CU24U3EOnPackCompleted_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3EOnPackCompleted_14, value);
	}

	inline static int32_t get_offset_of_U3CU24U3Edata_15() { return static_cast<int32_t>(offsetof(U3CInstantiateGameObjectAsyncU3Ec__Iterator9_t538513457, ___U3CU24U3Edata_15)); }
	inline Il2CppObject * get_U3CU24U3Edata_15() const { return ___U3CU24U3Edata_15; }
	inline Il2CppObject ** get_address_of_U3CU24U3Edata_15() { return &___U3CU24U3Edata_15; }
	inline void set_U3CU24U3Edata_15(Il2CppObject * value)
	{
		___U3CU24U3Edata_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3Edata_15, value);
	}

	inline static int32_t get_offset_of_U3CU24U3EOnPackError_16() { return static_cast<int32_t>(offsetof(U3CInstantiateGameObjectAsyncU3Ec__Iterator9_t538513457, ___U3CU24U3EOnPackError_16)); }
	inline Action_1_t1831019615 * get_U3CU24U3EOnPackError_16() const { return ___U3CU24U3EOnPackError_16; }
	inline Action_1_t1831019615 ** get_address_of_U3CU24U3EOnPackError_16() { return &___U3CU24U3EOnPackError_16; }
	inline void set_U3CU24U3EOnPackError_16(Action_1_t1831019615 * value)
	{
		___U3CU24U3EOnPackError_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3EOnPackError_16, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_17() { return static_cast<int32_t>(offsetof(U3CInstantiateGameObjectAsyncU3Ec__Iterator9_t538513457, ___U3CU3Ef__this_17)); }
	inline ResourceManager_t4136494783 * get_U3CU3Ef__this_17() const { return ___U3CU3Ef__this_17; }
	inline ResourceManager_t4136494783 ** get_address_of_U3CU3Ef__this_17() { return &___U3CU3Ef__this_17; }
	inline void set_U3CU3Ef__this_17(ResourceManager_t4136494783 * value)
	{
		___U3CU3Ef__this_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
