#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// _CameraShake/ShakeState
struct  ShakeState_t1303782894  : public Il2CppObject
{
public:
	// UnityEngine.Vector3 _CameraShake/ShakeState::startPosition
	Vector3_t2243707580  ___startPosition_0;
	// UnityEngine.Quaternion _CameraShake/ShakeState::startRotation
	Quaternion_t4030073918  ___startRotation_1;
	// UnityEngine.Vector2 _CameraShake/ShakeState::guiStartPosition
	Vector2_t2243707579  ___guiStartPosition_2;
	// UnityEngine.Vector3 _CameraShake/ShakeState::shakePosition
	Vector3_t2243707580  ___shakePosition_3;
	// UnityEngine.Quaternion _CameraShake/ShakeState::shakeRotation
	Quaternion_t4030073918  ___shakeRotation_4;
	// UnityEngine.Vector2 _CameraShake/ShakeState::guiShakePosition
	Vector2_t2243707579  ___guiShakePosition_5;

public:
	inline static int32_t get_offset_of_startPosition_0() { return static_cast<int32_t>(offsetof(ShakeState_t1303782894, ___startPosition_0)); }
	inline Vector3_t2243707580  get_startPosition_0() const { return ___startPosition_0; }
	inline Vector3_t2243707580 * get_address_of_startPosition_0() { return &___startPosition_0; }
	inline void set_startPosition_0(Vector3_t2243707580  value)
	{
		___startPosition_0 = value;
	}

	inline static int32_t get_offset_of_startRotation_1() { return static_cast<int32_t>(offsetof(ShakeState_t1303782894, ___startRotation_1)); }
	inline Quaternion_t4030073918  get_startRotation_1() const { return ___startRotation_1; }
	inline Quaternion_t4030073918 * get_address_of_startRotation_1() { return &___startRotation_1; }
	inline void set_startRotation_1(Quaternion_t4030073918  value)
	{
		___startRotation_1 = value;
	}

	inline static int32_t get_offset_of_guiStartPosition_2() { return static_cast<int32_t>(offsetof(ShakeState_t1303782894, ___guiStartPosition_2)); }
	inline Vector2_t2243707579  get_guiStartPosition_2() const { return ___guiStartPosition_2; }
	inline Vector2_t2243707579 * get_address_of_guiStartPosition_2() { return &___guiStartPosition_2; }
	inline void set_guiStartPosition_2(Vector2_t2243707579  value)
	{
		___guiStartPosition_2 = value;
	}

	inline static int32_t get_offset_of_shakePosition_3() { return static_cast<int32_t>(offsetof(ShakeState_t1303782894, ___shakePosition_3)); }
	inline Vector3_t2243707580  get_shakePosition_3() const { return ___shakePosition_3; }
	inline Vector3_t2243707580 * get_address_of_shakePosition_3() { return &___shakePosition_3; }
	inline void set_shakePosition_3(Vector3_t2243707580  value)
	{
		___shakePosition_3 = value;
	}

	inline static int32_t get_offset_of_shakeRotation_4() { return static_cast<int32_t>(offsetof(ShakeState_t1303782894, ___shakeRotation_4)); }
	inline Quaternion_t4030073918  get_shakeRotation_4() const { return ___shakeRotation_4; }
	inline Quaternion_t4030073918 * get_address_of_shakeRotation_4() { return &___shakeRotation_4; }
	inline void set_shakeRotation_4(Quaternion_t4030073918  value)
	{
		___shakeRotation_4 = value;
	}

	inline static int32_t get_offset_of_guiShakePosition_5() { return static_cast<int32_t>(offsetof(ShakeState_t1303782894, ___guiShakePosition_5)); }
	inline Vector2_t2243707579  get_guiShakePosition_5() const { return ___guiShakePosition_5; }
	inline Vector2_t2243707579 * get_address_of_guiShakePosition_5() { return &___guiShakePosition_5; }
	inline void set_guiShakePosition_5(Vector2_t2243707579  value)
	{
		___guiShakePosition_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
