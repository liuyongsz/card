#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.LinkedList`1<EffectObject>
struct LinkedList_1_t1623847831;
// System.Collections.Generic.List`1<EffectObject>
struct List_1_t688260734;

#include "AssemblyU2DCSharp_ManagerTemplate_1_gen780544199.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EffectManager
struct  EffectManager_t2743043152  : public ManagerTemplate_1_t780544199
{
public:

public:
};

struct EffectManager_t2743043152_StaticFields
{
public:
	// System.Int32 EffectManager::EFFECT_POOL_SIZE
	int32_t ___EFFECT_POOL_SIZE_4;
	// System.Collections.Generic.LinkedList`1<EffectObject> EffectManager::pool
	LinkedList_1_t1623847831 * ___pool_5;
	// System.Collections.Generic.LinkedList`1<EffectObject> EffectManager::activeEffects
	LinkedList_1_t1623847831 * ___activeEffects_6;
	// System.Collections.Generic.List`1<EffectObject> EffectManager::pending
	List_1_t688260734 * ___pending_7;
	// System.Boolean EffectManager::updating
	bool ___updating_8;

public:
	inline static int32_t get_offset_of_EFFECT_POOL_SIZE_4() { return static_cast<int32_t>(offsetof(EffectManager_t2743043152_StaticFields, ___EFFECT_POOL_SIZE_4)); }
	inline int32_t get_EFFECT_POOL_SIZE_4() const { return ___EFFECT_POOL_SIZE_4; }
	inline int32_t* get_address_of_EFFECT_POOL_SIZE_4() { return &___EFFECT_POOL_SIZE_4; }
	inline void set_EFFECT_POOL_SIZE_4(int32_t value)
	{
		___EFFECT_POOL_SIZE_4 = value;
	}

	inline static int32_t get_offset_of_pool_5() { return static_cast<int32_t>(offsetof(EffectManager_t2743043152_StaticFields, ___pool_5)); }
	inline LinkedList_1_t1623847831 * get_pool_5() const { return ___pool_5; }
	inline LinkedList_1_t1623847831 ** get_address_of_pool_5() { return &___pool_5; }
	inline void set_pool_5(LinkedList_1_t1623847831 * value)
	{
		___pool_5 = value;
		Il2CppCodeGenWriteBarrier(&___pool_5, value);
	}

	inline static int32_t get_offset_of_activeEffects_6() { return static_cast<int32_t>(offsetof(EffectManager_t2743043152_StaticFields, ___activeEffects_6)); }
	inline LinkedList_1_t1623847831 * get_activeEffects_6() const { return ___activeEffects_6; }
	inline LinkedList_1_t1623847831 ** get_address_of_activeEffects_6() { return &___activeEffects_6; }
	inline void set_activeEffects_6(LinkedList_1_t1623847831 * value)
	{
		___activeEffects_6 = value;
		Il2CppCodeGenWriteBarrier(&___activeEffects_6, value);
	}

	inline static int32_t get_offset_of_pending_7() { return static_cast<int32_t>(offsetof(EffectManager_t2743043152_StaticFields, ___pending_7)); }
	inline List_1_t688260734 * get_pending_7() const { return ___pending_7; }
	inline List_1_t688260734 ** get_address_of_pending_7() { return &___pending_7; }
	inline void set_pending_7(List_1_t688260734 * value)
	{
		___pending_7 = value;
		Il2CppCodeGenWriteBarrier(&___pending_7, value);
	}

	inline static int32_t get_offset_of_updating_8() { return static_cast<int32_t>(offsetof(EffectManager_t2743043152_StaticFields, ___updating_8)); }
	inline bool get_updating_8() const { return ___updating_8; }
	inline bool* get_address_of_updating_8() { return &___updating_8; }
	inline void set_updating_8(bool value)
	{
		___updating_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
