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

// LabelBlingEffect
struct LabelBlingEffect_t1192352145;
// UILabel
struct UILabel_t1795115428;
// TweenAlpha
struct TweenAlpha_t2421518635;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void LabelBlingEffect::.ctor()
extern "C"  void LabelBlingEffect__ctor_m1554956548 (LabelBlingEffect_t1192352145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UILabel LabelBlingEffect::get_cachedLabel()
extern "C"  UILabel_t1795115428 * LabelBlingEffect_get_cachedLabel_m4009683548 (LabelBlingEffect_t1192352145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LabelBlingEffect::get_alpha()
extern "C"  float LabelBlingEffect_get_alpha_m3992626087 (LabelBlingEffect_t1192352145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LabelBlingEffect::set_alpha(System.Single)
extern "C"  void LabelBlingEffect_set_alpha_m1569477428 (LabelBlingEffect_t1192352145 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LabelBlingEffect::get_value()
extern "C"  float LabelBlingEffect_get_value_m3694477636 (LabelBlingEffect_t1192352145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LabelBlingEffect::set_value(System.Single)
extern "C"  void LabelBlingEffect_set_value_m1541676891 (LabelBlingEffect_t1192352145 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LabelBlingEffect::Awake()
extern "C"  void LabelBlingEffect_Awake_m3445258897 (LabelBlingEffect_t1192352145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LabelBlingEffect::OnUpdate(System.Single,System.Boolean)
extern "C"  void LabelBlingEffect_OnUpdate_m1832086382 (LabelBlingEffect_t1192352145 * __this, float ___factor0, bool ___isFinished1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenAlpha LabelBlingEffect::Begin(UnityEngine.GameObject,System.Single,System.Single)
extern "C"  TweenAlpha_t2421518635 * LabelBlingEffect_Begin_m2674758229 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, float ___duration1, float ___alpha2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LabelBlingEffect::PlayEffect()
extern "C"  void LabelBlingEffect_PlayEffect_m3923380771 (LabelBlingEffect_t1192352145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LabelBlingEffect::StopEffect()
extern "C"  void LabelBlingEffect_StopEffect_m919456091 (LabelBlingEffect_t1192352145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LabelBlingEffect::SetStartToCurrentValue()
extern "C"  void LabelBlingEffect_SetStartToCurrentValue_m1185336571 (LabelBlingEffect_t1192352145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LabelBlingEffect::SetEndToCurrentValue()
extern "C"  void LabelBlingEffect_SetEndToCurrentValue_m4238342132 (LabelBlingEffect_t1192352145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
