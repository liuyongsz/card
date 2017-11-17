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

// System.Xml.XmlNodeChangedEventArgs
struct XmlNodeChangedEventArgs_t4036174778;
// System.Xml.XmlNode
struct XmlNode_t616554813;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNode616554813.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_XmlNodeChangedAction1188489541.h"

// System.Void System.Xml.XmlNodeChangedEventArgs::.ctor(System.Xml.XmlNode,System.Xml.XmlNode,System.Xml.XmlNode,System.String,System.String,System.Xml.XmlNodeChangedAction)
extern "C"  void XmlNodeChangedEventArgs__ctor_m567919617 (XmlNodeChangedEventArgs_t4036174778 * __this, XmlNode_t616554813 * ___node0, XmlNode_t616554813 * ___oldParent1, XmlNode_t616554813 * ___newParent2, String_t* ___oldValue3, String_t* ___newValue4, int32_t ___action5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
