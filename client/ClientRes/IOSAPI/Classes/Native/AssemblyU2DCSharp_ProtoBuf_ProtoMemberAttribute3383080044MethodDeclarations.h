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

// ProtoBuf.ProtoMemberAttribute
struct ProtoMemberAttribute_t3383080044;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_ProtoBuf_ProtoMemberAttribute3383080044.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_ProtoBuf_DataFormat1866125683.h"
#include "AssemblyU2DCSharp_ProtoBuf_MemberSerializationOpti1047673488.h"

// System.Void ProtoBuf.ProtoMemberAttribute::.ctor(System.Int32)
extern "C"  void ProtoMemberAttribute__ctor_m1510344497 (ProtoMemberAttribute_t3383080044 * __this, int32_t ___tag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoMemberAttribute::.ctor(System.Int32,System.Boolean)
extern "C"  void ProtoMemberAttribute__ctor_m1212150934 (ProtoMemberAttribute_t3383080044 * __this, int32_t ___tag0, bool ___forced1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.ProtoMemberAttribute::CompareTo(System.Object)
extern "C"  int32_t ProtoMemberAttribute_CompareTo_m2260389574 (ProtoMemberAttribute_t3383080044 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.ProtoMemberAttribute::CompareTo(ProtoBuf.ProtoMemberAttribute)
extern "C"  int32_t ProtoMemberAttribute_CompareTo_m3018720613 (ProtoMemberAttribute_t3383080044 * __this, ProtoMemberAttribute_t3383080044 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ProtoBuf.ProtoMemberAttribute::get_Name()
extern "C"  String_t* ProtoMemberAttribute_get_Name_m2626426007 (ProtoMemberAttribute_t3383080044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoMemberAttribute::set_Name(System.String)
extern "C"  void ProtoMemberAttribute_set_Name_m3306205412 (ProtoMemberAttribute_t3383080044 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.DataFormat ProtoBuf.ProtoMemberAttribute::get_DataFormat()
extern "C"  int32_t ProtoMemberAttribute_get_DataFormat_m1155982799 (ProtoMemberAttribute_t3383080044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoMemberAttribute::set_DataFormat(ProtoBuf.DataFormat)
extern "C"  void ProtoMemberAttribute_set_DataFormat_m3547711072 (ProtoMemberAttribute_t3383080044 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.ProtoMemberAttribute::get_Tag()
extern "C"  int32_t ProtoMemberAttribute_get_Tag_m45491017 (ProtoMemberAttribute_t3383080044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoMemberAttribute::Rebase(System.Int32)
extern "C"  void ProtoMemberAttribute_Rebase_m3115992595 (ProtoMemberAttribute_t3383080044 * __this, int32_t ___tag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.ProtoMemberAttribute::get_IsRequired()
extern "C"  bool ProtoMemberAttribute_get_IsRequired_m1195158210 (ProtoMemberAttribute_t3383080044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoMemberAttribute::set_IsRequired(System.Boolean)
extern "C"  void ProtoMemberAttribute_set_IsRequired_m3334918005 (ProtoMemberAttribute_t3383080044 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.ProtoMemberAttribute::get_IsPacked()
extern "C"  bool ProtoMemberAttribute_get_IsPacked_m4291950995 (ProtoMemberAttribute_t3383080044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoMemberAttribute::set_IsPacked(System.Boolean)
extern "C"  void ProtoMemberAttribute_set_IsPacked_m3987765296 (ProtoMemberAttribute_t3383080044 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.ProtoMemberAttribute::get_OverwriteList()
extern "C"  bool ProtoMemberAttribute_get_OverwriteList_m908458186 (ProtoMemberAttribute_t3383080044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoMemberAttribute::set_OverwriteList(System.Boolean)
extern "C"  void ProtoMemberAttribute_set_OverwriteList_m328444975 (ProtoMemberAttribute_t3383080044 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.ProtoMemberAttribute::get_AsReference()
extern "C"  bool ProtoMemberAttribute_get_AsReference_m1108546210 (ProtoMemberAttribute_t3383080044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoMemberAttribute::set_AsReference(System.Boolean)
extern "C"  void ProtoMemberAttribute_set_AsReference_m1150670583 (ProtoMemberAttribute_t3383080044 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.ProtoMemberAttribute::get_AsReferenceHasValue()
extern "C"  bool ProtoMemberAttribute_get_AsReferenceHasValue_m522753129 (ProtoMemberAttribute_t3383080044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoMemberAttribute::set_AsReferenceHasValue(System.Boolean)
extern "C"  void ProtoMemberAttribute_set_AsReferenceHasValue_m3397049784 (ProtoMemberAttribute_t3383080044 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.ProtoMemberAttribute::get_DynamicType()
extern "C"  bool ProtoMemberAttribute_get_DynamicType_m579334710 (ProtoMemberAttribute_t3383080044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoMemberAttribute::set_DynamicType(System.Boolean)
extern "C"  void ProtoMemberAttribute_set_DynamicType_m2461201747 (ProtoMemberAttribute_t3383080044 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.MemberSerializationOptions ProtoBuf.ProtoMemberAttribute::get_Options()
extern "C"  int32_t ProtoMemberAttribute_get_Options_m3978262337 (ProtoMemberAttribute_t3383080044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoMemberAttribute::set_Options(ProtoBuf.MemberSerializationOptions)
extern "C"  void ProtoMemberAttribute_set_Options_m3749229146 (ProtoMemberAttribute_t3383080044 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
