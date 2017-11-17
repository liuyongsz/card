#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Camera>
struct List_1_t3853549405;
// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Collections.Generic.List`1<_CameraShake/ShakeState>>
struct Dictionary_2_t4025062096;
// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Int32>
struct Dictionary_2_t1129068222;
// _CameraShake
struct _CameraShake_t3456764876;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1612828712;
// System.Collections.Generic.List`1<UnityEngine.Quaternion>
struct List_1_t3399195050;
// System.Action
struct Action_t3226471752;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// _CameraShake
struct  _CameraShake_t3456764876  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Camera> _CameraShake::cameras
	List_1_t3853549405 * ___cameras_5;
	// System.Int32 _CameraShake::numberOfShakes
	int32_t ___numberOfShakes_6;
	// UnityEngine.Vector3 _CameraShake::shakeAmount
	Vector3_t2243707580  ___shakeAmount_7;
	// UnityEngine.Vector3 _CameraShake::rotationAmount
	Vector3_t2243707580  ___rotationAmount_8;
	// System.Single _CameraShake::distance
	float ___distance_9;
	// System.Single _CameraShake::speed
	float ___speed_10;
	// System.Single _CameraShake::decay
	float ___decay_11;
	// System.Single _CameraShake::guiShakeModifier
	float ___guiShakeModifier_12;
	// System.Boolean _CameraShake::multiplyByTimeScale
	bool ___multiplyByTimeScale_13;
	// UnityEngine.Rect _CameraShake::shakeRect
	Rect_t3681755626  ___shakeRect_14;
	// System.Boolean _CameraShake::shaking
	bool ___shaking_15;
	// System.Boolean _CameraShake::cancelling
	bool ___cancelling_16;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Collections.Generic.List`1<_CameraShake/ShakeState>> _CameraShake::states
	Dictionary_2_t4025062096 * ___states_17;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Int32> _CameraShake::shakeCount
	Dictionary_2_t1129068222 * ___shakeCount_18;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> _CameraShake::offsetCache
	List_1_t1612828712 * ___offsetCache_20;
	// System.Collections.Generic.List`1<UnityEngine.Quaternion> _CameraShake::rotationCache
	List_1_t3399195050 * ___rotationCache_21;
	// System.Action _CameraShake::cameraShakeStarted
	Action_t3226471752 * ___cameraShakeStarted_22;
	// System.Action _CameraShake::allCameraShakesCompleted
	Action_t3226471752 * ___allCameraShakesCompleted_23;

public:
	inline static int32_t get_offset_of_cameras_5() { return static_cast<int32_t>(offsetof(_CameraShake_t3456764876, ___cameras_5)); }
	inline List_1_t3853549405 * get_cameras_5() const { return ___cameras_5; }
	inline List_1_t3853549405 ** get_address_of_cameras_5() { return &___cameras_5; }
	inline void set_cameras_5(List_1_t3853549405 * value)
	{
		___cameras_5 = value;
		Il2CppCodeGenWriteBarrier(&___cameras_5, value);
	}

	inline static int32_t get_offset_of_numberOfShakes_6() { return static_cast<int32_t>(offsetof(_CameraShake_t3456764876, ___numberOfShakes_6)); }
	inline int32_t get_numberOfShakes_6() const { return ___numberOfShakes_6; }
	inline int32_t* get_address_of_numberOfShakes_6() { return &___numberOfShakes_6; }
	inline void set_numberOfShakes_6(int32_t value)
	{
		___numberOfShakes_6 = value;
	}

	inline static int32_t get_offset_of_shakeAmount_7() { return static_cast<int32_t>(offsetof(_CameraShake_t3456764876, ___shakeAmount_7)); }
	inline Vector3_t2243707580  get_shakeAmount_7() const { return ___shakeAmount_7; }
	inline Vector3_t2243707580 * get_address_of_shakeAmount_7() { return &___shakeAmount_7; }
	inline void set_shakeAmount_7(Vector3_t2243707580  value)
	{
		___shakeAmount_7 = value;
	}

	inline static int32_t get_offset_of_rotationAmount_8() { return static_cast<int32_t>(offsetof(_CameraShake_t3456764876, ___rotationAmount_8)); }
	inline Vector3_t2243707580  get_rotationAmount_8() const { return ___rotationAmount_8; }
	inline Vector3_t2243707580 * get_address_of_rotationAmount_8() { return &___rotationAmount_8; }
	inline void set_rotationAmount_8(Vector3_t2243707580  value)
	{
		___rotationAmount_8 = value;
	}

	inline static int32_t get_offset_of_distance_9() { return static_cast<int32_t>(offsetof(_CameraShake_t3456764876, ___distance_9)); }
	inline float get_distance_9() const { return ___distance_9; }
	inline float* get_address_of_distance_9() { return &___distance_9; }
	inline void set_distance_9(float value)
	{
		___distance_9 = value;
	}

	inline static int32_t get_offset_of_speed_10() { return static_cast<int32_t>(offsetof(_CameraShake_t3456764876, ___speed_10)); }
	inline float get_speed_10() const { return ___speed_10; }
	inline float* get_address_of_speed_10() { return &___speed_10; }
	inline void set_speed_10(float value)
	{
		___speed_10 = value;
	}

	inline static int32_t get_offset_of_decay_11() { return static_cast<int32_t>(offsetof(_CameraShake_t3456764876, ___decay_11)); }
	inline float get_decay_11() const { return ___decay_11; }
	inline float* get_address_of_decay_11() { return &___decay_11; }
	inline void set_decay_11(float value)
	{
		___decay_11 = value;
	}

	inline static int32_t get_offset_of_guiShakeModifier_12() { return static_cast<int32_t>(offsetof(_CameraShake_t3456764876, ___guiShakeModifier_12)); }
	inline float get_guiShakeModifier_12() const { return ___guiShakeModifier_12; }
	inline float* get_address_of_guiShakeModifier_12() { return &___guiShakeModifier_12; }
	inline void set_guiShakeModifier_12(float value)
	{
		___guiShakeModifier_12 = value;
	}

	inline static int32_t get_offset_of_multiplyByTimeScale_13() { return static_cast<int32_t>(offsetof(_CameraShake_t3456764876, ___multiplyByTimeScale_13)); }
	inline bool get_multiplyByTimeScale_13() const { return ___multiplyByTimeScale_13; }
	inline bool* get_address_of_multiplyByTimeScale_13() { return &___multiplyByTimeScale_13; }
	inline void set_multiplyByTimeScale_13(bool value)
	{
		___multiplyByTimeScale_13 = value;
	}

	inline static int32_t get_offset_of_shakeRect_14() { return static_cast<int32_t>(offsetof(_CameraShake_t3456764876, ___shakeRect_14)); }
	inline Rect_t3681755626  get_shakeRect_14() const { return ___shakeRect_14; }
	inline Rect_t3681755626 * get_address_of_shakeRect_14() { return &___shakeRect_14; }
	inline void set_shakeRect_14(Rect_t3681755626  value)
	{
		___shakeRect_14 = value;
	}

	inline static int32_t get_offset_of_shaking_15() { return static_cast<int32_t>(offsetof(_CameraShake_t3456764876, ___shaking_15)); }
	inline bool get_shaking_15() const { return ___shaking_15; }
	inline bool* get_address_of_shaking_15() { return &___shaking_15; }
	inline void set_shaking_15(bool value)
	{
		___shaking_15 = value;
	}

	inline static int32_t get_offset_of_cancelling_16() { return static_cast<int32_t>(offsetof(_CameraShake_t3456764876, ___cancelling_16)); }
	inline bool get_cancelling_16() const { return ___cancelling_16; }
	inline bool* get_address_of_cancelling_16() { return &___cancelling_16; }
	inline void set_cancelling_16(bool value)
	{
		___cancelling_16 = value;
	}

	inline static int32_t get_offset_of_states_17() { return static_cast<int32_t>(offsetof(_CameraShake_t3456764876, ___states_17)); }
	inline Dictionary_2_t4025062096 * get_states_17() const { return ___states_17; }
	inline Dictionary_2_t4025062096 ** get_address_of_states_17() { return &___states_17; }
	inline void set_states_17(Dictionary_2_t4025062096 * value)
	{
		___states_17 = value;
		Il2CppCodeGenWriteBarrier(&___states_17, value);
	}

	inline static int32_t get_offset_of_shakeCount_18() { return static_cast<int32_t>(offsetof(_CameraShake_t3456764876, ___shakeCount_18)); }
	inline Dictionary_2_t1129068222 * get_shakeCount_18() const { return ___shakeCount_18; }
	inline Dictionary_2_t1129068222 ** get_address_of_shakeCount_18() { return &___shakeCount_18; }
	inline void set_shakeCount_18(Dictionary_2_t1129068222 * value)
	{
		___shakeCount_18 = value;
		Il2CppCodeGenWriteBarrier(&___shakeCount_18, value);
	}

	inline static int32_t get_offset_of_offsetCache_20() { return static_cast<int32_t>(offsetof(_CameraShake_t3456764876, ___offsetCache_20)); }
	inline List_1_t1612828712 * get_offsetCache_20() const { return ___offsetCache_20; }
	inline List_1_t1612828712 ** get_address_of_offsetCache_20() { return &___offsetCache_20; }
	inline void set_offsetCache_20(List_1_t1612828712 * value)
	{
		___offsetCache_20 = value;
		Il2CppCodeGenWriteBarrier(&___offsetCache_20, value);
	}

	inline static int32_t get_offset_of_rotationCache_21() { return static_cast<int32_t>(offsetof(_CameraShake_t3456764876, ___rotationCache_21)); }
	inline List_1_t3399195050 * get_rotationCache_21() const { return ___rotationCache_21; }
	inline List_1_t3399195050 ** get_address_of_rotationCache_21() { return &___rotationCache_21; }
	inline void set_rotationCache_21(List_1_t3399195050 * value)
	{
		___rotationCache_21 = value;
		Il2CppCodeGenWriteBarrier(&___rotationCache_21, value);
	}

	inline static int32_t get_offset_of_cameraShakeStarted_22() { return static_cast<int32_t>(offsetof(_CameraShake_t3456764876, ___cameraShakeStarted_22)); }
	inline Action_t3226471752 * get_cameraShakeStarted_22() const { return ___cameraShakeStarted_22; }
	inline Action_t3226471752 ** get_address_of_cameraShakeStarted_22() { return &___cameraShakeStarted_22; }
	inline void set_cameraShakeStarted_22(Action_t3226471752 * value)
	{
		___cameraShakeStarted_22 = value;
		Il2CppCodeGenWriteBarrier(&___cameraShakeStarted_22, value);
	}

	inline static int32_t get_offset_of_allCameraShakesCompleted_23() { return static_cast<int32_t>(offsetof(_CameraShake_t3456764876, ___allCameraShakesCompleted_23)); }
	inline Action_t3226471752 * get_allCameraShakesCompleted_23() const { return ___allCameraShakesCompleted_23; }
	inline Action_t3226471752 ** get_address_of_allCameraShakesCompleted_23() { return &___allCameraShakesCompleted_23; }
	inline void set_allCameraShakesCompleted_23(Action_t3226471752 * value)
	{
		___allCameraShakesCompleted_23 = value;
		Il2CppCodeGenWriteBarrier(&___allCameraShakesCompleted_23, value);
	}
};

struct _CameraShake_t3456764876_StaticFields
{
public:
	// _CameraShake _CameraShake::instance
	_CameraShake_t3456764876 * ___instance_19;

public:
	inline static int32_t get_offset_of_instance_19() { return static_cast<int32_t>(offsetof(_CameraShake_t3456764876_StaticFields, ___instance_19)); }
	inline _CameraShake_t3456764876 * get_instance_19() const { return ___instance_19; }
	inline _CameraShake_t3456764876 ** get_address_of_instance_19() { return &___instance_19; }
	inline void set_instance_19(_CameraShake_t3456764876 * value)
	{
		___instance_19 = value;
		Il2CppCodeGenWriteBarrier(&___instance_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
