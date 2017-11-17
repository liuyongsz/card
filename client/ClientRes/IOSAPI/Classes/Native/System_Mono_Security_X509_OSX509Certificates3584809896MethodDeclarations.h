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

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IntPtr[]
struct IntPtrU5BU5D_t169632028;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3592472866;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_Mono_Security_X509_OSX509Certificates_SecTr1984565408.h"
#include "Mono_Security_Mono_Security_X509_X509CertificateCo3592472865.h"

// System.Void Mono.Security.X509.OSX509Certificates::.cctor()
extern "C"  void OSX509Certificates__cctor_m1823235584 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Security.X509.OSX509Certificates::SecCertificateCreateWithData(System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t OSX509Certificates_SecCertificateCreateWithData_m2926687940 (Il2CppObject * __this /* static, unused */, IntPtr_t ___allocator0, IntPtr_t ___nsdataRef1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.OSX509Certificates::SecTrustCreateWithCertificates(System.IntPtr,System.IntPtr,System.IntPtr&)
extern "C"  int32_t OSX509Certificates_SecTrustCreateWithCertificates_m525119422 (Il2CppObject * __this /* static, unused */, IntPtr_t ___certOrCertArray0, IntPtr_t ___policies1, IntPtr_t* ___sectrustref2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Security.X509.OSX509Certificates::SecPolicyCreateSSL(System.Int32,System.IntPtr)
extern "C"  IntPtr_t OSX509Certificates_SecPolicyCreateSSL_m1432818148 (Il2CppObject * __this /* static, unused */, int32_t ___server0, IntPtr_t ___cfStringHostname1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.OSX509Certificates::SecTrustEvaluate(System.IntPtr,Mono.Security.X509.OSX509Certificates/SecTrustResult&)
extern "C"  int32_t OSX509Certificates_SecTrustEvaluate_m1792892941 (Il2CppObject * __this /* static, unused */, IntPtr_t ___secTrustRef0, int32_t* ___secTrustResultTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Security.X509.OSX509Certificates::CFDataCreate(System.IntPtr,System.Byte*,System.IntPtr)
extern "C"  IntPtr_t OSX509Certificates_CFDataCreate_m216413830 (Il2CppObject * __this /* static, unused */, IntPtr_t ___allocator0, uint8_t* ___bytes1, IntPtr_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.OSX509Certificates::CFRelease(System.IntPtr)
extern "C"  void OSX509Certificates_CFRelease_m2060304737 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Security.X509.OSX509Certificates::CFArrayCreate(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t OSX509Certificates_CFArrayCreate_m2541019176 (Il2CppObject * __this /* static, unused */, IntPtr_t ___allocator0, IntPtr_t ___values1, IntPtr_t ___numValues2, IntPtr_t ___callbacks3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Security.X509.OSX509Certificates::MakeCFData(System.Byte[])
extern "C"  IntPtr_t OSX509Certificates_MakeCFData_m3157530988 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Security.X509.OSX509Certificates::FromIntPtrs(System.IntPtr[])
extern "C"  IntPtr_t OSX509Certificates_FromIntPtrs_m1498809044 (Il2CppObject * __this /* static, unused */, IntPtrU5BU5D_t169632028* ___values0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.OSX509Certificates/SecTrustResult Mono.Security.X509.OSX509Certificates::TrustEvaluateSsl(Mono.Security.X509.X509CertificateCollection)
extern "C"  int32_t OSX509Certificates_TrustEvaluateSsl_m3202803325 (Il2CppObject * __this /* static, unused */, X509CertificateCollection_t3592472866 * ___certificates0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.OSX509Certificates/SecTrustResult Mono.Security.X509.OSX509Certificates::_TrustEvaluateSsl(Mono.Security.X509.X509CertificateCollection)
extern "C"  int32_t OSX509Certificates__TrustEvaluateSsl_m3372339288 (Il2CppObject * __this /* static, unused */, X509CertificateCollection_t3592472866 * ___certificates0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
