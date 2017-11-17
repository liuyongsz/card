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

// System.Xml.XmlNodeChangedEventHandler
struct XmlNodeChangedEventHandler_t2964483403;
// System.Object
struct Il2CppObject;
// System.Xml.XmlNodeChangedEventArgs
struct XmlNodeChangedEventArgs_t4036174778;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_Xml_System_Xml_XmlNodeChangedEventArgs4036174778.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Xml.XmlNodeChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void XmlNodeChangedEventHandler__ctor_m1132243200 (XmlNodeChangedEventHandler_t2964483403 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeChangedEventHandler::Invoke(System.Object,System.Xml.XmlNodeChangedEventArgs)
extern "C"  void XmlNodeChangedEventHandler_Invoke_m1670226388 (XmlNodeChangedEventHandler_t2964483403 * __this, Il2CppObject * ___sender0, XmlNodeChangedEventArgs_t4036174778 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Xml.XmlNodeChangedEventHandler::BeginInvoke(System.Object,System.Xml.XmlNodeChangedEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * XmlNodeChangedEventHandler_BeginInvoke_m1032663299 (XmlNodeChangedEventHandler_t2964483403 * __this, Il2CppObject * ___sender0, XmlNodeChangedEventArgs_t4036174778 * ___e1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void XmlNodeChangedEventHandler_EndInvoke_m772028002 (XmlNodeChangedEventHandler_t2964483403 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
