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

// MiniJSON
struct MiniJSON_t13417349;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"
#include "mscorlib_System_Collections_Hashtable909839986.h"
#include "mscorlib_System_Collections_ArrayList4252133567.h"

// System.Void MiniJSON::.ctor()
extern "C"  void MiniJSON__ctor_m594024338 (MiniJSON_t13417349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MiniJSON::.cctor()
extern "C"  void MiniJSON__cctor_m2394020657 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MiniJSON::jsonDecode(System.String)
extern "C"  Il2CppObject * MiniJSON_jsonDecode_m4009725393 (Il2CppObject * __this /* static, unused */, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MiniJSON::jsonEncode(System.Object)
extern "C"  String_t* MiniJSON_jsonEncode_m289265411 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MiniJSON::lastDecodeSuccessful()
extern "C"  bool MiniJSON_lastDecodeSuccessful_m434430666 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MiniJSON::getLastErrorIndex()
extern "C"  int32_t MiniJSON_getLastErrorIndex_m2111732746 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MiniJSON::getLastErrorSnippet()
extern "C"  String_t* MiniJSON_getLastErrorSnippet_m777330542 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable MiniJSON::parseObject(System.Char[],System.Int32&)
extern "C"  Hashtable_t909839986 * MiniJSON_parseObject_m3665797739 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList MiniJSON::parseArray(System.Char[],System.Int32&)
extern "C"  ArrayList_t4252133567 * MiniJSON_parseArray_m675212996 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MiniJSON::parseValue(System.Char[],System.Int32&,System.Boolean&)
extern "C"  Il2CppObject * MiniJSON_parseValue_m4265534440 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, bool* ___success2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MiniJSON::parseString(System.Char[],System.Int32&)
extern "C"  String_t* MiniJSON_parseString_m3013405053 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double MiniJSON::parseNumber(System.Char[],System.Int32&)
extern "C"  double MiniJSON_parseNumber_m1701654851 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MiniJSON::getLastIndexOfNumber(System.Char[],System.Int32)
extern "C"  int32_t MiniJSON_getLastIndexOfNumber_m3816815422 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MiniJSON::eatWhitespace(System.Char[],System.Int32&)
extern "C"  void MiniJSON_eatWhitespace_m774271347 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MiniJSON::lookAhead(System.Char[],System.Int32)
extern "C"  int32_t MiniJSON_lookAhead_m3718350580 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MiniJSON::nextToken(System.Char[],System.Int32&)
extern "C"  int32_t MiniJSON_nextToken_m2954662562 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MiniJSON::serializeObjectOrArray(System.Object,System.Text.StringBuilder)
extern "C"  bool MiniJSON_serializeObjectOrArray_m2587230947 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___objectOrArray0, StringBuilder_t1221177846 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MiniJSON::serializeObject(System.Collections.Hashtable,System.Text.StringBuilder)
extern "C"  bool MiniJSON_serializeObject_m1818568413 (Il2CppObject * __this /* static, unused */, Hashtable_t909839986 * ___anObject0, StringBuilder_t1221177846 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MiniJSON::serializeDictionary(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Text.StringBuilder)
extern "C"  bool MiniJSON_serializeDictionary_m3089239931 (Il2CppObject * __this /* static, unused */, Dictionary_2_t3943999495 * ___dict0, StringBuilder_t1221177846 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MiniJSON::serializeArray(System.Collections.ArrayList,System.Text.StringBuilder)
extern "C"  bool MiniJSON_serializeArray_m4225324858 (Il2CppObject * __this /* static, unused */, ArrayList_t4252133567 * ___anArray0, StringBuilder_t1221177846 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MiniJSON::serializeValue(System.Object,System.Text.StringBuilder)
extern "C"  bool MiniJSON_serializeValue_m1383085505 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, StringBuilder_t1221177846 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MiniJSON::serializeString(System.String,System.Text.StringBuilder)
extern "C"  void MiniJSON_serializeString_m3886748015 (Il2CppObject * __this /* static, unused */, String_t* ___aString0, StringBuilder_t1221177846 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MiniJSON::serializeNumber(System.Double,System.Text.StringBuilder)
extern "C"  void MiniJSON_serializeNumber_m3945963269 (Il2CppObject * __this /* static, unused */, double ___number0, StringBuilder_t1221177846 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
