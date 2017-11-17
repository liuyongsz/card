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

// ProtoBuf.Serializers.ImmutableCollectionDecorator
struct ImmutableCollectionDecorator_t373967941;
// ProtoBuf.Meta.TypeModel
struct TypeModel_t653695305;
// System.Type
struct Type_t;
// ProtoBuf.Serializers.IProtoSerializer
struct IProtoSerializer_t4095188737;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object
struct Il2CppObject;
// ProtoBuf.ProtoReader
struct ProtoReader_t3981212867;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ProtoBuf_Meta_TypeModel653695305.h"
#include "mscorlib_System_Type1303803226.h"
#include "AssemblyU2DCSharp_ProtoBuf_WireType4172783757.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_ProtoBuf_ProtoReader3981212867.h"

// System.Void ProtoBuf.Serializers.ImmutableCollectionDecorator::.ctor(ProtoBuf.Meta.TypeModel,System.Type,System.Type,ProtoBuf.Serializers.IProtoSerializer,System.Int32,System.Boolean,ProtoBuf.WireType,System.Boolean,System.Boolean,System.Boolean,System.Reflection.MethodInfo,System.Reflection.MethodInfo,System.Reflection.MethodInfo,System.Reflection.MethodInfo)
extern "C"  void ImmutableCollectionDecorator__ctor_m2439284635 (ImmutableCollectionDecorator_t373967941 * __this, TypeModel_t653695305 * ___model0, Type_t * ___declaredType1, Type_t * ___concreteType2, Il2CppObject * ___tail3, int32_t ___fieldNumber4, bool ___writePacked5, int32_t ___packedWireType6, bool ___returnList7, bool ___overwriteList8, bool ___supportNull9, MethodInfo_t * ___builderFactory10, MethodInfo_t * ___add11, MethodInfo_t * ___addRange12, MethodInfo_t * ___finish13, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.ImmutableCollectionDecorator::get_RequireAdd()
extern "C"  bool ImmutableCollectionDecorator_get_RequireAdd_m3706803761 (ImmutableCollectionDecorator_t373967941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.ImmutableCollectionDecorator::ResolveIReadOnlyCollection(System.Type,System.Type)
extern "C"  Type_t * ImmutableCollectionDecorator_ResolveIReadOnlyCollection_m1266619773 (Il2CppObject * __this /* static, unused */, Type_t * ___declaredType0, Type_t * ___t1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.ImmutableCollectionDecorator::IdentifyImmutable(ProtoBuf.Meta.TypeModel,System.Type,System.Reflection.MethodInfo&,System.Reflection.MethodInfo&,System.Reflection.MethodInfo&,System.Reflection.MethodInfo&)
extern "C"  bool ImmutableCollectionDecorator_IdentifyImmutable_m3983925286 (Il2CppObject * __this /* static, unused */, TypeModel_t653695305 * ___model0, Type_t * ___declaredType1, MethodInfo_t ** ___builderFactory2, MethodInfo_t ** ___add3, MethodInfo_t ** ___addRange4, MethodInfo_t ** ___finish5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.ImmutableCollectionDecorator::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * ImmutableCollectionDecorator_Read_m16654927 (ImmutableCollectionDecorator_t373967941 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
