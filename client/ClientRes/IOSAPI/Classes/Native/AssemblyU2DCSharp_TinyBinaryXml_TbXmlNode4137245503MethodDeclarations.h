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

// TinyBinaryXml.TbXmlNode
struct TbXmlNode_t4137245503;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.List`1<TinyBinaryXml.TbXmlNode>
struct List_1_t3506366635;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_TinyBinaryXml_TbXmlNode4137245503.h"

// System.Void TinyBinaryXml.TbXmlNode::.ctor()
extern "C"  void TbXmlNode__ctor_m130560704 (TbXmlNode_t4137245503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TinyBinaryXml.TbXmlNode::GetText()
extern "C"  String_t* TbXmlNode_GetText_m2960519114 (TbXmlNode_t4137245503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TinyBinaryXml.TbXmlNode::GetStringValue(System.String)
extern "C"  String_t* TbXmlNode_GetStringValue_m303546245 (TbXmlNode_t4137245503 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double TinyBinaryXml.TbXmlNode::GetDoubleValue(System.String)
extern "C"  double TbXmlNode_GetDoubleValue_m2579454341 (TbXmlNode_t4137245503 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TinyBinaryXml.TbXmlNode::GetFloatValue(System.String)
extern "C"  float TbXmlNode_GetFloatValue_m1473336227 (TbXmlNode_t4137245503 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TinyBinaryXml.TbXmlNode::GetIntValue(System.String)
extern "C"  int32_t TbXmlNode_GetIntValue_m3453108366 (TbXmlNode_t4137245503 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 TinyBinaryXml.TbXmlNode::GetUIntValue(System.String)
extern "C"  uint32_t TbXmlNode_GetUIntValue_m697140006 (TbXmlNode_t4137245503 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte TinyBinaryXml.TbXmlNode::GetByteValue(System.String)
extern "C"  uint8_t TbXmlNode_GetByteValue_m3727922357 (TbXmlNode_t4137245503 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 TinyBinaryXml.TbXmlNode::GetUShortValue(System.String)
extern "C"  uint16_t TbXmlNode_GetUShortValue_m2593094647 (TbXmlNode_t4137245503 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 TinyBinaryXml.TbXmlNode::GetShortValue(System.String)
extern "C"  int16_t TbXmlNode_GetShortValue_m992742575 (TbXmlNode_t4137245503 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TinyBinaryXml.TbXmlNode::GetBooleanValue(System.String)
extern "C"  bool TbXmlNode_GetBooleanValue_m2778567129 (TbXmlNode_t4137245503 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object TinyBinaryXml.TbXmlNode::GetValue(System.String&)
extern "C"  Il2CppObject * TbXmlNode_GetValue_m1056909664 (TbXmlNode_t4137245503 * __this, String_t** ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<TinyBinaryXml.TbXmlNode> TinyBinaryXml.TbXmlNode::GetNodes(System.String)
extern "C"  List_1_t3506366635 * TbXmlNode_GetNodes_m2407106189 (TbXmlNode_t4137245503 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TinyBinaryXml.TbXmlNode::GetNodesRecursive(System.String[],System.Int32,System.String&,TinyBinaryXml.TbXmlNode,System.Collections.Generic.List`1<TinyBinaryXml.TbXmlNode>&)
extern "C"  void TbXmlNode_GetNodesRecursive_m971630272 (TbXmlNode_t4137245503 * __this, StringU5BU5D_t1642385972* ___pathBlocks0, int32_t ___pathBlockIndex1, String_t** ___pathBlock2, TbXmlNode_t4137245503 * ___currentNode3, List_1_t3506366635 ** ___resultNodes4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
