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
// System.String[]
struct StringU5BU5D_t1642385972;
// UnityEngine.LayerMask
struct LayerMask_t3188175821;
struct LayerMask_t3188175821_marshaled_pinvoke;
struct LayerMask_t3188175821_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"
#include "mscorlib_System_String2029220233.h"

// System.Int32 UnityEngine.LayerMask::get_value()
extern "C"  int32_t LayerMask_get_value_m251765876 (LayerMask_t3188175821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
extern "C"  int32_t LayerMask_NameToLayer_m1506372053 (Il2CppObject * __this /* static, unused */, String_t* ___layerName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.LayerMask::GetMask(System.String[])
extern "C"  int32_t LayerMask_GetMask_m1046709132 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t1642385972* ___layerNames0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
extern "C"  int32_t LayerMask_op_Implicit_m2135076047 (Il2CppObject * __this /* static, unused */, LayerMask_t3188175821  ___mask0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
extern "C"  LayerMask_t3188175821  LayerMask_op_Implicit_m3804506591 (Il2CppObject * __this /* static, unused */, int32_t ___intVal0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct LayerMask_t3188175821;
struct LayerMask_t3188175821_marshaled_pinvoke;

extern "C" void LayerMask_t3188175821_marshal_pinvoke(const LayerMask_t3188175821& unmarshaled, LayerMask_t3188175821_marshaled_pinvoke& marshaled);
extern "C" void LayerMask_t3188175821_marshal_pinvoke_back(const LayerMask_t3188175821_marshaled_pinvoke& marshaled, LayerMask_t3188175821& unmarshaled);
extern "C" void LayerMask_t3188175821_marshal_pinvoke_cleanup(LayerMask_t3188175821_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct LayerMask_t3188175821;
struct LayerMask_t3188175821_marshaled_com;

extern "C" void LayerMask_t3188175821_marshal_com(const LayerMask_t3188175821& unmarshaled, LayerMask_t3188175821_marshaled_com& marshaled);
extern "C" void LayerMask_t3188175821_marshal_com_back(const LayerMask_t3188175821_marshaled_com& marshaled, LayerMask_t3188175821& unmarshaled);
extern "C" void LayerMask_t3188175821_marshal_com_cleanup(LayerMask_t3188175821_marshaled_com& marshaled);
