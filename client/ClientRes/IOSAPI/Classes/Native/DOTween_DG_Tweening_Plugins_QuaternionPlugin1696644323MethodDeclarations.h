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

// DG.Tweening.Plugins.QuaternionPlugin
struct QuaternionPlugin_t1696644323;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct TweenerCore_3_t1672798003;
// DG.Tweening.Tween
struct Tween_t278478013;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Quaternion>
struct DOGetter_1_t1517212764;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Quaternion>
struct DOSetter_1_t1393335608;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "DOTween_DG_Tweening_Plugins_Options_QuaternionOptio466049668.h"
#include "DOTween_DG_Tweening_Tween278478013.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice2468589887.h"

// System.Void DG.Tweening.Plugins.QuaternionPlugin::Reset(DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>)
extern "C"  void QuaternionPlugin_Reset_m540886732 (QuaternionPlugin_t1696644323 * __this, TweenerCore_3_t1672798003 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 DG.Tweening.Plugins.QuaternionPlugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>,UnityEngine.Quaternion)
extern "C"  Vector3_t2243707580  QuaternionPlugin_ConvertToStartValue_m730900917 (QuaternionPlugin_t1696644323 * __this, TweenerCore_3_t1672798003 * ___t0, Quaternion_t4030073918  ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.QuaternionPlugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>)
extern "C"  void QuaternionPlugin_SetRelativeEndValue_m1706574209 (QuaternionPlugin_t1696644323 * __this, TweenerCore_3_t1672798003 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.QuaternionPlugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>)
extern "C"  void QuaternionPlugin_SetChangeValue_m3086676884 (QuaternionPlugin_t1696644323 * __this, TweenerCore_3_t1672798003 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.QuaternionPlugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.QuaternionOptions,System.Single,UnityEngine.Vector3)
extern "C"  float QuaternionPlugin_GetSpeedBasedDuration_m1629956606 (QuaternionPlugin_t1696644323 * __this, QuaternionOptions_t466049668  ___options0, float ___unitsXSecond1, Vector3_t2243707580  ___changeValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.QuaternionPlugin::EvaluateAndApply(DG.Tweening.Plugins.Options.QuaternionOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<UnityEngine.Quaternion>,DG.Tweening.Core.DOSetter`1<UnityEngine.Quaternion>,System.Single,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void QuaternionPlugin_EvaluateAndApply_m53279647 (QuaternionPlugin_t1696644323 * __this, QuaternionOptions_t466049668  ___options0, Tween_t278478013 * ___t1, bool ___isRelative2, DOGetter_1_t1517212764 * ___getter3, DOSetter_1_t1393335608 * ___setter4, float ___elapsed5, Vector3_t2243707580  ___startValue6, Vector3_t2243707580  ___changeValue7, float ___duration8, bool ___usingInversePosition9, int32_t ___updateNotice10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.QuaternionPlugin::.ctor()
extern "C"  void QuaternionPlugin__ctor_m3223195802 (QuaternionPlugin_t1696644323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
