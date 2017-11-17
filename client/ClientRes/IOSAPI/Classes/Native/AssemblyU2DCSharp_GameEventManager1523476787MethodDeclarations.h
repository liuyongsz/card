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

// GameEventManager
struct GameEventManager_t1523476787;
// GameEventCallback
struct GameEventCallback_t1976771161;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GameEventTypes243168119.h"
#include "AssemblyU2DCSharp_GameEventCallback1976771161.h"

// System.Void GameEventManager::.ctor()
extern "C"  void GameEventManager__ctor_m2653787764 (GameEventManager_t1523476787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameEventManager::.cctor()
extern "C"  void GameEventManager__cctor_m4061948869 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameEventManager::InitManager()
extern "C"  void GameEventManager_InitManager_m806687219 (GameEventManager_t1523476787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameEventManager::Update()
extern "C"  void GameEventManager_Update_m4173756051 (GameEventManager_t1523476787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameEventManager::RegisterEvent(GameEventTypes,GameEventCallback)
extern "C"  void GameEventManager_RegisterEvent_m2241079209 (Il2CppObject * __this /* static, unused */, int32_t ___eventType0, GameEventCallback_t1976771161 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameEventManager::UnregisterEvent(GameEventTypes,GameEventCallback)
extern "C"  void GameEventManager_UnregisterEvent_m4256852768 (Il2CppObject * __this /* static, unused */, int32_t ___eventType0, GameEventCallback_t1976771161 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameEventManager::RaiseEvent(GameEventTypes,System.Object[])
extern "C"  void GameEventManager_RaiseEvent_m2858938955 (Il2CppObject * __this /* static, unused */, int32_t ___eventType0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameEventManager::RaiseEventSync(GameEventTypes,System.Object[])
extern "C"  void GameEventManager_RaiseEventSync_m1537016358 (Il2CppObject * __this /* static, unused */, int32_t ___eventType0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameEventManager::RaiseEventNow(GameEventTypes,System.Object[])
extern "C"  void GameEventManager_RaiseEventNow_m168961137 (Il2CppObject * __this /* static, unused */, int32_t ___eventType0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameEventManager::QueueEvent(GameEventTypes,System.Object[])
extern "C"  void GameEventManager_QueueEvent_m3746240704 (Il2CppObject * __this /* static, unused */, int32_t ___eventType0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameEventManager::WaitQueue()
extern "C"  void GameEventManager_WaitQueue_m3884485484 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
