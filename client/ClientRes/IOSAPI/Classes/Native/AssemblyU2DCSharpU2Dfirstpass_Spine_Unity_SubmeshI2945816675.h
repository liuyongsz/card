#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.Skeleton
struct Skeleton_t1387859465;
// UnityEngine.Material
struct Material_t193706927;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.SubmeshInstruction
struct  SubmeshInstruction_t2945816675 
{
public:
	// Spine.Skeleton Spine.Unity.SubmeshInstruction::skeleton
	Skeleton_t1387859465 * ___skeleton_0;
	// System.Int32 Spine.Unity.SubmeshInstruction::startSlot
	int32_t ___startSlot_1;
	// System.Int32 Spine.Unity.SubmeshInstruction::endSlot
	int32_t ___endSlot_2;
	// UnityEngine.Material Spine.Unity.SubmeshInstruction::material
	Material_t193706927 * ___material_3;
	// System.Boolean Spine.Unity.SubmeshInstruction::forceSeparate
	bool ___forceSeparate_4;
	// System.Int32 Spine.Unity.SubmeshInstruction::preActiveClippingSlotSource
	int32_t ___preActiveClippingSlotSource_5;
	// System.Int32 Spine.Unity.SubmeshInstruction::rawTriangleCount
	int32_t ___rawTriangleCount_6;
	// System.Int32 Spine.Unity.SubmeshInstruction::rawVertexCount
	int32_t ___rawVertexCount_7;
	// System.Int32 Spine.Unity.SubmeshInstruction::rawFirstVertexIndex
	int32_t ___rawFirstVertexIndex_8;
	// System.Boolean Spine.Unity.SubmeshInstruction::hasClipping
	bool ___hasClipping_9;

public:
	inline static int32_t get_offset_of_skeleton_0() { return static_cast<int32_t>(offsetof(SubmeshInstruction_t2945816675, ___skeleton_0)); }
	inline Skeleton_t1387859465 * get_skeleton_0() const { return ___skeleton_0; }
	inline Skeleton_t1387859465 ** get_address_of_skeleton_0() { return &___skeleton_0; }
	inline void set_skeleton_0(Skeleton_t1387859465 * value)
	{
		___skeleton_0 = value;
		Il2CppCodeGenWriteBarrier(&___skeleton_0, value);
	}

	inline static int32_t get_offset_of_startSlot_1() { return static_cast<int32_t>(offsetof(SubmeshInstruction_t2945816675, ___startSlot_1)); }
	inline int32_t get_startSlot_1() const { return ___startSlot_1; }
	inline int32_t* get_address_of_startSlot_1() { return &___startSlot_1; }
	inline void set_startSlot_1(int32_t value)
	{
		___startSlot_1 = value;
	}

	inline static int32_t get_offset_of_endSlot_2() { return static_cast<int32_t>(offsetof(SubmeshInstruction_t2945816675, ___endSlot_2)); }
	inline int32_t get_endSlot_2() const { return ___endSlot_2; }
	inline int32_t* get_address_of_endSlot_2() { return &___endSlot_2; }
	inline void set_endSlot_2(int32_t value)
	{
		___endSlot_2 = value;
	}

	inline static int32_t get_offset_of_material_3() { return static_cast<int32_t>(offsetof(SubmeshInstruction_t2945816675, ___material_3)); }
	inline Material_t193706927 * get_material_3() const { return ___material_3; }
	inline Material_t193706927 ** get_address_of_material_3() { return &___material_3; }
	inline void set_material_3(Material_t193706927 * value)
	{
		___material_3 = value;
		Il2CppCodeGenWriteBarrier(&___material_3, value);
	}

	inline static int32_t get_offset_of_forceSeparate_4() { return static_cast<int32_t>(offsetof(SubmeshInstruction_t2945816675, ___forceSeparate_4)); }
	inline bool get_forceSeparate_4() const { return ___forceSeparate_4; }
	inline bool* get_address_of_forceSeparate_4() { return &___forceSeparate_4; }
	inline void set_forceSeparate_4(bool value)
	{
		___forceSeparate_4 = value;
	}

	inline static int32_t get_offset_of_preActiveClippingSlotSource_5() { return static_cast<int32_t>(offsetof(SubmeshInstruction_t2945816675, ___preActiveClippingSlotSource_5)); }
	inline int32_t get_preActiveClippingSlotSource_5() const { return ___preActiveClippingSlotSource_5; }
	inline int32_t* get_address_of_preActiveClippingSlotSource_5() { return &___preActiveClippingSlotSource_5; }
	inline void set_preActiveClippingSlotSource_5(int32_t value)
	{
		___preActiveClippingSlotSource_5 = value;
	}

	inline static int32_t get_offset_of_rawTriangleCount_6() { return static_cast<int32_t>(offsetof(SubmeshInstruction_t2945816675, ___rawTriangleCount_6)); }
	inline int32_t get_rawTriangleCount_6() const { return ___rawTriangleCount_6; }
	inline int32_t* get_address_of_rawTriangleCount_6() { return &___rawTriangleCount_6; }
	inline void set_rawTriangleCount_6(int32_t value)
	{
		___rawTriangleCount_6 = value;
	}

	inline static int32_t get_offset_of_rawVertexCount_7() { return static_cast<int32_t>(offsetof(SubmeshInstruction_t2945816675, ___rawVertexCount_7)); }
	inline int32_t get_rawVertexCount_7() const { return ___rawVertexCount_7; }
	inline int32_t* get_address_of_rawVertexCount_7() { return &___rawVertexCount_7; }
	inline void set_rawVertexCount_7(int32_t value)
	{
		___rawVertexCount_7 = value;
	}

	inline static int32_t get_offset_of_rawFirstVertexIndex_8() { return static_cast<int32_t>(offsetof(SubmeshInstruction_t2945816675, ___rawFirstVertexIndex_8)); }
	inline int32_t get_rawFirstVertexIndex_8() const { return ___rawFirstVertexIndex_8; }
	inline int32_t* get_address_of_rawFirstVertexIndex_8() { return &___rawFirstVertexIndex_8; }
	inline void set_rawFirstVertexIndex_8(int32_t value)
	{
		___rawFirstVertexIndex_8 = value;
	}

	inline static int32_t get_offset_of_hasClipping_9() { return static_cast<int32_t>(offsetof(SubmeshInstruction_t2945816675, ___hasClipping_9)); }
	inline bool get_hasClipping_9() const { return ___hasClipping_9; }
	inline bool* get_address_of_hasClipping_9() { return &___hasClipping_9; }
	inline void set_hasClipping_9(bool value)
	{
		___hasClipping_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Spine.Unity.SubmeshInstruction
struct SubmeshInstruction_t2945816675_marshaled_pinvoke
{
	Skeleton_t1387859465 * ___skeleton_0;
	int32_t ___startSlot_1;
	int32_t ___endSlot_2;
	Material_t193706927 * ___material_3;
	int32_t ___forceSeparate_4;
	int32_t ___preActiveClippingSlotSource_5;
	int32_t ___rawTriangleCount_6;
	int32_t ___rawVertexCount_7;
	int32_t ___rawFirstVertexIndex_8;
	int32_t ___hasClipping_9;
};
// Native definition for marshalling of: Spine.Unity.SubmeshInstruction
struct SubmeshInstruction_t2945816675_marshaled_com
{
	Skeleton_t1387859465 * ___skeleton_0;
	int32_t ___startSlot_1;
	int32_t ___endSlot_2;
	Material_t193706927 * ___material_3;
	int32_t ___forceSeparate_4;
	int32_t ___preActiveClippingSlotSource_5;
	int32_t ___rawTriangleCount_6;
	int32_t ___rawVertexCount_7;
	int32_t ___rawFirstVertexIndex_8;
	int32_t ___hasClipping_9;
};
