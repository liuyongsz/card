#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// CameraManager
struct CameraManager_t2379859346;
// System.Action
struct Action_t3226471752;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3226471752.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"

// System.Void CameraManager::.ctor()
extern "C"  void CameraManager__ctor_m2018575245 (CameraManager_t2379859346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraManager::.cctor()
extern "C"  void CameraManager__cctor_m3176702716 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraManager::Awake()
extern "C"  void CameraManager_Awake_m1577381518 (CameraManager_t2379859346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraManager::Start()
extern "C"  void CameraManager_Start_m3906324141 (CameraManager_t2379859346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraManager::OnDestroy()
extern "C"  void CameraManager_OnDestroy_m3721326456 (CameraManager_t2379859346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraManager::turnOn()
extern "C"  void CameraManager_turnOn_m169507365 (CameraManager_t2379859346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraManager::turnOff()
extern "C"  void CameraManager_turnOff_m286213311 (CameraManager_t2379859346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraManager::eventShoot()
extern "C"  void CameraManager_eventShoot_m2034018290 (CameraManager_t2379859346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraManager::MoveCameraWhenShoot()
extern "C"  void CameraManager_MoveCameraWhenShoot_m905421400 (CameraManager_t2379859346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraManager::cameraFinishMoving()
extern "C"  void CameraManager_cameraFinishMoving_m1109313699 (CameraManager_t2379859346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraManager::introMovement(System.Action,UnityEngine.Transform)
extern "C"  void CameraManager_introMovement_m2179075134 (CameraManager_t2379859346 * __this, Action_t3226471752 * ___callback0, Transform_t3275118058 * ___target1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraManager::reset()
extern "C"  void CameraManager_reset_m2824738290 (CameraManager_t2379859346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator CameraManager::resetPosition()
extern "C"  Il2CppObject * CameraManager_resetPosition_m4134360159 (CameraManager_t2379859346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraManager::updateCameraFOV()
extern "C"  void CameraManager_updateCameraFOV_m4134900452 (CameraManager_t2379859346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraManager::<EventReset>m__7()
extern "C"  void CameraManager_U3CEventResetU3Em__7_m2483673428 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraManager::<EventBeginIntroMovement>m__8()
extern "C"  void CameraManager_U3CEventBeginIntroMovementU3Em__8_m44798724 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraManager::<EventEndIntroMovement>m__9()
extern "C"  void CameraManager_U3CEventEndIntroMovementU3Em__9_m2987523397 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
