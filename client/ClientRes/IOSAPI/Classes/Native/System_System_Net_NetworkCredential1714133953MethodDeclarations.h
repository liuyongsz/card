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

// System.Net.NetworkCredential
struct NetworkCredential_t1714133953;
// System.String
struct String_t;
// System.Uri
struct Uri_t19570940;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_String2029220233.h"

// System.String System.Net.NetworkCredential::get_Domain()
extern "C"  String_t* NetworkCredential_get_Domain_m2892408761 (NetworkCredential_t1714133953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkCredential::get_UserName()
extern "C"  String_t* NetworkCredential_get_UserName_m1552968607 (NetworkCredential_t1714133953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkCredential::get_Password()
extern "C"  String_t* NetworkCredential_get_Password_m2037205148 (NetworkCredential_t1714133953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkCredential System.Net.NetworkCredential::GetCredential(System.Uri,System.String)
extern "C"  NetworkCredential_t1714133953 * NetworkCredential_GetCredential_m1819519067 (NetworkCredential_t1714133953 * __this, Uri_t19570940 * ___uri0, String_t* ___authType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
