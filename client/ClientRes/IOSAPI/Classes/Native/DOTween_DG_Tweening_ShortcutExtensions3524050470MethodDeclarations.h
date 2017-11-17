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

// DG.Tweening.Tweener
struct Tweener_t760404022;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOMove(UnityEngine.Transform,UnityEngine.Vector3,System.Single,System.Boolean)
extern "C"  Tweener_t760404022 * ShortcutExtensions_DOMove_m813241662 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___target0, Vector3_t2243707580  ___endValue1, float ___duration2, bool ___snapping3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOMoveY(UnityEngine.Transform,System.Single,System.Single,System.Boolean)
extern "C"  Tweener_t760404022 * ShortcutExtensions_DOMoveY_m3000263681 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___target0, float ___endValue1, float ___duration2, bool ___snapping3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOScale(UnityEngine.Transform,UnityEngine.Vector3,System.Single)
extern "C"  Tweener_t760404022 * ShortcutExtensions_DOScale_m2754995414 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___target0, Vector3_t2243707580  ___endValue1, float ___duration2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOShakePosition(UnityEngine.Transform,System.Single,System.Single,System.Int32,System.Single,System.Boolean,System.Boolean)
extern "C"  Tweener_t760404022 * ShortcutExtensions_DOShakePosition_m2336714075 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___target0, float ___duration1, float ___strength2, int32_t ___vibrato3, float ___randomness4, bool ___snapping5, bool ___fadeOut6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
