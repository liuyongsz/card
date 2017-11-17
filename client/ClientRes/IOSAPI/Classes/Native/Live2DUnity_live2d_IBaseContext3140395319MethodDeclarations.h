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

// live2d.IBaseContext
struct IBaseContext_t3140395319;
// live2d.IBaseData
struct IBaseData_t2466794364;

#include "codegen/il2cpp-codegen.h"
#include "Live2DUnity_live2d_IBaseData2466794364.h"

// System.Boolean live2d.IBaseContext::isAvailable()
extern "C"  bool IBaseContext_isAvailable_m3687474210 (IBaseContext_t3140395319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.IBaseContext::setAvailable(System.Boolean)
extern "C"  void IBaseContext_setAvailable_m1283414265 (IBaseContext_t3140395319 * __this, bool ___available0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.IBaseContext::.ctor(live2d.IBaseData)
extern "C"  void IBaseContext__ctor_m432197115 (IBaseContext_t3140395319 * __this, IBaseData_t2466794364 * ___src0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// live2d.IBaseData live2d.IBaseContext::getSrcPtr()
extern "C"  IBaseData_t2466794364 * IBaseContext_getSrcPtr_m633723620 (IBaseContext_t3140395319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.IBaseContext::setPartsIndex(System.Int32)
extern "C"  void IBaseContext_setPartsIndex_m2383385054 (IBaseContext_t3140395319 * __this, int32_t ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean live2d.IBaseContext::isOutsideParam()
extern "C"  bool IBaseContext_isOutsideParam_m1216010805 (IBaseContext_t3140395319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.IBaseContext::setOutsideParam(System.Boolean)
extern "C"  void IBaseContext_setOutsideParam_m3753283516 (IBaseContext_t3140395319 * __this, bool ___isOutsideParam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single live2d.IBaseContext::getTotalScale()
extern "C"  float IBaseContext_getTotalScale_m390409427 (IBaseContext_t3140395319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.IBaseContext::setTotalScale_notForClient(System.Single)
extern "C"  void IBaseContext_setTotalScale_notForClient_m3545673116 (IBaseContext_t3140395319 * __this, float ___totalScale0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single live2d.IBaseContext::getInterpolatedOpacity()
extern "C"  float IBaseContext_getInterpolatedOpacity_m2343359155 (IBaseContext_t3140395319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.IBaseContext::setInterpolatedOpacity(System.Single)
extern "C"  void IBaseContext_setInterpolatedOpacity_m467796964 (IBaseContext_t3140395319 * __this, float ___interpolatedOpacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single live2d.IBaseContext::getTotalOpacity()
extern "C"  float IBaseContext_getTotalOpacity_m887218136 (IBaseContext_t3140395319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.IBaseContext::setTotalOpacity(System.Single)
extern "C"  void IBaseContext_setTotalOpacity_m1264316933 (IBaseContext_t3140395319 * __this, float ___totalOpacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
