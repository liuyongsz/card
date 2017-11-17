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

// XMLNode
struct XMLNode_t3111658575;
// XMLNodeList
struct XMLNodeList_t2138300961;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void XMLNode::.ctor()
extern "C"  void XMLNode__ctor_m3902242716 (XMLNode_t3111658575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// XMLNodeList XMLNode::GetNodeList(System.String)
extern "C"  XMLNodeList_t2138300961 * XMLNode_GetNodeList_m1293279956 (XMLNode_t3111658575 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// XMLNode XMLNode::GetNode(System.String)
extern "C"  XMLNode_t3111658575 * XMLNode_GetNode_m1800463744 (XMLNode_t3111658575 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String XMLNode::GetValue(System.String)
extern "C"  String_t* XMLNode_GetValue_m660877090 (XMLNode_t3111658575 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object XMLNode::GetObject(System.String)
extern "C"  Il2CppObject * XMLNode_GetObject_m3254774942 (XMLNode_t3111658575 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
