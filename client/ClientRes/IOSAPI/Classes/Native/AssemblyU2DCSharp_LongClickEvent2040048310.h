#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// LongClickEvent/LongClickCallBack
struct LongClickCallBack_t2060312060;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LongClickEvent
struct  LongClickEvent_t2040048310  : public MonoBehaviour_t1158329972
{
public:
	// LongClickEvent/LongClickCallBack LongClickEvent::onPress
	LongClickCallBack_t2060312060 * ___onPress_2;
	// UnityEngine.GameObject LongClickEvent::go
	GameObject_t1756533147 * ___go_3;
	// System.Single LongClickEvent::time
	float ___time_4;
	// System.Single LongClickEvent::duration
	float ___duration_5;
	// System.Boolean LongClickEvent::isPress
	bool ___isPress_6;
	// UnityEngine.Vector3 LongClickEvent::position
	Vector3_t2243707580  ___position_7;

public:
	inline static int32_t get_offset_of_onPress_2() { return static_cast<int32_t>(offsetof(LongClickEvent_t2040048310, ___onPress_2)); }
	inline LongClickCallBack_t2060312060 * get_onPress_2() const { return ___onPress_2; }
	inline LongClickCallBack_t2060312060 ** get_address_of_onPress_2() { return &___onPress_2; }
	inline void set_onPress_2(LongClickCallBack_t2060312060 * value)
	{
		___onPress_2 = value;
		Il2CppCodeGenWriteBarrier(&___onPress_2, value);
	}

	inline static int32_t get_offset_of_go_3() { return static_cast<int32_t>(offsetof(LongClickEvent_t2040048310, ___go_3)); }
	inline GameObject_t1756533147 * get_go_3() const { return ___go_3; }
	inline GameObject_t1756533147 ** get_address_of_go_3() { return &___go_3; }
	inline void set_go_3(GameObject_t1756533147 * value)
	{
		___go_3 = value;
		Il2CppCodeGenWriteBarrier(&___go_3, value);
	}

	inline static int32_t get_offset_of_time_4() { return static_cast<int32_t>(offsetof(LongClickEvent_t2040048310, ___time_4)); }
	inline float get_time_4() const { return ___time_4; }
	inline float* get_address_of_time_4() { return &___time_4; }
	inline void set_time_4(float value)
	{
		___time_4 = value;
	}

	inline static int32_t get_offset_of_duration_5() { return static_cast<int32_t>(offsetof(LongClickEvent_t2040048310, ___duration_5)); }
	inline float get_duration_5() const { return ___duration_5; }
	inline float* get_address_of_duration_5() { return &___duration_5; }
	inline void set_duration_5(float value)
	{
		___duration_5 = value;
	}

	inline static int32_t get_offset_of_isPress_6() { return static_cast<int32_t>(offsetof(LongClickEvent_t2040048310, ___isPress_6)); }
	inline bool get_isPress_6() const { return ___isPress_6; }
	inline bool* get_address_of_isPress_6() { return &___isPress_6; }
	inline void set_isPress_6(bool value)
	{
		___isPress_6 = value;
	}

	inline static int32_t get_offset_of_position_7() { return static_cast<int32_t>(offsetof(LongClickEvent_t2040048310, ___position_7)); }
	inline Vector3_t2243707580  get_position_7() const { return ___position_7; }
	inline Vector3_t2243707580 * get_address_of_position_7() { return &___position_7; }
	inline void set_position_7(Vector3_t2243707580  value)
	{
		___position_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
