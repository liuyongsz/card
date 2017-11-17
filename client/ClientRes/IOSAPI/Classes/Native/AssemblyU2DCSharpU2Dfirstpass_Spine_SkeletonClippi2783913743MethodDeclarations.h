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

// Spine.SkeletonClipping
struct SkeletonClipping_t2783913743;
// Spine.ExposedList`1<System.Single>
struct ExposedList_1_t1133411872;
// Spine.ExposedList`1<System.Int32>
struct ExposedList_1_t1128779388;
// Spine.Slot
struct Slot_t306639170;
// Spine.ClippingAttachment
struct ClippingAttachment_t2377737933;
// System.Single[]
struct SingleU5BU5D_t577127397;
// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Slot306639170.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_ClippingAttach2377737933.h"

// System.Void Spine.SkeletonClipping::.ctor()
extern "C"  void SkeletonClipping__ctor_m3234329421 (SkeletonClipping_t2783913743 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.ExposedList`1<System.Single> Spine.SkeletonClipping::get_ClippedVertices()
extern "C"  ExposedList_1_t1133411872 * SkeletonClipping_get_ClippedVertices_m2723114218 (SkeletonClipping_t2783913743 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.ExposedList`1<System.Int32> Spine.SkeletonClipping::get_ClippedTriangles()
extern "C"  ExposedList_1_t1128779388 * SkeletonClipping_get_ClippedTriangles_m2604834284 (SkeletonClipping_t2783913743 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.ExposedList`1<System.Single> Spine.SkeletonClipping::get_ClippedUVs()
extern "C"  ExposedList_1_t1133411872 * SkeletonClipping_get_ClippedUVs_m1792270179 (SkeletonClipping_t2783913743 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.SkeletonClipping::IsClipping()
extern "C"  bool SkeletonClipping_IsClipping_m753279429 (SkeletonClipping_t2783913743 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.SkeletonClipping::ClipStart(Spine.Slot,Spine.ClippingAttachment)
extern "C"  int32_t SkeletonClipping_ClipStart_m1981769456 (SkeletonClipping_t2783913743 * __this, Slot_t306639170 * ___slot0, ClippingAttachment_t2377737933 * ___clip1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonClipping::ClipEnd(Spine.Slot)
extern "C"  void SkeletonClipping_ClipEnd_m668498687 (SkeletonClipping_t2783913743 * __this, Slot_t306639170 * ___slot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonClipping::ClipEnd()
extern "C"  void SkeletonClipping_ClipEnd_m142339748 (SkeletonClipping_t2783913743 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonClipping::ClipTriangles(System.Single[],System.Int32,System.Int32[],System.Int32,System.Single[])
extern "C"  void SkeletonClipping_ClipTriangles_m3555374229 (SkeletonClipping_t2783913743 * __this, SingleU5BU5D_t577127397* ___vertices0, int32_t ___verticesLength1, Int32U5BU5D_t3030399641* ___triangles2, int32_t ___trianglesLength3, SingleU5BU5D_t577127397* ___uvs4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.SkeletonClipping::Clip(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,Spine.ExposedList`1<System.Single>,Spine.ExposedList`1<System.Single>)
extern "C"  bool SkeletonClipping_Clip_m2654812259 (SkeletonClipping_t2783913743 * __this, float ___x10, float ___y11, float ___x22, float ___y23, float ___x34, float ___y35, ExposedList_1_t1133411872 * ___clippingArea6, ExposedList_1_t1133411872 * ___output7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonClipping::MakeClockwise(Spine.ExposedList`1<System.Single>)
extern "C"  void SkeletonClipping_MakeClockwise_m1702241490 (Il2CppObject * __this /* static, unused */, ExposedList_1_t1133411872 * ___polygon0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
