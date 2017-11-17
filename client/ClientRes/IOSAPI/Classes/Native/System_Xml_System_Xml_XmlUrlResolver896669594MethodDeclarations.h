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

// System.Xml.XmlUrlResolver
struct XmlUrlResolver_t896669594;
// System.Object
struct Il2CppObject;
// System.Uri
struct Uri_t19570940;
// System.String
struct String_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void System.Xml.XmlUrlResolver::.ctor()
extern "C"  void XmlUrlResolver__ctor_m3239159657 (XmlUrlResolver_t896669594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XmlUrlResolver::GetEntity(System.Uri,System.String,System.Type)
extern "C"  Il2CppObject * XmlUrlResolver_GetEntity_m2482940693 (XmlUrlResolver_t896669594 * __this, Uri_t19570940 * ___absoluteUri0, String_t* ___role1, Type_t * ___ofObjectToReturn2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Xml.XmlUrlResolver::ResolveUri(System.Uri,System.String)
extern "C"  Uri_t19570940 * XmlUrlResolver_ResolveUri_m2307941396 (XmlUrlResolver_t896669594 * __this, Uri_t19570940 * ___baseUri0, String_t* ___relativeUri1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlUrlResolver::UnescapeRelativeUriBody(System.String)
extern "C"  String_t* XmlUrlResolver_UnescapeRelativeUriBody_m4031529036 (XmlUrlResolver_t896669594 * __this, String_t* ___src0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
