#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.ExposedList`1<Spine.ExposedList`1<System.Single>>
struct ExposedList_1_t190313812;
// Spine.ExposedList`1<Spine.ExposedList`1<System.Int32>>
struct ExposedList_1_t185681328;
// Spine.ExposedList`1<System.Int32>
struct ExposedList_1_t1128779388;
// Spine.ExposedList`1<System.Boolean>
struct ExposedList_1_t2882476658;
// Spine.Pool`1<Spine.ExposedList`1<System.Single>>
struct Pool_1_t1750816240;
// Spine.Pool`1<Spine.ExposedList`1<System.Int32>>
struct Pool_1_t1746183756;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Triangulator
struct  Triangulator_t2783591524  : public Il2CppObject
{
public:
	// Spine.ExposedList`1<Spine.ExposedList`1<System.Single>> Spine.Triangulator::convexPolygons
	ExposedList_1_t190313812 * ___convexPolygons_0;
	// Spine.ExposedList`1<Spine.ExposedList`1<System.Int32>> Spine.Triangulator::convexPolygonsIndices
	ExposedList_1_t185681328 * ___convexPolygonsIndices_1;
	// Spine.ExposedList`1<System.Int32> Spine.Triangulator::indicesArray
	ExposedList_1_t1128779388 * ___indicesArray_2;
	// Spine.ExposedList`1<System.Boolean> Spine.Triangulator::isConcaveArray
	ExposedList_1_t2882476658 * ___isConcaveArray_3;
	// Spine.ExposedList`1<System.Int32> Spine.Triangulator::triangles
	ExposedList_1_t1128779388 * ___triangles_4;
	// Spine.Pool`1<Spine.ExposedList`1<System.Single>> Spine.Triangulator::polygonPool
	Pool_1_t1750816240 * ___polygonPool_5;
	// Spine.Pool`1<Spine.ExposedList`1<System.Int32>> Spine.Triangulator::polygonIndicesPool
	Pool_1_t1746183756 * ___polygonIndicesPool_6;

public:
	inline static int32_t get_offset_of_convexPolygons_0() { return static_cast<int32_t>(offsetof(Triangulator_t2783591524, ___convexPolygons_0)); }
	inline ExposedList_1_t190313812 * get_convexPolygons_0() const { return ___convexPolygons_0; }
	inline ExposedList_1_t190313812 ** get_address_of_convexPolygons_0() { return &___convexPolygons_0; }
	inline void set_convexPolygons_0(ExposedList_1_t190313812 * value)
	{
		___convexPolygons_0 = value;
		Il2CppCodeGenWriteBarrier(&___convexPolygons_0, value);
	}

	inline static int32_t get_offset_of_convexPolygonsIndices_1() { return static_cast<int32_t>(offsetof(Triangulator_t2783591524, ___convexPolygonsIndices_1)); }
	inline ExposedList_1_t185681328 * get_convexPolygonsIndices_1() const { return ___convexPolygonsIndices_1; }
	inline ExposedList_1_t185681328 ** get_address_of_convexPolygonsIndices_1() { return &___convexPolygonsIndices_1; }
	inline void set_convexPolygonsIndices_1(ExposedList_1_t185681328 * value)
	{
		___convexPolygonsIndices_1 = value;
		Il2CppCodeGenWriteBarrier(&___convexPolygonsIndices_1, value);
	}

	inline static int32_t get_offset_of_indicesArray_2() { return static_cast<int32_t>(offsetof(Triangulator_t2783591524, ___indicesArray_2)); }
	inline ExposedList_1_t1128779388 * get_indicesArray_2() const { return ___indicesArray_2; }
	inline ExposedList_1_t1128779388 ** get_address_of_indicesArray_2() { return &___indicesArray_2; }
	inline void set_indicesArray_2(ExposedList_1_t1128779388 * value)
	{
		___indicesArray_2 = value;
		Il2CppCodeGenWriteBarrier(&___indicesArray_2, value);
	}

	inline static int32_t get_offset_of_isConcaveArray_3() { return static_cast<int32_t>(offsetof(Triangulator_t2783591524, ___isConcaveArray_3)); }
	inline ExposedList_1_t2882476658 * get_isConcaveArray_3() const { return ___isConcaveArray_3; }
	inline ExposedList_1_t2882476658 ** get_address_of_isConcaveArray_3() { return &___isConcaveArray_3; }
	inline void set_isConcaveArray_3(ExposedList_1_t2882476658 * value)
	{
		___isConcaveArray_3 = value;
		Il2CppCodeGenWriteBarrier(&___isConcaveArray_3, value);
	}

	inline static int32_t get_offset_of_triangles_4() { return static_cast<int32_t>(offsetof(Triangulator_t2783591524, ___triangles_4)); }
	inline ExposedList_1_t1128779388 * get_triangles_4() const { return ___triangles_4; }
	inline ExposedList_1_t1128779388 ** get_address_of_triangles_4() { return &___triangles_4; }
	inline void set_triangles_4(ExposedList_1_t1128779388 * value)
	{
		___triangles_4 = value;
		Il2CppCodeGenWriteBarrier(&___triangles_4, value);
	}

	inline static int32_t get_offset_of_polygonPool_5() { return static_cast<int32_t>(offsetof(Triangulator_t2783591524, ___polygonPool_5)); }
	inline Pool_1_t1750816240 * get_polygonPool_5() const { return ___polygonPool_5; }
	inline Pool_1_t1750816240 ** get_address_of_polygonPool_5() { return &___polygonPool_5; }
	inline void set_polygonPool_5(Pool_1_t1750816240 * value)
	{
		___polygonPool_5 = value;
		Il2CppCodeGenWriteBarrier(&___polygonPool_5, value);
	}

	inline static int32_t get_offset_of_polygonIndicesPool_6() { return static_cast<int32_t>(offsetof(Triangulator_t2783591524, ___polygonIndicesPool_6)); }
	inline Pool_1_t1746183756 * get_polygonIndicesPool_6() const { return ___polygonIndicesPool_6; }
	inline Pool_1_t1746183756 ** get_address_of_polygonIndicesPool_6() { return &___polygonIndicesPool_6; }
	inline void set_polygonIndicesPool_6(Pool_1_t1746183756 * value)
	{
		___polygonIndicesPool_6 = value;
		Il2CppCodeGenWriteBarrier(&___polygonIndicesPool_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
