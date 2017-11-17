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

// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.Collections.ArrayList
struct ArrayList_t4252133567;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Hashtable909839986.h"
#include "mscorlib_System_String2029220233.h"

// System.String MiniJsonExtensions::toJson(System.Collections.Hashtable)
extern "C"  String_t* MiniJsonExtensions_toJson_m4112915872 (Il2CppObject * __this /* static, unused */, Hashtable_t909839986 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MiniJsonExtensions::toJson(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  String_t* MiniJsonExtensions_toJson_m1713925821 (Il2CppObject * __this /* static, unused */, Dictionary_2_t3943999495 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList MiniJsonExtensions::arrayListFromJson(System.String)
extern "C"  ArrayList_t4252133567 * MiniJsonExtensions_arrayListFromJson_m1150186935 (Il2CppObject * __this /* static, unused */, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable MiniJsonExtensions::hashtableFromJson(System.String)
extern "C"  Hashtable_t909839986 * MiniJsonExtensions_hashtableFromJson_m3028774807 (Il2CppObject * __this /* static, unused */, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
