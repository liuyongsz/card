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

// ProtoBuf.Serializers.BlobSerializer
struct BlobSerializer_t3101753013;
// ProtoBuf.Meta.TypeModel
struct TypeModel_t653695305;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// ProtoBuf.ProtoReader
struct ProtoReader_t3981212867;
// ProtoBuf.ProtoWriter
struct ProtoWriter_t2800220307;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_TypeModel653695305.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_ProtoBuf_ProtoReader3981212867.h"
#include "AssemblyU2DCSharp_ProtoBuf_ProtoWriter2800220307.h"

// System.Void ProtoBuf.Serializers.BlobSerializer::.ctor(ProtoBuf.Meta.TypeModel,System.Boolean)
extern "C"  void BlobSerializer__ctor_m3753067340 (BlobSerializer_t3101753013 * __this, TypeModel_t653695305 * ___model0, bool ___overwriteList1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.BlobSerializer::.cctor()
extern "C"  void BlobSerializer__cctor_m1295537767 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.BlobSerializer::ProtoBuf.Serializers.IProtoSerializer.get_RequiresOldValue()
extern "C"  bool BlobSerializer_ProtoBuf_Serializers_IProtoSerializer_get_RequiresOldValue_m2954491458 (BlobSerializer_t3101753013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.BlobSerializer::ProtoBuf.Serializers.IProtoSerializer.get_ReturnsValue()
extern "C"  bool BlobSerializer_ProtoBuf_Serializers_IProtoSerializer_get_ReturnsValue_m592211264 (BlobSerializer_t3101753013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.BlobSerializer::get_ExpectedType()
extern "C"  Type_t * BlobSerializer_get_ExpectedType_m589676991 (BlobSerializer_t3101753013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.BlobSerializer::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * BlobSerializer_Read_m3633017183 (BlobSerializer_t3101753013 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.BlobSerializer::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void BlobSerializer_Write_m1684449807 (BlobSerializer_t3101753013 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
