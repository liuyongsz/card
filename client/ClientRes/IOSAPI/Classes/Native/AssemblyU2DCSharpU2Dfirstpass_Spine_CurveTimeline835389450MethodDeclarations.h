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

// Spine.CurveTimeline
struct CurveTimeline_t835389450;

#include "codegen/il2cpp-codegen.h"

// System.Void Spine.CurveTimeline::.ctor(System.Int32)
extern "C"  void CurveTimeline__ctor_m1807688323 (CurveTimeline_t835389450 * __this, int32_t ___frameCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.CurveTimeline::get_FrameCount()
extern "C"  int32_t CurveTimeline_get_FrameCount_m1397335431 (CurveTimeline_t835389450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.CurveTimeline::SetLinear(System.Int32)
extern "C"  void CurveTimeline_SetLinear_m1642337394 (CurveTimeline_t835389450 * __this, int32_t ___frameIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.CurveTimeline::SetStepped(System.Int32)
extern "C"  void CurveTimeline_SetStepped_m4284293582 (CurveTimeline_t835389450 * __this, int32_t ___frameIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.CurveTimeline::SetCurve(System.Int32,System.Single,System.Single,System.Single,System.Single)
extern "C"  void CurveTimeline_SetCurve_m2801656650 (CurveTimeline_t835389450 * __this, int32_t ___frameIndex0, float ___cx11, float ___cy12, float ___cx23, float ___cy24, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.CurveTimeline::GetCurvePercent(System.Int32,System.Single)
extern "C"  float CurveTimeline_GetCurvePercent_m3612108014 (CurveTimeline_t835389450 * __this, int32_t ___frameIndex0, float ___percent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.CurveTimeline::GetCurveType(System.Int32)
extern "C"  float CurveTimeline_GetCurveType_m1712043432 (CurveTimeline_t835389450 * __this, int32_t ___frameIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
