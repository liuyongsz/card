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

// System.Threading.ReaderWriterLockSlim
struct ReaderWriterLockSlim_t3961242320;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t2091316307;
// System.Threading.ReaderWriterLockSlim/LockDetails
struct LockDetails_t2550015005;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Threading_EventWaitHandle2091316307.h"

// System.Void System.Threading.ReaderWriterLockSlim::.ctor()
extern "C"  void ReaderWriterLockSlim__ctor_m2624820766 (ReaderWriterLockSlim_t3961242320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::.cctor()
extern "C"  void ReaderWriterLockSlim__cctor_m1152023981 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::EnterReadLock()
extern "C"  void ReaderWriterLockSlim_EnterReadLock_m143374339 (ReaderWriterLockSlim_t3961242320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::TryEnterReadLock(System.Int32)
extern "C"  bool ReaderWriterLockSlim_TryEnterReadLock_m2166538889 (ReaderWriterLockSlim_t3961242320 * __this, int32_t ___millisecondsTimeout0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::ExitReadLock()
extern "C"  void ReaderWriterLockSlim_ExitReadLock_m2127375823 (ReaderWriterLockSlim_t3961242320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::EnterWriteLock()
extern "C"  void ReaderWriterLockSlim_EnterWriteLock_m3280274310 (ReaderWriterLockSlim_t3961242320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::TryEnterWriteLock(System.Int32)
extern "C"  bool ReaderWriterLockSlim_TryEnterWriteLock_m2827850714 (ReaderWriterLockSlim_t3961242320 * __this, int32_t ___millisecondsTimeout0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::ExitWriteLock()
extern "C"  void ReaderWriterLockSlim_ExitWriteLock_m1283432126 (ReaderWriterLockSlim_t3961242320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::Dispose()
extern "C"  void ReaderWriterLockSlim_Dispose_m2662743361 (ReaderWriterLockSlim_t3961242320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::get_IsWriteLockHeld()
extern "C"  bool ReaderWriterLockSlim_get_IsWriteLockHeld_m3214660256 (ReaderWriterLockSlim_t3961242320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.ReaderWriterLockSlim::get_RecursiveWriteCount()
extern "C"  int32_t ReaderWriterLockSlim_get_RecursiveWriteCount_m3023664965 (ReaderWriterLockSlim_t3961242320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::EnterMyLock()
extern "C"  void ReaderWriterLockSlim_EnterMyLock_m1562964329 (ReaderWriterLockSlim_t3961242320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::EnterMyLockSpin()
extern "C"  void ReaderWriterLockSlim_EnterMyLockSpin_m3709219793 (ReaderWriterLockSlim_t3961242320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::ExitMyLock()
extern "C"  void ReaderWriterLockSlim_ExitMyLock_m2552700341 (ReaderWriterLockSlim_t3961242320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::ExitAndWakeUpAppropriateWaiters()
extern "C"  void ReaderWriterLockSlim_ExitAndWakeUpAppropriateWaiters_m1387191616 (ReaderWriterLockSlim_t3961242320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::LazyCreateEvent(System.Threading.EventWaitHandle&,System.Boolean)
extern "C"  void ReaderWriterLockSlim_LazyCreateEvent_m1675659075 (ReaderWriterLockSlim_t3961242320 * __this, EventWaitHandle_t2091316307 ** ___waitEvent0, bool ___makeAutoResetEvent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::WaitOnEvent(System.Threading.EventWaitHandle,System.UInt32&,System.Int32)
extern "C"  bool ReaderWriterLockSlim_WaitOnEvent_m3953424557 (ReaderWriterLockSlim_t3961242320 * __this, EventWaitHandle_t2091316307 * ___waitEvent0, uint32_t* ___numWaiters1, int32_t ___millisecondsTimeout2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.ReaderWriterLockSlim/LockDetails System.Threading.ReaderWriterLockSlim::GetReadLockDetails(System.Int32,System.Boolean)
extern "C"  LockDetails_t2550015005 * ReaderWriterLockSlim_GetReadLockDetails_m1062637481 (ReaderWriterLockSlim_t3961242320 * __this, int32_t ___threadId0, bool ___create1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
