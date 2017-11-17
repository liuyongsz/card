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

// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1580700381;
// System.Exception
struct Exception_t1927440687;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t2050913741;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle1580700381.h"
#include "mscorlib_System_Exception1927440687.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject2050913741.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Xml_System_Xml_Schema_XmlSeverityType3547578624.h"

// System.Void System.Xml.Schema.ValidationHandler::RaiseValidationEvent(System.Xml.Schema.ValidationEventHandler,System.Exception,System.String,System.Xml.Schema.XmlSchemaObject,System.Object,System.String,System.Xml.Schema.XmlSeverityType)
extern "C"  void ValidationHandler_RaiseValidationEvent_m3798411831 (Il2CppObject * __this /* static, unused */, ValidationEventHandler_t1580700381 * ___handle0, Exception_t1927440687 * ___innerException1, String_t* ___message2, XmlSchemaObject_t2050913741 * ___xsobj3, Il2CppObject * ___sender4, String_t* ___sourceUri5, int32_t ___severity6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
