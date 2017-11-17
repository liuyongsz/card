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

// ExitGames.Client.Photon.Chat.ChatClient
struct ChatClient_t3457972569;
// ExitGames.Client.Photon.Chat.IChatClientListener
struct IChatClientListener_t3071226232;
// System.String
struct String_t;
// ExitGames.Client.Photon.EventData
struct EventData_t126381822;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t3648537128;
// ExitGames.Client.Photon.Chat.AuthenticationValues
struct AuthenticationValues_t1914595372;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Object
struct Il2CppObject;
// ExitGames.Client.Photon.Chat.ChatChannel
struct ChatChannel_t2271943107;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP3211808698.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel980888449.h"
#include "mscorlib_System_String2029220233.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_EventData126381822.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_OperationRe3648537128.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_StatusCode2706638303.h"
#include "AssemblyU2DCSharp_ExitGames_Client_Photon_Chat_Cha2365316599.h"
#include "AssemblyU2DCSharp_ExitGames_Client_Photon_Chat_Cha2300720745.h"
#include "AssemblyU2DCSharp_ExitGames_Client_Photon_Chat_Aut1914595372.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_ExitGames_Client_Photon_Chat_Cha2271943107.h"

// System.Void ExitGames.Client.Photon.Chat.ChatClient::.ctor(ExitGames.Client.Photon.Chat.IChatClientListener,ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  void ChatClient__ctor_m756009990 (ChatClient_t3457972569 * __this, Il2CppObject * ___listener0, uint8_t ___protocol1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
extern "C"  void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_DebugReturn_m1367414191 (ChatClient_t3457972569 * __this, uint8_t ___level0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.OnEvent(ExitGames.Client.Photon.EventData)
extern "C"  void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnEvent_m2165005796 (ChatClient_t3457972569 * __this, EventData_t126381822 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.OnOperationResponse(ExitGames.Client.Photon.OperationResponse)
extern "C"  void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnOperationResponse_m1451152948 (ChatClient_t3457972569 * __this, OperationResponse_t3648537128 * ___operationResponse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.OnStatusChanged(ExitGames.Client.Photon.StatusCode)
extern "C"  void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnStatusChanged_m3707143479 (ChatClient_t3457972569 * __this, int32_t ___statusCode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatClient::get_NameServerAddress()
extern "C"  String_t* ChatClient_get_NameServerAddress_m2001159952 (ChatClient_t3457972569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_NameServerAddress(System.String)
extern "C"  void ChatClient_set_NameServerAddress_m1109998787 (ChatClient_t3457972569 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatClient::get_FrontendAddress()
extern "C"  String_t* ChatClient_get_FrontendAddress_m3727726108 (ChatClient_t3457972569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_FrontendAddress(System.String)
extern "C"  void ChatClient_set_FrontendAddress_m2102763783 (ChatClient_t3457972569 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatClient::get_ChatRegion()
extern "C"  String_t* ChatClient_get_ChatRegion_m2488025712 (ChatClient_t3457972569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_ChatRegion(System.String)
extern "C"  void ChatClient_set_ChatRegion_m3104544577 (ChatClient_t3457972569 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Chat.ChatState ExitGames.Client.Photon.Chat.ChatClient::get_State()
extern "C"  int32_t ChatClient_get_State_m1428347724 (ChatClient_t3457972569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_State(ExitGames.Client.Photon.Chat.ChatState)
extern "C"  void ChatClient_set_State_m559464463 (ChatClient_t3457972569 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Chat.ChatDisconnectCause ExitGames.Client.Photon.Chat.ChatClient::get_DisconnectedCause()
extern "C"  int32_t ChatClient_get_DisconnectedCause_m421205049 (ChatClient_t3457972569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_DisconnectedCause(ExitGames.Client.Photon.Chat.ChatDisconnectCause)
extern "C"  void ChatClient_set_DisconnectedCause_m1766927052 (ChatClient_t3457972569 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::get_CanChat()
extern "C"  bool ChatClient_get_CanChat_m3008676379 (ChatClient_t3457972569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::get_HasPeer()
extern "C"  bool ChatClient_get_HasPeer_m262391993 (ChatClient_t3457972569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatClient::get_AppVersion()
extern "C"  String_t* ChatClient_get_AppVersion_m3709663811 (ChatClient_t3457972569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_AppVersion(System.String)
extern "C"  void ChatClient_set_AppVersion_m3901210886 (ChatClient_t3457972569 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatClient::get_AppId()
extern "C"  String_t* ChatClient_get_AppId_m2006520702 (ChatClient_t3457972569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_AppId(System.String)
extern "C"  void ChatClient_set_AppId_m467550511 (ChatClient_t3457972569 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Chat.AuthenticationValues ExitGames.Client.Photon.Chat.ChatClient::get_AuthValues()
extern "C"  AuthenticationValues_t1914595372 * ChatClient_get_AuthValues_m4221392546 (ChatClient_t3457972569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_AuthValues(ExitGames.Client.Photon.Chat.AuthenticationValues)
extern "C"  void ChatClient_set_AuthValues_m2593664369 (ChatClient_t3457972569 * __this, AuthenticationValues_t1914595372 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatClient::get_UserId()
extern "C"  String_t* ChatClient_get_UserId_m388106112 (ChatClient_t3457972569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_UserId(System.String)
extern "C"  void ChatClient_set_UserId_m3338253731 (ChatClient_t3457972569 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::Connect(System.String,System.String,ExitGames.Client.Photon.Chat.AuthenticationValues)
extern "C"  bool ChatClient_Connect_m953484904 (ChatClient_t3457972569 * __this, String_t* ___appId0, String_t* ___appVersion1, AuthenticationValues_t1914595372 * ___authValues2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::Service()
extern "C"  void ChatClient_Service_m957653325 (ChatClient_t3457972569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::Disconnect()
extern "C"  void ChatClient_Disconnect_m3221248686 (ChatClient_t3457972569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::StopThread()
extern "C"  void ChatClient_StopThread_m745664008 (ChatClient_t3457972569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::Subscribe(System.String[])
extern "C"  bool ChatClient_Subscribe_m313208814 (ChatClient_t3457972569 * __this, StringU5BU5D_t1642385972* ___channels0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::Subscribe(System.String[],System.Int32)
extern "C"  bool ChatClient_Subscribe_m3485043021 (ChatClient_t3457972569 * __this, StringU5BU5D_t1642385972* ___channels0, int32_t ___messagesFromHistory1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::Unsubscribe(System.String[])
extern "C"  bool ChatClient_Unsubscribe_m207784427 (ChatClient_t3457972569 * __this, StringU5BU5D_t1642385972* ___channels0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::PublishMessage(System.String,System.Object)
extern "C"  bool ChatClient_PublishMessage_m1487254312 (ChatClient_t3457972569 * __this, String_t* ___channelName0, Il2CppObject * ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::SendPrivateMessage(System.String,System.Object)
extern "C"  bool ChatClient_SendPrivateMessage_m3411365666 (ChatClient_t3457972569 * __this, String_t* ___target0, Il2CppObject * ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::SendPrivateMessage(System.String,System.Object,System.Boolean)
extern "C"  bool ChatClient_SendPrivateMessage_m1786506885 (ChatClient_t3457972569 * __this, String_t* ___target0, Il2CppObject * ___message1, bool ___encrypt2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::SetOnlineStatus(System.Int32,System.Object,System.Boolean)
extern "C"  bool ChatClient_SetOnlineStatus_m1724661565 (ChatClient_t3457972569 * __this, int32_t ___status0, Il2CppObject * ___message1, bool ___skipMessage2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::SetOnlineStatus(System.Int32)
extern "C"  bool ChatClient_SetOnlineStatus_m1315988140 (ChatClient_t3457972569 * __this, int32_t ___status0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::SetOnlineStatus(System.Int32,System.Object)
extern "C"  bool ChatClient_SetOnlineStatus_m2305498846 (ChatClient_t3457972569 * __this, int32_t ___status0, Il2CppObject * ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::AddFriends(System.String[])
extern "C"  bool ChatClient_AddFriends_m2571562608 (ChatClient_t3457972569 * __this, StringU5BU5D_t1642385972* ___friends0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::RemoveFriends(System.String[])
extern "C"  bool ChatClient_RemoveFriends_m3061177447 (ChatClient_t3457972569 * __this, StringU5BU5D_t1642385972* ___friends0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatClient::GetPrivateChannelNameByUser(System.String)
extern "C"  String_t* ChatClient_GetPrivateChannelNameByUser_m3289694694 (ChatClient_t3457972569 * __this, String_t* ___userName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::TryGetChannel(System.String,System.Boolean,ExitGames.Client.Photon.Chat.ChatChannel&)
extern "C"  bool ChatClient_TryGetChannel_m3638928150 (ChatClient_t3457972569 * __this, String_t* ___channelName0, bool ___isPrivate1, ChatChannel_t2271943107 ** ___channel2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::TryGetChannel(System.String,ExitGames.Client.Photon.Chat.ChatChannel&)
extern "C"  bool ChatClient_TryGetChannel_m3263846067 (ChatClient_t3457972569 * __this, String_t* ___channelName0, ChatChannel_t2271943107 ** ___channel1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::SendAcksOnly()
extern "C"  void ChatClient_SendAcksOnly_m3025985558 (ChatClient_t3457972569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_DebugOut(ExitGames.Client.Photon.DebugLevel)
extern "C"  void ChatClient_set_DebugOut_m165347461 (ChatClient_t3457972569 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.Chat.ChatClient::get_DebugOut()
extern "C"  uint8_t ChatClient_get_DebugOut_m2343732696 (ChatClient_t3457972569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::SendChannelOperation(System.String[],System.Byte,System.Int32)
extern "C"  bool ChatClient_SendChannelOperation_m1197630142 (ChatClient_t3457972569 * __this, StringU5BU5D_t1642385972* ___channels0, uint8_t ___operation1, int32_t ___historyLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::HandlePrivateMessageEvent(ExitGames.Client.Photon.EventData)
extern "C"  void ChatClient_HandlePrivateMessageEvent_m3766338918 (ChatClient_t3457972569 * __this, EventData_t126381822 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::HandleChatMessagesEvent(ExitGames.Client.Photon.EventData)
extern "C"  void ChatClient_HandleChatMessagesEvent_m4217080206 (ChatClient_t3457972569 * __this, EventData_t126381822 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::HandleSubscribeEvent(ExitGames.Client.Photon.EventData)
extern "C"  void ChatClient_HandleSubscribeEvent_m1306275422 (ChatClient_t3457972569 * __this, EventData_t126381822 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::HandleUnsubscribeEvent(ExitGames.Client.Photon.EventData)
extern "C"  void ChatClient_HandleUnsubscribeEvent_m520402541 (ChatClient_t3457972569 * __this, EventData_t126381822 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::HandleAuthResponse(ExitGames.Client.Photon.OperationResponse)
extern "C"  void ChatClient_HandleAuthResponse_m423341243 (ChatClient_t3457972569 * __this, OperationResponse_t3648537128 * ___operationResponse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::HandleStatusUpdate(ExitGames.Client.Photon.EventData)
extern "C"  void ChatClient_HandleStatusUpdate_m3843735087 (ChatClient_t3457972569 * __this, EventData_t126381822 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::ConnectToFrontEnd()
extern "C"  void ChatClient_ConnectToFrontEnd_m2788755963 (ChatClient_t3457972569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::AuthenticateOnFrontEnd()
extern "C"  bool ChatClient_AuthenticateOnFrontEnd_m1379011518 (ChatClient_t3457972569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
