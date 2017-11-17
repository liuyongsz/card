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

// live2d.PartsData
struct PartsData_t1575779564;
// live2d.BReader
struct BReader_t585071643;
// live2d.PartsData/PartsDataContext
struct PartsDataContext_t1905586784;
// live2d.ModelContext
struct ModelContext_t1483254982;
// System.Collections.Generic.List`1<live2d.IBaseData>
struct List_1_t1835915496;
// System.Collections.Generic.List`1<live2d.IDrawData>
struct List_1_t535417409;

#include "codegen/il2cpp-codegen.h"
#include "Live2DUnity_live2d_BReader585071643.h"
#include "Live2DUnity_live2d_ModelContext1483254982.h"

// System.Void live2d.PartsData::.ctor()
extern "C"  void PartsData__ctor_m2052643570 (PartsData_t1575779564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.PartsData::readV2(live2d.BReader)
extern "C"  void PartsData_readV2_m3969559929 (PartsData_t1575779564 * __this, BReader_t585071643 * ___br0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// live2d.PartsData/PartsDataContext live2d.PartsData::init(live2d.ModelContext)
extern "C"  PartsDataContext_t1905586784 * PartsData_init_m2563107915 (PartsData_t1575779564 * __this, ModelContext_t1483254982 * ___mdc0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean live2d.PartsData::isVisible()
extern "C"  bool PartsData_isVisible_m1315226352 (PartsData_t1575779564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<live2d.IBaseData> live2d.PartsData::getBaseData()
extern "C"  List_1_t1835915496 * PartsData_getBaseData_m2063755828 (PartsData_t1575779564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<live2d.IDrawData> live2d.PartsData::getDrawData()
extern "C"  List_1_t535417409 * PartsData_getDrawData_m727802142 (PartsData_t1575779564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.PartsData::.cctor()
extern "C"  void PartsData__cctor_m1661352469 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
