#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;
// UnityEngine.Color32[]
struct Color32U5BU5D_t30278651;
// Spine.Unity.MeshGenerator
struct MeshGenerator_t3385794548;
struct Vector3_t2243707580_marshaled_pinvoke;
struct Vector2_t2243707579_marshaled_pinvoke;
struct Color32_t874517518_marshaled_pinvoke;
struct Vector3_t2243707580_marshaled_com;
struct Vector2_t2243707579_marshaled_com;
struct Color32_t874517518_marshaled_com;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.MeshGeneratorBuffers
struct  MeshGeneratorBuffers_t3606452635 
{
public:
	// System.Int32 Spine.Unity.MeshGeneratorBuffers::vertexCount
	int32_t ___vertexCount_0;
	// UnityEngine.Vector3[] Spine.Unity.MeshGeneratorBuffers::vertexBuffer
	Vector3U5BU5D_t1172311765* ___vertexBuffer_1;
	// UnityEngine.Vector2[] Spine.Unity.MeshGeneratorBuffers::uvBuffer
	Vector2U5BU5D_t686124026* ___uvBuffer_2;
	// UnityEngine.Color32[] Spine.Unity.MeshGeneratorBuffers::colorBuffer
	Color32U5BU5D_t30278651* ___colorBuffer_3;
	// Spine.Unity.MeshGenerator Spine.Unity.MeshGeneratorBuffers::meshGenerator
	MeshGenerator_t3385794548 * ___meshGenerator_4;

public:
	inline static int32_t get_offset_of_vertexCount_0() { return static_cast<int32_t>(offsetof(MeshGeneratorBuffers_t3606452635, ___vertexCount_0)); }
	inline int32_t get_vertexCount_0() const { return ___vertexCount_0; }
	inline int32_t* get_address_of_vertexCount_0() { return &___vertexCount_0; }
	inline void set_vertexCount_0(int32_t value)
	{
		___vertexCount_0 = value;
	}

	inline static int32_t get_offset_of_vertexBuffer_1() { return static_cast<int32_t>(offsetof(MeshGeneratorBuffers_t3606452635, ___vertexBuffer_1)); }
	inline Vector3U5BU5D_t1172311765* get_vertexBuffer_1() const { return ___vertexBuffer_1; }
	inline Vector3U5BU5D_t1172311765** get_address_of_vertexBuffer_1() { return &___vertexBuffer_1; }
	inline void set_vertexBuffer_1(Vector3U5BU5D_t1172311765* value)
	{
		___vertexBuffer_1 = value;
		Il2CppCodeGenWriteBarrier(&___vertexBuffer_1, value);
	}

	inline static int32_t get_offset_of_uvBuffer_2() { return static_cast<int32_t>(offsetof(MeshGeneratorBuffers_t3606452635, ___uvBuffer_2)); }
	inline Vector2U5BU5D_t686124026* get_uvBuffer_2() const { return ___uvBuffer_2; }
	inline Vector2U5BU5D_t686124026** get_address_of_uvBuffer_2() { return &___uvBuffer_2; }
	inline void set_uvBuffer_2(Vector2U5BU5D_t686124026* value)
	{
		___uvBuffer_2 = value;
		Il2CppCodeGenWriteBarrier(&___uvBuffer_2, value);
	}

	inline static int32_t get_offset_of_colorBuffer_3() { return static_cast<int32_t>(offsetof(MeshGeneratorBuffers_t3606452635, ___colorBuffer_3)); }
	inline Color32U5BU5D_t30278651* get_colorBuffer_3() const { return ___colorBuffer_3; }
	inline Color32U5BU5D_t30278651** get_address_of_colorBuffer_3() { return &___colorBuffer_3; }
	inline void set_colorBuffer_3(Color32U5BU5D_t30278651* value)
	{
		___colorBuffer_3 = value;
		Il2CppCodeGenWriteBarrier(&___colorBuffer_3, value);
	}

	inline static int32_t get_offset_of_meshGenerator_4() { return static_cast<int32_t>(offsetof(MeshGeneratorBuffers_t3606452635, ___meshGenerator_4)); }
	inline MeshGenerator_t3385794548 * get_meshGenerator_4() const { return ___meshGenerator_4; }
	inline MeshGenerator_t3385794548 ** get_address_of_meshGenerator_4() { return &___meshGenerator_4; }
	inline void set_meshGenerator_4(MeshGenerator_t3385794548 * value)
	{
		___meshGenerator_4 = value;
		Il2CppCodeGenWriteBarrier(&___meshGenerator_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Spine.Unity.MeshGeneratorBuffers
struct MeshGeneratorBuffers_t3606452635_marshaled_pinvoke
{
	int32_t ___vertexCount_0;
	Vector3_t2243707580_marshaled_pinvoke* ___vertexBuffer_1;
	Vector2_t2243707579_marshaled_pinvoke* ___uvBuffer_2;
	Color32_t874517518_marshaled_pinvoke* ___colorBuffer_3;
	MeshGenerator_t3385794548 * ___meshGenerator_4;
};
// Native definition for marshalling of: Spine.Unity.MeshGeneratorBuffers
struct MeshGeneratorBuffers_t3606452635_marshaled_com
{
	int32_t ___vertexCount_0;
	Vector3_t2243707580_marshaled_com* ___vertexBuffer_1;
	Vector2_t2243707579_marshaled_com* ___uvBuffer_2;
	Color32_t874517518_marshaled_com* ___colorBuffer_3;
	MeshGenerator_t3385794548 * ___meshGenerator_4;
};
