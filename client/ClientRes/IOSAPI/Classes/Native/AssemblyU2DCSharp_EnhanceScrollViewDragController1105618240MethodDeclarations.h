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

// EnhanceScrollViewDragController
struct EnhanceScrollViewDragController_t1105618240;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void EnhanceScrollViewDragController::.ctor()
extern "C"  void EnhanceScrollViewDragController__ctor_m408240757 (EnhanceScrollViewDragController_t1105618240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnhanceScrollViewDragController::SetTargetCameraAndMask(UnityEngine.Camera,System.Int32)
extern "C"  void EnhanceScrollViewDragController_SetTargetCameraAndMask_m2530136171 (EnhanceScrollViewDragController_t1105618240 * __this, Camera_t189460977 * ___camera0, int32_t ___mask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnhanceScrollViewDragController::Update()
extern "C"  void EnhanceScrollViewDragController_Update_m2861206474 (EnhanceScrollViewDragController_t1105618240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnhanceScrollViewDragController::ProcessMouseInput()
extern "C"  void EnhanceScrollViewDragController_ProcessMouseInput_m3119618461 (EnhanceScrollViewDragController_t1105618240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnhanceScrollViewDragController::ProcessTouchInput()
extern "C"  void EnhanceScrollViewDragController_ProcessTouchInput_m1560108193 (EnhanceScrollViewDragController_t1105618240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject EnhanceScrollViewDragController::RayCast(UnityEngine.Camera,UnityEngine.Vector3)
extern "C"  GameObject_t1756533147 * EnhanceScrollViewDragController_RayCast_m3426282942 (EnhanceScrollViewDragController_t1105618240 * __this, Camera_t189460977 * ___cam0, Vector3_t2243707580  ___inPos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
