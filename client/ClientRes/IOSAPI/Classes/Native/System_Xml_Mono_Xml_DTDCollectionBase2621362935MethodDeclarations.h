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

// Mono.Xml.DTDCollectionBase
struct DTDCollectionBase_t2621362935;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1113953282;
// System.String
struct String_t;
// Mono.Xml.DTDNode
struct DTDNode_t1758286970;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel1113953282.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_Mono_Xml_DTDNode1758286970.h"

// System.Void Mono.Xml.DTDCollectionBase::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDCollectionBase__ctor_m1900614452 (DTDCollectionBase_t2621362935 * __this, DTDObjectModel_t1113953282 * ___root0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml.DTDCollectionBase::get_Root()
extern "C"  DTDObjectModel_t1113953282 * DTDCollectionBase_get_Root_m3300909812 (DTDCollectionBase_t2621362935 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDCollectionBase::BaseAdd(System.String,Mono.Xml.DTDNode)
extern "C"  void DTDCollectionBase_BaseAdd_m1820377490 (DTDCollectionBase_t2621362935 * __this, String_t* ___name0, DTDNode_t1758286970 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDCollectionBase::Contains(System.String)
extern "C"  bool DTDCollectionBase_Contains_m2433427925 (DTDCollectionBase_t2621362935 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.DTDCollectionBase::BaseGet(System.String)
extern "C"  Il2CppObject * DTDCollectionBase_BaseGet_m3216049204 (DTDCollectionBase_t2621362935 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
