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

// DG.Tweening.Plugins.ColorPlugin
struct ColorPlugin_t4063724482;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct TweenerCore_3_t2998039394;
// DG.Tweening.Tween
struct Tween_t278478013;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Color>
struct DOGetter_1_t3802498217;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Color>
struct DOSetter_1_t3678621061;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "DOTween_DG_Tweening_Plugins_Options_ColorOptions2213017305.h"
#include "DOTween_DG_Tweening_Tween278478013.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice2468589887.h"

// System.Void DG.Tweening.Plugins.ColorPlugin::Reset(DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>)
extern "C"  void ColorPlugin_Reset_m1252644186 (ColorPlugin_t4063724482 * __this, TweenerCore_3_t2998039394 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color DG.Tweening.Plugins.ColorPlugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>,UnityEngine.Color)
extern "C"  Color_t2020392075  ColorPlugin_ConvertToStartValue_m339617241 (ColorPlugin_t4063724482 * __this, TweenerCore_3_t2998039394 * ___t0, Color_t2020392075  ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.ColorPlugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>)
extern "C"  void ColorPlugin_SetRelativeEndValue_m1561834483 (ColorPlugin_t4063724482 * __this, TweenerCore_3_t2998039394 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.ColorPlugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>)
extern "C"  void ColorPlugin_SetChangeValue_m2303083132 (ColorPlugin_t4063724482 * __this, TweenerCore_3_t2998039394 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.ColorPlugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.ColorOptions,System.Single,UnityEngine.Color)
extern "C"  float ColorPlugin_GetSpeedBasedDuration_m1013203397 (ColorPlugin_t4063724482 * __this, ColorOptions_t2213017305  ___options0, float ___unitsXSecond1, Color_t2020392075  ___changeValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.ColorPlugin::EvaluateAndApply(DG.Tweening.Plugins.Options.ColorOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<UnityEngine.Color>,DG.Tweening.Core.DOSetter`1<UnityEngine.Color>,System.Single,UnityEngine.Color,UnityEngine.Color,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void ColorPlugin_EvaluateAndApply_m2466855459 (ColorPlugin_t4063724482 * __this, ColorOptions_t2213017305  ___options0, Tween_t278478013 * ___t1, bool ___isRelative2, DOGetter_1_t3802498217 * ___getter3, DOSetter_1_t3678621061 * ___setter4, float ___elapsed5, Color_t2020392075  ___startValue6, Color_t2020392075  ___changeValue7, float ___duration8, bool ___usingInversePosition9, int32_t ___updateNotice10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.ColorPlugin::.ctor()
extern "C"  void ColorPlugin__ctor_m1241819855 (ColorPlugin_t4063724482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
