#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t189460977;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Uni2DAdapt
struct  Uni2DAdapt_t2318159636  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera Uni2DAdapt::MainCamera
	Camera_t189460977 * ___MainCamera_2;
	// System.Single Uni2DAdapt::DevHeight
	float ___DevHeight_3;
	// System.Single Uni2DAdapt::DevWidth
	float ___DevWidth_4;
	// System.Single Uni2DAdapt::mOldScreenW
	float ___mOldScreenW_5;
	// System.Single Uni2DAdapt::mOldScreenH
	float ___mOldScreenH_6;

public:
	inline static int32_t get_offset_of_MainCamera_2() { return static_cast<int32_t>(offsetof(Uni2DAdapt_t2318159636, ___MainCamera_2)); }
	inline Camera_t189460977 * get_MainCamera_2() const { return ___MainCamera_2; }
	inline Camera_t189460977 ** get_address_of_MainCamera_2() { return &___MainCamera_2; }
	inline void set_MainCamera_2(Camera_t189460977 * value)
	{
		___MainCamera_2 = value;
		Il2CppCodeGenWriteBarrier(&___MainCamera_2, value);
	}

	inline static int32_t get_offset_of_DevHeight_3() { return static_cast<int32_t>(offsetof(Uni2DAdapt_t2318159636, ___DevHeight_3)); }
	inline float get_DevHeight_3() const { return ___DevHeight_3; }
	inline float* get_address_of_DevHeight_3() { return &___DevHeight_3; }
	inline void set_DevHeight_3(float value)
	{
		___DevHeight_3 = value;
	}

	inline static int32_t get_offset_of_DevWidth_4() { return static_cast<int32_t>(offsetof(Uni2DAdapt_t2318159636, ___DevWidth_4)); }
	inline float get_DevWidth_4() const { return ___DevWidth_4; }
	inline float* get_address_of_DevWidth_4() { return &___DevWidth_4; }
	inline void set_DevWidth_4(float value)
	{
		___DevWidth_4 = value;
	}

	inline static int32_t get_offset_of_mOldScreenW_5() { return static_cast<int32_t>(offsetof(Uni2DAdapt_t2318159636, ___mOldScreenW_5)); }
	inline float get_mOldScreenW_5() const { return ___mOldScreenW_5; }
	inline float* get_address_of_mOldScreenW_5() { return &___mOldScreenW_5; }
	inline void set_mOldScreenW_5(float value)
	{
		___mOldScreenW_5 = value;
	}

	inline static int32_t get_offset_of_mOldScreenH_6() { return static_cast<int32_t>(offsetof(Uni2DAdapt_t2318159636, ___mOldScreenH_6)); }
	inline float get_mOldScreenH_6() const { return ___mOldScreenH_6; }
	inline float* get_address_of_mOldScreenH_6() { return &___mOldScreenH_6; }
	inline void set_mOldScreenH_6(float value)
	{
		___mOldScreenH_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
