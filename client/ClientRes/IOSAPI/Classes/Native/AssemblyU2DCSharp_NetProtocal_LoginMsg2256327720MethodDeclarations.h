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

// NetProtocal.LoginMsg
struct LoginMsg_t2256327720;
// ProtoBuf.IExtension
struct IExtension_t1221360786;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void NetProtocal.LoginMsg::.ctor()
extern "C"  void LoginMsg__ctor_m2840349366 (LoginMsg_t2256327720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.IExtension NetProtocal.LoginMsg::ProtoBuf.IExtensible.GetExtensionObject(System.Boolean)
extern "C"  Il2CppObject * LoginMsg_ProtoBuf_IExtensible_GetExtensionObject_m3149817350 (LoginMsg_t2256327720 * __this, bool ___createIfMissing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetProtocal.LoginMsg::get_accountId()
extern "C"  String_t* LoginMsg_get_accountId_m380007984 (LoginMsg_t2256327720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetProtocal.LoginMsg::set_accountId(System.String)
extern "C"  void LoginMsg_set_accountId_m116296319 (LoginMsg_t2256327720 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetProtocal.LoginMsg::get_accountPwd()
extern "C"  String_t* LoginMsg_get_accountPwd_m755211714 (LoginMsg_t2256327720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetProtocal.LoginMsg::set_accountPwd(System.String)
extern "C"  void LoginMsg_set_accountPwd_m3963028445 (LoginMsg_t2256327720 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
