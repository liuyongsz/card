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

// System.Xml.XmlResolver
struct XmlResolver_t2024571559;
// System.Uri
struct Uri_t19570940;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Xml.XmlResolver::.ctor()
extern "C"  void XmlResolver__ctor_m976831612 (XmlResolver_t2024571559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Xml.XmlResolver::ResolveUri(System.Uri,System.String)
extern "C"  Uri_t19570940 * XmlResolver_ResolveUri_m1553678733 (XmlResolver_t2024571559 * __this, Uri_t19570940 * ___baseUri0, String_t* ___relativeUri1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlResolver::EscapeRelativeUriBody(System.String)
extern "C"  String_t* XmlResolver_EscapeRelativeUriBody_m989061286 (XmlResolver_t2024571559 * __this, String_t* ___src0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
