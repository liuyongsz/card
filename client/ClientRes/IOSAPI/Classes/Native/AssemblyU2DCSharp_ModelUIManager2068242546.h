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
// System.Collections.Generic.List`1<ModelUIManager/UIModelInfo>
struct List_1_t2295501718;
// DictionaryEx`2<System.Int32,UnityEngine.GameObject>
struct DictionaryEx_2_t2670634617;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ModelUIManager
struct  ModelUIManager_t2068242546  : public Il2CppObject
{
public:

public:
};

struct ModelUIManager_t2068242546_StaticFields
{
public:
	// System.Collections.Generic.List`1<ModelUIManager/UIModelInfo> ModelUIManager::mUIModels
	List_1_t2295501718 * ___mUIModels_1;
	// System.Int32 ModelUIManager::miIndex
	int32_t ___miIndex_2;
	// DictionaryEx`2<System.Int32,UnityEngine.GameObject> ModelUIManager::mSceneLights
	DictionaryEx_2_t2670634617 * ___mSceneLights_3;

public:
	inline static int32_t get_offset_of_mUIModels_1() { return static_cast<int32_t>(offsetof(ModelUIManager_t2068242546_StaticFields, ___mUIModels_1)); }
	inline List_1_t2295501718 * get_mUIModels_1() const { return ___mUIModels_1; }
	inline List_1_t2295501718 ** get_address_of_mUIModels_1() { return &___mUIModels_1; }
	inline void set_mUIModels_1(List_1_t2295501718 * value)
	{
		___mUIModels_1 = value;
		Il2CppCodeGenWriteBarrier(&___mUIModels_1, value);
	}

	inline static int32_t get_offset_of_miIndex_2() { return static_cast<int32_t>(offsetof(ModelUIManager_t2068242546_StaticFields, ___miIndex_2)); }
	inline int32_t get_miIndex_2() const { return ___miIndex_2; }
	inline int32_t* get_address_of_miIndex_2() { return &___miIndex_2; }
	inline void set_miIndex_2(int32_t value)
	{
		___miIndex_2 = value;
	}

	inline static int32_t get_offset_of_mSceneLights_3() { return static_cast<int32_t>(offsetof(ModelUIManager_t2068242546_StaticFields, ___mSceneLights_3)); }
	inline DictionaryEx_2_t2670634617 * get_mSceneLights_3() const { return ___mSceneLights_3; }
	inline DictionaryEx_2_t2670634617 ** get_address_of_mSceneLights_3() { return &___mSceneLights_3; }
	inline void set_mSceneLights_3(DictionaryEx_2_t2670634617 * value)
	{
		___mSceneLights_3 = value;
		Il2CppCodeGenWriteBarrier(&___mSceneLights_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
