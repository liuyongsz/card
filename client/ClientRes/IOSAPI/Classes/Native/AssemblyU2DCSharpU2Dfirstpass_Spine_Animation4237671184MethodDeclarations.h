﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Spine.Animation
struct Animation_t4237671184;
// System.String
struct String_t;
// Spine.ExposedList`1<Spine.Timeline>
struct ExposedList_1_t1191433273;
// Spine.Skeleton
struct Skeleton_t1387859465;
// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t876769054;
// System.Single[]
struct SingleU5BU5D_t577127397;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Skeleton1387859465.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_MixPose2832398299.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_MixDirection2228082809.h"

// System.Void Spine.Animation::.ctor(System.String,Spine.ExposedList`1<Spine.Timeline>,System.Single)
extern "C"  void Animation__ctor_m1815756365 (Animation_t4237671184 * __this, String_t* ___name0, ExposedList_1_t1191433273 * ___timelines1, float ___duration2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Spine.Animation::get_Name()
extern "C"  String_t* Animation_get_Name_m3778255775 (Animation_t4237671184 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.ExposedList`1<Spine.Timeline> Spine.Animation::get_Timelines()
extern "C"  ExposedList_1_t1191433273 * Animation_get_Timelines_m3906775006 (Animation_t4237671184 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Animation::set_Timelines(Spine.ExposedList`1<Spine.Timeline>)
extern "C"  void Animation_set_Timelines_m812453143 (Animation_t4237671184 * __this, ExposedList_1_t1191433273 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.Animation::get_Duration()
extern "C"  float Animation_get_Duration_m3869634057 (Animation_t4237671184 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Animation::set_Duration(System.Single)
extern "C"  void Animation_set_Duration_m633017324 (Animation_t4237671184 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Animation::Apply(Spine.Skeleton,System.Single,System.Single,System.Boolean,Spine.ExposedList`1<Spine.Event>,System.Single,Spine.MixPose,Spine.MixDirection)
extern "C"  void Animation_Apply_m1829706753 (Animation_t4237671184 * __this, Skeleton_t1387859465 * ___skeleton0, float ___lastTime1, float ___time2, bool ___loop3, ExposedList_1_t876769054 * ___events4, float ___alpha5, int32_t ___pose6, int32_t ___direction7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.Animation::BinarySearch(System.Single[],System.Single,System.Int32)
extern "C"  int32_t Animation_BinarySearch_m497729188 (Il2CppObject * __this /* static, unused */, SingleU5BU5D_t577127397* ___values0, float ___target1, int32_t ___step2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.Animation::BinarySearch(System.Single[],System.Single)
extern "C"  int32_t Animation_BinarySearch_m3609656585 (Il2CppObject * __this /* static, unused */, SingleU5BU5D_t577127397* ___values0, float ___target1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.Animation::LinearSearch(System.Single[],System.Single,System.Int32)
extern "C"  int32_t Animation_LinearSearch_m4261911172 (Il2CppObject * __this /* static, unused */, SingleU5BU5D_t577127397* ___values0, float ___target1, int32_t ___step2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
