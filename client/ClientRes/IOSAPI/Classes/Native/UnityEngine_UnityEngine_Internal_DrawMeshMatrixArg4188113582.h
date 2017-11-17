#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Internal_DrawMeshMatrixArguments
struct  Internal_DrawMeshMatrixArguments_t4188113582 
{
public:
	// System.Int32 UnityEngine.Internal_DrawMeshMatrixArguments::layer
	int32_t ___layer_0;
	// System.Int32 UnityEngine.Internal_DrawMeshMatrixArguments::submeshIndex
	int32_t ___submeshIndex_1;
	// UnityEngine.Matrix4x4 UnityEngine.Internal_DrawMeshMatrixArguments::matrix
	Matrix4x4_t2933234003  ___matrix_2;
	// System.Int32 UnityEngine.Internal_DrawMeshMatrixArguments::castShadows
	int32_t ___castShadows_3;
	// System.Int32 UnityEngine.Internal_DrawMeshMatrixArguments::receiveShadows
	int32_t ___receiveShadows_4;
	// System.Int32 UnityEngine.Internal_DrawMeshMatrixArguments::reflectionProbeAnchorInstanceID
	int32_t ___reflectionProbeAnchorInstanceID_5;
	// System.Boolean UnityEngine.Internal_DrawMeshMatrixArguments::useLightProbes
	bool ___useLightProbes_6;

public:
	inline static int32_t get_offset_of_layer_0() { return static_cast<int32_t>(offsetof(Internal_DrawMeshMatrixArguments_t4188113582, ___layer_0)); }
	inline int32_t get_layer_0() const { return ___layer_0; }
	inline int32_t* get_address_of_layer_0() { return &___layer_0; }
	inline void set_layer_0(int32_t value)
	{
		___layer_0 = value;
	}

	inline static int32_t get_offset_of_submeshIndex_1() { return static_cast<int32_t>(offsetof(Internal_DrawMeshMatrixArguments_t4188113582, ___submeshIndex_1)); }
	inline int32_t get_submeshIndex_1() const { return ___submeshIndex_1; }
	inline int32_t* get_address_of_submeshIndex_1() { return &___submeshIndex_1; }
	inline void set_submeshIndex_1(int32_t value)
	{
		___submeshIndex_1 = value;
	}

	inline static int32_t get_offset_of_matrix_2() { return static_cast<int32_t>(offsetof(Internal_DrawMeshMatrixArguments_t4188113582, ___matrix_2)); }
	inline Matrix4x4_t2933234003  get_matrix_2() const { return ___matrix_2; }
	inline Matrix4x4_t2933234003 * get_address_of_matrix_2() { return &___matrix_2; }
	inline void set_matrix_2(Matrix4x4_t2933234003  value)
	{
		___matrix_2 = value;
	}

	inline static int32_t get_offset_of_castShadows_3() { return static_cast<int32_t>(offsetof(Internal_DrawMeshMatrixArguments_t4188113582, ___castShadows_3)); }
	inline int32_t get_castShadows_3() const { return ___castShadows_3; }
	inline int32_t* get_address_of_castShadows_3() { return &___castShadows_3; }
	inline void set_castShadows_3(int32_t value)
	{
		___castShadows_3 = value;
	}

	inline static int32_t get_offset_of_receiveShadows_4() { return static_cast<int32_t>(offsetof(Internal_DrawMeshMatrixArguments_t4188113582, ___receiveShadows_4)); }
	inline int32_t get_receiveShadows_4() const { return ___receiveShadows_4; }
	inline int32_t* get_address_of_receiveShadows_4() { return &___receiveShadows_4; }
	inline void set_receiveShadows_4(int32_t value)
	{
		___receiveShadows_4 = value;
	}

	inline static int32_t get_offset_of_reflectionProbeAnchorInstanceID_5() { return static_cast<int32_t>(offsetof(Internal_DrawMeshMatrixArguments_t4188113582, ___reflectionProbeAnchorInstanceID_5)); }
	inline int32_t get_reflectionProbeAnchorInstanceID_5() const { return ___reflectionProbeAnchorInstanceID_5; }
	inline int32_t* get_address_of_reflectionProbeAnchorInstanceID_5() { return &___reflectionProbeAnchorInstanceID_5; }
	inline void set_reflectionProbeAnchorInstanceID_5(int32_t value)
	{
		___reflectionProbeAnchorInstanceID_5 = value;
	}

	inline static int32_t get_offset_of_useLightProbes_6() { return static_cast<int32_t>(offsetof(Internal_DrawMeshMatrixArguments_t4188113582, ___useLightProbes_6)); }
	inline bool get_useLightProbes_6() const { return ___useLightProbes_6; }
	inline bool* get_address_of_useLightProbes_6() { return &___useLightProbes_6; }
	inline void set_useLightProbes_6(bool value)
	{
		___useLightProbes_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityEngine.Internal_DrawMeshMatrixArguments
struct Internal_DrawMeshMatrixArguments_t4188113582_marshaled_pinvoke
{
	int32_t ___layer_0;
	int32_t ___submeshIndex_1;
	Matrix4x4_t2933234003_marshaled_pinvoke ___matrix_2;
	int32_t ___castShadows_3;
	int32_t ___receiveShadows_4;
	int32_t ___reflectionProbeAnchorInstanceID_5;
	int32_t ___useLightProbes_6;
};
// Native definition for marshalling of: UnityEngine.Internal_DrawMeshMatrixArguments
struct Internal_DrawMeshMatrixArguments_t4188113582_marshaled_com
{
	int32_t ___layer_0;
	int32_t ___submeshIndex_1;
	Matrix4x4_t2933234003_marshaled_com ___matrix_2;
	int32_t ___castShadows_3;
	int32_t ___receiveShadows_4;
	int32_t ___reflectionProbeAnchorInstanceID_5;
	int32_t ___useLightProbes_6;
};
