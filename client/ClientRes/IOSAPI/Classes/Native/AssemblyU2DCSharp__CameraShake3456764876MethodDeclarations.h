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

// _CameraShake
struct _CameraShake_t3456764876;
// System.Action
struct Action_t3226471752;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.Camera
struct Camera_t189460977;
// System.Collections.Generic.List`1<_CameraShake/ShakeState>
struct List_1_t672904026;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.Collections.Generic.List`1<UnityEngine.Camera>
struct List_1_t3853549405;
// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Int32>
struct Dictionary_2_t1129068222;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3226471752.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"

// System.Void _CameraShake::.ctor()
extern "C"  void _CameraShake__ctor_m3017859601 (_CameraShake_t3456764876 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void _CameraShake::add_cameraShakeStarted(System.Action)
extern "C"  void _CameraShake_add_cameraShakeStarted_m209014878 (_CameraShake_t3456764876 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void _CameraShake::remove_cameraShakeStarted(System.Action)
extern "C"  void _CameraShake_remove_cameraShakeStarted_m2594787717 (_CameraShake_t3456764876 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void _CameraShake::add_allCameraShakesCompleted(System.Action)
extern "C"  void _CameraShake_add_allCameraShakesCompleted_m3634440474 (_CameraShake_t3456764876 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void _CameraShake::remove_allCameraShakesCompleted(System.Action)
extern "C"  void _CameraShake_remove_allCameraShakesCompleted_m1178224499 (_CameraShake_t3456764876 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void _CameraShake::OnEnable()
extern "C"  void _CameraShake_OnEnable_m138050169 (_CameraShake_t3456764876 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean _CameraShake::get_isShaking()
extern "C"  bool _CameraShake_get_isShaking_m473315299 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean _CameraShake::get_isCancelling()
extern "C"  bool _CameraShake_get_isCancelling_m213958526 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void _CameraShake::Shake()
extern "C"  void _CameraShake_Shake_m3803842265 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void _CameraShake::Shake(System.Int32,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern "C"  void _CameraShake_Shake_m3685989143 (Il2CppObject * __this /* static, unused */, int32_t ___numberOfShakes0, Vector3_t2243707580  ___shakeAmount1, Vector3_t2243707580  ___rotationAmount2, float ___distance3, float ___speed4, float ___decay5, float ___guiShakeModifier6, bool ___multiplyByTimeScale7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void _CameraShake::Shake(System.Action)
extern "C"  void _CameraShake_Shake_m2320737420 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void _CameraShake::Shake(System.Int32,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single,System.Single,System.Single,System.Boolean,System.Action)
extern "C"  void _CameraShake_Shake_m813844102 (Il2CppObject * __this /* static, unused */, int32_t ___numberOfShakes0, Vector3_t2243707580  ___shakeAmount1, Vector3_t2243707580  ___rotationAmount2, float ___distance3, float ___speed4, float ___decay5, float ___guiShakeModifier6, bool ___multiplyByTimeScale7, Action_t3226471752 * ___callback8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void _CameraShake::CancelShake()
extern "C"  void _CameraShake_CancelShake_m2989319111 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void _CameraShake::CancelShake(System.Single)
extern "C"  void _CameraShake_CancelShake_m684015848 (Il2CppObject * __this /* static, unused */, float ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void _CameraShake::BeginShakeGUI()
extern "C"  void _CameraShake_BeginShakeGUI_m1762264177 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void _CameraShake::EndShakeGUI()
extern "C"  void _CameraShake_EndShakeGUI_m422977749 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void _CameraShake::BeginShakeGUILayout()
extern "C"  void _CameraShake_BeginShakeGUILayout_m1917810619 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void _CameraShake::EndShakeGUILayout()
extern "C"  void _CameraShake_EndShakeGUILayout_m2174681835 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean _CameraShake::IsShaking()
extern "C"  bool _CameraShake_IsShaking_m902474920 (_CameraShake_t3456764876 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean _CameraShake::IsCancelling()
extern "C"  bool _CameraShake_IsCancelling_m1533862845 (_CameraShake_t3456764876 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void _CameraShake::DoShake()
extern "C"  void _CameraShake_DoShake_m1002456614 (_CameraShake_t3456764876 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void _CameraShake::DoShake(System.Int32,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern "C"  void _CameraShake_DoShake_m1961745930 (_CameraShake_t3456764876 * __this, int32_t ___numberOfShakes0, Vector3_t2243707580  ___shakeAmount1, Vector3_t2243707580  ___rotationAmount2, float ___distance3, float ___speed4, float ___decay5, float ___guiShakeModifier6, bool ___multiplyByTimeScale7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void _CameraShake::DoShake(System.Action)
extern "C"  void _CameraShake_DoShake_m2291229943 (_CameraShake_t3456764876 * __this, Action_t3226471752 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void _CameraShake::DoShake(System.Int32,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single,System.Single,System.Single,System.Boolean,System.Action)
extern "C"  void _CameraShake_DoShake_m456395021 (_CameraShake_t3456764876 * __this, int32_t ___numberOfShakes0, Vector3_t2243707580  ___shakeAmount1, Vector3_t2243707580  ___rotationAmount2, float ___distance3, float ___speed4, float ___decay5, float ___guiShakeModifier6, bool ___multiplyByTimeScale7, Action_t3226471752 * ___callback8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void _CameraShake::DoCancelShake()
extern "C"  void _CameraShake_DoCancelShake_m3370533640 (_CameraShake_t3456764876 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void _CameraShake::DoCancelShake(System.Single)
extern "C"  void _CameraShake_DoCancelShake_m3042834553 (_CameraShake_t3456764876 * __this, float ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void _CameraShake::DoBeginShakeGUI()
extern "C"  void _CameraShake_DoBeginShakeGUI_m2782946928 (_CameraShake_t3456764876 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void _CameraShake::DoEndShakeGUI()
extern "C"  void _CameraShake_DoEndShakeGUI_m416687264 (_CameraShake_t3456764876 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void _CameraShake::DoBeginShakeGUILayout()
extern "C"  void _CameraShake_DoBeginShakeGUILayout_m2155435418 (_CameraShake_t3456764876 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void _CameraShake::DoEndShakeGUILayout()
extern "C"  void _CameraShake_DoEndShakeGUILayout_m3871197718 (_CameraShake_t3456764876 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void _CameraShake::OnDrawGizmosSelected()
extern "C"  void _CameraShake_OnDrawGizmosSelected_m3766633342 (_CameraShake_t3456764876 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator _CameraShake::DoShake_Internal(UnityEngine.Camera,UnityEngine.Vector3,System.Int32,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single,System.Single,System.Single,System.Boolean,System.Action)
extern "C"  Il2CppObject * _CameraShake_DoShake_Internal_m1919432024 (_CameraShake_t3456764876 * __this, Camera_t189460977 * ___cam0, Vector3_t2243707580  ___seed1, int32_t ___numberOfShakes2, Vector3_t2243707580  ___shakeAmount3, Vector3_t2243707580  ___rotationAmount4, float ___distance5, float ___speed6, float ___decay7, float ___guiShakeModifier8, bool ___multiplyByTimeScale9, Action_t3226471752 * ___callback10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 _CameraShake::GetGeometricAvg(System.Collections.Generic.List`1<_CameraShake/ShakeState>,System.Boolean)
extern "C"  Vector3_t2243707580  _CameraShake_GetGeometricAvg_m838300543 (_CameraShake_t3456764876 * __this, List_1_t672904026 * ___states0, bool ___position1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion _CameraShake::GetAvgRotation(System.Collections.Generic.List`1<_CameraShake/ShakeState>)
extern "C"  Quaternion_t4030073918  _CameraShake_GetAvgRotation_m2505576739 (_CameraShake_t3456764876 * __this, List_1_t672904026 * ___states0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void _CameraShake::CheckShakeRect()
extern "C"  void _CameraShake_CheckShakeRect_m3919072803 (_CameraShake_t3456764876 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single _CameraShake::GetPixelWidth(UnityEngine.Transform,UnityEngine.Camera)
extern "C"  float _CameraShake_GetPixelWidth_m1448351428 (_CameraShake_t3456764876 * __this, Transform_t3275118058 * ___cachedTransform0, Camera_t189460977 * ___cachedCamera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void _CameraShake::ResetState(UnityEngine.Transform,UnityEngine.Camera)
extern "C"  void _CameraShake_ResetState_m3849871362 (_CameraShake_t3456764876 * __this, Transform_t3275118058 * ___cachedTransform0, Camera_t189460977 * ___cam1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator _CameraShake::DoResetState(System.Collections.Generic.List`1<UnityEngine.Camera>,System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Int32>,System.Single)
extern "C"  Il2CppObject * _CameraShake_DoResetState_m2250316203 (_CameraShake_t3456764876 * __this, List_1_t3853549405 * ___cameras0, Dictionary_2_t1129068222 * ___shakeCount1, float ___time2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion _CameraShake::QuaternionFromMatrix(UnityEngine.Matrix4x4)
extern "C"  Quaternion_t4030073918  _CameraShake_QuaternionFromMatrix_m3127970520 (Il2CppObject * __this /* static, unused */, Matrix4x4_t2933234003  ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void _CameraShake::NormalizeQuaternion(UnityEngine.Quaternion&)
extern "C"  void _CameraShake_NormalizeQuaternion_m1897249549 (Il2CppObject * __this /* static, unused */, Quaternion_t4030073918 * ___q0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
