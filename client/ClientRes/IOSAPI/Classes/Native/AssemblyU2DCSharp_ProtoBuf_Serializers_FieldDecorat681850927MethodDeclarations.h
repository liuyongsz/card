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

// ProtoBuf.Serializers.FieldDecorator
struct FieldDecorator_t681850927;
// System.Type
struct Type_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// ProtoBuf.Serializers.IProtoSerializer
struct IProtoSerializer_t4095188737;
// System.Object
struct Il2CppObject;
// ProtoBuf.ProtoWriter
struct ProtoWriter_t2800220307;
// ProtoBuf.ProtoReader
struct ProtoReader_t3981212867;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Reflection_FieldInfo255040150.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_ProtoBuf_ProtoWriter2800220307.h"
#include "AssemblyU2DCSharp_ProtoBuf_ProtoReader3981212867.h"

// System.Void ProtoBuf.Serializers.FieldDecorator::.ctor(System.Type,System.Reflection.FieldInfo,ProtoBuf.Serializers.IProtoSerializer)
extern "C"  void FieldDecorator__ctor_m264454394 (FieldDecorator_t681850927 * __this, Type_t * ___forType0, FieldInfo_t * ___field1, Il2CppObject * ___tail2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.FieldDecorator::get_ExpectedType()
extern "C"  Type_t * FieldDecorator_get_ExpectedType_m4191427461 (FieldDecorator_t681850927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.FieldDecorator::get_RequiresOldValue()
extern "C"  bool FieldDecorator_get_RequiresOldValue_m1635128441 (FieldDecorator_t681850927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.FieldDecorator::get_ReturnsValue()
extern "C"  bool FieldDecorator_get_ReturnsValue_m1802052977 (FieldDecorator_t681850927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.FieldDecorator::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void FieldDecorator_Write_m2195599369 (FieldDecorator_t681850927 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.FieldDecorator::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * FieldDecorator_Read_m2048029497 (FieldDecorator_t681850927 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
