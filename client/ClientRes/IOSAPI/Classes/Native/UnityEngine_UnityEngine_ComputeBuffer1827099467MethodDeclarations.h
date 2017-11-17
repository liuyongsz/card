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

// UnityEngine.ComputeBuffer
struct ComputeBuffer_t1827099467;
// System.Array
struct Il2CppArray;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ComputeBufferType1048369819.h"
#include "UnityEngine_UnityEngine_ComputeBuffer1827099467.h"
#include "mscorlib_System_Array3829468939.h"

// System.Void UnityEngine.ComputeBuffer::.ctor(System.Int32,System.Int32,UnityEngine.ComputeBufferType)
extern "C"  void ComputeBuffer__ctor_m299003206 (ComputeBuffer_t1827099467 * __this, int32_t ___count0, int32_t ___stride1, int32_t ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::Finalize()
extern "C"  void ComputeBuffer_Finalize_m4162385744 (ComputeBuffer_t1827099467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::Dispose()
extern "C"  void ComputeBuffer_Dispose_m2628097323 (ComputeBuffer_t1827099467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::Dispose(System.Boolean)
extern "C"  void ComputeBuffer_Dispose_m2723967296 (ComputeBuffer_t1827099467 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::InitBuffer(UnityEngine.ComputeBuffer,System.Int32,System.Int32,UnityEngine.ComputeBufferType)
extern "C"  void ComputeBuffer_InitBuffer_m1044990190 (Il2CppObject * __this /* static, unused */, ComputeBuffer_t1827099467 * ___buf0, int32_t ___count1, int32_t ___stride2, int32_t ___type3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::DestroyBuffer(UnityEngine.ComputeBuffer)
extern "C"  void ComputeBuffer_DestroyBuffer_m744350480 (Il2CppObject * __this /* static, unused */, ComputeBuffer_t1827099467 * ___buf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::Release()
extern "C"  void ComputeBuffer_Release_m1681530405 (ComputeBuffer_t1827099467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::SetData(System.Array)
extern "C"  void ComputeBuffer_SetData_m3972938986 (ComputeBuffer_t1827099467 * __this, Il2CppArray * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::InternalSetData(System.Array,System.Int32)
extern "C"  void ComputeBuffer_InternalSetData_m3468936416 (ComputeBuffer_t1827099467 * __this, Il2CppArray * ___data0, int32_t ___elemSize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::CopyCount(UnityEngine.ComputeBuffer,UnityEngine.ComputeBuffer,System.Int32)
extern "C"  void ComputeBuffer_CopyCount_m839588555 (Il2CppObject * __this /* static, unused */, ComputeBuffer_t1827099467 * ___src0, ComputeBuffer_t1827099467 * ___dst1, int32_t ___dstOffset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
