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

// ExitGames.Client.Photon.Chat.AuthenticationValues
struct AuthenticationValues_t1914595372;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_ExitGames_Client_Photon_Chat_Cus2359342945.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::.ctor()
extern "C"  void AuthenticationValues__ctor_m1721967983 (AuthenticationValues_t1914595372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::.ctor(System.String)
extern "C"  void AuthenticationValues__ctor_m634291237 (AuthenticationValues_t1914595372 * __this, String_t* ___userId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Chat.CustomAuthenticationType ExitGames.Client.Photon.Chat.AuthenticationValues::get_AuthType()
extern "C"  uint8_t AuthenticationValues_get_AuthType_m2039216006 (AuthenticationValues_t1914595372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::set_AuthType(ExitGames.Client.Photon.Chat.CustomAuthenticationType)
extern "C"  void AuthenticationValues_set_AuthType_m1254644169 (AuthenticationValues_t1914595372 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.AuthenticationValues::get_AuthGetParameters()
extern "C"  String_t* AuthenticationValues_get_AuthGetParameters_m4214395711 (AuthenticationValues_t1914595372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::set_AuthGetParameters(System.String)
extern "C"  void AuthenticationValues_set_AuthGetParameters_m2466202820 (AuthenticationValues_t1914595372 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.Chat.AuthenticationValues::get_AuthPostData()
extern "C"  Il2CppObject * AuthenticationValues_get_AuthPostData_m19173391 (AuthenticationValues_t1914595372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::set_AuthPostData(System.Object)
extern "C"  void AuthenticationValues_set_AuthPostData_m2158934526 (AuthenticationValues_t1914595372 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.AuthenticationValues::get_Token()
extern "C"  String_t* AuthenticationValues_get_Token_m4181618720 (AuthenticationValues_t1914595372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::set_Token(System.String)
extern "C"  void AuthenticationValues_set_Token_m1796207763 (AuthenticationValues_t1914595372 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.AuthenticationValues::get_UserId()
extern "C"  String_t* AuthenticationValues_get_UserId_m1474899419 (AuthenticationValues_t1914595372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::set_UserId(System.String)
extern "C"  void AuthenticationValues_set_UserId_m1411893262 (AuthenticationValues_t1914595372 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::SetAuthPostData(System.String)
extern "C"  void AuthenticationValues_SetAuthPostData_m2982824395 (AuthenticationValues_t1914595372 * __this, String_t* ___stringData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::SetAuthPostData(System.Byte[])
extern "C"  void AuthenticationValues_SetAuthPostData_m1956838486 (AuthenticationValues_t1914595372 * __this, ByteU5BU5D_t3397334013* ___byteData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::AddAuthParameter(System.String,System.String)
extern "C"  void AuthenticationValues_AddAuthParameter_m4127111783 (AuthenticationValues_t1914595372 * __this, String_t* ___key0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.AuthenticationValues::ToString()
extern "C"  String_t* AuthenticationValues_ToString_m4015052972 (AuthenticationValues_t1914595372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
