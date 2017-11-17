#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SceneVO
struct SceneVO_t1660251545;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// GameManager
struct GameManager_t2252321495;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t3671312409;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t2252321495  : public MonoBehaviour_t1158329972
{
public:
	// SceneVO GameManager::CurrentScene
	SceneVO_t1660251545 * ___CurrentScene_2;
	// UnityEngine.AnimationCurve GameManager::PlayerRunCure
	AnimationCurve_t3306541151 * ___PlayerRunCure_3;
	// System.Collections.Generic.List`1<System.String> GameManager::downloadFiles
	List_1_t1398341365 * ___downloadFiles_4;
	// System.Int32 GameManager::TotalUpdateLength
	int32_t ___TotalUpdateLength_5;
	// System.Boolean GameManager::m_openLoginUI
	bool ___m_openLoginUI_7;
	// System.Collections.Generic.List`1<System.String> GameManager::m_loadingObj
	List_1_t1398341365 * ___m_loadingObj_8;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> GameManager::ObjDic
	Dictionary_2_t3671312409 * ___ObjDic_9;
	// System.Boolean GameManager::CheckLoaderInitedComplete
	bool ___CheckLoaderInitedComplete_10;
	// System.String GameManager::loadingstr
	String_t* ___loadingstr_11;

public:
	inline static int32_t get_offset_of_CurrentScene_2() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___CurrentScene_2)); }
	inline SceneVO_t1660251545 * get_CurrentScene_2() const { return ___CurrentScene_2; }
	inline SceneVO_t1660251545 ** get_address_of_CurrentScene_2() { return &___CurrentScene_2; }
	inline void set_CurrentScene_2(SceneVO_t1660251545 * value)
	{
		___CurrentScene_2 = value;
		Il2CppCodeGenWriteBarrier(&___CurrentScene_2, value);
	}

	inline static int32_t get_offset_of_PlayerRunCure_3() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___PlayerRunCure_3)); }
	inline AnimationCurve_t3306541151 * get_PlayerRunCure_3() const { return ___PlayerRunCure_3; }
	inline AnimationCurve_t3306541151 ** get_address_of_PlayerRunCure_3() { return &___PlayerRunCure_3; }
	inline void set_PlayerRunCure_3(AnimationCurve_t3306541151 * value)
	{
		___PlayerRunCure_3 = value;
		Il2CppCodeGenWriteBarrier(&___PlayerRunCure_3, value);
	}

	inline static int32_t get_offset_of_downloadFiles_4() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___downloadFiles_4)); }
	inline List_1_t1398341365 * get_downloadFiles_4() const { return ___downloadFiles_4; }
	inline List_1_t1398341365 ** get_address_of_downloadFiles_4() { return &___downloadFiles_4; }
	inline void set_downloadFiles_4(List_1_t1398341365 * value)
	{
		___downloadFiles_4 = value;
		Il2CppCodeGenWriteBarrier(&___downloadFiles_4, value);
	}

	inline static int32_t get_offset_of_TotalUpdateLength_5() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___TotalUpdateLength_5)); }
	inline int32_t get_TotalUpdateLength_5() const { return ___TotalUpdateLength_5; }
	inline int32_t* get_address_of_TotalUpdateLength_5() { return &___TotalUpdateLength_5; }
	inline void set_TotalUpdateLength_5(int32_t value)
	{
		___TotalUpdateLength_5 = value;
	}

	inline static int32_t get_offset_of_m_openLoginUI_7() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___m_openLoginUI_7)); }
	inline bool get_m_openLoginUI_7() const { return ___m_openLoginUI_7; }
	inline bool* get_address_of_m_openLoginUI_7() { return &___m_openLoginUI_7; }
	inline void set_m_openLoginUI_7(bool value)
	{
		___m_openLoginUI_7 = value;
	}

	inline static int32_t get_offset_of_m_loadingObj_8() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___m_loadingObj_8)); }
	inline List_1_t1398341365 * get_m_loadingObj_8() const { return ___m_loadingObj_8; }
	inline List_1_t1398341365 ** get_address_of_m_loadingObj_8() { return &___m_loadingObj_8; }
	inline void set_m_loadingObj_8(List_1_t1398341365 * value)
	{
		___m_loadingObj_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_loadingObj_8, value);
	}

	inline static int32_t get_offset_of_ObjDic_9() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___ObjDic_9)); }
	inline Dictionary_2_t3671312409 * get_ObjDic_9() const { return ___ObjDic_9; }
	inline Dictionary_2_t3671312409 ** get_address_of_ObjDic_9() { return &___ObjDic_9; }
	inline void set_ObjDic_9(Dictionary_2_t3671312409 * value)
	{
		___ObjDic_9 = value;
		Il2CppCodeGenWriteBarrier(&___ObjDic_9, value);
	}

	inline static int32_t get_offset_of_CheckLoaderInitedComplete_10() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___CheckLoaderInitedComplete_10)); }
	inline bool get_CheckLoaderInitedComplete_10() const { return ___CheckLoaderInitedComplete_10; }
	inline bool* get_address_of_CheckLoaderInitedComplete_10() { return &___CheckLoaderInitedComplete_10; }
	inline void set_CheckLoaderInitedComplete_10(bool value)
	{
		___CheckLoaderInitedComplete_10 = value;
	}

	inline static int32_t get_offset_of_loadingstr_11() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___loadingstr_11)); }
	inline String_t* get_loadingstr_11() const { return ___loadingstr_11; }
	inline String_t** get_address_of_loadingstr_11() { return &___loadingstr_11; }
	inline void set_loadingstr_11(String_t* value)
	{
		___loadingstr_11 = value;
		Il2CppCodeGenWriteBarrier(&___loadingstr_11, value);
	}
};

struct GameManager_t2252321495_StaticFields
{
public:
	// GameManager GameManager::Instance
	GameManager_t2252321495 * ___Instance_6;
	// System.Boolean GameManager::m_openPVEUI
	bool ___m_openPVEUI_12;

public:
	inline static int32_t get_offset_of_Instance_6() { return static_cast<int32_t>(offsetof(GameManager_t2252321495_StaticFields, ___Instance_6)); }
	inline GameManager_t2252321495 * get_Instance_6() const { return ___Instance_6; }
	inline GameManager_t2252321495 ** get_address_of_Instance_6() { return &___Instance_6; }
	inline void set_Instance_6(GameManager_t2252321495 * value)
	{
		___Instance_6 = value;
		Il2CppCodeGenWriteBarrier(&___Instance_6, value);
	}

	inline static int32_t get_offset_of_m_openPVEUI_12() { return static_cast<int32_t>(offsetof(GameManager_t2252321495_StaticFields, ___m_openPVEUI_12)); }
	inline bool get_m_openPVEUI_12() const { return ___m_openPVEUI_12; }
	inline bool* get_address_of_m_openPVEUI_12() { return &___m_openPVEUI_12; }
	inline void set_m_openPVEUI_12(bool value)
	{
		___m_openPVEUI_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
