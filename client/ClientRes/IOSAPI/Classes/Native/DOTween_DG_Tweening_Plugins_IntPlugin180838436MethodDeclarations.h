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

// DG.Tweening.Plugins.IntPlugin
struct IntPlugin_t180838436;
// DG.Tweening.Core.TweenerCore`3<System.Int32,System.Int32,DG.Tweening.Plugins.Options.NoOptions>
struct TweenerCore_3_t3160108754;
// DG.Tweening.Tween
struct Tween_t278478013;
// DG.Tweening.Core.DOGetter`1<System.Int32>
struct DOGetter_1_t3853983590;
// DG.Tweening.Core.DOSetter`1<System.Int32>
struct DOSetter_1_t3730106434;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_Plugins_Options_NoOptions2508431845.h"
#include "DOTween_DG_Tweening_Tween278478013.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice2468589887.h"

// System.Void DG.Tweening.Plugins.IntPlugin::Reset(DG.Tweening.Core.TweenerCore`3<System.Int32,System.Int32,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void IntPlugin_Reset_m473564686 (IntPlugin_t180838436 * __this, TweenerCore_3_t3160108754 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DG.Tweening.Plugins.IntPlugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<System.Int32,System.Int32,DG.Tweening.Plugins.Options.NoOptions>,System.Int32)
extern "C"  int32_t IntPlugin_ConvertToStartValue_m2826582483 (IntPlugin_t180838436 * __this, TweenerCore_3_t3160108754 * ___t0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.IntPlugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<System.Int32,System.Int32,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void IntPlugin_SetRelativeEndValue_m3715330301 (IntPlugin_t180838436 * __this, TweenerCore_3_t3160108754 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.IntPlugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<System.Int32,System.Int32,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void IntPlugin_SetChangeValue_m2318505996 (IntPlugin_t180838436 * __this, TweenerCore_3_t3160108754 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.IntPlugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.NoOptions,System.Single,System.Int32)
extern "C"  float IntPlugin_GetSpeedBasedDuration_m2752808202 (IntPlugin_t180838436 * __this, NoOptions_t2508431845  ___options0, float ___unitsXSecond1, int32_t ___changeValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.IntPlugin::EvaluateAndApply(DG.Tweening.Plugins.Options.NoOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<System.Int32>,DG.Tweening.Core.DOSetter`1<System.Int32>,System.Single,System.Int32,System.Int32,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void IntPlugin_EvaluateAndApply_m576724549 (IntPlugin_t180838436 * __this, NoOptions_t2508431845  ___options0, Tween_t278478013 * ___t1, bool ___isRelative2, DOGetter_1_t3853983590 * ___getter3, DOSetter_1_t3730106434 * ___setter4, float ___elapsed5, int32_t ___startValue6, int32_t ___changeValue7, float ___duration8, bool ___usingInversePosition9, int32_t ___updateNotice10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.IntPlugin::.ctor()
extern "C"  void IntPlugin__ctor_m291784073 (IntPlugin_t180838436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
