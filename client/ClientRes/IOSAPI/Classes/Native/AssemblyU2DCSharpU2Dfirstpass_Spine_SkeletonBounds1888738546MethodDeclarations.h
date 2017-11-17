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

// Spine.SkeletonBounds
struct SkeletonBounds_t1888738546;
// Spine.ExposedList`1<Spine.BoundingBoxAttachment>
struct ExposedList_1_t955831680;
// Spine.ExposedList`1<Spine.Polygon>
struct ExposedList_1_t3916559802;
// Spine.Skeleton
struct Skeleton_t1387859465;
// Spine.Polygon
struct Polygon_t564690566;
// Spine.BoundingBoxAttachment
struct BoundingBoxAttachment_t1898929740;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Skeleton1387859465.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_SkeletonBounds1888738546.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_Polygon564690566.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Spine_BoundingBoxAtt1898929740.h"

// System.Void Spine.SkeletonBounds::.ctor()
extern "C"  void SkeletonBounds__ctor_m3184493318 (SkeletonBounds_t1888738546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.ExposedList`1<Spine.BoundingBoxAttachment> Spine.SkeletonBounds::get_BoundingBoxes()
extern "C"  ExposedList_1_t955831680 * SkeletonBounds_get_BoundingBoxes_m3523029618 (SkeletonBounds_t1888738546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonBounds::set_BoundingBoxes(Spine.ExposedList`1<Spine.BoundingBoxAttachment>)
extern "C"  void SkeletonBounds_set_BoundingBoxes_m4058896353 (SkeletonBounds_t1888738546 * __this, ExposedList_1_t955831680 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.ExposedList`1<Spine.Polygon> Spine.SkeletonBounds::get_Polygons()
extern "C"  ExposedList_1_t3916559802 * SkeletonBounds_get_Polygons_m1725457686 (SkeletonBounds_t1888738546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonBounds::set_Polygons(Spine.ExposedList`1<Spine.Polygon>)
extern "C"  void SkeletonBounds_set_Polygons_m8245157 (SkeletonBounds_t1888738546 * __this, ExposedList_1_t3916559802 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.SkeletonBounds::get_MinX()
extern "C"  float SkeletonBounds_get_MinX_m2970245143 (SkeletonBounds_t1888738546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonBounds::set_MinX(System.Single)
extern "C"  void SkeletonBounds_set_MinX_m3493971338 (SkeletonBounds_t1888738546 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.SkeletonBounds::get_MinY()
extern "C"  float SkeletonBounds_get_MinY_m221158812 (SkeletonBounds_t1888738546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonBounds::set_MinY(System.Single)
extern "C"  void SkeletonBounds_set_MinY_m2858703877 (SkeletonBounds_t1888738546 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.SkeletonBounds::get_MaxX()
extern "C"  float SkeletonBounds_get_MaxX_m3034143653 (SkeletonBounds_t1888738546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonBounds::set_MaxX(System.Single)
extern "C"  void SkeletonBounds_set_MaxX_m58180944 (SkeletonBounds_t1888738546 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.SkeletonBounds::get_MaxY()
extern "C"  float SkeletonBounds_get_MaxY_m285057322 (SkeletonBounds_t1888738546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonBounds::set_MaxY(System.Single)
extern "C"  void SkeletonBounds_set_MaxY_m3717880779 (SkeletonBounds_t1888738546 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.SkeletonBounds::get_Width()
extern "C"  float SkeletonBounds_get_Width_m2581964055 (SkeletonBounds_t1888738546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.SkeletonBounds::get_Height()
extern "C"  float SkeletonBounds_get_Height_m2377167336 (SkeletonBounds_t1888738546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonBounds::Update(Spine.Skeleton,System.Boolean)
extern "C"  void SkeletonBounds_Update_m2744796868 (SkeletonBounds_t1888738546 * __this, Skeleton_t1387859465 * ___skeleton0, bool ___updateAabb1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.SkeletonBounds::AabbCompute()
extern "C"  void SkeletonBounds_AabbCompute_m372364167 (SkeletonBounds_t1888738546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.SkeletonBounds::AabbContainsPoint(System.Single,System.Single)
extern "C"  bool SkeletonBounds_AabbContainsPoint_m2201498105 (SkeletonBounds_t1888738546 * __this, float ___x0, float ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.SkeletonBounds::AabbIntersectsSegment(System.Single,System.Single,System.Single,System.Single)
extern "C"  bool SkeletonBounds_AabbIntersectsSegment_m1475627563 (SkeletonBounds_t1888738546 * __this, float ___x10, float ___y11, float ___x22, float ___y23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.SkeletonBounds::AabbIntersectsSkeleton(Spine.SkeletonBounds)
extern "C"  bool SkeletonBounds_AabbIntersectsSkeleton_m3176611306 (SkeletonBounds_t1888738546 * __this, SkeletonBounds_t1888738546 * ___bounds0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.SkeletonBounds::ContainsPoint(Spine.Polygon,System.Single,System.Single)
extern "C"  bool SkeletonBounds_ContainsPoint_m3335505308 (SkeletonBounds_t1888738546 * __this, Polygon_t564690566 * ___polygon0, float ___x1, float ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.BoundingBoxAttachment Spine.SkeletonBounds::ContainsPoint(System.Single,System.Single)
extern "C"  BoundingBoxAttachment_t1898929740 * SkeletonBounds_ContainsPoint_m1295848635 (SkeletonBounds_t1888738546 * __this, float ___x0, float ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.BoundingBoxAttachment Spine.SkeletonBounds::IntersectsSegment(System.Single,System.Single,System.Single,System.Single)
extern "C"  BoundingBoxAttachment_t1898929740 * SkeletonBounds_IntersectsSegment_m1917552365 (SkeletonBounds_t1888738546 * __this, float ___x10, float ___y11, float ___x22, float ___y23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.SkeletonBounds::IntersectsSegment(Spine.Polygon,System.Single,System.Single,System.Single,System.Single)
extern "C"  bool SkeletonBounds_IntersectsSegment_m142831490 (SkeletonBounds_t1888738546 * __this, Polygon_t564690566 * ___polygon0, float ___x11, float ___y12, float ___x23, float ___y24, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Polygon Spine.SkeletonBounds::GetPolygon(Spine.BoundingBoxAttachment)
extern "C"  Polygon_t564690566 * SkeletonBounds_GetPolygon_m1758155901 (SkeletonBounds_t1888738546 * __this, BoundingBoxAttachment_t1898929740 * ___attachment0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
