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

// DG.Tweening.Plugins.Vector3ArrayPlugin
struct Vector3ArrayPlugin_t2378569512;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>
struct TweenerCore_3_t3793077019;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// DG.Tweening.Tween
struct Tween_t278478013;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_t4025813722;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_t3901936566;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "DOTween_DG_Tweening_Plugins_Options_Vector3ArrayOp2672570171.h"
#include "DOTween_DG_Tweening_Tween278478013.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice2468589887.h"

// System.Void DG.Tweening.Plugins.Vector3ArrayPlugin::Reset(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>)
extern "C"  void Vector3ArrayPlugin_Reset_m2592336274 (Vector3ArrayPlugin_t2378569512 * __this, TweenerCore_3_t3793077019 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] DG.Tweening.Plugins.Vector3ArrayPlugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>,UnityEngine.Vector3)
extern "C"  Vector3U5BU5D_t1172311765* Vector3ArrayPlugin_ConvertToStartValue_m1953175333 (Vector3ArrayPlugin_t2378569512 * __this, TweenerCore_3_t3793077019 * ___t0, Vector3_t2243707580  ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector3ArrayPlugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>)
extern "C"  void Vector3ArrayPlugin_SetRelativeEndValue_m1899894737 (Vector3ArrayPlugin_t2378569512 * __this, TweenerCore_3_t3793077019 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector3ArrayPlugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>)
extern "C"  void Vector3ArrayPlugin_SetChangeValue_m1701422420 (Vector3ArrayPlugin_t2378569512 * __this, TweenerCore_3_t3793077019 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.Vector3ArrayPlugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.Vector3ArrayOptions,System.Single,UnityEngine.Vector3[])
extern "C"  float Vector3ArrayPlugin_GetSpeedBasedDuration_m2617333706 (Vector3ArrayPlugin_t2378569512 * __this, Vector3ArrayOptions_t2672570171  ___options0, float ___unitsXSecond1, Vector3U5BU5D_t1172311765* ___changeValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector3ArrayPlugin::EvaluateAndApply(DG.Tweening.Plugins.Options.Vector3ArrayOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>,DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>,System.Single,UnityEngine.Vector3[],UnityEngine.Vector3[],System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void Vector3ArrayPlugin_EvaluateAndApply_m2521440271 (Vector3ArrayPlugin_t2378569512 * __this, Vector3ArrayOptions_t2672570171  ___options0, Tween_t278478013 * ___t1, bool ___isRelative2, DOGetter_1_t4025813722 * ___getter3, DOSetter_1_t3901936566 * ___setter4, float ___elapsed5, Vector3U5BU5D_t1172311765* ___startValue6, Vector3U5BU5D_t1172311765* ___changeValue7, float ___duration8, bool ___usingInversePosition9, int32_t ___updateNotice10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector3ArrayPlugin::.ctor()
extern "C"  void Vector3ArrayPlugin__ctor_m1114023449 (Vector3ArrayPlugin_t2378569512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
