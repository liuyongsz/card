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

// Photon.SocketServer.Security.DiffieHellmanCryptoProvider
struct DiffieHellmanCryptoProvider_t4202550208;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Photon.SocketServer.Numeric.BigInteger
struct BigInteger_t3529225576;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_Photon_SocketServer_Numeric_BigInte3529225576.h"

// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::.ctor()
extern "C"  void DiffieHellmanCryptoProvider__ctor_m2046452942 (DiffieHellmanCryptoProvider_t4202550208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::get_PublicKey()
extern "C"  ByteU5BU5D_t3397334013* DiffieHellmanCryptoProvider_get_PublicKey_m3028472447 (DiffieHellmanCryptoProvider_t4202550208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::get_SharedKey()
extern "C"  ByteU5BU5D_t3397334013* DiffieHellmanCryptoProvider_get_SharedKey_m3013772399 (DiffieHellmanCryptoProvider_t4202550208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::DeriveSharedKey(System.Byte[])
extern "C"  void DiffieHellmanCryptoProvider_DeriveSharedKey_m2840057894 (DiffieHellmanCryptoProvider_t4202550208 * __this, ByteU5BU5D_t3397334013* ___otherPartyPublicKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Encrypt(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* DiffieHellmanCryptoProvider_Encrypt_m497231038 (DiffieHellmanCryptoProvider_t4202550208 * __this, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Encrypt(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* DiffieHellmanCryptoProvider_Encrypt_m2682885064 (DiffieHellmanCryptoProvider_t4202550208 * __this, ByteU5BU5D_t3397334013* ___data0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Decrypt(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* DiffieHellmanCryptoProvider_Decrypt_m1585169508 (DiffieHellmanCryptoProvider_t4202550208 * __this, ByteU5BU5D_t3397334013* ___data0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Dispose()
extern "C"  void DiffieHellmanCryptoProvider_Dispose_m370130947 (DiffieHellmanCryptoProvider_t4202550208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Dispose(System.Boolean)
extern "C"  void DiffieHellmanCryptoProvider_Dispose_m2802495842 (DiffieHellmanCryptoProvider_t4202550208 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculatePublicKey()
extern "C"  BigInteger_t3529225576 * DiffieHellmanCryptoProvider_CalculatePublicKey_m470298400 (DiffieHellmanCryptoProvider_t4202550208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculateSharedKey(Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t3529225576 * DiffieHellmanCryptoProvider_CalculateSharedKey_m1841876457 (DiffieHellmanCryptoProvider_t4202550208 * __this, BigInteger_t3529225576 * ___otherPartyPublicKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::GenerateRandomSecret(System.Int32)
extern "C"  BigInteger_t3529225576 * DiffieHellmanCryptoProvider_GenerateRandomSecret_m1254723745 (DiffieHellmanCryptoProvider_t4202550208 * __this, int32_t ___secretLength0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::.cctor()
extern "C"  void DiffieHellmanCryptoProvider__cctor_m2009230691 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
