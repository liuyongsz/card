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

// live2d.IBaseData
struct IBaseData_t2466794364;
// live2d.BReader
struct BReader_t585071643;
// live2d.ModelContext
struct ModelContext_t1483254982;
// live2d.PivotManager
struct PivotManager_t179514031;
// live2d.IBaseContext
struct IBaseContext_t3140395319;
// System.Boolean[]
struct BooleanU5BU5D_t3568034315;
// live2d.BaseDataID
struct BaseDataID_t3014180214;

#include "codegen/il2cpp-codegen.h"
#include "Live2DUnity_live2d_BReader585071643.h"
#include "Live2DUnity_live2d_ModelContext1483254982.h"
#include "Live2DUnity_live2d_PivotManager179514031.h"
#include "Live2DUnity_live2d_IBaseContext3140395319.h"

// System.Void live2d.IBaseData::.ctor()
extern "C"  void IBaseData__ctor_m4221501250 (IBaseData_t2466794364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.IBaseData::readV2(live2d.BReader)
extern "C"  void IBaseData_readV2_m3044195977 (IBaseData_t2466794364 * __this, BReader_t585071643 * ___br0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.IBaseData::readV2_opacity(live2d.BReader)
extern "C"  void IBaseData_readV2_opacity_m923192455 (IBaseData_t2466794364 * __this, BReader_t585071643 * ___br0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.IBaseData::interpolateOpacity(live2d.ModelContext,live2d.PivotManager,live2d.IBaseContext,System.Boolean[])
extern "C"  void IBaseData_interpolateOpacity_m3842568539 (IBaseData_t2466794364 * __this, ModelContext_t1483254982 * ___mdc0, PivotManager_t179514031 * ___pivotMgr1, IBaseContext_t3140395319 * ____data2, BooleanU5BU5D_t3568034315* ___ret_paramOutside3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// live2d.BaseDataID live2d.IBaseData::getTargetBaseDataID()
extern "C"  BaseDataID_t3014180214 * IBaseData_getTargetBaseDataID_m3009341522 (IBaseData_t2466794364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// live2d.BaseDataID live2d.IBaseData::getBaseDataID()
extern "C"  BaseDataID_t3014180214 * IBaseData_getBaseDataID_m1097967057 (IBaseData_t2466794364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean live2d.IBaseData::needTransform()
extern "C"  bool IBaseData_needTransform_m4075844618 (IBaseData_t2466794364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
