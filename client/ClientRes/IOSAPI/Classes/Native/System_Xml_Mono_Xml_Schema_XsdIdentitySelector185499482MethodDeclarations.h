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

// Mono.Xml.Schema.XsdIdentitySelector
struct XsdIdentitySelector_t185499482;
// System.Xml.Schema.XmlSchemaXPath
struct XmlSchemaXPath_t604820427;
// Mono.Xml.Schema.XsdIdentityPath[]
struct XsdIdentityPathU5BU5D_t526781831;
// Mono.Xml.Schema.XsdIdentityField
struct XsdIdentityField_t2563516441;
// Mono.Xml.Schema.XsdIdentityField[]
struct XsdIdentityFieldU5BU5D_t3429900132;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaXPath604820427.h"
#include "System_Xml_Mono_Xml_Schema_XsdIdentityField2563516441.h"

// System.Void Mono.Xml.Schema.XsdIdentitySelector::.ctor(System.Xml.Schema.XmlSchemaXPath)
extern "C"  void XsdIdentitySelector__ctor_m1793636426 (XsdIdentitySelector_t185499482 * __this, XmlSchemaXPath_t604820427 * ___selector0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentityPath[] Mono.Xml.Schema.XsdIdentitySelector::get_Paths()
extern "C"  XsdIdentityPathU5BU5D_t526781831* XsdIdentitySelector_get_Paths_m3735420055 (XsdIdentitySelector_t185499482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdIdentitySelector::AddField(Mono.Xml.Schema.XsdIdentityField)
extern "C"  void XsdIdentitySelector_AddField_m1474032761 (XsdIdentitySelector_t185499482 * __this, XsdIdentityField_t2563516441 * ___field0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentityField[] Mono.Xml.Schema.XsdIdentitySelector::get_Fields()
extern "C"  XsdIdentityFieldU5BU5D_t3429900132* XsdIdentitySelector_get_Fields_m2004773543 (XsdIdentitySelector_t185499482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
