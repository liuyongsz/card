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

// live2d.LDRectF
struct LDRectF_t3110420638;
struct LDRectF_t3110420638_marshaled_pinvoke;
struct LDRectF_t3110420638_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "Live2DUnity_live2d_LDRectF3110420638.h"

// System.Void live2d.LDRectF::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void LDRectF__ctor_m2042873042 (LDRectF_t3110420638 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single live2d.LDRectF::getRight()
extern "C"  float LDRectF_getRight_m1225249102 (LDRectF_t3110420638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single live2d.LDRectF::getBottom()
extern "C"  float LDRectF_getBottom_m123763235 (LDRectF_t3110420638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.LDRectF::setRect(System.Single,System.Single,System.Single,System.Single)
extern "C"  void LDRectF_setRect_m1783671448 (LDRectF_t3110420638 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.LDRectF::setRect(live2d.LDRectF)
extern "C"  void LDRectF_setRect_m3915150884 (LDRectF_t3110420638 * __this, LDRectF_t3110420638  ___r0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.LDRectF::expand(System.Single,System.Single)
extern "C"  void LDRectF_expand_m248626468 (LDRectF_t3110420638 * __this, float ___w0, float ___h1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct LDRectF_t3110420638;
struct LDRectF_t3110420638_marshaled_pinvoke;

extern "C" void LDRectF_t3110420638_marshal_pinvoke(const LDRectF_t3110420638& unmarshaled, LDRectF_t3110420638_marshaled_pinvoke& marshaled);
extern "C" void LDRectF_t3110420638_marshal_pinvoke_back(const LDRectF_t3110420638_marshaled_pinvoke& marshaled, LDRectF_t3110420638& unmarshaled);
extern "C" void LDRectF_t3110420638_marshal_pinvoke_cleanup(LDRectF_t3110420638_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct LDRectF_t3110420638;
struct LDRectF_t3110420638_marshaled_com;

extern "C" void LDRectF_t3110420638_marshal_com(const LDRectF_t3110420638& unmarshaled, LDRectF_t3110420638_marshaled_com& marshaled);
extern "C" void LDRectF_t3110420638_marshal_com_back(const LDRectF_t3110420638_marshaled_com& marshaled, LDRectF_t3110420638& unmarshaled);
extern "C" void LDRectF_t3110420638_marshal_com_cleanup(LDRectF_t3110420638_marshaled_com& marshaled);
