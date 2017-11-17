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

// System.Xml.XmlException
struct XmlException_t4188277960;
// System.String
struct String_t;
// System.Exception
struct Exception_t1927440687;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Xml.IXmlLineInfo
struct IXmlLineInfo_t135184468;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Exception1927440687.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Xml.XmlException::.ctor()
extern "C"  void XmlException__ctor_m2852754939 (XmlException_t4188277960 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.String,System.Exception)
extern "C"  void XmlException__ctor_m1940940965 (XmlException_t4188277960 * __this, String_t* ___message0, Exception_t1927440687 * ___innerException1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void XmlException__ctor_m1311014940 (XmlException_t4188277960 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.String)
extern "C"  void XmlException__ctor_m47652749 (XmlException_t4188277960 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.Xml.IXmlLineInfo,System.String,System.String)
extern "C"  void XmlException__ctor_m3319927495 (XmlException_t4188277960 * __this, Il2CppObject * ___li0, String_t* ___sourceUri1, String_t* ___message2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.Xml.IXmlLineInfo,System.Exception,System.String,System.String)
extern "C"  void XmlException__ctor_m985122239 (XmlException_t4188277960 * __this, Il2CppObject * ___li0, Exception_t1927440687 * ___innerException1, String_t* ___sourceUri2, String_t* ___message3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.String,System.Exception,System.Int32,System.Int32)
extern "C"  void XmlException__ctor_m2638300825 (XmlException_t4188277960 * __this, String_t* ___message0, Exception_t1927440687 * ___innerException1, int32_t ___lineNumber2, int32_t ___linePosition3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.String,System.Int32,System.Int32,System.Object,System.String,System.Exception)
extern "C"  void XmlException__ctor_m4150254861 (XmlException_t4188277960 * __this, String_t* ___message0, int32_t ___lineNumber1, int32_t ___linePosition2, Il2CppObject * ___sourceObject3, String_t* ___sourceUri4, Exception_t1927440687 * ___innerException5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlException::GetMessage(System.String,System.String,System.Int32,System.Int32,System.Object)
extern "C"  String_t* XmlException_GetMessage_m2573253249 (Il2CppObject * __this /* static, unused */, String_t* ___message0, String_t* ___sourceUri1, int32_t ___lineNumber2, int32_t ___linePosition3, Il2CppObject * ___sourceObj4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlException::get_Message()
extern "C"  String_t* XmlException_get_Message_m1224731974 (XmlException_t4188277960 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void XmlException_GetObjectData_m4254051819 (XmlException_t4188277960 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
