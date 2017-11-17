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

// live2d.ModelContext
struct ModelContext_t1483254982;
// live2d.ALive2DModel
struct ALive2DModel_t4064879310;
// live2d.DrawDataID
struct DrawDataID_t1444079665;
// live2d.IDrawData
struct IDrawData_t1166296277;
// live2d.DrawParam
struct DrawParam_t1378702819;
// live2d.ParamID
struct ParamID_t2293315874;
// live2d.BaseDataID
struct BaseDataID_t3014180214;
// System.Single[]
struct SingleU5BU5D_t577127397;
// System.Int16[]
struct Int16U5BU5D_t3104283263;
// live2d.IBaseData
struct IBaseData_t2466794364;
// live2d.IBaseContext
struct IBaseContext_t3140395319;
// live2d.IDrawContext
struct IDrawContext_t2946513182;

#include "codegen/il2cpp-codegen.h"
#include "Live2DUnity_live2d_ALive2DModel4064879310.h"
#include "Live2DUnity_live2d_DrawDataID1444079665.h"
#include "Live2DUnity_live2d_DrawParam1378702819.h"
#include "Live2DUnity_live2d_ParamID2293315874.h"
#include "Live2DUnity_live2d_BaseDataID3014180214.h"

// System.Void live2d.ModelContext::.ctor(live2d.ALive2DModel)
extern "C"  void ModelContext__ctor_m3235198006 (ModelContext_t1483254982 * __this, ALive2DModel_t4064879310 * ___U200, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 live2d.ModelContext::getDrawDataIndex(live2d.DrawDataID)
extern "C"  int32_t ModelContext_getDrawDataIndex_m713366635 (ModelContext_t1483254982 * __this, DrawDataID_t1444079665 * ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// live2d.IDrawData live2d.ModelContext::getDrawData(System.Int32)
extern "C"  Il2CppObject * ModelContext_getDrawData_m1171367789 (ModelContext_t1483254982 * __this, int32_t ___drawIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.ModelContext::　  ()
extern "C"  void ModelContext_U3000U20U20_m4031389770 (ModelContext_t1483254982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.ModelContext::init()
extern "C"  void ModelContext_init_m2642005222 (ModelContext_t1483254982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean live2d.ModelContext::　　 ()
extern "C"  bool ModelContext_U3000U3000U20_m793929818 (ModelContext_t1483254982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.ModelContext::preDraw(live2d.DrawParam)
extern "C"  void ModelContext_preDraw_m49918398 (ModelContext_t1483254982 * __this, DrawParam_t1378702819 * ___dp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.ModelContext::draw(live2d.DrawParam)
extern "C"  void ModelContext_draw_m3663820011 (ModelContext_t1483254982 * __this, DrawParam_t1378702819 * ___dp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 live2d.ModelContext::getParamIndex(live2d.ParamID)
extern "C"  int32_t ModelContext_getParamIndex_m3402992251 (ModelContext_t1483254982 * __this, ParamID_t2293315874 * ___paramID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 live2d.ModelContext::getBaseDataIndex(live2d.BaseDataID)
extern "C"  int32_t ModelContext_getBaseDataIndex_m3334518967 (ModelContext_t1483254982 * __this, BaseDataID_t3014180214 * ___baseID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] live2d.ModelContext:: (System.Single[],System.Int32)
extern "C"  SingleU5BU5D_t577127397* ModelContext_U20_m1406240132 (ModelContext_t1483254982 * __this, SingleU5BU5D_t577127397* ___U200, int32_t ___U30001, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 live2d.ModelContext::addFloatParam(live2d.ParamID,System.Single,System.Single,System.Single)
extern "C"  int32_t ModelContext_addFloatParam_m1025723279 (ModelContext_t1483254982 * __this, ParamID_t2293315874 * ___id0, float ___value1, float ___min2, float ___max3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.ModelContext::setParamFloat(System.Int32,System.Single)
extern "C"  void ModelContext_setParamFloat_m1226616903 (ModelContext_t1483254982 * __this, int32_t ___paramIndex0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 live2d.ModelContext::getInitVersion()
extern "C"  int32_t ModelContext_getInitVersion_m2589823226 (ModelContext_t1483254982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean live2d.ModelContext::requireSetup()
extern "C"  bool ModelContext_requireSetup_m3083749996 (ModelContext_t1483254982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean live2d.ModelContext::　　(System.Int32)
extern "C"  bool ModelContext_U3000U3000_m1297581879 (ModelContext_t1483254982 * __this, int32_t ___U200, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16[] live2d.ModelContext::　()
extern "C"  Int16U5BU5D_t3104283263* ModelContext_U3000_m1155083976 (ModelContext_t1483254982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] live2d.ModelContext::　 ()
extern "C"  SingleU5BU5D_t577127397* ModelContext_U3000U20_m2120163914 (ModelContext_t1483254982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// live2d.IBaseData live2d.ModelContext::getBaseData(System.Int32)
extern "C"  IBaseData_t2466794364 * ModelContext_getBaseData_m2211263001 (ModelContext_t1483254982 * __this, int32_t ___baseDataIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single live2d.ModelContext::getParamFloat(System.Int32)
extern "C"  float ModelContext_getParamFloat_m522172896 (ModelContext_t1483254982 * __this, int32_t ___paramIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// live2d.IBaseContext live2d.ModelContext::getBaseContext(System.Int32)
extern "C"  IBaseContext_t3140395319 * ModelContext_getBaseContext_m3821181869 (ModelContext_t1483254982 * __this, int32_t ___baseDataIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// live2d.IDrawContext live2d.ModelContext::getDrawContext(System.Int32)
extern "C"  IDrawContext_t2946513182 * ModelContext_getDrawContext_m3654728749 (ModelContext_t1483254982 * __this, int32_t ___drawDataIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean live2d.ModelContext::isDrawMethodVersion_2_0()
extern "C"  bool ModelContext_isDrawMethodVersion_2_0_m3858844023 (ModelContext_t1483254982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.ModelContext::.cctor()
extern "C"  void ModelContext__cctor_m1659450717 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
