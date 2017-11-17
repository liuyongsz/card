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
struct U3000U3000_t236078590;
// live2d.BReader
struct BReader_t585071643;
// live2d.IBaseContext
struct IBaseContext_t3140395319;
// live2d.ModelContext
struct ModelContext_t1483254982;
// System.Single[]
struct SingleU5BU5D_t577127397;

#include "codegen/il2cpp-codegen.h"
#include "Live2DUnity_live2d_BReader585071643.h"
#include "Live2DUnity_live2d_ModelContext1483254982.h"
#include "Live2DUnity_live2d_IBaseContext3140395319.h"

// System.Void live2d.　　::.ctor()
extern "C"  void U3000U3000__ctor_m106177174 (U3000U3000_t236078590 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.　　::readV2(live2d.BReader)
extern "C"  void U3000U3000_readV2_m4039565013 (U3000U3000_t236078590 * __this, BReader_t585071643 * ___br0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// live2d.IBaseContext live2d.　　::init(live2d.ModelContext)
extern "C"  IBaseContext_t3140395319 * U3000U3000_init_m2654388978 (U3000U3000_t236078590 * __this, ModelContext_t1483254982 * ___mdc0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.　　::setupInterpolate(live2d.ModelContext,live2d.IBaseContext)
extern "C"  void U3000U3000_setupInterpolate_m4264943553 (U3000U3000_t236078590 * __this, ModelContext_t1483254982 * ___mdc0, IBaseContext_t3140395319 * ____data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.　　::setupTransform(live2d.ModelContext,live2d.IBaseContext)
extern "C"  void U3000U3000_setupTransform_m49667396 (U3000U3000_t236078590 * __this, ModelContext_t1483254982 * ___mdc0, IBaseContext_t3140395319 * ____data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.　　::transformPoints(live2d.ModelContext,live2d.IBaseContext,System.Single[],System.Single[],System.Int32,System.Int32,System.Int32)
extern "C"  void U3000U3000_transformPoints_m2861612131 (U3000U3000_t236078590 * __this, ModelContext_t1483254982 * ___mdc0, IBaseContext_t3140395319 * ____data1, SingleU5BU5D_t577127397* ___src2, SingleU5BU5D_t577127397* ___dst3, int32_t ___numPoint4, int32_t ___pt_offset5, int32_t ___pt_step6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.　　::　　(System.Single[],System.Single[],System.Int32,System.Int32,System.Int32,System.Single[],System.Int32,System.Int32)
extern "C"  void U3000U3000_U3000U3000_m4109896150 (Il2CppObject * __this /* static, unused */, SingleU5BU5D_t577127397* ___U200, SingleU5BU5D_t577127397* ___U30001, int32_t ___U3000U202, int32_t ___U3000U30003, int32_t ___U3000U20U204, SingleU5BU5D_t577127397* ___U3000U20U30005, int32_t ___U3000U3000U206, int32_t ___U3000U3000U30007, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 live2d.　　:: ()
extern "C"  int32_t U3000U3000_U20_m2463173346 (U3000U3000_t236078590 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 live2d.　　::getType()
extern "C"  int32_t U3000U3000_getType_m2566528178 (U3000U3000_t236078590 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.　　::.cctor()
extern "C"  void U3000U3000__cctor_m3191342161 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
