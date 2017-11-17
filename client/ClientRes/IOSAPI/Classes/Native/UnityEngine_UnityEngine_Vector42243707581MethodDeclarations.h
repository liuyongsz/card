﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// UnityEngine.Vector4
struct Vector4_t2243707581;
struct Vector4_t2243707581_marshaled_pinvoke;
struct Vector4_t2243707581_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Vector4__ctor_m1222289168 (Vector4_t2243707581 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector4::get_Item(System.Int32)
extern "C"  float Vector4_get_Item_m1912997891 (Vector4_t2243707581 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector4::set_Item(System.Int32,System.Single)
extern "C"  void Vector4_set_Item_m3077071044 (Vector4_t2243707581 * __this, int32_t ___index0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Vector4::GetHashCode()
extern "C"  int32_t Vector4_GetHashCode_m1576457715 (Vector4_t2243707581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector4::Equals(System.Object)
extern "C"  bool Vector4_Equals_m3783731577 (Vector4_t2243707581 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector4::ToString()
extern "C"  String_t* Vector4_ToString_m2340321043 (Vector4_t2243707581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector4::Dot(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C"  float Vector4_Dot_m2285943745 (Il2CppObject * __this /* static, unused */, Vector4_t2243707581  ___a0, Vector4_t2243707581  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector4::get_magnitude()
extern "C"  float Vector4_get_magnitude_m4049434951 (Vector4_t2243707581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector4::SqrMagnitude(UnityEngine.Vector4)
extern "C"  float Vector4_SqrMagnitude_m3109980116 (Il2CppObject * __this /* static, unused */, Vector4_t2243707581  ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector4::get_sqrMagnitude()
extern "C"  float Vector4_get_sqrMagnitude_m2115578799 (Vector4_t2243707581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
extern "C"  Vector4_t2243707581  Vector4_get_zero_m3810945132 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::get_one()
extern "C"  Vector4_t2243707581  Vector4_get_one_m3039437024 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Addition(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C"  Vector4_t2243707581  Vector4_op_Addition_m3367537977 (Il2CppObject * __this /* static, unused */, Vector4_t2243707581  ___a0, Vector4_t2243707581  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Subtraction(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C"  Vector4_t2243707581  Vector4_op_Subtraction_m2837269249 (Il2CppObject * __this /* static, unused */, Vector4_t2243707581  ___a0, Vector4_t2243707581  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Multiply(UnityEngine.Vector4,System.Single)
extern "C"  Vector4_t2243707581  Vector4_op_Multiply_m3204903356 (Il2CppObject * __this /* static, unused */, Vector4_t2243707581  ___a0, float ___d1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Multiply(System.Single,UnityEngine.Vector4)
extern "C"  Vector4_t2243707581  Vector4_op_Multiply_m2598404284 (Il2CppObject * __this /* static, unused */, float ___d0, Vector4_t2243707581  ___a1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Division(UnityEngine.Vector4,System.Single)
extern "C"  Vector4_t2243707581  Vector4_op_Division_m130892763 (Il2CppObject * __this /* static, unused */, Vector4_t2243707581  ___a0, float ___d1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C"  bool Vector4_op_Equality_m1825453464 (Il2CppObject * __this /* static, unused */, Vector4_t2243707581  ___lhs0, Vector4_t2243707581  ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector4::op_Inequality(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C"  bool Vector4_op_Inequality_m1143290655 (Il2CppObject * __this /* static, unused */, Vector4_t2243707581  ___lhs0, Vector4_t2243707581  ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector4_t2243707581  Vector4_op_Implicit_m1059320239 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
extern "C"  Vector3_t2243707580  Vector4_op_Implicit_m1902992875 (Il2CppObject * __this /* static, unused */, Vector4_t2243707581  ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector2)
extern "C"  Vector4_t2243707581  Vector4_op_Implicit_m2625404180 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
extern "C"  Vector2_t2243707579  Vector4_op_Implicit_m158614156 (Il2CppObject * __this /* static, unused */, Vector4_t2243707581  ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Vector4_t2243707581;
struct Vector4_t2243707581_marshaled_pinvoke;

extern "C" void Vector4_t2243707581_marshal_pinvoke(const Vector4_t2243707581& unmarshaled, Vector4_t2243707581_marshaled_pinvoke& marshaled);
extern "C" void Vector4_t2243707581_marshal_pinvoke_back(const Vector4_t2243707581_marshaled_pinvoke& marshaled, Vector4_t2243707581& unmarshaled);
extern "C" void Vector4_t2243707581_marshal_pinvoke_cleanup(Vector4_t2243707581_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Vector4_t2243707581;
struct Vector4_t2243707581_marshaled_com;

extern "C" void Vector4_t2243707581_marshal_com(const Vector4_t2243707581& unmarshaled, Vector4_t2243707581_marshaled_com& marshaled);
extern "C" void Vector4_t2243707581_marshal_com_back(const Vector4_t2243707581_marshaled_com& marshaled, Vector4_t2243707581& unmarshaled);
extern "C" void Vector4_t2243707581_marshal_com_cleanup(Vector4_t2243707581_marshaled_com& marshaled);