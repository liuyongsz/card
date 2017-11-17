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

// DG.Tweening.Plugins.StringPlugin
struct StringPlugin_t3620786088;
// DG.Tweening.Core.TweenerCore`3<System.String,System.String,DG.Tweening.Plugins.Options.StringOptions>
struct TweenerCore_3_t588429502;
// System.String
struct String_t;
// DG.Tweening.Tween
struct Tween_t278478013;
// DG.Tweening.Core.DOGetter`1<System.String>
struct DOGetter_1_t3811326375;
// DG.Tweening.Core.DOSetter`1<System.String>
struct DOSetter_1_t3687449219;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.Char[]
struct CharU5BU5D_t1328083999;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "DOTween_DG_Tweening_Plugins_Options_StringOptions2885323933.h"
#include "DOTween_DG_Tweening_Tween278478013.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice2468589887.h"

// System.Void DG.Tweening.Plugins.StringPlugin::Reset(DG.Tweening.Core.TweenerCore`3<System.String,System.String,DG.Tweening.Plugins.Options.StringOptions>)
extern "C"  void StringPlugin_Reset_m77394362 (StringPlugin_t3620786088 * __this, TweenerCore_3_t588429502 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String DG.Tweening.Plugins.StringPlugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<System.String,System.String,DG.Tweening.Plugins.Options.StringOptions>,System.String)
extern "C"  String_t* StringPlugin_ConvertToStartValue_m202643461 (StringPlugin_t3620786088 * __this, TweenerCore_3_t588429502 * ___t0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.StringPlugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<System.String,System.String,DG.Tweening.Plugins.Options.StringOptions>)
extern "C"  void StringPlugin_SetRelativeEndValue_m3015982295 (StringPlugin_t3620786088 * __this, TweenerCore_3_t588429502 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.StringPlugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<System.String,System.String,DG.Tweening.Plugins.Options.StringOptions>)
extern "C"  void StringPlugin_SetChangeValue_m2758686388 (StringPlugin_t3620786088 * __this, TweenerCore_3_t588429502 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.StringPlugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.StringOptions,System.Single,System.String)
extern "C"  float StringPlugin_GetSpeedBasedDuration_m3607809797 (StringPlugin_t3620786088 * __this, StringOptions_t2885323933  ___options0, float ___unitsXSecond1, String_t* ___changeValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.StringPlugin::EvaluateAndApply(DG.Tweening.Plugins.Options.StringOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<System.String>,DG.Tweening.Core.DOSetter`1<System.String>,System.Single,System.String,System.String,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void StringPlugin_EvaluateAndApply_m3214475539 (StringPlugin_t3620786088 * __this, StringOptions_t2885323933  ___options0, Tween_t278478013 * ___t1, bool ___isRelative2, DOGetter_1_t3811326375 * ___getter3, DOSetter_1_t3687449219 * ___setter4, float ___elapsed5, String_t* ___startValue6, String_t* ___changeValue7, float ___duration8, bool ___usingInversePosition9, int32_t ___updateNotice10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder DG.Tweening.Plugins.StringPlugin::Append(System.String,System.Int32,System.Int32,System.Boolean)
extern "C"  StringBuilder_t1221177846 * StringPlugin_Append_m915403987 (StringPlugin_t3620786088 * __this, String_t* ___value0, int32_t ___startIndex1, int32_t ___length2, bool ___richTextEnabled3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] DG.Tweening.Plugins.StringPlugin::ScrambledCharsToUse(DG.Tweening.Plugins.Options.StringOptions)
extern "C"  CharU5BU5D_t1328083999* StringPlugin_ScrambledCharsToUse_m3337172010 (StringPlugin_t3620786088 * __this, StringOptions_t2885323933  ___options0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.StringPlugin::.ctor()
extern "C"  void StringPlugin__ctor_m4132855087 (StringPlugin_t3620786088 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.StringPlugin::.cctor()
extern "C"  void StringPlugin__cctor_m4075694604 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
