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

// live2d.PivotManager
struct PivotManager_t179514031;
// live2d.BReader
struct BReader_t585071643;
// live2d.ModelContext
struct ModelContext_t1483254982;
// System.Boolean[]
struct BooleanU5BU5D_t3568034315;
// System.Int16[]
struct Int16U5BU5D_t3104283263;
// System.Single[]
struct SingleU5BU5D_t577127397;

#include "codegen/il2cpp-codegen.h"
#include "Live2DUnity_live2d_BReader585071643.h"
#include "Live2DUnity_live2d_ModelContext1483254982.h"

// System.Void live2d.PivotManager::.ctor()
extern "C"  void PivotManager__ctor_m2039248797 (PivotManager_t179514031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.PivotManager::readV2(live2d.BReader)
extern "C"  void PivotManager_readV2_m1803628602 (PivotManager_t179514031 * __this, BReader_t585071643 * ___br0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean live2d.PivotManager::　　(live2d.ModelContext)
extern "C"  bool PivotManager_U3000U3000_m2358556787 (PivotManager_t179514031 * __this, ModelContext_t1483254982 * ___U200, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 live2d.PivotManager::　 (live2d.ModelContext,System.Boolean[])
extern "C"  int32_t PivotManager_U3000U20_m1395983564 (PivotManager_t179514031 * __this, ModelContext_t1483254982 * ___U200, BooleanU5BU5D_t3568034315* ___U30001, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void live2d.PivotManager::　(System.Int16[],System.Single[],System.Int32)
extern "C"  void PivotManager_U3000_m1241169618 (PivotManager_t179514031 * __this, Int16U5BU5D_t3104283263* ___U200, SingleU5BU5D_t577127397* ___U30001, int32_t ___U3000U202, const MethodInfo* method) IL2CPP_METHOD_ATTR;
