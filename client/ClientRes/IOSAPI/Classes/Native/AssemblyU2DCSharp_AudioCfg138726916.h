#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AudioCfg
struct  AudioCfg_t138726916  : public Il2CppObject
{
public:
	// System.Int32 AudioCfg::ID
	int32_t ___ID_0;
	// System.String AudioCfg::AssetName
	String_t* ___AssetName_1;
	// System.Int32 AudioCfg::Loop
	int32_t ___Loop_2;
	// System.Single AudioCfg::Volume
	float ___Volume_3;
	// System.Int32 AudioCfg::Priority
	int32_t ___Priority_4;
	// System.Int32 AudioCfg::FadeIn
	int32_t ___FadeIn_5;
	// System.Int32 AudioCfg::FadeOut
	int32_t ___FadeOut_6;

public:
	inline static int32_t get_offset_of_ID_0() { return static_cast<int32_t>(offsetof(AudioCfg_t138726916, ___ID_0)); }
	inline int32_t get_ID_0() const { return ___ID_0; }
	inline int32_t* get_address_of_ID_0() { return &___ID_0; }
	inline void set_ID_0(int32_t value)
	{
		___ID_0 = value;
	}

	inline static int32_t get_offset_of_AssetName_1() { return static_cast<int32_t>(offsetof(AudioCfg_t138726916, ___AssetName_1)); }
	inline String_t* get_AssetName_1() const { return ___AssetName_1; }
	inline String_t** get_address_of_AssetName_1() { return &___AssetName_1; }
	inline void set_AssetName_1(String_t* value)
	{
		___AssetName_1 = value;
		Il2CppCodeGenWriteBarrier(&___AssetName_1, value);
	}

	inline static int32_t get_offset_of_Loop_2() { return static_cast<int32_t>(offsetof(AudioCfg_t138726916, ___Loop_2)); }
	inline int32_t get_Loop_2() const { return ___Loop_2; }
	inline int32_t* get_address_of_Loop_2() { return &___Loop_2; }
	inline void set_Loop_2(int32_t value)
	{
		___Loop_2 = value;
	}

	inline static int32_t get_offset_of_Volume_3() { return static_cast<int32_t>(offsetof(AudioCfg_t138726916, ___Volume_3)); }
	inline float get_Volume_3() const { return ___Volume_3; }
	inline float* get_address_of_Volume_3() { return &___Volume_3; }
	inline void set_Volume_3(float value)
	{
		___Volume_3 = value;
	}

	inline static int32_t get_offset_of_Priority_4() { return static_cast<int32_t>(offsetof(AudioCfg_t138726916, ___Priority_4)); }
	inline int32_t get_Priority_4() const { return ___Priority_4; }
	inline int32_t* get_address_of_Priority_4() { return &___Priority_4; }
	inline void set_Priority_4(int32_t value)
	{
		___Priority_4 = value;
	}

	inline static int32_t get_offset_of_FadeIn_5() { return static_cast<int32_t>(offsetof(AudioCfg_t138726916, ___FadeIn_5)); }
	inline int32_t get_FadeIn_5() const { return ___FadeIn_5; }
	inline int32_t* get_address_of_FadeIn_5() { return &___FadeIn_5; }
	inline void set_FadeIn_5(int32_t value)
	{
		___FadeIn_5 = value;
	}

	inline static int32_t get_offset_of_FadeOut_6() { return static_cast<int32_t>(offsetof(AudioCfg_t138726916, ___FadeOut_6)); }
	inline int32_t get_FadeOut_6() const { return ___FadeOut_6; }
	inline int32_t* get_address_of_FadeOut_6() { return &___FadeOut_6; }
	inline void set_FadeOut_6(int32_t value)
	{
		___FadeOut_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
