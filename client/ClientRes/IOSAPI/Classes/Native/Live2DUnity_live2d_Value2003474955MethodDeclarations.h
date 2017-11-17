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

// live2d.Value
struct Value_t2003474955;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Collections.Generic.List`1<live2d.Value>
struct List_1_t1372596087;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"

// System.Void live2d.Value::.ctor(System.Object)
extern "C"  void Value__ctor_m2697008343 (Value_t2003474955 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String live2d.Value::toString()
extern "C"  String_t* Value_toString_m753620238 (Value_t2003474955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String live2d.Value::toString(System.String)
extern "C"  String_t* Value_toString_m2124233640 (Value_t2003474955 * __this, String_t* ___indent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single live2d.Value::toFloat()
extern "C"  float Value_toFloat_m1981463892 (Value_t2003474955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single live2d.Value::toFloat(System.Single)
extern "C"  float Value_toFloat_m3443347733 (Value_t2003474955 * __this, float ___defaultV0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<live2d.Value> live2d.Value::getVector(System.Collections.Generic.List`1<live2d.Value>)
extern "C"  List_1_t1372596087 * Value_getVector_m2803472725 (Value_t2003474955 * __this, List_1_t1372596087 * ___defalutV0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// live2d.Value live2d.Value::get(System.String)
extern "C"  Value_t2003474955 * Value_get_m2782365735 (Value_t2003474955 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
