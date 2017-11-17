#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// System.Collections.Hashtable
struct Hashtable_t909839986;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LuaFramework.SoundManager
struct  SoundManager_t2779809792  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioSource LuaFramework.SoundManager::audio
	AudioSource_t1135106623 * ___audio_2;
	// System.Collections.Hashtable LuaFramework.SoundManager::sounds
	Hashtable_t909839986 * ___sounds_3;

public:
	inline static int32_t get_offset_of_audio_2() { return static_cast<int32_t>(offsetof(SoundManager_t2779809792, ___audio_2)); }
	inline AudioSource_t1135106623 * get_audio_2() const { return ___audio_2; }
	inline AudioSource_t1135106623 ** get_address_of_audio_2() { return &___audio_2; }
	inline void set_audio_2(AudioSource_t1135106623 * value)
	{
		___audio_2 = value;
		Il2CppCodeGenWriteBarrier(&___audio_2, value);
	}

	inline static int32_t get_offset_of_sounds_3() { return static_cast<int32_t>(offsetof(SoundManager_t2779809792, ___sounds_3)); }
	inline Hashtable_t909839986 * get_sounds_3() const { return ___sounds_3; }
	inline Hashtable_t909839986 ** get_address_of_sounds_3() { return &___sounds_3; }
	inline void set_sounds_3(Hashtable_t909839986 * value)
	{
		___sounds_3 = value;
		Il2CppCodeGenWriteBarrier(&___sounds_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
