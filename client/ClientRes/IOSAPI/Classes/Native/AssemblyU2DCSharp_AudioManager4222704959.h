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
// System.Collections.Generic.LinkedList`1<AudioObject>
struct LinkedList_1_t2637228454;
// UnityEngine.Audio.AudioMixer
struct AudioMixer_t3244290001;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Audio.AudioMixerGroup>
struct Dictionary_2_t4262339575;

#include "AssemblyU2DCSharp_ManagerTemplate_1_gen2260206006.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AudioManager
struct  AudioManager_t4222704959  : public ManagerTemplate_1_t2260206006
{
public:

public:
};

struct AudioManager_t4222704959_StaticFields
{
public:
	// System.Int32 AudioManager::AUDIO_POOL_SIZE
	int32_t ___AUDIO_POOL_SIZE_4;
	// UnityEngine.Transform AudioManager::listenerTarget
	Transform_t3275118058 * ___listenerTarget_5;
	// UnityEngine.Transform AudioManager::listenerTrans
	Transform_t3275118058 * ___listenerTrans_6;
	// System.Collections.Generic.LinkedList`1<AudioObject> AudioManager::pool
	LinkedList_1_t2637228454 * ___pool_7;
	// System.Collections.Generic.LinkedList`1<AudioObject> AudioManager::activeAudio
	LinkedList_1_t2637228454 * ___activeAudio_8;
	// UnityEngine.Audio.AudioMixer AudioManager::defaultMixer
	AudioMixer_t3244290001 * ___defaultMixer_9;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Audio.AudioMixerGroup> AudioManager::audioMixerGroups
	Dictionary_2_t4262339575 * ___audioMixerGroups_10;

public:
	inline static int32_t get_offset_of_AUDIO_POOL_SIZE_4() { return static_cast<int32_t>(offsetof(AudioManager_t4222704959_StaticFields, ___AUDIO_POOL_SIZE_4)); }
	inline int32_t get_AUDIO_POOL_SIZE_4() const { return ___AUDIO_POOL_SIZE_4; }
	inline int32_t* get_address_of_AUDIO_POOL_SIZE_4() { return &___AUDIO_POOL_SIZE_4; }
	inline void set_AUDIO_POOL_SIZE_4(int32_t value)
	{
		___AUDIO_POOL_SIZE_4 = value;
	}

	inline static int32_t get_offset_of_listenerTarget_5() { return static_cast<int32_t>(offsetof(AudioManager_t4222704959_StaticFields, ___listenerTarget_5)); }
	inline Transform_t3275118058 * get_listenerTarget_5() const { return ___listenerTarget_5; }
	inline Transform_t3275118058 ** get_address_of_listenerTarget_5() { return &___listenerTarget_5; }
	inline void set_listenerTarget_5(Transform_t3275118058 * value)
	{
		___listenerTarget_5 = value;
		Il2CppCodeGenWriteBarrier(&___listenerTarget_5, value);
	}

	inline static int32_t get_offset_of_listenerTrans_6() { return static_cast<int32_t>(offsetof(AudioManager_t4222704959_StaticFields, ___listenerTrans_6)); }
	inline Transform_t3275118058 * get_listenerTrans_6() const { return ___listenerTrans_6; }
	inline Transform_t3275118058 ** get_address_of_listenerTrans_6() { return &___listenerTrans_6; }
	inline void set_listenerTrans_6(Transform_t3275118058 * value)
	{
		___listenerTrans_6 = value;
		Il2CppCodeGenWriteBarrier(&___listenerTrans_6, value);
	}

	inline static int32_t get_offset_of_pool_7() { return static_cast<int32_t>(offsetof(AudioManager_t4222704959_StaticFields, ___pool_7)); }
	inline LinkedList_1_t2637228454 * get_pool_7() const { return ___pool_7; }
	inline LinkedList_1_t2637228454 ** get_address_of_pool_7() { return &___pool_7; }
	inline void set_pool_7(LinkedList_1_t2637228454 * value)
	{
		___pool_7 = value;
		Il2CppCodeGenWriteBarrier(&___pool_7, value);
	}

	inline static int32_t get_offset_of_activeAudio_8() { return static_cast<int32_t>(offsetof(AudioManager_t4222704959_StaticFields, ___activeAudio_8)); }
	inline LinkedList_1_t2637228454 * get_activeAudio_8() const { return ___activeAudio_8; }
	inline LinkedList_1_t2637228454 ** get_address_of_activeAudio_8() { return &___activeAudio_8; }
	inline void set_activeAudio_8(LinkedList_1_t2637228454 * value)
	{
		___activeAudio_8 = value;
		Il2CppCodeGenWriteBarrier(&___activeAudio_8, value);
	}

	inline static int32_t get_offset_of_defaultMixer_9() { return static_cast<int32_t>(offsetof(AudioManager_t4222704959_StaticFields, ___defaultMixer_9)); }
	inline AudioMixer_t3244290001 * get_defaultMixer_9() const { return ___defaultMixer_9; }
	inline AudioMixer_t3244290001 ** get_address_of_defaultMixer_9() { return &___defaultMixer_9; }
	inline void set_defaultMixer_9(AudioMixer_t3244290001 * value)
	{
		___defaultMixer_9 = value;
		Il2CppCodeGenWriteBarrier(&___defaultMixer_9, value);
	}

	inline static int32_t get_offset_of_audioMixerGroups_10() { return static_cast<int32_t>(offsetof(AudioManager_t4222704959_StaticFields, ___audioMixerGroups_10)); }
	inline Dictionary_2_t4262339575 * get_audioMixerGroups_10() const { return ___audioMixerGroups_10; }
	inline Dictionary_2_t4262339575 ** get_address_of_audioMixerGroups_10() { return &___audioMixerGroups_10; }
	inline void set_audioMixerGroups_10(Dictionary_2_t4262339575 * value)
	{
		___audioMixerGroups_10 = value;
		Il2CppCodeGenWriteBarrier(&___audioMixerGroups_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
