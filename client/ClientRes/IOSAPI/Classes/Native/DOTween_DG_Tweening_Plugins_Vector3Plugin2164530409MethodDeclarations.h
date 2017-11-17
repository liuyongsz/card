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

// DG.Tweening.Plugins.Vector3Plugin
struct Vector3Plugin_t2164530409;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_t1108663466;
// DG.Tweening.Tween
struct Tween_t278478013;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_t4025813722;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_t3901936566;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "DOTween_DG_Tweening_Plugins_Options_VectorOptions293385261.h"
#include "DOTween_DG_Tweening_Tween278478013.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice2468589887.h"

// System.Void DG.Tweening.Plugins.Vector3Plugin::Reset(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>)
extern "C"  void Vector3Plugin_Reset_m3289576255 (Vector3Plugin_t2164530409 * __this, TweenerCore_3_t1108663466 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 DG.Tweening.Plugins.Vector3Plugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>,UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Vector3Plugin_ConvertToStartValue_m1226386644 (Vector3Plugin_t2164530409 * __this, TweenerCore_3_t1108663466 * ___t0, Vector3_t2243707580  ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector3Plugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>)
extern "C"  void Vector3Plugin_SetRelativeEndValue_m636480614 (Vector3Plugin_t2164530409 * __this, TweenerCore_3_t1108663466 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector3Plugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>)
extern "C"  void Vector3Plugin_SetChangeValue_m1626273757 (Vector3Plugin_t2164530409 * __this, TweenerCore_3_t1108663466 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.Vector3Plugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.VectorOptions,System.Single,UnityEngine.Vector3)
extern "C"  float Vector3Plugin_GetSpeedBasedDuration_m688220781 (Vector3Plugin_t2164530409 * __this, VectorOptions_t293385261  ___options0, float ___unitsXSecond1, Vector3_t2243707580  ___changeValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector3Plugin::EvaluateAndApply(DG.Tweening.Plugins.Options.VectorOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>,DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>,System.Single,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void Vector3Plugin_EvaluateAndApply_m3218858388 (Vector3Plugin_t2164530409 * __this, VectorOptions_t293385261  ___options0, Tween_t278478013 * ___t1, bool ___isRelative2, DOGetter_1_t4025813722 * ___getter3, DOSetter_1_t3901936566 * ___setter4, float ___elapsed5, Vector3_t2243707580  ___startValue6, Vector3_t2243707580  ___changeValue7, float ___duration8, bool ___usingInversePosition9, int32_t ___updateNotice10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector3Plugin::.ctor()
extern "C"  void Vector3Plugin__ctor_m2496113054 (Vector3Plugin_t2164530409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
