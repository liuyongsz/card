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

// LoginProxy
struct LoginProxy_t1514699309;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void LoginProxy::.ctor()
extern "C"  void LoginProxy__ctor_m977870022 (LoginProxy_t1514699309 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginProxy::SendLogin(System.String,System.String)
extern "C"  void LoginProxy_SendLogin_m1136257259 (LoginProxy_t1514699309 * __this, String_t* ___account0, String_t* ___pwd1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginProxy::OnRecLogin(System.Object)
extern "C"  void LoginProxy_OnRecLogin_m3604135350 (LoginProxy_t1514699309 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginProxy::SendRegisterAccount(System.String,System.String)
extern "C"  void LoginProxy_SendRegisterAccount_m2826602746 (LoginProxy_t1514699309 * __this, String_t* ___account0, String_t* ___pwd1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginProxy::OnRecRegister(System.Object)
extern "C"  void LoginProxy_OnRecRegister_m4135064390 (LoginProxy_t1514699309 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginProxy::CreateAvatar(System.String)
extern "C"  void LoginProxy_CreateAvatar_m1482542639 (LoginProxy_t1514699309 * __this, String_t* ___myName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginProxy::onCreateAvatarFail()
extern "C"  void LoginProxy_onCreateAvatarFail_m2909873464 (LoginProxy_t1514699309 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginProxy::onLoginFailed(System.UInt16)
extern "C"  void LoginProxy_onLoginFailed_m3466508903 (LoginProxy_t1514699309 * __this, uint16_t ___failedcode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginProxy::onVersionNotMatch(System.String,System.String)
extern "C"  void LoginProxy_onVersionNotMatch_m1349355725 (LoginProxy_t1514699309 * __this, String_t* ___verInfo0, String_t* ___serVerInfo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginProxy::onScriptVersionNotMatch(System.String,System.String)
extern "C"  void LoginProxy_onScriptVersionNotMatch_m1369961264 (LoginProxy_t1514699309 * __this, String_t* ___verInfo0, String_t* ___serVerInfo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginProxy::onLoginBaseappFailed(System.UInt16)
extern "C"  void LoginProxy_onLoginBaseappFailed_m541593283 (LoginProxy_t1514699309 * __this, uint16_t ___failedcode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginProxy::onLoginBaseapp()
extern "C"  void LoginProxy_onLoginBaseapp_m1540916634 (LoginProxy_t1514699309 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginProxy::Loginapp_importClientMessages()
extern "C"  void LoginProxy_Loginapp_importClientMessages_m1003241853 (LoginProxy_t1514699309 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginProxy::Baseapp_importClientMessages()
extern "C"  void LoginProxy_Baseapp_importClientMessages_m3895957475 (LoginProxy_t1514699309 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginProxy::Baseapp_importClientEntityDef()
extern "C"  void LoginProxy_Baseapp_importClientEntityDef_m871955207 (LoginProxy_t1514699309 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginProxy::selectAvatarGame(System.UInt64)
extern "C"  void LoginProxy_selectAvatarGame_m2397782 (LoginProxy_t1514699309 * __this, uint64_t ___dbid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginProxy::err(System.String)
extern "C"  void LoginProxy_err_m1888201547 (LoginProxy_t1514699309 * __this, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginProxy::info(System.String)
extern "C"  void LoginProxy_info_m1870716418 (LoginProxy_t1514699309 * __this, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
