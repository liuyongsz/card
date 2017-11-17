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

// System.Net.DownloadProgressChangedEventArgs
struct DownloadProgressChangedEventArgs_t3269688412;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Net.DownloadProgressChangedEventArgs::.ctor(System.Int64,System.Int64,System.Object)
extern "C"  void DownloadProgressChangedEventArgs__ctor_m1087249604 (DownloadProgressChangedEventArgs_t3269688412 * __this, int64_t ___bytesReceived0, int64_t ___totalBytesToReceive1, Il2CppObject * ___userState2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.DownloadProgressChangedEventArgs::get_BytesReceived()
extern "C"  int64_t DownloadProgressChangedEventArgs_get_BytesReceived_m3803688318 (DownloadProgressChangedEventArgs_t3269688412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.DownloadProgressChangedEventArgs::get_TotalBytesToReceive()
extern "C"  int64_t DownloadProgressChangedEventArgs_get_TotalBytesToReceive_m1164733211 (DownloadProgressChangedEventArgs_t3269688412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
