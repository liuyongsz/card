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
// cn.sharesdk.unity3d.DevInfoSet
struct DevInfoSet_t3901227403;
// cn.sharesdk.unity3d.ShareSDKImpl
struct ShareSDKImpl_t3743117949;
// cn.sharesdk.unity3d.ShareSDK/EventHandler
struct EventHandler_t2881293764;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// cn.sharesdk.unity3d.ShareSDK
struct  ShareSDK_t2836616153  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 cn.sharesdk.unity3d.ShareSDK::reqID
	int32_t ___reqID_2;
	// System.String cn.sharesdk.unity3d.ShareSDK::appKey
	String_t* ___appKey_3;
	// System.String cn.sharesdk.unity3d.ShareSDK::appSecret
	String_t* ___appSecret_4;
	// cn.sharesdk.unity3d.DevInfoSet cn.sharesdk.unity3d.ShareSDK::devInfo
	DevInfoSet_t3901227403 * ___devInfo_5;
	// cn.sharesdk.unity3d.ShareSDKImpl cn.sharesdk.unity3d.ShareSDK::shareSDKUtils
	ShareSDKImpl_t3743117949 * ___shareSDKUtils_6;
	// cn.sharesdk.unity3d.ShareSDK/EventHandler cn.sharesdk.unity3d.ShareSDK::authHandler
	EventHandler_t2881293764 * ___authHandler_7;
	// cn.sharesdk.unity3d.ShareSDK/EventHandler cn.sharesdk.unity3d.ShareSDK::shareHandler
	EventHandler_t2881293764 * ___shareHandler_8;
	// cn.sharesdk.unity3d.ShareSDK/EventHandler cn.sharesdk.unity3d.ShareSDK::showUserHandler
	EventHandler_t2881293764 * ___showUserHandler_9;
	// cn.sharesdk.unity3d.ShareSDK/EventHandler cn.sharesdk.unity3d.ShareSDK::getFriendsHandler
	EventHandler_t2881293764 * ___getFriendsHandler_10;
	// cn.sharesdk.unity3d.ShareSDK/EventHandler cn.sharesdk.unity3d.ShareSDK::followFriendHandler
	EventHandler_t2881293764 * ___followFriendHandler_11;

public:
	inline static int32_t get_offset_of_reqID_2() { return static_cast<int32_t>(offsetof(ShareSDK_t2836616153, ___reqID_2)); }
	inline int32_t get_reqID_2() const { return ___reqID_2; }
	inline int32_t* get_address_of_reqID_2() { return &___reqID_2; }
	inline void set_reqID_2(int32_t value)
	{
		___reqID_2 = value;
	}

	inline static int32_t get_offset_of_appKey_3() { return static_cast<int32_t>(offsetof(ShareSDK_t2836616153, ___appKey_3)); }
	inline String_t* get_appKey_3() const { return ___appKey_3; }
	inline String_t** get_address_of_appKey_3() { return &___appKey_3; }
	inline void set_appKey_3(String_t* value)
	{
		___appKey_3 = value;
		Il2CppCodeGenWriteBarrier(&___appKey_3, value);
	}

	inline static int32_t get_offset_of_appSecret_4() { return static_cast<int32_t>(offsetof(ShareSDK_t2836616153, ___appSecret_4)); }
	inline String_t* get_appSecret_4() const { return ___appSecret_4; }
	inline String_t** get_address_of_appSecret_4() { return &___appSecret_4; }
	inline void set_appSecret_4(String_t* value)
	{
		___appSecret_4 = value;
		Il2CppCodeGenWriteBarrier(&___appSecret_4, value);
	}

	inline static int32_t get_offset_of_devInfo_5() { return static_cast<int32_t>(offsetof(ShareSDK_t2836616153, ___devInfo_5)); }
	inline DevInfoSet_t3901227403 * get_devInfo_5() const { return ___devInfo_5; }
	inline DevInfoSet_t3901227403 ** get_address_of_devInfo_5() { return &___devInfo_5; }
	inline void set_devInfo_5(DevInfoSet_t3901227403 * value)
	{
		___devInfo_5 = value;
		Il2CppCodeGenWriteBarrier(&___devInfo_5, value);
	}

	inline static int32_t get_offset_of_shareSDKUtils_6() { return static_cast<int32_t>(offsetof(ShareSDK_t2836616153, ___shareSDKUtils_6)); }
	inline ShareSDKImpl_t3743117949 * get_shareSDKUtils_6() const { return ___shareSDKUtils_6; }
	inline ShareSDKImpl_t3743117949 ** get_address_of_shareSDKUtils_6() { return &___shareSDKUtils_6; }
	inline void set_shareSDKUtils_6(ShareSDKImpl_t3743117949 * value)
	{
		___shareSDKUtils_6 = value;
		Il2CppCodeGenWriteBarrier(&___shareSDKUtils_6, value);
	}

	inline static int32_t get_offset_of_authHandler_7() { return static_cast<int32_t>(offsetof(ShareSDK_t2836616153, ___authHandler_7)); }
	inline EventHandler_t2881293764 * get_authHandler_7() const { return ___authHandler_7; }
	inline EventHandler_t2881293764 ** get_address_of_authHandler_7() { return &___authHandler_7; }
	inline void set_authHandler_7(EventHandler_t2881293764 * value)
	{
		___authHandler_7 = value;
		Il2CppCodeGenWriteBarrier(&___authHandler_7, value);
	}

	inline static int32_t get_offset_of_shareHandler_8() { return static_cast<int32_t>(offsetof(ShareSDK_t2836616153, ___shareHandler_8)); }
	inline EventHandler_t2881293764 * get_shareHandler_8() const { return ___shareHandler_8; }
	inline EventHandler_t2881293764 ** get_address_of_shareHandler_8() { return &___shareHandler_8; }
	inline void set_shareHandler_8(EventHandler_t2881293764 * value)
	{
		___shareHandler_8 = value;
		Il2CppCodeGenWriteBarrier(&___shareHandler_8, value);
	}

	inline static int32_t get_offset_of_showUserHandler_9() { return static_cast<int32_t>(offsetof(ShareSDK_t2836616153, ___showUserHandler_9)); }
	inline EventHandler_t2881293764 * get_showUserHandler_9() const { return ___showUserHandler_9; }
	inline EventHandler_t2881293764 ** get_address_of_showUserHandler_9() { return &___showUserHandler_9; }
	inline void set_showUserHandler_9(EventHandler_t2881293764 * value)
	{
		___showUserHandler_9 = value;
		Il2CppCodeGenWriteBarrier(&___showUserHandler_9, value);
	}

	inline static int32_t get_offset_of_getFriendsHandler_10() { return static_cast<int32_t>(offsetof(ShareSDK_t2836616153, ___getFriendsHandler_10)); }
	inline EventHandler_t2881293764 * get_getFriendsHandler_10() const { return ___getFriendsHandler_10; }
	inline EventHandler_t2881293764 ** get_address_of_getFriendsHandler_10() { return &___getFriendsHandler_10; }
	inline void set_getFriendsHandler_10(EventHandler_t2881293764 * value)
	{
		___getFriendsHandler_10 = value;
		Il2CppCodeGenWriteBarrier(&___getFriendsHandler_10, value);
	}

	inline static int32_t get_offset_of_followFriendHandler_11() { return static_cast<int32_t>(offsetof(ShareSDK_t2836616153, ___followFriendHandler_11)); }
	inline EventHandler_t2881293764 * get_followFriendHandler_11() const { return ___followFriendHandler_11; }
	inline EventHandler_t2881293764 ** get_address_of_followFriendHandler_11() { return &___followFriendHandler_11; }
	inline void set_followFriendHandler_11(EventHandler_t2881293764 * value)
	{
		___followFriendHandler_11 = value;
		Il2CppCodeGenWriteBarrier(&___followFriendHandler_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
