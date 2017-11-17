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

// Spine.Triangulator
struct Triangulator_t2783591524;
// Spine.ExposedList`1<System.Int32>
struct ExposedList_1_t1128779388;
// Spine.ExposedList`1<System.Single>
struct ExposedList_1_t1133411872;
// Spine.ExposedList`1<Spine.ExposedList`1<System.Single>>
struct ExposedList_1_t190313812;
// System.Single[]
struct SingleU5BU5D_t577127397;
// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "codegen/il2cpp-codegen.h"

// System.Void Spine.Triangulator::.ctor()
extern "C"  void Triangulator__ctor_m4016735874 (Triangulator_t2783591524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.ExposedList`1<System.Int32> Spine.Triangulator::Triangulate(Spine.ExposedList`1<System.Single>)
extern "C"  ExposedList_1_t1128779388 * Triangulator_Triangulate_m479420853 (Triangulator_t2783591524 * __this, ExposedList_1_t1133411872 * ___verticesArray0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.ExposedList`1<Spine.ExposedList`1<System.Single>> Spine.Triangulator::Decompose(Spine.ExposedList`1<System.Single>,Spine.ExposedList`1<System.Int32>)
extern "C"  ExposedList_1_t190313812 * Triangulator_Decompose_m3658602227 (Triangulator_t2783591524 * __this, ExposedList_1_t1133411872 * ___verticesArray0, ExposedList_1_t1128779388 * ___triangles1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Triangulator::IsConcave(System.Int32,System.Int32,System.Single[],System.Int32[])
extern "C"  bool Triangulator_IsConcave_m3340710265 (Il2CppObject * __this /* static, unused */, int32_t ___index0, int32_t ___vertexCount1, SingleU5BU5D_t577127397* ___vertices2, Int32U5BU5D_t3030399641* ___indices3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Triangulator::PositiveArea(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  bool Triangulator_PositiveArea_m1886708238 (Il2CppObject * __this /* static, unused */, float ___p1x0, float ___p1y1, float ___p2x2, float ___p2y3, float ___p3x4, float ___p3y5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.Triangulator::Winding(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  int32_t Triangulator_Winding_m3838944464 (Il2CppObject * __this /* static, unused */, float ___p1x0, float ___p1y1, float ___p2x2, float ___p2y3, float ___p3x4, float ___p3y5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
