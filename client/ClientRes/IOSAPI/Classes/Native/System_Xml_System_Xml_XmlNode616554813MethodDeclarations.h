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

// System.Xml.XmlNode
struct XmlNode_t616554813;
// System.Xml.XmlDocument
struct XmlDocument_t3649534162;
// System.Object
struct Il2CppObject;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_t3359885287;
// System.String
struct String_t;
// System.Xml.XmlNodeList
struct XmlNodeList_t497326455;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t2533799901;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t3981235968;
// System.Xml.XmlElement
struct XmlElement_t2877111883;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t486731501;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlDocument3649534162.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"
#include "System_Xml_System_Xml_XPath_XPathNodeType817388867.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_XmlSpace2880376877.h"
#include "System_Xml_System_Xml_XmlNode616554813.h"
#include "System_Xml_System_Xml_XmlElement2877111883.h"
#include "System_Xml_System_Xml_XmlNamespaceManager486731501.h"

// System.Void System.Xml.XmlNode::.ctor(System.Xml.XmlDocument)
extern "C"  void XmlNode__ctor_m3522709466 (XmlNode_t616554813 * __this, XmlDocument_t3649534162 * ___ownerDocument0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::.cctor()
extern "C"  void XmlNode__cctor_m1662095515 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XmlNode::System.ICloneable.Clone()
extern "C"  Il2CppObject * XmlNode_System_ICloneable_Clone_m102805311 (XmlNode_t616554813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Xml.XmlNode::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * XmlNode_System_Collections_IEnumerable_GetEnumerator_m4193915221 (XmlNode_t616554813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes()
extern "C"  XmlAttributeCollection_t3359885287 * XmlNode_get_Attributes_m1660841928 (XmlNode_t616554813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_BaseURI()
extern "C"  String_t* XmlNode_get_BaseURI_m2619224759 (XmlNode_t616554813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_ChildrenBaseURI()
extern "C"  String_t* XmlNode_get_ChildrenBaseURI_m430088738 (XmlNode_t616554813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes()
extern "C"  XmlNodeList_t497326455 * XmlNode_get_ChildNodes_m3902468502 (XmlNode_t616554813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_FirstChild()
extern "C"  XmlNode_t616554813 * XmlNode_get_FirstChild_m1915101059 (XmlNode_t616554813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNode::get_HasChildNodes()
extern "C"  bool XmlNode_get_HasChildNodes_m3186196548 (XmlNode_t616554813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_InnerText()
extern "C"  String_t* XmlNode_get_InnerText_m2632227395 (XmlNode_t616554813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::AppendChildValues(System.Text.StringBuilder&)
extern "C"  void XmlNode_AppendChildValues_m420033304 (XmlNode_t616554813 * __this, StringBuilder_t1221177846 ** ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNode::get_IsReadOnly()
extern "C"  bool XmlNode_get_IsReadOnly_m1952729373 (XmlNode_t616554813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_LastChild()
extern "C"  XmlNode_t616554813 * XmlNode_get_LastChild_m4275883203 (XmlNode_t616554813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_NamespaceURI()
extern "C"  String_t* XmlNode_get_NamespaceURI_m646755417 (XmlNode_t616554813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_NextSibling()
extern "C"  XmlNode_t616554813 * XmlNode_get_NextSibling_m1350294936 (XmlNode_t616554813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeType System.Xml.XmlNode::get_XPathNodeType()
extern "C"  int32_t XmlNode_get_XPathNodeType_m412237329 (XmlNode_t616554813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument()
extern "C"  XmlDocument_t3649534162 * XmlNode_get_OwnerDocument_m402760350 (XmlNode_t616554813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode()
extern "C"  XmlNode_t616554813 * XmlNode_get_ParentNode_m1570967687 (XmlNode_t616554813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_Prefix()
extern "C"  String_t* XmlNode_get_Prefix_m2751268896 (XmlNode_t616554813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_PreviousSibling()
extern "C"  XmlNode_t616554813 * XmlNode_get_PreviousSibling_m399228560 (XmlNode_t616554813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_Value()
extern "C"  String_t* XmlNode_get_Value_m1387005599 (XmlNode_t616554813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::set_Value(System.String)
extern "C"  void XmlNode_set_Value_m1012159498 (XmlNode_t616554813 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_XmlLang()
extern "C"  String_t* XmlNode_get_XmlLang_m1492819013 (XmlNode_t616554813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlNode::get_XmlSpace()
extern "C"  int32_t XmlNode_get_XmlSpace_m2514363902 (XmlNode_t616554813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::set_SchemaInfo(System.Xml.Schema.IXmlSchemaInfo)
extern "C"  void XmlNode_set_SchemaInfo_m3079673386 (XmlNode_t616554813 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode)
extern "C"  XmlNode_t616554813 * XmlNode_AppendChild_m2911115851 (XmlNode_t616554813 * __this, XmlNode_t616554813 * ___newChild0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode,System.Boolean)
extern "C"  XmlNode_t616554813 * XmlNode_AppendChild_m3112763946 (XmlNode_t616554813 * __this, XmlNode_t616554813 * ___newChild0, bool ___checkNodeType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::Clone()
extern "C"  XmlNode_t616554813 * XmlNode_Clone_m393058397 (XmlNode_t616554813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNavigator System.Xml.XmlNode::CreateNavigator()
extern "C"  XPathNavigator_t3981235968 * XmlNode_CreateNavigator_m2608939609 (XmlNode_t616554813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Xml.XmlNode::GetEnumerator()
extern "C"  Il2CppObject * XmlNode_GetEnumerator_m2088716184 (XmlNode_t616554813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::InsertBefore(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C"  XmlNode_t616554813 * XmlNode_InsertBefore_m1592303926 (XmlNode_t616554813 * __this, XmlNode_t616554813 * ___newChild0, XmlNode_t616554813 * ___refChild1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNode::IsAncestor(System.Xml.XmlNode)
extern "C"  bool XmlNode_IsAncestor_m2915269424 (XmlNode_t616554813 * __this, XmlNode_t616554813 * ___newChild0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::InsertBefore(System.Xml.XmlNode,System.Xml.XmlNode,System.Boolean,System.Boolean)
extern "C"  XmlNode_t616554813 * XmlNode_InsertBefore_m4219672004 (XmlNode_t616554813 * __this, XmlNode_t616554813 * ___newChild0, XmlNode_t616554813 * ___refChild1, bool ___checkNodeType2, bool ___raiseEvent3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::CheckNodeInsertion(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C"  void XmlNode_CheckNodeInsertion_m3528404273 (XmlNode_t616554813 * __this, XmlNode_t616554813 * ___newChild0, XmlNode_t616554813 * ___refChild1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::RemoveAll()
extern "C"  void XmlNode_RemoveAll_m1073525119 (XmlNode_t616554813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::RemoveChild(System.Xml.XmlNode)
extern "C"  XmlNode_t616554813 * XmlNode_RemoveChild_m3101399627 (XmlNode_t616554813 * __this, XmlNode_t616554813 * ___oldChild0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::CheckNodeRemoval()
extern "C"  void XmlNode_CheckNodeRemoval_m1429191652 (XmlNode_t616554813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::RemoveChild(System.Xml.XmlNode,System.Boolean)
extern "C"  XmlNode_t616554813 * XmlNode_RemoveChild_m4217957230 (XmlNode_t616554813 * __this, XmlNode_t616554813 * ___oldChild0, bool ___checkNodeType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlNode::get_AttributeOwnerElement()
extern "C"  XmlElement_t2877111883 * XmlNode_get_AttributeOwnerElement_m2428287616 (XmlNode_t616554813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::set_AttributeOwnerElement(System.Xml.XmlElement)
extern "C"  void XmlNode_set_AttributeOwnerElement_m1966514041 (XmlNode_t616554813 * __this, XmlElement_t2877111883 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeList System.Xml.XmlNode::SelectNodes(System.String)
extern "C"  XmlNodeList_t497326455 * XmlNode_SelectNodes_m4046574069 (XmlNode_t616554813 * __this, String_t* ___xpath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeList System.Xml.XmlNode::SelectNodes(System.String,System.Xml.XmlNamespaceManager)
extern "C"  XmlNodeList_t497326455 * XmlNode_SelectNodes_m3955629366 (XmlNode_t616554813 * __this, String_t* ___xpath0, XmlNamespaceManager_t486731501 * ___nsmgr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::SelectSingleNode(System.String)
extern "C"  XmlNode_t616554813 * XmlNode_SelectSingleNode_m1354503634 (XmlNode_t616554813 * __this, String_t* ___xpath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::SelectSingleNode(System.String,System.Xml.XmlNamespaceManager)
extern "C"  XmlNode_t616554813 * XmlNode_SelectSingleNode_m1274657031 (XmlNode_t616554813 * __this, String_t* ___xpath0, XmlNamespaceManager_t486731501 * ___nsmgr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNamespaceManager System.Xml.XmlNode::ConstructNamespaceManager()
extern "C"  XmlNamespaceManager_t486731501 * XmlNode_ConstructNamespaceManager_m2326634343 (XmlNode_t616554813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
