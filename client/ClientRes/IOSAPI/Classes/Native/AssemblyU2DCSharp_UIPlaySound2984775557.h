#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t1932558630;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_UIPlaySound_SoundMode683961776.h"
#include "AssemblyU2DCSharp_UIPlaySound_Trigger1926488856.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIPlaySound
struct  UIPlaySound_t2984775557  : public MonoBehaviour_t1158329972
{
public:
	// UIPlaySound/SoundMode UIPlaySound::soundMode
	int32_t ___soundMode_2;
	// UnityEngine.AudioClip UIPlaySound::audioClip
	AudioClip_t1932558630 * ___audioClip_3;
	// UIPlaySound/Trigger UIPlaySound::trigger
	int32_t ___trigger_4;
	// System.Boolean UIPlaySound::mIsOver
	bool ___mIsOver_5;
	// System.Single UIPlaySound::volume
	float ___volume_6;
	// System.Single UIPlaySound::pitch
	float ___pitch_7;

public:
	inline static int32_t get_offset_of_soundMode_2() { return static_cast<int32_t>(offsetof(UIPlaySound_t2984775557, ___soundMode_2)); }
	inline int32_t get_soundMode_2() const { return ___soundMode_2; }
	inline int32_t* get_address_of_soundMode_2() { return &___soundMode_2; }
	inline void set_soundMode_2(int32_t value)
	{
		___soundMode_2 = value;
	}

	inline static int32_t get_offset_of_audioClip_3() { return static_cast<int32_t>(offsetof(UIPlaySound_t2984775557, ___audioClip_3)); }
	inline AudioClip_t1932558630 * get_audioClip_3() const { return ___audioClip_3; }
	inline AudioClip_t1932558630 ** get_address_of_audioClip_3() { return &___audioClip_3; }
	inline void set_audioClip_3(AudioClip_t1932558630 * value)
	{
		___audioClip_3 = value;
		Il2CppCodeGenWriteBarrier(&___audioClip_3, value);
	}

	inline static int32_t get_offset_of_trigger_4() { return static_cast<int32_t>(offsetof(UIPlaySound_t2984775557, ___trigger_4)); }
	inline int32_t get_trigger_4() const { return ___trigger_4; }
	inline int32_t* get_address_of_trigger_4() { return &___trigger_4; }
	inline void set_trigger_4(int32_t value)
	{
		___trigger_4 = value;
	}

	inline static int32_t get_offset_of_mIsOver_5() { return static_cast<int32_t>(offsetof(UIPlaySound_t2984775557, ___mIsOver_5)); }
	inline bool get_mIsOver_5() const { return ___mIsOver_5; }
	inline bool* get_address_of_mIsOver_5() { return &___mIsOver_5; }
	inline void set_mIsOver_5(bool value)
	{
		___mIsOver_5 = value;
	}

	inline static int32_t get_offset_of_volume_6() { return static_cast<int32_t>(offsetof(UIPlaySound_t2984775557, ___volume_6)); }
	inline float get_volume_6() const { return ___volume_6; }
	inline float* get_address_of_volume_6() { return &___volume_6; }
	inline void set_volume_6(float value)
	{
		___volume_6 = value;
	}

	inline static int32_t get_offset_of_pitch_7() { return static_cast<int32_t>(offsetof(UIPlaySound_t2984775557, ___pitch_7)); }
	inline float get_pitch_7() const { return ___pitch_7; }
	inline float* get_address_of_pitch_7() { return &___pitch_7; }
	inline void set_pitch_7(float value)
	{
		___pitch_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
