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

// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t1944712516;
// System.Object
struct Il2CppObject;
// System.Xml.Schema.QNameValueType
struct QNameValueType_t2109511131;
struct QNameValueType_t2109511131_marshaled_pinvoke;
struct QNameValueType_t2109511131_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_QNameValueType2109511131.h"
#include "System_Xml_System_Xml_XmlQualifiedName1944712516.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Xml.Schema.QNameValueType::.ctor(System.Xml.XmlQualifiedName)
extern "C"  void QNameValueType__ctor_m2634119687 (QNameValueType_t2109511131 * __this, XmlQualifiedName_t1944712516 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.QNameValueType::get_Value()
extern "C"  XmlQualifiedName_t1944712516 * QNameValueType_get_Value_m3869558292 (QNameValueType_t2109511131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.QNameValueType::Equals(System.Object)
extern "C"  bool QNameValueType_Equals_m3568047524 (QNameValueType_t2109511131 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.QNameValueType::GetHashCode()
extern "C"  int32_t QNameValueType_GetHashCode_m1039663360 (QNameValueType_t2109511131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.QNameValueType::op_Equality(System.Xml.Schema.QNameValueType,System.Xml.Schema.QNameValueType)
extern "C"  bool QNameValueType_op_Equality_m2244999023 (Il2CppObject * __this /* static, unused */, QNameValueType_t2109511131  ___v10, QNameValueType_t2109511131  ___v21, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct QNameValueType_t2109511131;
struct QNameValueType_t2109511131_marshaled_pinvoke;

extern "C" void QNameValueType_t2109511131_marshal_pinvoke(const QNameValueType_t2109511131& unmarshaled, QNameValueType_t2109511131_marshaled_pinvoke& marshaled);
extern "C" void QNameValueType_t2109511131_marshal_pinvoke_back(const QNameValueType_t2109511131_marshaled_pinvoke& marshaled, QNameValueType_t2109511131& unmarshaled);
extern "C" void QNameValueType_t2109511131_marshal_pinvoke_cleanup(QNameValueType_t2109511131_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct QNameValueType_t2109511131;
struct QNameValueType_t2109511131_marshaled_com;

extern "C" void QNameValueType_t2109511131_marshal_com(const QNameValueType_t2109511131& unmarshaled, QNameValueType_t2109511131_marshaled_com& marshaled);
extern "C" void QNameValueType_t2109511131_marshal_com_back(const QNameValueType_t2109511131_marshaled_com& marshaled, QNameValueType_t2109511131& unmarshaled);
extern "C" void QNameValueType_t2109511131_marshal_com_cleanup(QNameValueType_t2109511131_marshaled_com& marshaled);
