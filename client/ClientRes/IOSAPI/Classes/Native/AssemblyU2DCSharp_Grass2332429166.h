#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.MeshRenderer
struct MeshRenderer_t1268241104;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grass
struct  Grass_t2332429166  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Grass::StartRandomParams
	bool ___StartRandomParams_2;
	// System.Single Grass::MinY
	float ___MinY_3;
	// System.Single Grass::TimeScale
	float ___TimeScale_4;
	// System.Single Grass::mOldMiny
	float ___mOldMiny_5;
	// System.Single Grass::mOldTimeScale
	float ___mOldTimeScale_6;
	// UnityEngine.MeshRenderer Grass::mRender
	MeshRenderer_t1268241104 * ___mRender_7;

public:
	inline static int32_t get_offset_of_StartRandomParams_2() { return static_cast<int32_t>(offsetof(Grass_t2332429166, ___StartRandomParams_2)); }
	inline bool get_StartRandomParams_2() const { return ___StartRandomParams_2; }
	inline bool* get_address_of_StartRandomParams_2() { return &___StartRandomParams_2; }
	inline void set_StartRandomParams_2(bool value)
	{
		___StartRandomParams_2 = value;
	}

	inline static int32_t get_offset_of_MinY_3() { return static_cast<int32_t>(offsetof(Grass_t2332429166, ___MinY_3)); }
	inline float get_MinY_3() const { return ___MinY_3; }
	inline float* get_address_of_MinY_3() { return &___MinY_3; }
	inline void set_MinY_3(float value)
	{
		___MinY_3 = value;
	}

	inline static int32_t get_offset_of_TimeScale_4() { return static_cast<int32_t>(offsetof(Grass_t2332429166, ___TimeScale_4)); }
	inline float get_TimeScale_4() const { return ___TimeScale_4; }
	inline float* get_address_of_TimeScale_4() { return &___TimeScale_4; }
	inline void set_TimeScale_4(float value)
	{
		___TimeScale_4 = value;
	}

	inline static int32_t get_offset_of_mOldMiny_5() { return static_cast<int32_t>(offsetof(Grass_t2332429166, ___mOldMiny_5)); }
	inline float get_mOldMiny_5() const { return ___mOldMiny_5; }
	inline float* get_address_of_mOldMiny_5() { return &___mOldMiny_5; }
	inline void set_mOldMiny_5(float value)
	{
		___mOldMiny_5 = value;
	}

	inline static int32_t get_offset_of_mOldTimeScale_6() { return static_cast<int32_t>(offsetof(Grass_t2332429166, ___mOldTimeScale_6)); }
	inline float get_mOldTimeScale_6() const { return ___mOldTimeScale_6; }
	inline float* get_address_of_mOldTimeScale_6() { return &___mOldTimeScale_6; }
	inline void set_mOldTimeScale_6(float value)
	{
		___mOldTimeScale_6 = value;
	}

	inline static int32_t get_offset_of_mRender_7() { return static_cast<int32_t>(offsetof(Grass_t2332429166, ___mRender_7)); }
	inline MeshRenderer_t1268241104 * get_mRender_7() const { return ___mRender_7; }
	inline MeshRenderer_t1268241104 ** get_address_of_mRender_7() { return &___mRender_7; }
	inline void set_mRender_7(MeshRenderer_t1268241104 * value)
	{
		___mRender_7 = value;
		Il2CppCodeGenWriteBarrier(&___mRender_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
