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

// DG.Tweening.Plugins.Vector4Plugin
struct Vector4Plugin_t2164361360;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_t3261425374;
// DG.Tweening.Tween
struct Tween_t278478013;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector4>
struct DOGetter_1_t4025813723;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector4>
struct DOSetter_1_t3901936567;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"
#include "DOTween_DG_Tweening_Plugins_Options_VectorOptions293385261.h"
#include "DOTween_DG_Tweening_Tween278478013.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice2468589887.h"

// System.Void DG.Tweening.Plugins.Vector4Plugin::Reset(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>)
extern "C"  void Vector4Plugin_Reset_m15820604 (Vector4Plugin_t2164361360 * __this, TweenerCore_3_t3261425374 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 DG.Tweening.Plugins.Vector4Plugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>,UnityEngine.Vector4)
extern "C"  Vector4_t2243707581  Vector4Plugin_ConvertToStartValue_m4251200849 (Vector4Plugin_t2164361360 * __this, TweenerCore_3_t3261425374 * ___t0, Vector4_t2243707581  ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector4Plugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>)
extern "C"  void Vector4Plugin_SetRelativeEndValue_m2071181835 (Vector4Plugin_t2164361360 * __this, TweenerCore_3_t3261425374 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector4Plugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>)
extern "C"  void Vector4Plugin_SetChangeValue_m3914266778 (Vector4Plugin_t2164361360 * __this, TweenerCore_3_t3261425374 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.Vector4Plugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.VectorOptions,System.Single,UnityEngine.Vector4)
extern "C"  float Vector4Plugin_GetSpeedBasedDuration_m1093714061 (Vector4Plugin_t2164361360 * __this, VectorOptions_t293385261  ___options0, float ___unitsXSecond1, Vector4_t2243707581  ___changeValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector4Plugin::EvaluateAndApply(DG.Tweening.Plugins.Options.VectorOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<UnityEngine.Vector4>,DG.Tweening.Core.DOSetter`1<UnityEngine.Vector4>,System.Single,UnityEngine.Vector4,UnityEngine.Vector4,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void Vector4Plugin_EvaluateAndApply_m3579796599 (Vector4Plugin_t2164361360 * __this, VectorOptions_t293385261  ___options0, Tween_t278478013 * ___t1, bool ___isRelative2, DOGetter_1_t4025813723 * ___getter3, DOSetter_1_t3901936567 * ___setter4, float ___elapsed5, Vector4_t2243707581  ___startValue6, Vector4_t2243707581  ___changeValue7, float ___duration8, bool ___usingInversePosition9, int32_t ___updateNotice10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector4Plugin::.ctor()
extern "C"  void Vector4Plugin__ctor_m2743340731 (Vector4Plugin_t2164361360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
