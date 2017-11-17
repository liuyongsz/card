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

// System.Security.Policy.CodeGroup
struct CodeGroup_t1856851900;
// System.String
struct String_t;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t373187562;
// System.Collections.IList
struct IList_t3321498491;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Security_Policy_CodeGroup1856851900.h"

// System.String System.Security.Policy.CodeGroup::get_Description()
extern "C"  String_t* CodeGroup_get_Description_m3858027485 (CodeGroup_t1856851900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.IMembershipCondition System.Security.Policy.CodeGroup::get_MembershipCondition()
extern "C"  Il2CppObject * CodeGroup_get_MembershipCondition_m381298989 (CodeGroup_t1856851900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.CodeGroup::get_Name()
extern "C"  String_t* CodeGroup_get_Name_m762940702 (CodeGroup_t1856851900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList System.Security.Policy.CodeGroup::get_Children()
extern "C"  Il2CppObject * CodeGroup_get_Children_m4076602301 (CodeGroup_t1856851900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.CodeGroup::Equals(System.Object)
extern "C"  bool CodeGroup_Equals_m2029023592 (CodeGroup_t1856851900 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.CodeGroup::Equals(System.Security.Policy.CodeGroup,System.Boolean)
extern "C"  bool CodeGroup_Equals_m2258580796 (CodeGroup_t1856851900 * __this, CodeGroup_t1856851900 * ___cg0, bool ___compareChildren1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.CodeGroup::GetHashCode()
extern "C"  int32_t CodeGroup_GetHashCode_m1843501624 (CodeGroup_t1856851900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
