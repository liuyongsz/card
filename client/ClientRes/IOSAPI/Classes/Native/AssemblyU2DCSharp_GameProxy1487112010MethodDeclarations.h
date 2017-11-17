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

// GameProxy
struct GameProxy_t1487112010;
// System.String
struct String_t;
// System.Action
struct Action_t3226471752;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_EScene3501443013.h"
#include "System_Core_System_Action3226471752.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GameProxy::.ctor()
extern "C"  void GameProxy__ctor_m4078970593 (GameProxy_t1487112010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// EScene GameProxy::get_CurrSceneType()
extern "C"  int32_t GameProxy_get_CurrSceneType_m1687045394 (GameProxy_t1487112010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameProxy::SetSceneType(EScene)
extern "C"  void GameProxy_SetSceneType_m1763326598 (GameProxy_t1487112010 * __this, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameProxy::get_CurrSceneName()
extern "C"  String_t* GameProxy_get_CurrSceneName_m2417263172 (GameProxy_t1487112010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameProxy::StartGame()
extern "C"  void GameProxy_StartGame_m2941196927 (GameProxy_t1487112010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameProxy::LoadConfig()
extern "C"  void GameProxy_LoadConfig_m1658872809 (GameProxy_t1487112010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameProxy::Init_TextManager(System.Action)
extern "C"  void GameProxy_Init_TextManager_m3970850331 (GameProxy_t1487112010 * __this, Action_t3226471752 * ___complete0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameProxy::OnComplete_LoadedLang()
extern "C"  void GameProxy_OnComplete_LoadedLang_m3852284697 (GameProxy_t1487112010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameProxy::GotoMainCity()
extern "C"  void GameProxy_GotoMainCity_m193037980 (GameProxy_t1487112010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameProxy::GoToPVP()
extern "C"  void GameProxy_GoToPVP_m1849887018 (GameProxy_t1487112010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameProxy::LoadingScene(System.String)
extern "C"  void GameProxy_LoadingScene_m2547315715 (GameProxy_t1487112010 * __this, String_t* ___scenename0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameProxy::isLoadingScene(System.String)
extern "C"  bool GameProxy_isLoadingScene_m3845097933 (GameProxy_t1487112010 * __this, String_t* ___scenename0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameProxy::RealEnterScene(System.String,EScene)
extern "C"  void GameProxy_RealEnterScene_m720949712 (GameProxy_t1487112010 * __this, String_t* ___scenename0, int32_t ___t1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
