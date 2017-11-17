#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// DictionaryEx`2<System.String,UnityEngine.GameObject>
struct DictionaryEx_2_t1282620948;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_NetState467798588.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GUIManager
struct  GUIManager_t2551693622  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct GUIManager_t2551693622_StaticFields
{
public:
	// NetState GUIManager::CurrentNetState
	int32_t ___CurrentNetState_2;
	// System.Int32 GUIManager::index
	int32_t ___index_3;
	// UnityEngine.Transform GUIManager::uiLayer1
	Transform_t3275118058 * ___uiLayer1_4;
	// UnityEngine.Vector3 GUIManager::pos
	Vector3_t2243707580  ___pos_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GUIManager::jumpList
	List_1_t1125654279 * ___jumpList_6;
	// DictionaryEx`2<System.String,UnityEngine.GameObject> GUIManager::m_panelList
	DictionaryEx_2_t1282620948 * ___m_panelList_7;
	// DictionaryEx`2<System.String,UnityEngine.GameObject> GUIManager::m_panelExitList
	DictionaryEx_2_t1282620948 * ___m_panelExitList_8;
	// System.Collections.Generic.List`1<System.String> GUIManager::jumpContentList
	List_1_t1398341365 * ___jumpContentList_9;
	// System.Boolean GUIManager::AlertBrokenNetWork
	bool ___AlertBrokenNetWork_10;
	// System.Single GUIManager::LoadingScenePer
	float ___LoadingScenePer_11;

public:
	inline static int32_t get_offset_of_CurrentNetState_2() { return static_cast<int32_t>(offsetof(GUIManager_t2551693622_StaticFields, ___CurrentNetState_2)); }
	inline int32_t get_CurrentNetState_2() const { return ___CurrentNetState_2; }
	inline int32_t* get_address_of_CurrentNetState_2() { return &___CurrentNetState_2; }
	inline void set_CurrentNetState_2(int32_t value)
	{
		___CurrentNetState_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(GUIManager_t2551693622_StaticFields, ___index_3)); }
	inline int32_t get_index_3() const { return ___index_3; }
	inline int32_t* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(int32_t value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_uiLayer1_4() { return static_cast<int32_t>(offsetof(GUIManager_t2551693622_StaticFields, ___uiLayer1_4)); }
	inline Transform_t3275118058 * get_uiLayer1_4() const { return ___uiLayer1_4; }
	inline Transform_t3275118058 ** get_address_of_uiLayer1_4() { return &___uiLayer1_4; }
	inline void set_uiLayer1_4(Transform_t3275118058 * value)
	{
		___uiLayer1_4 = value;
		Il2CppCodeGenWriteBarrier(&___uiLayer1_4, value);
	}

	inline static int32_t get_offset_of_pos_5() { return static_cast<int32_t>(offsetof(GUIManager_t2551693622_StaticFields, ___pos_5)); }
	inline Vector3_t2243707580  get_pos_5() const { return ___pos_5; }
	inline Vector3_t2243707580 * get_address_of_pos_5() { return &___pos_5; }
	inline void set_pos_5(Vector3_t2243707580  value)
	{
		___pos_5 = value;
	}

	inline static int32_t get_offset_of_jumpList_6() { return static_cast<int32_t>(offsetof(GUIManager_t2551693622_StaticFields, ___jumpList_6)); }
	inline List_1_t1125654279 * get_jumpList_6() const { return ___jumpList_6; }
	inline List_1_t1125654279 ** get_address_of_jumpList_6() { return &___jumpList_6; }
	inline void set_jumpList_6(List_1_t1125654279 * value)
	{
		___jumpList_6 = value;
		Il2CppCodeGenWriteBarrier(&___jumpList_6, value);
	}

	inline static int32_t get_offset_of_m_panelList_7() { return static_cast<int32_t>(offsetof(GUIManager_t2551693622_StaticFields, ___m_panelList_7)); }
	inline DictionaryEx_2_t1282620948 * get_m_panelList_7() const { return ___m_panelList_7; }
	inline DictionaryEx_2_t1282620948 ** get_address_of_m_panelList_7() { return &___m_panelList_7; }
	inline void set_m_panelList_7(DictionaryEx_2_t1282620948 * value)
	{
		___m_panelList_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_panelList_7, value);
	}

	inline static int32_t get_offset_of_m_panelExitList_8() { return static_cast<int32_t>(offsetof(GUIManager_t2551693622_StaticFields, ___m_panelExitList_8)); }
	inline DictionaryEx_2_t1282620948 * get_m_panelExitList_8() const { return ___m_panelExitList_8; }
	inline DictionaryEx_2_t1282620948 ** get_address_of_m_panelExitList_8() { return &___m_panelExitList_8; }
	inline void set_m_panelExitList_8(DictionaryEx_2_t1282620948 * value)
	{
		___m_panelExitList_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_panelExitList_8, value);
	}

	inline static int32_t get_offset_of_jumpContentList_9() { return static_cast<int32_t>(offsetof(GUIManager_t2551693622_StaticFields, ___jumpContentList_9)); }
	inline List_1_t1398341365 * get_jumpContentList_9() const { return ___jumpContentList_9; }
	inline List_1_t1398341365 ** get_address_of_jumpContentList_9() { return &___jumpContentList_9; }
	inline void set_jumpContentList_9(List_1_t1398341365 * value)
	{
		___jumpContentList_9 = value;
		Il2CppCodeGenWriteBarrier(&___jumpContentList_9, value);
	}

	inline static int32_t get_offset_of_AlertBrokenNetWork_10() { return static_cast<int32_t>(offsetof(GUIManager_t2551693622_StaticFields, ___AlertBrokenNetWork_10)); }
	inline bool get_AlertBrokenNetWork_10() const { return ___AlertBrokenNetWork_10; }
	inline bool* get_address_of_AlertBrokenNetWork_10() { return &___AlertBrokenNetWork_10; }
	inline void set_AlertBrokenNetWork_10(bool value)
	{
		___AlertBrokenNetWork_10 = value;
	}

	inline static int32_t get_offset_of_LoadingScenePer_11() { return static_cast<int32_t>(offsetof(GUIManager_t2551693622_StaticFields, ___LoadingScenePer_11)); }
	inline float get_LoadingScenePer_11() const { return ___LoadingScenePer_11; }
	inline float* get_address_of_LoadingScenePer_11() { return &___LoadingScenePer_11; }
	inline void set_LoadingScenePer_11(float value)
	{
		___LoadingScenePer_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
