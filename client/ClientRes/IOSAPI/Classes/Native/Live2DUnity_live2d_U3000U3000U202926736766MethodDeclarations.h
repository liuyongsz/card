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
struct U3000U3000U20_t2926736766;
// live2d.BReader
struct BReader_t585071643;
// live2d.DrawDataID[]
struct DrawDataIDU5BU5D_t3035997164;
// live2d.DrawDataID
struct DrawDataID_t1444079665;
// live2d.ModelContext
struct ModelContext_t1483254982;
// live2d.IDrawContext
struct IDrawContext_t2946513182;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// live2d.BaseDataID
struct BaseDataID_t3014180214;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Live2DUnity_live2d_BReader585071643.h"
#include "Live2DUnity_live2d_DrawDataID1444079665.h"
#include "Live2DUnity_live2d_ModelContext1483254982.h"
#include "Live2DUnity_live2d_IDrawContext2946513182.h"

// System.Void live2d.　　 ::.ctor()
extern "C"  void U3000U3000U20__ctor_m3535177164 (U3000U3000U20_t2926736766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.　　 ::readV2(live2d.BReader)
extern "C"  void U3000U3000U20_readV2_m1427115753 (U3000U3000U20_t2926736766 * __this, BReader_t585071643 * ___br0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// live2d.DrawDataID[] live2d.　　 :: (live2d.DrawDataID)
extern "C"  DrawDataIDU5BU5D_t3035997164* U3000U3000U20_U20_m1820184939 (Il2CppObject * __this /* static, unused */, DrawDataID_t1444079665 * ___U200, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.　　 ::setupInterpolate(live2d.ModelContext,live2d.IDrawContext)
extern "C"  void U3000U3000U20_setupInterpolate_m3748774360 (U3000U3000U20_t2926736766 * __this, ModelContext_t1483254982 * ___mdc0, IDrawContext_t2946513182 * ____cdata1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// live2d.DrawDataID live2d.　　 ::getDrawDataID()
extern "C"  DrawDataID_t1444079665 * U3000U3000U20_getDrawDataID_m2652764625 (U3000U3000U20_t2926736766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.　　 ::setDrawDataID(live2d.DrawDataID)
extern "C"  void U3000U3000U20_setDrawDataID_m3361992788 (U3000U3000U20_t2926736766 * __this, DrawDataID_t1444079665 * ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single live2d.　　 ::getOpacity(live2d.ModelContext,live2d.IDrawContext)
extern "C"  float U3000U3000U20_getOpacity_m1079883005 (U3000U3000U20_t2926736766 * __this, ModelContext_t1483254982 * ___mdc0, IDrawContext_t2946513182 * ___cdata1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 live2d.　　 ::getDrawOrder(live2d.ModelContext,live2d.IDrawContext)
extern "C"  int32_t U3000U3000U20_getDrawOrder_m2589023134 (U3000U3000U20_t2926736766 * __this, ModelContext_t1483254982 * ___mdc0, IDrawContext_t2946513182 * ___cdata1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// live2d.DrawDataID[] live2d.　　 ::　()
extern "C"  DrawDataIDU5BU5D_t3035997164* U3000U3000U20_U3000_m1978531978 (U3000U3000U20_t2926736766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.　　 ::　  (System.Int32[])
extern "C"  void U3000U3000U20_U3000U20U20_m2192155145 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3030399641* ___U200, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// live2d.BaseDataID live2d.　　 ::getTargetBaseDataID()
extern "C"  BaseDataID_t3014180214 * U3000U3000U20_getTargetBaseDataID_m1787984872 (U3000U3000U20_t2926736766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean live2d.　　 ::needTransform()
extern "C"  bool U3000U3000U20_needTransform_m1705509896 (U3000U3000U20_t2926736766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 live2d.　　 ::　　()
extern "C"  int32_t U3000U3000U20_U3000U3000_m2931578114 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 live2d.　　 ::　 ()
extern "C"  int32_t U3000U3000U20_U3000U20_m2931441954 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.　　 ::setupTransform(live2d.ModelContext)
extern "C"  void U3000U3000U20_setupTransform_m239325723 (U3000U3000U20_t2926736766 * __this, ModelContext_t1483254982 * ___mdc0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.　　 ::setupTransform(live2d.ModelContext,live2d.IDrawContext)
extern "C"  void U3000U3000U20_setupTransform_m33609875 (U3000U3000U20_t2926736766 * __this, ModelContext_t1483254982 * ___mdc0, IDrawContext_t2946513182 * ___cdata1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String live2d.　　 ::ToString()
extern "C"  String_t* U3000U3000U20_ToString_m3757145397 (U3000U3000U20_t2926736766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.　　 ::.cctor()
extern "C"  void U3000U3000U20__cctor_m1040290125 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
