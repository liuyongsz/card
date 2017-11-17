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

// live2d.　
struct U3000_t2149621150;
// live2d.BReader
struct BReader_t585071643;
// live2d.IBaseContext
struct IBaseContext_t3140395319;
// live2d.ModelContext
struct ModelContext_t1483254982;
// System.Single[]
struct SingleU5BU5D_t577127397;
// live2d.IBaseData
struct IBaseData_t2466794364;

#include "codegen/il2cpp-codegen.h"
#include "Live2DUnity_live2d_BReader585071643.h"
#include "Live2DUnity_live2d_ModelContext1483254982.h"
#include "Live2DUnity_live2d_IBaseContext3140395319.h"
#include "Live2DUnity_live2d_IBaseData2466794364.h"

// System.Void live2d.　::.ctor()
extern "C"  void U3000__ctor_m1603903820 (U3000_t2149621150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 live2d.　::getType()
extern "C"  int32_t U3000_getType_m396505768 (U3000_t2149621150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.　::readV2(live2d.BReader)
extern "C"  void U3000_readV2_m2017537001 (U3000_t2149621150 * __this, BReader_t585071643 * ___br0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// live2d.IBaseContext live2d.　::init(live2d.ModelContext)
extern "C"  IBaseContext_t3140395319 * U3000_init_m3036232220 (U3000_t2149621150 * __this, ModelContext_t1483254982 * ___mdc0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.　::setupInterpolate(live2d.ModelContext,live2d.IBaseContext)
extern "C"  void U3000_setupInterpolate_m2769955925 (U3000_t2149621150 * __this, ModelContext_t1483254982 * ___mdc0, IBaseContext_t3140395319 * ____data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.　::setupTransform(live2d.ModelContext,live2d.IBaseContext)
extern "C"  void U3000_setupTransform_m483298894 (U3000_t2149621150 * __this, ModelContext_t1483254982 * ___mdc0, IBaseContext_t3140395319 * ____data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.　::transformPoints(live2d.ModelContext,live2d.IBaseContext,System.Single[],System.Single[],System.Int32,System.Int32,System.Int32)
extern "C"  void U3000_transformPoints_m1066080979 (U3000_t2149621150 * __this, ModelContext_t1483254982 * ___mdc0, IBaseContext_t3140395319 * ____data1, SingleU5BU5D_t577127397* ___src2, SingleU5BU5D_t577127397* ___dst3, int32_t ___numPoint4, int32_t ___pt_offset5, int32_t ___pt_step6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.　:: (live2d.ModelContext,live2d.IBaseData,live2d.IBaseContext,System.Single[],System.Single[],System.Single[])
extern "C"  void U3000_U20_m2792462116 (U3000_t2149621150 * __this, ModelContext_t1483254982 * ___U200, IBaseData_t2466794364 * ___U30001, IBaseContext_t3140395319 * ___U3000U202, SingleU5BU5D_t577127397* ___U3000U30003, SingleU5BU5D_t577127397* ___U3000U20U204, SingleU5BU5D_t577127397* ___U3000U20U30005, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.　::.cctor()
extern "C"  void U3000__cctor_m701559629 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
