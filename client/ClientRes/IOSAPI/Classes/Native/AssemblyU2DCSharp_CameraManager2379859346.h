#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CameraManager
struct CameraManager_t2379859346;
// System.Action
struct Action_t3226471752;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Camera[]
struct CameraU5BU5D_t3079764780;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Collider
struct Collider_t3497673348;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraManager
struct  CameraManager_t2379859346  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject CameraManager::_cameraMain
	GameObject_t1756533147 * ____cameraMain_6;
	// UnityEngine.GameObject CameraManager::_cameraBack
	GameObject_t1756533147 * ____cameraBack_7;
	// UnityEngine.Camera[] CameraManager::_camerasMain
	CameraU5BU5D_t3079764780* ____camerasMain_8;
	// System.Int32 CameraManager::_FOVportrait
	int32_t ____FOVportrait_9;
	// System.Int32 CameraManager::_FOVlandscape
	int32_t ____FOVlandscape_10;
	// System.Boolean CameraManager::isPortrait
	bool ___isPortrait_11;
	// UnityEngine.Camera CameraManager::_cameraMainComponent
	Camera_t189460977 * ____cameraMainComponent_12;
	// UnityEngine.Collider CameraManager::_colliderFullScreen
	Collider_t3497673348 * ____colliderFullScreen_13;
	// System.Single CameraManager::yBackCamera
	float ___yBackCamera_14;
	// System.Single CameraManager::cameraMainDistanceToBall
	float ___cameraMainDistanceToBall_15;
	// System.Single CameraManager::cameraMainY
	float ___cameraMainY_16;
	// System.Boolean CameraManager::_isCameraMoving
	bool ____isCameraMoving_17;
	// System.Single CameraManager::testXZ
	float ___testXZ_18;
	// System.Single CameraManager::testY
	float ___testY_19;
	// System.Single CameraManager::_currentFOV
	float ____currentFOV_20;

public:
	inline static int32_t get_offset_of__cameraMain_6() { return static_cast<int32_t>(offsetof(CameraManager_t2379859346, ____cameraMain_6)); }
	inline GameObject_t1756533147 * get__cameraMain_6() const { return ____cameraMain_6; }
	inline GameObject_t1756533147 ** get_address_of__cameraMain_6() { return &____cameraMain_6; }
	inline void set__cameraMain_6(GameObject_t1756533147 * value)
	{
		____cameraMain_6 = value;
		Il2CppCodeGenWriteBarrier(&____cameraMain_6, value);
	}

	inline static int32_t get_offset_of__cameraBack_7() { return static_cast<int32_t>(offsetof(CameraManager_t2379859346, ____cameraBack_7)); }
	inline GameObject_t1756533147 * get__cameraBack_7() const { return ____cameraBack_7; }
	inline GameObject_t1756533147 ** get_address_of__cameraBack_7() { return &____cameraBack_7; }
	inline void set__cameraBack_7(GameObject_t1756533147 * value)
	{
		____cameraBack_7 = value;
		Il2CppCodeGenWriteBarrier(&____cameraBack_7, value);
	}

	inline static int32_t get_offset_of__camerasMain_8() { return static_cast<int32_t>(offsetof(CameraManager_t2379859346, ____camerasMain_8)); }
	inline CameraU5BU5D_t3079764780* get__camerasMain_8() const { return ____camerasMain_8; }
	inline CameraU5BU5D_t3079764780** get_address_of__camerasMain_8() { return &____camerasMain_8; }
	inline void set__camerasMain_8(CameraU5BU5D_t3079764780* value)
	{
		____camerasMain_8 = value;
		Il2CppCodeGenWriteBarrier(&____camerasMain_8, value);
	}

	inline static int32_t get_offset_of__FOVportrait_9() { return static_cast<int32_t>(offsetof(CameraManager_t2379859346, ____FOVportrait_9)); }
	inline int32_t get__FOVportrait_9() const { return ____FOVportrait_9; }
	inline int32_t* get_address_of__FOVportrait_9() { return &____FOVportrait_9; }
	inline void set__FOVportrait_9(int32_t value)
	{
		____FOVportrait_9 = value;
	}

	inline static int32_t get_offset_of__FOVlandscape_10() { return static_cast<int32_t>(offsetof(CameraManager_t2379859346, ____FOVlandscape_10)); }
	inline int32_t get__FOVlandscape_10() const { return ____FOVlandscape_10; }
	inline int32_t* get_address_of__FOVlandscape_10() { return &____FOVlandscape_10; }
	inline void set__FOVlandscape_10(int32_t value)
	{
		____FOVlandscape_10 = value;
	}

	inline static int32_t get_offset_of_isPortrait_11() { return static_cast<int32_t>(offsetof(CameraManager_t2379859346, ___isPortrait_11)); }
	inline bool get_isPortrait_11() const { return ___isPortrait_11; }
	inline bool* get_address_of_isPortrait_11() { return &___isPortrait_11; }
	inline void set_isPortrait_11(bool value)
	{
		___isPortrait_11 = value;
	}

	inline static int32_t get_offset_of__cameraMainComponent_12() { return static_cast<int32_t>(offsetof(CameraManager_t2379859346, ____cameraMainComponent_12)); }
	inline Camera_t189460977 * get__cameraMainComponent_12() const { return ____cameraMainComponent_12; }
	inline Camera_t189460977 ** get_address_of__cameraMainComponent_12() { return &____cameraMainComponent_12; }
	inline void set__cameraMainComponent_12(Camera_t189460977 * value)
	{
		____cameraMainComponent_12 = value;
		Il2CppCodeGenWriteBarrier(&____cameraMainComponent_12, value);
	}

	inline static int32_t get_offset_of__colliderFullScreen_13() { return static_cast<int32_t>(offsetof(CameraManager_t2379859346, ____colliderFullScreen_13)); }
	inline Collider_t3497673348 * get__colliderFullScreen_13() const { return ____colliderFullScreen_13; }
	inline Collider_t3497673348 ** get_address_of__colliderFullScreen_13() { return &____colliderFullScreen_13; }
	inline void set__colliderFullScreen_13(Collider_t3497673348 * value)
	{
		____colliderFullScreen_13 = value;
		Il2CppCodeGenWriteBarrier(&____colliderFullScreen_13, value);
	}

	inline static int32_t get_offset_of_yBackCamera_14() { return static_cast<int32_t>(offsetof(CameraManager_t2379859346, ___yBackCamera_14)); }
	inline float get_yBackCamera_14() const { return ___yBackCamera_14; }
	inline float* get_address_of_yBackCamera_14() { return &___yBackCamera_14; }
	inline void set_yBackCamera_14(float value)
	{
		___yBackCamera_14 = value;
	}

	inline static int32_t get_offset_of_cameraMainDistanceToBall_15() { return static_cast<int32_t>(offsetof(CameraManager_t2379859346, ___cameraMainDistanceToBall_15)); }
	inline float get_cameraMainDistanceToBall_15() const { return ___cameraMainDistanceToBall_15; }
	inline float* get_address_of_cameraMainDistanceToBall_15() { return &___cameraMainDistanceToBall_15; }
	inline void set_cameraMainDistanceToBall_15(float value)
	{
		___cameraMainDistanceToBall_15 = value;
	}

	inline static int32_t get_offset_of_cameraMainY_16() { return static_cast<int32_t>(offsetof(CameraManager_t2379859346, ___cameraMainY_16)); }
	inline float get_cameraMainY_16() const { return ___cameraMainY_16; }
	inline float* get_address_of_cameraMainY_16() { return &___cameraMainY_16; }
	inline void set_cameraMainY_16(float value)
	{
		___cameraMainY_16 = value;
	}

	inline static int32_t get_offset_of__isCameraMoving_17() { return static_cast<int32_t>(offsetof(CameraManager_t2379859346, ____isCameraMoving_17)); }
	inline bool get__isCameraMoving_17() const { return ____isCameraMoving_17; }
	inline bool* get_address_of__isCameraMoving_17() { return &____isCameraMoving_17; }
	inline void set__isCameraMoving_17(bool value)
	{
		____isCameraMoving_17 = value;
	}

	inline static int32_t get_offset_of_testXZ_18() { return static_cast<int32_t>(offsetof(CameraManager_t2379859346, ___testXZ_18)); }
	inline float get_testXZ_18() const { return ___testXZ_18; }
	inline float* get_address_of_testXZ_18() { return &___testXZ_18; }
	inline void set_testXZ_18(float value)
	{
		___testXZ_18 = value;
	}

	inline static int32_t get_offset_of_testY_19() { return static_cast<int32_t>(offsetof(CameraManager_t2379859346, ___testY_19)); }
	inline float get_testY_19() const { return ___testY_19; }
	inline float* get_address_of_testY_19() { return &___testY_19; }
	inline void set_testY_19(float value)
	{
		___testY_19 = value;
	}

	inline static int32_t get_offset_of__currentFOV_20() { return static_cast<int32_t>(offsetof(CameraManager_t2379859346, ____currentFOV_20)); }
	inline float get__currentFOV_20() const { return ____currentFOV_20; }
	inline float* get_address_of__currentFOV_20() { return &____currentFOV_20; }
	inline void set__currentFOV_20(float value)
	{
		____currentFOV_20 = value;
	}
};

struct CameraManager_t2379859346_StaticFields
{
public:
	// CameraManager CameraManager::share
	CameraManager_t2379859346 * ___share_2;
	// System.Action CameraManager::EventReset
	Action_t3226471752 * ___EventReset_3;
	// System.Action CameraManager::EventBeginIntroMovement
	Action_t3226471752 * ___EventBeginIntroMovement_4;
	// System.Action CameraManager::EventEndIntroMovement
	Action_t3226471752 * ___EventEndIntroMovement_5;
	// System.Action CameraManager::<>f__am$cache13
	Action_t3226471752 * ___U3CU3Ef__amU24cache13_21;
	// System.Action CameraManager::<>f__am$cache14
	Action_t3226471752 * ___U3CU3Ef__amU24cache14_22;
	// System.Action CameraManager::<>f__am$cache15
	Action_t3226471752 * ___U3CU3Ef__amU24cache15_23;

public:
	inline static int32_t get_offset_of_share_2() { return static_cast<int32_t>(offsetof(CameraManager_t2379859346_StaticFields, ___share_2)); }
	inline CameraManager_t2379859346 * get_share_2() const { return ___share_2; }
	inline CameraManager_t2379859346 ** get_address_of_share_2() { return &___share_2; }
	inline void set_share_2(CameraManager_t2379859346 * value)
	{
		___share_2 = value;
		Il2CppCodeGenWriteBarrier(&___share_2, value);
	}

	inline static int32_t get_offset_of_EventReset_3() { return static_cast<int32_t>(offsetof(CameraManager_t2379859346_StaticFields, ___EventReset_3)); }
	inline Action_t3226471752 * get_EventReset_3() const { return ___EventReset_3; }
	inline Action_t3226471752 ** get_address_of_EventReset_3() { return &___EventReset_3; }
	inline void set_EventReset_3(Action_t3226471752 * value)
	{
		___EventReset_3 = value;
		Il2CppCodeGenWriteBarrier(&___EventReset_3, value);
	}

	inline static int32_t get_offset_of_EventBeginIntroMovement_4() { return static_cast<int32_t>(offsetof(CameraManager_t2379859346_StaticFields, ___EventBeginIntroMovement_4)); }
	inline Action_t3226471752 * get_EventBeginIntroMovement_4() const { return ___EventBeginIntroMovement_4; }
	inline Action_t3226471752 ** get_address_of_EventBeginIntroMovement_4() { return &___EventBeginIntroMovement_4; }
	inline void set_EventBeginIntroMovement_4(Action_t3226471752 * value)
	{
		___EventBeginIntroMovement_4 = value;
		Il2CppCodeGenWriteBarrier(&___EventBeginIntroMovement_4, value);
	}

	inline static int32_t get_offset_of_EventEndIntroMovement_5() { return static_cast<int32_t>(offsetof(CameraManager_t2379859346_StaticFields, ___EventEndIntroMovement_5)); }
	inline Action_t3226471752 * get_EventEndIntroMovement_5() const { return ___EventEndIntroMovement_5; }
	inline Action_t3226471752 ** get_address_of_EventEndIntroMovement_5() { return &___EventEndIntroMovement_5; }
	inline void set_EventEndIntroMovement_5(Action_t3226471752 * value)
	{
		___EventEndIntroMovement_5 = value;
		Il2CppCodeGenWriteBarrier(&___EventEndIntroMovement_5, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache13_21() { return static_cast<int32_t>(offsetof(CameraManager_t2379859346_StaticFields, ___U3CU3Ef__amU24cache13_21)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cache13_21() const { return ___U3CU3Ef__amU24cache13_21; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cache13_21() { return &___U3CU3Ef__amU24cache13_21; }
	inline void set_U3CU3Ef__amU24cache13_21(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cache13_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache13_21, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache14_22() { return static_cast<int32_t>(offsetof(CameraManager_t2379859346_StaticFields, ___U3CU3Ef__amU24cache14_22)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cache14_22() const { return ___U3CU3Ef__amU24cache14_22; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cache14_22() { return &___U3CU3Ef__amU24cache14_22; }
	inline void set_U3CU3Ef__amU24cache14_22(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cache14_22 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache14_22, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache15_23() { return static_cast<int32_t>(offsetof(CameraManager_t2379859346_StaticFields, ___U3CU3Ef__amU24cache15_23)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cache15_23() const { return ___U3CU3Ef__amU24cache15_23; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cache15_23() { return &___U3CU3Ef__amU24cache15_23; }
	inline void set_U3CU3Ef__amU24cache15_23(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cache15_23 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache15_23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
