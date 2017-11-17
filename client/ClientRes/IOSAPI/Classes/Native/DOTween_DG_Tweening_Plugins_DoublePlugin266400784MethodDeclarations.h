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

// DG.Tweening.Plugins.DoublePlugin
struct DoublePlugin_t266400784;
// DG.Tweening.Core.TweenerCore`3<System.Double,System.Double,DG.Tweening.Plugins.Options.NoOptions>
struct TweenerCore_3_t456598886;
// DG.Tweening.Tween
struct Tween_t278478013;
// DG.Tweening.Core.DOGetter`1<System.Double>
struct DOGetter_1_t1565154527;
// DG.Tweening.Core.DOSetter`1<System.Double>
struct DOSetter_1_t1441277371;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_Plugins_Options_NoOptions2508431845.h"
#include "DOTween_DG_Tweening_Tween278478013.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice2468589887.h"

// System.Void DG.Tweening.Plugins.DoublePlugin::Reset(DG.Tweening.Core.TweenerCore`3<System.Double,System.Double,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void DoublePlugin_Reset_m4097767476 (DoublePlugin_t266400784 * __this, TweenerCore_3_t456598886 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double DG.Tweening.Plugins.DoublePlugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<System.Double,System.Double,DG.Tweening.Plugins.Options.NoOptions>,System.Double)
extern "C"  double DoublePlugin_ConvertToStartValue_m2828371137 (DoublePlugin_t266400784 * __this, TweenerCore_3_t456598886 * ___t0, double ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.DoublePlugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<System.Double,System.Double,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void DoublePlugin_SetRelativeEndValue_m743829071 (DoublePlugin_t266400784 * __this, TweenerCore_3_t456598886 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.DoublePlugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<System.Double,System.Double,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void DoublePlugin_SetChangeValue_m2620647386 (DoublePlugin_t266400784 * __this, TweenerCore_3_t456598886 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.DoublePlugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.NoOptions,System.Single,System.Double)
extern "C"  float DoublePlugin_GetSpeedBasedDuration_m3485989573 (DoublePlugin_t266400784 * __this, NoOptions_t2508431845  ___options0, float ___unitsXSecond1, double ___changeValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.DoublePlugin::EvaluateAndApply(DG.Tweening.Plugins.Options.NoOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<System.Double>,DG.Tweening.Core.DOSetter`1<System.Double>,System.Single,System.Double,System.Double,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void DoublePlugin_EvaluateAndApply_m986922907 (DoublePlugin_t266400784 * __this, NoOptions_t2508431845  ___options0, Tween_t278478013 * ___t1, bool ___isRelative2, DOGetter_1_t1565154527 * ___getter3, DOSetter_1_t1441277371 * ___setter4, float ___elapsed5, double ___startValue6, double ___changeValue7, float ___duration8, bool ___usingInversePosition9, int32_t ___updateNotice10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.DoublePlugin::.ctor()
extern "C"  void DoublePlugin__ctor_m472028567 (DoublePlugin_t266400784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
