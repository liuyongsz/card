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

// ExitGames.Client.Photon.Chat.ChatChannel
struct ChatChannel_t2271943107;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void ExitGames.Client.Photon.Chat.ChatChannel::.ctor(System.String)
extern "C"  void ChatChannel__ctor_m953162524 (ChatChannel_t2271943107 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatChannel::get_IsPrivate()
extern "C"  bool ChatChannel_get_IsPrivate_m1407342408 (ChatChannel_t2271943107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatChannel::set_IsPrivate(System.Boolean)
extern "C"  void ChatChannel_set_IsPrivate_m994306591 (ChatChannel_t2271943107 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.Chat.ChatChannel::get_MessageCount()
extern "C"  int32_t ChatChannel_get_MessageCount_m4090041321 (ChatChannel_t2271943107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatChannel::Add(System.String,System.Object)
extern "C"  void ChatChannel_Add_m3926374227 (ChatChannel_t2271943107 * __this, String_t* ___sender0, Il2CppObject * ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatChannel::Add(System.String[],System.Object[])
extern "C"  void ChatChannel_Add_m2586718739 (ChatChannel_t2271943107 * __this, StringU5BU5D_t1642385972* ___senders0, ObjectU5BU5D_t3614634134* ___messages1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatChannel::TruncateMessages()
extern "C"  void ChatChannel_TruncateMessages_m1845613142 (ChatChannel_t2271943107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatChannel::ClearMessages()
extern "C"  void ChatChannel_ClearMessages_m4105226187 (ChatChannel_t2271943107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatChannel::ToStringMessages()
extern "C"  String_t* ChatChannel_ToStringMessages_m36443801 (ChatChannel_t2271943107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
