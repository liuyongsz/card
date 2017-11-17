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

// UnityStandardAssets.ImageEffects.CameraMotionBlur
struct CameraMotionBlur_t3591885494;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;
// UnityEngine.Camera
struct Camera_t189460977;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture2666733923.h"

// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::.ctor()
extern "C"  void CameraMotionBlur__ctor_m1151242539 (CameraMotionBlur_t3591885494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::.cctor()
extern "C"  void CameraMotionBlur__cctor_m659398150 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::CalculateViewProjection()
extern "C"  void CameraMotionBlur_CalculateViewProjection_m326184867 (CameraMotionBlur_t3591885494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::Start()
extern "C"  void CameraMotionBlur_Start_m4179908879 (CameraMotionBlur_t3591885494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::OnEnable()
extern "C"  void CameraMotionBlur_OnEnable_m2149295567 (CameraMotionBlur_t3591885494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::OnDisable()
extern "C"  void CameraMotionBlur_OnDisable_m3054330848 (CameraMotionBlur_t3591885494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.CameraMotionBlur::CheckResources()
extern "C"  bool CameraMotionBlur_CheckResources_m311327164 (CameraMotionBlur_t3591885494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void CameraMotionBlur_OnRenderImage_m2291847839 (CameraMotionBlur_t3591885494 * __this, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::Remember()
extern "C"  void CameraMotionBlur_Remember_m180722856 (CameraMotionBlur_t3591885494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityStandardAssets.ImageEffects.CameraMotionBlur::GetTmpCam()
extern "C"  Camera_t189460977 * CameraMotionBlur_GetTmpCam_m3601611828 (CameraMotionBlur_t3591885494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::StartFrame()
extern "C"  void CameraMotionBlur_StartFrame_m1107318274 (CameraMotionBlur_t3591885494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityStandardAssets.ImageEffects.CameraMotionBlur::divRoundUp(System.Int32,System.Int32)
extern "C"  int32_t CameraMotionBlur_divRoundUp_m2187735781 (Il2CppObject * __this /* static, unused */, int32_t ___x0, int32_t ___d1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
