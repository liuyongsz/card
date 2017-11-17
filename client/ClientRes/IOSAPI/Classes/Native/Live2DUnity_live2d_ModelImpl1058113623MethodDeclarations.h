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

// live2d.ModelImpl
struct ModelImpl_t1058113623;
// live2d.BReader
struct BReader_t585071643;
// System.Collections.Generic.List`1<live2d.PartsData>
struct List_1_t944900696;
// live2d.ParamDefSet
struct ParamDefSet_t2724450206;

#include "codegen/il2cpp-codegen.h"
#include "Live2DUnity_live2d_BReader585071643.h"

// System.Void live2d.ModelImpl::.ctor()
extern "C"  void ModelImpl__ctor_m2983058033 (ModelImpl_t1058113623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single live2d.ModelImpl::getCanvasWidth()
extern "C"  float ModelImpl_getCanvasWidth_m3285178747 (ModelImpl_t1058113623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.ModelImpl::readV2(live2d.BReader)
extern "C"  void ModelImpl_readV2_m806395688 (ModelImpl_t1058113623 * __this, BReader_t585071643 * ___br0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<live2d.PartsData> live2d.ModelImpl::getPartsDataList()
extern "C"  List_1_t944900696 * ModelImpl_getPartsDataList_m3919998438 (ModelImpl_t1058113623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// live2d.ParamDefSet live2d.ModelImpl::getParamDefSet()
extern "C"  ParamDefSet_t2724450206 * ModelImpl_getParamDefSet_m2376799458 (ModelImpl_t1058113623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.ModelImpl::.cctor()
extern "C"  void ModelImpl__cctor_m3946405744 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
