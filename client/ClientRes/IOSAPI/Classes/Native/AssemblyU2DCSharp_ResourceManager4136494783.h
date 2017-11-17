#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ResourceManager
struct ResourceManager_t4136494783;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;
// UnityEngine.AsyncOperation
struct AsyncOperation_t3814632279;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ResourceManager
struct  ResourceManager_t4136494783  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 ResourceManager::displayProgress
	int32_t ___displayProgress_4;

public:
	inline static int32_t get_offset_of_displayProgress_4() { return static_cast<int32_t>(offsetof(ResourceManager_t4136494783, ___displayProgress_4)); }
	inline int32_t get_displayProgress_4() const { return ___displayProgress_4; }
	inline int32_t* get_address_of_displayProgress_4() { return &___displayProgress_4; }
	inline void set_displayProgress_4(int32_t value)
	{
		___displayProgress_4 = value;
	}
};

struct ResourceManager_t4136494783_StaticFields
{
public:
	// ResourceManager ResourceManager::m_instance
	ResourceManager_t4136494783 * ___m_instance_2;
	// UnityEngine.GameObject ResourceManager::m_object
	GameObject_t1756533147 * ___m_object_3;
	// System.String ResourceManager::LoadingLevelName
	String_t* ___LoadingLevelName_5;
	// UnityEngine.AsyncOperation ResourceManager::Scene_AsyncOperation
	AsyncOperation_t3814632279 * ___Scene_AsyncOperation_6;

public:
	inline static int32_t get_offset_of_m_instance_2() { return static_cast<int32_t>(offsetof(ResourceManager_t4136494783_StaticFields, ___m_instance_2)); }
	inline ResourceManager_t4136494783 * get_m_instance_2() const { return ___m_instance_2; }
	inline ResourceManager_t4136494783 ** get_address_of_m_instance_2() { return &___m_instance_2; }
	inline void set_m_instance_2(ResourceManager_t4136494783 * value)
	{
		___m_instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_instance_2, value);
	}

	inline static int32_t get_offset_of_m_object_3() { return static_cast<int32_t>(offsetof(ResourceManager_t4136494783_StaticFields, ___m_object_3)); }
	inline GameObject_t1756533147 * get_m_object_3() const { return ___m_object_3; }
	inline GameObject_t1756533147 ** get_address_of_m_object_3() { return &___m_object_3; }
	inline void set_m_object_3(GameObject_t1756533147 * value)
	{
		___m_object_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_object_3, value);
	}

	inline static int32_t get_offset_of_LoadingLevelName_5() { return static_cast<int32_t>(offsetof(ResourceManager_t4136494783_StaticFields, ___LoadingLevelName_5)); }
	inline String_t* get_LoadingLevelName_5() const { return ___LoadingLevelName_5; }
	inline String_t** get_address_of_LoadingLevelName_5() { return &___LoadingLevelName_5; }
	inline void set_LoadingLevelName_5(String_t* value)
	{
		___LoadingLevelName_5 = value;
		Il2CppCodeGenWriteBarrier(&___LoadingLevelName_5, value);
	}

	inline static int32_t get_offset_of_Scene_AsyncOperation_6() { return static_cast<int32_t>(offsetof(ResourceManager_t4136494783_StaticFields, ___Scene_AsyncOperation_6)); }
	inline AsyncOperation_t3814632279 * get_Scene_AsyncOperation_6() const { return ___Scene_AsyncOperation_6; }
	inline AsyncOperation_t3814632279 ** get_address_of_Scene_AsyncOperation_6() { return &___Scene_AsyncOperation_6; }
	inline void set_Scene_AsyncOperation_6(AsyncOperation_t3814632279 * value)
	{
		___Scene_AsyncOperation_6 = value;
		Il2CppCodeGenWriteBarrier(&___Scene_AsyncOperation_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
