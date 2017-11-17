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

// System.Type
struct Type_t;
// System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata>
struct IDictionary_2_t3607688819;
// LitJson.ObjectMetadata
struct ObjectMetadata_t3995922398;
struct ObjectMetadata_t3995922398_marshaled_pinvoke;
struct ObjectMetadata_t3995922398_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "ls_client_tools_LitJson_ObjectMetadata3995922398.h"
#include "mscorlib_System_Type1303803226.h"

// System.Type LitJson.ObjectMetadata::get_ElementType()
extern "C"  Type_t * ObjectMetadata_get_ElementType_m2899213952 (ObjectMetadata_t3995922398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.ObjectMetadata::set_ElementType(System.Type)
extern "C"  void ObjectMetadata_set_ElementType_m756164409 (ObjectMetadata_t3995922398 * __this, Type_t * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.ObjectMetadata::get_IsDictionary()
extern "C"  bool ObjectMetadata_get_IsDictionary_m3503257632 (ObjectMetadata_t3995922398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.ObjectMetadata::set_IsDictionary(System.Boolean)
extern "C"  void ObjectMetadata_set_IsDictionary_m2432383945 (ObjectMetadata_t3995922398 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata> LitJson.ObjectMetadata::get_Properties()
extern "C"  Il2CppObject* ObjectMetadata_get_Properties_m855784995 (ObjectMetadata_t3995922398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.ObjectMetadata::set_Properties(System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata>)
extern "C"  void ObjectMetadata_set_Properties_m3326823754 (ObjectMetadata_t3995922398 * __this, Il2CppObject* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ObjectMetadata_t3995922398;
struct ObjectMetadata_t3995922398_marshaled_pinvoke;

extern "C" void ObjectMetadata_t3995922398_marshal_pinvoke(const ObjectMetadata_t3995922398& unmarshaled, ObjectMetadata_t3995922398_marshaled_pinvoke& marshaled);
extern "C" void ObjectMetadata_t3995922398_marshal_pinvoke_back(const ObjectMetadata_t3995922398_marshaled_pinvoke& marshaled, ObjectMetadata_t3995922398& unmarshaled);
extern "C" void ObjectMetadata_t3995922398_marshal_pinvoke_cleanup(ObjectMetadata_t3995922398_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ObjectMetadata_t3995922398;
struct ObjectMetadata_t3995922398_marshaled_com;

extern "C" void ObjectMetadata_t3995922398_marshal_com(const ObjectMetadata_t3995922398& unmarshaled, ObjectMetadata_t3995922398_marshaled_com& marshaled);
extern "C" void ObjectMetadata_t3995922398_marshal_com_back(const ObjectMetadata_t3995922398_marshaled_com& marshaled, ObjectMetadata_t3995922398& unmarshaled);
extern "C" void ObjectMetadata_t3995922398_marshal_com_cleanup(ObjectMetadata_t3995922398_marshaled_com& marshaled);
