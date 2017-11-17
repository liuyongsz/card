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

// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t3303648957;
// UnityEngine.Texture
struct Texture_t2243626319;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_MaterialPropertyBlock3303648957.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "UnityEngine_UnityEngine_Texture2243626319.h"

// System.Void UnityEngine.MaterialPropertyBlock::.ctor()
extern "C"  void MaterialPropertyBlock__ctor_m4079790842 (MaterialPropertyBlock_t3303648957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MaterialPropertyBlock::InitBlock()
extern "C"  void MaterialPropertyBlock_InitBlock_m3262857359 (MaterialPropertyBlock_t3303648957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MaterialPropertyBlock::DestroyBlock()
extern "C"  void MaterialPropertyBlock_DestroyBlock_m620634255 (MaterialPropertyBlock_t3303648957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MaterialPropertyBlock::Finalize()
extern "C"  void MaterialPropertyBlock_Finalize_m671672866 (MaterialPropertyBlock_t3303648957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MaterialPropertyBlock::SetFloat(System.Int32,System.Single)
extern "C"  void MaterialPropertyBlock_SetFloat_m2199354316 (MaterialPropertyBlock_t3303648957 * __this, int32_t ___nameID0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MaterialPropertyBlock::SetColor(System.Int32,UnityEngine.Color)
extern "C"  void MaterialPropertyBlock_SetColor_m2158714668 (MaterialPropertyBlock_t3303648957 * __this, int32_t ___nameID0, Color_t2020392075  ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MaterialPropertyBlock::INTERNAL_CALL_SetColor(UnityEngine.MaterialPropertyBlock,System.Int32,UnityEngine.Color&)
extern "C"  void MaterialPropertyBlock_INTERNAL_CALL_SetColor_m726866973 (Il2CppObject * __this /* static, unused */, MaterialPropertyBlock_t3303648957 * ___self0, int32_t ___nameID1, Color_t2020392075 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MaterialPropertyBlock::SetMatrix(System.Int32,UnityEngine.Matrix4x4)
extern "C"  void MaterialPropertyBlock_SetMatrix_m3723114480 (MaterialPropertyBlock_t3303648957 * __this, int32_t ___nameID0, Matrix4x4_t2933234003  ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MaterialPropertyBlock::INTERNAL_CALL_SetMatrix(UnityEngine.MaterialPropertyBlock,System.Int32,UnityEngine.Matrix4x4&)
extern "C"  void MaterialPropertyBlock_INTERNAL_CALL_SetMatrix_m2531829313 (Il2CppObject * __this /* static, unused */, MaterialPropertyBlock_t3303648957 * ___self0, int32_t ___nameID1, Matrix4x4_t2933234003 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MaterialPropertyBlock::SetTexture(System.Int32,UnityEngine.Texture)
extern "C"  void MaterialPropertyBlock_SetTexture_m792019488 (MaterialPropertyBlock_t3303648957 * __this, int32_t ___nameID0, Texture_t2243626319 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
