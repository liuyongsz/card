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

// DG.Tweening.Plugins.Color2Plugin
struct Color2Plugin_t3433430606;
// DG.Tweening.Core.TweenerCore`3<DG.Tweening.Color2,DG.Tweening.Color2,DG.Tweening.Plugins.Options.ColorOptions>
struct TweenerCore_3_t3925803634;
// DG.Tweening.Tween
struct Tween_t278478013;
// DG.Tweening.Core.DOGetter`1<DG.Tweening.Color2>
struct DOGetter_1_t2014832765;
// DG.Tweening.Core.DOSetter`1<DG.Tweening.Color2>
struct DOSetter_1_t1890955609;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_Color2232726623.h"
#include "DOTween_DG_Tweening_Plugins_Options_ColorOptions2213017305.h"
#include "DOTween_DG_Tweening_Tween278478013.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice2468589887.h"

// System.Void DG.Tweening.Plugins.Color2Plugin::Reset(DG.Tweening.Core.TweenerCore`3<DG.Tweening.Color2,DG.Tweening.Color2,DG.Tweening.Plugins.Options.ColorOptions>)
extern "C"  void Color2Plugin_Reset_m1040404076 (Color2Plugin_t3433430606 * __this, TweenerCore_3_t3925803634 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Color2 DG.Tweening.Plugins.Color2Plugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<DG.Tweening.Color2,DG.Tweening.Color2,DG.Tweening.Plugins.Options.ColorOptions>,DG.Tweening.Color2)
extern "C"  Color2_t232726623  Color2Plugin_ConvertToStartValue_m1627227983 (Color2Plugin_t3433430606 * __this, TweenerCore_3_t3925803634 * ___t0, Color2_t232726623  ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Color2Plugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<DG.Tweening.Color2,DG.Tweening.Color2,DG.Tweening.Plugins.Options.ColorOptions>)
extern "C"  void Color2Plugin_SetRelativeEndValue_m2002112229 (Color2Plugin_t3433430606 * __this, TweenerCore_3_t3925803634 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Color2Plugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<DG.Tweening.Color2,DG.Tweening.Color2,DG.Tweening.Plugins.Options.ColorOptions>)
extern "C"  void Color2Plugin_SetChangeValue_m1983329186 (Color2Plugin_t3433430606 * __this, TweenerCore_3_t3925803634 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.Color2Plugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.ColorOptions,System.Single,DG.Tweening.Color2)
extern "C"  float Color2Plugin_GetSpeedBasedDuration_m1878874090 (Color2Plugin_t3433430606 * __this, ColorOptions_t2213017305  ___options0, float ___unitsXSecond1, Color2_t232726623  ___changeValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Color2Plugin::EvaluateAndApply(DG.Tweening.Plugins.Options.ColorOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<DG.Tweening.Color2>,DG.Tweening.Core.DOSetter`1<DG.Tweening.Color2>,System.Single,DG.Tweening.Color2,DG.Tweening.Color2,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void Color2Plugin_EvaluateAndApply_m1350282949 (Color2Plugin_t3433430606 * __this, ColorOptions_t2213017305  ___options0, Tween_t278478013 * ___t1, bool ___isRelative2, DOGetter_1_t2014832765 * ___getter3, DOSetter_1_t1890955609 * ___setter4, float ___elapsed5, Color2_t232726623  ___startValue6, Color2_t232726623  ___changeValue7, float ___duration8, bool ___usingInversePosition9, int32_t ___updateNotice10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Color2Plugin::.ctor()
extern "C"  void Color2Plugin__ctor_m2361216917 (Color2Plugin_t3433430606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
