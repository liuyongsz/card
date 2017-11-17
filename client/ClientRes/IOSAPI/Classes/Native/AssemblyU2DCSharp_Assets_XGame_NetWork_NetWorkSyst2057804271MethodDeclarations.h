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

// Assets.XGame.NetWork.NetWorkSystem
struct NetWorkSystem_t2057804271;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// Lidgren.Network.NetConnection
struct NetConnection_t3331492029;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "Lidgren_Network_Lidgren_Network_NetConnection3331492029.h"

// System.Void Assets.XGame.NetWork.NetWorkSystem::.ctor()
extern "C"  void NetWorkSystem__ctor_m2558482385 (NetWorkSystem_t2057804271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Assets.XGame.NetWork.NetWorkSystem::.cctor()
extern "C"  void NetWorkSystem__cctor_m956483122 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Assets.XGame.NetWork.NetWorkSystem Assets.XGame.NetWork.NetWorkSystem::get_Instance()
extern "C"  NetWorkSystem_t2057804271 * NetWorkSystem_get_Instance_m3779230926 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Assets.XGame.NetWork.NetWorkSystem::Init()
extern "C"  bool NetWorkSystem_Init_m2432485283 (NetWorkSystem_t2057804271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Assets.XGame.NetWork.NetWorkSystem::Start(System.UInt32,System.String,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void NetWorkSystem_Start_m11005547 (NetWorkSystem_t2057804271 * __this, uint32_t ___key0, String_t* ___ip1, int32_t ___port2, int32_t ___heroId3, int32_t ___campId4, int32_t ___sceneId5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Assets.XGame.NetWork.NetWorkSystem::StartNetClient()
extern "C"  void NetWorkSystem_StartNetClient_m1152265083 (NetWorkSystem_t2057804271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Assets.XGame.NetWork.NetWorkSystem::NetworkThread()
extern "C"  void NetWorkSystem_NetworkThread_m3509829293 (NetWorkSystem_t2057804271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Assets.XGame.NetWork.NetWorkSystem::OnRecvMessage()
extern "C"  void NetWorkSystem_OnRecvMessage_m72562597 (NetWorkSystem_t2057804271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Assets.XGame.NetWork.NetWorkSystem::PushMsg(System.Object,Lidgren.Network.NetConnection)
extern "C"  bool NetWorkSystem_PushMsg_m3978339298 (NetWorkSystem_t2057804271 * __this, Il2CppObject * ___msg0, NetConnection_t3331492029 * ___conn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Assets.XGame.NetWork.NetWorkSystem::OnConnected(Lidgren.Network.NetConnection)
extern "C"  void NetWorkSystem_OnConnected_m3907962823 (NetWorkSystem_t2057804271 * __this, NetConnection_t3331492029 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Assets.XGame.NetWork.NetWorkSystem::SendMessage(System.Object)
extern "C"  void NetWorkSystem_SendMessage_m3524403158 (NetWorkSystem_t2057804271 * __this, Il2CppObject * ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
