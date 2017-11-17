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

// System.Xml.XmlDocument
struct XmlDocument_t3649534162;
// System.Xml.XmlImplementation
struct XmlImplementation_t1664517635;
// System.Xml.XmlNameTable
struct XmlNameTable_t1345805268;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t1287616130;
// System.Xml.XmlAttribute
struct XmlAttribute_t175731005;
// System.String
struct String_t;
// System.Xml.XmlElement
struct XmlElement_t2877111883;
// System.Xml.XmlDocumentType
struct XmlDocumentType_t824160610;
// System.Xml.XmlNameEntryCache
struct XmlNameEntryCache_t3855584002;
// System.Xml.XmlResolver
struct XmlResolver_t2024571559;
// System.Xml.XmlNode
struct XmlNode_t616554813;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t2533799901;
// System.Xml.XmlCDataSection
struct XmlCDataSection_t1124775823;
// System.Xml.XmlComment
struct XmlComment_t3999331572;
// System.Xml.XmlDocumentFragment
struct XmlDocumentFragment_t3083262362;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1113953282;
// System.Xml.XmlEntityReference
struct XmlEntityReference_t3053868353;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t3981235968;
// System.Xml.XmlProcessingInstruction
struct XmlProcessingInstruction_t431557540;
// System.Xml.XmlSignificantWhitespace
struct XmlSignificantWhitespace_t1224054391;
// System.Xml.XmlText
struct XmlText_t4111601336;
// System.Xml.XmlWhitespace
struct XmlWhitespace_t2557770518;
// System.Xml.XmlDeclaration
struct XmlDeclaration_t1545359137;
// System.IO.Stream
struct Stream_t3255436806;
// System.Xml.XmlReader
struct XmlReader_t3675626668;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlImplementation1664517635.h"
#include "System_Xml_System_Xml_XmlNameTable1345805268.h"
#include "System_Xml_System_Xml_XmlLinkedNode1287616130.h"
#include "System_Xml_System_Xml_XmlNodeType739504597.h"
#include "System_Xml_System_Xml_XPath_XPathNodeType817388867.h"
#include "System_Xml_System_Xml_XmlSpace2880376877.h"
#include "System_Xml_System_Xml_XmlAttribute175731005.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_Mono_Xml_DTDObjectModel1113953282.h"
#include "System_Xml_System_Xml_XmlNode616554813.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "System_Xml_System_Xml_XmlReader3675626668.h"

// System.Void System.Xml.XmlDocument::.ctor()
extern "C"  void XmlDocument__ctor_m3336214851 (XmlDocument_t3649534162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::.ctor(System.Xml.XmlImplementation)
extern "C"  void XmlDocument__ctor_m1629046080 (XmlDocument_t3649534162 * __this, XmlImplementation_t1664517635 * ___imp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::.ctor(System.Xml.XmlImplementation,System.Xml.XmlNameTable)
extern "C"  void XmlDocument__ctor_m724545998 (XmlDocument_t3649534162 * __this, XmlImplementation_t1664517635 * ___impl0, XmlNameTable_t1345805268 * ___nt1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::.cctor()
extern "C"  void XmlDocument__cctor_m3596304516 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlDocument::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C"  XmlLinkedNode_t1287616130 * XmlDocument_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m1061859648 (XmlDocument_t3649534162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C"  void XmlDocument_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m1704713625 (XmlDocument_t3649534162 * __this, XmlLinkedNode_t1287616130 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::get_NsNodeXml()
extern "C"  XmlAttribute_t175731005 * XmlDocument_get_NsNodeXml_m1125606494 (XmlDocument_t3649534162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::get_BaseURI()
extern "C"  String_t* XmlDocument_get_BaseURI_m1481374712 (XmlDocument_t3649534162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlDocument::get_DocumentElement()
extern "C"  XmlElement_t2877111883 * XmlDocument_get_DocumentElement_m898495187 (XmlDocument_t3649534162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocumentType System.Xml.XmlDocument::get_DocumentType()
extern "C"  XmlDocumentType_t824160610 * XmlDocument_get_DocumentType_m3596136406 (XmlDocument_t3649534162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocument::get_IsReadOnly()
extern "C"  bool XmlDocument_get_IsReadOnly_m3102934292 (XmlDocument_t3649534162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::get_LocalName()
extern "C"  String_t* XmlDocument_get_LocalName_m771830597 (XmlDocument_t3649534162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::get_Name()
extern "C"  String_t* XmlDocument_get_Name_m2430467054 (XmlDocument_t3649534162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameEntryCache System.Xml.XmlDocument::get_NameCache()
extern "C"  XmlNameEntryCache_t3855584002 * XmlDocument_get_NameCache_m3126477812 (XmlDocument_t3649534162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlDocument::get_NameTable()
extern "C"  XmlNameTable_t1345805268 * XmlDocument_get_NameTable_m2493009838 (XmlDocument_t3649534162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlDocument::get_NodeType()
extern "C"  int32_t XmlDocument_get_NodeType_m3176886436 (XmlDocument_t3649534162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeType System.Xml.XmlDocument::get_XPathNodeType()
extern "C"  int32_t XmlDocument_get_XPathNodeType_m816680882 (XmlDocument_t3649534162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.XmlDocument::get_OwnerDocument()
extern "C"  XmlDocument_t3649534162 * XmlDocument_get_OwnerDocument_m2333441421 (XmlDocument_t3649534162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocument::get_PreserveWhitespace()
extern "C"  bool XmlDocument_get_PreserveWhitespace_m1943240417 (XmlDocument_t3649534162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver System.Xml.XmlDocument::get_Resolver()
extern "C"  XmlResolver_t2024571559 * XmlDocument_get_Resolver_m1444668624 (XmlDocument_t3649534162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::get_XmlLang()
extern "C"  String_t* XmlDocument_get_XmlLang_m2970763012 (XmlDocument_t3649534162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlDocument::get_XmlSpace()
extern "C"  int32_t XmlDocument_get_XmlSpace_m1891711729 (XmlDocument_t3649534162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::get_ParentNode()
extern "C"  XmlNode_t616554813 * XmlDocument_get_ParentNode_m702500856 (XmlDocument_t3649534162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::set_SchemaInfo(System.Xml.Schema.IXmlSchemaInfo)
extern "C"  void XmlDocument_set_SchemaInfo_m2332364521 (XmlDocument_t3649534162 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::AddIdenticalAttribute(System.Xml.XmlAttribute)
extern "C"  void XmlDocument_AddIdenticalAttribute_m656359138 (XmlDocument_t3649534162 * __this, XmlAttribute_t175731005 * ___attr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::CloneNode(System.Boolean)
extern "C"  XmlNode_t616554813 * XmlDocument_CloneNode_m3521203409 (XmlDocument_t3649534162 * __this, bool ___deep0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::CreateAttribute(System.String)
extern "C"  XmlAttribute_t175731005 * XmlDocument_CreateAttribute_m280353419 (XmlDocument_t3649534162 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::CreateAttribute(System.String,System.String)
extern "C"  XmlAttribute_t175731005 * XmlDocument_CreateAttribute_m2316762397 (XmlDocument_t3649534162 * __this, String_t* ___qualifiedName0, String_t* ___namespaceURI1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::CreateAttribute(System.String,System.String,System.String)
extern "C"  XmlAttribute_t175731005 * XmlDocument_CreateAttribute_m3351578827 (XmlDocument_t3649534162 * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___namespaceURI2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::CreateAttribute(System.String,System.String,System.String,System.Boolean,System.Boolean)
extern "C"  XmlAttribute_t175731005 * XmlDocument_CreateAttribute_m1536068695 (XmlDocument_t3649534162 * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___namespaceURI2, bool ___atomizedNames3, bool ___checkNamespace4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlCDataSection System.Xml.XmlDocument::CreateCDataSection(System.String)
extern "C"  XmlCDataSection_t1124775823 * XmlDocument_CreateCDataSection_m3138427763 (XmlDocument_t3649534162 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlComment System.Xml.XmlDocument::CreateComment(System.String)
extern "C"  XmlComment_t3999331572 * XmlDocument_CreateComment_m933351467 (XmlDocument_t3649534162 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocumentFragment System.Xml.XmlDocument::CreateDocumentFragment()
extern "C"  XmlDocumentFragment_t3083262362 * XmlDocument_CreateDocumentFragment_m1619733889 (XmlDocument_t3649534162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocumentType System.Xml.XmlDocument::CreateDocumentType(System.String,System.String,System.String,System.String)
extern "C"  XmlDocumentType_t824160610 * XmlDocument_CreateDocumentType_m1547540585 (XmlDocument_t3649534162 * __this, String_t* ___name0, String_t* ___publicId1, String_t* ___systemId2, String_t* ___internalSubset3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocumentType System.Xml.XmlDocument::CreateDocumentType(Mono.Xml.DTDObjectModel)
extern "C"  XmlDocumentType_t824160610 * XmlDocument_CreateDocumentType_m3596356661 (XmlDocument_t3649534162 * __this, DTDObjectModel_t1113953282 * ___dtd0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlDocument::CreateElement(System.String,System.String,System.String)
extern "C"  XmlElement_t2877111883 * XmlDocument_CreateElement_m4056191819 (XmlDocument_t3649534162 * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___namespaceURI2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlDocument::CreateElement(System.String,System.String,System.String,System.Boolean)
extern "C"  XmlElement_t2877111883 * XmlDocument_CreateElement_m1018818632 (XmlDocument_t3649534162 * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___namespaceURI2, bool ___nameAtomized3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlEntityReference System.Xml.XmlDocument::CreateEntityReference(System.String)
extern "C"  XmlEntityReference_t3053868353 * XmlDocument_CreateEntityReference_m868027275 (XmlDocument_t3649534162 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNavigator System.Xml.XmlDocument::CreateNavigator()
extern "C"  XPathNavigator_t3981235968 * XmlDocument_CreateNavigator_m3761970368 (XmlDocument_t3649534162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNavigator System.Xml.XmlDocument::CreateNavigator(System.Xml.XmlNode)
extern "C"  XPathNavigator_t3981235968 * XmlDocument_CreateNavigator_m1094971295 (XmlDocument_t3649534162 * __this, XmlNode_t616554813 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlProcessingInstruction System.Xml.XmlDocument::CreateProcessingInstruction(System.String,System.String)
extern "C"  XmlProcessingInstruction_t431557540 * XmlDocument_CreateProcessingInstruction_m3828260893 (XmlDocument_t3649534162 * __this, String_t* ___target0, String_t* ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSignificantWhitespace System.Xml.XmlDocument::CreateSignificantWhitespace(System.String)
extern "C"  XmlSignificantWhitespace_t1224054391 * XmlDocument_CreateSignificantWhitespace_m4238114763 (XmlDocument_t3649534162 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlText System.Xml.XmlDocument::CreateTextNode(System.String)
extern "C"  XmlText_t4111601336 * XmlDocument_CreateTextNode_m2813065023 (XmlDocument_t3649534162 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlWhitespace System.Xml.XmlDocument::CreateWhitespace(System.String)
extern "C"  XmlWhitespace_t2557770518 * XmlDocument_CreateWhitespace_m4199193223 (XmlDocument_t3649534162 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDeclaration System.Xml.XmlDocument::CreateXmlDeclaration(System.String,System.String,System.String)
extern "C"  XmlDeclaration_t1545359137 * XmlDocument_CreateXmlDeclaration_m871718864 (XmlDocument_t3649534162 * __this, String_t* ___version0, String_t* ___encoding1, String_t* ___standalone2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlDocument::GetElementById(System.String)
extern "C"  XmlElement_t2877111883 * XmlDocument_GetElementById_m4020941027 (XmlDocument_t3649534162 * __this, String_t* ___elementId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::GetIdenticalAttribute(System.String)
extern "C"  XmlAttribute_t175731005 * XmlDocument_GetIdenticalAttribute_m3274936438 (XmlDocument_t3649534162 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::ImportNode(System.Xml.XmlNode,System.Boolean)
extern "C"  XmlNode_t616554813 * XmlDocument_ImportNode_m4014430722 (XmlDocument_t3649534162 * __this, XmlNode_t616554813 * ___node0, bool ___deep1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::Load(System.IO.Stream)
extern "C"  void XmlDocument_Load_m3325867682 (XmlDocument_t3649534162 * __this, Stream_t3255436806 * ___inStream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::Load(System.Xml.XmlReader)
extern "C"  void XmlDocument_Load_m3958632933 (XmlDocument_t3649534162 * __this, XmlReader_t3675626668 * ___xmlReader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::LoadXml(System.String)
extern "C"  void XmlDocument_LoadXml_m3115571722 (XmlDocument_t3649534162 * __this, String_t* ___xml0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeChanged(System.Xml.XmlNode,System.Xml.XmlNode,System.String,System.String)
extern "C"  void XmlDocument_onNodeChanged_m545992510 (XmlDocument_t3649534162 * __this, XmlNode_t616554813 * ___node0, XmlNode_t616554813 * ___parent1, String_t* ___oldValue2, String_t* ___newValue3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeChanging(System.Xml.XmlNode,System.Xml.XmlNode,System.String,System.String)
extern "C"  void XmlDocument_onNodeChanging_m3715909245 (XmlDocument_t3649534162 * __this, XmlNode_t616554813 * ___node0, XmlNode_t616554813 * ___parent1, String_t* ___oldValue2, String_t* ___newValue3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeInserted(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C"  void XmlDocument_onNodeInserted_m4055543468 (XmlDocument_t3649534162 * __this, XmlNode_t616554813 * ___node0, XmlNode_t616554813 * ___newParent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeInserting(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C"  void XmlDocument_onNodeInserting_m2534607721 (XmlDocument_t3649534162 * __this, XmlNode_t616554813 * ___node0, XmlNode_t616554813 * ___newParent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeRemoved(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C"  void XmlDocument_onNodeRemoved_m1427813038 (XmlDocument_t3649534162 * __this, XmlNode_t616554813 * ___node0, XmlNode_t616554813 * ___oldParent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeRemoving(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C"  void XmlDocument_onNodeRemoving_m2127797133 (XmlDocument_t3649534162 * __this, XmlNode_t616554813 * ___node0, XmlNode_t616554813 * ___oldParent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::ParseName(System.String,System.String&,System.String&)
extern "C"  void XmlDocument_ParseName_m1685230799 (XmlDocument_t3649534162 * __this, String_t* ___name0, String_t** ___prefix1, String_t** ___localName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::ReadAttributeNode(System.Xml.XmlReader)
extern "C"  XmlAttribute_t175731005 * XmlDocument_ReadAttributeNode_m3689034291 (XmlDocument_t3649534162 * __this, XmlReader_t3675626668 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::ReadAttributeNodeValue(System.Xml.XmlReader,System.Xml.XmlAttribute)
extern "C"  void XmlDocument_ReadAttributeNodeValue_m3209302471 (XmlDocument_t3649534162 * __this, XmlReader_t3675626668 * ___reader0, XmlAttribute_t175731005 * ___attribute1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::ReadNode(System.Xml.XmlReader)
extern "C"  XmlNode_t616554813 * XmlDocument_ReadNode_m1226928635 (XmlDocument_t3649534162 * __this, XmlReader_t3675626668 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::ReadNodeCore(System.Xml.XmlReader)
extern "C"  XmlNode_t616554813 * XmlDocument_ReadNodeCore_m3389235880 (XmlDocument_t3649534162 * __this, XmlReader_t3675626668 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::MakeReaderErrorMessage(System.String,System.Xml.XmlReader)
extern "C"  String_t* XmlDocument_MakeReaderErrorMessage_m3440109254 (XmlDocument_t3649534162 * __this, String_t* ___message0, XmlReader_t3675626668 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::RemoveIdenticalAttribute(System.String)
extern "C"  void XmlDocument_RemoveIdenticalAttribute_m3441209610 (XmlDocument_t3649534162 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::AddDefaultNameTableKeys()
extern "C"  void XmlDocument_AddDefaultNameTableKeys_m4281712484 (XmlDocument_t3649534162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::CheckIdTableUpdate(System.Xml.XmlAttribute,System.String,System.String)
extern "C"  void XmlDocument_CheckIdTableUpdate_m2358339158 (XmlDocument_t3649534162 * __this, XmlAttribute_t175731005 * ___attr0, String_t* ___oldValue1, String_t* ___newValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
