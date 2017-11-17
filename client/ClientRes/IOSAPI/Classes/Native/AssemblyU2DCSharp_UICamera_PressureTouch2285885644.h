#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_TouchPhase2458120420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UICamera/PressureTouch
struct  PressureTouch_t2285885644  : public Il2CppObject
{
public:
	// System.Int32 UICamera/PressureTouch::id
	int32_t ___id_0;
	// UnityEngine.Vector2 UICamera/PressureTouch::pos
	Vector2_t2243707579  ___pos_1;
	// System.Single UICamera/PressureTouch::pressure
	float ___pressure_2;
	// System.Single UICamera/PressureTouch::deltaPressure
	float ___deltaPressure_3;
	// System.Single UICamera/PressureTouch::maximumPossiblePressure
	float ___maximumPossiblePressure_4;
	// UnityEngine.TouchPhase UICamera/PressureTouch::phase
	int32_t ___phase_5;
	// System.Single UICamera/PressureTouch::deltaTime
	float ___deltaTime_6;
	// System.Single UICamera/PressureTouch::eventTime
	float ___eventTime_7;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(PressureTouch_t2285885644, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_pos_1() { return static_cast<int32_t>(offsetof(PressureTouch_t2285885644, ___pos_1)); }
	inline Vector2_t2243707579  get_pos_1() const { return ___pos_1; }
	inline Vector2_t2243707579 * get_address_of_pos_1() { return &___pos_1; }
	inline void set_pos_1(Vector2_t2243707579  value)
	{
		___pos_1 = value;
	}

	inline static int32_t get_offset_of_pressure_2() { return static_cast<int32_t>(offsetof(PressureTouch_t2285885644, ___pressure_2)); }
	inline float get_pressure_2() const { return ___pressure_2; }
	inline float* get_address_of_pressure_2() { return &___pressure_2; }
	inline void set_pressure_2(float value)
	{
		___pressure_2 = value;
	}

	inline static int32_t get_offset_of_deltaPressure_3() { return static_cast<int32_t>(offsetof(PressureTouch_t2285885644, ___deltaPressure_3)); }
	inline float get_deltaPressure_3() const { return ___deltaPressure_3; }
	inline float* get_address_of_deltaPressure_3() { return &___deltaPressure_3; }
	inline void set_deltaPressure_3(float value)
	{
		___deltaPressure_3 = value;
	}

	inline static int32_t get_offset_of_maximumPossiblePressure_4() { return static_cast<int32_t>(offsetof(PressureTouch_t2285885644, ___maximumPossiblePressure_4)); }
	inline float get_maximumPossiblePressure_4() const { return ___maximumPossiblePressure_4; }
	inline float* get_address_of_maximumPossiblePressure_4() { return &___maximumPossiblePressure_4; }
	inline void set_maximumPossiblePressure_4(float value)
	{
		___maximumPossiblePressure_4 = value;
	}

	inline static int32_t get_offset_of_phase_5() { return static_cast<int32_t>(offsetof(PressureTouch_t2285885644, ___phase_5)); }
	inline int32_t get_phase_5() const { return ___phase_5; }
	inline int32_t* get_address_of_phase_5() { return &___phase_5; }
	inline void set_phase_5(int32_t value)
	{
		___phase_5 = value;
	}

	inline static int32_t get_offset_of_deltaTime_6() { return static_cast<int32_t>(offsetof(PressureTouch_t2285885644, ___deltaTime_6)); }
	inline float get_deltaTime_6() const { return ___deltaTime_6; }
	inline float* get_address_of_deltaTime_6() { return &___deltaTime_6; }
	inline void set_deltaTime_6(float value)
	{
		___deltaTime_6 = value;
	}

	inline static int32_t get_offset_of_eventTime_7() { return static_cast<int32_t>(offsetof(PressureTouch_t2285885644, ___eventTime_7)); }
	inline float get_eventTime_7() const { return ___eventTime_7; }
	inline float* get_address_of_eventTime_7() { return &___eventTime_7; }
	inline void set_eventTime_7(float value)
	{
		___eventTime_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
