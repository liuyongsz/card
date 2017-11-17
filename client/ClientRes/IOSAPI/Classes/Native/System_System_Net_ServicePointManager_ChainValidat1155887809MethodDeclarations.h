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

// System.Net.ServicePointManager/ChainValidationHelper
struct ChainValidationHelper_t1155887809;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t1782558132;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3592472866;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t777637347;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t4056456767;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t324051958;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "Mono_Security_Mono_Security_X509_X509CertificateCo3592472865.h"
#include "System_System_Security_Cryptography_X509Certificate777637347.h"
#include "System_System_Net_Security_SslPolicyErrors1928581431.h"
#include "System_System_Security_Cryptography_X509Certificat4056456767.h"
#include "Mono_Security_Mono_Security_X509_X509Certificate324051957.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Net.ServicePointManager/ChainValidationHelper::.ctor(System.Object)
extern "C"  void ChainValidationHelper__ctor_m383905695 (ChainValidationHelper_t1155887809 * __this, Il2CppObject * ___sender0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager/ChainValidationHelper::.cctor()
extern "C"  void ChainValidationHelper__cctor_m2829708252 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.ServicePointManager/ChainValidationHelper::get_Host()
extern "C"  String_t* ChainValidationHelper_get_Host_m2966189161 (ChainValidationHelper_t1155887809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult System.Net.ServicePointManager/ChainValidationHelper::ValidateChain(Mono.Security.X509.X509CertificateCollection)
extern "C"  ValidationResult_t1782558132 * ChainValidationHelper_ValidateChain_m2891897375 (ChainValidationHelper_t1155887809 * __this, X509CertificateCollection_t3592472866 * ___certs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePointManager/ChainValidationHelper::GetStatusFromChain(System.Security.Cryptography.X509Certificates.X509Chain)
extern "C"  int32_t ChainValidationHelper_GetStatusFromChain_m3385791814 (Il2CppObject * __this /* static, unused */, X509Chain_t777637347 * ___chain0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Security.SslPolicyErrors System.Net.ServicePointManager/ChainValidationHelper::GetErrorsFromChain(System.Security.Cryptography.X509Certificates.X509Chain)
extern "C"  int32_t ChainValidationHelper_GetErrorsFromChain_m1054613167 (Il2CppObject * __this /* static, unused */, X509Chain_t777637347 * ___chain0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/ChainValidationHelper::CheckCertificateUsage(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  bool ChainValidationHelper_CheckCertificateUsage_m3045989123 (Il2CppObject * __this /* static, unused */, X509Certificate2_t4056456767 * ___cert0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/ChainValidationHelper::CheckServerIdentity(Mono.Security.X509.X509Certificate,System.String)
extern "C"  bool ChainValidationHelper_CheckServerIdentity_m3917137456 (Il2CppObject * __this /* static, unused */, X509Certificate_t324051958 * ___cert0, String_t* ___targetHost1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/ChainValidationHelper::CheckDomainName(System.String,System.String)
extern "C"  bool ChainValidationHelper_CheckDomainName_m967333392 (Il2CppObject * __this /* static, unused */, String_t* ___subjectName0, String_t* ___targetHost1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/ChainValidationHelper::Match(System.String,System.String)
extern "C"  bool ChainValidationHelper_Match_m893347302 (Il2CppObject * __this /* static, unused */, String_t* ___hostname0, String_t* ___pattern1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
