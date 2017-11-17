#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// AssetBundleManager
struct AssetBundleManager_t624888341;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MonoBehaviourSingleton`1<AssetBundleManager>
struct  MonoBehaviourSingleton_1_t698989034  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct MonoBehaviourSingleton_1_t698989034_StaticFields
{
public:
	// T MonoBehaviourSingleton`1::instance
	AssetBundleManager_t624888341 * ___instance_2;
	// System.Boolean MonoBehaviourSingleton`1::applicationQuiting
	bool ___applicationQuiting_3;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(MonoBehaviourSingleton_1_t698989034_StaticFields, ___instance_2)); }
	inline AssetBundleManager_t624888341 * get_instance_2() const { return ___instance_2; }
	inline AssetBundleManager_t624888341 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(AssetBundleManager_t624888341 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}

	inline static int32_t get_offset_of_applicationQuiting_3() { return static_cast<int32_t>(offsetof(MonoBehaviourSingleton_1_t698989034_StaticFields, ___applicationQuiting_3)); }
	inline bool get_applicationQuiting_3() const { return ___applicationQuiting_3; }
	inline bool* get_address_of_applicationQuiting_3() { return &___applicationQuiting_3; }
	inline void set_applicationQuiting_3(bool value)
	{
		___applicationQuiting_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
