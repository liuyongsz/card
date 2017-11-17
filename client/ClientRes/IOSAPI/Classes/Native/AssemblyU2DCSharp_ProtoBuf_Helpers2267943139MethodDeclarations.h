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

// ProtoBuf.Helpers
struct Helpers_t2267943139;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t2851816542;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t1996683371;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4238939941;
// System.Reflection.MemberInfo
struct MemberInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Type1303803226.h"
#include "AssemblyU2DCSharp_ProtoBuf_ProtoTypeCode3296822465.h"
#include "mscorlib_System_Reflection_PropertyInfo2253729065.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260.h"

// System.Void ProtoBuf.Helpers::.ctor()
extern "C"  void Helpers__ctor_m3130552247 (Helpers_t2267943139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Helpers::.cctor()
extern "C"  void Helpers__cctor_m4291876854 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder ProtoBuf.Helpers::AppendLine(System.Text.StringBuilder)
extern "C"  StringBuilder_t1221177846 * Helpers_AppendLine_m422498410 (Il2CppObject * __this /* static, unused */, StringBuilder_t1221177846 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Helpers::IsNullOrEmpty(System.String)
extern "C"  bool Helpers_IsNullOrEmpty_m1774709686 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Helpers::DebugWriteLine(System.String,System.Object)
extern "C"  void Helpers_DebugWriteLine_m3561908793 (Il2CppObject * __this /* static, unused */, String_t* ___message0, Il2CppObject * ___obj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Helpers::DebugWriteLine(System.String)
extern "C"  void Helpers_DebugWriteLine_m3432947351 (Il2CppObject * __this /* static, unused */, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Helpers::TraceWriteLine(System.String)
extern "C"  void Helpers_TraceWriteLine_m3435251203 (Il2CppObject * __this /* static, unused */, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Helpers::DebugAssert(System.Boolean,System.String)
extern "C"  void Helpers_DebugAssert_m2557726613 (Il2CppObject * __this /* static, unused */, bool ___condition0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Helpers::DebugAssert(System.Boolean,System.String,System.Object[])
extern "C"  void Helpers_DebugAssert_m2567548565 (Il2CppObject * __this /* static, unused */, bool ___condition0, String_t* ___message1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Helpers::DebugAssert(System.Boolean)
extern "C"  void Helpers_DebugAssert_m1258985607 (Il2CppObject * __this /* static, unused */, bool ___condition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Helpers::Sort(System.Int32[],System.Object[])
extern "C"  void Helpers_Sort_m4233296460 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3030399641* ___keys0, ObjectU5BU5D_t3614634134* ___values1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Helpers::BlockCopy(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Int32)
extern "C"  void Helpers_BlockCopy_m4258432162 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___from0, int32_t ___fromIndex1, ByteU5BU5D_t3397334013* ___to2, int32_t ___toIndex3, int32_t ___count4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Helpers::IsInfinity(System.Single)
extern "C"  bool Helpers_IsInfinity_m3008022278 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo ProtoBuf.Helpers::GetInstanceMethod(System.Type,System.String)
extern "C"  MethodInfo_t * Helpers_GetInstanceMethod_m965577520 (Il2CppObject * __this /* static, unused */, Type_t * ___declaringType0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo ProtoBuf.Helpers::GetStaticMethod(System.Type,System.String)
extern "C"  MethodInfo_t * Helpers_GetStaticMethod_m4197495767 (Il2CppObject * __this /* static, unused */, Type_t * ___declaringType0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo ProtoBuf.Helpers::GetInstanceMethod(System.Type,System.String,System.Type[])
extern "C"  MethodInfo_t * Helpers_GetInstanceMethod_m2225949263 (Il2CppObject * __this /* static, unused */, Type_t * ___declaringType0, String_t* ___name1, TypeU5BU5D_t1664964607* ___types2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Helpers::IsSubclassOf(System.Type,System.Type)
extern "C"  bool Helpers_IsSubclassOf_m983349408 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, Type_t * ___baseClass1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Helpers::IsInfinity(System.Double)
extern "C"  bool Helpers_IsInfinity_m2930821057 (Il2CppObject * __this /* static, unused */, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.ProtoTypeCode ProtoBuf.Helpers::GetTypeCode(System.Type)
extern "C"  int32_t Helpers_GetTypeCode_m2212360402 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Helpers::GetUnderlyingType(System.Type)
extern "C"  Type_t * Helpers_GetUnderlyingType_m2454340763 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Helpers::IsValueType(System.Type)
extern "C"  bool Helpers_IsValueType_m3621628761 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Helpers::IsEnum(System.Type)
extern "C"  bool Helpers_IsEnum_m3389397685 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo ProtoBuf.Helpers::GetGetMethod(System.Reflection.PropertyInfo,System.Boolean,System.Boolean)
extern "C"  MethodInfo_t * Helpers_GetGetMethod_m204938027 (Il2CppObject * __this /* static, unused */, PropertyInfo_t * ___property0, bool ___nonPublic1, bool ___allowInternal2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo ProtoBuf.Helpers::GetSetMethod(System.Reflection.PropertyInfo,System.Boolean,System.Boolean)
extern "C"  MethodInfo_t * Helpers_GetSetMethod_m3872235927 (Il2CppObject * __this /* static, unused */, PropertyInfo_t * ___property0, bool ___nonPublic1, bool ___allowInternal2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo ProtoBuf.Helpers::GetConstructor(System.Type,System.Type[],System.Boolean)
extern "C"  ConstructorInfo_t2851816542 * Helpers_GetConstructor_m130397119 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, TypeU5BU5D_t1664964607* ___parameterTypes1, bool ___nonPublic2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] ProtoBuf.Helpers::GetConstructors(System.Type,System.Boolean)
extern "C"  ConstructorInfoU5BU5D_t1996683371* Helpers_GetConstructors_m1438405843 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, bool ___nonPublic1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo ProtoBuf.Helpers::GetProperty(System.Type,System.String,System.Boolean)
extern "C"  PropertyInfo_t * Helpers_GetProperty_m1271565956 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, String_t* ___name1, bool ___nonPublic2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Helpers::ParseEnum(System.Type,System.String)
extern "C"  Il2CppObject * Helpers_ParseEnum_m4252525937 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo[] ProtoBuf.Helpers::GetInstanceFieldsAndProperties(System.Type,System.Boolean)
extern "C"  MemberInfoU5BU5D_t4238939941* Helpers_GetInstanceFieldsAndProperties_m4078973614 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, bool ___publicOnly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Helpers::GetMemberType(System.Reflection.MemberInfo)
extern "C"  Type_t * Helpers_GetMemberType_m2846204421 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___member0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Helpers::IsAssignableFrom(System.Type,System.Type)
extern "C"  bool Helpers_IsAssignableFrom_m3576402586 (Il2CppObject * __this /* static, unused */, Type_t * ___target0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
