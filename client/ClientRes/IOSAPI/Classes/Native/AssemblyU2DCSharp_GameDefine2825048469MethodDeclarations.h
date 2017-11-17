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

// GameDefine
struct GameDefine_t2825048469;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime693205669.h"

// System.Void GameDefine::.ctor()
extern "C"  void GameDefine__ctor_m4247041740 (GameDefine_t2825048469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameDefine::.cctor()
extern "C"  void GameDefine__cctor_m2013996079 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameDefine::UnInit()
extern "C"  void GameDefine_UnInit_m4275262061 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameDefine::changeSecsToTime(System.Int32)
extern "C"  String_t* GameDefine_changeSecsToTime_m1270896276 (Il2CppObject * __this /* static, unused */, int32_t ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameDefine::ConvertSecsToHours(System.Int32)
extern "C"  String_t* GameDefine_ConvertSecsToHours_m875949973 (Il2CppObject * __this /* static, unused */, int32_t ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameDefine::ConverLocSecsToTime(System.Int64)
extern "C"  String_t* GameDefine_ConverLocSecsToTime_m685164592 (Il2CppObject * __this /* static, unused */, int64_t ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameDefine::ConvertSecsToTime(System.Int32)
extern "C"  String_t* GameDefine_ConvertSecsToTime_m236438083 (Il2CppObject * __this /* static, unused */, int32_t ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameDefine::ConvertSecsToMinute(System.Int64)
extern "C"  String_t* GameDefine_ConvertSecsToMinute_m1362509243 (Il2CppObject * __this /* static, unused */, int64_t ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameDefine::ConvertSecsToSecond(System.Int64)
extern "C"  String_t* GameDefine_ConvertSecsToSecond_m3665718529 (Il2CppObject * __this /* static, unused */, int64_t ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameDefine::ConvertCountDownToMinute(System.Int32)
extern "C"  String_t* GameDefine_ConvertCountDownToMinute_m3016425247 (Il2CppObject * __this /* static, unused */, int32_t ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameDefine::ConvertCountDownToSecond(System.Int32)
extern "C"  String_t* GameDefine_ConvertCountDownToSecond_m3055062473 (Il2CppObject * __this /* static, unused */, int32_t ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameDefine::ConvertSecondToDate(System.Int64,System.Int32&,System.Int32&,System.Int32&,System.Int32&)
extern "C"  void GameDefine_ConvertSecondToDate_m2733532146 (Il2CppObject * __this /* static, unused */, int64_t ___time0, int32_t* ___day1, int32_t* ___hour2, int32_t* ___minute3, int32_t* ___second4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameDefine::ConvertSecsToDay(System.Int64)
extern "C"  String_t* GameDefine_ConvertSecsToDay_m4088432517 (Il2CppObject * __this /* static, unused */, int64_t ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime GameDefine::ConvertSecsToDateTime(System.Int64)
extern "C"  DateTime_t693205669  GameDefine_ConvertSecsToDateTime_m3230964098 (Il2CppObject * __this /* static, unused */, int64_t ___timestamp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameDefine::ConvertSecsToMinute(System.Int32)
extern "C"  String_t* GameDefine_ConvertSecsToMinute_m2525308694 (Il2CppObject * __this /* static, unused */, int32_t ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 GameDefine::GetUTCTime()
extern "C"  int64_t GameDefine_GetUTCTime_m4109885518 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime GameDefine::GetServerDataTime()
extern "C"  DateTime_t693205669  GameDefine_GetServerDataTime_m841291507 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime GameDefine::GetLocalDataTime()
extern "C"  DateTime_t693205669  GameDefine_GetLocalDataTime_m393917703 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameDefine::GetLocalTotleSecond()
extern "C"  int32_t GameDefine_GetLocalTotleSecond_m3691784515 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 GameDefine::GetTotleSeconds()
extern "C"  int64_t GameDefine_GetTotleSeconds_m1149828660 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime GameDefine::MathDateTime(System.Int64)
extern "C"  DateTime_t693205669  GameDefine_MathDateTime_m2667197964 (Il2CppObject * __this /* static, unused */, int64_t ___milliseconds0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 GameDefine::ServerNowTicks()
extern "C"  int64_t GameDefine_ServerNowTicks_m1646960668 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
