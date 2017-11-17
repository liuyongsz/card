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

// System.Net.NetworkInformation.UnicastIPAddressInformationImplCollection
struct UnicastIPAddressInformationImplCollection_t771061202;
// System.Net.NetworkInformation.UnicastIPAddressInformationCollection
struct UnicastIPAddressInformationCollection_t347163204;
// System.Collections.Generic.List`1<System.Net.IPAddress>
struct List_1_t769092855;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr2504060609.h"

// System.Void System.Net.NetworkInformation.UnicastIPAddressInformationImplCollection::.ctor(System.Boolean)
extern "C"  void UnicastIPAddressInformationImplCollection__ctor_m712826337 (UnicastIPAddressInformationImplCollection_t771061202 * __this, bool ___isReadOnly0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.UnicastIPAddressInformationImplCollection::.cctor()
extern "C"  void UnicastIPAddressInformationImplCollection__cctor_m1203684985 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.UnicastIPAddressInformationImplCollection::get_IsReadOnly()
extern "C"  bool UnicastIPAddressInformationImplCollection_get_IsReadOnly_m2535568495 (UnicastIPAddressInformationImplCollection_t771061202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.UnicastIPAddressInformationCollection System.Net.NetworkInformation.UnicastIPAddressInformationImplCollection::Win32FromUnicast(System.Int32,System.IntPtr)
extern "C"  UnicastIPAddressInformationCollection_t347163204 * UnicastIPAddressInformationImplCollection_Win32FromUnicast_m2628548674 (Il2CppObject * __this /* static, unused */, int32_t ___ifIndex0, IntPtr_t ___ptr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.UnicastIPAddressInformationCollection System.Net.NetworkInformation.UnicastIPAddressInformationImplCollection::LinuxFromList(System.Collections.Generic.List`1<System.Net.IPAddress>)
extern "C"  UnicastIPAddressInformationCollection_t347163204 * UnicastIPAddressInformationImplCollection_LinuxFromList_m1985813080 (Il2CppObject * __this /* static, unused */, List_1_t769092855 * ___addresses0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
