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

// ProtoBuf.Meta.TypeFormatEventArgs
struct TypeFormatEventArgs_t4044138402;
// System.String
struct String_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void ProtoBuf.Meta.TypeFormatEventArgs::.ctor(System.String)
extern "C"  void TypeFormatEventArgs__ctor_m2554290039 (TypeFormatEventArgs_t4044138402 * __this, String_t* ___formattedName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.TypeFormatEventArgs::.ctor(System.Type)
extern "C"  void TypeFormatEventArgs__ctor_m1633354972 (TypeFormatEventArgs_t4044138402 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Meta.TypeFormatEventArgs::get_Type()
extern "C"  Type_t * TypeFormatEventArgs_get_Type_m1778788308 (TypeFormatEventArgs_t4044138402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.TypeFormatEventArgs::set_Type(System.Type)
extern "C"  void TypeFormatEventArgs_set_Type_m3151369943 (TypeFormatEventArgs_t4044138402 * __this, Type_t * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ProtoBuf.Meta.TypeFormatEventArgs::get_FormattedName()
extern "C"  String_t* TypeFormatEventArgs_get_FormattedName_m848570562 (TypeFormatEventArgs_t4044138402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.TypeFormatEventArgs::set_FormattedName(System.String)
extern "C"  void TypeFormatEventArgs_set_FormattedName_m4196580191 (TypeFormatEventArgs_t4044138402 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
