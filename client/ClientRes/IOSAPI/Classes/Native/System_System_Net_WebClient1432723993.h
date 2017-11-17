#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Net.ICredentials
struct ICredentials_t3855617113;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t3028142837;
// System.Uri
struct Uri_t19570940;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t3047564564;
// System.Threading.Thread
struct Thread_t241561612;
// System.Text.Encoding
struct Encoding_t663144255;
// System.Net.IWebProxy
struct IWebProxy_t3916853445;
// System.Net.DownloadDataCompletedEventHandler
struct DownloadDataCompletedEventHandler_t4142697621;
// System.ComponentModel.AsyncCompletedEventHandler
struct AsyncCompletedEventHandler_t626974191;
// System.Net.DownloadProgressChangedEventHandler
struct DownloadProgressChangedEventHandler_t3683154451;
// System.Net.DownloadStringCompletedEventHandler
struct DownloadStringCompletedEventHandler_t1433233068;
// System.Net.OpenReadCompletedEventHandler
struct OpenReadCompletedEventHandler_t2999865175;
// System.Net.OpenWriteCompletedEventHandler
struct OpenWriteCompletedEventHandler_t1007953034;
// System.Net.UploadDataCompletedEventHandler
struct UploadDataCompletedEventHandler_t1548853072;
// System.Net.UploadFileCompletedEventHandler
struct UploadFileCompletedEventHandler_t3651750422;
// System.Net.UploadProgressChangedEventHandler
struct UploadProgressChangedEventHandler_t4227408420;
// System.Net.UploadStringCompletedEventHandler
struct UploadStringCompletedEventHandler_t495871123;
// System.Net.UploadValuesCompletedEventHandler
struct UploadValuesCompletedEventHandler_t563858374;

#include "System_System_ComponentModel_Component2826673791.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebClient
struct  WebClient_t1432723993  : public Component_t2826673791
{
public:
	// System.Net.ICredentials System.Net.WebClient::credentials
	Il2CppObject * ___credentials_6;
	// System.Net.WebHeaderCollection System.Net.WebClient::headers
	WebHeaderCollection_t3028142837 * ___headers_7;
	// System.Net.WebHeaderCollection System.Net.WebClient::responseHeaders
	WebHeaderCollection_t3028142837 * ___responseHeaders_8;
	// System.Uri System.Net.WebClient::baseAddress
	Uri_t19570940 * ___baseAddress_9;
	// System.String System.Net.WebClient::baseString
	String_t* ___baseString_10;
	// System.Collections.Specialized.NameValueCollection System.Net.WebClient::queryString
	NameValueCollection_t3047564564 * ___queryString_11;
	// System.Boolean System.Net.WebClient::is_busy
	bool ___is_busy_12;
	// System.Boolean System.Net.WebClient::async
	bool ___async_13;
	// System.Threading.Thread System.Net.WebClient::async_thread
	Thread_t241561612 * ___async_thread_14;
	// System.Text.Encoding System.Net.WebClient::encoding
	Encoding_t663144255 * ___encoding_15;
	// System.Net.IWebProxy System.Net.WebClient::proxy
	Il2CppObject * ___proxy_16;
	// System.Net.DownloadDataCompletedEventHandler System.Net.WebClient::DownloadDataCompleted
	DownloadDataCompletedEventHandler_t4142697621 * ___DownloadDataCompleted_17;
	// System.ComponentModel.AsyncCompletedEventHandler System.Net.WebClient::DownloadFileCompleted
	AsyncCompletedEventHandler_t626974191 * ___DownloadFileCompleted_18;
	// System.Net.DownloadProgressChangedEventHandler System.Net.WebClient::DownloadProgressChanged
	DownloadProgressChangedEventHandler_t3683154451 * ___DownloadProgressChanged_19;
	// System.Net.DownloadStringCompletedEventHandler System.Net.WebClient::DownloadStringCompleted
	DownloadStringCompletedEventHandler_t1433233068 * ___DownloadStringCompleted_20;
	// System.Net.OpenReadCompletedEventHandler System.Net.WebClient::OpenReadCompleted
	OpenReadCompletedEventHandler_t2999865175 * ___OpenReadCompleted_21;
	// System.Net.OpenWriteCompletedEventHandler System.Net.WebClient::OpenWriteCompleted
	OpenWriteCompletedEventHandler_t1007953034 * ___OpenWriteCompleted_22;
	// System.Net.UploadDataCompletedEventHandler System.Net.WebClient::UploadDataCompleted
	UploadDataCompletedEventHandler_t1548853072 * ___UploadDataCompleted_23;
	// System.Net.UploadFileCompletedEventHandler System.Net.WebClient::UploadFileCompleted
	UploadFileCompletedEventHandler_t3651750422 * ___UploadFileCompleted_24;
	// System.Net.UploadProgressChangedEventHandler System.Net.WebClient::UploadProgressChanged
	UploadProgressChangedEventHandler_t4227408420 * ___UploadProgressChanged_25;
	// System.Net.UploadStringCompletedEventHandler System.Net.WebClient::UploadStringCompleted
	UploadStringCompletedEventHandler_t495871123 * ___UploadStringCompleted_26;
	// System.Net.UploadValuesCompletedEventHandler System.Net.WebClient::UploadValuesCompleted
	UploadValuesCompletedEventHandler_t563858374 * ___UploadValuesCompleted_27;

public:
	inline static int32_t get_offset_of_credentials_6() { return static_cast<int32_t>(offsetof(WebClient_t1432723993, ___credentials_6)); }
	inline Il2CppObject * get_credentials_6() const { return ___credentials_6; }
	inline Il2CppObject ** get_address_of_credentials_6() { return &___credentials_6; }
	inline void set_credentials_6(Il2CppObject * value)
	{
		___credentials_6 = value;
		Il2CppCodeGenWriteBarrier(&___credentials_6, value);
	}

	inline static int32_t get_offset_of_headers_7() { return static_cast<int32_t>(offsetof(WebClient_t1432723993, ___headers_7)); }
	inline WebHeaderCollection_t3028142837 * get_headers_7() const { return ___headers_7; }
	inline WebHeaderCollection_t3028142837 ** get_address_of_headers_7() { return &___headers_7; }
	inline void set_headers_7(WebHeaderCollection_t3028142837 * value)
	{
		___headers_7 = value;
		Il2CppCodeGenWriteBarrier(&___headers_7, value);
	}

	inline static int32_t get_offset_of_responseHeaders_8() { return static_cast<int32_t>(offsetof(WebClient_t1432723993, ___responseHeaders_8)); }
	inline WebHeaderCollection_t3028142837 * get_responseHeaders_8() const { return ___responseHeaders_8; }
	inline WebHeaderCollection_t3028142837 ** get_address_of_responseHeaders_8() { return &___responseHeaders_8; }
	inline void set_responseHeaders_8(WebHeaderCollection_t3028142837 * value)
	{
		___responseHeaders_8 = value;
		Il2CppCodeGenWriteBarrier(&___responseHeaders_8, value);
	}

	inline static int32_t get_offset_of_baseAddress_9() { return static_cast<int32_t>(offsetof(WebClient_t1432723993, ___baseAddress_9)); }
	inline Uri_t19570940 * get_baseAddress_9() const { return ___baseAddress_9; }
	inline Uri_t19570940 ** get_address_of_baseAddress_9() { return &___baseAddress_9; }
	inline void set_baseAddress_9(Uri_t19570940 * value)
	{
		___baseAddress_9 = value;
		Il2CppCodeGenWriteBarrier(&___baseAddress_9, value);
	}

	inline static int32_t get_offset_of_baseString_10() { return static_cast<int32_t>(offsetof(WebClient_t1432723993, ___baseString_10)); }
	inline String_t* get_baseString_10() const { return ___baseString_10; }
	inline String_t** get_address_of_baseString_10() { return &___baseString_10; }
	inline void set_baseString_10(String_t* value)
	{
		___baseString_10 = value;
		Il2CppCodeGenWriteBarrier(&___baseString_10, value);
	}

	inline static int32_t get_offset_of_queryString_11() { return static_cast<int32_t>(offsetof(WebClient_t1432723993, ___queryString_11)); }
	inline NameValueCollection_t3047564564 * get_queryString_11() const { return ___queryString_11; }
	inline NameValueCollection_t3047564564 ** get_address_of_queryString_11() { return &___queryString_11; }
	inline void set_queryString_11(NameValueCollection_t3047564564 * value)
	{
		___queryString_11 = value;
		Il2CppCodeGenWriteBarrier(&___queryString_11, value);
	}

	inline static int32_t get_offset_of_is_busy_12() { return static_cast<int32_t>(offsetof(WebClient_t1432723993, ___is_busy_12)); }
	inline bool get_is_busy_12() const { return ___is_busy_12; }
	inline bool* get_address_of_is_busy_12() { return &___is_busy_12; }
	inline void set_is_busy_12(bool value)
	{
		___is_busy_12 = value;
	}

	inline static int32_t get_offset_of_async_13() { return static_cast<int32_t>(offsetof(WebClient_t1432723993, ___async_13)); }
	inline bool get_async_13() const { return ___async_13; }
	inline bool* get_address_of_async_13() { return &___async_13; }
	inline void set_async_13(bool value)
	{
		___async_13 = value;
	}

	inline static int32_t get_offset_of_async_thread_14() { return static_cast<int32_t>(offsetof(WebClient_t1432723993, ___async_thread_14)); }
	inline Thread_t241561612 * get_async_thread_14() const { return ___async_thread_14; }
	inline Thread_t241561612 ** get_address_of_async_thread_14() { return &___async_thread_14; }
	inline void set_async_thread_14(Thread_t241561612 * value)
	{
		___async_thread_14 = value;
		Il2CppCodeGenWriteBarrier(&___async_thread_14, value);
	}

	inline static int32_t get_offset_of_encoding_15() { return static_cast<int32_t>(offsetof(WebClient_t1432723993, ___encoding_15)); }
	inline Encoding_t663144255 * get_encoding_15() const { return ___encoding_15; }
	inline Encoding_t663144255 ** get_address_of_encoding_15() { return &___encoding_15; }
	inline void set_encoding_15(Encoding_t663144255 * value)
	{
		___encoding_15 = value;
		Il2CppCodeGenWriteBarrier(&___encoding_15, value);
	}

	inline static int32_t get_offset_of_proxy_16() { return static_cast<int32_t>(offsetof(WebClient_t1432723993, ___proxy_16)); }
	inline Il2CppObject * get_proxy_16() const { return ___proxy_16; }
	inline Il2CppObject ** get_address_of_proxy_16() { return &___proxy_16; }
	inline void set_proxy_16(Il2CppObject * value)
	{
		___proxy_16 = value;
		Il2CppCodeGenWriteBarrier(&___proxy_16, value);
	}

	inline static int32_t get_offset_of_DownloadDataCompleted_17() { return static_cast<int32_t>(offsetof(WebClient_t1432723993, ___DownloadDataCompleted_17)); }
	inline DownloadDataCompletedEventHandler_t4142697621 * get_DownloadDataCompleted_17() const { return ___DownloadDataCompleted_17; }
	inline DownloadDataCompletedEventHandler_t4142697621 ** get_address_of_DownloadDataCompleted_17() { return &___DownloadDataCompleted_17; }
	inline void set_DownloadDataCompleted_17(DownloadDataCompletedEventHandler_t4142697621 * value)
	{
		___DownloadDataCompleted_17 = value;
		Il2CppCodeGenWriteBarrier(&___DownloadDataCompleted_17, value);
	}

	inline static int32_t get_offset_of_DownloadFileCompleted_18() { return static_cast<int32_t>(offsetof(WebClient_t1432723993, ___DownloadFileCompleted_18)); }
	inline AsyncCompletedEventHandler_t626974191 * get_DownloadFileCompleted_18() const { return ___DownloadFileCompleted_18; }
	inline AsyncCompletedEventHandler_t626974191 ** get_address_of_DownloadFileCompleted_18() { return &___DownloadFileCompleted_18; }
	inline void set_DownloadFileCompleted_18(AsyncCompletedEventHandler_t626974191 * value)
	{
		___DownloadFileCompleted_18 = value;
		Il2CppCodeGenWriteBarrier(&___DownloadFileCompleted_18, value);
	}

	inline static int32_t get_offset_of_DownloadProgressChanged_19() { return static_cast<int32_t>(offsetof(WebClient_t1432723993, ___DownloadProgressChanged_19)); }
	inline DownloadProgressChangedEventHandler_t3683154451 * get_DownloadProgressChanged_19() const { return ___DownloadProgressChanged_19; }
	inline DownloadProgressChangedEventHandler_t3683154451 ** get_address_of_DownloadProgressChanged_19() { return &___DownloadProgressChanged_19; }
	inline void set_DownloadProgressChanged_19(DownloadProgressChangedEventHandler_t3683154451 * value)
	{
		___DownloadProgressChanged_19 = value;
		Il2CppCodeGenWriteBarrier(&___DownloadProgressChanged_19, value);
	}

	inline static int32_t get_offset_of_DownloadStringCompleted_20() { return static_cast<int32_t>(offsetof(WebClient_t1432723993, ___DownloadStringCompleted_20)); }
	inline DownloadStringCompletedEventHandler_t1433233068 * get_DownloadStringCompleted_20() const { return ___DownloadStringCompleted_20; }
	inline DownloadStringCompletedEventHandler_t1433233068 ** get_address_of_DownloadStringCompleted_20() { return &___DownloadStringCompleted_20; }
	inline void set_DownloadStringCompleted_20(DownloadStringCompletedEventHandler_t1433233068 * value)
	{
		___DownloadStringCompleted_20 = value;
		Il2CppCodeGenWriteBarrier(&___DownloadStringCompleted_20, value);
	}

	inline static int32_t get_offset_of_OpenReadCompleted_21() { return static_cast<int32_t>(offsetof(WebClient_t1432723993, ___OpenReadCompleted_21)); }
	inline OpenReadCompletedEventHandler_t2999865175 * get_OpenReadCompleted_21() const { return ___OpenReadCompleted_21; }
	inline OpenReadCompletedEventHandler_t2999865175 ** get_address_of_OpenReadCompleted_21() { return &___OpenReadCompleted_21; }
	inline void set_OpenReadCompleted_21(OpenReadCompletedEventHandler_t2999865175 * value)
	{
		___OpenReadCompleted_21 = value;
		Il2CppCodeGenWriteBarrier(&___OpenReadCompleted_21, value);
	}

	inline static int32_t get_offset_of_OpenWriteCompleted_22() { return static_cast<int32_t>(offsetof(WebClient_t1432723993, ___OpenWriteCompleted_22)); }
	inline OpenWriteCompletedEventHandler_t1007953034 * get_OpenWriteCompleted_22() const { return ___OpenWriteCompleted_22; }
	inline OpenWriteCompletedEventHandler_t1007953034 ** get_address_of_OpenWriteCompleted_22() { return &___OpenWriteCompleted_22; }
	inline void set_OpenWriteCompleted_22(OpenWriteCompletedEventHandler_t1007953034 * value)
	{
		___OpenWriteCompleted_22 = value;
		Il2CppCodeGenWriteBarrier(&___OpenWriteCompleted_22, value);
	}

	inline static int32_t get_offset_of_UploadDataCompleted_23() { return static_cast<int32_t>(offsetof(WebClient_t1432723993, ___UploadDataCompleted_23)); }
	inline UploadDataCompletedEventHandler_t1548853072 * get_UploadDataCompleted_23() const { return ___UploadDataCompleted_23; }
	inline UploadDataCompletedEventHandler_t1548853072 ** get_address_of_UploadDataCompleted_23() { return &___UploadDataCompleted_23; }
	inline void set_UploadDataCompleted_23(UploadDataCompletedEventHandler_t1548853072 * value)
	{
		___UploadDataCompleted_23 = value;
		Il2CppCodeGenWriteBarrier(&___UploadDataCompleted_23, value);
	}

	inline static int32_t get_offset_of_UploadFileCompleted_24() { return static_cast<int32_t>(offsetof(WebClient_t1432723993, ___UploadFileCompleted_24)); }
	inline UploadFileCompletedEventHandler_t3651750422 * get_UploadFileCompleted_24() const { return ___UploadFileCompleted_24; }
	inline UploadFileCompletedEventHandler_t3651750422 ** get_address_of_UploadFileCompleted_24() { return &___UploadFileCompleted_24; }
	inline void set_UploadFileCompleted_24(UploadFileCompletedEventHandler_t3651750422 * value)
	{
		___UploadFileCompleted_24 = value;
		Il2CppCodeGenWriteBarrier(&___UploadFileCompleted_24, value);
	}

	inline static int32_t get_offset_of_UploadProgressChanged_25() { return static_cast<int32_t>(offsetof(WebClient_t1432723993, ___UploadProgressChanged_25)); }
	inline UploadProgressChangedEventHandler_t4227408420 * get_UploadProgressChanged_25() const { return ___UploadProgressChanged_25; }
	inline UploadProgressChangedEventHandler_t4227408420 ** get_address_of_UploadProgressChanged_25() { return &___UploadProgressChanged_25; }
	inline void set_UploadProgressChanged_25(UploadProgressChangedEventHandler_t4227408420 * value)
	{
		___UploadProgressChanged_25 = value;
		Il2CppCodeGenWriteBarrier(&___UploadProgressChanged_25, value);
	}

	inline static int32_t get_offset_of_UploadStringCompleted_26() { return static_cast<int32_t>(offsetof(WebClient_t1432723993, ___UploadStringCompleted_26)); }
	inline UploadStringCompletedEventHandler_t495871123 * get_UploadStringCompleted_26() const { return ___UploadStringCompleted_26; }
	inline UploadStringCompletedEventHandler_t495871123 ** get_address_of_UploadStringCompleted_26() { return &___UploadStringCompleted_26; }
	inline void set_UploadStringCompleted_26(UploadStringCompletedEventHandler_t495871123 * value)
	{
		___UploadStringCompleted_26 = value;
		Il2CppCodeGenWriteBarrier(&___UploadStringCompleted_26, value);
	}

	inline static int32_t get_offset_of_UploadValuesCompleted_27() { return static_cast<int32_t>(offsetof(WebClient_t1432723993, ___UploadValuesCompleted_27)); }
	inline UploadValuesCompletedEventHandler_t563858374 * get_UploadValuesCompleted_27() const { return ___UploadValuesCompleted_27; }
	inline UploadValuesCompletedEventHandler_t563858374 ** get_address_of_UploadValuesCompleted_27() { return &___UploadValuesCompleted_27; }
	inline void set_UploadValuesCompleted_27(UploadValuesCompletedEventHandler_t563858374 * value)
	{
		___UploadValuesCompleted_27 = value;
		Il2CppCodeGenWriteBarrier(&___UploadValuesCompleted_27, value);
	}
};

struct WebClient_t1432723993_StaticFields
{
public:
	// System.String System.Net.WebClient::urlEncodedCType
	String_t* ___urlEncodedCType_4;
	// System.Byte[] System.Net.WebClient::hexBytes
	ByteU5BU5D_t3397334013* ___hexBytes_5;

public:
	inline static int32_t get_offset_of_urlEncodedCType_4() { return static_cast<int32_t>(offsetof(WebClient_t1432723993_StaticFields, ___urlEncodedCType_4)); }
	inline String_t* get_urlEncodedCType_4() const { return ___urlEncodedCType_4; }
	inline String_t** get_address_of_urlEncodedCType_4() { return &___urlEncodedCType_4; }
	inline void set_urlEncodedCType_4(String_t* value)
	{
		___urlEncodedCType_4 = value;
		Il2CppCodeGenWriteBarrier(&___urlEncodedCType_4, value);
	}

	inline static int32_t get_offset_of_hexBytes_5() { return static_cast<int32_t>(offsetof(WebClient_t1432723993_StaticFields, ___hexBytes_5)); }
	inline ByteU5BU5D_t3397334013* get_hexBytes_5() const { return ___hexBytes_5; }
	inline ByteU5BU5D_t3397334013** get_address_of_hexBytes_5() { return &___hexBytes_5; }
	inline void set_hexBytes_5(ByteU5BU5D_t3397334013* value)
	{
		___hexBytes_5 = value;
		Il2CppCodeGenWriteBarrier(&___hexBytes_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
