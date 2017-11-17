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

// Mono.Xml.DTDNode
struct DTDNode_t1758286970;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1113953282;
// System.Xml.XmlException
struct XmlException_t4188277960;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_Mono_Xml_DTDObjectModel1113953282.h"

// System.Void Mono.Xml.DTDNode::.ctor()
extern "C"  void DTDNode__ctor_m3860501723 (DTDNode_t1758286970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDNode::get_BaseURI()
extern "C"  String_t* DTDNode_get_BaseURI_m700618778 (DTDNode_t1758286970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDNode::set_BaseURI(System.String)
extern "C"  void DTDNode_set_BaseURI_m156516815 (DTDNode_t1758286970 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDNode::get_IsInternalSubset()
extern "C"  bool DTDNode_get_IsInternalSubset_m1492150341 (DTDNode_t1758286970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDNode::set_IsInternalSubset(System.Boolean)
extern "C"  void DTDNode_set_IsInternalSubset_m2978571460 (DTDNode_t1758286970 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDNode::get_LineNumber()
extern "C"  int32_t DTDNode_get_LineNumber_m973042777 (DTDNode_t1758286970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDNode::get_LinePosition()
extern "C"  int32_t DTDNode_get_LinePosition_m3235623683 (DTDNode_t1758286970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDNode::HasLineInfo()
extern "C"  bool DTDNode_HasLineInfo_m1938199933 (DTDNode_t1758286970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDNode::SetRoot(Mono.Xml.DTDObjectModel)
extern "C"  void DTDNode_SetRoot_m2744239583 (DTDNode_t1758286970 * __this, DTDObjectModel_t1113953282 * ___root0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml.DTDNode::get_Root()
extern "C"  DTDObjectModel_t1113953282 * DTDNode_get_Root_m2340429627 (DTDNode_t1758286970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlException Mono.Xml.DTDNode::NotWFError(System.String)
extern "C"  XmlException_t4188277960 * DTDNode_NotWFError_m1730769624 (DTDNode_t1758286970 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
