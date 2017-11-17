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

// System.String[]
struct StringU5BU5D_t1642385972;
// System.Object
struct Il2CppObject;
// System.Xml.Schema.StringArrayValueType
struct StringArrayValueType_t1731700877;
struct StringArrayValueType_t1731700877_marshaled_pinvoke;
struct StringArrayValueType_t1731700877_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_StringArrayValueType1731700877.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Xml.Schema.StringArrayValueType::.ctor(System.String[])
extern "C"  void StringArrayValueType__ctor_m3839297877 (StringArrayValueType_t1731700877 * __this, StringU5BU5D_t1642385972* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Xml.Schema.StringArrayValueType::get_Value()
extern "C"  StringU5BU5D_t1642385972* StringArrayValueType_get_Value_m1419787520 (StringArrayValueType_t1731700877 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.StringArrayValueType::Equals(System.Object)
extern "C"  bool StringArrayValueType_Equals_m1456450166 (StringArrayValueType_t1731700877 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.StringArrayValueType::GetHashCode()
extern "C"  int32_t StringArrayValueType_GetHashCode_m1500812434 (StringArrayValueType_t1731700877 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.StringArrayValueType::op_Equality(System.Xml.Schema.StringArrayValueType,System.Xml.Schema.StringArrayValueType)
extern "C"  bool StringArrayValueType_op_Equality_m2624054117 (Il2CppObject * __this /* static, unused */, StringArrayValueType_t1731700877  ___v10, StringArrayValueType_t1731700877  ___v21, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct StringArrayValueType_t1731700877;
struct StringArrayValueType_t1731700877_marshaled_pinvoke;

extern "C" void StringArrayValueType_t1731700877_marshal_pinvoke(const StringArrayValueType_t1731700877& unmarshaled, StringArrayValueType_t1731700877_marshaled_pinvoke& marshaled);
extern "C" void StringArrayValueType_t1731700877_marshal_pinvoke_back(const StringArrayValueType_t1731700877_marshaled_pinvoke& marshaled, StringArrayValueType_t1731700877& unmarshaled);
extern "C" void StringArrayValueType_t1731700877_marshal_pinvoke_cleanup(StringArrayValueType_t1731700877_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct StringArrayValueType_t1731700877;
struct StringArrayValueType_t1731700877_marshaled_com;

extern "C" void StringArrayValueType_t1731700877_marshal_com(const StringArrayValueType_t1731700877& unmarshaled, StringArrayValueType_t1731700877_marshaled_com& marshaled);
extern "C" void StringArrayValueType_t1731700877_marshal_com_back(const StringArrayValueType_t1731700877_marshaled_com& marshaled, StringArrayValueType_t1731700877& unmarshaled);
extern "C" void StringArrayValueType_t1731700877_marshal_com_cleanup(StringArrayValueType_t1731700877_marshaled_com& marshaled);
