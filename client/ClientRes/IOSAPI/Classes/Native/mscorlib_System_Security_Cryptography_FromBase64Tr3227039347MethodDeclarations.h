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

// System.Security.Cryptography.FromBase64Transform
struct FromBase64Transform_t3227039347;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_FromBase64Tr2331250892.h"

// System.Void System.Security.Cryptography.FromBase64Transform::.ctor()
extern "C"  void FromBase64Transform__ctor_m506061958 (FromBase64Transform_t3227039347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.FromBase64Transform::.ctor(System.Security.Cryptography.FromBase64TransformMode)
extern "C"  void FromBase64Transform__ctor_m3595119815 (FromBase64Transform_t3227039347 * __this, int32_t ___whitespaces0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.FromBase64Transform::System.IDisposable.Dispose()
extern "C"  void FromBase64Transform_System_IDisposable_Dispose_m84177925 (FromBase64Transform_t3227039347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.FromBase64Transform::Finalize()
extern "C"  void FromBase64Transform_Finalize_m203311510 (FromBase64Transform_t3227039347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.FromBase64Transform::get_CanReuseTransform()
extern "C"  bool FromBase64Transform_get_CanReuseTransform_m2524371019 (FromBase64Transform_t3227039347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.FromBase64Transform::Dispose(System.Boolean)
extern "C"  void FromBase64Transform_Dispose_m3209599530 (FromBase64Transform_t3227039347 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Security.Cryptography.FromBase64Transform::lookup(System.Byte)
extern "C"  uint8_t FromBase64Transform_lookup_m3513321755 (FromBase64Transform_t3227039347 * __this, uint8_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.FromBase64Transform::ProcessBlock(System.Byte[],System.Int32)
extern "C"  int32_t FromBase64Transform_ProcessBlock_m161211928 (FromBase64Transform_t3227039347 * __this, ByteU5BU5D_t3397334013* ___output0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.FromBase64Transform::CheckInputParameters(System.Byte[],System.Int32,System.Int32)
extern "C"  void FromBase64Transform_CheckInputParameters_m2268123115 (FromBase64Transform_t3227039347 * __this, ByteU5BU5D_t3397334013* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.FromBase64Transform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t FromBase64Transform_TransformBlock_m3598945442 (FromBase64Transform_t3227039347 * __this, ByteU5BU5D_t3397334013* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, ByteU5BU5D_t3397334013* ___outputBuffer3, int32_t ___outputOffset4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.FromBase64Transform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* FromBase64Transform_TransformFinalBlock_m1316616668 (FromBase64Transform_t3227039347 * __this, ByteU5BU5D_t3397334013* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
