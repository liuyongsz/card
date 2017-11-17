#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioListener
struct AudioListener_t1996719162;
// NGUITools/OnPlaySoundEvent
struct OnPlaySoundEvent_t1315012681;
// System.Collections.Generic.Dictionary`2<System.Int32,NGUITools/ParticleInfo>
struct Dictionary_2_t1152731412;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NGUITools
struct  NGUITools_t2004302824  : public Il2CppObject
{
public:

public:
};

struct NGUITools_t2004302824_StaticFields
{
public:
	// UnityEngine.AudioListener NGUITools::mListener
	AudioListener_t1996719162 * ___mListener_0;
	// System.Boolean NGUITools::mLoaded
	bool ___mLoaded_1;
	// System.Single NGUITools::mGlobalVolume
	float ___mGlobalVolume_2;
	// NGUITools/OnPlaySoundEvent NGUITools::moSoundLisnter
	OnPlaySoundEvent_t1315012681 * ___moSoundLisnter_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,NGUITools/ParticleInfo> NGUITools::mAdjustTransDict
	Dictionary_2_t1152731412 * ___mAdjustTransDict_4;
	// UnityEngine.Vector3[] NGUITools::mSides
	Vector3U5BU5D_t1172311765* ___mSides_5;

public:
	inline static int32_t get_offset_of_mListener_0() { return static_cast<int32_t>(offsetof(NGUITools_t2004302824_StaticFields, ___mListener_0)); }
	inline AudioListener_t1996719162 * get_mListener_0() const { return ___mListener_0; }
	inline AudioListener_t1996719162 ** get_address_of_mListener_0() { return &___mListener_0; }
	inline void set_mListener_0(AudioListener_t1996719162 * value)
	{
		___mListener_0 = value;
		Il2CppCodeGenWriteBarrier(&___mListener_0, value);
	}

	inline static int32_t get_offset_of_mLoaded_1() { return static_cast<int32_t>(offsetof(NGUITools_t2004302824_StaticFields, ___mLoaded_1)); }
	inline bool get_mLoaded_1() const { return ___mLoaded_1; }
	inline bool* get_address_of_mLoaded_1() { return &___mLoaded_1; }
	inline void set_mLoaded_1(bool value)
	{
		___mLoaded_1 = value;
	}

	inline static int32_t get_offset_of_mGlobalVolume_2() { return static_cast<int32_t>(offsetof(NGUITools_t2004302824_StaticFields, ___mGlobalVolume_2)); }
	inline float get_mGlobalVolume_2() const { return ___mGlobalVolume_2; }
	inline float* get_address_of_mGlobalVolume_2() { return &___mGlobalVolume_2; }
	inline void set_mGlobalVolume_2(float value)
	{
		___mGlobalVolume_2 = value;
	}

	inline static int32_t get_offset_of_moSoundLisnter_3() { return static_cast<int32_t>(offsetof(NGUITools_t2004302824_StaticFields, ___moSoundLisnter_3)); }
	inline OnPlaySoundEvent_t1315012681 * get_moSoundLisnter_3() const { return ___moSoundLisnter_3; }
	inline OnPlaySoundEvent_t1315012681 ** get_address_of_moSoundLisnter_3() { return &___moSoundLisnter_3; }
	inline void set_moSoundLisnter_3(OnPlaySoundEvent_t1315012681 * value)
	{
		___moSoundLisnter_3 = value;
		Il2CppCodeGenWriteBarrier(&___moSoundLisnter_3, value);
	}

	inline static int32_t get_offset_of_mAdjustTransDict_4() { return static_cast<int32_t>(offsetof(NGUITools_t2004302824_StaticFields, ___mAdjustTransDict_4)); }
	inline Dictionary_2_t1152731412 * get_mAdjustTransDict_4() const { return ___mAdjustTransDict_4; }
	inline Dictionary_2_t1152731412 ** get_address_of_mAdjustTransDict_4() { return &___mAdjustTransDict_4; }
	inline void set_mAdjustTransDict_4(Dictionary_2_t1152731412 * value)
	{
		___mAdjustTransDict_4 = value;
		Il2CppCodeGenWriteBarrier(&___mAdjustTransDict_4, value);
	}

	inline static int32_t get_offset_of_mSides_5() { return static_cast<int32_t>(offsetof(NGUITools_t2004302824_StaticFields, ___mSides_5)); }
	inline Vector3U5BU5D_t1172311765* get_mSides_5() const { return ___mSides_5; }
	inline Vector3U5BU5D_t1172311765** get_address_of_mSides_5() { return &___mSides_5; }
	inline void set_mSides_5(Vector3U5BU5D_t1172311765* value)
	{
		___mSides_5 = value;
		Il2CppCodeGenWriteBarrier(&___mSides_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
