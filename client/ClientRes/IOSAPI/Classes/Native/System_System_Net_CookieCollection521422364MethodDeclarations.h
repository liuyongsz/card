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

// System.Net.CookieCollection
struct CookieCollection_t521422364;
// System.Collections.Generic.IList`1<System.Net.Cookie>
struct IList_1_t3694958145;
// System.Object
struct Il2CppObject;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Net.Cookie
struct Cookie_t3154017544;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "System_System_Net_Cookie3154017544.h"

// System.Void System.Net.CookieCollection::.ctor()
extern "C"  void CookieCollection__ctor_m1766956480 (CookieCollection_t521422364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieCollection::.cctor()
extern "C"  void CookieCollection__cctor_m1612480269 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Net.Cookie> System.Net.CookieCollection::get_List()
extern "C"  Il2CppObject* CookieCollection_get_List_m2326436043 (CookieCollection_t521422364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.CookieCollection::get_Count()
extern "C"  int32_t CookieCollection_get_Count_m2224755408 (CookieCollection_t521422364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.CookieCollection::get_IsSynchronized()
extern "C"  bool CookieCollection_get_IsSynchronized_m3152974947 (CookieCollection_t521422364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.CookieCollection::get_SyncRoot()
extern "C"  Il2CppObject * CookieCollection_get_SyncRoot_m121352699 (CookieCollection_t521422364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieCollection::CopyTo(System.Array,System.Int32)
extern "C"  void CookieCollection_CopyTo_m3467802731 (CookieCollection_t521422364 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Net.CookieCollection::GetEnumerator()
extern "C"  Il2CppObject * CookieCollection_GetEnumerator_m870936748 (CookieCollection_t521422364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieCollection::Add(System.Net.Cookie)
extern "C"  void CookieCollection_Add_m1645185609 (CookieCollection_t521422364 * __this, Cookie_t3154017544 * ___cookie0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieCollection::Sort()
extern "C"  void CookieCollection_Sort_m1952831886 (CookieCollection_t521422364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.CookieCollection::SearchCookie(System.Net.Cookie)
extern "C"  int32_t CookieCollection_SearchCookie_m3532173322 (CookieCollection_t521422364 * __this, Cookie_t3154017544 * ___cookie0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Cookie System.Net.CookieCollection::get_Item(System.Int32)
extern "C"  Cookie_t3154017544 * CookieCollection_get_Item_m1262022058 (CookieCollection_t521422364 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
