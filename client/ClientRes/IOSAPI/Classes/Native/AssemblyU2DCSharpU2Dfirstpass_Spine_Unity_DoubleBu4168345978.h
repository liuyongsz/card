#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.Unity.MeshRendererBuffers/SmartMesh
struct SmartMesh_t2575631256;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.DoubleBuffered`1<Spine.Unity.MeshRendererBuffers/SmartMesh>
struct  DoubleBuffered_1_t4168345978  : public Il2CppObject
{
public:
	// T Spine.Unity.DoubleBuffered`1::a
	SmartMesh_t2575631256 * ___a_0;
	// T Spine.Unity.DoubleBuffered`1::b
	SmartMesh_t2575631256 * ___b_1;
	// System.Boolean Spine.Unity.DoubleBuffered`1::usingA
	bool ___usingA_2;

public:
	inline static int32_t get_offset_of_a_0() { return static_cast<int32_t>(offsetof(DoubleBuffered_1_t4168345978, ___a_0)); }
	inline SmartMesh_t2575631256 * get_a_0() const { return ___a_0; }
	inline SmartMesh_t2575631256 ** get_address_of_a_0() { return &___a_0; }
	inline void set_a_0(SmartMesh_t2575631256 * value)
	{
		___a_0 = value;
		Il2CppCodeGenWriteBarrier(&___a_0, value);
	}

	inline static int32_t get_offset_of_b_1() { return static_cast<int32_t>(offsetof(DoubleBuffered_1_t4168345978, ___b_1)); }
	inline SmartMesh_t2575631256 * get_b_1() const { return ___b_1; }
	inline SmartMesh_t2575631256 ** get_address_of_b_1() { return &___b_1; }
	inline void set_b_1(SmartMesh_t2575631256 * value)
	{
		___b_1 = value;
		Il2CppCodeGenWriteBarrier(&___b_1, value);
	}

	inline static int32_t get_offset_of_usingA_2() { return static_cast<int32_t>(offsetof(DoubleBuffered_1_t4168345978, ___usingA_2)); }
	inline bool get_usingA_2() const { return ___usingA_2; }
	inline bool* get_address_of_usingA_2() { return &___usingA_2; }
	inline void set_usingA_2(bool value)
	{
		___usingA_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
