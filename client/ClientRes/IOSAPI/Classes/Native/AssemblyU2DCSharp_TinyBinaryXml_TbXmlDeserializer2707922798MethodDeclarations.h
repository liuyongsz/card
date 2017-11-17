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

// TinyBinaryXml.TbXmlDeserializer
struct TbXmlDeserializer_t2707922798;
// TinyBinaryXml.TbXml
struct TbXml_t2231173011;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IO.BinaryReader
struct BinaryReader_t2491843768;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_BinaryReader2491843768.h"
#include "AssemblyU2DCSharp_TinyBinaryXml_TbXml2231173011.h"

// System.Void TinyBinaryXml.TbXmlDeserializer::.ctor()
extern "C"  void TbXmlDeserializer__ctor_m2461194035 (TbXmlDeserializer_t2707922798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TinyBinaryXml.TbXml TinyBinaryXml.TbXmlDeserializer::DeserializeXmlBytes(System.Byte[])
extern "C"  TbXml_t2231173011 * TbXmlDeserializer_DeserializeXmlBytes_m2627212577 (TbXmlDeserializer_t2707922798 * __this, ByteU5BU5D_t3397334013* ___xmlBytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TinyBinaryXml.TbXmlDeserializer::DeserializeStringPool(System.IO.BinaryReader,TinyBinaryXml.TbXml)
extern "C"  void TbXmlDeserializer_DeserializeStringPool_m3588260001 (TbXmlDeserializer_t2707922798 * __this, BinaryReader_t2491843768 * ___binaryReader0, TbXml_t2231173011 * ___tbXml1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TinyBinaryXml.TbXmlDeserializer::DeserializeValuePool(System.IO.BinaryReader,TinyBinaryXml.TbXml)
extern "C"  void TbXmlDeserializer_DeserializeValuePool_m3976930635 (TbXmlDeserializer_t2707922798 * __this, BinaryReader_t2491843768 * ___binaryReader0, TbXml_t2231173011 * ___tbXml1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TinyBinaryXml.TbXmlDeserializer::DeserializeNodeTemplate(System.IO.BinaryReader,System.UInt16,TinyBinaryXml.TbXml)
extern "C"  void TbXmlDeserializer_DeserializeNodeTemplate_m3765000656 (TbXmlDeserializer_t2707922798 * __this, BinaryReader_t2491843768 * ___binaryReader0, uint16_t ___index1, TbXml_t2231173011 * ___tbXml2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TinyBinaryXml.TbXmlDeserializer::DeserializeNode(System.IO.BinaryReader,System.UInt16,TinyBinaryXml.TbXml)
extern "C"  void TbXmlDeserializer_DeserializeNode_m80994298 (TbXmlDeserializer_t2707922798 * __this, BinaryReader_t2491843768 * ___binaryReader0, uint16_t ___index1, TbXml_t2231173011 * ___tbXml2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
