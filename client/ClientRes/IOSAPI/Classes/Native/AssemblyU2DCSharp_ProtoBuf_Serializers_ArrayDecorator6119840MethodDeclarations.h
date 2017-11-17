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

// ProtoBuf.Serializers.ArrayDecorator
struct ArrayDecorator_t6119840;
// ProtoBuf.Meta.TypeModel
struct TypeModel_t653695305;
// ProtoBuf.Serializers.IProtoSerializer
struct IProtoSerializer_t4095188737;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// ProtoBuf.ProtoWriter
struct ProtoWriter_t2800220307;
// ProtoBuf.ProtoReader
struct ProtoReader_t3981212867;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_TypeModel653695305.h"
#include "AssemblyU2DCSharp_ProtoBuf_WireType4172783757.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_ProtoBuf_ProtoWriter2800220307.h"
#include "AssemblyU2DCSharp_ProtoBuf_ProtoReader3981212867.h"

// System.Void ProtoBuf.Serializers.ArrayDecorator::.ctor(ProtoBuf.Meta.TypeModel,ProtoBuf.Serializers.IProtoSerializer,System.Int32,System.Boolean,ProtoBuf.WireType,System.Type,System.Boolean,System.Boolean)
extern "C"  void ArrayDecorator__ctor_m938898294 (ArrayDecorator_t6119840 * __this, TypeModel_t653695305 * ___model0, Il2CppObject * ___tail1, int32_t ___fieldNumber2, bool ___writePacked3, int32_t ___packedWireType4, Type_t * ___arrayType5, bool ___overwriteList6, bool ___supportNull7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.ArrayDecorator::get_ExpectedType()
extern "C"  Type_t * ArrayDecorator_get_ExpectedType_m3995232948 (ArrayDecorator_t6119840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.ArrayDecorator::get_RequiresOldValue()
extern "C"  bool ArrayDecorator_get_RequiresOldValue_m2616457654 (ArrayDecorator_t6119840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.ArrayDecorator::get_ReturnsValue()
extern "C"  bool ArrayDecorator_get_ReturnsValue_m972115652 (ArrayDecorator_t6119840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.ArrayDecorator::get_AppendToCollection()
extern "C"  bool ArrayDecorator_get_AppendToCollection_m503263331 (ArrayDecorator_t6119840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.ArrayDecorator::get_SupportNull()
extern "C"  bool ArrayDecorator_get_SupportNull_m2307849260 (ArrayDecorator_t6119840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.ArrayDecorator::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void ArrayDecorator_Write_m765049474 (ArrayDecorator_t6119840 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.ArrayDecorator::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * ArrayDecorator_Read_m1529810772 (ArrayDecorator_t6119840 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
