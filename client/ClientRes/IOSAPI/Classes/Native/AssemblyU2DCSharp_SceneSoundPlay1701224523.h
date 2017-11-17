#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SceneSoundPlay/PlayObjectAudioDelegate
struct PlayObjectAudioDelegate_t178678352;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneSoundPlay
struct  SceneSoundPlay_t1701224523  : public MonoBehaviour_t1158329972
{
public:
	// System.String SceneSoundPlay::mstrSoundID
	String_t* ___mstrSoundID_3;
	// System.Single SceneSoundPlay::mfDelay
	float ___mfDelay_4;

public:
	inline static int32_t get_offset_of_mstrSoundID_3() { return static_cast<int32_t>(offsetof(SceneSoundPlay_t1701224523, ___mstrSoundID_3)); }
	inline String_t* get_mstrSoundID_3() const { return ___mstrSoundID_3; }
	inline String_t** get_address_of_mstrSoundID_3() { return &___mstrSoundID_3; }
	inline void set_mstrSoundID_3(String_t* value)
	{
		___mstrSoundID_3 = value;
		Il2CppCodeGenWriteBarrier(&___mstrSoundID_3, value);
	}

	inline static int32_t get_offset_of_mfDelay_4() { return static_cast<int32_t>(offsetof(SceneSoundPlay_t1701224523, ___mfDelay_4)); }
	inline float get_mfDelay_4() const { return ___mfDelay_4; }
	inline float* get_address_of_mfDelay_4() { return &___mfDelay_4; }
	inline void set_mfDelay_4(float value)
	{
		___mfDelay_4 = value;
	}
};

struct SceneSoundPlay_t1701224523_StaticFields
{
public:
	// SceneSoundPlay/PlayObjectAudioDelegate SceneSoundPlay::PlayObjectAudio
	PlayObjectAudioDelegate_t178678352 * ___PlayObjectAudio_2;

public:
	inline static int32_t get_offset_of_PlayObjectAudio_2() { return static_cast<int32_t>(offsetof(SceneSoundPlay_t1701224523_StaticFields, ___PlayObjectAudio_2)); }
	inline PlayObjectAudioDelegate_t178678352 * get_PlayObjectAudio_2() const { return ___PlayObjectAudio_2; }
	inline PlayObjectAudioDelegate_t178678352 ** get_address_of_PlayObjectAudio_2() { return &___PlayObjectAudio_2; }
	inline void set_PlayObjectAudio_2(PlayObjectAudioDelegate_t178678352 * value)
	{
		___PlayObjectAudio_2 = value;
		Il2CppCodeGenWriteBarrier(&___PlayObjectAudio_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
