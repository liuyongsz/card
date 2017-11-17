#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// AudioCfg
struct AudioCfg_t138726916;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// AudioObject/AudioTarget
struct AudioTarget_t2145010585;
// AMLoadAssetOperation
struct AMLoadAssetOperation_t2496313085;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_AudioObject_AudioStates1584465622.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AudioObject
struct  AudioObject_t2332520225  : public Il2CppObject
{
public:
	// AudioCfg AudioObject::config
	AudioCfg_t138726916 * ___config_0;
	// UnityEngine.GameObject AudioObject::gameObject
	GameObject_t1756533147 * ___gameObject_1;
	// UnityEngine.Transform AudioObject::transform
	Transform_t3275118058 * ___transform_2;
	// UnityEngine.AudioSource AudioObject::audioSource
	AudioSource_t1135106623 * ___audioSource_3;
	// UnityEngine.AudioClip AudioObject::audioClip
	AudioClip_t1932558630 * ___audioClip_4;
	// AudioObject/AudioTarget AudioObject::target
	AudioTarget_t2145010585 * ___target_5;
	// AMLoadAssetOperation AudioObject::asyncLoadOp
	AMLoadAssetOperation_t2496313085 * ___asyncLoadOp_6;
	// System.String AudioObject::assetBundlePath
	String_t* ___assetBundlePath_7;
	// System.Int32 AudioObject::stateElapsed
	int32_t ___stateElapsed_8;
	// AudioObject/AudioStates AudioObject::state
	int32_t ___state_9;
	// System.Int32 AudioObject::<AudioID>k__BackingField
	int32_t ___U3CAudioIDU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_config_0() { return static_cast<int32_t>(offsetof(AudioObject_t2332520225, ___config_0)); }
	inline AudioCfg_t138726916 * get_config_0() const { return ___config_0; }
	inline AudioCfg_t138726916 ** get_address_of_config_0() { return &___config_0; }
	inline void set_config_0(AudioCfg_t138726916 * value)
	{
		___config_0 = value;
		Il2CppCodeGenWriteBarrier(&___config_0, value);
	}

	inline static int32_t get_offset_of_gameObject_1() { return static_cast<int32_t>(offsetof(AudioObject_t2332520225, ___gameObject_1)); }
	inline GameObject_t1756533147 * get_gameObject_1() const { return ___gameObject_1; }
	inline GameObject_t1756533147 ** get_address_of_gameObject_1() { return &___gameObject_1; }
	inline void set_gameObject_1(GameObject_t1756533147 * value)
	{
		___gameObject_1 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_1, value);
	}

	inline static int32_t get_offset_of_transform_2() { return static_cast<int32_t>(offsetof(AudioObject_t2332520225, ___transform_2)); }
	inline Transform_t3275118058 * get_transform_2() const { return ___transform_2; }
	inline Transform_t3275118058 ** get_address_of_transform_2() { return &___transform_2; }
	inline void set_transform_2(Transform_t3275118058 * value)
	{
		___transform_2 = value;
		Il2CppCodeGenWriteBarrier(&___transform_2, value);
	}

	inline static int32_t get_offset_of_audioSource_3() { return static_cast<int32_t>(offsetof(AudioObject_t2332520225, ___audioSource_3)); }
	inline AudioSource_t1135106623 * get_audioSource_3() const { return ___audioSource_3; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_3() { return &___audioSource_3; }
	inline void set_audioSource_3(AudioSource_t1135106623 * value)
	{
		___audioSource_3 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_3, value);
	}

	inline static int32_t get_offset_of_audioClip_4() { return static_cast<int32_t>(offsetof(AudioObject_t2332520225, ___audioClip_4)); }
	inline AudioClip_t1932558630 * get_audioClip_4() const { return ___audioClip_4; }
	inline AudioClip_t1932558630 ** get_address_of_audioClip_4() { return &___audioClip_4; }
	inline void set_audioClip_4(AudioClip_t1932558630 * value)
	{
		___audioClip_4 = value;
		Il2CppCodeGenWriteBarrier(&___audioClip_4, value);
	}

	inline static int32_t get_offset_of_target_5() { return static_cast<int32_t>(offsetof(AudioObject_t2332520225, ___target_5)); }
	inline AudioTarget_t2145010585 * get_target_5() const { return ___target_5; }
	inline AudioTarget_t2145010585 ** get_address_of_target_5() { return &___target_5; }
	inline void set_target_5(AudioTarget_t2145010585 * value)
	{
		___target_5 = value;
		Il2CppCodeGenWriteBarrier(&___target_5, value);
	}

	inline static int32_t get_offset_of_asyncLoadOp_6() { return static_cast<int32_t>(offsetof(AudioObject_t2332520225, ___asyncLoadOp_6)); }
	inline AMLoadAssetOperation_t2496313085 * get_asyncLoadOp_6() const { return ___asyncLoadOp_6; }
	inline AMLoadAssetOperation_t2496313085 ** get_address_of_asyncLoadOp_6() { return &___asyncLoadOp_6; }
	inline void set_asyncLoadOp_6(AMLoadAssetOperation_t2496313085 * value)
	{
		___asyncLoadOp_6 = value;
		Il2CppCodeGenWriteBarrier(&___asyncLoadOp_6, value);
	}

	inline static int32_t get_offset_of_assetBundlePath_7() { return static_cast<int32_t>(offsetof(AudioObject_t2332520225, ___assetBundlePath_7)); }
	inline String_t* get_assetBundlePath_7() const { return ___assetBundlePath_7; }
	inline String_t** get_address_of_assetBundlePath_7() { return &___assetBundlePath_7; }
	inline void set_assetBundlePath_7(String_t* value)
	{
		___assetBundlePath_7 = value;
		Il2CppCodeGenWriteBarrier(&___assetBundlePath_7, value);
	}

	inline static int32_t get_offset_of_stateElapsed_8() { return static_cast<int32_t>(offsetof(AudioObject_t2332520225, ___stateElapsed_8)); }
	inline int32_t get_stateElapsed_8() const { return ___stateElapsed_8; }
	inline int32_t* get_address_of_stateElapsed_8() { return &___stateElapsed_8; }
	inline void set_stateElapsed_8(int32_t value)
	{
		___stateElapsed_8 = value;
	}

	inline static int32_t get_offset_of_state_9() { return static_cast<int32_t>(offsetof(AudioObject_t2332520225, ___state_9)); }
	inline int32_t get_state_9() const { return ___state_9; }
	inline int32_t* get_address_of_state_9() { return &___state_9; }
	inline void set_state_9(int32_t value)
	{
		___state_9 = value;
	}

	inline static int32_t get_offset_of_U3CAudioIDU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(AudioObject_t2332520225, ___U3CAudioIDU3Ek__BackingField_10)); }
	inline int32_t get_U3CAudioIDU3Ek__BackingField_10() const { return ___U3CAudioIDU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CAudioIDU3Ek__BackingField_10() { return &___U3CAudioIDU3Ek__BackingField_10; }
	inline void set_U3CAudioIDU3Ek__BackingField_10(int32_t value)
	{
		___U3CAudioIDU3Ek__BackingField_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
