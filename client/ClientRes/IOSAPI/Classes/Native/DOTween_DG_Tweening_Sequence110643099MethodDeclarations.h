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

// DG.Tweening.Sequence
struct Sequence_t110643099;
// DG.Tweening.Core.ABSSequentiable
struct ABSSequentiable_t2284140720;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateMode2539919096.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice2468589887.h"
#include "DOTween_DG_Tweening_Sequence110643099.h"
#include "DOTween_DG_Tweening_Core_ABSSequentiable2284140720.h"

// System.Void DG.Tweening.Sequence::Reset()
extern "C"  void Sequence_Reset_m1194713657 (Sequence_t110643099 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Sequence::Startup()
extern "C"  bool Sequence_Startup_m2282350177 (Sequence_t110643099 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Sequence::ApplyTween(System.Single,System.Int32,System.Int32,System.Boolean,DG.Tweening.Core.Enums.UpdateMode,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  bool Sequence_ApplyTween_m4207260438 (Sequence_t110643099 * __this, float ___prevPosition0, int32_t ___prevCompletedLoops1, int32_t ___newCompletedSteps2, bool ___useInversePosition3, int32_t ___updateMode4, int32_t ___updateNotice5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Sequence::DoStartup(DG.Tweening.Sequence)
extern "C"  bool Sequence_DoStartup_m1514469211 (Il2CppObject * __this /* static, unused */, Sequence_t110643099 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Sequence::DoApplyTween(DG.Tweening.Sequence,System.Single,System.Int32,System.Int32,System.Boolean,DG.Tweening.Core.Enums.UpdateMode)
extern "C"  bool Sequence_DoApplyTween_m2567737122 (Il2CppObject * __this /* static, unused */, Sequence_t110643099 * ___s0, float ___prevPosition1, int32_t ___prevCompletedLoops2, int32_t ___newCompletedSteps3, bool ___useInversePosition4, int32_t ___updateMode5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Sequence::ApplyInternalCycle(DG.Tweening.Sequence,System.Single,System.Single,DG.Tweening.Core.Enums.UpdateMode,System.Boolean,System.Boolean,System.Boolean)
extern "C"  bool Sequence_ApplyInternalCycle_m4170225852 (Il2CppObject * __this /* static, unused */, Sequence_t110643099 * ___s0, float ___fromPos1, float ___toPos2, int32_t ___updateMode3, bool ___useInverse4, bool ___prevPosIsInverse5, bool ___multiCycleStep6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DG.Tweening.Sequence::SortSequencedObjs(DG.Tweening.Core.ABSSequentiable,DG.Tweening.Core.ABSSequentiable)
extern "C"  int32_t Sequence_SortSequencedObjs_m3886496447 (Il2CppObject * __this /* static, unused */, ABSSequentiable_t2284140720 * ___a0, ABSSequentiable_t2284140720 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
