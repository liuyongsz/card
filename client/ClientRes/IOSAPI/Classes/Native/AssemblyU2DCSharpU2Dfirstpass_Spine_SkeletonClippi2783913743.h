#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.Triangulator
struct Triangulator_t2783591524;
// Spine.ExposedList`1<System.Single>
struct ExposedList_1_t1133411872;
// Spine.ExposedList`1<System.Int32>
struct ExposedList_1_t1128779388;
// Spine.ClippingAttachment
struct ClippingAttachment_t2377737933;
// Spine.ExposedList`1<Spine.ExposedList`1<System.Single>>
struct ExposedList_1_t190313812;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.SkeletonClipping
struct  SkeletonClipping_t2783913743  : public Il2CppObject
{
public:
	// Spine.Triangulator Spine.SkeletonClipping::triangulator
	Triangulator_t2783591524 * ___triangulator_0;
	// Spine.ExposedList`1<System.Single> Spine.SkeletonClipping::clippingPolygon
	ExposedList_1_t1133411872 * ___clippingPolygon_1;
	// Spine.ExposedList`1<System.Single> Spine.SkeletonClipping::clipOutput
	ExposedList_1_t1133411872 * ___clipOutput_2;
	// Spine.ExposedList`1<System.Single> Spine.SkeletonClipping::clippedVertices
	ExposedList_1_t1133411872 * ___clippedVertices_3;
	// Spine.ExposedList`1<System.Int32> Spine.SkeletonClipping::clippedTriangles
	ExposedList_1_t1128779388 * ___clippedTriangles_4;
	// Spine.ExposedList`1<System.Single> Spine.SkeletonClipping::clippedUVs
	ExposedList_1_t1133411872 * ___clippedUVs_5;
	// Spine.ExposedList`1<System.Single> Spine.SkeletonClipping::scratch
	ExposedList_1_t1133411872 * ___scratch_6;
	// Spine.ClippingAttachment Spine.SkeletonClipping::clipAttachment
	ClippingAttachment_t2377737933 * ___clipAttachment_7;
	// Spine.ExposedList`1<Spine.ExposedList`1<System.Single>> Spine.SkeletonClipping::clippingPolygons
	ExposedList_1_t190313812 * ___clippingPolygons_8;

public:
	inline static int32_t get_offset_of_triangulator_0() { return static_cast<int32_t>(offsetof(SkeletonClipping_t2783913743, ___triangulator_0)); }
	inline Triangulator_t2783591524 * get_triangulator_0() const { return ___triangulator_0; }
	inline Triangulator_t2783591524 ** get_address_of_triangulator_0() { return &___triangulator_0; }
	inline void set_triangulator_0(Triangulator_t2783591524 * value)
	{
		___triangulator_0 = value;
		Il2CppCodeGenWriteBarrier(&___triangulator_0, value);
	}

	inline static int32_t get_offset_of_clippingPolygon_1() { return static_cast<int32_t>(offsetof(SkeletonClipping_t2783913743, ___clippingPolygon_1)); }
	inline ExposedList_1_t1133411872 * get_clippingPolygon_1() const { return ___clippingPolygon_1; }
	inline ExposedList_1_t1133411872 ** get_address_of_clippingPolygon_1() { return &___clippingPolygon_1; }
	inline void set_clippingPolygon_1(ExposedList_1_t1133411872 * value)
	{
		___clippingPolygon_1 = value;
		Il2CppCodeGenWriteBarrier(&___clippingPolygon_1, value);
	}

	inline static int32_t get_offset_of_clipOutput_2() { return static_cast<int32_t>(offsetof(SkeletonClipping_t2783913743, ___clipOutput_2)); }
	inline ExposedList_1_t1133411872 * get_clipOutput_2() const { return ___clipOutput_2; }
	inline ExposedList_1_t1133411872 ** get_address_of_clipOutput_2() { return &___clipOutput_2; }
	inline void set_clipOutput_2(ExposedList_1_t1133411872 * value)
	{
		___clipOutput_2 = value;
		Il2CppCodeGenWriteBarrier(&___clipOutput_2, value);
	}

	inline static int32_t get_offset_of_clippedVertices_3() { return static_cast<int32_t>(offsetof(SkeletonClipping_t2783913743, ___clippedVertices_3)); }
	inline ExposedList_1_t1133411872 * get_clippedVertices_3() const { return ___clippedVertices_3; }
	inline ExposedList_1_t1133411872 ** get_address_of_clippedVertices_3() { return &___clippedVertices_3; }
	inline void set_clippedVertices_3(ExposedList_1_t1133411872 * value)
	{
		___clippedVertices_3 = value;
		Il2CppCodeGenWriteBarrier(&___clippedVertices_3, value);
	}

	inline static int32_t get_offset_of_clippedTriangles_4() { return static_cast<int32_t>(offsetof(SkeletonClipping_t2783913743, ___clippedTriangles_4)); }
	inline ExposedList_1_t1128779388 * get_clippedTriangles_4() const { return ___clippedTriangles_4; }
	inline ExposedList_1_t1128779388 ** get_address_of_clippedTriangles_4() { return &___clippedTriangles_4; }
	inline void set_clippedTriangles_4(ExposedList_1_t1128779388 * value)
	{
		___clippedTriangles_4 = value;
		Il2CppCodeGenWriteBarrier(&___clippedTriangles_4, value);
	}

	inline static int32_t get_offset_of_clippedUVs_5() { return static_cast<int32_t>(offsetof(SkeletonClipping_t2783913743, ___clippedUVs_5)); }
	inline ExposedList_1_t1133411872 * get_clippedUVs_5() const { return ___clippedUVs_5; }
	inline ExposedList_1_t1133411872 ** get_address_of_clippedUVs_5() { return &___clippedUVs_5; }
	inline void set_clippedUVs_5(ExposedList_1_t1133411872 * value)
	{
		___clippedUVs_5 = value;
		Il2CppCodeGenWriteBarrier(&___clippedUVs_5, value);
	}

	inline static int32_t get_offset_of_scratch_6() { return static_cast<int32_t>(offsetof(SkeletonClipping_t2783913743, ___scratch_6)); }
	inline ExposedList_1_t1133411872 * get_scratch_6() const { return ___scratch_6; }
	inline ExposedList_1_t1133411872 ** get_address_of_scratch_6() { return &___scratch_6; }
	inline void set_scratch_6(ExposedList_1_t1133411872 * value)
	{
		___scratch_6 = value;
		Il2CppCodeGenWriteBarrier(&___scratch_6, value);
	}

	inline static int32_t get_offset_of_clipAttachment_7() { return static_cast<int32_t>(offsetof(SkeletonClipping_t2783913743, ___clipAttachment_7)); }
	inline ClippingAttachment_t2377737933 * get_clipAttachment_7() const { return ___clipAttachment_7; }
	inline ClippingAttachment_t2377737933 ** get_address_of_clipAttachment_7() { return &___clipAttachment_7; }
	inline void set_clipAttachment_7(ClippingAttachment_t2377737933 * value)
	{
		___clipAttachment_7 = value;
		Il2CppCodeGenWriteBarrier(&___clipAttachment_7, value);
	}

	inline static int32_t get_offset_of_clippingPolygons_8() { return static_cast<int32_t>(offsetof(SkeletonClipping_t2783913743, ___clippingPolygons_8)); }
	inline ExposedList_1_t190313812 * get_clippingPolygons_8() const { return ___clippingPolygons_8; }
	inline ExposedList_1_t190313812 ** get_address_of_clippingPolygons_8() { return &___clippingPolygons_8; }
	inline void set_clippingPolygons_8(ExposedList_1_t190313812 * value)
	{
		___clippingPolygons_8 = value;
		Il2CppCodeGenWriteBarrier(&___clippingPolygons_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
