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

// Photon.SocketServer.Numeric.BigInteger
struct BigInteger_t3529225576;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Random
struct Random_t1044426839;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_Photon_SocketServer_Numeric_BigInte3529225576.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Random1044426839.h"

// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor()
extern "C"  void BigInteger__ctor_m207877863 (BigInteger_t3529225576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.Int64)
extern "C"  void BigInteger__ctor_m1682528513 (BigInteger_t3529225576 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(Photon.SocketServer.Numeric.BigInteger)
extern "C"  void BigInteger__ctor_m2701217836 (BigInteger_t3529225576 * __this, BigInteger_t3529225576 * ___bi0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.Byte[])
extern "C"  void BigInteger__ctor_m3753640700 (BigInteger_t3529225576 * __this, ByteU5BU5D_t3397334013* ___inData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.UInt32[])
extern "C"  void BigInteger__ctor_m2057157921 (BigInteger_t3529225576 * __this, UInt32U5BU5D_t59386216* ___inData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Implicit(System.Int64)
extern "C"  BigInteger_t3529225576 * BigInteger_op_Implicit_m3173055646 (Il2CppObject * __this /* static, unused */, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Implicit(System.Int32)
extern "C"  BigInteger_t3529225576 * BigInteger_op_Implicit_m3979624799 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Addition(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t3529225576 * BigInteger_op_Addition_m3093858325 (Il2CppObject * __this /* static, unused */, BigInteger_t3529225576 * ___bi10, BigInteger_t3529225576 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Subtraction(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t3529225576 * BigInteger_op_Subtraction_m3257423613 (Il2CppObject * __this /* static, unused */, BigInteger_t3529225576 * ___bi10, BigInteger_t3529225576 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Multiply(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t3529225576 * BigInteger_op_Multiply_m505321425 (Il2CppObject * __this /* static, unused */, BigInteger_t3529225576 * ___bi10, BigInteger_t3529225576 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_LeftShift(Photon.SocketServer.Numeric.BigInteger,System.Int32)
extern "C"  BigInteger_t3529225576 * BigInteger_op_LeftShift_m1971849518 (Il2CppObject * __this /* static, unused */, BigInteger_t3529225576 * ___bi10, int32_t ___shiftVal1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Photon.SocketServer.Numeric.BigInteger::shiftLeft(System.UInt32[],System.Int32)
extern "C"  int32_t BigInteger_shiftLeft_m1100890961 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___buffer0, int32_t ___shiftVal1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Photon.SocketServer.Numeric.BigInteger::shiftRight(System.UInt32[],System.Int32)
extern "C"  int32_t BigInteger_shiftRight_m516721670 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___buffer0, int32_t ___shiftVal1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_UnaryNegation(Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t3529225576 * BigInteger_op_UnaryNegation_m1604372880 (Il2CppObject * __this /* static, unused */, BigInteger_t3529225576 * ___bi10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_Equality(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  bool BigInteger_op_Equality_m1189659763 (Il2CppObject * __this /* static, unused */, BigInteger_t3529225576 * ___bi10, BigInteger_t3529225576 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::Equals(System.Object)
extern "C"  bool BigInteger_Equals_m2173123620 (BigInteger_t3529225576 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Photon.SocketServer.Numeric.BigInteger::GetHashCode()
extern "C"  int32_t BigInteger_GetHashCode_m50061568 (BigInteger_t3529225576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_GreaterThan(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  bool BigInteger_op_GreaterThan_m2405874624 (Il2CppObject * __this /* static, unused */, BigInteger_t3529225576 * ___bi10, BigInteger_t3529225576 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_LessThan(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  bool BigInteger_op_LessThan_m2267998233 (Il2CppObject * __this /* static, unused */, BigInteger_t3529225576 * ___bi10, BigInteger_t3529225576 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_GreaterThanOrEqual(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  bool BigInteger_op_GreaterThanOrEqual_m933101643 (Il2CppObject * __this /* static, unused */, BigInteger_t3529225576 * ___bi10, BigInteger_t3529225576 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::multiByteDivide(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  void BigInteger_multiByteDivide_m675585007 (Il2CppObject * __this /* static, unused */, BigInteger_t3529225576 * ___bi10, BigInteger_t3529225576 * ___bi21, BigInteger_t3529225576 * ___outQuotient2, BigInteger_t3529225576 * ___outRemainder3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::singleByteDivide(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  void BigInteger_singleByteDivide_m681904612 (Il2CppObject * __this /* static, unused */, BigInteger_t3529225576 * ___bi10, BigInteger_t3529225576 * ___bi21, BigInteger_t3529225576 * ___outQuotient2, BigInteger_t3529225576 * ___outRemainder3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Division(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t3529225576 * BigInteger_op_Division_m2692050266 (Il2CppObject * __this /* static, unused */, BigInteger_t3529225576 * ___bi10, BigInteger_t3529225576 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Modulus(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t3529225576 * BigInteger_op_Modulus_m2040577468 (Il2CppObject * __this /* static, unused */, BigInteger_t3529225576 * ___bi10, BigInteger_t3529225576 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Photon.SocketServer.Numeric.BigInteger::ToString()
extern "C"  String_t* BigInteger_ToString_m1659185072 (BigInteger_t3529225576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Photon.SocketServer.Numeric.BigInteger::ToString(System.Int32)
extern "C"  String_t* BigInteger_ToString_m1508254065 (BigInteger_t3529225576 * __this, int32_t ___radix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::ModPow(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t3529225576 * BigInteger_ModPow_m3417712399 (BigInteger_t3529225576 * __this, BigInteger_t3529225576 * ___exp0, BigInteger_t3529225576 * ___n1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::BarrettReduction(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t3529225576 * BigInteger_BarrettReduction_m758324903 (BigInteger_t3529225576 * __this, BigInteger_t3529225576 * ___x0, BigInteger_t3529225576 * ___n1, BigInteger_t3529225576 * ___constant2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::GenerateRandom(System.Int32)
extern "C"  BigInteger_t3529225576 * BigInteger_GenerateRandom_m3979395232 (Il2CppObject * __this /* static, unused */, int32_t ___bits0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::genRandomBits(System.Int32,System.Random)
extern "C"  void BigInteger_genRandomBits_m4093920629 (BigInteger_t3529225576 * __this, int32_t ___bits0, Random_t1044426839 * ___rand1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Photon.SocketServer.Numeric.BigInteger::bitCount()
extern "C"  int32_t BigInteger_bitCount_m1920951269 (BigInteger_t3529225576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Numeric.BigInteger::GetBytes()
extern "C"  ByteU5BU5D_t3397334013* BigInteger_GetBytes_m1252945234 (BigInteger_t3529225576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::.cctor()
extern "C"  void BigInteger__cctor_m2260664792 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
