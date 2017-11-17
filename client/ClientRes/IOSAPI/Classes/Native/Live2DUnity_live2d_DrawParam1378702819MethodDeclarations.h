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

// live2d.DrawParam
struct DrawParam_t1378702819;
// live2d.DrawDataID
struct DrawDataID_t1444079665;
// System.Single[]
struct SingleU5BU5D_t577127397;
// live2d.ColorConverter
struct ColorConverter_t757049405;

#include "codegen/il2cpp-codegen.h"
#include "Live2DUnity_live2d_DrawDataID1444079665.h"

// System.Void live2d.DrawParam::.ctor()
extern "C"  void DrawParam__ctor_m1066968933 (DrawParam_t1378702819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.DrawParam::setupDraw()
extern "C"  void DrawParam_setupDraw_m1756693458 (DrawParam_t1378702819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.DrawParam::setCurrentDDID(live2d.DrawDataID)
extern "C"  void DrawParam_setCurrentDDID_m3810630426 (DrawParam_t1378702819 * __this, DrawDataID_t1444079665 * ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.DrawParam::setLockCulling(System.Boolean)
extern "C"  void DrawParam_setLockCulling_m2728870401 (DrawParam_t1378702819 * __this, bool ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.DrawParam::setCulling(System.Boolean)
extern "C"  void DrawParam_setCulling_m2621223988 (DrawParam_t1378702819 * __this, bool ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.DrawParam::setMatrix(System.Single[])
extern "C"  void DrawParam_setMatrix_m1354547431 (DrawParam_t1378702819 * __this, SingleU5BU5D_t577127397* ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] live2d.DrawParam::getMatrix()
extern "C"  SingleU5BU5D_t577127397* DrawParam_getMatrix_m257660814 (DrawParam_t1378702819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.DrawParam::createTextureInfo(System.Int32)
extern "C"  void DrawParam_createTextureInfo_m2654852953 (DrawParam_t1378702819 * __this, int32_t ___no0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.DrawParam::　　 (System.Int32)
extern "C"  void DrawParam_U3000U3000U20_m2207811928 (DrawParam_t1378702819 * __this, int32_t ___U200, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// live2d.ColorConverter live2d.DrawParam::　(System.Int32)
extern "C"  ColorConverter_t757049405 * DrawParam_U3000_m694904532 (DrawParam_t1378702819 * __this, int32_t ___U200, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.DrawParam::.cctor()
extern "C"  void DrawParam__cctor_m3621576472 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
