#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_ScrollUV_Direction122107700.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScrollUV
struct  ScrollUV_t2335303814  : public MonoBehaviour_t1158329972
{
public:
	// System.Single ScrollUV::speed
	float ___speed_2;
	// ScrollUV/Direction ScrollUV::direction
	int32_t ___direction_3;
	// UnityEngine.Vector2 ScrollUV::offset
	Vector2_t2243707579  ___offset_4;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(ScrollUV_t2335303814, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_direction_3() { return static_cast<int32_t>(offsetof(ScrollUV_t2335303814, ___direction_3)); }
	inline int32_t get_direction_3() const { return ___direction_3; }
	inline int32_t* get_address_of_direction_3() { return &___direction_3; }
	inline void set_direction_3(int32_t value)
	{
		___direction_3 = value;
	}

	inline static int32_t get_offset_of_offset_4() { return static_cast<int32_t>(offsetof(ScrollUV_t2335303814, ___offset_4)); }
	inline Vector2_t2243707579  get_offset_4() const { return ___offset_4; }
	inline Vector2_t2243707579 * get_address_of_offset_4() { return &___offset_4; }
	inline void set_offset_4(Vector2_t2243707579  value)
	{
		___offset_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
