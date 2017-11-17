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

// live2d.framework.L2DPhysics
struct L2DPhysics_t11740845;
// live2d.PhysicsHair
struct PhysicsHair_t1240400373;
// live2d.ALive2DModel
struct ALive2DModel_t4064879310;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t1328083999;

#include "codegen/il2cpp-codegen.h"
#include "Live2DUnity_live2d_PhysicsHair1240400373.h"
#include "Live2DUnity_live2d_ALive2DModel4064879310.h"
#include "mscorlib_System_String2029220233.h"

// System.Void live2d.framework.L2DPhysics::.ctor()
extern "C"  void L2DPhysics__ctor_m204046922 (L2DPhysics_t11740845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.framework.L2DPhysics::addParam(live2d.PhysicsHair)
extern "C"  void L2DPhysics_addParam_m2784192351 (L2DPhysics_t11740845 * __this, PhysicsHair_t1240400373 * ___phisics0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.framework.L2DPhysics::updateParam(live2d.ALive2DModel)
extern "C"  void L2DPhysics_updateParam_m890660500 (L2DPhysics_t11740845 * __this, ALive2DModel_t4064879310 * ___model0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// live2d.framework.L2DPhysics live2d.framework.L2DPhysics::load(System.Byte[])
extern "C"  L2DPhysics_t11740845 * L2DPhysics_load_m2352812797 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___buf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// live2d.framework.L2DPhysics live2d.framework.L2DPhysics::load(System.String)
extern "C"  L2DPhysics_t11740845 * L2DPhysics_load_m1676780154 (Il2CppObject * __this /* static, unused */, String_t* ___buf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// live2d.framework.L2DPhysics live2d.framework.L2DPhysics::load(System.Char[])
extern "C"  L2DPhysics_t11740845 * L2DPhysics_load_m955058587 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___buf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
