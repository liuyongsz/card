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

// AbstractSkillTrigger
struct AbstractSkillTrigger_t2192524791;
// System.String
struct String_t;
// ISkillTrigger
struct ISkillTrigger_t1432812828;
// SkillInstance
struct SkillInstance_t2290497998;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_SkillInstance2290497998.h"
#include "AssemblyU2DCSharp_E_SkillTrigger2341049369.h"

// System.Void AbstractSkillTrigger::.ctor()
extern "C"  void AbstractSkillTrigger__ctor_m731399956 (AbstractSkillTrigger_t2192524791 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AbstractSkillTrigger::Init(System.String)
extern "C"  void AbstractSkillTrigger_Init_m3012185446 (AbstractSkillTrigger_t2192524791 * __this, String_t* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AbstractSkillTrigger::Reset()
extern "C"  void AbstractSkillTrigger_Reset_m1524655283 (AbstractSkillTrigger_t2192524791 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ISkillTrigger AbstractSkillTrigger::Clone()
extern "C"  Il2CppObject * AbstractSkillTrigger_Clone_m2561152790 (AbstractSkillTrigger_t2192524791 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AbstractSkillTrigger::Excute(ISkillTrigger,System.Single)
extern "C"  bool AbstractSkillTrigger_Excute_m76980977 (AbstractSkillTrigger_t2192524791 * __this, Il2CppObject * ___instance0, float ___curTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AbstractSkillTrigger::Start(SkillInstance)
extern "C"  void AbstractSkillTrigger_Start_m2709684320 (AbstractSkillTrigger_t2192524791 * __this, SkillInstance_t2290497998 * ___ins0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AbstractSkillTrigger::Stay(SkillInstance)
extern "C"  void AbstractSkillTrigger_Stay_m2991733357 (AbstractSkillTrigger_t2192524791 * __this, SkillInstance_t2290497998 * ___ins0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AbstractSkillTrigger::Exit(SkillInstance)
extern "C"  void AbstractSkillTrigger_Exit_m2435165378 (AbstractSkillTrigger_t2192524791 * __this, SkillInstance_t2290497998 * ___ins0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AbstractSkillTrigger::SetOwnerID(System.Int32)
extern "C"  void AbstractSkillTrigger_SetOwnerID_m4175966909 (AbstractSkillTrigger_t2192524791 * __this, int32_t ___ownerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 AbstractSkillTrigger::GetOwnerID()
extern "C"  int32_t AbstractSkillTrigger_GetOwnerID_m3644033686 (AbstractSkillTrigger_t2192524791 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AbstractSkillTrigger::SetTrigger(E_SkillTrigger)
extern "C"  void AbstractSkillTrigger_SetTrigger_m3053561291 (AbstractSkillTrigger_t2192524791 * __this, int32_t ___trigger0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// E_SkillTrigger AbstractSkillTrigger::GetTrigger()
extern "C"  int32_t AbstractSkillTrigger_GetTrigger_m2788300968 (AbstractSkillTrigger_t2192524791 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
