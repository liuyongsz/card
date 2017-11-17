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

// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t1328083999;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Xml.XmlChar::.cctor()
extern "C"  void XmlChar__cctor_m2546143923 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsWhitespace(System.Int32)
extern "C"  bool XmlChar_IsWhitespace_m2267719926 (Il2CppObject * __this /* static, unused */, int32_t ___ch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsWhitespace(System.String)
extern "C"  bool XmlChar_IsWhitespace_m1819392135 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlChar::IndexOfNonWhitespace(System.String)
extern "C"  int32_t XmlChar_IndexOfNonWhitespace_m1443799819 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsFirstNameChar(System.Int32)
extern "C"  bool XmlChar_IsFirstNameChar_m3402959496 (Il2CppObject * __this /* static, unused */, int32_t ___ch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsInvalid(System.Int32)
extern "C"  bool XmlChar_IsInvalid_m2793614094 (Il2CppObject * __this /* static, unused */, int32_t ___ch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlChar::IndexOfInvalid(System.String,System.Boolean)
extern "C"  int32_t XmlChar_IndexOfInvalid_m4263442421 (Il2CppObject * __this /* static, unused */, String_t* ___s0, bool ___allowSurrogate1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlChar::IndexOfInvalid(System.Char[],System.Int32,System.Int32,System.Boolean)
extern "C"  int32_t XmlChar_IndexOfInvalid_m1817490960 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___s0, int32_t ___start1, int32_t ___length2, bool ___allowSurrogate3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsNameChar(System.Int32)
extern "C"  bool XmlChar_IsNameChar_m2750850292 (Il2CppObject * __this /* static, unused */, int32_t ___ch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsNCNameChar(System.Int32)
extern "C"  bool XmlChar_IsNCNameChar_m1803776905 (Il2CppObject * __this /* static, unused */, int32_t ___ch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsName(System.String)
extern "C"  bool XmlChar_IsName_m2494708015 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsNCName(System.String)
extern "C"  bool XmlChar_IsNCName_m3227241240 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsNmToken(System.String)
extern "C"  bool XmlChar_IsNmToken_m663233524 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsPubidChar(System.Int32)
extern "C"  bool XmlChar_IsPubidChar_m3963388481 (Il2CppObject * __this /* static, unused */, int32_t ___ch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsValidIANAEncoding(System.String)
extern "C"  bool XmlChar_IsValidIANAEncoding_m975885586 (Il2CppObject * __this /* static, unused */, String_t* ___ianaEncoding0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlChar::GetPredefinedEntity(System.String)
extern "C"  int32_t XmlChar_GetPredefinedEntity_m196254811 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
