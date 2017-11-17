#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShowFPS
struct  ShowFPS_t746797832  : public MonoBehaviour_t1158329972
{
public:
	// System.Single ShowFPS::f_UpdateInterval
	float ___f_UpdateInterval_2;
	// System.Single ShowFPS::f_LastInterval
	float ___f_LastInterval_3;
	// System.Int32 ShowFPS::i_Frames
	int32_t ___i_Frames_4;
	// System.Single ShowFPS::f_Fps
	float ___f_Fps_5;

public:
	inline static int32_t get_offset_of_f_UpdateInterval_2() { return static_cast<int32_t>(offsetof(ShowFPS_t746797832, ___f_UpdateInterval_2)); }
	inline float get_f_UpdateInterval_2() const { return ___f_UpdateInterval_2; }
	inline float* get_address_of_f_UpdateInterval_2() { return &___f_UpdateInterval_2; }
	inline void set_f_UpdateInterval_2(float value)
	{
		___f_UpdateInterval_2 = value;
	}

	inline static int32_t get_offset_of_f_LastInterval_3() { return static_cast<int32_t>(offsetof(ShowFPS_t746797832, ___f_LastInterval_3)); }
	inline float get_f_LastInterval_3() const { return ___f_LastInterval_3; }
	inline float* get_address_of_f_LastInterval_3() { return &___f_LastInterval_3; }
	inline void set_f_LastInterval_3(float value)
	{
		___f_LastInterval_3 = value;
	}

	inline static int32_t get_offset_of_i_Frames_4() { return static_cast<int32_t>(offsetof(ShowFPS_t746797832, ___i_Frames_4)); }
	inline int32_t get_i_Frames_4() const { return ___i_Frames_4; }
	inline int32_t* get_address_of_i_Frames_4() { return &___i_Frames_4; }
	inline void set_i_Frames_4(int32_t value)
	{
		___i_Frames_4 = value;
	}

	inline static int32_t get_offset_of_f_Fps_5() { return static_cast<int32_t>(offsetof(ShowFPS_t746797832, ___f_Fps_5)); }
	inline float get_f_Fps_5() const { return ___f_Fps_5; }
	inline float* get_address_of_f_Fps_5() { return &___f_Fps_5; }
	inline void set_f_Fps_5(float value)
	{
		___f_Fps_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
