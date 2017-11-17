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

// System.Xml.Schema.XmlSchemaException
struct XmlSchemaException_t4082200141;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t2050913741;
// System.Exception
struct Exception_t1927440687;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject2050913741.h"
#include "mscorlib_System_Exception1927440687.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Xml.Schema.XmlSchemaException::.ctor()
extern "C"  void XmlSchemaException__ctor_m2115071217 (XmlSchemaException_t4082200141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void XmlSchemaException__ctor_m1580949926 (XmlSchemaException_t4082200141 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::.ctor(System.String,System.Int32,System.Int32,System.Xml.Schema.XmlSchemaObject,System.String,System.Exception)
extern "C"  void XmlSchemaException__ctor_m364775691 (XmlSchemaException_t4082200141 * __this, String_t* ___message0, int32_t ___lineNumber1, int32_t ___linePosition2, XmlSchemaObject_t2050913741 * ___sourceObject3, String_t* ___sourceUri4, Exception_t1927440687 * ___innerException5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::.ctor(System.String,System.Object,System.String,System.Xml.Schema.XmlSchemaObject,System.Exception)
extern "C"  void XmlSchemaException__ctor_m2575676105 (XmlSchemaException_t4082200141 * __this, String_t* ___message0, Il2CppObject * ___sender1, String_t* ___sourceUri2, XmlSchemaObject_t2050913741 * ___sourceObject3, Exception_t1927440687 * ___innerException4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::.ctor(System.String,System.Xml.Schema.XmlSchemaObject,System.Exception)
extern "C"  void XmlSchemaException__ctor_m1831638925 (XmlSchemaException_t4082200141 * __this, String_t* ___message0, XmlSchemaObject_t2050913741 * ___sourceObject1, Exception_t1927440687 * ___innerException2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::.ctor(System.String,System.Exception)
extern "C"  void XmlSchemaException__ctor_m1932414111 (XmlSchemaException_t4082200141 * __this, String_t* ___message0, Exception_t1927440687 * ___innerException1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaException::GetMessage(System.String,System.String,System.Object,System.Xml.Schema.XmlSchemaObject)
extern "C"  String_t* XmlSchemaException_GetMessage_m2033431189 (Il2CppObject * __this /* static, unused */, String_t* ___message0, String_t* ___sourceUri1, Il2CppObject * ___sender2, XmlSchemaObject_t2050913741 * ___sourceObj3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaException::GetMessage(System.String,System.String,System.Int32,System.Int32,System.Xml.Schema.XmlSchemaObject)
extern "C"  String_t* XmlSchemaException_GetMessage_m415039315 (Il2CppObject * __this /* static, unused */, String_t* ___message0, String_t* ___sourceUri1, int32_t ___lineNumber2, int32_t ___linePosition3, XmlSchemaObject_t2050913741 * ___sourceObj4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaException::get_Message()
extern "C"  String_t* XmlSchemaException_get_Message_m1034587606 (XmlSchemaException_t4082200141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void XmlSchemaException_GetObjectData_m888947997 (XmlSchemaException_t4082200141 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
