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

// Spine.IkConstraintTimeline
struct IkConstraintTimeline_t309931034;
// System.Single[]
struct SingleU5BU5D_t577127397;
// Spine.Skeleton
struct Skeleton_t1387859465;
// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t876769054;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Skeleton1387859465.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_MixPose2832398299.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_MixDirection2228082809.h"

// System.Void Spine.IkConstraintTimeline::.ctor(System.Int32)
extern "C"  void IkConstraintTimeline__ctor_m2549034347 (IkConstraintTimeline_t309931034 * __this, int32_t ___frameCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.IkConstraintTimeline::get_IkConstraintIndex()
extern "C"  int32_t IkConstraintTimeline_get_IkConstraintIndex_m3870330212 (IkConstraintTimeline_t309931034 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.IkConstraintTimeline::set_IkConstraintIndex(System.Int32)
extern "C"  void IkConstraintTimeline_set_IkConstraintIndex_m865507767 (IkConstraintTimeline_t309931034 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] Spine.IkConstraintTimeline::get_Frames()
extern "C"  SingleU5BU5D_t577127397* IkConstraintTimeline_get_Frames_m1592322753 (IkConstraintTimeline_t309931034 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.IkConstraintTimeline::set_Frames(System.Single[])
extern "C"  void IkConstraintTimeline_set_Frames_m2714468130 (IkConstraintTimeline_t309931034 * __this, SingleU5BU5D_t577127397* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.IkConstraintTimeline::get_PropertyId()
extern "C"  int32_t IkConstraintTimeline_get_PropertyId_m337364875 (IkConstraintTimeline_t309931034 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.IkConstraintTimeline::SetFrame(System.Int32,System.Single,System.Single,System.Int32)
extern "C"  void IkConstraintTimeline_SetFrame_m2403545509 (IkConstraintTimeline_t309931034 * __this, int32_t ___frameIndex0, float ___time1, float ___mix2, int32_t ___bendDirection3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.IkConstraintTimeline::Apply(Spine.Skeleton,System.Single,System.Single,Spine.ExposedList`1<Spine.Event>,System.Single,Spine.MixPose,Spine.MixDirection)
extern "C"  void IkConstraintTimeline_Apply_m3017969288 (IkConstraintTimeline_t309931034 * __this, Skeleton_t1387859465 * ___skeleton0, float ___lastTime1, float ___time2, ExposedList_1_t876769054 * ___firedEvents3, float ___alpha4, int32_t ___pose5, int32_t ___direction6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
