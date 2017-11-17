#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,SkinManagerItem>
struct Dictionary_2_t957762208;
// System.String
struct String_t;
// System.Collections.Generic.List`1<SkinManagerLoaderItem>
struct List_1_t3576361444;
// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;
// SkinManager
struct SkinManager_t2298573004;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkinManager
struct  SkinManager_t2298573004  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,SkinManagerItem> SkinManager::m_dic
	Dictionary_2_t957762208 * ___m_dic_0;
	// System.String SkinManager::SkinName_Cloth
	String_t* ___SkinName_Cloth_1;
	// System.String SkinManager::SkinName_Skin
	String_t* ___SkinName_Skin_2;
	// System.String SkinManager::SkinName_Hair
	String_t* ___SkinName_Hair_3;
	// System.Boolean SkinManager::inLoading
	bool ___inLoading_4;
	// System.Collections.Generic.List`1<SkinManagerLoaderItem> SkinManager::m_currentLoaders
	List_1_t3576361444 * ___m_currentLoaders_5;
	// UnityEngine.Events.UnityAction SkinManager::LoaderCompleteCallBack
	UnityAction_t4025899511 * ___LoaderCompleteCallBack_6;

public:
	inline static int32_t get_offset_of_m_dic_0() { return static_cast<int32_t>(offsetof(SkinManager_t2298573004, ___m_dic_0)); }
	inline Dictionary_2_t957762208 * get_m_dic_0() const { return ___m_dic_0; }
	inline Dictionary_2_t957762208 ** get_address_of_m_dic_0() { return &___m_dic_0; }
	inline void set_m_dic_0(Dictionary_2_t957762208 * value)
	{
		___m_dic_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_dic_0, value);
	}

	inline static int32_t get_offset_of_SkinName_Cloth_1() { return static_cast<int32_t>(offsetof(SkinManager_t2298573004, ___SkinName_Cloth_1)); }
	inline String_t* get_SkinName_Cloth_1() const { return ___SkinName_Cloth_1; }
	inline String_t** get_address_of_SkinName_Cloth_1() { return &___SkinName_Cloth_1; }
	inline void set_SkinName_Cloth_1(String_t* value)
	{
		___SkinName_Cloth_1 = value;
		Il2CppCodeGenWriteBarrier(&___SkinName_Cloth_1, value);
	}

	inline static int32_t get_offset_of_SkinName_Skin_2() { return static_cast<int32_t>(offsetof(SkinManager_t2298573004, ___SkinName_Skin_2)); }
	inline String_t* get_SkinName_Skin_2() const { return ___SkinName_Skin_2; }
	inline String_t** get_address_of_SkinName_Skin_2() { return &___SkinName_Skin_2; }
	inline void set_SkinName_Skin_2(String_t* value)
	{
		___SkinName_Skin_2 = value;
		Il2CppCodeGenWriteBarrier(&___SkinName_Skin_2, value);
	}

	inline static int32_t get_offset_of_SkinName_Hair_3() { return static_cast<int32_t>(offsetof(SkinManager_t2298573004, ___SkinName_Hair_3)); }
	inline String_t* get_SkinName_Hair_3() const { return ___SkinName_Hair_3; }
	inline String_t** get_address_of_SkinName_Hair_3() { return &___SkinName_Hair_3; }
	inline void set_SkinName_Hair_3(String_t* value)
	{
		___SkinName_Hair_3 = value;
		Il2CppCodeGenWriteBarrier(&___SkinName_Hair_3, value);
	}

	inline static int32_t get_offset_of_inLoading_4() { return static_cast<int32_t>(offsetof(SkinManager_t2298573004, ___inLoading_4)); }
	inline bool get_inLoading_4() const { return ___inLoading_4; }
	inline bool* get_address_of_inLoading_4() { return &___inLoading_4; }
	inline void set_inLoading_4(bool value)
	{
		___inLoading_4 = value;
	}

	inline static int32_t get_offset_of_m_currentLoaders_5() { return static_cast<int32_t>(offsetof(SkinManager_t2298573004, ___m_currentLoaders_5)); }
	inline List_1_t3576361444 * get_m_currentLoaders_5() const { return ___m_currentLoaders_5; }
	inline List_1_t3576361444 ** get_address_of_m_currentLoaders_5() { return &___m_currentLoaders_5; }
	inline void set_m_currentLoaders_5(List_1_t3576361444 * value)
	{
		___m_currentLoaders_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_currentLoaders_5, value);
	}

	inline static int32_t get_offset_of_LoaderCompleteCallBack_6() { return static_cast<int32_t>(offsetof(SkinManager_t2298573004, ___LoaderCompleteCallBack_6)); }
	inline UnityAction_t4025899511 * get_LoaderCompleteCallBack_6() const { return ___LoaderCompleteCallBack_6; }
	inline UnityAction_t4025899511 ** get_address_of_LoaderCompleteCallBack_6() { return &___LoaderCompleteCallBack_6; }
	inline void set_LoaderCompleteCallBack_6(UnityAction_t4025899511 * value)
	{
		___LoaderCompleteCallBack_6 = value;
		Il2CppCodeGenWriteBarrier(&___LoaderCompleteCallBack_6, value);
	}
};

struct SkinManager_t2298573004_StaticFields
{
public:
	// SkinManager SkinManager::m_ins
	SkinManager_t2298573004 * ___m_ins_7;

public:
	inline static int32_t get_offset_of_m_ins_7() { return static_cast<int32_t>(offsetof(SkinManager_t2298573004_StaticFields, ___m_ins_7)); }
	inline SkinManager_t2298573004 * get_m_ins_7() const { return ___m_ins_7; }
	inline SkinManager_t2298573004 ** get_address_of_m_ins_7() { return &___m_ins_7; }
	inline void set_m_ins_7(SkinManager_t2298573004 * value)
	{
		___m_ins_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_ins_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
