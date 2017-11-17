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

// ProtoBuf.Meta.RuntimeTypeModel/BasicType
struct BasicType_t4150938584;
// System.Type
struct Type_t;
// ProtoBuf.Serializers.IProtoSerializer
struct IProtoSerializer_t4095188737;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void ProtoBuf.Meta.RuntimeTypeModel/BasicType::.ctor(System.Type,ProtoBuf.Serializers.IProtoSerializer)
extern "C"  void BasicType__ctor_m2430640063 (BasicType_t4150938584 * __this, Type_t * ___type0, Il2CppObject * ___serializer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Meta.RuntimeTypeModel/BasicType::get_Type()
extern "C"  Type_t * BasicType_get_Type_m2828257664 (BasicType_t4150938584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Serializers.IProtoSerializer ProtoBuf.Meta.RuntimeTypeModel/BasicType::get_Serializer()
extern "C"  Il2CppObject * BasicType_get_Serializer_m142709468 (BasicType_t4150938584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
