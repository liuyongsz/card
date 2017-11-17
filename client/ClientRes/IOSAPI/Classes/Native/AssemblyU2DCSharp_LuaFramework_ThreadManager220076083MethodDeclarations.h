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

// LuaFramework.ThreadManager
struct ThreadManager_t220076083;
// ThreadEvent
struct ThreadEvent_t761503908;
// System.Action`1<NotiData>
struct Action_1_t2706202782;
// NotiData
struct NotiData_t2904403400;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2058570427;
// System.Object
struct Il2CppObject;
// System.Net.DownloadProgressChangedEventArgs
struct DownloadProgressChangedEventArgs_t3269688412;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ThreadEvent761503908.h"
#include "AssemblyU2DCSharp_NotiData2904403400.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_System_Net_DownloadProgressChangedEventArgs3269688412.h"

// System.Void LuaFramework.ThreadManager::.ctor()
extern "C"  void ThreadManager__ctor_m4026157610 (ThreadManager_t220076083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuaFramework.ThreadManager::.cctor()
extern "C"  void ThreadManager__cctor_m2751594839 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LuaFramework.ThreadManager LuaFramework.ThreadManager::get_Instance()
extern "C"  ThreadManager_t220076083 * ThreadManager_get_Instance_m611952424 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuaFramework.ThreadManager::Awake()
extern "C"  void ThreadManager_Awake_m2143338573 (ThreadManager_t220076083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuaFramework.ThreadManager::Start()
extern "C"  void ThreadManager_Start_m3999955466 (ThreadManager_t220076083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuaFramework.ThreadManager::AddEvent(ThreadEvent,System.Action`1<NotiData>)
extern "C"  void ThreadManager_AddEvent_m1500296841 (ThreadManager_t220076083 * __this, ThreadEvent_t761503908 * ___ev0, Action_1_t2706202782 * ___func1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuaFramework.ThreadManager::OnSyncEvent(NotiData)
extern "C"  void ThreadManager_OnSyncEvent_m2252832008 (ThreadManager_t220076083 * __this, NotiData_t2904403400 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuaFramework.ThreadManager::OnUpdate()
extern "C"  void ThreadManager_OnUpdate_m2913498868 (ThreadManager_t220076083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuaFramework.ThreadManager::OnDownloadFile(System.Collections.Generic.List`1<System.Object>)
extern "C"  void ThreadManager_OnDownloadFile_m2158192915 (ThreadManager_t220076083 * __this, List_1_t2058570427 * ___evParams0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuaFramework.ThreadManager::ProgressChanged(System.Object,System.Net.DownloadProgressChangedEventArgs)
extern "C"  void ThreadManager_ProgressChanged_m586980255 (ThreadManager_t220076083 * __this, Il2CppObject * ___sender0, DownloadProgressChangedEventArgs_t3269688412 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 LuaFramework.ThreadManager::get_LoadingLength()
extern "C"  int64_t ThreadManager_get_LoadingLength_m3672837400 (ThreadManager_t220076083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuaFramework.ThreadManager::OnExtractFile(System.Collections.Generic.List`1<System.Object>)
extern "C"  void ThreadManager_OnExtractFile_m733129260 (ThreadManager_t220076083 * __this, List_1_t2058570427 * ___evParams0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuaFramework.ThreadManager::OnDestroy()
extern "C"  void ThreadManager_OnDestroy_m4109320227 (ThreadManager_t220076083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
