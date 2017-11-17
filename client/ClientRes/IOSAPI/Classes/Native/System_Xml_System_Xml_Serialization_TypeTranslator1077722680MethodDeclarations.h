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

// System.Xml.Serialization.TypeData
struct TypeData_t3979356678;
// System.Type
struct Type_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Xml.Serialization.TypeTranslator::.cctor()
extern "C"  void TypeTranslator__cctor_m2258459632 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeTranslator::GetTypeData(System.Type)
extern "C"  TypeData_t3979356678 * TypeTranslator_GetTypeData_m3234098793 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeTranslator::GetTypeData(System.Type,System.String)
extern "C"  TypeData_t3979356678 * TypeTranslator_GetTypeData_m1571001215 (Il2CppObject * __this /* static, unused */, Type_t * ___runtimeType0, String_t* ___xmlDataType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeTranslator::GetPrimitiveTypeData(System.String)
extern "C"  TypeData_t3979356678 * TypeTranslator_GetPrimitiveTypeData_m3911685165 (Il2CppObject * __this /* static, unused */, String_t* ___typeName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeTranslator::GetPrimitiveTypeData(System.String,System.Boolean)
extern "C"  TypeData_t3979356678 * TypeTranslator_GetPrimitiveTypeData_m1330038224 (Il2CppObject * __this /* static, unused */, String_t* ___typeName0, bool ___nullable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.TypeTranslator::GetArrayName(System.String)
extern "C"  String_t* TypeTranslator_GetArrayName_m4143743562 (Il2CppObject * __this /* static, unused */, String_t* ___elemName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.TypeTranslator::ParseArrayType(System.String,System.String&,System.String&,System.String&)
extern "C"  void TypeTranslator_ParseArrayType_m1669459325 (Il2CppObject * __this /* static, unused */, String_t* ___arrayType0, String_t** ___type1, String_t** ___ns2, String_t** ___dimensions3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
