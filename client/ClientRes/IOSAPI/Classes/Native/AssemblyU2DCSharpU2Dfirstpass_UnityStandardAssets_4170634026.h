#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_I517806655.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Vortex
struct  Vortex_t4170634026  : public ImageEffectBase_t517806655
{
public:
	// UnityEngine.Vector2 UnityStandardAssets.ImageEffects.Vortex::radius
	Vector2_t2243707579  ___radius_4;
	// System.Single UnityStandardAssets.ImageEffects.Vortex::angle
	float ___angle_5;
	// UnityEngine.Vector2 UnityStandardAssets.ImageEffects.Vortex::center
	Vector2_t2243707579  ___center_6;

public:
	inline static int32_t get_offset_of_radius_4() { return static_cast<int32_t>(offsetof(Vortex_t4170634026, ___radius_4)); }
	inline Vector2_t2243707579  get_radius_4() const { return ___radius_4; }
	inline Vector2_t2243707579 * get_address_of_radius_4() { return &___radius_4; }
	inline void set_radius_4(Vector2_t2243707579  value)
	{
		___radius_4 = value;
	}

	inline static int32_t get_offset_of_angle_5() { return static_cast<int32_t>(offsetof(Vortex_t4170634026, ___angle_5)); }
	inline float get_angle_5() const { return ___angle_5; }
	inline float* get_address_of_angle_5() { return &___angle_5; }
	inline void set_angle_5(float value)
	{
		___angle_5 = value;
	}

	inline static int32_t get_offset_of_center_6() { return static_cast<int32_t>(offsetof(Vortex_t4170634026, ___center_6)); }
	inline Vector2_t2243707579  get_center_6() const { return ___center_6; }
	inline Vector2_t2243707579 * get_address_of_center_6() { return &___center_6; }
	inline void set_center_6(Vector2_t2243707579  value)
	{
		___center_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
