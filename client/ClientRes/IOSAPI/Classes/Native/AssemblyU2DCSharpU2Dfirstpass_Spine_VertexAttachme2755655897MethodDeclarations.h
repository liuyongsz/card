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

// Spine.VertexAttachment
struct VertexAttachment_t2755655897;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Single[]
struct SingleU5BU5D_t577127397;
// Spine.Slot
struct Slot_t306639170;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Slot306639170.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_VertexAttachme2755655897.h"

// System.Void Spine.VertexAttachment::.ctor(System.String)
extern "C"  void VertexAttachment__ctor_m2243830045 (VertexAttachment_t2755655897 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.VertexAttachment::.cctor()
extern "C"  void VertexAttachment__cctor_m4214387468 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.VertexAttachment::get_Id()
extern "C"  int32_t VertexAttachment_get_Id_m2876655281 (VertexAttachment_t2755655897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Spine.VertexAttachment::get_Bones()
extern "C"  Int32U5BU5D_t3030399641* VertexAttachment_get_Bones_m1956430511 (VertexAttachment_t2755655897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.VertexAttachment::set_Bones(System.Int32[])
extern "C"  void VertexAttachment_set_Bones_m652440536 (VertexAttachment_t2755655897 * __this, Int32U5BU5D_t3030399641* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] Spine.VertexAttachment::get_Vertices()
extern "C"  SingleU5BU5D_t577127397* VertexAttachment_get_Vertices_m4106928359 (VertexAttachment_t2755655897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.VertexAttachment::set_Vertices(System.Single[])
extern "C"  void VertexAttachment_set_Vertices_m3349513148 (VertexAttachment_t2755655897 * __this, SingleU5BU5D_t577127397* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.VertexAttachment::get_WorldVerticesLength()
extern "C"  int32_t VertexAttachment_get_WorldVerticesLength_m2014494659 (VertexAttachment_t2755655897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.VertexAttachment::set_WorldVerticesLength(System.Int32)
extern "C"  void VertexAttachment_set_WorldVerticesLength_m3464538792 (VertexAttachment_t2755655897 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.VertexAttachment::ComputeWorldVertices(Spine.Slot,System.Single[])
extern "C"  void VertexAttachment_ComputeWorldVertices_m1139249381 (VertexAttachment_t2755655897 * __this, Slot_t306639170 * ___slot0, SingleU5BU5D_t577127397* ___worldVertices1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.VertexAttachment::ComputeWorldVertices(Spine.Slot,System.Int32,System.Int32,System.Single[],System.Int32,System.Int32)
extern "C"  void VertexAttachment_ComputeWorldVertices_m1319042693 (VertexAttachment_t2755655897 * __this, Slot_t306639170 * ___slot0, int32_t ___start1, int32_t ___count2, SingleU5BU5D_t577127397* ___worldVertices3, int32_t ___offset4, int32_t ___stride5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.VertexAttachment::ApplyDeform(Spine.VertexAttachment)
extern "C"  bool VertexAttachment_ApplyDeform_m2673150046 (VertexAttachment_t2755655897 * __this, VertexAttachment_t2755655897 * ___sourceAttachment0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
