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
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_UICamera_ClickNotification3184017079.h"
#include "UnityEngine_UnityEngine_TouchPhase2458120420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UICamera/MouseOrTouch
struct  MouseOrTouch_t2470076277  : public Il2CppObject
{
public:
	// UnityEngine.Vector2 UICamera/MouseOrTouch::pos
	Vector2_t2243707579  ___pos_0;
	// UnityEngine.Vector2 UICamera/MouseOrTouch::lastPos
	Vector2_t2243707579  ___lastPos_1;
	// UnityEngine.Vector2 UICamera/MouseOrTouch::delta
	Vector2_t2243707579  ___delta_2;
	// UnityEngine.Vector2 UICamera/MouseOrTouch::totalDelta
	Vector2_t2243707579  ___totalDelta_3;
	// UnityEngine.Camera UICamera/MouseOrTouch::pressedCam
	Camera_t189460977 * ___pressedCam_4;
	// UnityEngine.GameObject UICamera/MouseOrTouch::last
	GameObject_t1756533147 * ___last_5;
	// UnityEngine.GameObject UICamera/MouseOrTouch::current
	GameObject_t1756533147 * ___current_6;
	// UnityEngine.GameObject UICamera/MouseOrTouch::pressed
	GameObject_t1756533147 * ___pressed_7;
	// UnityEngine.GameObject UICamera/MouseOrTouch::dragged
	GameObject_t1756533147 * ___dragged_8;
	// System.Single UICamera/MouseOrTouch::clickTime
	float ___clickTime_9;
	// UICamera/ClickNotification UICamera/MouseOrTouch::clickNotification
	int32_t ___clickNotification_10;
	// System.Boolean UICamera/MouseOrTouch::touchBegan
	bool ___touchBegan_11;
	// System.Boolean UICamera/MouseOrTouch::pressStarted
	bool ___pressStarted_12;
	// System.Boolean UICamera/MouseOrTouch::dragStarted
	bool ___dragStarted_13;
	// System.Int32 UICamera/MouseOrTouch::id
	int32_t ___id_14;
	// System.Single UICamera/MouseOrTouch::pressure
	float ___pressure_15;
	// System.Single UICamera/MouseOrTouch::deltaPressure
	float ___deltaPressure_16;
	// System.Single UICamera/MouseOrTouch::maximumPossiblePressure
	float ___maximumPossiblePressure_17;
	// UnityEngine.TouchPhase UICamera/MouseOrTouch::phase
	int32_t ___phase_18;
	// System.Single UICamera/MouseOrTouch::deltaTime
	float ___deltaTime_19;
	// System.Single UICamera/MouseOrTouch::eventTime
	float ___eventTime_20;
	// System.Boolean UICamera/MouseOrTouch::enterDispatched
	bool ___enterDispatched_21;
	// System.Boolean UICamera/MouseOrTouch::exitDispatched
	bool ___exitDispatched_22;

public:
	inline static int32_t get_offset_of_pos_0() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___pos_0)); }
	inline Vector2_t2243707579  get_pos_0() const { return ___pos_0; }
	inline Vector2_t2243707579 * get_address_of_pos_0() { return &___pos_0; }
	inline void set_pos_0(Vector2_t2243707579  value)
	{
		___pos_0 = value;
	}

	inline static int32_t get_offset_of_lastPos_1() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___lastPos_1)); }
	inline Vector2_t2243707579  get_lastPos_1() const { return ___lastPos_1; }
	inline Vector2_t2243707579 * get_address_of_lastPos_1() { return &___lastPos_1; }
	inline void set_lastPos_1(Vector2_t2243707579  value)
	{
		___lastPos_1 = value;
	}

	inline static int32_t get_offset_of_delta_2() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___delta_2)); }
	inline Vector2_t2243707579  get_delta_2() const { return ___delta_2; }
	inline Vector2_t2243707579 * get_address_of_delta_2() { return &___delta_2; }
	inline void set_delta_2(Vector2_t2243707579  value)
	{
		___delta_2 = value;
	}

	inline static int32_t get_offset_of_totalDelta_3() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___totalDelta_3)); }
	inline Vector2_t2243707579  get_totalDelta_3() const { return ___totalDelta_3; }
	inline Vector2_t2243707579 * get_address_of_totalDelta_3() { return &___totalDelta_3; }
	inline void set_totalDelta_3(Vector2_t2243707579  value)
	{
		___totalDelta_3 = value;
	}

	inline static int32_t get_offset_of_pressedCam_4() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___pressedCam_4)); }
	inline Camera_t189460977 * get_pressedCam_4() const { return ___pressedCam_4; }
	inline Camera_t189460977 ** get_address_of_pressedCam_4() { return &___pressedCam_4; }
	inline void set_pressedCam_4(Camera_t189460977 * value)
	{
		___pressedCam_4 = value;
		Il2CppCodeGenWriteBarrier(&___pressedCam_4, value);
	}

	inline static int32_t get_offset_of_last_5() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___last_5)); }
	inline GameObject_t1756533147 * get_last_5() const { return ___last_5; }
	inline GameObject_t1756533147 ** get_address_of_last_5() { return &___last_5; }
	inline void set_last_5(GameObject_t1756533147 * value)
	{
		___last_5 = value;
		Il2CppCodeGenWriteBarrier(&___last_5, value);
	}

	inline static int32_t get_offset_of_current_6() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___current_6)); }
	inline GameObject_t1756533147 * get_current_6() const { return ___current_6; }
	inline GameObject_t1756533147 ** get_address_of_current_6() { return &___current_6; }
	inline void set_current_6(GameObject_t1756533147 * value)
	{
		___current_6 = value;
		Il2CppCodeGenWriteBarrier(&___current_6, value);
	}

	inline static int32_t get_offset_of_pressed_7() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___pressed_7)); }
	inline GameObject_t1756533147 * get_pressed_7() const { return ___pressed_7; }
	inline GameObject_t1756533147 ** get_address_of_pressed_7() { return &___pressed_7; }
	inline void set_pressed_7(GameObject_t1756533147 * value)
	{
		___pressed_7 = value;
		Il2CppCodeGenWriteBarrier(&___pressed_7, value);
	}

	inline static int32_t get_offset_of_dragged_8() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___dragged_8)); }
	inline GameObject_t1756533147 * get_dragged_8() const { return ___dragged_8; }
	inline GameObject_t1756533147 ** get_address_of_dragged_8() { return &___dragged_8; }
	inline void set_dragged_8(GameObject_t1756533147 * value)
	{
		___dragged_8 = value;
		Il2CppCodeGenWriteBarrier(&___dragged_8, value);
	}

	inline static int32_t get_offset_of_clickTime_9() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___clickTime_9)); }
	inline float get_clickTime_9() const { return ___clickTime_9; }
	inline float* get_address_of_clickTime_9() { return &___clickTime_9; }
	inline void set_clickTime_9(float value)
	{
		___clickTime_9 = value;
	}

	inline static int32_t get_offset_of_clickNotification_10() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___clickNotification_10)); }
	inline int32_t get_clickNotification_10() const { return ___clickNotification_10; }
	inline int32_t* get_address_of_clickNotification_10() { return &___clickNotification_10; }
	inline void set_clickNotification_10(int32_t value)
	{
		___clickNotification_10 = value;
	}

	inline static int32_t get_offset_of_touchBegan_11() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___touchBegan_11)); }
	inline bool get_touchBegan_11() const { return ___touchBegan_11; }
	inline bool* get_address_of_touchBegan_11() { return &___touchBegan_11; }
	inline void set_touchBegan_11(bool value)
	{
		___touchBegan_11 = value;
	}

	inline static int32_t get_offset_of_pressStarted_12() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___pressStarted_12)); }
	inline bool get_pressStarted_12() const { return ___pressStarted_12; }
	inline bool* get_address_of_pressStarted_12() { return &___pressStarted_12; }
	inline void set_pressStarted_12(bool value)
	{
		___pressStarted_12 = value;
	}

	inline static int32_t get_offset_of_dragStarted_13() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___dragStarted_13)); }
	inline bool get_dragStarted_13() const { return ___dragStarted_13; }
	inline bool* get_address_of_dragStarted_13() { return &___dragStarted_13; }
	inline void set_dragStarted_13(bool value)
	{
		___dragStarted_13 = value;
	}

	inline static int32_t get_offset_of_id_14() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___id_14)); }
	inline int32_t get_id_14() const { return ___id_14; }
	inline int32_t* get_address_of_id_14() { return &___id_14; }
	inline void set_id_14(int32_t value)
	{
		___id_14 = value;
	}

	inline static int32_t get_offset_of_pressure_15() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___pressure_15)); }
	inline float get_pressure_15() const { return ___pressure_15; }
	inline float* get_address_of_pressure_15() { return &___pressure_15; }
	inline void set_pressure_15(float value)
	{
		___pressure_15 = value;
	}

	inline static int32_t get_offset_of_deltaPressure_16() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___deltaPressure_16)); }
	inline float get_deltaPressure_16() const { return ___deltaPressure_16; }
	inline float* get_address_of_deltaPressure_16() { return &___deltaPressure_16; }
	inline void set_deltaPressure_16(float value)
	{
		___deltaPressure_16 = value;
	}

	inline static int32_t get_offset_of_maximumPossiblePressure_17() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___maximumPossiblePressure_17)); }
	inline float get_maximumPossiblePressure_17() const { return ___maximumPossiblePressure_17; }
	inline float* get_address_of_maximumPossiblePressure_17() { return &___maximumPossiblePressure_17; }
	inline void set_maximumPossiblePressure_17(float value)
	{
		___maximumPossiblePressure_17 = value;
	}

	inline static int32_t get_offset_of_phase_18() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___phase_18)); }
	inline int32_t get_phase_18() const { return ___phase_18; }
	inline int32_t* get_address_of_phase_18() { return &___phase_18; }
	inline void set_phase_18(int32_t value)
	{
		___phase_18 = value;
	}

	inline static int32_t get_offset_of_deltaTime_19() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___deltaTime_19)); }
	inline float get_deltaTime_19() const { return ___deltaTime_19; }
	inline float* get_address_of_deltaTime_19() { return &___deltaTime_19; }
	inline void set_deltaTime_19(float value)
	{
		___deltaTime_19 = value;
	}

	inline static int32_t get_offset_of_eventTime_20() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___eventTime_20)); }
	inline float get_eventTime_20() const { return ___eventTime_20; }
	inline float* get_address_of_eventTime_20() { return &___eventTime_20; }
	inline void set_eventTime_20(float value)
	{
		___eventTime_20 = value;
	}

	inline static int32_t get_offset_of_enterDispatched_21() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___enterDispatched_21)); }
	inline bool get_enterDispatched_21() const { return ___enterDispatched_21; }
	inline bool* get_address_of_enterDispatched_21() { return &___enterDispatched_21; }
	inline void set_enterDispatched_21(bool value)
	{
		___enterDispatched_21 = value;
	}

	inline static int32_t get_offset_of_exitDispatched_22() { return static_cast<int32_t>(offsetof(MouseOrTouch_t2470076277, ___exitDispatched_22)); }
	inline bool get_exitDispatched_22() const { return ___exitDispatched_22; }
	inline bool* get_address_of_exitDispatched_22() { return &___exitDispatched_22; }
	inline void set_exitDispatched_22(bool value)
	{
		___exitDispatched_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
