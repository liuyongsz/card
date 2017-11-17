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

// System.Xml.NameTable
struct NameTable_t594386929;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t1328083999;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Xml.NameTable::.ctor()
extern "C"  void NameTable__ctor_m2766031050 (NameTable_t594386929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.NameTable::Add(System.Char[],System.Int32,System.Int32)
extern "C"  String_t* NameTable_Add_m2683675601 (NameTable_t594386929 * __this, CharU5BU5D_t1328083999* ___key0, int32_t ___start1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.NameTable::Add(System.String)
extern "C"  String_t* NameTable_Add_m1544108680 (NameTable_t594386929 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.NameTable::Get(System.String)
extern "C"  String_t* NameTable_Get_m3292887033 (NameTable_t594386929 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.NameTable::AddEntry(System.String,System.Int32)
extern "C"  String_t* NameTable_AddEntry_m3041888627 (NameTable_t594386929 * __this, String_t* ___str0, int32_t ___hash1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.NameTable::StrEqArray(System.String,System.Char[],System.Int32)
extern "C"  bool NameTable_StrEqArray_m4168086756 (Il2CppObject * __this /* static, unused */, String_t* ___str0, CharU5BU5D_t1328083999* ___str21, int32_t ___start2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
