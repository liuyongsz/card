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

// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void LogSystem::.cctor()
extern "C"  void LogSystem__cctor_m3372804697 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LogSystem::Init(System.String,System.Boolean,System.Boolean,System.Int32)
extern "C"  bool LogSystem_Init_m119525451 (Il2CppObject * __this /* static, unused */, String_t* ___strLogFile0, bool ___bFileLog1, bool ___bDebugLog2, int32_t ___iLogMaxLines3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LogSystem::TraceLine(System.String)
extern "C"  void LogSystem_TraceLine_m2485499331 (Il2CppObject * __this /* static, unused */, String_t* ___strLine0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LogSystem::TraceAllLine()
extern "C"  void LogSystem_TraceAllLine_m2611711170 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LogSystem::TraceFile(System.Int32,System.String)
extern "C"  void LogSystem_TraceFile_m1337501372 (Il2CppObject * __this /* static, unused */, int32_t ___iType0, String_t* ___str1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LogSystem::StringBuilder(System.Int32,System.Object[])
extern "C"  String_t* LogSystem_StringBuilder_m3789919360 (Il2CppObject * __this /* static, unused */, int32_t ___iType0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LogSystem::StringBuilderCurrTime(System.Int32)
extern "C"  String_t* LogSystem_StringBuilderCurrTime_m222408769 (Il2CppObject * __this /* static, unused */, int32_t ___iType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LogSystem::StringBuilderContent(System.Object[])
extern "C"  String_t* LogSystem_StringBuilderContent_m3311915510 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t3614634134* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LogSystem::Log(System.Object[])
extern "C"  void LogSystem_Log_m1908043156 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t3614634134* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LogSystem::LogWarning(System.Object[])
extern "C"  void LogSystem_LogWarning_m1209959146 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t3614634134* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LogSystem::LogError(System.Object[])
extern "C"  void LogSystem_LogError_m1773507548 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t3614634134* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
