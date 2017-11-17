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

// System.String
struct String_t;
// UnityEngine.Resolution
struct Resolution_t3693662728;
struct Resolution_t3693662728_marshaled_pinvoke;
struct Resolution_t3693662728_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Resolution3693662728.h"

// System.Int32 UnityEngine.Resolution::get_width()
extern "C"  int32_t Resolution_get_width_m1438273472 (Resolution_t3693662728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Resolution::get_height()
extern "C"  int32_t Resolution_get_height_m882683003 (Resolution_t3693662728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Resolution::ToString()
extern "C"  String_t* Resolution_ToString_m3711510886 (Resolution_t3693662728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Resolution_t3693662728;
struct Resolution_t3693662728_marshaled_pinvoke;

extern "C" void Resolution_t3693662728_marshal_pinvoke(const Resolution_t3693662728& unmarshaled, Resolution_t3693662728_marshaled_pinvoke& marshaled);
extern "C" void Resolution_t3693662728_marshal_pinvoke_back(const Resolution_t3693662728_marshaled_pinvoke& marshaled, Resolution_t3693662728& unmarshaled);
extern "C" void Resolution_t3693662728_marshal_pinvoke_cleanup(Resolution_t3693662728_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Resolution_t3693662728;
struct Resolution_t3693662728_marshaled_com;

extern "C" void Resolution_t3693662728_marshal_com(const Resolution_t3693662728& unmarshaled, Resolution_t3693662728_marshaled_com& marshaled);
extern "C" void Resolution_t3693662728_marshal_com_back(const Resolution_t3693662728_marshaled_com& marshaled, Resolution_t3693662728& unmarshaled);
extern "C" void Resolution_t3693662728_marshal_com_cleanup(Resolution_t3693662728_marshaled_com& marshaled);
