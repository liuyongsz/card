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

// System.Net.Cookie
struct Cookie_t3154017544;
// System.String
struct String_t;
// System.Uri
struct Uri_t19570940;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Net.Cookie::.ctor()
extern "C"  void Cookie__ctor_m1446200832 (Cookie_t3154017544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::.ctor(System.String,System.String)
extern "C"  void Cookie__ctor_m1989068482 (Cookie_t3154017544 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::.cctor()
extern "C"  void Cookie__cctor_m3187715567 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::get_Comment()
extern "C"  String_t* Cookie_get_Comment_m2183197327 (Cookie_t3154017544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Comment(System.String)
extern "C"  void Cookie_set_Comment_m1504498068 (Cookie_t3154017544 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.Cookie::get_CommentUri()
extern "C"  Uri_t19570940 * Cookie_get_CommentUri_m4105081148 (Cookie_t3154017544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_CommentUri(System.Uri)
extern "C"  void Cookie_set_CommentUri_m2880099413 (Cookie_t3154017544 * __this, Uri_t19570940 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Cookie::get_Discard()
extern "C"  bool Cookie_get_Discard_m4277637175 (Cookie_t3154017544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Discard(System.Boolean)
extern "C"  void Cookie_set_Discard_m8095924 (Cookie_t3154017544 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::get_Domain()
extern "C"  String_t* Cookie_get_Domain_m78058352 (Cookie_t3154017544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Domain(System.String)
extern "C"  void Cookie_set_Domain_m334320991 (Cookie_t3154017544 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Cookie::get_ExactDomain()
extern "C"  bool Cookie_get_ExactDomain_m3704355968 (Cookie_t3154017544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_ExactDomain(System.Boolean)
extern "C"  void Cookie_set_ExactDomain_m1681540717 (Cookie_t3154017544 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Cookie::get_Expired()
extern "C"  bool Cookie_get_Expired_m1519158270 (Cookie_t3154017544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.Cookie::get_Expires()
extern "C"  DateTime_t693205669  Cookie_get_Expires_m522897886 (Cookie_t3154017544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Expires(System.DateTime)
extern "C"  void Cookie_set_Expires_m1840037255 (Cookie_t3154017544 * __this, DateTime_t693205669  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Cookie::get_HttpOnly()
extern "C"  bool Cookie_get_HttpOnly_m252147641 (Cookie_t3154017544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_HttpOnly(System.Boolean)
extern "C"  void Cookie_set_HttpOnly_m2601679756 (Cookie_t3154017544 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::get_Name()
extern "C"  String_t* Cookie_get_Name_m892827391 (Cookie_t3154017544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Name(System.String)
extern "C"  void Cookie_set_Name_m143303530 (Cookie_t3154017544 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::get_Path()
extern "C"  String_t* Cookie_get_Path_m4051852505 (Cookie_t3154017544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Path(System.String)
extern "C"  void Cookie_set_Path_m3432117582 (Cookie_t3154017544 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::get_Port()
extern "C"  String_t* Cookie_get_Port_m3259286681 (Cookie_t3154017544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Port(System.String)
extern "C"  void Cookie_set_Port_m312020554 (Cookie_t3154017544 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Net.Cookie::get_Ports()
extern "C"  Int32U5BU5D_t3030399641* Cookie_get_Ports_m3110993987 (Cookie_t3154017544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Cookie::get_Secure()
extern "C"  bool Cookie_get_Secure_m3357936990 (Cookie_t3154017544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Secure(System.Boolean)
extern "C"  void Cookie_set_Secure_m2609176681 (Cookie_t3154017544 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.Cookie::get_TimeStamp()
extern "C"  DateTime_t693205669  Cookie_get_TimeStamp_m2398884362 (Cookie_t3154017544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::get_Value()
extern "C"  String_t* Cookie_get_Value_m2421772599 (Cookie_t3154017544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Value(System.String)
extern "C"  void Cookie_set_Value_m1671590012 (Cookie_t3154017544 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Cookie::get_Version()
extern "C"  int32_t Cookie_get_Version_m1900649029 (Cookie_t3154017544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Version(System.Int32)
extern "C"  void Cookie_set_Version_m1740254262 (Cookie_t3154017544 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Cookie::Equals(System.Object)
extern "C"  bool Cookie_Equals_m953158749 (Cookie_t3154017544 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Cookie::GetHashCode()
extern "C"  int32_t Cookie_GetHashCode_m2397790267 (Cookie_t3154017544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Cookie::hash(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t Cookie_hash_m3727374953 (Il2CppObject * __this /* static, unused */, int32_t ___i0, int32_t ___j1, int32_t ___k2, int32_t ___l3, int32_t ___m4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::ToString()
extern "C"  String_t* Cookie_ToString_m2088265195 (Cookie_t3154017544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::ToString(System.Uri)
extern "C"  String_t* Cookie_ToString_m4074255426 (Cookie_t3154017544 * __this, Uri_t19570940 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Cookie::IsNullOrEmpty(System.String)
extern "C"  bool Cookie_IsNullOrEmpty_m3107130375 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
