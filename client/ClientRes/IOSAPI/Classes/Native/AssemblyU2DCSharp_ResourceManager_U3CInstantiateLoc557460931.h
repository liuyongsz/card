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
// UnityEngine.ResourceRequest
struct ResourceRequest_t2560315377;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Action`2<System.String,UnityEngine.GameObject>
struct Action_2_t3961854839;
// System.Action`1<System.String>
struct Action_1_t1831019615;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ResourceManager/<InstantiateLocalGameObject>c__Iterator8
struct  U3CInstantiateLocalGameObjectU3Ec__Iterator8_t557460931  : public Il2CppObject
{
public:
	// System.Single ResourceManager/<InstantiateLocalGameObject>c__Iterator8::<startTime>__0
	float ___U3CstartTimeU3E__0_0;
	// System.String ResourceManager/<InstantiateLocalGameObject>c__Iterator8::path
	String_t* ___path_1;
	// UnityEngine.ResourceRequest ResourceManager/<InstantiateLocalGameObject>c__Iterator8::<request>__1
	ResourceRequest_t2560315377 * ___U3CrequestU3E__1_2;
	// UnityEngine.GameObject ResourceManager/<InstantiateLocalGameObject>c__Iterator8::<prefab>__2
	GameObject_t1756533147 * ___U3CprefabU3E__2_3;
	// System.Action`2<System.String,UnityEngine.GameObject> ResourceManager/<InstantiateLocalGameObject>c__Iterator8::OnPackCompleted
	Action_2_t3961854839 * ___OnPackCompleted_4;
	// System.String ResourceManager/<InstantiateLocalGameObject>c__Iterator8::assetName
	String_t* ___assetName_5;
	// System.Action`1<System.String> ResourceManager/<InstantiateLocalGameObject>c__Iterator8::OnPackError
	Action_1_t1831019615 * ___OnPackError_6;
	// System.Int32 ResourceManager/<InstantiateLocalGameObject>c__Iterator8::$PC
	int32_t ___U24PC_7;
	// System.Object ResourceManager/<InstantiateLocalGameObject>c__Iterator8::$current
	Il2CppObject * ___U24current_8;
	// System.String ResourceManager/<InstantiateLocalGameObject>c__Iterator8::<$>path
	String_t* ___U3CU24U3Epath_9;
	// System.Action`2<System.String,UnityEngine.GameObject> ResourceManager/<InstantiateLocalGameObject>c__Iterator8::<$>OnPackCompleted
	Action_2_t3961854839 * ___U3CU24U3EOnPackCompleted_10;
	// System.String ResourceManager/<InstantiateLocalGameObject>c__Iterator8::<$>assetName
	String_t* ___U3CU24U3EassetName_11;
	// System.Action`1<System.String> ResourceManager/<InstantiateLocalGameObject>c__Iterator8::<$>OnPackError
	Action_1_t1831019615 * ___U3CU24U3EOnPackError_12;

public:
	inline static int32_t get_offset_of_U3CstartTimeU3E__0_0() { return static_cast<int32_t>(offsetof(U3CInstantiateLocalGameObjectU3Ec__Iterator8_t557460931, ___U3CstartTimeU3E__0_0)); }
	inline float get_U3CstartTimeU3E__0_0() const { return ___U3CstartTimeU3E__0_0; }
	inline float* get_address_of_U3CstartTimeU3E__0_0() { return &___U3CstartTimeU3E__0_0; }
	inline void set_U3CstartTimeU3E__0_0(float value)
	{
		___U3CstartTimeU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_path_1() { return static_cast<int32_t>(offsetof(U3CInstantiateLocalGameObjectU3Ec__Iterator8_t557460931, ___path_1)); }
	inline String_t* get_path_1() const { return ___path_1; }
	inline String_t** get_address_of_path_1() { return &___path_1; }
	inline void set_path_1(String_t* value)
	{
		___path_1 = value;
		Il2CppCodeGenWriteBarrier(&___path_1, value);
	}

	inline static int32_t get_offset_of_U3CrequestU3E__1_2() { return static_cast<int32_t>(offsetof(U3CInstantiateLocalGameObjectU3Ec__Iterator8_t557460931, ___U3CrequestU3E__1_2)); }
	inline ResourceRequest_t2560315377 * get_U3CrequestU3E__1_2() const { return ___U3CrequestU3E__1_2; }
	inline ResourceRequest_t2560315377 ** get_address_of_U3CrequestU3E__1_2() { return &___U3CrequestU3E__1_2; }
	inline void set_U3CrequestU3E__1_2(ResourceRequest_t2560315377 * value)
	{
		___U3CrequestU3E__1_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CrequestU3E__1_2, value);
	}

	inline static int32_t get_offset_of_U3CprefabU3E__2_3() { return static_cast<int32_t>(offsetof(U3CInstantiateLocalGameObjectU3Ec__Iterator8_t557460931, ___U3CprefabU3E__2_3)); }
	inline GameObject_t1756533147 * get_U3CprefabU3E__2_3() const { return ___U3CprefabU3E__2_3; }
	inline GameObject_t1756533147 ** get_address_of_U3CprefabU3E__2_3() { return &___U3CprefabU3E__2_3; }
	inline void set_U3CprefabU3E__2_3(GameObject_t1756533147 * value)
	{
		___U3CprefabU3E__2_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CprefabU3E__2_3, value);
	}

	inline static int32_t get_offset_of_OnPackCompleted_4() { return static_cast<int32_t>(offsetof(U3CInstantiateLocalGameObjectU3Ec__Iterator8_t557460931, ___OnPackCompleted_4)); }
	inline Action_2_t3961854839 * get_OnPackCompleted_4() const { return ___OnPackCompleted_4; }
	inline Action_2_t3961854839 ** get_address_of_OnPackCompleted_4() { return &___OnPackCompleted_4; }
	inline void set_OnPackCompleted_4(Action_2_t3961854839 * value)
	{
		___OnPackCompleted_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnPackCompleted_4, value);
	}

	inline static int32_t get_offset_of_assetName_5() { return static_cast<int32_t>(offsetof(U3CInstantiateLocalGameObjectU3Ec__Iterator8_t557460931, ___assetName_5)); }
	inline String_t* get_assetName_5() const { return ___assetName_5; }
	inline String_t** get_address_of_assetName_5() { return &___assetName_5; }
	inline void set_assetName_5(String_t* value)
	{
		___assetName_5 = value;
		Il2CppCodeGenWriteBarrier(&___assetName_5, value);
	}

	inline static int32_t get_offset_of_OnPackError_6() { return static_cast<int32_t>(offsetof(U3CInstantiateLocalGameObjectU3Ec__Iterator8_t557460931, ___OnPackError_6)); }
	inline Action_1_t1831019615 * get_OnPackError_6() const { return ___OnPackError_6; }
	inline Action_1_t1831019615 ** get_address_of_OnPackError_6() { return &___OnPackError_6; }
	inline void set_OnPackError_6(Action_1_t1831019615 * value)
	{
		___OnPackError_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnPackError_6, value);
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CInstantiateLocalGameObjectU3Ec__Iterator8_t557460931, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}

	inline static int32_t get_offset_of_U24current_8() { return static_cast<int32_t>(offsetof(U3CInstantiateLocalGameObjectU3Ec__Iterator8_t557460931, ___U24current_8)); }
	inline Il2CppObject * get_U24current_8() const { return ___U24current_8; }
	inline Il2CppObject ** get_address_of_U24current_8() { return &___U24current_8; }
	inline void set_U24current_8(Il2CppObject * value)
	{
		___U24current_8 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_8, value);
	}

	inline static int32_t get_offset_of_U3CU24U3Epath_9() { return static_cast<int32_t>(offsetof(U3CInstantiateLocalGameObjectU3Ec__Iterator8_t557460931, ___U3CU24U3Epath_9)); }
	inline String_t* get_U3CU24U3Epath_9() const { return ___U3CU24U3Epath_9; }
	inline String_t** get_address_of_U3CU24U3Epath_9() { return &___U3CU24U3Epath_9; }
	inline void set_U3CU24U3Epath_9(String_t* value)
	{
		___U3CU24U3Epath_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3Epath_9, value);
	}

	inline static int32_t get_offset_of_U3CU24U3EOnPackCompleted_10() { return static_cast<int32_t>(offsetof(U3CInstantiateLocalGameObjectU3Ec__Iterator8_t557460931, ___U3CU24U3EOnPackCompleted_10)); }
	inline Action_2_t3961854839 * get_U3CU24U3EOnPackCompleted_10() const { return ___U3CU24U3EOnPackCompleted_10; }
	inline Action_2_t3961854839 ** get_address_of_U3CU24U3EOnPackCompleted_10() { return &___U3CU24U3EOnPackCompleted_10; }
	inline void set_U3CU24U3EOnPackCompleted_10(Action_2_t3961854839 * value)
	{
		___U3CU24U3EOnPackCompleted_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3EOnPackCompleted_10, value);
	}

	inline static int32_t get_offset_of_U3CU24U3EassetName_11() { return static_cast<int32_t>(offsetof(U3CInstantiateLocalGameObjectU3Ec__Iterator8_t557460931, ___U3CU24U3EassetName_11)); }
	inline String_t* get_U3CU24U3EassetName_11() const { return ___U3CU24U3EassetName_11; }
	inline String_t** get_address_of_U3CU24U3EassetName_11() { return &___U3CU24U3EassetName_11; }
	inline void set_U3CU24U3EassetName_11(String_t* value)
	{
		___U3CU24U3EassetName_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3EassetName_11, value);
	}

	inline static int32_t get_offset_of_U3CU24U3EOnPackError_12() { return static_cast<int32_t>(offsetof(U3CInstantiateLocalGameObjectU3Ec__Iterator8_t557460931, ___U3CU24U3EOnPackError_12)); }
	inline Action_1_t1831019615 * get_U3CU24U3EOnPackError_12() const { return ___U3CU24U3EOnPackError_12; }
	inline Action_1_t1831019615 ** get_address_of_U3CU24U3EOnPackError_12() { return &___U3CU24U3EOnPackError_12; }
	inline void set_U3CU24U3EOnPackError_12(Action_1_t1831019615 * value)
	{
		___U3CU24U3EOnPackError_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3EOnPackError_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
