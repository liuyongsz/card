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

// PureMVC.Patterns.Observer
struct Observer_t614534518;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// PureMVC.Interfaces.INotification
struct INotification_t616890910;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void PureMVC.Patterns.Observer::.ctor(System.String,System.Object)
extern "C"  void Observer__ctor_m1151903304 (Observer_t614534518 * __this, String_t* ___notifyMethod0, Il2CppObject * ___notifyContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PureMVC.Patterns.Observer::NotifyObserver(PureMVC.Interfaces.INotification)
extern "C"  void Observer_NotifyObserver_m559660161 (Observer_t614534518 * __this, Il2CppObject * ___notification0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PureMVC.Patterns.Observer::CompareNotifyContext(System.Object)
extern "C"  bool Observer_CompareNotifyContext_m2732057499 (Observer_t614534518 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PureMVC.Patterns.Observer::get_NotifyMethod()
extern "C"  String_t* Observer_get_NotifyMethod_m3789606956 (Observer_t614534518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PureMVC.Patterns.Observer::set_NotifyMethod(System.String)
extern "C"  void Observer_set_NotifyMethod_m2099158697 (Observer_t614534518 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object PureMVC.Patterns.Observer::get_NotifyContext()
extern "C"  Il2CppObject * Observer_get_NotifyContext_m3975051652 (Observer_t614534518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PureMVC.Patterns.Observer::set_NotifyContext(System.Object)
extern "C"  void Observer_set_NotifyContext_m740148393 (Observer_t614534518 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
