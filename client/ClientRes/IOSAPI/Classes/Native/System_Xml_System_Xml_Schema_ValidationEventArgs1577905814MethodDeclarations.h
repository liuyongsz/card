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

// System.Xml.Schema.ValidationEventArgs
struct ValidationEventArgs_t1577905814;
// System.Xml.Schema.XmlSchemaException
struct XmlSchemaException_t4082200141;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaException4082200141.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_Schema_XmlSeverityType3547578624.h"

// System.Void System.Xml.Schema.ValidationEventArgs::.ctor(System.Xml.Schema.XmlSchemaException,System.String,System.Xml.Schema.XmlSeverityType)
extern "C"  void ValidationEventArgs__ctor_m84280685 (ValidationEventArgs_t1577905814 * __this, XmlSchemaException_t4082200141 * ___ex0, String_t* ___message1, int32_t ___severity2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaException System.Xml.Schema.ValidationEventArgs::get_Exception()
extern "C"  XmlSchemaException_t4082200141 * ValidationEventArgs_get_Exception_m928598447 (ValidationEventArgs_t1577905814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSeverityType System.Xml.Schema.ValidationEventArgs::get_Severity()
extern "C"  int32_t ValidationEventArgs_get_Severity_m3496551534 (ValidationEventArgs_t1577905814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
