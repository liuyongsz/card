#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// Lidgren.Network.MWCRandom
struct MWCRandom_t315011312;
// Lidgren.Network.NetBitVector
struct NetBitVector_t1774780753;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Lidgren.Network.NetBuffer
struct NetBuffer_t3608062491;
// System.Net.IPEndPoint
struct IPEndPoint_t2615413766;
// Lidgren.Network.NetClient
struct NetClient_t1212131464;
// Lidgren.Network.NetConnection
struct NetConnection_t3331492029;
// Lidgren.Network.NetPeerConfiguration
struct NetPeerConfiguration_t136603591;
// Lidgren.Network.NetOutgoingMessage
struct NetOutgoingMessage_t2016542980;
// Lidgren.Network.NetPeer
struct NetPeer_t1779390221;
// Lidgren.Network.NetSenderChannelBase
struct NetSenderChannelBase_t3096690204;
// Lidgren.Network.NetIncomingMessage
struct NetIncomingMessage_t2014089816;
// Lidgren.Network.NetReceiverChannelBase
struct NetReceiverChannelBase_t908288882;
// Lidgren.Network.NetConnectionStatistics
struct NetConnectionStatistics_t1235765202;
// Lidgren.Network.NetException
struct NetException_t2452891498;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t15112628;
// System.Collections.Generic.IList`1<Lidgren.Network.NetConnection>
struct IList_1_t3872432630;
// System.Net.Sockets.Socket
struct Socket_t3821512045;
// Lidgren.Network.NetPeer/DelayedPacket
struct DelayedPacket_t1298207473;
// System.Net.IPAddress
struct IPAddress_t1399971723;
// Lidgren.Network.NetPeerStatistics
struct NetPeerStatistics_t101027066;
// Lidgren.Network.NetRandom
struct NetRandom_t509742058;
// Lidgren.Network.NetReliableOrderedReceiver
struct NetReliableOrderedReceiver_t2554037675;
// Lidgren.Network.NetReliableSenderChannel
struct NetReliableSenderChannel_t2899775811;
// Lidgren.Network.NetReliableSequencedReceiver
struct NetReliableSequencedReceiver_t2385271929;
// Lidgren.Network.NetReliableUnorderedReceiver
struct NetReliableUnorderedReceiver_t3992686328;
// Lidgren.Network.NetUnreliableSenderChannel
struct NetUnreliableSenderChannel_t1909769502;
// Lidgren.Network.NetUnreliableSequencedReceiver
struct NetUnreliableSequencedReceiver_t2497601560;
// Lidgren.Network.NetUnreliableUnorderedReceiver
struct NetUnreliableUnorderedReceiver_t3541921227;
// Lidgren.Network.NetUPnP
struct NetUPnP_t2794379482;
// System.Net.NetworkInformation.NetworkInterface
struct NetworkInterface_t63927633;
// Lidgren.Network.ReceivedFragmentGroup
struct ReceivedFragmentGroup_t4108580702;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "Lidgren_Network_U3CModuleU3E3783534214.h"
#include "Lidgren_Network_U3CModuleU3E3783534214MethodDeclarations.h"
#include "Lidgren_Network_Lidgren_Network_MessageResendReason402253882.h"
#include "Lidgren_Network_Lidgren_Network_MessageResendReason402253882MethodDeclarations.h"
#include "Lidgren_Network_Lidgren_Network_MWCRandom315011312.h"
#include "Lidgren_Network_Lidgren_Network_MWCRandom315011312MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "Lidgren_Network_Lidgren_Network_NetRandom509742058MethodDeclarations.h"
#include "Lidgren_Network_Lidgren_Network_NetRandomSeed726093591MethodDeclarations.h"
#include "mscorlib_System_UInt642909196914.h"
#include "mscorlib_System_UInt322149682021.h"
#include "Lidgren_Network_Lidgren_Network_NetBitVector1774780753.h"
#include "Lidgren_Network_Lidgren_Network_NetBitVector1774780753MethodDeclarations.h"
#include "mscorlib_System_Int322071877448.h"
#include "mscorlib_System_Object2689449295MethodDeclarations.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "Lidgren_Network_Lidgren_Network_NetException2452891498MethodDeclarations.h"
#include "mscorlib_System_Array3829468939MethodDeclarations.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Text_StringBuilder1221177846MethodDeclarations.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"
#include "mscorlib_System_Char3454481338.h"
#include "mscorlib_System_Object2689449295.h"
#include "Lidgren_Network_Lidgren_Network_NetBitWriter1792140809.h"
#include "Lidgren_Network_Lidgren_Network_NetBitWriter1792140809MethodDeclarations.h"
#include "mscorlib_System_Byte3683104436.h"
#include "mscorlib_System_Buffer3497320070MethodDeclarations.h"
#include "mscorlib_System_UInt16986882611.h"
#include "System_System_Diagnostics_Debug2273457373MethodDeclarations.h"
#include "Lidgren_Network_Lidgren_Network_NetBuffer3608062491.h"
#include "Lidgren_Network_Lidgren_Network_NetBuffer3608062491MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ge972936938MethodDeclarations.h"
#include "mscorlib_System_Type1303803226MethodDeclarations.h"
#include "mscorlib_System_String2029220233MethodDeclarations.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"
#include "mscorlib_System_Reflection_ParameterInfo2249040075.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ge972936938.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_RuntimeTypeHandle2330101084.h"
#include "mscorlib_System_Reflection_BindingFlags1082350898.h"
#include "mscorlib_System_Reflection_MethodBase904190842MethodDeclarations.h"
#include "mscorlib_System_Reflection_MethodBase904190842.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260MethodDeclarations.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260.h"
#include "mscorlib_System_StringComparison2376310518.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337MethodDeclarations.h"
#include "mscorlib_System_Reflection_ParameterInfo2249040075MethodDeclarations.h"
#include "mscorlib_System_Int64909078037.h"
#include "mscorlib_System_Single2076509932.h"
#include "mscorlib_System_BitConverter3195628829MethodDeclarations.h"
#include "mscorlib_System_Text_Encoding663144255MethodDeclarations.h"
#include "Lidgren_Network_Lidgren_Network_NetException2452891498.h"
#include "mscorlib_System_Text_Encoding663144255.h"
#include "System_System_Net_IPEndPoint2615413766.h"
#include "Lidgren_Network_Lidgren_Network_NetUtility3562260209MethodDeclarations.h"
#include "System_System_Net_IPEndPoint2615413766MethodDeclarations.h"
#include "System_System_Net_IPAddress1399971723.h"
#include "mscorlib_System_ArgumentNullException628810857MethodDeclarations.h"
#include "mscorlib_System_ArgumentNullException628810857.h"
#include "Lidgren_Network_Lidgren_Network_SingleUIntUnion3787661257.h"
#include "Lidgren_Network_Lidgren_Network_NetClient1212131464.h"
#include "Lidgren_Network_Lidgren_Network_NetClient1212131464MethodDeclarations.h"
#include "Lidgren_Network_Lidgren_Network_NetConnection3331492029.h"
#include "mscorlib_System_Collections_Generic_List_1_gen2700613161MethodDeclarations.h"
#include "Lidgren_Network_Lidgren_Network_NetPeer1779390221.h"
#include "mscorlib_System_Collections_Generic_List_1_gen2700613161.h"
#include "Lidgren_Network_Lidgren_Network_NetPeerConfiguratio136603591.h"
#include "Lidgren_Network_Lidgren_Network_NetPeer1779390221MethodDeclarations.h"
#include "Lidgren_Network_Lidgren_Network_NetPeerConfiguratio136603591MethodDeclarations.h"
#include "Lidgren_Network_Lidgren_Network_NetOutgoingMessage2016542980.h"
#include "mscorlib_System_Threading_Monitor3228523394MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_g3898409514MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_g3898409514.h"
#include "Lidgren_Network_Lidgren_Network_NetSendResult408708396.h"
#include "Lidgren_Network_Lidgren_Network_NetDeliveryMethod3645638710.h"
#include "Lidgren_Network_Lidgren_Network_NetConnection3331492029MethodDeclarations.h"
#include "Lidgren_Network_Lidgren_Network_NetConnectionStatus952199027.h"
#include "mscorlib_System_Double4078015681.h"
#include "Lidgren_Network_Lidgren_Network_NetQueue_1_gen1156019562MethodDeclarations.h"
#include "Lidgren_Network_Lidgren_Network_NetConnectionStati1235765202MethodDeclarations.h"
#include "Lidgren.Network_ArrayTypes.h"
#include "Lidgren_Network_Lidgren_Network_NetSenderChannelBa3096690204.h"
#include "Lidgren_Network_Lidgren_Network_NetReceiverChannelB908288882.h"
#include "Lidgren_Network_Lidgren_Network_NetQueue_1_gen1156019562.h"
#include "Lidgren_Network_Lidgren_Network_NetConnectionStati1235765202.h"
#include "Lidgren_Network_Lidgren_Network_NetTime3056501352MethodDeclarations.h"
#include "Lidgren_Network_Lidgren_Network_NetIncomingMessage2014089816.h"
#include "Lidgren_Network_Lidgren_Network_NetIncomingMessage4279120760.h"
#include "Lidgren_Network_Lidgren_Network_NetTuple_2_gen3234296172.h"
#include "Lidgren_Network_Lidgren_Network_NetMessageType191235414.h"
#include "Lidgren_Network_Lidgren_Network_NetSenderChannelBa3096690204MethodDeclarations.h"
#include "Lidgren_Network_Lidgren_Network_NetOutgoingMessage2016542980MethodDeclarations.h"
#include "mscorlib_System_Threading_Interlocked1625106012MethodDeclarations.h"
#include "Lidgren_Network_Lidgren_Network_NetUnreliableSende1909769502MethodDeclarations.h"
#include "Lidgren_Network_Lidgren_Network_NetReliableSenderC2899775811MethodDeclarations.h"
#include "Lidgren_Network_Lidgren_Network_NetUnreliableSende1909769502.h"
#include "Lidgren_Network_Lidgren_Network_NetReliableSenderC2899775811.h"
#include "Lidgren_Network_Lidgren_Network_NetTuple_2_gen3234296172MethodDeclarations.h"
#include "Lidgren_Network_Lidgren_Network_NetReceiverChannelB908288882MethodDeclarations.h"
#include "Lidgren_Network_Lidgren_Network_NetUnreliableUnord3541921227MethodDeclarations.h"
#include "Lidgren_Network_Lidgren_Network_NetReliableOrdered2554037675MethodDeclarations.h"
#include "Lidgren_Network_Lidgren_Network_NetUnreliableSeque2497601560MethodDeclarations.h"
#include "Lidgren_Network_Lidgren_Network_NetReliableUnorder3992686328MethodDeclarations.h"
#include "Lidgren_Network_Lidgren_Network_NetReliableSequenc2385271929MethodDeclarations.h"
#include "Lidgren_Network_Lidgren_Network_NetUnreliableUnord3541921227.h"
#include "Lidgren_Network_Lidgren_Network_NetReliableOrdered2554037675.h"
#include "Lidgren_Network_Lidgren_Network_NetUnreliableSeque2497601560.h"
#include "Lidgren_Network_Lidgren_Network_NetReliableUnorder3992686328.h"
#include "Lidgren_Network_Lidgren_Network_NetReliableSequenc2385271929.h"
#include "Lidgren_Network_Lidgren_Network_NetQueue_1_gen1703294902MethodDeclarations.h"
#include "Lidgren_Network_Lidgren_Network_NetQueue_1_gen1703294902.h"
#include "Lidgren_Network_Lidgren_Network_NetTuple_2_gen3781571512.h"
#include "Lidgren_Network_Lidgren_Network_NetTuple_2_gen3781571512MethodDeclarations.h"
#include "mscorlib_System_Exception1927440687.h"
#include "mscorlib_System_Exception1927440687MethodDeclarations.h"
#include "Lidgren_Network_Lidgren_Network_NetConnection_Expa3530790055.h"
#include "Lidgren_Network_Lidgren_Network_NetConnection_Expa3530790055MethodDeclarations.h"
#include "Lidgren_Network_Lidgren_Network_NetStoredReliableM1576378473.h"
#include "Lidgren_Network_Lidgren_Network_NetConnectionStatus952199027MethodDeclarations.h"
#include "Lidgren_Network_Lidgren_Network_NetDeliveryMethod3645638710MethodDeclarations.h"
#include "Lidgren_Network_Lidgren_Network_NetFragmentationHe3305818822.h"
#include "Lidgren_Network_Lidgren_Network_NetFragmentationHe3305818822MethodDeclarations.h"
#include "Lidgren_Network_Lidgren_Network_NetIncomingMessage2014089816MethodDeclarations.h"
#include "Lidgren_Network_Lidgren_Network_NetIncomingMessage4279120760MethodDeclarations.h"
#include "Lidgren_Network_Lidgren_Network_NetMessageType191235414MethodDeclarations.h"
#include "mscorlib_System_Threading_AutoResetEvent15112628.h"
#include "mscorlib_System_Threading_AutoResetEvent15112628MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen667328605MethodDeclarations.h"
#include "Lidgren_Network_Lidgren_Network_NetPeerStatistics101027066MethodDeclarations.h"
#include "Lidgren_Network_Lidgren_Network_NetQueue_1_gen4230780502MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_g2557578811MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen667328605.h"
#include "Lidgren_Network_Lidgren_Network_NetPeerStatistics101027066.h"
#include "Lidgren_Network_Lidgren_Network_NetQueue_1_gen4230780502.h"
#include "System_System_Net_IPAddress1399971723MethodDeclarations.h"
#include "System_System_Net_EndPoint4156119363.h"
#include "Lidgren_Network_Lidgren_Network_NetPeerStatus37952291.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_g2557578811.h"
#include "mscorlib_System_Threading_ThreadStart3437517264MethodDeclarations.h"
#include "mscorlib_System_Threading_Thread241561612MethodDeclarations.h"
#include "Lidgren_Network_Lidgren_Network_NetUPnP2794379482MethodDeclarations.h"
#include "mscorlib_System_Int322071877448MethodDeclarations.h"
#include "mscorlib_System_Threading_ThreadStart3437517264.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Threading_Thread241561612.h"
#include "Lidgren_Network_Lidgren_Network_NetUPnP2794379482.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_g3116406337MethodDeclarations.h"
#include "Lidgren_Network_Lidgren_Network_ReceivedFragmentGr4108580702MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_g3116406337.h"
#include "Lidgren_Network_Lidgren_Network_ReceivedFragmentGr4108580702.h"
#include "System_System_Net_Sockets_Socket3821512045.h"
#include "mscorlib_System_Threading_EventWaitHandle2091316307MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen1255402771MethodDeclarations.h"
#include "Lidgren_Network_Lidgren_Network_NetTuple_2_gen1886281639.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerat790132445.h"
#include "mscorlib_System_Collections_Generic_List_1_gen1255402771.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerat790132445MethodDeclarations.h"
#include "mscorlib_System_Threading_SynchronizationContext3857790437.h"
#include "mscorlib_System_Threading_SendOrPostCallback296893742.h"
#include "mscorlib_System_Threading_SynchronizationContext3857790437MethodDeclarations.h"
#include "System_System_Net_Sockets_Socket3821512045MethodDeclarations.h"
#include "mscorlib_System_Convert2607082565MethodDeclarations.h"
#include "System_System_Net_Sockets_AddressFamily303362630.h"
#include "System_System_Net_Sockets_SocketType1143498533.h"
#include "System_System_Net_Sockets_ProtocolType2178963134.h"
#include "System_System_Net_Sockets_SocketOptionLevel1505247880.h"
#include "System_System_Net_Sockets_SocketOptionName1089121285.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_V2601469357MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumera2235342835.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_V1289974982.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumera2235342835MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_V2601469357.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_V1289974982MethodDeclarations.h"
#include "System_System_Net_Sockets_SocketShutdown3247039417.h"
#include "System_System_Net_Sockets_SocketException1618573604MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21655754736.h"
#include "System_System_Net_Sockets_SocketException1618573604.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_En923466920.h"
#include "System_System_Net_Sockets_SocketError307542793.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_En923466920MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21655754736MethodDeclarations.h"
#include "System_System_Net_Sockets_SelectMode3413969319.h"
#include "System_System_Net_Sockets_SocketFlags2353657790.h"
#include "Lidgren_Network_Lidgren_Network_NetPeer_DelayedPac1298207473MethodDeclarations.h"
#include "Lidgren_Network_Lidgren_Network_NetPeer_DelayedPac1298207473.h"
#include "mscorlib_System_Random1044426839MethodDeclarations.h"
#include "mscorlib_System_Random1044426839.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerat202058279.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerat202058279MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen2766455145MethodDeclarations.h"
#include "Lidgren_Network_Lidgren_Network_NetQueue_1_gen4233233666MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen2766455145.h"
#include "Lidgren_Network_Lidgren_Network_NetQueue_1_gen4233233666.h"
#include "Lidgren_Network_Lidgren_Network_NetRandom509742058.h"
#include "mscorlib_System_ArgumentOutOfRangeException279959794MethodDeclarations.h"
#include "mscorlib_System_ArgumentOutOfRangeException279959794.h"
#include "Lidgren_Network_Lidgren_Network_NetUnreliableSizeB2550812882.h"
#include "Lidgren_Network_Lidgren_Network_NetPeerStatus37952291MethodDeclarations.h"
#include "mscorlib_System_NotImplementedException2785117854MethodDeclarations.h"
#include "mscorlib_System_NotImplementedException2785117854.h"
#include "Lidgren_Network_Lidgren_Network_NetRandomSeed726093591.h"
#include "mscorlib_System_Guid2533601593MethodDeclarations.h"
#include "mscorlib_System_Guid2533601593.h"
#include "Lidgren_Network_Lidgren_Network_NetStoredReliableM1576378473MethodDeclarations.h"
#include "Lidgren_Network_Lidgren_Network_NetSendResult408708396MethodDeclarations.h"
#include "Lidgren_Network_Lidgren_Network_NetTime3056501352.h"
#include "mscorlib_System_TimeSpan3430258949MethodDeclarations.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "mscorlib_System_Double4078015681MethodDeclarations.h"
#include "System_System_Diagnostics_Stopwatch1380178105MethodDeclarations.h"
#include "System_System_Diagnostics_Stopwatch1380178105.h"
#include "Lidgren_Network_Lidgren_Network_NetUnreliableSizeB2550812882MethodDeclarations.h"
#include "mscorlib_System_Threading_ManualResetEvent926074657MethodDeclarations.h"
#include "mscorlib_System_Threading_ManualResetEvent926074657.h"
#include "Lidgren_Network_Lidgren_Network_UPnPStatus3639336697.h"
#include "System_Xml_System_Xml_XmlDocument3649534162MethodDeclarations.h"
#include "System_System_Net_WebRequest1365124353MethodDeclarations.h"
#include "System_Xml_System_Xml_XmlNamespaceManager486731501MethodDeclarations.h"
#include "System_Xml_System_Xml_XmlNode616554813MethodDeclarations.h"
#include "System_Xml_System_Xml_XmlDocument3649534162.h"
#include "System_System_Net_WebResponse1895226051.h"
#include "System_Xml_System_Xml_XmlNamespaceManager486731501.h"
#include "System_Xml_System_Xml_XmlNode616554813.h"
#include "System_System_Net_WebRequest1365124353.h"
#include "System_System_Net_WebResponse1895226051MethodDeclarations.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "System_Xml_System_Xml_XmlNameTable1345805268.h"
#include "Lidgren_Network_Lidgren_Network_NetUtility3562260209.h"
#include "mscorlib_System_ArgumentException3259014390MethodDeclarations.h"
#include "System_System_Net_Dns1335526197MethodDeclarations.h"
#include "System_ArrayTypes.h"
#include "mscorlib_System_ArgumentException3259014390.h"
#include "mscorlib_System_Environment3662374671MethodDeclarations.h"
#include "System_System_Net_NetworkInformation_NetworkInterfac63927633.h"
#include "System_System_Net_NetworkInformation_IPGlobalProper430107897MethodDeclarations.h"
#include "System_System_Net_NetworkInformation_NetworkInterfac63927633MethodDeclarations.h"
#include "System_System_Net_NetworkInformation_IPGlobalProper430107897.h"
#include "System_System_Net_NetworkInformation_IPInterfacePr3986609851.h"
#include "System_System_Net_NetworkInformation_UnicastIPAddr2919786644.h"
#include "System_System_Net_NetworkInformation_NetworkInterf4226883065.h"
#include "System_System_Net_NetworkInformation_NetworkInterf2376191102.h"
#include "System_System_Net_NetworkInformation_OperationalSt2833345236.h"
#include "System_System_Net_NetworkInformation_IPInterfacePr3986609851MethodDeclarations.h"
#include "System_System_Net_NetworkInformation_UnicastIPAddre347163204.h"
#include "System_System_Net_NetworkInformation_UnicastIPAddre347163204MethodDeclarations.h"
#include "System_System_Net_NetworkInformation_IPAddressInfor732454853MethodDeclarations.h"
#include "System_System_Net_NetworkInformation_IPAddressInfor732454853.h"
#include "System_System_Net_NetworkInformation_PhysicalAddre1613893277MethodDeclarations.h"
#include "System_System_Net_NetworkInformation_PhysicalAddre1613893277.h"
#include "System_System_Net_NetworkInformation_UnicastIPAddr2919786644MethodDeclarations.h"
#include "mscorlib_System_Security_Cryptography_HashAlgorith2624936259MethodDeclarations.h"
#include "mscorlib_System_Security_Cryptography_SHA256582564463.h"
#include "mscorlib_System_Security_Cryptography_SHA256582564463MethodDeclarations.h"
#include "Lidgren_Network_Lidgren_Network_SingleUIntUnion3787661257MethodDeclarations.h"
#include "Lidgren_Network_Lidgren_Network_UPnPStatus3639336697MethodDeclarations.h"

// System.Void System.Array::Resize<System.Byte>(!!0[]&,System.Int32)
extern "C"  void Array_Resize_TisByte_t3683104436_m3136363656_gshared (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013** p0, int32_t p1, const MethodInfo* method);
#define Array_Resize_TisByte_t3683104436_m3136363656(__this /* static, unused */, p0, p1, method) ((  void (*) (Il2CppObject * /* static, unused */, ByteU5BU5D_t3397334013**, int32_t, const MethodInfo*))Array_Resize_TisByte_t3683104436_m3136363656_gshared)(__this /* static, unused */, p0, p1, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Lidgren.Network.MWCRandom::.ctor()
extern Il2CppClass* NetRandom_t509742058_il2cpp_TypeInfo_var;
extern Il2CppClass* NetRandomSeed_t726093591_il2cpp_TypeInfo_var;
extern const uint32_t MWCRandom__ctor_m14555459_MetadataUsageId;
extern "C"  void MWCRandom__ctor_m14555459 (MWCRandom_t315011312 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MWCRandom__ctor_m14555459_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetRandom_t509742058_il2cpp_TypeInfo_var);
		NetRandom__ctor_m1930519285(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetRandomSeed_t726093591_il2cpp_TypeInfo_var);
		uint64_t L_0 = NetRandomSeed_GetUInt64_m1791162272(NULL /*static, unused*/, /*hidden argument*/NULL);
		MWCRandom_Initialize_m3443045912(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Lidgren.Network.MWCRandom::Initialize(System.UInt32)
extern "C"  void MWCRandom_Initialize_m3019558407 (MWCRandom_t315011312 * __this, uint32_t ___seed0, const MethodInfo* method)
{
	{
		uint32_t L_0 = ___seed0;
		__this->set_m_w_5(L_0);
		uint32_t L_1 = ___seed0;
		__this->set_m_z_6(((int32_t)((int32_t)L_1*(int32_t)((int32_t)16777619))));
		return;
	}
}
// System.Void Lidgren.Network.MWCRandom::Initialize(System.UInt64)
extern "C"  void MWCRandom_Initialize_m3443045912 (MWCRandom_t315011312 * __this, uint64_t ___seed0, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___seed0;
		__this->set_m_w_5((((int32_t)((uint32_t)L_0))));
		uint64_t L_1 = ___seed0;
		__this->set_m_z_6((((int32_t)((uint32_t)((int64_t)((uint64_t)L_1>>((int32_t)32)))))));
		return;
	}
}
// System.UInt32 Lidgren.Network.MWCRandom::NextUInt32()
extern "C"  uint32_t MWCRandom_NextUInt32_m737568528 (MWCRandom_t315011312 * __this, const MethodInfo* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_z_6();
		uint32_t L_1 = __this->get_m_z_6();
		__this->set_m_z_6(((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)36969)*(int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)65535)))))+(int32_t)((int32_t)((uint32_t)L_1>>((int32_t)16))))));
		uint32_t L_2 = __this->get_m_w_5();
		uint32_t L_3 = __this->get_m_w_5();
		__this->set_m_w_5(((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)18000)*(int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)65535)))))+(int32_t)((int32_t)((uint32_t)L_3>>((int32_t)16))))));
		uint32_t L_4 = __this->get_m_z_6();
		uint32_t L_5 = __this->get_m_w_5();
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_4<<(int32_t)((int32_t)16)))+(int32_t)L_5));
		goto IL_0058;
	}

IL_0058:
	{
		uint32_t L_6 = V_0;
		return L_6;
	}
}
// System.Void Lidgren.Network.MWCRandom::.cctor()
extern Il2CppClass* MWCRandom_t315011312_il2cpp_TypeInfo_var;
extern const uint32_t MWCRandom__cctor_m540302958_MetadataUsageId;
extern "C"  void MWCRandom__cctor_m540302958 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MWCRandom__cctor_m540302958_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		MWCRandom_t315011312 * L_0 = (MWCRandom_t315011312 *)il2cpp_codegen_object_new(MWCRandom_t315011312_il2cpp_TypeInfo_var);
		MWCRandom__ctor_m14555459(L_0, /*hidden argument*/NULL);
		((MWCRandom_t315011312_StaticFields*)MWCRandom_t315011312_il2cpp_TypeInfo_var->static_fields)->set_Instance_4(L_0);
		return;
	}
}
// System.Void Lidgren.Network.NetBitVector::.ctor(System.Int32)
extern Il2CppClass* Int32U5BU5D_t3030399641_il2cpp_TypeInfo_var;
extern const uint32_t NetBitVector__ctor_m1517128273_MetadataUsageId;
extern "C"  void NetBitVector__ctor_m1517128273 (NetBitVector_t1774780753 * __this, int32_t ___bitsCapacity0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetBitVector__ctor_m1517128273_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___bitsCapacity0;
		__this->set_m_capacity_0(L_0);
		int32_t L_1 = ___bitsCapacity0;
		__this->set_m_data_1(((Int32U5BU5D_t3030399641*)SZArrayNew(Int32U5BU5D_t3030399641_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1+(int32_t)((int32_t)31)))/(int32_t)((int32_t)32))))));
		return;
	}
}
// System.Boolean Lidgren.Network.NetBitVector::IsEmpty()
extern "C"  bool NetBitVector_IsEmpty_m1960092019 (NetBitVector_t1774780753 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_m_numBitsSet_2();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Int32 Lidgren.Network.NetBitVector::Count()
extern "C"  int32_t NetBitVector_Count_m179947577 (NetBitVector_t1774780753 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_numBitsSet_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Lidgren.Network.NetBitVector::Get(System.Int32)
extern "C"  bool NetBitVector_Get_m2410185427 (NetBitVector_t1774780753 * __this, int32_t ___bitIndex0, const MethodInfo* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___bitIndex0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = ___bitIndex0;
		int32_t L_2 = __this->get_m_capacity_0();
		G_B3_0 = ((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0);
		goto IL_0011;
	}

IL_0010:
	{
		G_B3_0 = 0;
	}

IL_0011:
	{
		NetException_Assert_m1426298558(NULL /*static, unused*/, (bool)G_B3_0, /*hidden argument*/NULL);
		Int32U5BU5D_t3030399641* L_3 = __this->get_m_data_1();
		int32_t L_4 = ___bitIndex0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, ((int32_t)((int32_t)L_4/(int32_t)((int32_t)32))));
		int32_t L_5 = ((int32_t)((int32_t)L_4/(int32_t)((int32_t)32)));
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		int32_t L_7 = ___bitIndex0;
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7%(int32_t)((int32_t)32)))&(int32_t)((int32_t)31)))))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0036;
	}

IL_0036:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// System.Void Lidgren.Network.NetBitVector::Set(System.Int32,System.Boolean)
extern "C"  void NetBitVector_Set_m2669921130 (NetBitVector_t1774780753 * __this, int32_t ___bitIndex0, bool ___value1, const MethodInfo* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___bitIndex0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = ___bitIndex0;
		int32_t L_2 = __this->get_m_capacity_0();
		G_B3_0 = ((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0);
		goto IL_0011;
	}

IL_0010:
	{
		G_B3_0 = 0;
	}

IL_0011:
	{
		NetException_Assert_m1426298558(NULL /*static, unused*/, (bool)G_B3_0, /*hidden argument*/NULL);
		int32_t L_3 = ___bitIndex0;
		V_0 = ((int32_t)((int32_t)L_3/(int32_t)((int32_t)32)));
		bool L_4 = ___value1;
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (L_5)
		{
			goto IL_0074;
		}
	}
	{
		Int32U5BU5D_t3030399641* L_6 = __this->get_m_data_1();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		int32_t L_10 = ___bitIndex0;
		V_1 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_9&(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_10%(int32_t)((int32_t)32)))&(int32_t)((int32_t)31)))))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_1;
		if (L_11)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_12 = __this->get_m_numBitsSet_2();
		__this->set_m_numBitsSet_2(((int32_t)((int32_t)L_12+(int32_t)1)));
	}

IL_0050:
	{
		Int32U5BU5D_t3030399641* L_13 = __this->get_m_data_1();
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t* L_15 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		int32_t L_16 = ___bitIndex0;
		(*(int32_t*)L_15) = ((int32_t)((int32_t)(*(int32_t*)L_15)|(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_16%(int32_t)((int32_t)32)))&(int32_t)((int32_t)31)))))));
		goto IL_00bf;
	}

IL_0074:
	{
		Int32U5BU5D_t3030399641* L_17 = __this->get_m_data_1();
		int32_t L_18 = V_0;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		int32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		int32_t L_21 = ___bitIndex0;
		V_1 = (bool)((((int32_t)((int32_t)((int32_t)L_20&(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_21%(int32_t)((int32_t)32)))&(int32_t)((int32_t)31)))))))) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_1;
		if (L_22)
		{
			goto IL_009c;
		}
	}
	{
		int32_t L_23 = __this->get_m_numBitsSet_2();
		__this->set_m_numBitsSet_2(((int32_t)((int32_t)L_23-(int32_t)1)));
	}

IL_009c:
	{
		Int32U5BU5D_t3030399641* L_24 = __this->get_m_data_1();
		int32_t L_25 = V_0;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t* L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)));
		int32_t L_27 = ___bitIndex0;
		(*(int32_t*)L_26) = ((int32_t)((int32_t)(*(int32_t*)L_26)&(int32_t)((~((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_27%(int32_t)((int32_t)32)))&(int32_t)((int32_t)31)))))))));
	}

IL_00bf:
	{
		return;
	}
}
// System.Boolean Lidgren.Network.NetBitVector::get_Bit(System.Int32)
extern "C"  bool NetBitVector_get_Bit_m3575907859 (NetBitVector_t1774780753 * __this, int32_t ___index0, const MethodInfo* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___index0;
		bool L_1 = NetBitVector_Get_m2410185427(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void Lidgren.Network.NetBitVector::set_Bit(System.Int32,System.Boolean)
extern "C"  void NetBitVector_set_Bit_m3149930918 (NetBitVector_t1774780753 * __this, int32_t ___index0, bool ___value1, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index0;
		bool L_1 = ___value1;
		NetBitVector_Set_m2669921130(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Lidgren.Network.NetBitVector::Clear()
extern "C"  void NetBitVector_Clear_m3351354433 (NetBitVector_t1774780753 * __this, const MethodInfo* method)
{
	{
		Int32U5BU5D_t3030399641* L_0 = __this->get_m_data_1();
		Int32U5BU5D_t3030399641* L_1 = __this->get_m_data_1();
		NullCheck(L_1);
		Array_Clear_m782967417(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_0, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_1)->max_length)))), /*hidden argument*/NULL);
		__this->set_m_numBitsSet_2(0);
		bool L_2 = NetBitVector_IsEmpty_m1960092019(__this, /*hidden argument*/NULL);
		NetException_Assert_m1426298558(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.String Lidgren.Network.NetBitVector::ToString()
extern Il2CppClass* StringBuilder_t1221177846_il2cpp_TypeInfo_var;
extern const uint32_t NetBitVector_ToString_m1952006343_MetadataUsageId;
extern "C"  String_t* NetBitVector_ToString_m1952006343 (NetBitVector_t1774780753 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetBitVector_ToString_m1952006343_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t1221177846 * V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	bool V_3 = false;
	StringBuilder_t1221177846 * G_B3_0 = NULL;
	StringBuilder_t1221177846 * G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	StringBuilder_t1221177846 * G_B4_1 = NULL;
	{
		int32_t L_0 = __this->get_m_capacity_0();
		StringBuilder_t1221177846 * L_1 = (StringBuilder_t1221177846 *)il2cpp_codegen_object_new(StringBuilder_t1221177846_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m536337337(L_1, ((int32_t)((int32_t)L_0+(int32_t)2)), /*hidden argument*/NULL);
		V_0 = L_1;
		StringBuilder_t1221177846 * L_2 = V_0;
		NullCheck(L_2);
		StringBuilder_Append_m3618697540(L_2, ((int32_t)91), /*hidden argument*/NULL);
		V_1 = 0;
		goto IL_0040;
	}

IL_001c:
	{
		StringBuilder_t1221177846 * L_3 = V_0;
		int32_t L_4 = __this->get_m_capacity_0();
		int32_t L_5 = V_1;
		bool L_6 = NetBitVector_Get_m2410185427(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_4-(int32_t)L_5))-(int32_t)1)), /*hidden argument*/NULL);
		G_B2_0 = L_3;
		if (L_6)
		{
			G_B3_0 = L_3;
			goto IL_0033;
		}
	}
	{
		G_B4_0 = ((int32_t)48);
		G_B4_1 = G_B2_0;
		goto IL_0035;
	}

IL_0033:
	{
		G_B4_0 = ((int32_t)49);
		G_B4_1 = G_B3_0;
	}

IL_0035:
	{
		NullCheck(G_B4_1);
		StringBuilder_Append_m3618697540(G_B4_1, G_B4_0, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = __this->get_m_capacity_0();
		V_3 = (bool)((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_3;
		if (L_10)
		{
			goto IL_001c;
		}
	}
	{
		StringBuilder_t1221177846 * L_11 = V_0;
		NullCheck(L_11);
		StringBuilder_Append_m3618697540(L_11, ((int32_t)93), /*hidden argument*/NULL);
		StringBuilder_t1221177846 * L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		V_2 = L_13;
		goto IL_005f;
	}

IL_005f:
	{
		String_t* L_14 = V_2;
		return L_14;
	}
}
// System.Byte Lidgren.Network.NetBitWriter::ReadByte(System.Byte[],System.Int32,System.Int32)
extern Il2CppCodeGenString* _stringLiteral697365265;
extern const uint32_t NetBitWriter_ReadByte_m1673854543_MetadataUsageId;
extern "C"  uint8_t NetBitWriter_ReadByte_m1673854543 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___fromBuffer0, int32_t ___numberOfBits1, int32_t ___readBitOffset2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetBitWriter_ReadByte_m1673854543_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	uint8_t V_5 = 0x0;
	bool V_6 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = ___numberOfBits1;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = ___numberOfBits1;
		G_B3_0 = ((((int32_t)L_1) < ((int32_t)((int32_t)9)))? 1 : 0);
		goto IL_000d;
	}

IL_000c:
	{
		G_B3_0 = 0;
	}

IL_000d:
	{
		NetException_Assert_m1067120882(NULL /*static, unused*/, (bool)G_B3_0, _stringLiteral697365265, /*hidden argument*/NULL);
		int32_t L_2 = ___readBitOffset2;
		V_0 = ((int32_t)((int32_t)L_2>>(int32_t)3));
		int32_t L_3 = ___readBitOffset2;
		int32_t L_4 = V_0;
		V_1 = ((int32_t)((int32_t)L_3-(int32_t)((int32_t)((int32_t)L_4*(int32_t)8))));
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_6 = ___numberOfBits1;
		G_B6_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0030;
	}

IL_002f:
	{
		G_B6_0 = 1;
	}

IL_0030:
	{
		V_6 = (bool)G_B6_0;
		bool L_7 = V_6;
		if (L_7)
		{
			goto IL_003e;
		}
	}
	{
		ByteU5BU5D_t3397334013* L_8 = ___fromBuffer0;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_5 = L_11;
		goto IL_009a;
	}

IL_003e:
	{
		ByteU5BU5D_t3397334013* L_12 = ___fromBuffer0;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		int32_t L_16 = V_1;
		V_2 = (((int32_t)((uint8_t)((int32_t)((int32_t)L_15>>(int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)31))))))));
		int32_t L_17 = ___numberOfBits1;
		int32_t L_18 = V_1;
		V_3 = ((int32_t)((int32_t)L_17-(int32_t)((int32_t)((int32_t)8-(int32_t)L_18))));
		int32_t L_19 = V_3;
		V_6 = (bool)((((int32_t)((((int32_t)L_19) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_6;
		if (L_20)
		{
			goto IL_006f;
		}
	}
	{
		uint8_t L_21 = V_2;
		int32_t L_22 = ___numberOfBits1;
		V_5 = (((int32_t)((uint8_t)((int32_t)((int32_t)L_21&(int32_t)((int32_t)((int32_t)((int32_t)255)>>(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)8-(int32_t)L_22))&(int32_t)((int32_t)31))))))))));
		goto IL_009a;
	}

IL_006f:
	{
		ByteU5BU5D_t3397334013* L_23 = ___fromBuffer0;
		int32_t L_24 = V_0;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, ((int32_t)((int32_t)L_24+(int32_t)1)));
		int32_t L_25 = ((int32_t)((int32_t)L_24+(int32_t)1));
		uint8_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_4 = L_26;
		uint8_t L_27 = V_4;
		int32_t L_28 = V_3;
		V_4 = (((int32_t)((uint8_t)((int32_t)((int32_t)L_27&(int32_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)255)>>(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)8-(int32_t)L_28))&(int32_t)((int32_t)31)))))))))))));
		uint8_t L_29 = V_2;
		uint8_t L_30 = V_4;
		int32_t L_31 = ___numberOfBits1;
		int32_t L_32 = V_3;
		V_5 = (((int32_t)((uint8_t)((int32_t)((int32_t)L_29|(int32_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_30<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_31-(int32_t)L_32))&(int32_t)((int32_t)31)))))))))))));
		goto IL_009a;
	}

IL_009a:
	{
		uint8_t L_33 = V_5;
		return L_33;
	}
}
// System.Void Lidgren.Network.NetBitWriter::ReadBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  void NetBitWriter_ReadBytes_m2825983754 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___fromBuffer0, int32_t ___numberOfBytes1, int32_t ___readBitOffset2, ByteU5BU5D_t3397334013* ___destination3, int32_t ___destinationByteOffset4, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	{
		int32_t L_0 = ___readBitOffset2;
		V_0 = ((int32_t)((int32_t)L_0>>(int32_t)3));
		int32_t L_1 = ___readBitOffset2;
		int32_t L_2 = V_0;
		V_1 = ((int32_t)((int32_t)L_1-(int32_t)((int32_t)((int32_t)L_2*(int32_t)8))));
		int32_t L_3 = V_1;
		V_7 = (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_7;
		if (L_4)
		{
			goto IL_0027;
		}
	}
	{
		ByteU5BU5D_t3397334013* L_5 = ___fromBuffer0;
		int32_t L_6 = V_0;
		ByteU5BU5D_t3397334013* L_7 = ___destination3;
		int32_t L_8 = ___destinationByteOffset4;
		int32_t L_9 = ___numberOfBytes1;
		Buffer_BlockCopy_m1586717258(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_5, L_6, (Il2CppArray *)(Il2CppArray *)L_7, L_8, L_9, /*hidden argument*/NULL);
		goto IL_0079;
	}

IL_0027:
	{
		int32_t L_10 = V_1;
		V_2 = ((int32_t)((int32_t)8-(int32_t)L_10));
		int32_t L_11 = V_2;
		V_3 = ((int32_t)((int32_t)((int32_t)255)>>(int32_t)((int32_t)((int32_t)L_11&(int32_t)((int32_t)31)))));
		V_4 = 0;
		goto IL_006c;
	}

IL_003b:
	{
		ByteU5BU5D_t3397334013* L_12 = ___fromBuffer0;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		int32_t L_16 = V_1;
		V_5 = ((int32_t)((int32_t)L_15>>(int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)31)))));
		int32_t L_17 = V_0;
		V_0 = ((int32_t)((int32_t)L_17+(int32_t)1));
		ByteU5BU5D_t3397334013* L_18 = ___fromBuffer0;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		uint8_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		int32_t L_22 = V_3;
		V_6 = ((int32_t)((int32_t)L_21&(int32_t)L_22));
		ByteU5BU5D_t3397334013* L_23 = ___destination3;
		int32_t L_24 = ___destinationByteOffset4;
		int32_t L_25 = L_24;
		___destinationByteOffset4 = ((int32_t)((int32_t)L_25+(int32_t)1));
		int32_t L_26 = V_5;
		int32_t L_27 = V_6;
		int32_t L_28 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_26|(int32_t)((int32_t)((int32_t)L_27<<(int32_t)((int32_t)((int32_t)L_28&(int32_t)((int32_t)31)))))))))));
		int32_t L_29 = V_4;
		V_4 = ((int32_t)((int32_t)L_29+(int32_t)1));
	}

IL_006c:
	{
		int32_t L_30 = V_4;
		int32_t L_31 = ___numberOfBytes1;
		V_7 = (bool)((((int32_t)L_30) < ((int32_t)L_31))? 1 : 0);
		bool L_32 = V_7;
		if (L_32)
		{
			goto IL_003b;
		}
	}
	{
		goto IL_0079;
	}

IL_0079:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetBitWriter::WriteByte(System.Byte,System.Int32,System.Byte[],System.Int32)
extern Il2CppCodeGenString* _stringLiteral2455830070;
extern const uint32_t NetBitWriter_WriteByte_m1348088823_MetadataUsageId;
extern "C"  void NetBitWriter_WriteByte_m1348088823 (Il2CppObject * __this /* static, unused */, uint8_t ___source0, int32_t ___numberOfBits1, ByteU5BU5D_t3397334013* ___destination2, int32_t ___destBitOffset3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetBitWriter_WriteByte_m1348088823_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___numberOfBits1;
		V_5 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_5;
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00bd;
	}

IL_0013:
	{
		int32_t L_2 = ___numberOfBits1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_3 = ___numberOfBits1;
		G_B5_0 = ((((int32_t)((((int32_t)L_3) > ((int32_t)8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0021;
	}

IL_0020:
	{
		G_B5_0 = 0;
	}

IL_0021:
	{
		NetException_Assert_m1067120882(NULL /*static, unused*/, (bool)G_B5_0, _stringLiteral2455830070, /*hidden argument*/NULL);
		uint8_t L_4 = ___source0;
		int32_t L_5 = ___numberOfBits1;
		___source0 = (((int32_t)((uint8_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)((int32_t)((int32_t)255)>>(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)8-(int32_t)L_5))&(int32_t)((int32_t)31))))))))));
		int32_t L_6 = ___destBitOffset3;
		V_0 = ((int32_t)((int32_t)L_6>>(int32_t)3));
		int32_t L_7 = ___destBitOffset3;
		V_1 = ((int32_t)((int32_t)L_7&(int32_t)7));
		int32_t L_8 = V_1;
		V_2 = ((int32_t)((int32_t)8-(int32_t)L_8));
		int32_t L_9 = V_2;
		int32_t L_10 = ___numberOfBits1;
		V_3 = ((int32_t)((int32_t)L_9-(int32_t)L_10));
		int32_t L_11 = V_3;
		V_5 = (bool)((((int32_t)L_11) < ((int32_t)0))? 1 : 0);
		bool L_12 = V_5;
		if (L_12)
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_13 = V_2;
		int32_t L_14 = V_3;
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)255)>>(int32_t)((int32_t)((int32_t)L_13&(int32_t)((int32_t)31)))))|(int32_t)((int32_t)((int32_t)((int32_t)255)<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)8-(int32_t)L_14))&(int32_t)((int32_t)31)))))));
		ByteU5BU5D_t3397334013* L_15 = ___destination2;
		int32_t L_16 = V_0;
		ByteU5BU5D_t3397334013* L_17 = ___destination2;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		uint8_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		int32_t L_21 = V_4;
		uint8_t L_22 = ___source0;
		int32_t L_23 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_20&(int32_t)L_21))|(int32_t)((int32_t)((int32_t)L_22<<(int32_t)((int32_t)((int32_t)L_23&(int32_t)((int32_t)31)))))))))));
		goto IL_00bd;
	}

IL_0085:
	{
		ByteU5BU5D_t3397334013* L_24 = ___destination2;
		int32_t L_25 = V_0;
		ByteU5BU5D_t3397334013* L_26 = ___destination2;
		int32_t L_27 = V_0;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = L_27;
		uint8_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		int32_t L_30 = V_2;
		uint8_t L_31 = ___source0;
		int32_t L_32 = V_1;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_29&(int32_t)((int32_t)((int32_t)((int32_t)255)>>(int32_t)((int32_t)((int32_t)L_30&(int32_t)((int32_t)31)))))))|(int32_t)((int32_t)((int32_t)L_31<<(int32_t)((int32_t)((int32_t)L_32&(int32_t)((int32_t)31)))))))))));
		int32_t L_33 = V_0;
		V_0 = ((int32_t)((int32_t)L_33+(int32_t)1));
		ByteU5BU5D_t3397334013* L_34 = ___destination2;
		int32_t L_35 = V_0;
		ByteU5BU5D_t3397334013* L_36 = ___destination2;
		int32_t L_37 = V_0;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		int32_t L_38 = L_37;
		uint8_t L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		int32_t L_40 = ___numberOfBits1;
		int32_t L_41 = V_2;
		uint8_t L_42 = ___source0;
		int32_t L_43 = V_2;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, L_35);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_39&(int32_t)((int32_t)((int32_t)((int32_t)255)<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_40-(int32_t)L_41))&(int32_t)((int32_t)31)))))))|(int32_t)((int32_t)((int32_t)L_42>>(int32_t)((int32_t)((int32_t)L_43&(int32_t)((int32_t)31)))))))))));
	}

IL_00bd:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetBitWriter::WriteBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  void NetBitWriter_WriteBytes_m3262891483 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___source0, int32_t ___sourceByteOffset1, int32_t ___numberOfBytes2, ByteU5BU5D_t3397334013* ___destination3, int32_t ___destBitOffset4, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	bool V_5 = false;
	{
		int32_t L_0 = ___destBitOffset4;
		V_0 = ((int32_t)((int32_t)L_0>>(int32_t)3));
		int32_t L_1 = ___destBitOffset4;
		V_1 = ((int32_t)((int32_t)L_1%(int32_t)8));
		int32_t L_2 = V_1;
		V_5 = (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_5;
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		ByteU5BU5D_t3397334013* L_4 = ___source0;
		int32_t L_5 = ___sourceByteOffset1;
		ByteU5BU5D_t3397334013* L_6 = ___destination3;
		int32_t L_7 = V_0;
		int32_t L_8 = ___numberOfBytes2;
		Buffer_BlockCopy_m1586717258(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_4, L_5, (Il2CppArray *)(Il2CppArray *)L_6, L_7, L_8, /*hidden argument*/NULL);
		goto IL_00ca;
	}

IL_0029:
	{
		int32_t L_9 = V_1;
		V_2 = ((int32_t)((int32_t)8-(int32_t)L_9));
		V_3 = 0;
		goto IL_00bb;
	}

IL_0034:
	{
		ByteU5BU5D_t3397334013* L_10 = ___source0;
		int32_t L_11 = ___sourceByteOffset1;
		int32_t L_12 = V_3;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, ((int32_t)((int32_t)L_11+(int32_t)L_12)));
		int32_t L_13 = ((int32_t)((int32_t)L_11+(int32_t)L_12));
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		ByteU5BU5D_t3397334013* L_15 = ___destination3;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		uint8_t* L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)));
		int32_t L_18 = V_2;
		(*(uint8_t*)L_17) = (((int32_t)((uint8_t)((int32_t)((int32_t)(*(uint8_t*)L_17)&(int32_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)255)>>(int32_t)((int32_t)((int32_t)L_18&(int32_t)((int32_t)31)))))))))))));
		ByteU5BU5D_t3397334013* L_19 = ___destination3;
		int32_t L_20 = V_0;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		uint8_t* L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)));
		uint8_t L_22 = V_4;
		int32_t L_23 = V_1;
		(*(uint8_t*)L_21) = (((int32_t)((uint8_t)((int32_t)((int32_t)(*(uint8_t*)L_21)|(int32_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_22<<(int32_t)((int32_t)((int32_t)L_23&(int32_t)((int32_t)31)))))))))))));
		int32_t L_24 = V_0;
		V_0 = ((int32_t)((int32_t)L_24+(int32_t)1));
		ByteU5BU5D_t3397334013* L_25 = ___destination3;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		uint8_t* L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)));
		int32_t L_28 = V_1;
		(*(uint8_t*)L_27) = (((int32_t)((uint8_t)((int32_t)((int32_t)(*(uint8_t*)L_27)&(int32_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)255)<<(int32_t)((int32_t)((int32_t)L_28&(int32_t)((int32_t)31)))))))))))));
		ByteU5BU5D_t3397334013* L_29 = ___destination3;
		int32_t L_30 = V_0;
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, L_30);
		uint8_t* L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)));
		uint8_t L_32 = V_4;
		int32_t L_33 = V_2;
		(*(uint8_t*)L_31) = (((int32_t)((uint8_t)((int32_t)((int32_t)(*(uint8_t*)L_31)|(int32_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_32>>(int32_t)((int32_t)((int32_t)L_33&(int32_t)((int32_t)31)))))))))))));
		int32_t L_34 = V_3;
		V_3 = ((int32_t)((int32_t)L_34+(int32_t)1));
	}

IL_00bb:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = ___numberOfBytes2;
		V_5 = (bool)((((int32_t)L_35) < ((int32_t)L_36))? 1 : 0);
		bool L_37 = V_5;
		if (L_37)
		{
			goto IL_0034;
		}
	}
	{
		goto IL_00ca;
	}

IL_00ca:
	{
		return;
	}
}
// System.UInt16 Lidgren.Network.NetBitWriter::ReadUInt16(System.Byte[],System.Int32,System.Int32)
extern Il2CppCodeGenString* _stringLiteral2134848543;
extern const uint32_t NetBitWriter_ReadUInt16_m634713443_MetadataUsageId;
extern "C"  uint16_t NetBitWriter_ReadUInt16_m634713443 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___fromBuffer0, int32_t ___numberOfBits1, int32_t ___readBitOffset2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetBitWriter_ReadUInt16_m634713443_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	uint16_t V_0 = 0;
	uint16_t V_1 = 0;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___numberOfBits1;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___numberOfBits1;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) > ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 0;
	}

IL_0010:
	{
		Debug_Assert_m1466756561(NULL /*static, unused*/, (bool)G_B3_0, _stringLiteral2134848543, /*hidden argument*/NULL);
		int32_t L_2 = ___numberOfBits1;
		V_2 = (bool)((((int32_t)L_2) > ((int32_t)8))? 1 : 0);
		bool L_3 = V_2;
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		ByteU5BU5D_t3397334013* L_4 = ___fromBuffer0;
		int32_t L_5 = ___numberOfBits1;
		int32_t L_6 = ___readBitOffset2;
		uint8_t L_7 = NetBitWriter_ReadByte_m1673854543(NULL /*static, unused*/, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		uint16_t L_8 = V_0;
		V_1 = L_8;
		goto IL_0062;
	}

IL_0032:
	{
		ByteU5BU5D_t3397334013* L_9 = ___fromBuffer0;
		int32_t L_10 = ___readBitOffset2;
		uint8_t L_11 = NetBitWriter_ReadByte_m1673854543(NULL /*static, unused*/, L_9, 8, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		int32_t L_12 = ___numberOfBits1;
		___numberOfBits1 = ((int32_t)((int32_t)L_12-(int32_t)8));
		int32_t L_13 = ___readBitOffset2;
		___readBitOffset2 = ((int32_t)((int32_t)L_13+(int32_t)8));
		int32_t L_14 = ___numberOfBits1;
		V_2 = (bool)((((int32_t)L_14) > ((int32_t)8))? 1 : 0);
		bool L_15 = V_2;
		if (L_15)
		{
			goto IL_005e;
		}
	}
	{
		uint16_t L_16 = V_0;
		ByteU5BU5D_t3397334013* L_17 = ___fromBuffer0;
		int32_t L_18 = ___numberOfBits1;
		int32_t L_19 = ___readBitOffset2;
		uint8_t L_20 = NetBitWriter_ReadByte_m1673854543(NULL /*static, unused*/, L_17, L_18, L_19, /*hidden argument*/NULL);
		V_0 = (((int32_t)((uint16_t)((int32_t)((int32_t)L_16|(int32_t)(((int32_t)((uint16_t)((int32_t)((int32_t)L_20<<(int32_t)8))))))))));
	}

IL_005e:
	{
		uint16_t L_21 = V_0;
		V_1 = L_21;
		goto IL_0062;
	}

IL_0062:
	{
		uint16_t L_22 = V_1;
		return L_22;
	}
}
// System.UInt32 Lidgren.Network.NetBitWriter::ReadUInt32(System.Byte[],System.Int32,System.Int32)
extern Il2CppCodeGenString* _stringLiteral4184075247;
extern const uint32_t NetBitWriter_ReadUInt32_m1364064019_MetadataUsageId;
extern "C"  uint32_t NetBitWriter_ReadUInt32_m1364064019 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___fromBuffer0, int32_t ___numberOfBits1, int32_t ___readBitOffset2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetBitWriter_ReadUInt32_m1364064019_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	bool V_3 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___numberOfBits1;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___numberOfBits1;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) > ((int32_t)((int32_t)32)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 0;
	}

IL_0010:
	{
		NetException_Assert_m1067120882(NULL /*static, unused*/, (bool)G_B3_0, _stringLiteral4184075247, /*hidden argument*/NULL);
		int32_t L_2 = ___numberOfBits1;
		V_3 = (bool)((((int32_t)L_2) > ((int32_t)8))? 1 : 0);
		bool L_3 = V_3;
		if (L_3)
		{
			goto IL_0035;
		}
	}
	{
		ByteU5BU5D_t3397334013* L_4 = ___fromBuffer0;
		int32_t L_5 = ___numberOfBits1;
		int32_t L_6 = ___readBitOffset2;
		uint8_t L_7 = NetBitWriter_ReadByte_m1673854543(NULL /*static, unused*/, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		uint32_t L_8 = V_0;
		V_2 = L_8;
		goto IL_00c2;
	}

IL_0035:
	{
		ByteU5BU5D_t3397334013* L_9 = ___fromBuffer0;
		int32_t L_10 = ___readBitOffset2;
		uint8_t L_11 = NetBitWriter_ReadByte_m1673854543(NULL /*static, unused*/, L_9, 8, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		int32_t L_12 = ___numberOfBits1;
		___numberOfBits1 = ((int32_t)((int32_t)L_12-(int32_t)8));
		int32_t L_13 = ___readBitOffset2;
		___readBitOffset2 = ((int32_t)((int32_t)L_13+(int32_t)8));
		int32_t L_14 = ___numberOfBits1;
		V_3 = (bool)((((int32_t)L_14) > ((int32_t)8))? 1 : 0);
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_0062;
		}
	}
	{
		uint32_t L_16 = V_0;
		ByteU5BU5D_t3397334013* L_17 = ___fromBuffer0;
		int32_t L_18 = ___numberOfBits1;
		int32_t L_19 = ___readBitOffset2;
		uint8_t L_20 = NetBitWriter_ReadByte_m1673854543(NULL /*static, unused*/, L_17, L_18, L_19, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_16|(int32_t)((int32_t)((int32_t)L_20<<(int32_t)8))));
		uint32_t L_21 = V_0;
		V_2 = L_21;
		goto IL_00c2;
	}

IL_0062:
	{
		uint32_t L_22 = V_0;
		ByteU5BU5D_t3397334013* L_23 = ___fromBuffer0;
		int32_t L_24 = ___readBitOffset2;
		uint8_t L_25 = NetBitWriter_ReadByte_m1673854543(NULL /*static, unused*/, L_23, 8, L_24, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_22|(int32_t)((int32_t)((int32_t)L_25<<(int32_t)8))));
		int32_t L_26 = ___numberOfBits1;
		___numberOfBits1 = ((int32_t)((int32_t)L_26-(int32_t)8));
		int32_t L_27 = ___readBitOffset2;
		___readBitOffset2 = ((int32_t)((int32_t)L_27+(int32_t)8));
		int32_t L_28 = ___numberOfBits1;
		V_3 = (bool)((((int32_t)L_28) > ((int32_t)8))? 1 : 0);
		bool L_29 = V_3;
		if (L_29)
		{
			goto IL_0098;
		}
	}
	{
		ByteU5BU5D_t3397334013* L_30 = ___fromBuffer0;
		int32_t L_31 = ___numberOfBits1;
		int32_t L_32 = ___readBitOffset2;
		uint8_t L_33 = NetBitWriter_ReadByte_m1673854543(NULL /*static, unused*/, L_30, L_31, L_32, /*hidden argument*/NULL);
		V_1 = L_33;
		uint32_t L_34 = V_1;
		V_1 = ((int32_t)((int32_t)L_34<<(int32_t)((int32_t)16)));
		uint32_t L_35 = V_0;
		uint32_t L_36 = V_1;
		V_0 = ((int32_t)((int32_t)L_35|(int32_t)L_36));
		uint32_t L_37 = V_0;
		V_2 = L_37;
		goto IL_00c2;
	}

IL_0098:
	{
		uint32_t L_38 = V_0;
		ByteU5BU5D_t3397334013* L_39 = ___fromBuffer0;
		int32_t L_40 = ___readBitOffset2;
		uint8_t L_41 = NetBitWriter_ReadByte_m1673854543(NULL /*static, unused*/, L_39, 8, L_40, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_38|(int32_t)((int32_t)((int32_t)L_41<<(int32_t)((int32_t)16)))));
		int32_t L_42 = ___numberOfBits1;
		___numberOfBits1 = ((int32_t)((int32_t)L_42-(int32_t)8));
		int32_t L_43 = ___readBitOffset2;
		___readBitOffset2 = ((int32_t)((int32_t)L_43+(int32_t)8));
		uint32_t L_44 = V_0;
		ByteU5BU5D_t3397334013* L_45 = ___fromBuffer0;
		int32_t L_46 = ___numberOfBits1;
		int32_t L_47 = ___readBitOffset2;
		uint8_t L_48 = NetBitWriter_ReadByte_m1673854543(NULL /*static, unused*/, L_45, L_46, L_47, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_44|(int32_t)((int32_t)((int32_t)L_48<<(int32_t)((int32_t)24)))));
		uint32_t L_49 = V_0;
		V_2 = L_49;
		goto IL_00c2;
	}

IL_00c2:
	{
		uint32_t L_50 = V_2;
		return L_50;
	}
}
// System.Int32 Lidgren.Network.NetBitWriter::WriteUInt32(System.UInt32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t NetBitWriter_WriteUInt32_m1361372613 (Il2CppObject * __this /* static, unused */, uint32_t ___source0, int32_t ___numberOfBits1, ByteU5BU5D_t3397334013* ___destination2, int32_t ___destinationBitOffset3, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		int32_t L_0 = ___destinationBitOffset3;
		int32_t L_1 = ___numberOfBits1;
		V_0 = ((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = ___numberOfBits1;
		V_2 = (bool)((((int32_t)L_2) > ((int32_t)8))? 1 : 0);
		bool L_3 = V_2;
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		uint32_t L_4 = ___source0;
		int32_t L_5 = ___numberOfBits1;
		ByteU5BU5D_t3397334013* L_6 = ___destination2;
		int32_t L_7 = ___destinationBitOffset3;
		NetBitWriter_WriteByte_m1348088823(NULL /*static, unused*/, (((int32_t)((uint8_t)L_4))), L_5, L_6, L_7, /*hidden argument*/NULL);
		int32_t L_8 = V_0;
		V_1 = L_8;
		goto IL_00ab;
	}

IL_0020:
	{
		uint32_t L_9 = ___source0;
		ByteU5BU5D_t3397334013* L_10 = ___destination2;
		int32_t L_11 = ___destinationBitOffset3;
		NetBitWriter_WriteByte_m1348088823(NULL /*static, unused*/, (((int32_t)((uint8_t)L_9))), 8, L_10, L_11, /*hidden argument*/NULL);
		int32_t L_12 = ___destinationBitOffset3;
		___destinationBitOffset3 = ((int32_t)((int32_t)L_12+(int32_t)8));
		int32_t L_13 = ___numberOfBits1;
		___numberOfBits1 = ((int32_t)((int32_t)L_13-(int32_t)8));
		int32_t L_14 = ___numberOfBits1;
		V_2 = (bool)((((int32_t)L_14) > ((int32_t)8))? 1 : 0);
		bool L_15 = V_2;
		if (L_15)
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_16 = ___source0;
		int32_t L_17 = ___numberOfBits1;
		ByteU5BU5D_t3397334013* L_18 = ___destination2;
		int32_t L_19 = ___destinationBitOffset3;
		NetBitWriter_WriteByte_m1348088823(NULL /*static, unused*/, (((int32_t)((uint8_t)((int32_t)((uint32_t)L_16>>8))))), L_17, L_18, L_19, /*hidden argument*/NULL);
		int32_t L_20 = V_0;
		V_1 = L_20;
		goto IL_00ab;
	}

IL_004f:
	{
		uint32_t L_21 = ___source0;
		ByteU5BU5D_t3397334013* L_22 = ___destination2;
		int32_t L_23 = ___destinationBitOffset3;
		NetBitWriter_WriteByte_m1348088823(NULL /*static, unused*/, (((int32_t)((uint8_t)((int32_t)((uint32_t)L_21>>8))))), 8, L_22, L_23, /*hidden argument*/NULL);
		int32_t L_24 = ___destinationBitOffset3;
		___destinationBitOffset3 = ((int32_t)((int32_t)L_24+(int32_t)8));
		int32_t L_25 = ___numberOfBits1;
		___numberOfBits1 = ((int32_t)((int32_t)L_25-(int32_t)8));
		int32_t L_26 = ___numberOfBits1;
		V_2 = (bool)((((int32_t)L_26) > ((int32_t)8))? 1 : 0);
		bool L_27 = V_2;
		if (L_27)
		{
			goto IL_0081;
		}
	}
	{
		uint32_t L_28 = ___source0;
		int32_t L_29 = ___numberOfBits1;
		ByteU5BU5D_t3397334013* L_30 = ___destination2;
		int32_t L_31 = ___destinationBitOffset3;
		NetBitWriter_WriteByte_m1348088823(NULL /*static, unused*/, (((int32_t)((uint8_t)((int32_t)((uint32_t)L_28>>((int32_t)16)))))), L_29, L_30, L_31, /*hidden argument*/NULL);
		int32_t L_32 = V_0;
		V_1 = L_32;
		goto IL_00ab;
	}

IL_0081:
	{
		uint32_t L_33 = ___source0;
		ByteU5BU5D_t3397334013* L_34 = ___destination2;
		int32_t L_35 = ___destinationBitOffset3;
		NetBitWriter_WriteByte_m1348088823(NULL /*static, unused*/, (((int32_t)((uint8_t)((int32_t)((uint32_t)L_33>>((int32_t)16)))))), 8, L_34, L_35, /*hidden argument*/NULL);
		int32_t L_36 = ___destinationBitOffset3;
		___destinationBitOffset3 = ((int32_t)((int32_t)L_36+(int32_t)8));
		int32_t L_37 = ___numberOfBits1;
		___numberOfBits1 = ((int32_t)((int32_t)L_37-(int32_t)8));
		uint32_t L_38 = ___source0;
		int32_t L_39 = ___numberOfBits1;
		ByteU5BU5D_t3397334013* L_40 = ___destination2;
		int32_t L_41 = ___destinationBitOffset3;
		NetBitWriter_WriteByte_m1348088823(NULL /*static, unused*/, (((int32_t)((uint8_t)((int32_t)((uint32_t)L_38>>((int32_t)24)))))), L_39, L_40, L_41, /*hidden argument*/NULL);
		int32_t L_42 = V_0;
		V_1 = L_42;
		goto IL_00ab;
	}

IL_00ab:
	{
		int32_t L_43 = V_1;
		return L_43;
	}
}
// System.Int32 Lidgren.Network.NetBitWriter::WriteUInt64(System.UInt64,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t NetBitWriter_WriteUInt64_m3878476069 (Il2CppObject * __this /* static, unused */, uint64_t ___source0, int32_t ___numberOfBits1, ByteU5BU5D_t3397334013* ___destination2, int32_t ___destinationBitOffset3, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		int32_t L_0 = ___destinationBitOffset3;
		int32_t L_1 = ___numberOfBits1;
		V_0 = ((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = ___numberOfBits1;
		V_2 = (bool)((((int32_t)L_2) > ((int32_t)8))? 1 : 0);
		bool L_3 = V_2;
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		uint64_t L_4 = ___source0;
		int32_t L_5 = ___numberOfBits1;
		ByteU5BU5D_t3397334013* L_6 = ___destination2;
		int32_t L_7 = ___destinationBitOffset3;
		NetBitWriter_WriteByte_m1348088823(NULL /*static, unused*/, (((int32_t)((uint8_t)L_4))), L_5, L_6, L_7, /*hidden argument*/NULL);
		int32_t L_8 = V_0;
		V_1 = L_8;
		goto IL_01ab;
	}

IL_0020:
	{
		uint64_t L_9 = ___source0;
		ByteU5BU5D_t3397334013* L_10 = ___destination2;
		int32_t L_11 = ___destinationBitOffset3;
		NetBitWriter_WriteByte_m1348088823(NULL /*static, unused*/, (((int32_t)((uint8_t)L_9))), 8, L_10, L_11, /*hidden argument*/NULL);
		int32_t L_12 = ___destinationBitOffset3;
		___destinationBitOffset3 = ((int32_t)((int32_t)L_12+(int32_t)8));
		int32_t L_13 = ___numberOfBits1;
		___numberOfBits1 = ((int32_t)((int32_t)L_13-(int32_t)8));
		int32_t L_14 = ___numberOfBits1;
		V_2 = (bool)((((int32_t)L_14) > ((int32_t)8))? 1 : 0);
		bool L_15 = V_2;
		if (L_15)
		{
			goto IL_0052;
		}
	}
	{
		uint64_t L_16 = ___source0;
		int32_t L_17 = ___numberOfBits1;
		ByteU5BU5D_t3397334013* L_18 = ___destination2;
		int32_t L_19 = ___destinationBitOffset3;
		NetBitWriter_WriteByte_m1348088823(NULL /*static, unused*/, (((int32_t)((uint8_t)((int64_t)((uint64_t)L_16>>8))))), L_17, L_18, L_19, /*hidden argument*/NULL);
		int32_t L_20 = V_0;
		V_1 = L_20;
		goto IL_01ab;
	}

IL_0052:
	{
		uint64_t L_21 = ___source0;
		ByteU5BU5D_t3397334013* L_22 = ___destination2;
		int32_t L_23 = ___destinationBitOffset3;
		NetBitWriter_WriteByte_m1348088823(NULL /*static, unused*/, (((int32_t)((uint8_t)((int64_t)((uint64_t)L_21>>8))))), 8, L_22, L_23, /*hidden argument*/NULL);
		int32_t L_24 = ___destinationBitOffset3;
		___destinationBitOffset3 = ((int32_t)((int32_t)L_24+(int32_t)8));
		int32_t L_25 = ___numberOfBits1;
		___numberOfBits1 = ((int32_t)((int32_t)L_25-(int32_t)8));
		int32_t L_26 = ___numberOfBits1;
		V_2 = (bool)((((int32_t)L_26) > ((int32_t)8))? 1 : 0);
		bool L_27 = V_2;
		if (L_27)
		{
			goto IL_0087;
		}
	}
	{
		uint64_t L_28 = ___source0;
		int32_t L_29 = ___numberOfBits1;
		ByteU5BU5D_t3397334013* L_30 = ___destination2;
		int32_t L_31 = ___destinationBitOffset3;
		NetBitWriter_WriteByte_m1348088823(NULL /*static, unused*/, (((int32_t)((uint8_t)((int64_t)((uint64_t)L_28>>((int32_t)16)))))), L_29, L_30, L_31, /*hidden argument*/NULL);
		int32_t L_32 = V_0;
		V_1 = L_32;
		goto IL_01ab;
	}

IL_0087:
	{
		uint64_t L_33 = ___source0;
		ByteU5BU5D_t3397334013* L_34 = ___destination2;
		int32_t L_35 = ___destinationBitOffset3;
		NetBitWriter_WriteByte_m1348088823(NULL /*static, unused*/, (((int32_t)((uint8_t)((int64_t)((uint64_t)L_33>>((int32_t)16)))))), 8, L_34, L_35, /*hidden argument*/NULL);
		int32_t L_36 = ___destinationBitOffset3;
		___destinationBitOffset3 = ((int32_t)((int32_t)L_36+(int32_t)8));
		int32_t L_37 = ___numberOfBits1;
		___numberOfBits1 = ((int32_t)((int32_t)L_37-(int32_t)8));
		int32_t L_38 = ___numberOfBits1;
		V_2 = (bool)((((int32_t)L_38) > ((int32_t)8))? 1 : 0);
		bool L_39 = V_2;
		if (L_39)
		{
			goto IL_00bd;
		}
	}
	{
		uint64_t L_40 = ___source0;
		int32_t L_41 = ___numberOfBits1;
		ByteU5BU5D_t3397334013* L_42 = ___destination2;
		int32_t L_43 = ___destinationBitOffset3;
		NetBitWriter_WriteByte_m1348088823(NULL /*static, unused*/, (((int32_t)((uint8_t)((int64_t)((uint64_t)L_40>>((int32_t)24)))))), L_41, L_42, L_43, /*hidden argument*/NULL);
		int32_t L_44 = V_0;
		V_1 = L_44;
		goto IL_01ab;
	}

IL_00bd:
	{
		uint64_t L_45 = ___source0;
		ByteU5BU5D_t3397334013* L_46 = ___destination2;
		int32_t L_47 = ___destinationBitOffset3;
		NetBitWriter_WriteByte_m1348088823(NULL /*static, unused*/, (((int32_t)((uint8_t)((int64_t)((uint64_t)L_45>>((int32_t)24)))))), 8, L_46, L_47, /*hidden argument*/NULL);
		int32_t L_48 = ___destinationBitOffset3;
		___destinationBitOffset3 = ((int32_t)((int32_t)L_48+(int32_t)8));
		int32_t L_49 = ___numberOfBits1;
		___numberOfBits1 = ((int32_t)((int32_t)L_49-(int32_t)8));
		int32_t L_50 = ___numberOfBits1;
		V_2 = (bool)((((int32_t)L_50) > ((int32_t)8))? 1 : 0);
		bool L_51 = V_2;
		if (L_51)
		{
			goto IL_00f3;
		}
	}
	{
		uint64_t L_52 = ___source0;
		int32_t L_53 = ___numberOfBits1;
		ByteU5BU5D_t3397334013* L_54 = ___destination2;
		int32_t L_55 = ___destinationBitOffset3;
		NetBitWriter_WriteByte_m1348088823(NULL /*static, unused*/, (((int32_t)((uint8_t)((int64_t)((uint64_t)L_52>>((int32_t)32)))))), L_53, L_54, L_55, /*hidden argument*/NULL);
		int32_t L_56 = V_0;
		V_1 = L_56;
		goto IL_01ab;
	}

IL_00f3:
	{
		uint64_t L_57 = ___source0;
		ByteU5BU5D_t3397334013* L_58 = ___destination2;
		int32_t L_59 = ___destinationBitOffset3;
		NetBitWriter_WriteByte_m1348088823(NULL /*static, unused*/, (((int32_t)((uint8_t)((int64_t)((uint64_t)L_57>>((int32_t)32)))))), 8, L_58, L_59, /*hidden argument*/NULL);
		int32_t L_60 = ___destinationBitOffset3;
		___destinationBitOffset3 = ((int32_t)((int32_t)L_60+(int32_t)8));
		int32_t L_61 = ___numberOfBits1;
		___numberOfBits1 = ((int32_t)((int32_t)L_61-(int32_t)8));
		int32_t L_62 = ___numberOfBits1;
		V_2 = (bool)((((int32_t)L_62) > ((int32_t)8))? 1 : 0);
		bool L_63 = V_2;
		if (L_63)
		{
			goto IL_0129;
		}
	}
	{
		uint64_t L_64 = ___source0;
		int32_t L_65 = ___numberOfBits1;
		ByteU5BU5D_t3397334013* L_66 = ___destination2;
		int32_t L_67 = ___destinationBitOffset3;
		NetBitWriter_WriteByte_m1348088823(NULL /*static, unused*/, (((int32_t)((uint8_t)((int64_t)((uint64_t)L_64>>((int32_t)40)))))), L_65, L_66, L_67, /*hidden argument*/NULL);
		int32_t L_68 = V_0;
		V_1 = L_68;
		goto IL_01ab;
	}

IL_0129:
	{
		uint64_t L_69 = ___source0;
		ByteU5BU5D_t3397334013* L_70 = ___destination2;
		int32_t L_71 = ___destinationBitOffset3;
		NetBitWriter_WriteByte_m1348088823(NULL /*static, unused*/, (((int32_t)((uint8_t)((int64_t)((uint64_t)L_69>>((int32_t)40)))))), 8, L_70, L_71, /*hidden argument*/NULL);
		int32_t L_72 = ___destinationBitOffset3;
		___destinationBitOffset3 = ((int32_t)((int32_t)L_72+(int32_t)8));
		int32_t L_73 = ___numberOfBits1;
		___numberOfBits1 = ((int32_t)((int32_t)L_73-(int32_t)8));
		int32_t L_74 = ___numberOfBits1;
		V_2 = (bool)((((int32_t)L_74) > ((int32_t)8))? 1 : 0);
		bool L_75 = V_2;
		if (L_75)
		{
			goto IL_015c;
		}
	}
	{
		uint64_t L_76 = ___source0;
		int32_t L_77 = ___numberOfBits1;
		ByteU5BU5D_t3397334013* L_78 = ___destination2;
		int32_t L_79 = ___destinationBitOffset3;
		NetBitWriter_WriteByte_m1348088823(NULL /*static, unused*/, (((int32_t)((uint8_t)((int64_t)((uint64_t)L_76>>((int32_t)48)))))), L_77, L_78, L_79, /*hidden argument*/NULL);
		int32_t L_80 = V_0;
		V_1 = L_80;
		goto IL_01ab;
	}

IL_015c:
	{
		uint64_t L_81 = ___source0;
		ByteU5BU5D_t3397334013* L_82 = ___destination2;
		int32_t L_83 = ___destinationBitOffset3;
		NetBitWriter_WriteByte_m1348088823(NULL /*static, unused*/, (((int32_t)((uint8_t)((int64_t)((uint64_t)L_81>>((int32_t)48)))))), 8, L_82, L_83, /*hidden argument*/NULL);
		int32_t L_84 = ___destinationBitOffset3;
		___destinationBitOffset3 = ((int32_t)((int32_t)L_84+(int32_t)8));
		int32_t L_85 = ___numberOfBits1;
		___numberOfBits1 = ((int32_t)((int32_t)L_85-(int32_t)8));
		int32_t L_86 = ___numberOfBits1;
		V_2 = (bool)((((int32_t)L_86) > ((int32_t)8))? 1 : 0);
		bool L_87 = V_2;
		if (L_87)
		{
			goto IL_018f;
		}
	}
	{
		uint64_t L_88 = ___source0;
		int32_t L_89 = ___numberOfBits1;
		ByteU5BU5D_t3397334013* L_90 = ___destination2;
		int32_t L_91 = ___destinationBitOffset3;
		NetBitWriter_WriteByte_m1348088823(NULL /*static, unused*/, (((int32_t)((uint8_t)((int64_t)((uint64_t)L_88>>((int32_t)56)))))), L_89, L_90, L_91, /*hidden argument*/NULL);
		int32_t L_92 = V_0;
		V_1 = L_92;
		goto IL_01ab;
	}

IL_018f:
	{
		uint64_t L_93 = ___source0;
		ByteU5BU5D_t3397334013* L_94 = ___destination2;
		int32_t L_95 = ___destinationBitOffset3;
		NetBitWriter_WriteByte_m1348088823(NULL /*static, unused*/, (((int32_t)((uint8_t)((int64_t)((uint64_t)L_93>>((int32_t)56)))))), 8, L_94, L_95, /*hidden argument*/NULL);
		int32_t L_96 = ___destinationBitOffset3;
		___destinationBitOffset3 = ((int32_t)((int32_t)L_96+(int32_t)8));
		int32_t L_97 = ___numberOfBits1;
		___numberOfBits1 = ((int32_t)((int32_t)L_97-(int32_t)8));
		int32_t L_98 = V_0;
		V_1 = L_98;
		goto IL_01ab;
	}

IL_01ab:
	{
		int32_t L_99 = V_1;
		return L_99;
	}
}
// System.Byte[] Lidgren.Network.NetBuffer::get_Data()
extern "C"  ByteU5BU5D_t3397334013* NetBuffer_get_Data_m1302059707 (NetBuffer_t3608062491 * __this, const MethodInfo* method)
{
	ByteU5BU5D_t3397334013* V_0 = NULL;
	{
		ByteU5BU5D_t3397334013* L_0 = __this->get_m_data_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ByteU5BU5D_t3397334013* L_1 = V_0;
		return L_1;
	}
}
// System.Int32 Lidgren.Network.NetBuffer::get_LengthBytes()
extern "C"  int32_t NetBuffer_get_LengthBytes_m2765088638 (NetBuffer_t3608062491 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_bitLength_3();
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0+(int32_t)7))>>(int32_t)3));
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 Lidgren.Network.NetBuffer::get_LengthBits()
extern "C"  int32_t NetBuffer_get_LengthBits_m2426148225 (NetBuffer_t3608062491 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_bitLength_3();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Lidgren.Network.NetBuffer::set_LengthBits(System.Int32)
extern "C"  void NetBuffer_set_LengthBits_m2102256812 (NetBuffer_t3608062491 * __this, int32_t ___value0, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_bitLength_3(L_0);
		int32_t L_1 = __this->get_m_bitLength_3();
		NetBuffer_InternalEnsureBufferSize_m2673967747(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Lidgren.Network.NetBuffer::get_PositionInBytes()
extern "C"  int32_t NetBuffer_get_PositionInBytes_m2104121730 (NetBuffer_t3608062491 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_readPosition_4();
		V_0 = ((int32_t)((int32_t)L_0/(int32_t)8));
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Lidgren.Network.NetBuffer::.cctor()
extern const Il2CppType* NetIncomingMessage_t2014089816_0_0_0_var;
extern const Il2CppType* NetOutgoingMessage_t2016542980_0_0_0_var;
extern Il2CppClass* Dictionary_2_t972936938_il2cpp_TypeInfo_var;
extern Il2CppClass* NetBuffer_t3608062491_il2cpp_TypeInfo_var;
extern Il2CppClass* Type_t_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m456053151_MethodInfo_var;
extern const MethodInfo* Dictionary_2_set_Item_m114247304_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral4136223338;
extern Il2CppCodeGenString* _stringLiteral1494441421;
extern const uint32_t NetBuffer__cctor_m1227205649_MetadataUsageId;
extern "C"  void NetBuffer__cctor_m1227205649 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetBuffer__cctor_m1227205649_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	MethodInfoU5BU5D_t152480188* V_0 = NULL;
	MethodInfo_t * V_1 = NULL;
	ParameterInfoU5BU5D_t2275869610* V_2 = NULL;
	MethodInfoU5BU5D_t152480188* V_3 = NULL;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t G_B5_0 = 0;
	{
		Dictionary_2_t972936938 * L_0 = (Dictionary_2_t972936938 *)il2cpp_codegen_object_new(Dictionary_2_t972936938_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m456053151(L_0, /*hidden argument*/Dictionary_2__ctor_m456053151_MethodInfo_var);
		((NetBuffer_t3608062491_StaticFields*)NetBuffer_t3608062491_il2cpp_TypeInfo_var->static_fields)->set_s_readMethods_0(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, LoadTypeToken(NetIncomingMessage_t2014089816_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		MethodInfoU5BU5D_t152480188* L_2 = VirtFuncInvoker1< MethodInfoU5BU5D_t152480188*, int32_t >::Invoke(62 /* System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags) */, L_1, ((int32_t)20));
		V_0 = L_2;
		MethodInfoU5BU5D_t152480188* L_3 = V_0;
		V_3 = L_3;
		V_4 = 0;
		goto IL_008c;
	}

IL_0025:
	{
		MethodInfoU5BU5D_t152480188* L_4 = V_3;
		int32_t L_5 = V_4;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		MethodInfo_t * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		MethodInfo_t * L_8 = V_1;
		NullCheck(L_8);
		ParameterInfoU5BU5D_t2275869610* L_9 = VirtFuncInvoker0< ParameterInfoU5BU5D_t2275869610* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_8);
		NullCheck(L_9);
		if ((((int32_t)((int32_t)(((Il2CppArray *)L_9)->max_length)))))
		{
			goto IL_0069;
		}
	}
	{
		MethodInfo_t * L_10 = V_1;
		NullCheck(L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_10);
		NullCheck(L_11);
		bool L_12 = String_StartsWith_m46695182(L_11, _stringLiteral4136223338, 2, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		MethodInfo_t * L_13 = V_1;
		NullCheck(L_13);
		String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_13);
		NullCheck(L_14);
		String_t* L_15 = String_Substring_m2032624251(L_14, 4, /*hidden argument*/NULL);
		MethodInfo_t * L_16 = V_1;
		NullCheck(L_16);
		Type_t * L_17 = VirtFuncInvoker0< Type_t * >::Invoke(33 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_16);
		NullCheck(L_17);
		String_t* L_18 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_17);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_19 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_15, L_18, /*hidden argument*/NULL);
		G_B5_0 = ((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		goto IL_006a;
	}

IL_0069:
	{
		G_B5_0 = 1;
	}

IL_006a:
	{
		V_5 = (bool)G_B5_0;
		bool L_20 = V_5;
		if (L_20)
		{
			goto IL_0085;
		}
	}
	{
		Dictionary_2_t972936938 * L_21 = ((NetBuffer_t3608062491_StaticFields*)NetBuffer_t3608062491_il2cpp_TypeInfo_var->static_fields)->get_s_readMethods_0();
		MethodInfo_t * L_22 = V_1;
		NullCheck(L_22);
		Type_t * L_23 = VirtFuncInvoker0< Type_t * >::Invoke(33 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_22);
		MethodInfo_t * L_24 = V_1;
		NullCheck(L_21);
		Dictionary_2_set_Item_m114247304(L_21, L_23, L_24, /*hidden argument*/Dictionary_2_set_Item_m114247304_MethodInfo_var);
	}

IL_0085:
	{
		int32_t L_25 = V_4;
		V_4 = ((int32_t)((int32_t)L_25+(int32_t)1));
	}

IL_008c:
	{
		int32_t L_26 = V_4;
		MethodInfoU5BU5D_t152480188* L_27 = V_3;
		NullCheck(L_27);
		V_5 = (bool)((((int32_t)L_26) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_27)->max_length))))))? 1 : 0);
		bool L_28 = V_5;
		if (L_28)
		{
			goto IL_0025;
		}
	}
	{
		Dictionary_2_t972936938 * L_29 = (Dictionary_2_t972936938 *)il2cpp_codegen_object_new(Dictionary_2_t972936938_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m456053151(L_29, /*hidden argument*/Dictionary_2__ctor_m456053151_MethodInfo_var);
		((NetBuffer_t3608062491_StaticFields*)NetBuffer_t3608062491_il2cpp_TypeInfo_var->static_fields)->set_s_writeMethods_1(L_29);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_30 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, LoadTypeToken(NetOutgoingMessage_t2016542980_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_30);
		MethodInfoU5BU5D_t152480188* L_31 = VirtFuncInvoker1< MethodInfoU5BU5D_t152480188*, int32_t >::Invoke(62 /* System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags) */, L_30, ((int32_t)20));
		V_0 = L_31;
		MethodInfoU5BU5D_t152480188* L_32 = V_0;
		V_3 = L_32;
		V_4 = 0;
		goto IL_0110;
	}

IL_00bd:
	{
		MethodInfoU5BU5D_t152480188* L_33 = V_3;
		int32_t L_34 = V_4;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, L_34);
		int32_t L_35 = L_34;
		MethodInfo_t * L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_1 = L_36;
		MethodInfo_t * L_37 = V_1;
		NullCheck(L_37);
		String_t* L_38 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_37);
		NullCheck(L_38);
		bool L_39 = String_Equals_m1185277978(L_38, _stringLiteral1494441421, 2, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_39) == ((int32_t)0))? 1 : 0);
		bool L_40 = V_5;
		if (L_40)
		{
			goto IL_0109;
		}
	}
	{
		MethodInfo_t * L_41 = V_1;
		NullCheck(L_41);
		ParameterInfoU5BU5D_t2275869610* L_42 = VirtFuncInvoker0< ParameterInfoU5BU5D_t2275869610* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_41);
		V_2 = L_42;
		ParameterInfoU5BU5D_t2275869610* L_43 = V_2;
		NullCheck(L_43);
		V_5 = (bool)((((int32_t)((((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_43)->max_length))))) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_44 = V_5;
		if (L_44)
		{
			goto IL_0108;
		}
	}
	{
		Dictionary_2_t972936938 * L_45 = ((NetBuffer_t3608062491_StaticFields*)NetBuffer_t3608062491_il2cpp_TypeInfo_var->static_fields)->get_s_writeMethods_1();
		ParameterInfoU5BU5D_t2275869610* L_46 = V_2;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, 0);
		int32_t L_47 = 0;
		ParameterInfo_t2249040075 * L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		NullCheck(L_48);
		Type_t * L_49 = VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_48);
		MethodInfo_t * L_50 = V_1;
		NullCheck(L_45);
		Dictionary_2_set_Item_m114247304(L_45, L_49, L_50, /*hidden argument*/Dictionary_2_set_Item_m114247304_MethodInfo_var);
	}

IL_0108:
	{
	}

IL_0109:
	{
		int32_t L_51 = V_4;
		V_4 = ((int32_t)((int32_t)L_51+(int32_t)1));
	}

IL_0110:
	{
		int32_t L_52 = V_4;
		MethodInfoU5BU5D_t152480188* L_53 = V_3;
		NullCheck(L_53);
		V_5 = (bool)((((int32_t)L_52) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_53)->max_length))))))? 1 : 0);
		bool L_54 = V_5;
		if (L_54)
		{
			goto IL_00bd;
		}
	}
	{
		return;
	}
}
// System.Byte Lidgren.Network.NetBuffer::PeekByte()
extern Il2CppCodeGenString* _stringLiteral611203703;
extern const uint32_t NetBuffer_PeekByte_m934254441_MetadataUsageId;
extern "C"  uint8_t NetBuffer_PeekByte_m934254441 (NetBuffer_t3608062491 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetBuffer_PeekByte_m934254441_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	uint8_t V_0 = 0x0;
	uint8_t V_1 = 0x0;
	{
		int32_t L_0 = __this->get_m_bitLength_3();
		int32_t L_1 = __this->get_m_readPosition_4();
		NetException_Assert_m1067120882(NULL /*static, unused*/, (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_0-(int32_t)L_1))) < ((int32_t)8))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral611203703, /*hidden argument*/NULL);
		ByteU5BU5D_t3397334013* L_2 = __this->get_m_data_2();
		int32_t L_3 = __this->get_m_readPosition_4();
		uint8_t L_4 = NetBitWriter_ReadByte_m1673854543(NULL /*static, unused*/, L_2, 8, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		uint8_t L_5 = V_0;
		V_1 = L_5;
		goto IL_0036;
	}

IL_0036:
	{
		uint8_t L_6 = V_1;
		return L_6;
	}
}
// System.Byte Lidgren.Network.NetBuffer::ReadByte()
extern Il2CppCodeGenString* _stringLiteral611203703;
extern const uint32_t NetBuffer_ReadByte_m3348400846_MetadataUsageId;
extern "C"  uint8_t NetBuffer_ReadByte_m3348400846 (NetBuffer_t3608062491 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetBuffer_ReadByte_m3348400846_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	uint8_t V_0 = 0x0;
	uint8_t V_1 = 0x0;
	{
		int32_t L_0 = __this->get_m_bitLength_3();
		int32_t L_1 = __this->get_m_readPosition_4();
		NetException_Assert_m1067120882(NULL /*static, unused*/, (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_0-(int32_t)L_1))) < ((int32_t)8))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral611203703, /*hidden argument*/NULL);
		ByteU5BU5D_t3397334013* L_2 = __this->get_m_data_2();
		int32_t L_3 = __this->get_m_readPosition_4();
		uint8_t L_4 = NetBitWriter_ReadByte_m1673854543(NULL /*static, unused*/, L_2, 8, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = __this->get_m_readPosition_4();
		__this->set_m_readPosition_4(((int32_t)((int32_t)L_5+(int32_t)8)));
		uint8_t L_6 = V_0;
		V_1 = L_6;
		goto IL_0044;
	}

IL_0044:
	{
		uint8_t L_7 = V_1;
		return L_7;
	}
}
// System.Byte[] Lidgren.Network.NetBuffer::ReadBytes(System.Int32)
extern Il2CppClass* ByteU5BU5D_t3397334013_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral611203703;
extern const uint32_t NetBuffer_ReadBytes_m4004009464_MetadataUsageId;
extern "C"  ByteU5BU5D_t3397334013* NetBuffer_ReadBytes_m4004009464 (NetBuffer_t3608062491 * __this, int32_t ___numberOfBytes0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetBuffer_ReadBytes_m4004009464_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t3397334013* V_0 = NULL;
	ByteU5BU5D_t3397334013* V_1 = NULL;
	{
		int32_t L_0 = __this->get_m_bitLength_3();
		int32_t L_1 = __this->get_m_readPosition_4();
		int32_t L_2 = ___numberOfBytes0;
		NetException_Assert_m1067120882(NULL /*static, unused*/, (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0-(int32_t)L_1))+(int32_t)7))) < ((int32_t)((int32_t)((int32_t)L_2*(int32_t)8))))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral611203703, /*hidden argument*/NULL);
		int32_t L_3 = ___numberOfBytes0;
		V_0 = ((ByteU5BU5D_t3397334013*)SZArrayNew(ByteU5BU5D_t3397334013_il2cpp_TypeInfo_var, (uint32_t)L_3));
		ByteU5BU5D_t3397334013* L_4 = __this->get_m_data_2();
		int32_t L_5 = ___numberOfBytes0;
		int32_t L_6 = __this->get_m_readPosition_4();
		ByteU5BU5D_t3397334013* L_7 = V_0;
		NetBitWriter_ReadBytes_m2825983754(NULL /*static, unused*/, L_4, L_5, L_6, L_7, 0, /*hidden argument*/NULL);
		int32_t L_8 = __this->get_m_readPosition_4();
		int32_t L_9 = ___numberOfBytes0;
		__this->set_m_readPosition_4(((int32_t)((int32_t)L_8+(int32_t)((int32_t)((int32_t)8*(int32_t)L_9)))));
		ByteU5BU5D_t3397334013* L_10 = V_0;
		V_1 = L_10;
		goto IL_0053;
	}

IL_0053:
	{
		ByteU5BU5D_t3397334013* L_11 = V_1;
		return L_11;
	}
}
// System.UInt16 Lidgren.Network.NetBuffer::ReadUInt16()
extern Il2CppCodeGenString* _stringLiteral611203703;
extern const uint32_t NetBuffer_ReadUInt16_m907876270_MetadataUsageId;
extern "C"  uint16_t NetBuffer_ReadUInt16_m907876270 (NetBuffer_t3608062491 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetBuffer_ReadUInt16_m907876270_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	uint16_t V_1 = 0;
	{
		int32_t L_0 = __this->get_m_bitLength_3();
		int32_t L_1 = __this->get_m_readPosition_4();
		NetException_Assert_m1067120882(NULL /*static, unused*/, (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_0-(int32_t)L_1))) < ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral611203703, /*hidden argument*/NULL);
		ByteU5BU5D_t3397334013* L_2 = __this->get_m_data_2();
		int32_t L_3 = __this->get_m_readPosition_4();
		uint16_t L_4 = NetBitWriter_ReadUInt16_m634713443(NULL /*static, unused*/, L_2, ((int32_t)16), L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = __this->get_m_readPosition_4();
		__this->set_m_readPosition_4(((int32_t)((int32_t)L_5+(int32_t)((int32_t)16))));
		uint32_t L_6 = V_0;
		V_1 = (((int32_t)((uint16_t)L_6)));
		goto IL_0048;
	}

IL_0048:
	{
		uint16_t L_7 = V_1;
		return L_7;
	}
}
// System.Int32 Lidgren.Network.NetBuffer::ReadInt32()
extern Il2CppCodeGenString* _stringLiteral611203703;
extern const uint32_t NetBuffer_ReadInt32_m2479521906_MetadataUsageId;
extern "C"  int32_t NetBuffer_ReadInt32_m2479521906 (NetBuffer_t3608062491 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetBuffer_ReadInt32_m2479521906_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->get_m_bitLength_3();
		int32_t L_1 = __this->get_m_readPosition_4();
		NetException_Assert_m1067120882(NULL /*static, unused*/, (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_0-(int32_t)L_1))) < ((int32_t)((int32_t)32)))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral611203703, /*hidden argument*/NULL);
		ByteU5BU5D_t3397334013* L_2 = __this->get_m_data_2();
		int32_t L_3 = __this->get_m_readPosition_4();
		uint32_t L_4 = NetBitWriter_ReadUInt32_m1364064019(NULL /*static, unused*/, L_2, ((int32_t)32), L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = __this->get_m_readPosition_4();
		__this->set_m_readPosition_4(((int32_t)((int32_t)L_5+(int32_t)((int32_t)32))));
		uint32_t L_6 = V_0;
		V_1 = L_6;
		goto IL_0047;
	}

IL_0047:
	{
		int32_t L_7 = V_1;
		return L_7;
	}
}
// System.UInt64 Lidgren.Network.NetBuffer::ReadUInt64()
extern Il2CppCodeGenString* _stringLiteral611203703;
extern const uint32_t NetBuffer_ReadUInt64_m475056270_MetadataUsageId;
extern "C"  uint64_t NetBuffer_ReadUInt64_m475056270 (NetBuffer_t3608062491 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetBuffer_ReadUInt64_m475056270_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	{
		int32_t L_0 = __this->get_m_bitLength_3();
		int32_t L_1 = __this->get_m_readPosition_4();
		NetException_Assert_m1067120882(NULL /*static, unused*/, (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_0-(int32_t)L_1))) < ((int32_t)((int32_t)64)))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral611203703, /*hidden argument*/NULL);
		ByteU5BU5D_t3397334013* L_2 = __this->get_m_data_2();
		int32_t L_3 = __this->get_m_readPosition_4();
		uint32_t L_4 = NetBitWriter_ReadUInt32_m1364064019(NULL /*static, unused*/, L_2, ((int32_t)32), L_3, /*hidden argument*/NULL);
		V_0 = (((int64_t)((uint64_t)L_4)));
		int32_t L_5 = __this->get_m_readPosition_4();
		__this->set_m_readPosition_4(((int32_t)((int32_t)L_5+(int32_t)((int32_t)32))));
		ByteU5BU5D_t3397334013* L_6 = __this->get_m_data_2();
		int32_t L_7 = __this->get_m_readPosition_4();
		uint32_t L_8 = NetBitWriter_ReadUInt32_m1364064019(NULL /*static, unused*/, L_6, ((int32_t)32), L_7, /*hidden argument*/NULL);
		V_1 = (((int64_t)((uint64_t)L_8)));
		uint64_t L_9 = V_0;
		uint64_t L_10 = V_1;
		V_2 = ((int64_t)((int64_t)L_9+(int64_t)((int64_t)((int64_t)L_10<<(int32_t)((int32_t)32)))));
		int32_t L_11 = __this->get_m_readPosition_4();
		__this->set_m_readPosition_4(((int32_t)((int32_t)L_11+(int32_t)((int32_t)32))));
		uint64_t L_12 = V_2;
		V_3 = L_12;
		goto IL_0073;
	}

IL_0073:
	{
		uint64_t L_13 = V_3;
		return L_13;
	}
}
// System.Int64 Lidgren.Network.NetBuffer::ReadInt64()
extern Il2CppCodeGenString* _stringLiteral611203703;
extern const uint32_t NetBuffer_ReadInt64_m2415498424_MetadataUsageId;
extern "C"  int64_t NetBuffer_ReadInt64_m2415498424 (NetBuffer_t3608062491 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetBuffer_ReadInt64_m2415498424_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	uint64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	{
		int32_t L_0 = __this->get_m_bitLength_3();
		int32_t L_1 = __this->get_m_readPosition_4();
		NetException_Assert_m1067120882(NULL /*static, unused*/, (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_0-(int32_t)L_1))) < ((int32_t)((int32_t)64)))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral611203703, /*hidden argument*/NULL);
		uint64_t L_2 = NetBuffer_ReadUInt64_m475056270(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		uint64_t L_3 = V_0;
		V_1 = L_3;
		int64_t L_4 = V_1;
		V_2 = L_4;
		goto IL_002e;
	}

IL_002e:
	{
		int64_t L_5 = V_2;
		return L_5;
	}
}
// System.Single Lidgren.Network.NetBuffer::ReadSingle()
extern Il2CppClass* BitConverter_t3195628829_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral611203703;
extern const uint32_t NetBuffer_ReadSingle_m2767420110_MetadataUsageId;
extern "C"  float NetBuffer_ReadSingle_m2767420110 (NetBuffer_t3608062491 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetBuffer_ReadSingle_m2767420110_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	ByteU5BU5D_t3397334013* V_1 = NULL;
	float V_2 = 0.0f;
	bool V_3 = false;
	{
		int32_t L_0 = __this->get_m_bitLength_3();
		int32_t L_1 = __this->get_m_readPosition_4();
		NetException_Assert_m1067120882(NULL /*static, unused*/, (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_0-(int32_t)L_1))) < ((int32_t)((int32_t)32)))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral611203703, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_m_readPosition_4();
		V_3 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_2&(int32_t)7))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_3;
		if (L_3)
		{
			goto IL_005a;
		}
	}
	{
		ByteU5BU5D_t3397334013* L_4 = __this->get_m_data_2();
		int32_t L_5 = __this->get_m_readPosition_4();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3195628829_il2cpp_TypeInfo_var);
		float L_6 = BitConverter_ToSingle_m159411893(NULL /*static, unused*/, L_4, ((int32_t)((int32_t)L_5>>(int32_t)3)), /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7 = __this->get_m_readPosition_4();
		__this->set_m_readPosition_4(((int32_t)((int32_t)L_7+(int32_t)((int32_t)32))));
		float L_8 = V_0;
		V_2 = L_8;
		goto IL_006c;
	}

IL_005a:
	{
		ByteU5BU5D_t3397334013* L_9 = NetBuffer_ReadBytes_m4004009464(__this, 4, /*hidden argument*/NULL);
		V_1 = L_9;
		ByteU5BU5D_t3397334013* L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3195628829_il2cpp_TypeInfo_var);
		float L_11 = BitConverter_ToSingle_m159411893(NULL /*static, unused*/, L_10, 0, /*hidden argument*/NULL);
		V_2 = L_11;
		goto IL_006c;
	}

IL_006c:
	{
		float L_12 = V_2;
		return L_12;
	}
}
// System.UInt32 Lidgren.Network.NetBuffer::ReadVariableUInt32()
extern "C"  uint32_t NetBuffer_ReadVariableUInt32_m100620994 (NetBuffer_t3608062491 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	uint32_t V_3 = 0;
	bool V_4 = false;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0037;
	}

IL_0007:
	{
		uint8_t L_0 = NetBuffer_ReadByte_m3348400846(__this, /*hidden argument*/NULL);
		V_2 = L_0;
		int32_t L_1 = V_0;
		uint8_t L_2 = V_2;
		int32_t L_3 = V_1;
		V_0 = ((int32_t)((int32_t)L_1|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)127)))<<(int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)31)))))));
		int32_t L_4 = V_1;
		V_1 = ((int32_t)((int32_t)L_4+(int32_t)7));
		uint8_t L_5 = V_2;
		V_4 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)128)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_4;
		if (L_6)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = V_0;
		V_3 = L_7;
		goto IL_0054;
	}

IL_0036:
	{
	}

IL_0037:
	{
		int32_t L_8 = __this->get_m_bitLength_3();
		int32_t L_9 = __this->get_m_readPosition_4();
		V_4 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_8-(int32_t)L_9))) < ((int32_t)8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_4;
		if (L_10)
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_11 = V_0;
		V_3 = L_11;
		goto IL_0054;
	}

IL_0054:
	{
		uint32_t L_12 = V_3;
		return L_12;
	}
}
// System.String Lidgren.Network.NetBuffer::ReadString()
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* NetException_t2452891498_il2cpp_TypeInfo_var;
extern Il2CppClass* Encoding_t663144255_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral611203703;
extern const uint32_t NetBuffer_ReadString_m1223210798_MetadataUsageId;
extern "C"  String_t* NetBuffer_ReadString_m1223210798 (NetBuffer_t3608062491 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetBuffer_ReadString_m1223210798_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	ByteU5BU5D_t3397334013* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	{
		uint32_t L_0 = NetBuffer_ReadVariableUInt32_m100620994(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_4 = (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
		bool L_2 = V_4;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		V_3 = L_3;
		goto IL_00a4;
	}

IL_001d:
	{
		int32_t L_4 = __this->get_m_bitLength_3();
		int32_t L_5 = __this->get_m_readPosition_4();
		int32_t L_6 = V_0;
		V_4 = (bool)((((int32_t)((!(((uint64_t)(((int64_t)((int64_t)((int32_t)((int32_t)L_4-(int32_t)L_5)))))) >= ((uint64_t)((int64_t)((int64_t)(((int64_t)((int64_t)L_6)))*(int64_t)(((int64_t)((int64_t)8))))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_4;
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		NetException_t2452891498 * L_8 = (NetException_t2452891498 *)il2cpp_codegen_object_new(NetException_t2452891498_il2cpp_TypeInfo_var);
		NetException__ctor_m2724322251(L_8, _stringLiteral611203703, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8);
	}

IL_0047:
	{
		int32_t L_9 = __this->get_m_readPosition_4();
		V_4 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_9&(int32_t)7))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_4;
		if (L_10)
		{
			goto IL_008a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t663144255_il2cpp_TypeInfo_var);
		Encoding_t663144255 * L_11 = Encoding_get_UTF8_m1752852937(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t3397334013* L_12 = __this->get_m_data_2();
		int32_t L_13 = __this->get_m_readPosition_4();
		int32_t L_14 = V_0;
		NullCheck(L_11);
		String_t* L_15 = VirtFuncInvoker3< String_t*, ByteU5BU5D_t3397334013*, int32_t, int32_t >::Invoke(21 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_11, L_12, ((int32_t)((int32_t)L_13>>(int32_t)3)), L_14);
		V_1 = L_15;
		int32_t L_16 = __this->get_m_readPosition_4();
		int32_t L_17 = V_0;
		__this->set_m_readPosition_4(((int32_t)((int32_t)L_16+(int32_t)((int32_t)((int32_t)8*(int32_t)L_17)))));
		String_t* L_18 = V_1;
		V_3 = L_18;
		goto IL_00a4;
	}

IL_008a:
	{
		int32_t L_19 = V_0;
		ByteU5BU5D_t3397334013* L_20 = NetBuffer_ReadBytes_m4004009464(__this, L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t663144255_il2cpp_TypeInfo_var);
		Encoding_t663144255 * L_21 = Encoding_get_UTF8_m1752852937(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t3397334013* L_22 = V_2;
		ByteU5BU5D_t3397334013* L_23 = V_2;
		NullCheck(L_23);
		NullCheck(L_21);
		String_t* L_24 = VirtFuncInvoker3< String_t*, ByteU5BU5D_t3397334013*, int32_t, int32_t >::Invoke(21 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_21, L_22, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_23)->max_length)))));
		V_3 = L_24;
		goto IL_00a4;
	}

IL_00a4:
	{
		String_t* L_25 = V_3;
		return L_25;
	}
}
// System.Net.IPEndPoint Lidgren.Network.NetBuffer::ReadIPEndPoint()
extern Il2CppClass* NetUtility_t3562260209_il2cpp_TypeInfo_var;
extern Il2CppClass* IPEndPoint_t2615413766_il2cpp_TypeInfo_var;
extern const uint32_t NetBuffer_ReadIPEndPoint_m430505649_MetadataUsageId;
extern "C"  IPEndPoint_t2615413766 * NetBuffer_ReadIPEndPoint_m430505649 (NetBuffer_t3608062491 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetBuffer_ReadIPEndPoint_m430505649_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	uint8_t V_0 = 0x0;
	ByteU5BU5D_t3397334013* V_1 = NULL;
	int32_t V_2 = 0;
	IPAddress_t1399971723 * V_3 = NULL;
	IPEndPoint_t2615413766 * V_4 = NULL;
	{
		uint8_t L_0 = NetBuffer_ReadByte_m3348400846(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		uint8_t L_1 = V_0;
		ByteU5BU5D_t3397334013* L_2 = NetBuffer_ReadBytes_m4004009464(__this, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		uint16_t L_3 = NetBuffer_ReadUInt16_m907876270(__this, /*hidden argument*/NULL);
		V_2 = L_3;
		ByteU5BU5D_t3397334013* L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(NetUtility_t3562260209_il2cpp_TypeInfo_var);
		IPAddress_t1399971723 * L_5 = NetUtility_CreateAddressFromBytes_m1989273768(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		IPAddress_t1399971723 * L_6 = V_3;
		int32_t L_7 = V_2;
		IPEndPoint_t2615413766 * L_8 = (IPEndPoint_t2615413766 *)il2cpp_codegen_object_new(IPEndPoint_t2615413766_il2cpp_TypeInfo_var);
		IPEndPoint__ctor_m3477723888(L_8, L_6, L_7, /*hidden argument*/NULL);
		V_4 = L_8;
		goto IL_0029;
	}

IL_0029:
	{
		IPEndPoint_t2615413766 * L_9 = V_4;
		return L_9;
	}
}
// System.Void Lidgren.Network.NetBuffer::EnsureBufferSize(System.Int32)
extern Il2CppClass* ByteU5BU5D_t3397334013_il2cpp_TypeInfo_var;
extern const MethodInfo* Array_Resize_TisByte_t3683104436_m3136363656_MethodInfo_var;
extern const uint32_t NetBuffer_EnsureBufferSize_m2910474188_MetadataUsageId;
extern "C"  void NetBuffer_EnsureBufferSize_m2910474188 (NetBuffer_t3608062491 * __this, int32_t ___numberOfBits0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetBuffer_EnsureBufferSize_m2910474188_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = ___numberOfBits0;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0+(int32_t)7))>>(int32_t)3));
		ByteU5BU5D_t3397334013* L_1 = __this->get_m_data_2();
		V_1 = (bool)((((int32_t)((((Il2CppObject*)(ByteU5BU5D_t3397334013*)L_1) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = V_0;
		__this->set_m_data_2(((ByteU5BU5D_t3397334013*)SZArrayNew(ByteU5BU5D_t3397334013_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)L_3+(int32_t)4)))));
		goto IL_004b;
	}

IL_0028:
	{
		ByteU5BU5D_t3397334013* L_4 = __this->get_m_data_2();
		NullCheck(L_4);
		int32_t L_5 = V_0;
		V_1 = (bool)((((int32_t)((((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_4)->max_length))))) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (L_6)
		{
			goto IL_0049;
		}
	}
	{
		ByteU5BU5D_t3397334013** L_7 = __this->get_address_of_m_data_2();
		int32_t L_8 = V_0;
		Array_Resize_TisByte_t3683104436_m3136363656(NULL /*static, unused*/, L_7, ((int32_t)((int32_t)L_8+(int32_t)4)), /*hidden argument*/Array_Resize_TisByte_t3683104436_m3136363656_MethodInfo_var);
	}

IL_0049:
	{
		goto IL_004b;
	}

IL_004b:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetBuffer::InternalEnsureBufferSize(System.Int32)
extern Il2CppClass* ByteU5BU5D_t3397334013_il2cpp_TypeInfo_var;
extern const MethodInfo* Array_Resize_TisByte_t3683104436_m3136363656_MethodInfo_var;
extern const uint32_t NetBuffer_InternalEnsureBufferSize_m2673967747_MetadataUsageId;
extern "C"  void NetBuffer_InternalEnsureBufferSize_m2673967747 (NetBuffer_t3608062491 * __this, int32_t ___numberOfBits0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetBuffer_InternalEnsureBufferSize_m2673967747_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = ___numberOfBits0;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0+(int32_t)7))>>(int32_t)3));
		ByteU5BU5D_t3397334013* L_1 = __this->get_m_data_2();
		V_1 = (bool)((((int32_t)((((Il2CppObject*)(ByteU5BU5D_t3397334013*)L_1) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = V_0;
		__this->set_m_data_2(((ByteU5BU5D_t3397334013*)SZArrayNew(ByteU5BU5D_t3397334013_il2cpp_TypeInfo_var, (uint32_t)L_3)));
		goto IL_0047;
	}

IL_0026:
	{
		ByteU5BU5D_t3397334013* L_4 = __this->get_m_data_2();
		NullCheck(L_4);
		int32_t L_5 = V_0;
		V_1 = (bool)((((int32_t)((((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_4)->max_length))))) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (L_6)
		{
			goto IL_0045;
		}
	}
	{
		ByteU5BU5D_t3397334013** L_7 = __this->get_address_of_m_data_2();
		int32_t L_8 = V_0;
		Array_Resize_TisByte_t3683104436_m3136363656(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/Array_Resize_TisByte_t3683104436_m3136363656_MethodInfo_var);
	}

IL_0045:
	{
		goto IL_0047;
	}

IL_0047:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetBuffer::Write(System.Byte)
extern "C"  void NetBuffer_Write_m4142810212 (NetBuffer_t3608062491 * __this, uint8_t ___source0, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_m_bitLength_3();
		NetBuffer_EnsureBufferSize_m2910474188(__this, ((int32_t)((int32_t)L_0+(int32_t)8)), /*hidden argument*/NULL);
		uint8_t L_1 = ___source0;
		ByteU5BU5D_t3397334013* L_2 = __this->get_m_data_2();
		int32_t L_3 = __this->get_m_bitLength_3();
		NetBitWriter_WriteByte_m1348088823(NULL /*static, unused*/, L_1, 8, L_2, L_3, /*hidden argument*/NULL);
		int32_t L_4 = __this->get_m_bitLength_3();
		__this->set_m_bitLength_3(((int32_t)((int32_t)L_4+(int32_t)8)));
		return;
	}
}
// System.Void Lidgren.Network.NetBuffer::Write(System.Byte[])
extern Il2CppClass* ArgumentNullException_t628810857_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4211174801;
extern const uint32_t NetBuffer_Write_m3595600516_MetadataUsageId;
extern "C"  void NetBuffer_Write_m3595600516 (NetBuffer_t3608062491 * __this, ByteU5BU5D_t3397334013* ___source0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetBuffer_Write_m3595600516_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		ByteU5BU5D_t3397334013* L_0 = ___source0;
		V_1 = (bool)((((int32_t)((((Il2CppObject*)(ByteU5BU5D_t3397334013*)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t628810857 * L_2 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_2, _stringLiteral4211174801, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		ByteU5BU5D_t3397334013* L_3 = ___source0;
		NullCheck(L_3);
		V_0 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_3)->max_length))))*(int32_t)8));
		int32_t L_4 = __this->get_m_bitLength_3();
		int32_t L_5 = V_0;
		NetBuffer_EnsureBufferSize_m2910474188(__this, ((int32_t)((int32_t)L_4+(int32_t)L_5)), /*hidden argument*/NULL);
		ByteU5BU5D_t3397334013* L_6 = ___source0;
		ByteU5BU5D_t3397334013* L_7 = ___source0;
		NullCheck(L_7);
		ByteU5BU5D_t3397334013* L_8 = __this->get_m_data_2();
		int32_t L_9 = __this->get_m_bitLength_3();
		NetBitWriter_WriteBytes_m3262891483(NULL /*static, unused*/, L_6, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_7)->max_length)))), L_8, L_9, /*hidden argument*/NULL);
		int32_t L_10 = __this->get_m_bitLength_3();
		int32_t L_11 = V_0;
		__this->set_m_bitLength_3(((int32_t)((int32_t)L_10+(int32_t)L_11)));
		return;
	}
}
// System.Void Lidgren.Network.NetBuffer::Write(System.Byte[],System.Int32,System.Int32)
extern Il2CppClass* ArgumentNullException_t628810857_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4211174801;
extern const uint32_t NetBuffer_Write_m3872681458_MetadataUsageId;
extern "C"  void NetBuffer_Write_m3872681458 (NetBuffer_t3608062491 * __this, ByteU5BU5D_t3397334013* ___source0, int32_t ___offsetInBytes1, int32_t ___numberOfBytes2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetBuffer_Write_m3872681458_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		ByteU5BU5D_t3397334013* L_0 = ___source0;
		V_1 = (bool)((((int32_t)((((Il2CppObject*)(ByteU5BU5D_t3397334013*)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t628810857 * L_2 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_2, _stringLiteral4211174801, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___numberOfBytes2;
		V_0 = ((int32_t)((int32_t)L_3*(int32_t)8));
		int32_t L_4 = __this->get_m_bitLength_3();
		int32_t L_5 = V_0;
		NetBuffer_EnsureBufferSize_m2910474188(__this, ((int32_t)((int32_t)L_4+(int32_t)L_5)), /*hidden argument*/NULL);
		ByteU5BU5D_t3397334013* L_6 = ___source0;
		int32_t L_7 = ___offsetInBytes1;
		int32_t L_8 = ___numberOfBytes2;
		ByteU5BU5D_t3397334013* L_9 = __this->get_m_data_2();
		int32_t L_10 = __this->get_m_bitLength_3();
		NetBitWriter_WriteBytes_m3262891483(NULL /*static, unused*/, L_6, L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
		int32_t L_11 = __this->get_m_bitLength_3();
		int32_t L_12 = V_0;
		__this->set_m_bitLength_3(((int32_t)((int32_t)L_11+(int32_t)L_12)));
		return;
	}
}
// System.Void Lidgren.Network.NetBuffer::Write(System.Int32)
extern "C"  void NetBuffer_Write_m3675152492 (NetBuffer_t3608062491 * __this, int32_t ___source0, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_m_bitLength_3();
		NetBuffer_EnsureBufferSize_m2910474188(__this, ((int32_t)((int32_t)L_0+(int32_t)((int32_t)32))), /*hidden argument*/NULL);
		int32_t L_1 = ___source0;
		ByteU5BU5D_t3397334013* L_2 = __this->get_m_data_2();
		int32_t L_3 = __this->get_m_bitLength_3();
		NetBitWriter_WriteUInt32_m1361372613(NULL /*static, unused*/, L_1, ((int32_t)32), L_2, L_3, /*hidden argument*/NULL);
		int32_t L_4 = __this->get_m_bitLength_3();
		__this->set_m_bitLength_3(((int32_t)((int32_t)L_4+(int32_t)((int32_t)32))));
		return;
	}
}
// System.Void Lidgren.Network.NetBuffer::Write(System.UInt32)
extern "C"  void NetBuffer_Write_m2917047851 (NetBuffer_t3608062491 * __this, uint32_t ___source0, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_m_bitLength_3();
		NetBuffer_EnsureBufferSize_m2910474188(__this, ((int32_t)((int32_t)L_0+(int32_t)((int32_t)32))), /*hidden argument*/NULL);
		uint32_t L_1 = ___source0;
		ByteU5BU5D_t3397334013* L_2 = __this->get_m_data_2();
		int32_t L_3 = __this->get_m_bitLength_3();
		NetBitWriter_WriteUInt32_m1361372613(NULL /*static, unused*/, L_1, ((int32_t)32), L_2, L_3, /*hidden argument*/NULL);
		int32_t L_4 = __this->get_m_bitLength_3();
		__this->set_m_bitLength_3(((int32_t)((int32_t)L_4+(int32_t)((int32_t)32))));
		return;
	}
}
// System.Void Lidgren.Network.NetBuffer::Write(System.Int64)
extern "C"  void NetBuffer_Write_m4098639993 (NetBuffer_t3608062491 * __this, int64_t ___source0, const MethodInfo* method)
{
	uint64_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_bitLength_3();
		NetBuffer_EnsureBufferSize_m2910474188(__this, ((int32_t)((int32_t)L_0+(int32_t)((int32_t)64))), /*hidden argument*/NULL);
		int64_t L_1 = ___source0;
		V_0 = L_1;
		uint64_t L_2 = V_0;
		ByteU5BU5D_t3397334013* L_3 = __this->get_m_data_2();
		int32_t L_4 = __this->get_m_bitLength_3();
		NetBitWriter_WriteUInt64_m3878476069(NULL /*static, unused*/, L_2, ((int32_t)64), L_3, L_4, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_m_bitLength_3();
		__this->set_m_bitLength_3(((int32_t)((int32_t)L_5+(int32_t)((int32_t)64))));
		return;
	}
}
// System.Void Lidgren.Network.NetBuffer::Write(System.Single)
extern "C"  void NetBuffer_Write_m2191092918 (NetBuffer_t3608062491 * __this, float ___source0, const MethodInfo* method)
{
	SingleUIntUnion_t3787661257  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		(&V_0)->set_UIntValue_1(0);
		float L_0 = ___source0;
		(&V_0)->set_SingleValue_0(L_0);
		uint32_t L_1 = (&V_0)->get_UIntValue_1();
		NetBuffer_Write_m2917047851(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Lidgren.Network.NetBuffer::WriteVariableUInt32(System.UInt32)
extern "C"  int32_t NetBuffer_WriteVariableUInt32_m1610554926 (NetBuffer_t3608062491 * __this, uint32_t ___value0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		V_0 = 1;
		uint32_t L_0 = ___value0;
		V_1 = L_0;
		goto IL_0020;
	}

IL_0007:
	{
		uint32_t L_1 = V_1;
		NetBuffer_Write_m4142810212(__this, (((int32_t)((uint8_t)((int32_t)((int32_t)L_1|(int32_t)((int32_t)128)))))), /*hidden argument*/NULL);
		uint32_t L_2 = V_1;
		V_1 = ((int32_t)((uint32_t)L_2>>7));
		int32_t L_3 = V_0;
		V_0 = ((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_0020:
	{
		uint32_t L_4 = V_1;
		V_3 = (bool)((((int32_t)((!(((uint32_t)L_4) >= ((uint32_t)((int32_t)128))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_3;
		if (L_5)
		{
			goto IL_0007;
		}
	}
	{
		uint32_t L_6 = V_1;
		NetBuffer_Write_m4142810212(__this, (((int32_t)((uint8_t)L_6))), /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		V_2 = L_7;
		goto IL_003c;
	}

IL_003c:
	{
		int32_t L_8 = V_2;
		return L_8;
	}
}
// System.Void Lidgren.Network.NetBuffer::Write(System.String)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Encoding_t663144255_il2cpp_TypeInfo_var;
extern const uint32_t NetBuffer_Write_m962556565_MetadataUsageId;
extern "C"  void NetBuffer_Write_m962556565 (NetBuffer_t3608062491 * __this, String_t* ___source0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetBuffer_Write_m962556565_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t3397334013* V_0 = NULL;
	bool V_1 = false;
	{
		String_t* L_0 = ___source0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m2802126737(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		NetBuffer_WriteVariableUInt32_m1610554926(__this, 0, /*hidden argument*/NULL);
		goto IL_004c;
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t663144255_il2cpp_TypeInfo_var);
		Encoding_t663144255 * L_3 = Encoding_get_UTF8_m1752852937(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_4 = ___source0;
		NullCheck(L_3);
		ByteU5BU5D_t3397334013* L_5 = VirtFuncInvoker1< ByteU5BU5D_t3397334013*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_3, L_4);
		V_0 = L_5;
		int32_t L_6 = __this->get_m_bitLength_3();
		ByteU5BU5D_t3397334013* L_7 = V_0;
		NullCheck(L_7);
		NetBuffer_EnsureBufferSize_m2910474188(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_6+(int32_t)8))+(int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_7)->max_length))))*(int32_t)8)))), /*hidden argument*/NULL);
		ByteU5BU5D_t3397334013* L_8 = V_0;
		NullCheck(L_8);
		NetBuffer_WriteVariableUInt32_m1610554926(__this, (((int32_t)((int32_t)(((Il2CppArray *)L_8)->max_length)))), /*hidden argument*/NULL);
		ByteU5BU5D_t3397334013* L_9 = V_0;
		NetBuffer_Write_m3595600516(__this, L_9, /*hidden argument*/NULL);
	}

IL_004c:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetBuffer::.ctor()
extern "C"  void NetBuffer__ctor_m3780783062 (NetBuffer_t3608062491 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// Lidgren.Network.NetConnection Lidgren.Network.NetClient::get_ServerConnection()
extern Il2CppClass* Il2CppObject_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_get_Count_m1394854046_MethodInfo_var;
extern const MethodInfo* List_1_get_Item_m1684201913_MethodInfo_var;
extern const uint32_t NetClient_get_ServerConnection_m1176301950_MetadataUsageId;
extern "C"  NetConnection_t3331492029 * NetClient_get_ServerConnection_m1176301950 (NetClient_t1212131464 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetClient_get_ServerConnection_m1176301950_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	NetConnection_t3331492029 * V_0 = NULL;
	NetConnection_t3331492029 * V_1 = NULL;
	bool V_2 = false;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (NetConnection_t3331492029 *)NULL;
		List_1_t2700613161 * L_0 = ((NetPeer_t1779390221 *)__this)->get_m_connections_3();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m1394854046(L_0, /*hidden argument*/List_1_get_Count_m1394854046_MethodInfo_var);
		V_2 = (bool)((((int32_t)((((int32_t)L_1) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		List_1_t2700613161 * L_3 = ((NetPeer_t1779390221 *)__this)->get_m_connections_3();
		NullCheck(L_3);
		NetConnection_t3331492029 * L_4 = List_1_get_Item_m1684201913(L_3, 0, /*hidden argument*/List_1_get_Item_m1684201913_MethodInfo_var);
		V_0 = L_4;
		goto IL_0030;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t1927440687 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Il2CppObject_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_002a;
		throw e;
	}

CATCH_002a:
	{ // begin catch(System.Object)
		V_1 = (NetConnection_t3331492029 *)NULL;
		goto IL_0036;
	} // end catch (depth: 1)

IL_0030:
	{
	}

IL_0032:
	{
		NetConnection_t3331492029 * L_5 = V_0;
		V_1 = L_5;
		goto IL_0036;
	}

IL_0036:
	{
		NetConnection_t3331492029 * L_6 = V_1;
		return L_6;
	}
}
// System.Void Lidgren.Network.NetClient::.ctor(Lidgren.Network.NetPeerConfiguration)
extern "C"  void NetClient__ctor_m488755095 (NetClient_t1212131464 * __this, NetPeerConfiguration_t136603591 * ___config0, const MethodInfo* method)
{
	{
		NetPeerConfiguration_t136603591 * L_0 = ___config0;
		NetPeer__ctor_m1244084668(__this, L_0, /*hidden argument*/NULL);
		NetPeerConfiguration_t136603591 * L_1 = ___config0;
		NullCheck(L_1);
		NetPeerConfiguration_set_AcceptIncomingConnections_m1397507705(L_1, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// Lidgren.Network.NetConnection Lidgren.Network.NetClient::Connect(System.Net.IPEndPoint,Lidgren.Network.NetOutgoingMessage)
extern const MethodInfo* List_1_get_Count_m1394854046_MethodInfo_var;
extern const MethodInfo* Dictionary_2_get_Count_m3270350375_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral3227040912;
extern Il2CppCodeGenString* _stringLiteral2586083448;
extern const uint32_t NetClient_Connect_m901032661_MetadataUsageId;
extern "C"  NetConnection_t3331492029 * NetClient_Connect_m901032661 (NetClient_t1212131464 * __this, IPEndPoint_t2615413766 * ___remoteEndPoint0, NetOutgoingMessage_t2016542980 * ___hailMessage1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetClient_Connect_m901032661_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	NetConnection_t3331492029 * V_0 = NULL;
	List_1_t2700613161 * V_1 = NULL;
	bool V_2 = false;
	Dictionary_2_t3898409514 * V_3 = NULL;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t2700613161 * L_0 = ((NetPeer_t1779390221 *)__this)->get_m_connections_3();
		List_1_t2700613161 * L_1 = L_0;
		V_1 = L_1;
		Monitor_Enter_m2136705809(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			List_1_t2700613161 * L_2 = ((NetPeer_t1779390221 *)__this)->get_m_connections_3();
			NullCheck(L_2);
			int32_t L_3 = List_1_get_Count_m1394854046(L_2, /*hidden argument*/List_1_get_Count_m1394854046_MethodInfo_var);
			V_2 = (bool)((((int32_t)((((int32_t)L_3) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_4 = V_2;
			if (L_4)
			{
				goto IL_0036;
			}
		}

IL_0025:
		{
			NetPeer_LogWarning_m3266657906(__this, _stringLiteral3227040912, /*hidden argument*/NULL);
			V_0 = (NetConnection_t3331492029 *)NULL;
			IL2CPP_LEAVE(0x8E, FINALLY_0039);
		}

IL_0036:
		{
			IL2CPP_LEAVE(0x41, FINALLY_0039);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_0039;
	}

FINALLY_0039:
	{ // begin finally (depth: 1)
		List_1_t2700613161 * L_5 = V_1;
		Monitor_Exit_m2677760297(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(57)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(57)
	{
		IL2CPP_JUMP_TBL(0x8E, IL_008e)
		IL2CPP_JUMP_TBL(0x41, IL_0041)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_0041:
	{
		Dictionary_2_t3898409514 * L_6 = ((NetPeer_t1779390221 *)__this)->get_m_handshakes_24();
		Dictionary_2_t3898409514 * L_7 = L_6;
		V_3 = L_7;
		Monitor_Enter_m2136705809(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_0050:
	try
	{ // begin try (depth: 1)
		{
			Dictionary_2_t3898409514 * L_8 = ((NetPeer_t1779390221 *)__this)->get_m_handshakes_24();
			NullCheck(L_8);
			int32_t L_9 = Dictionary_2_get_Count_m3270350375(L_8, /*hidden argument*/Dictionary_2_get_Count_m3270350375_MethodInfo_var);
			V_2 = (bool)((((int32_t)((((int32_t)L_9) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_10 = V_2;
			if (L_10)
			{
				goto IL_0077;
			}
		}

IL_0066:
		{
			NetPeer_LogWarning_m3266657906(__this, _stringLiteral2586083448, /*hidden argument*/NULL);
			V_0 = (NetConnection_t3331492029 *)NULL;
			IL2CPP_LEAVE(0x8E, FINALLY_007a);
		}

IL_0077:
		{
			IL2CPP_LEAVE(0x82, FINALLY_007a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_007a;
	}

FINALLY_007a:
	{ // begin finally (depth: 1)
		Dictionary_2_t3898409514 * L_11 = V_3;
		Monitor_Exit_m2677760297(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(122)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(122)
	{
		IL2CPP_JUMP_TBL(0x8E, IL_008e)
		IL2CPP_JUMP_TBL(0x82, IL_0082)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_0082:
	{
		IPEndPoint_t2615413766 * L_12 = ___remoteEndPoint0;
		NetOutgoingMessage_t2016542980 * L_13 = ___hailMessage1;
		NetConnection_t3331492029 * L_14 = NetPeer_Connect_m539482134(__this, L_12, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		goto IL_008e;
	}

IL_008e:
	{
		NetConnection_t3331492029 * L_15 = V_0;
		return L_15;
	}
}
// Lidgren.Network.NetSendResult Lidgren.Network.NetClient::SendMessage(Lidgren.Network.NetOutgoingMessage,Lidgren.Network.NetDeliveryMethod)
extern Il2CppCodeGenString* _stringLiteral2575739905;
extern const uint32_t NetClient_SendMessage_m1500161650_MetadataUsageId;
extern "C"  int32_t NetClient_SendMessage_m1500161650 (NetClient_t1212131464 * __this, NetOutgoingMessage_t2016542980 * ___msg0, uint8_t ___method1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetClient_SendMessage_m1500161650_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	NetConnection_t3331492029 * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		NetConnection_t3331492029 * L_0 = NetClient_get_ServerConnection_m1176301950(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		NetConnection_t3331492029 * L_1 = V_0;
		V_2 = (bool)((((int32_t)((((Il2CppObject*)(NetConnection_t3331492029 *)L_1) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		NetPeer_LogWarning_m3266657906(__this, _stringLiteral2575739905, /*hidden argument*/NULL);
		V_1 = 0;
		goto IL_0030;
	}

IL_0024:
	{
		NetConnection_t3331492029 * L_3 = V_0;
		NetOutgoingMessage_t2016542980 * L_4 = ___msg0;
		uint8_t L_5 = ___method1;
		NullCheck(L_3);
		int32_t L_6 = NetConnection_SendMessage_m179193270(L_3, L_4, L_5, 0, /*hidden argument*/NULL);
		V_1 = L_6;
		goto IL_0030;
	}

IL_0030:
	{
		int32_t L_7 = V_1;
		return L_7;
	}
}
// System.String Lidgren.Network.NetClient::ToString()
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral388383977;
extern Il2CppCodeGenString* _stringLiteral372029425;
extern const uint32_t NetClient_ToString_m3242266770_MetadataUsageId;
extern "C"  String_t* NetClient_ToString_m3242266770 (NetClient_t1212131464 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetClient_ToString_m3242266770_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = NULL;
	{
		NetConnection_t3331492029 * L_0 = NetClient_get_ServerConnection_m1176301950(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m2000667605(NULL /*static, unused*/, _stringLiteral388383977, L_0, _stringLiteral372029425, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0019;
	}

IL_0019:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// Lidgren.Network.NetPeer Lidgren.Network.NetConnection::get_Peer()
extern "C"  NetPeer_t1779390221 * NetConnection_get_Peer_m784846870 (NetConnection_t3331492029 * __this, const MethodInfo* method)
{
	NetPeer_t1779390221 * V_0 = NULL;
	{
		NetPeer_t1779390221 * L_0 = __this->get_m_peer_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		NetPeer_t1779390221 * L_1 = V_0;
		return L_1;
	}
}
// Lidgren.Network.NetConnectionStatus Lidgren.Network.NetConnection::get_Status()
extern "C"  int32_t NetConnection_get_Status_m2998852826 (NetConnection_t3331492029 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_visibleStatus_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Net.IPEndPoint Lidgren.Network.NetConnection::get_RemoteEndPoint()
extern "C"  IPEndPoint_t2615413766 * NetConnection_get_RemoteEndPoint_m1562753089 (NetConnection_t3331492029 * __this, const MethodInfo* method)
{
	IPEndPoint_t2615413766 * V_0 = NULL;
	{
		IPEndPoint_t2615413766 * L_0 = __this->get_m_remoteEndPoint_5();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		IPEndPoint_t2615413766 * L_1 = V_0;
		return L_1;
	}
}
// System.Double Lidgren.Network.NetConnection::GetResendDelay()
extern "C"  double NetConnection_GetResendDelay_m601539877 (NetConnection_t3331492029 * __this, const MethodInfo* method)
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	bool V_2 = false;
	{
		double L_0 = __this->get_m_averageRoundtripTime_25();
		V_0 = L_0;
		double L_1 = V_0;
		V_2 = (bool)((!(((double)L_1) <= ((double)(0.0))))? 1 : 0);
		bool L_2 = V_2;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		V_0 = (0.1);
	}

IL_0022:
	{
		double L_3 = V_0;
		V_1 = ((double)((double)(0.025)+(double)((double)((double)L_3*(double)(2.1)))));
		goto IL_003a;
	}

IL_003a:
	{
		double L_4 = V_1;
		return L_4;
	}
}
// System.Void Lidgren.Network.NetConnection::.ctor(Lidgren.Network.NetPeer,System.Net.IPEndPoint)
extern Il2CppClass* NetSenderChannelBaseU5BU5D_t470374901_il2cpp_TypeInfo_var;
extern Il2CppClass* NetReceiverChannelBaseU5BU5D_t1250440839_il2cpp_TypeInfo_var;
extern Il2CppClass* NetQueue_1_t1156019562_il2cpp_TypeInfo_var;
extern Il2CppClass* NetConnectionStatistics_t1235765202_il2cpp_TypeInfo_var;
extern const MethodInfo* NetQueue_1__ctor_m2256563907_MethodInfo_var;
extern const uint32_t NetConnection__ctor_m695103806_MetadataUsageId;
extern "C"  void NetConnection__ctor_m695103806 (NetConnection_t3331492029 * __this, NetPeer_t1779390221 * ___peer0, IPEndPoint_t2615413766 * ___remoteEndPoint1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetConnection__ctor_m695103806_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->set_m_timeoutDeadline_26((1.7976931348623157E+308));
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		NetPeer_t1779390221 * L_0 = ___peer0;
		__this->set_m_peer_0(L_0);
		NetPeer_t1779390221 * L_1 = __this->get_m_peer_0();
		NullCheck(L_1);
		NetPeerConfiguration_t136603591 * L_2 = NetPeer_get_Configuration_m323836264(L_1, /*hidden argument*/NULL);
		__this->set_m_peerConfiguration_1(L_2);
		__this->set_m_status_2(0);
		__this->set_m_outputtedStatus_3(0);
		__this->set_m_visibleStatus_4(0);
		IPEndPoint_t2615413766 * L_3 = ___remoteEndPoint1;
		__this->set_m_remoteEndPoint_5(L_3);
		__this->set_m_sendChannels_6(((NetSenderChannelBaseU5BU5D_t470374901*)SZArrayNew(NetSenderChannelBaseU5BU5D_t470374901_il2cpp_TypeInfo_var, (uint32_t)((int32_t)99))));
		__this->set_m_receiveChannels_7(((NetReceiverChannelBaseU5BU5D_t1250440839*)SZArrayNew(NetReceiverChannelBaseU5BU5D_t1250440839_il2cpp_TypeInfo_var, (uint32_t)((int32_t)99))));
		NetQueue_1_t1156019562 * L_4 = (NetQueue_1_t1156019562 *)il2cpp_codegen_object_new(NetQueue_1_t1156019562_il2cpp_TypeInfo_var);
		NetQueue_1__ctor_m2256563907(L_4, 4, /*hidden argument*/NetQueue_1__ctor_m2256563907_MethodInfo_var);
		__this->set_m_queuedOutgoingAcks_10(L_4);
		NetQueue_1_t1156019562 * L_5 = (NetQueue_1_t1156019562 *)il2cpp_codegen_object_new(NetQueue_1_t1156019562_il2cpp_TypeInfo_var);
		NetQueue_1__ctor_m2256563907(L_5, 4, /*hidden argument*/NetQueue_1__ctor_m2256563907_MethodInfo_var);
		__this->set_m_queuedIncomingAcks_11(L_5);
		NetConnectionStatistics_t1235765202 * L_6 = (NetConnectionStatistics_t1235765202 *)il2cpp_codegen_object_new(NetConnectionStatistics_t1235765202_il2cpp_TypeInfo_var);
		NetConnectionStatistics__ctor_m2288023573(L_6, __this, /*hidden argument*/NULL);
		__this->set_m_statistics_14(L_6);
		__this->set_m_averageRoundtripTime_25((-1.0));
		NetPeerConfiguration_t136603591 * L_7 = __this->get_m_peerConfiguration_1();
		NullCheck(L_7);
		int32_t L_8 = NetPeerConfiguration_get_MaximumTransmissionUnit_m2375210687(L_7, /*hidden argument*/NULL);
		__this->set_m_currentMTU_34(L_8);
		return;
	}
}
// System.Void Lidgren.Network.NetConnection::MutateEndPoint(System.Net.IPEndPoint)
extern "C"  void NetConnection_MutateEndPoint_m3264432459 (NetConnection_t3331492029 * __this, IPEndPoint_t2615413766 * ___endPoint0, const MethodInfo* method)
{
	{
		IPEndPoint_t2615413766 * L_0 = ___endPoint0;
		__this->set_m_remoteEndPoint_5(L_0);
		return;
	}
}
// System.Void Lidgren.Network.NetConnection::ResetTimeout(System.Double)
extern "C"  void NetConnection_ResetTimeout_m3986183602 (NetConnection_t3331492029 * __this, double ___now0, const MethodInfo* method)
{
	{
		double L_0 = ___now0;
		NetPeerConfiguration_t136603591 * L_1 = __this->get_m_peerConfiguration_1();
		NullCheck(L_1);
		float L_2 = L_1->get_m_connectionTimeout_11();
		__this->set_m_timeoutDeadline_26(((double)((double)L_0+(double)(((double)((double)L_2))))));
		return;
	}
}
// System.Void Lidgren.Network.NetConnection::SetStatus(Lidgren.Network.NetConnectionStatus,System.String)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* NetTime_t3056501352_il2cpp_TypeInfo_var;
extern Il2CppClass* Double_t4078015681_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2812317870;
extern const uint32_t NetConnection_SetStatus_m2040093136_MetadataUsageId;
extern "C"  void NetConnection_SetStatus_m2040093136 (NetConnection_t3331492029 * __this, int32_t ___status0, String_t* ___reason1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetConnection_SetStatus_m2040093136_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	NetIncomingMessage_t2014089816 * V_0 = NULL;
	bool V_1 = false;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	NetPeer_t1779390221 * G_B8_2 = NULL;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	NetPeer_t1779390221 * G_B7_2 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	int32_t G_B9_2 = 0;
	NetPeer_t1779390221 * G_B9_3 = NULL;
	{
		int32_t L_0 = ___status0;
		__this->set_m_status_2(L_0);
		String_t* L_1 = ___reason1;
		V_1 = (bool)((((int32_t)((((Il2CppObject*)(String_t*)L_1) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		___reason1 = L_3;
	}

IL_001a:
	{
		int32_t L_4 = __this->get_m_status_2();
		V_1 = (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (L_5)
		{
			goto IL_0065;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetTime_t3056501352_il2cpp_TypeInfo_var);
		double L_6 = NetTime_get_Now_m1609702533(NULL /*static, unused*/, /*hidden argument*/NULL);
		NetPeerConfiguration_t136603591 * L_7 = __this->get_m_peerConfiguration_1();
		NullCheck(L_7);
		float L_8 = L_7->get_m_connectionTimeout_11();
		__this->set_m_timeoutDeadline_26(((double)((double)L_6+(double)(((double)((double)L_8))))));
		NetPeer_t1779390221 * L_9 = __this->get_m_peer_0();
		double L_10 = __this->get_m_timeoutDeadline_26();
		double L_11 = L_10;
		Il2CppObject * L_12 = Box(Double_t4078015681_il2cpp_TypeInfo_var, &L_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral2812317870, L_12, /*hidden argument*/NULL);
		NullCheck(L_9);
		NetPeer_LogVerbose_m3434660420(L_9, L_13, /*hidden argument*/NULL);
	}

IL_0065:
	{
		NetPeerConfiguration_t136603591 * L_14 = __this->get_m_peerConfiguration_1();
		NullCheck(L_14);
		bool L_15 = NetPeerConfiguration_IsMessageTypeEnabled_m1110774391(L_14, 1, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_1;
		if (L_16)
		{
			goto IL_00ed;
		}
	}
	{
		int32_t L_17 = __this->get_m_outputtedStatus_3();
		int32_t L_18 = ___status0;
		V_1 = (bool)((((int32_t)L_17) == ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_1;
		if (L_19)
		{
			goto IL_00ea;
		}
	}
	{
		NetPeer_t1779390221 * L_20 = __this->get_m_peer_0();
		String_t* L_21 = ___reason1;
		NullCheck(L_21);
		int32_t L_22 = String_get_Length_m1606060069(L_21, /*hidden argument*/NULL);
		String_t* L_23 = ___reason1;
		NullCheck(L_23);
		int32_t L_24 = String_get_Length_m1606060069(L_23, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)((int32_t)4+(int32_t)L_22));
		G_B7_1 = 1;
		G_B7_2 = L_20;
		if ((((int32_t)L_24) > ((int32_t)((int32_t)126))))
		{
			G_B8_0 = ((int32_t)((int32_t)4+(int32_t)L_22));
			G_B8_1 = 1;
			G_B8_2 = L_20;
			goto IL_00a3;
		}
	}
	{
		G_B9_0 = 1;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		G_B9_3 = G_B7_2;
		goto IL_00a4;
	}

IL_00a3:
	{
		G_B9_0 = 2;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
	}

IL_00a4:
	{
		NullCheck(G_B9_3);
		NetIncomingMessage_t2014089816 * L_25 = NetPeer_CreateIncomingMessage_m2109562735(G_B9_3, G_B9_2, ((int32_t)((int32_t)G_B9_1+(int32_t)G_B9_0)), /*hidden argument*/NULL);
		V_0 = L_25;
		NetIncomingMessage_t2014089816 * L_26 = V_0;
		NullCheck(L_26);
		L_26->set_m_senderConnection_7(__this);
		NetIncomingMessage_t2014089816 * L_27 = V_0;
		IPEndPoint_t2615413766 * L_28 = __this->get_m_remoteEndPoint_5();
		NullCheck(L_27);
		L_27->set_m_senderEndPoint_6(L_28);
		NetIncomingMessage_t2014089816 * L_29 = V_0;
		int32_t L_30 = __this->get_m_status_2();
		NullCheck(L_29);
		NetBuffer_Write_m4142810212(L_29, (((int32_t)((uint8_t)L_30))), /*hidden argument*/NULL);
		NetIncomingMessage_t2014089816 * L_31 = V_0;
		String_t* L_32 = ___reason1;
		NullCheck(L_31);
		NetBuffer_Write_m962556565(L_31, L_32, /*hidden argument*/NULL);
		NetPeer_t1779390221 * L_33 = __this->get_m_peer_0();
		NetIncomingMessage_t2014089816 * L_34 = V_0;
		NullCheck(L_33);
		NetPeer_ReleaseMessage_m3520648965(L_33, L_34, /*hidden argument*/NULL);
		int32_t L_35 = ___status0;
		__this->set_m_outputtedStatus_3(L_35);
	}

IL_00ea:
	{
		goto IL_0107;
	}

IL_00ed:
	{
		int32_t L_36 = __this->get_m_status_2();
		__this->set_m_outputtedStatus_3(L_36);
		int32_t L_37 = __this->get_m_status_2();
		__this->set_m_visibleStatus_4(L_37);
	}

IL_0107:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetConnection::Heartbeat(System.Double,System.UInt32)
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern Il2CppClass* Double_t4078015681_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* NetQueue_1_get_Count_m440124770_MethodInfo_var;
extern const MethodInfo* NetQueue_1_TryDequeue_m2063198819_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2542256798;
extern Il2CppCodeGenString* _stringLiteral1690320731;
extern Il2CppCodeGenString* _stringLiteral3785970509;
extern const uint32_t NetConnection_Heartbeat_m3721342474_MetadataUsageId;
extern "C"  void NetConnection_Heartbeat_m3721342474 (NetConnection_t3331492029 * __this, double ___now0, uint32_t ___frameCounter1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetConnection_Heartbeat_m3721342474_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	ByteU5BU5D_t3397334013* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	NetTuple_2_t3234296172  V_6;
	memset(&V_6, 0, sizeof(V_6));
	NetTuple_2_t3234296172  V_7;
	memset(&V_7, 0, sizeof(V_7));
	NetSenderChannelBase_t3096690204 * V_8 = NULL;
	NetSenderChannelBase_t3096690204 * V_9 = NULL;
	bool V_10 = false;
	ObjectU5BU5D_t3614634134* V_11 = NULL;
	int32_t V_12 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B38_0 = 0;
	int32_t G_B45_0 = 0;
	int32_t G_B52_0 = 0;
	{
		NetPeer_t1779390221 * L_0 = __this->get_m_peer_0();
		NullCheck(L_0);
		NetPeer_VerifyNetworkThread_m4075953563(L_0, /*hidden argument*/NULL);
		int32_t L_1 = __this->get_m_status_2();
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = __this->get_m_status_2();
		G_B3_0 = ((((int32_t)((((int32_t)L_2) == ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 0;
	}

IL_0025:
	{
		NetException_Assert_m1426298558(NULL /*static, unused*/, (bool)G_B3_0, /*hidden argument*/NULL);
		uint32_t L_3 = ___frameCounter1;
		V_10 = (bool)((((int32_t)((((int32_t)((int32_t)((uint32_t)(int32_t)L_3%(uint32_t)(int32_t)8))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_10;
		if (L_4)
		{
			goto IL_011a;
		}
	}
	{
		double L_5 = ___now0;
		double L_6 = __this->get_m_timeoutDeadline_26();
		V_10 = (bool)((((int32_t)((((double)L_5) > ((double)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_10;
		if (L_7)
		{
			goto IL_00aa;
		}
	}
	{
		NetPeer_t1779390221 * L_8 = __this->get_m_peer_0();
		V_11 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)4));
		ObjectU5BU5D_t3614634134* L_9 = V_11;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 0);
		ArrayElementTypeCheck (L_9, _stringLiteral2542256798);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral2542256798);
		ObjectU5BU5D_t3614634134* L_10 = V_11;
		double L_11 = ___now0;
		double L_12 = L_11;
		Il2CppObject * L_13 = Box(Double_t4078015681_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 1);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_13);
		ObjectU5BU5D_t3614634134* L_14 = V_11;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 2);
		ArrayElementTypeCheck (L_14, _stringLiteral1690320731);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral1690320731);
		ObjectU5BU5D_t3614634134* L_15 = V_11;
		double L_16 = __this->get_m_timeoutDeadline_26();
		double L_17 = L_16;
		Il2CppObject * L_18 = Box(Double_t4078015681_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 3);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_18);
		ObjectU5BU5D_t3614634134* L_19 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_20 = String_Concat_m3881798623(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		NullCheck(L_8);
		NetPeer_LogVerbose_m3434660420(L_8, L_20, /*hidden argument*/NULL);
		NetConnection_ExecuteDisconnect_m666203348(__this, _stringLiteral3785970509, (bool)1, /*hidden argument*/NULL);
		goto IL_049a;
	}

IL_00aa:
	{
		int32_t L_21 = __this->get_m_status_2();
		V_10 = (bool)((((int32_t)((((int32_t)L_21) == ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_10;
		if (L_22)
		{
			goto IL_00f1;
		}
	}
	{
		double L_23 = ___now0;
		double L_24 = __this->get_m_sentPingTime_23();
		NetPeer_t1779390221 * L_25 = __this->get_m_peer_0();
		NullCheck(L_25);
		NetPeerConfiguration_t136603591 * L_26 = L_25->get_m_configuration_21();
		NullCheck(L_26);
		float L_27 = L_26->get_m_pingInterval_8();
		V_10 = (bool)((((int32_t)((((double)L_23) > ((double)((double)((double)L_24+(double)(((double)((double)L_27)))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_10;
		if (L_28)
		{
			goto IL_00e8;
		}
	}
	{
		NetConnection_SendPing_m2389823252(__this, /*hidden argument*/NULL);
	}

IL_00e8:
	{
		double L_29 = ___now0;
		NetConnection_MTUExpansionHeartbeat_m2691120475(__this, L_29, /*hidden argument*/NULL);
	}

IL_00f1:
	{
		bool L_30 = __this->get_m_disconnectRequested_16();
		V_10 = (bool)((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_10;
		if (L_31)
		{
			goto IL_0119;
		}
	}
	{
		String_t* L_32 = __this->get_m_disconnectMessage_18();
		bool L_33 = __this->get_m_disconnectReqSendBye_17();
		NetConnection_ExecuteDisconnect_m666203348(__this, L_32, L_33, /*hidden argument*/NULL);
		goto IL_049a;
	}

IL_0119:
	{
	}

IL_011a:
	{
		NetPeer_t1779390221 * L_34 = __this->get_m_peer_0();
		NullCheck(L_34);
		ByteU5BU5D_t3397334013* L_35 = L_34->get_m_sendBuffer_11();
		V_1 = L_35;
		int32_t L_36 = __this->get_m_currentMTU_34();
		V_2 = L_36;
		uint32_t L_37 = ___frameCounter1;
		V_10 = (bool)((((int32_t)((((int32_t)((int32_t)((uint32_t)(int32_t)L_37%(uint32_t)(int32_t)3))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_38 = V_10;
		if (L_38)
		{
			goto IL_0363;
		}
	}
	{
		goto IL_0302;
	}

IL_0145:
	{
		int32_t L_39 = V_2;
		int32_t L_40 = __this->get_m_sendBufferWritePtr_12();
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)L_39-(int32_t)((int32_t)((int32_t)L_40+(int32_t)5))))/(int32_t)3));
		int32_t L_41 = V_3;
		NetQueue_1_t1156019562 * L_42 = __this->get_m_queuedOutgoingAcks_10();
		NullCheck(L_42);
		int32_t L_43 = NetQueue_1_get_Count_m440124770(L_42, /*hidden argument*/NetQueue_1_get_Count_m440124770_MethodInfo_var);
		V_10 = (bool)((((int32_t)((((int32_t)L_41) > ((int32_t)L_43))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_44 = V_10;
		if (L_44)
		{
			goto IL_0176;
		}
	}
	{
		NetQueue_1_t1156019562 * L_45 = __this->get_m_queuedOutgoingAcks_10();
		NullCheck(L_45);
		int32_t L_46 = NetQueue_1_get_Count_m440124770(L_45, /*hidden argument*/NetQueue_1_get_Count_m440124770_MethodInfo_var);
		V_3 = L_46;
	}

IL_0176:
	{
		int32_t L_47 = V_3;
		NetException_Assert_m1426298558(NULL /*static, unused*/, (bool)((((int32_t)L_47) > ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		int32_t L_48 = __this->get_m_sendBufferNumMessages_13();
		__this->set_m_sendBufferNumMessages_13(((int32_t)((int32_t)L_48+(int32_t)1)));
		ByteU5BU5D_t3397334013* L_49 = V_1;
		int32_t L_50 = __this->get_m_sendBufferWritePtr_12();
		int32_t L_51 = L_50;
		V_12 = L_51;
		__this->set_m_sendBufferWritePtr_12(((int32_t)((int32_t)L_51+(int32_t)1)));
		int32_t L_52 = V_12;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_52);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(L_52), (uint8_t)((int32_t)134));
		ByteU5BU5D_t3397334013* L_53 = V_1;
		int32_t L_54 = __this->get_m_sendBufferWritePtr_12();
		int32_t L_55 = L_54;
		V_12 = L_55;
		__this->set_m_sendBufferWritePtr_12(((int32_t)((int32_t)L_55+(int32_t)1)));
		int32_t L_56 = V_12;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, L_56);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(L_56), (uint8_t)0);
		ByteU5BU5D_t3397334013* L_57 = V_1;
		int32_t L_58 = __this->get_m_sendBufferWritePtr_12();
		int32_t L_59 = L_58;
		V_12 = L_59;
		__this->set_m_sendBufferWritePtr_12(((int32_t)((int32_t)L_59+(int32_t)1)));
		int32_t L_60 = V_12;
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, L_60);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_60), (uint8_t)0);
		int32_t L_61 = V_3;
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)L_61*(int32_t)3))*(int32_t)8));
		ByteU5BU5D_t3397334013* L_62 = V_1;
		int32_t L_63 = __this->get_m_sendBufferWritePtr_12();
		int32_t L_64 = L_63;
		V_12 = L_64;
		__this->set_m_sendBufferWritePtr_12(((int32_t)((int32_t)L_64+(int32_t)1)));
		int32_t L_65 = V_12;
		int32_t L_66 = V_4;
		NullCheck(L_62);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_62, L_65);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(L_65), (uint8_t)(((int32_t)((uint8_t)L_66))));
		ByteU5BU5D_t3397334013* L_67 = V_1;
		int32_t L_68 = __this->get_m_sendBufferWritePtr_12();
		int32_t L_69 = L_68;
		V_12 = L_69;
		__this->set_m_sendBufferWritePtr_12(((int32_t)((int32_t)L_69+(int32_t)1)));
		int32_t L_70 = V_12;
		int32_t L_71 = V_4;
		NullCheck(L_67);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_67, L_70);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(L_70), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_71>>(int32_t)8))))));
		V_5 = 0;
		goto IL_0280;
	}

IL_0212:
	{
		NetQueue_1_t1156019562 * L_72 = __this->get_m_queuedOutgoingAcks_10();
		NullCheck(L_72);
		NetQueue_1_TryDequeue_m2063198819(L_72, (&V_6), /*hidden argument*/NetQueue_1_TryDequeue_m2063198819_MethodInfo_var);
		ByteU5BU5D_t3397334013* L_73 = V_1;
		int32_t L_74 = __this->get_m_sendBufferWritePtr_12();
		int32_t L_75 = L_74;
		V_12 = L_75;
		__this->set_m_sendBufferWritePtr_12(((int32_t)((int32_t)L_75+(int32_t)1)));
		int32_t L_76 = V_12;
		uint8_t L_77 = (&V_6)->get_Item1_0();
		NullCheck(L_73);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_73, L_76);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(L_76), (uint8_t)L_77);
		ByteU5BU5D_t3397334013* L_78 = V_1;
		int32_t L_79 = __this->get_m_sendBufferWritePtr_12();
		int32_t L_80 = L_79;
		V_12 = L_80;
		__this->set_m_sendBufferWritePtr_12(((int32_t)((int32_t)L_80+(int32_t)1)));
		int32_t L_81 = V_12;
		int32_t L_82 = (&V_6)->get_Item2_1();
		NullCheck(L_78);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_78, L_81);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(L_81), (uint8_t)(((int32_t)((uint8_t)L_82))));
		ByteU5BU5D_t3397334013* L_83 = V_1;
		int32_t L_84 = __this->get_m_sendBufferWritePtr_12();
		int32_t L_85 = L_84;
		V_12 = L_85;
		__this->set_m_sendBufferWritePtr_12(((int32_t)((int32_t)L_85+(int32_t)1)));
		int32_t L_86 = V_12;
		int32_t L_87 = (&V_6)->get_Item2_1();
		NullCheck(L_83);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_83, L_86);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(L_86), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_87>>(int32_t)8))))));
		int32_t L_88 = V_5;
		V_5 = ((int32_t)((int32_t)L_88+(int32_t)1));
	}

IL_0280:
	{
		int32_t L_89 = V_5;
		int32_t L_90 = V_3;
		V_10 = (bool)((((int32_t)L_89) < ((int32_t)L_90))? 1 : 0);
		bool L_91 = V_10;
		if (L_91)
		{
			goto IL_0212;
		}
	}
	{
		NetQueue_1_t1156019562 * L_92 = __this->get_m_queuedOutgoingAcks_10();
		NullCheck(L_92);
		int32_t L_93 = NetQueue_1_get_Count_m440124770(L_92, /*hidden argument*/NetQueue_1_get_Count_m440124770_MethodInfo_var);
		V_10 = (bool)((((int32_t)((((int32_t)L_93) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_94 = V_10;
		if (L_94)
		{
			goto IL_0301;
		}
	}
	{
		int32_t L_95 = __this->get_m_sendBufferWritePtr_12();
		if ((((int32_t)L_95) <= ((int32_t)0)))
		{
			goto IL_02b7;
		}
	}
	{
		int32_t L_96 = __this->get_m_sendBufferNumMessages_13();
		G_B24_0 = ((((int32_t)L_96) > ((int32_t)0))? 1 : 0);
		goto IL_02b8;
	}

IL_02b7:
	{
		G_B24_0 = 0;
	}

IL_02b8:
	{
		NetException_Assert_m1426298558(NULL /*static, unused*/, (bool)G_B24_0, /*hidden argument*/NULL);
		NetPeer_t1779390221 * L_97 = __this->get_m_peer_0();
		int32_t L_98 = __this->get_m_sendBufferWritePtr_12();
		IPEndPoint_t2615413766 * L_99 = __this->get_m_remoteEndPoint_5();
		int32_t L_100 = __this->get_m_sendBufferNumMessages_13();
		NullCheck(L_97);
		NetPeer_SendPacket_m625616909(L_97, L_98, L_99, L_100, (&V_0), /*hidden argument*/NULL);
		NetConnectionStatistics_t1235765202 * L_101 = __this->get_m_statistics_14();
		int32_t L_102 = __this->get_m_sendBufferWritePtr_12();
		NullCheck(L_101);
		NetConnectionStatistics_PacketSent_m833909693(L_101, L_102, 1, /*hidden argument*/NULL);
		__this->set_m_sendBufferWritePtr_12(0);
		__this->set_m_sendBufferNumMessages_13(0);
	}

IL_0301:
	{
	}

IL_0302:
	{
		NetQueue_1_t1156019562 * L_103 = __this->get_m_queuedOutgoingAcks_10();
		NullCheck(L_103);
		int32_t L_104 = NetQueue_1_get_Count_m440124770(L_103, /*hidden argument*/NetQueue_1_get_Count_m440124770_MethodInfo_var);
		V_10 = (bool)((((int32_t)L_104) > ((int32_t)0))? 1 : 0);
		bool L_105 = V_10;
		if (L_105)
		{
			goto IL_0145;
		}
	}
	{
		goto IL_034f;
	}

IL_031b:
	{
		NetSenderChannelBaseU5BU5D_t470374901* L_106 = __this->get_m_sendChannels_6();
		uint8_t L_107 = (&V_7)->get_Item1_0();
		NullCheck(L_106);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_106, ((int32_t)((int32_t)L_107-(int32_t)1)));
		int32_t L_108 = ((int32_t)((int32_t)L_107-(int32_t)1));
		NetSenderChannelBase_t3096690204 * L_109 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		V_8 = L_109;
		NetSenderChannelBase_t3096690204 * L_110 = V_8;
		V_10 = (bool)((((int32_t)((((Il2CppObject*)(NetSenderChannelBase_t3096690204 *)L_110) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_111 = V_10;
		if (L_111)
		{
			goto IL_033e;
		}
	}
	{
		goto IL_034f;
	}

IL_033e:
	{
		NetSenderChannelBase_t3096690204 * L_112 = V_8;
		double L_113 = ___now0;
		int32_t L_114 = (&V_7)->get_Item2_1();
		NullCheck(L_112);
		VirtActionInvoker2< double, int32_t >::Invoke(9 /* System.Void Lidgren.Network.NetSenderChannelBase::ReceiveAcknowledge(System.Double,System.Int32) */, L_112, L_113, L_114);
	}

IL_034f:
	{
		NetQueue_1_t1156019562 * L_115 = __this->get_m_queuedIncomingAcks_11();
		NullCheck(L_115);
		bool L_116 = NetQueue_1_TryDequeue_m2063198819(L_115, (&V_7), /*hidden argument*/NetQueue_1_TryDequeue_m2063198819_MethodInfo_var);
		V_10 = L_116;
		bool L_117 = V_10;
		if (L_117)
		{
			goto IL_031b;
		}
	}
	{
	}

IL_0363:
	{
		NetPeer_t1779390221 * L_118 = __this->get_m_peer_0();
		NullCheck(L_118);
		bool L_119 = L_118->get_m_executeFlushSendQueue_27();
		V_10 = (bool)((((int32_t)L_119) == ((int32_t)0))? 1 : 0);
		bool L_120 = V_10;
		if (L_120)
		{
			goto IL_0418;
		}
	}
	{
		NetSenderChannelBaseU5BU5D_t470374901* L_121 = __this->get_m_sendChannels_6();
		NullCheck(L_121);
		V_5 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_121)->max_length))))-(int32_t)1));
		goto IL_0406;
	}

IL_0389:
	{
		NetSenderChannelBaseU5BU5D_t470374901* L_122 = __this->get_m_sendChannels_6();
		int32_t L_123 = V_5;
		NullCheck(L_122);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_122, L_123);
		int32_t L_124 = L_123;
		NetSenderChannelBase_t3096690204 * L_125 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		V_9 = L_125;
		int32_t L_126 = __this->get_m_sendBufferWritePtr_12();
		if ((((int32_t)L_126) < ((int32_t)1)))
		{
			goto IL_03a9;
		}
	}
	{
		int32_t L_127 = __this->get_m_sendBufferNumMessages_13();
		G_B38_0 = ((((int32_t)L_127) > ((int32_t)0))? 1 : 0);
		goto IL_03aa;
	}

IL_03a9:
	{
		G_B38_0 = 1;
	}

IL_03aa:
	{
		NetException_Assert_m1426298558(NULL /*static, unused*/, (bool)G_B38_0, /*hidden argument*/NULL);
		NetSenderChannelBase_t3096690204 * L_128 = V_9;
		V_10 = (bool)((((Il2CppObject*)(NetSenderChannelBase_t3096690204 *)L_128) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
		bool L_129 = V_10;
		if (L_129)
		{
			goto IL_03e3;
		}
	}
	{
		NetSenderChannelBase_t3096690204 * L_130 = V_9;
		double L_131 = ___now0;
		NullCheck(L_130);
		VirtActionInvoker1< double >::Invoke(7 /* System.Void Lidgren.Network.NetSenderChannelBase::SendQueuedMessages(System.Double) */, L_130, L_131);
		NetSenderChannelBase_t3096690204 * L_132 = V_9;
		NullCheck(L_132);
		bool L_133 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean Lidgren.Network.NetSenderChannelBase::NeedToSendMessages() */, L_132);
		V_10 = (bool)((((int32_t)L_133) == ((int32_t)0))? 1 : 0);
		bool L_134 = V_10;
		if (L_134)
		{
			goto IL_03e2;
		}
	}
	{
		NetPeer_t1779390221 * L_135 = __this->get_m_peer_0();
		NullCheck(L_135);
		L_135->set_m_needFlushSendQueue_20((bool)1);
	}

IL_03e2:
	{
	}

IL_03e3:
	{
		int32_t L_136 = __this->get_m_sendBufferWritePtr_12();
		if ((((int32_t)L_136) < ((int32_t)1)))
		{
			goto IL_03f7;
		}
	}
	{
		int32_t L_137 = __this->get_m_sendBufferNumMessages_13();
		G_B45_0 = ((((int32_t)L_137) > ((int32_t)0))? 1 : 0);
		goto IL_03f8;
	}

IL_03f7:
	{
		G_B45_0 = 1;
	}

IL_03f8:
	{
		NetException_Assert_m1426298558(NULL /*static, unused*/, (bool)G_B45_0, /*hidden argument*/NULL);
		int32_t L_138 = V_5;
		V_5 = ((int32_t)((int32_t)L_138-(int32_t)1));
	}

IL_0406:
	{
		int32_t L_139 = V_5;
		V_10 = (bool)((((int32_t)((((int32_t)L_139) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_140 = V_10;
		if (L_140)
		{
			goto IL_0389;
		}
	}
	{
	}

IL_0418:
	{
		int32_t L_141 = __this->get_m_sendBufferWritePtr_12();
		V_10 = (bool)((((int32_t)((((int32_t)L_141) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_142 = V_10;
		if (L_142)
		{
			goto IL_049a;
		}
	}
	{
		NetPeer_t1779390221 * L_143 = __this->get_m_peer_0();
		NullCheck(L_143);
		NetPeer_VerifyNetworkThread_m4075953563(L_143, /*hidden argument*/NULL);
		int32_t L_144 = __this->get_m_sendBufferWritePtr_12();
		if ((((int32_t)L_144) <= ((int32_t)0)))
		{
			goto IL_044b;
		}
	}
	{
		int32_t L_145 = __this->get_m_sendBufferNumMessages_13();
		G_B52_0 = ((((int32_t)L_145) > ((int32_t)0))? 1 : 0);
		goto IL_044c;
	}

IL_044b:
	{
		G_B52_0 = 0;
	}

IL_044c:
	{
		NetException_Assert_m1426298558(NULL /*static, unused*/, (bool)G_B52_0, /*hidden argument*/NULL);
		NetPeer_t1779390221 * L_146 = __this->get_m_peer_0();
		int32_t L_147 = __this->get_m_sendBufferWritePtr_12();
		IPEndPoint_t2615413766 * L_148 = __this->get_m_remoteEndPoint_5();
		int32_t L_149 = __this->get_m_sendBufferNumMessages_13();
		NullCheck(L_146);
		NetPeer_SendPacket_m625616909(L_146, L_147, L_148, L_149, (&V_0), /*hidden argument*/NULL);
		NetConnectionStatistics_t1235765202 * L_150 = __this->get_m_statistics_14();
		int32_t L_151 = __this->get_m_sendBufferWritePtr_12();
		int32_t L_152 = __this->get_m_sendBufferNumMessages_13();
		NullCheck(L_150);
		NetConnectionStatistics_PacketSent_m833909693(L_150, L_151, L_152, /*hidden argument*/NULL);
		__this->set_m_sendBufferWritePtr_12(0);
		__this->set_m_sendBufferNumMessages_13(0);
	}

IL_049a:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetConnection::QueueSendMessage(Lidgren.Network.NetOutgoingMessage,System.Int32)
extern "C"  void NetConnection_QueueSendMessage_m496824802 (NetConnection_t3331492029 * __this, NetOutgoingMessage_t2016542980 * ___om0, int32_t ___seqNr1, const MethodInfo* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B4_0 = 0;
	{
		NetPeer_t1779390221 * L_0 = __this->get_m_peer_0();
		NullCheck(L_0);
		NetPeer_VerifyNetworkThread_m4075953563(L_0, /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_1 = ___om0;
		NullCheck(L_1);
		int32_t L_2 = NetOutgoingMessage_GetEncodedSize_m3842097810(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = __this->get_m_sendBufferWritePtr_12();
		int32_t L_4 = V_0;
		int32_t L_5 = __this->get_m_currentMTU_34();
		V_2 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_3+(int32_t)L_4))) > ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (L_6)
		{
			goto IL_0092;
		}
	}
	{
		int32_t L_7 = __this->get_m_sendBufferWritePtr_12();
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_8 = __this->get_m_sendBufferNumMessages_13();
		G_B4_0 = ((((int32_t)((((int32_t)L_8) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B4_0 = 1;
	}

IL_0044:
	{
		V_2 = (bool)G_B4_0;
		bool L_9 = V_2;
		if (L_9)
		{
			goto IL_0091;
		}
	}
	{
		NetPeer_t1779390221 * L_10 = __this->get_m_peer_0();
		int32_t L_11 = __this->get_m_sendBufferWritePtr_12();
		IPEndPoint_t2615413766 * L_12 = __this->get_m_remoteEndPoint_5();
		int32_t L_13 = __this->get_m_sendBufferNumMessages_13();
		NullCheck(L_10);
		NetPeer_SendPacket_m625616909(L_10, L_11, L_12, L_13, (&V_1), /*hidden argument*/NULL);
		NetConnectionStatistics_t1235765202 * L_14 = __this->get_m_statistics_14();
		int32_t L_15 = __this->get_m_sendBufferWritePtr_12();
		int32_t L_16 = __this->get_m_sendBufferNumMessages_13();
		NullCheck(L_14);
		NetConnectionStatistics_PacketSent_m833909693(L_14, L_15, L_16, /*hidden argument*/NULL);
		__this->set_m_sendBufferWritePtr_12(0);
		__this->set_m_sendBufferNumMessages_13(0);
	}

IL_0091:
	{
	}

IL_0092:
	{
		NetOutgoingMessage_t2016542980 * L_17 = ___om0;
		NetPeer_t1779390221 * L_18 = __this->get_m_peer_0();
		NullCheck(L_18);
		ByteU5BU5D_t3397334013* L_19 = L_18->get_m_sendBuffer_11();
		int32_t L_20 = __this->get_m_sendBufferWritePtr_12();
		int32_t L_21 = ___seqNr1;
		NullCheck(L_17);
		int32_t L_22 = NetOutgoingMessage_Encode_m2473987076(L_17, L_19, L_20, L_21, /*hidden argument*/NULL);
		__this->set_m_sendBufferWritePtr_12(L_22);
		int32_t L_23 = __this->get_m_sendBufferNumMessages_13();
		__this->set_m_sendBufferNumMessages_13(((int32_t)((int32_t)L_23+(int32_t)1)));
		int32_t L_24 = __this->get_m_sendBufferWritePtr_12();
		int32_t L_25 = __this->get_m_currentMTU_34();
		V_2 = (bool)((((int32_t)((((int32_t)L_24) > ((int32_t)L_25))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_26 = V_2;
		if (L_26)
		{
			goto IL_011b;
		}
	}
	{
		NetPeer_t1779390221 * L_27 = __this->get_m_peer_0();
		int32_t L_28 = __this->get_m_sendBufferWritePtr_12();
		IPEndPoint_t2615413766 * L_29 = __this->get_m_remoteEndPoint_5();
		int32_t L_30 = __this->get_m_sendBufferNumMessages_13();
		NullCheck(L_27);
		NetPeer_SendPacket_m625616909(L_27, L_28, L_29, L_30, (&V_1), /*hidden argument*/NULL);
		NetConnectionStatistics_t1235765202 * L_31 = __this->get_m_statistics_14();
		int32_t L_32 = __this->get_m_sendBufferWritePtr_12();
		int32_t L_33 = __this->get_m_sendBufferNumMessages_13();
		NullCheck(L_31);
		NetConnectionStatistics_PacketSent_m833909693(L_31, L_32, L_33, /*hidden argument*/NULL);
		__this->set_m_sendBufferWritePtr_12(0);
		__this->set_m_sendBufferNumMessages_13(0);
	}

IL_011b:
	{
		int32_t L_34 = __this->get_m_sendBufferWritePtr_12();
		V_2 = (bool)((((int32_t)((((int32_t)L_34) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_35 = V_2;
		if (L_35)
		{
			goto IL_0137;
		}
	}
	{
		NetPeer_t1779390221 * L_36 = __this->get_m_peer_0();
		NullCheck(L_36);
		L_36->set_m_needFlushSendQueue_20((bool)1);
	}

IL_0137:
	{
		NetOutgoingMessage_t2016542980 * L_37 = ___om0;
		NullCheck(L_37);
		int32_t* L_38 = L_37->get_address_of_m_recyclingCount_7();
		Interlocked_Decrement_m70525859(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
		return;
	}
}
// Lidgren.Network.NetSendResult Lidgren.Network.NetConnection::SendMessage(Lidgren.Network.NetOutgoingMessage,Lidgren.Network.NetDeliveryMethod,System.Int32)
extern "C"  int32_t NetConnection_SendMessage_m179193270 (NetConnection_t3331492029 * __this, NetOutgoingMessage_t2016542980 * ___msg0, uint8_t ___method1, int32_t ___sequenceChannel2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		NetPeer_t1779390221 * L_0 = __this->get_m_peer_0();
		NetOutgoingMessage_t2016542980 * L_1 = ___msg0;
		uint8_t L_2 = ___method1;
		int32_t L_3 = ___sequenceChannel2;
		NullCheck(L_0);
		int32_t L_4 = NetPeer_SendMessage_m3610804500(L_0, L_1, __this, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0013;
	}

IL_0013:
	{
		int32_t L_5 = V_0;
		return L_5;
	}
}
// Lidgren.Network.NetSendResult Lidgren.Network.NetConnection::EnqueueMessage(Lidgren.Network.NetOutgoingMessage,Lidgren.Network.NetDeliveryMethod,System.Int32)
extern Il2CppCodeGenString* _stringLiteral1457837033;
extern const uint32_t NetConnection_EnqueueMessage_m3897273412_MetadataUsageId;
extern "C"  int32_t NetConnection_EnqueueMessage_m3897273412 (NetConnection_t3331492029 * __this, NetOutgoingMessage_t2016542980 * ___msg0, uint8_t ___method1, int32_t ___sequenceChannel2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetConnection_EnqueueMessage_m3897273412_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	uint8_t V_0 = 0;
	int32_t V_1 = 0;
	NetSenderChannelBase_t3096690204 * V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t G_B8_0 = 0;
	{
		int32_t L_0 = __this->get_m_status_2();
		V_5 = (bool)((((int32_t)L_0) == ((int32_t)5))? 1 : 0);
		bool L_1 = V_5;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_4 = 0;
		goto IL_0086;
	}

IL_0015:
	{
		uint8_t L_2 = ___method1;
		int32_t L_3 = ___sequenceChannel2;
		V_0 = (((int32_t)((uint8_t)((int32_t)((int32_t)L_2+(int32_t)L_3)))));
		NetOutgoingMessage_t2016542980 * L_4 = ___msg0;
		uint8_t L_5 = V_0;
		NullCheck(L_4);
		L_4->set_m_messageType_5(L_5);
		uint8_t L_6 = ___method1;
		int32_t L_7 = ___sequenceChannel2;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))+(int32_t)L_7));
		NetSenderChannelBaseU5BU5D_t470374901* L_8 = __this->get_m_sendChannels_6();
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		NetSenderChannelBase_t3096690204 * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_2 = L_11;
		NetSenderChannelBase_t3096690204 * L_12 = V_2;
		V_5 = (bool)((((int32_t)((((Il2CppObject*)(NetSenderChannelBase_t3096690204 *)L_12) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_5;
		if (L_13)
		{
			goto IL_0045;
		}
	}
	{
		uint8_t L_14 = V_0;
		NetSenderChannelBase_t3096690204 * L_15 = NetConnection_CreateSenderChannel_m4115641717(__this, L_14, /*hidden argument*/NULL);
		V_2 = L_15;
	}

IL_0045:
	{
		uint8_t L_16 = ___method1;
		if ((((int32_t)L_16) == ((int32_t)1)))
		{
			goto IL_0060;
		}
	}
	{
		uint8_t L_17 = ___method1;
		if ((((int32_t)L_17) == ((int32_t)2)))
		{
			goto IL_0060;
		}
	}
	{
		NetOutgoingMessage_t2016542980 * L_18 = ___msg0;
		NullCheck(L_18);
		int32_t L_19 = NetOutgoingMessage_GetEncodedSize_m3842097810(L_18, /*hidden argument*/NULL);
		int32_t L_20 = __this->get_m_currentMTU_34();
		G_B8_0 = ((((int32_t)((((int32_t)L_19) > ((int32_t)L_20))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0061;
	}

IL_0060:
	{
		G_B8_0 = 1;
	}

IL_0061:
	{
		V_5 = (bool)G_B8_0;
		bool L_21 = V_5;
		if (L_21)
		{
			goto IL_0079;
		}
	}
	{
		NetPeer_t1779390221 * L_22 = __this->get_m_peer_0();
		NullCheck(L_22);
		NetPeer_ThrowOrLog_m2301784333(L_22, _stringLiteral1457837033, /*hidden argument*/NULL);
	}

IL_0079:
	{
		NetSenderChannelBase_t3096690204 * L_23 = V_2;
		NetOutgoingMessage_t2016542980 * L_24 = ___msg0;
		NullCheck(L_23);
		int32_t L_25 = VirtFuncInvoker1< int32_t, NetOutgoingMessage_t2016542980 * >::Invoke(6 /* Lidgren.Network.NetSendResult Lidgren.Network.NetSenderChannelBase::Enqueue(Lidgren.Network.NetOutgoingMessage) */, L_23, L_24);
		V_3 = L_25;
		int32_t L_26 = V_3;
		V_4 = L_26;
		goto IL_0086;
	}

IL_0086:
	{
		int32_t L_27 = V_4;
		return L_27;
	}
}
// Lidgren.Network.NetSenderChannelBase Lidgren.Network.NetConnection::CreateSenderChannel(Lidgren.Network.NetMessageType)
extern Il2CppClass* NetUtility_t3562260209_il2cpp_TypeInfo_var;
extern Il2CppClass* NetUnreliableSenderChannel_t1909769502_il2cpp_TypeInfo_var;
extern Il2CppClass* NetReliableSenderChannel_t2899775811_il2cpp_TypeInfo_var;
extern const uint32_t NetConnection_CreateSenderChannel_m4115641717_MetadataUsageId;
extern "C"  NetSenderChannelBase_t3096690204 * NetConnection_CreateSenderChannel_m4115641717 (NetConnection_t3331492029 * __this, uint8_t ___tp0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetConnection_CreateSenderChannel_m4115641717_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	NetSenderChannelBase_t3096690204 * V_0 = NULL;
	uint8_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	NetSenderChannelBase_t3096690204 * V_4 = NULL;
	NetSenderChannelBaseU5BU5D_t470374901* V_5 = NULL;
	bool V_6 = false;
	uint8_t V_7 = 0;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		NetSenderChannelBaseU5BU5D_t470374901* L_0 = __this->get_m_sendChannels_6();
		NetSenderChannelBaseU5BU5D_t470374901* L_1 = L_0;
		V_5 = L_1;
		Monitor_Enter_m2136705809(NULL /*static, unused*/, (Il2CppObject *)(Il2CppObject *)L_1, /*hidden argument*/NULL);
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		{
			uint8_t L_2 = ___tp0;
			IL2CPP_RUNTIME_CLASS_INIT(NetUtility_t3562260209_il2cpp_TypeInfo_var);
			uint8_t L_3 = NetUtility_GetDeliveryMethod_m2383198164(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
			V_1 = L_3;
			uint8_t L_4 = ___tp0;
			uint8_t L_5 = V_1;
			V_2 = ((int32_t)((int32_t)L_4-(int32_t)L_5));
			uint8_t L_6 = V_1;
			int32_t L_7 = V_2;
			V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))+(int32_t)L_7));
			NetSenderChannelBaseU5BU5D_t470374901* L_8 = __this->get_m_sendChannels_6();
			int32_t L_9 = V_3;
			NullCheck(L_8);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
			int32_t L_10 = L_9;
			NetSenderChannelBase_t3096690204 * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
			V_6 = (bool)((((Il2CppObject*)(NetSenderChannelBase_t3096690204 *)L_11) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
			bool L_12 = V_6;
			if (L_12)
			{
				goto IL_0040;
			}
		}

IL_0033:
		{
			NetSenderChannelBaseU5BU5D_t470374901* L_13 = __this->get_m_sendChannels_6();
			int32_t L_14 = V_3;
			NullCheck(L_13);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
			int32_t L_15 = L_14;
			NetSenderChannelBase_t3096690204 * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
			V_0 = L_16;
			goto IL_00a7;
		}

IL_0040:
		{
			uint8_t L_17 = V_1;
			V_7 = L_17;
			uint8_t L_18 = V_7;
			if (((int32_t)((int32_t)L_18-(int32_t)1)) == 0)
			{
				goto IL_006f;
			}
			if (((int32_t)((int32_t)L_18-(int32_t)1)) == 1)
			{
				goto IL_006f;
			}
		}

IL_0055:
		{
			uint8_t L_19 = V_7;
			if (((int32_t)((int32_t)L_19-(int32_t)((int32_t)34))) == 0)
			{
				goto IL_008e;
			}
			if (((int32_t)((int32_t)L_19-(int32_t)((int32_t)34))) == 1)
			{
				goto IL_008e;
			}
		}

IL_0067:
		{
			uint8_t L_20 = V_7;
			if ((((int32_t)L_20) == ((int32_t)((int32_t)67))))
			{
				goto IL_007f;
			}
		}

IL_006d:
		{
			goto IL_008e;
		}

IL_006f:
		{
			uint8_t L_21 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(NetUtility_t3562260209_il2cpp_TypeInfo_var);
			int32_t L_22 = NetUtility_GetWindowSize_m1637041950(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
			uint8_t L_23 = V_1;
			NetUnreliableSenderChannel_t1909769502 * L_24 = (NetUnreliableSenderChannel_t1909769502 *)il2cpp_codegen_object_new(NetUnreliableSenderChannel_t1909769502_il2cpp_TypeInfo_var);
			NetUnreliableSenderChannel__ctor_m2332360361(L_24, __this, L_22, L_23, /*hidden argument*/NULL);
			V_0 = L_24;
			goto IL_009d;
		}

IL_007f:
		{
			uint8_t L_25 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(NetUtility_t3562260209_il2cpp_TypeInfo_var);
			int32_t L_26 = NetUtility_GetWindowSize_m1637041950(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
			NetReliableSenderChannel_t2899775811 * L_27 = (NetReliableSenderChannel_t2899775811 *)il2cpp_codegen_object_new(NetReliableSenderChannel_t2899775811_il2cpp_TypeInfo_var);
			NetReliableSenderChannel__ctor_m2647494615(L_27, __this, L_26, /*hidden argument*/NULL);
			V_0 = L_27;
			goto IL_009d;
		}

IL_008e:
		{
			uint8_t L_28 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(NetUtility_t3562260209_il2cpp_TypeInfo_var);
			int32_t L_29 = NetUtility_GetWindowSize_m1637041950(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
			NetReliableSenderChannel_t2899775811 * L_30 = (NetReliableSenderChannel_t2899775811 *)il2cpp_codegen_object_new(NetReliableSenderChannel_t2899775811_il2cpp_TypeInfo_var);
			NetReliableSenderChannel__ctor_m2647494615(L_30, __this, L_29, /*hidden argument*/NULL);
			V_0 = L_30;
			goto IL_009d;
		}

IL_009d:
		{
			NetSenderChannelBaseU5BU5D_t470374901* L_31 = __this->get_m_sendChannels_6();
			int32_t L_32 = V_3;
			NetSenderChannelBase_t3096690204 * L_33 = V_0;
			NullCheck(L_31);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
			ArrayElementTypeCheck (L_31, L_33);
			(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (NetSenderChannelBase_t3096690204 *)L_33);
		}

IL_00a7:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_00aa);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_00aa;
	}

FINALLY_00aa:
	{ // begin finally (depth: 1)
		NetSenderChannelBaseU5BU5D_t470374901* L_34 = V_5;
		Monitor_Exit_m2677760297(NULL /*static, unused*/, (Il2CppObject *)(Il2CppObject *)L_34, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(170)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(170)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_00b3:
	{
		NetSenderChannelBase_t3096690204 * L_35 = V_0;
		V_4 = L_35;
		goto IL_00b9;
	}

IL_00b9:
	{
		NetSenderChannelBase_t3096690204 * L_36 = V_4;
		return L_36;
	}
}
// System.Void Lidgren.Network.NetConnection::ReceivedLibraryMessage(Lidgren.Network.NetMessageType,System.Int32,System.Int32)
extern Il2CppClass* NetTime_t3056501352_il2cpp_TypeInfo_var;
extern Il2CppClass* NetMessageType_t191235414_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* NetTuple_2__ctor_m2674576177_MethodInfo_var;
extern const MethodInfo* NetQueue_1_Enqueue_m2553464330_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1031971635;
extern Il2CppCodeGenString* _stringLiteral1195162060;
extern Il2CppCodeGenString* _stringLiteral2567606853;
extern Il2CppCodeGenString* _stringLiteral401183843;
extern Il2CppCodeGenString* _stringLiteral4058921736;
extern const uint32_t NetConnection_ReceivedLibraryMessage_m3458110466_MetadataUsageId;
extern "C"  void NetConnection_ReceivedLibraryMessage_m3458110466 (NetConnection_t3331492029 * __this, uint8_t ___tp0, int32_t ___ptr1, int32_t ___payloadLength2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetConnection_ReceivedLibraryMessage_m3458110466_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	double V_0 = 0.0;
	NetIncomingMessage_t2014089816 * V_1 = NULL;
	int32_t V_2 = 0;
	uint8_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	NetIncomingMessage_t2014089816 * V_6 = NULL;
	int32_t V_7 = 0;
	float V_8 = 0.0f;
	NetIncomingMessage_t2014089816 * V_9 = NULL;
	int32_t V_10 = 0;
	uint8_t V_11 = 0;
	bool V_12 = false;
	{
		NetPeer_t1779390221 * L_0 = __this->get_m_peer_0();
		NullCheck(L_0);
		NetPeer_VerifyNetworkThread_m4075953563(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetTime_t3056501352_il2cpp_TypeInfo_var);
		double L_1 = NetTime_get_Now_m1609702533(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		uint8_t L_2 = ___tp0;
		V_11 = L_2;
		uint8_t L_3 = V_11;
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)128))) == 0)
		{
			goto IL_009b;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)128))) == 1)
		{
			goto IL_014b;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)128))) == 2)
		{
			goto IL_016d;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)128))) == 3)
		{
			goto IL_0060;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)128))) == 4)
		{
			goto IL_0086;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)128))) == 5)
		{
			goto IL_0096;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)128))) == 6)
		{
			goto IL_00de;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)128))) == 7)
		{
			goto IL_00b1;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)128))) == 8)
		{
			goto IL_0206;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)128))) == 9)
		{
			goto IL_0206;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)128))) == 10)
		{
			goto IL_0206;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)128))) == 11)
		{
			goto IL_01f7;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)128))) == 12)
		{
			goto IL_019f;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)128))) == 13)
		{
			goto IL_01a9;
		}
	}
	{
		goto IL_0206;
	}

IL_0060:
	{
		NetPeer_t1779390221 * L_4 = __this->get_m_peer_0();
		uint8_t L_5 = ___tp0;
		uint8_t L_6 = L_5;
		Il2CppObject * L_7 = Box(NetMessageType_t191235414_il2cpp_TypeInfo_var, &L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m2000667605(NULL /*static, unused*/, _stringLiteral1031971635, L_7, _stringLiteral1195162060, /*hidden argument*/NULL);
		NullCheck(L_4);
		NetPeer_LogDebug_m2983960595(L_4, L_8, /*hidden argument*/NULL);
		goto IL_0224;
	}

IL_0086:
	{
		double L_9 = V_0;
		uint8_t L_10 = ___tp0;
		int32_t L_11 = ___ptr1;
		int32_t L_12 = ___payloadLength2;
		NetConnection_HandleConnectResponse_m2887867750(__this, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		goto IL_0224;
	}

IL_0096:
	{
		goto IL_0224;
	}

IL_009b:
	{
		NetPeer_t1779390221 * L_13 = __this->get_m_peer_0();
		NullCheck(L_13);
		NetPeer_ThrowOrLog_m2301784333(L_13, _stringLiteral2567606853, /*hidden argument*/NULL);
		goto IL_0224;
	}

IL_00b1:
	{
		NetPeer_t1779390221 * L_14 = __this->get_m_peer_0();
		int32_t L_15 = ___ptr1;
		int32_t L_16 = ___payloadLength2;
		NullCheck(L_14);
		NetIncomingMessage_t2014089816 * L_17 = NetPeer_SetupReadHelperMessage_m906183392(L_14, L_15, L_16, /*hidden argument*/NULL);
		V_1 = L_17;
		__this->set_m_disconnectRequested_16((bool)1);
		NetIncomingMessage_t2014089816 * L_18 = V_1;
		NullCheck(L_18);
		String_t* L_19 = NetBuffer_ReadString_m1223210798(L_18, /*hidden argument*/NULL);
		__this->set_m_disconnectMessage_18(L_19);
		__this->set_m_disconnectReqSendBye_17((bool)0);
		goto IL_0224;
	}

IL_00de:
	{
		V_2 = 0;
		goto IL_013c;
	}

IL_00e2:
	{
		NetPeer_t1779390221 * L_20 = __this->get_m_peer_0();
		NullCheck(L_20);
		ByteU5BU5D_t3397334013* L_21 = L_20->get_m_receiveBuffer_12();
		int32_t L_22 = ___ptr1;
		int32_t L_23 = L_22;
		___ptr1 = ((int32_t)((int32_t)L_23+(int32_t)1));
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_23);
		int32_t L_24 = L_23;
		uint8_t L_25 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_3 = L_25;
		NetPeer_t1779390221 * L_26 = __this->get_m_peer_0();
		NullCheck(L_26);
		ByteU5BU5D_t3397334013* L_27 = L_26->get_m_receiveBuffer_12();
		int32_t L_28 = ___ptr1;
		int32_t L_29 = L_28;
		___ptr1 = ((int32_t)((int32_t)L_29+(int32_t)1));
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, L_29);
		int32_t L_30 = L_29;
		uint8_t L_31 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_4 = L_31;
		int32_t L_32 = V_4;
		NetPeer_t1779390221 * L_33 = __this->get_m_peer_0();
		NullCheck(L_33);
		ByteU5BU5D_t3397334013* L_34 = L_33->get_m_receiveBuffer_12();
		int32_t L_35 = ___ptr1;
		int32_t L_36 = L_35;
		___ptr1 = ((int32_t)((int32_t)L_36+(int32_t)1));
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, L_36);
		int32_t L_37 = L_36;
		uint8_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_4 = ((int32_t)((int32_t)L_32|(int32_t)((int32_t)((int32_t)L_38<<(int32_t)8))));
		NetQueue_1_t1156019562 * L_39 = __this->get_m_queuedIncomingAcks_11();
		uint8_t L_40 = V_3;
		int32_t L_41 = V_4;
		NetTuple_2_t3234296172  L_42;
		memset(&L_42, 0, sizeof(L_42));
		NetTuple_2__ctor_m2674576177(&L_42, L_40, L_41, /*hidden argument*/NetTuple_2__ctor_m2674576177_MethodInfo_var);
		NullCheck(L_39);
		NetQueue_1_Enqueue_m2553464330(L_39, L_42, /*hidden argument*/NetQueue_1_Enqueue_m2553464330_MethodInfo_var);
		int32_t L_43 = V_2;
		V_2 = ((int32_t)((int32_t)L_43+(int32_t)3));
	}

IL_013c:
	{
		int32_t L_44 = V_2;
		int32_t L_45 = ___payloadLength2;
		V_12 = (bool)((((int32_t)L_44) < ((int32_t)L_45))? 1 : 0);
		bool L_46 = V_12;
		if (L_46)
		{
			goto IL_00e2;
		}
	}
	{
		goto IL_0224;
	}

IL_014b:
	{
		NetPeer_t1779390221 * L_47 = __this->get_m_peer_0();
		NullCheck(L_47);
		ByteU5BU5D_t3397334013* L_48 = L_47->get_m_receiveBuffer_12();
		int32_t L_49 = ___ptr1;
		int32_t L_50 = L_49;
		___ptr1 = ((int32_t)((int32_t)L_50+(int32_t)1));
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_50);
		int32_t L_51 = L_50;
		uint8_t L_52 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_5 = L_52;
		int32_t L_53 = V_5;
		NetConnection_SendPong_m2305285507(__this, L_53, /*hidden argument*/NULL);
		goto IL_0224;
	}

IL_016d:
	{
		NetPeer_t1779390221 * L_54 = __this->get_m_peer_0();
		int32_t L_55 = ___ptr1;
		int32_t L_56 = ___payloadLength2;
		NullCheck(L_54);
		NetIncomingMessage_t2014089816 * L_57 = NetPeer_SetupReadHelperMessage_m906183392(L_54, L_55, L_56, /*hidden argument*/NULL);
		V_6 = L_57;
		NetIncomingMessage_t2014089816 * L_58 = V_6;
		NullCheck(L_58);
		uint8_t L_59 = NetBuffer_ReadByte_m3348400846(L_58, /*hidden argument*/NULL);
		V_7 = L_59;
		NetIncomingMessage_t2014089816 * L_60 = V_6;
		NullCheck(L_60);
		float L_61 = NetBuffer_ReadSingle_m2767420110(L_60, /*hidden argument*/NULL);
		V_8 = L_61;
		double L_62 = V_0;
		int32_t L_63 = V_7;
		float L_64 = V_8;
		NetConnection_ReceivedPong_m1658356675(__this, L_62, L_63, L_64, /*hidden argument*/NULL);
		goto IL_0224;
	}

IL_019f:
	{
		int32_t L_65 = ___payloadLength2;
		NetConnection_SendMTUSuccess_m827100686(__this, L_65, /*hidden argument*/NULL);
		goto IL_0224;
	}

IL_01a9:
	{
		NetPeer_t1779390221 * L_66 = __this->get_m_peer_0();
		NullCheck(L_66);
		NetPeerConfiguration_t136603591 * L_67 = NetPeer_get_Configuration_m323836264(L_66, /*hidden argument*/NULL);
		NullCheck(L_67);
		bool L_68 = NetPeerConfiguration_get_AutoExpandMTU_m1376610458(L_67, /*hidden argument*/NULL);
		V_12 = L_68;
		bool L_69 = V_12;
		if (L_69)
		{
			goto IL_01d3;
		}
	}
	{
		NetPeer_t1779390221 * L_70 = __this->get_m_peer_0();
		NullCheck(L_70);
		NetPeer_LogDebug_m2983960595(L_70, _stringLiteral401183843, /*hidden argument*/NULL);
		goto IL_0224;
	}

IL_01d3:
	{
		NetPeer_t1779390221 * L_71 = __this->get_m_peer_0();
		int32_t L_72 = ___ptr1;
		int32_t L_73 = ___payloadLength2;
		NullCheck(L_71);
		NetIncomingMessage_t2014089816 * L_74 = NetPeer_SetupReadHelperMessage_m906183392(L_71, L_72, L_73, /*hidden argument*/NULL);
		V_9 = L_74;
		NetIncomingMessage_t2014089816 * L_75 = V_9;
		NullCheck(L_75);
		int32_t L_76 = NetBuffer_ReadInt32_m2479521906(L_75, /*hidden argument*/NULL);
		V_10 = L_76;
		double L_77 = V_0;
		int32_t L_78 = V_10;
		NetConnection_HandleExpandMTUSuccess_m3820777494(__this, L_77, L_78, /*hidden argument*/NULL);
		goto IL_0224;
	}

IL_01f7:
	{
		NetPeer_t1779390221 * L_79 = __this->get_m_peer_0();
		int32_t L_80 = ___ptr1;
		NullCheck(L_79);
		NetPeer_HandleNatIntroduction_m4079714032(L_79, L_80, /*hidden argument*/NULL);
		goto IL_0224;
	}

IL_0206:
	{
		NetPeer_t1779390221 * L_81 = __this->get_m_peer_0();
		uint8_t L_82 = ___tp0;
		uint8_t L_83 = L_82;
		Il2CppObject * L_84 = Box(NetMessageType_t191235414_il2cpp_TypeInfo_var, &L_83);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_85 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral4058921736, L_84, /*hidden argument*/NULL);
		NullCheck(L_81);
		NetPeer_LogWarning_m3266657906(L_81, L_85, /*hidden argument*/NULL);
		goto IL_0224;
	}

IL_0224:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetConnection::ReceivedMessage(Lidgren.Network.NetIncomingMessage)
extern "C"  void NetConnection_ReceivedMessage_m864391479 (NetConnection_t3331492029 * __this, NetIncomingMessage_t2014089816 * ___msg0, const MethodInfo* method)
{
	uint8_t V_0 = 0;
	int32_t V_1 = 0;
	NetReceiverChannelBase_t908288882 * V_2 = NULL;
	bool V_3 = false;
	{
		NetPeer_t1779390221 * L_0 = __this->get_m_peer_0();
		NullCheck(L_0);
		NetPeer_VerifyNetworkThread_m4075953563(L_0, /*hidden argument*/NULL);
		NetIncomingMessage_t2014089816 * L_1 = ___msg0;
		NullCheck(L_1);
		uint8_t L_2 = L_1->get_m_receivedMessageType_9();
		V_0 = L_2;
		uint8_t L_3 = V_0;
		V_1 = ((int32_t)((int32_t)L_3-(int32_t)1));
		NetReceiverChannelBaseU5BU5D_t1250440839* L_4 = __this->get_m_receiveChannels_7();
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NetReceiverChannelBase_t908288882 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		NetReceiverChannelBase_t908288882 * L_8 = V_2;
		V_3 = (bool)((((int32_t)((((Il2CppObject*)(NetReceiverChannelBase_t908288882 *)L_8) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_3;
		if (L_9)
		{
			goto IL_0034;
		}
	}
	{
		uint8_t L_10 = V_0;
		NetReceiverChannelBase_t908288882 * L_11 = NetConnection_CreateReceiverChannel_m1916476265(__this, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
	}

IL_0034:
	{
		NetReceiverChannelBase_t908288882 * L_12 = V_2;
		NetIncomingMessage_t2014089816 * L_13 = ___msg0;
		NullCheck(L_12);
		VirtActionInvoker1< NetIncomingMessage_t2014089816 * >::Invoke(4 /* System.Void Lidgren.Network.NetReceiverChannelBase::ReceiveMessage(Lidgren.Network.NetIncomingMessage) */, L_12, L_13);
		return;
	}
}
// Lidgren.Network.NetReceiverChannelBase Lidgren.Network.NetConnection::CreateReceiverChannel(Lidgren.Network.NetMessageType)
extern Il2CppClass* NetUtility_t3562260209_il2cpp_TypeInfo_var;
extern Il2CppClass* NetUnreliableUnorderedReceiver_t3541921227_il2cpp_TypeInfo_var;
extern Il2CppClass* NetReliableOrderedReceiver_t2554037675_il2cpp_TypeInfo_var;
extern Il2CppClass* NetUnreliableSequencedReceiver_t2497601560_il2cpp_TypeInfo_var;
extern Il2CppClass* NetReliableUnorderedReceiver_t3992686328_il2cpp_TypeInfo_var;
extern Il2CppClass* NetReliableSequencedReceiver_t2385271929_il2cpp_TypeInfo_var;
extern Il2CppClass* NetException_t2452891498_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2124365638;
extern const uint32_t NetConnection_CreateReceiverChannel_m1916476265_MetadataUsageId;
extern "C"  NetReceiverChannelBase_t908288882 * NetConnection_CreateReceiverChannel_m1916476265 (NetConnection_t3331492029 * __this, uint8_t ___tp0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetConnection_CreateReceiverChannel_m1916476265_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	NetReceiverChannelBase_t908288882 * V_0 = NULL;
	uint8_t V_1 = 0;
	int32_t V_2 = 0;
	NetReceiverChannelBase_t908288882 * V_3 = NULL;
	uint8_t V_4 = 0;
	{
		NetPeer_t1779390221 * L_0 = __this->get_m_peer_0();
		NullCheck(L_0);
		NetPeer_VerifyNetworkThread_m4075953563(L_0, /*hidden argument*/NULL);
		uint8_t L_1 = ___tp0;
		IL2CPP_RUNTIME_CLASS_INIT(NetUtility_t3562260209_il2cpp_TypeInfo_var);
		uint8_t L_2 = NetUtility_GetDeliveryMethod_m2383198164(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		uint8_t L_3 = V_1;
		V_4 = L_3;
		uint8_t L_4 = V_4;
		if (((int32_t)((int32_t)L_4-(int32_t)1)) == 0)
		{
			goto IL_0042;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)1)) == 1)
		{
			goto IL_0056;
		}
	}
	{
		uint8_t L_5 = V_4;
		if (((int32_t)((int32_t)L_5-(int32_t)((int32_t)34))) == 0)
		{
			goto IL_005f;
		}
		if (((int32_t)((int32_t)L_5-(int32_t)((int32_t)34))) == 1)
		{
			goto IL_006a;
		}
	}
	{
		uint8_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)67))))
		{
			goto IL_004b;
		}
	}
	{
		goto IL_0075;
	}

IL_0042:
	{
		NetUnreliableUnorderedReceiver_t3541921227 * L_7 = (NetUnreliableUnorderedReceiver_t3541921227 *)il2cpp_codegen_object_new(NetUnreliableUnorderedReceiver_t3541921227_il2cpp_TypeInfo_var);
		NetUnreliableUnorderedReceiver__ctor_m3560667024(L_7, __this, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_0080;
	}

IL_004b:
	{
		NetReliableOrderedReceiver_t2554037675 * L_8 = (NetReliableOrderedReceiver_t2554037675 *)il2cpp_codegen_object_new(NetReliableOrderedReceiver_t2554037675_il2cpp_TypeInfo_var);
		NetReliableOrderedReceiver__ctor_m3553848617(L_8, __this, ((int32_t)64), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0080;
	}

IL_0056:
	{
		NetUnreliableSequencedReceiver_t2497601560 * L_9 = (NetUnreliableSequencedReceiver_t2497601560 *)il2cpp_codegen_object_new(NetUnreliableSequencedReceiver_t2497601560_il2cpp_TypeInfo_var);
		NetUnreliableSequencedReceiver__ctor_m3415245671(L_9, __this, /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0080;
	}

IL_005f:
	{
		NetReliableUnorderedReceiver_t3992686328 * L_10 = (NetReliableUnorderedReceiver_t3992686328 *)il2cpp_codegen_object_new(NetReliableUnorderedReceiver_t3992686328_il2cpp_TypeInfo_var);
		NetReliableUnorderedReceiver__ctor_m1507047812(L_10, __this, ((int32_t)64), /*hidden argument*/NULL);
		V_0 = L_10;
		goto IL_0080;
	}

IL_006a:
	{
		NetReliableSequencedReceiver_t2385271929 * L_11 = (NetReliableSequencedReceiver_t2385271929 *)il2cpp_codegen_object_new(NetReliableSequencedReceiver_t2385271929_il2cpp_TypeInfo_var);
		NetReliableSequencedReceiver__ctor_m408695305(L_11, __this, ((int32_t)64), /*hidden argument*/NULL);
		V_0 = L_11;
		goto IL_0080;
	}

IL_0075:
	{
		NetException_t2452891498 * L_12 = (NetException_t2452891498 *)il2cpp_codegen_object_new(NetException_t2452891498_il2cpp_TypeInfo_var);
		NetException__ctor_m2724322251(L_12, _stringLiteral2124365638, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12);
	}

IL_0080:
	{
		uint8_t L_13 = ___tp0;
		V_2 = ((int32_t)((int32_t)L_13-(int32_t)1));
		NetReceiverChannelBaseU5BU5D_t1250440839* L_14 = __this->get_m_receiveChannels_7();
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		NetReceiverChannelBase_t908288882 * L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NetException_Assert_m1426298558(NULL /*static, unused*/, (bool)((((Il2CppObject*)(NetReceiverChannelBase_t908288882 *)L_17) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0), /*hidden argument*/NULL);
		NetReceiverChannelBaseU5BU5D_t1250440839* L_18 = __this->get_m_receiveChannels_7();
		int32_t L_19 = V_2;
		NetReceiverChannelBase_t908288882 * L_20 = V_0;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		ArrayElementTypeCheck (L_18, L_20);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (NetReceiverChannelBase_t908288882 *)L_20);
		NetReceiverChannelBase_t908288882 * L_21 = V_0;
		V_3 = L_21;
		goto IL_00a2;
	}

IL_00a2:
	{
		NetReceiverChannelBase_t908288882 * L_22 = V_3;
		return L_22;
	}
}
// System.Void Lidgren.Network.NetConnection::QueueAck(Lidgren.Network.NetMessageType,System.Int32)
extern const MethodInfo* NetTuple_2__ctor_m2674576177_MethodInfo_var;
extern const MethodInfo* NetQueue_1_Enqueue_m2553464330_MethodInfo_var;
extern const uint32_t NetConnection_QueueAck_m3101883724_MetadataUsageId;
extern "C"  void NetConnection_QueueAck_m3101883724 (NetConnection_t3331492029 * __this, uint8_t ___tp0, int32_t ___sequenceNumber1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetConnection_QueueAck_m3101883724_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		NetQueue_1_t1156019562 * L_0 = __this->get_m_queuedOutgoingAcks_10();
		uint8_t L_1 = ___tp0;
		int32_t L_2 = ___sequenceNumber1;
		NetTuple_2_t3234296172  L_3;
		memset(&L_3, 0, sizeof(L_3));
		NetTuple_2__ctor_m2674576177(&L_3, L_1, L_2, /*hidden argument*/NetTuple_2__ctor_m2674576177_MethodInfo_var);
		NullCheck(L_0);
		NetQueue_1_Enqueue_m2553464330(L_0, L_3, /*hidden argument*/NetQueue_1_Enqueue_m2553464330_MethodInfo_var);
		return;
	}
}
// System.Void Lidgren.Network.NetConnection::Shutdown(System.String)
extern "C"  void NetConnection_Shutdown_m3044084954 (NetConnection_t3331492029 * __this, String_t* ___reason0, const MethodInfo* method)
{
	{
		String_t* L_0 = ___reason0;
		NetConnection_ExecuteDisconnect_m666203348(__this, L_0, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.String Lidgren.Network.NetConnection::ToString()
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1779609581;
extern Il2CppCodeGenString* _stringLiteral372029425;
extern const uint32_t NetConnection_ToString_m1379453827_MetadataUsageId;
extern "C"  String_t* NetConnection_ToString_m1379453827 (NetConnection_t3331492029 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetConnection_ToString_m1379453827_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = NULL;
	{
		IPEndPoint_t2615413766 * L_0 = __this->get_m_remoteEndPoint_5();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m2000667605(NULL /*static, unused*/, _stringLiteral1779609581, L_0, _stringLiteral372029425, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0019;
	}

IL_0019:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Void Lidgren.Network.NetConnection::UnconnectedHeartbeat(System.Double)
extern Il2CppClass* NetConnectionStatus_t952199027_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3845336161;
extern Il2CppCodeGenString* _stringLiteral1908377056;
extern Il2CppCodeGenString* _stringLiteral3524187948;
extern Il2CppCodeGenString* _stringLiteral3330822647;
extern const uint32_t NetConnection_UnconnectedHeartbeat_m3795858382_MetadataUsageId;
extern "C"  void NetConnection_UnconnectedHeartbeat_m3795858382 (NetConnection_t3331492029 * __this, double ___now0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetConnection_UnconnectedHeartbeat_m3795858382_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		NetPeer_t1779390221 * L_0 = __this->get_m_peer_0();
		NullCheck(L_0);
		NetPeer_VerifyNetworkThread_m4075953563(L_0, /*hidden argument*/NULL);
		bool L_1 = __this->get_m_disconnectRequested_16();
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_3 = __this->get_m_disconnectMessage_18();
		NetConnection_ExecuteDisconnect_m666203348(__this, L_3, (bool)1, /*hidden argument*/NULL);
	}

IL_0028:
	{
		bool L_4 = __this->get_m_connectRequested_15();
		V_0 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_0;
		if (L_5)
		{
			goto IL_00a2;
		}
	}
	{
		int32_t L_6 = __this->get_m_status_2();
		V_1 = L_6;
		int32_t L_7 = V_1;
		if (L_7 == 0)
		{
			goto IL_0093;
		}
		if (L_7 == 1)
		{
			goto IL_0074;
		}
		if (L_7 == 2)
		{
			goto IL_0093;
		}
		if (L_7 == 3)
		{
			goto IL_0093;
		}
		if (L_7 == 4)
		{
			goto IL_0065;
		}
		if (L_7 == 5)
		{
			goto IL_0065;
		}
		if (L_7 == 6)
		{
			goto IL_0091;
		}
		if (L_7 == 7)
		{
			goto IL_007e;
		}
	}
	{
		goto IL_0093;
	}

IL_0065:
	{
		NetConnection_ExecuteDisconnect_m666203348(__this, _stringLiteral3845336161, (bool)1, /*hidden argument*/NULL);
		goto IL_009d;
	}

IL_0074:
	{
		double L_8 = ___now0;
		NetConnection_SendConnect_m3418894170(__this, L_8, /*hidden argument*/NULL);
		goto IL_009d;
	}

IL_007e:
	{
		NetPeer_t1779390221 * L_9 = __this->get_m_peer_0();
		NullCheck(L_9);
		NetPeer_ThrowOrLog_m2301784333(L_9, _stringLiteral1908377056, /*hidden argument*/NULL);
		goto IL_009d;
	}

IL_0091:
	{
		goto IL_009d;
	}

IL_0093:
	{
		double L_10 = ___now0;
		NetConnection_SendConnect_m3418894170(__this, L_10, /*hidden argument*/NULL);
		goto IL_009d;
	}

IL_009d:
	{
		goto IL_014f;
	}

IL_00a2:
	{
		double L_11 = ___now0;
		double L_12 = __this->get_m_lastHandshakeSendTime_21();
		NetPeerConfiguration_t136603591 * L_13 = __this->get_m_peerConfiguration_1();
		NullCheck(L_13);
		float L_14 = L_13->get_m_resendHandshakeInterval_20();
		V_0 = (bool)((((int32_t)((((double)((double)((double)L_11-(double)L_12))) > ((double)(((double)((double)L_14)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_0;
		if (L_15)
		{
			goto IL_014f;
		}
	}
	{
		int32_t L_16 = __this->get_m_handshakeAttempts_22();
		NetPeerConfiguration_t136603591 * L_17 = __this->get_m_peerConfiguration_1();
		NullCheck(L_17);
		int32_t L_18 = L_17->get_m_maximumHandshakeAttempts_21();
		V_0 = (bool)((((int32_t)L_16) < ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_0;
		if (L_19)
		{
			goto IL_00ea;
		}
	}
	{
		NetConnection_ExecuteDisconnect_m666203348(__this, _stringLiteral3524187948, (bool)1, /*hidden argument*/NULL);
		goto IL_014f;
	}

IL_00ea:
	{
		int32_t L_20 = __this->get_m_status_2();
		V_1 = L_20;
		int32_t L_21 = V_1;
		if (L_21 == 0)
		{
			goto IL_012b;
		}
		if (L_21 == 1)
		{
			goto IL_010d;
		}
		if (L_21 == 2)
		{
			goto IL_012b;
		}
		if (L_21 == 3)
		{
			goto IL_0122;
		}
		if (L_21 == 4)
		{
			goto IL_0117;
		}
	}
	{
		goto IL_012b;
	}

IL_010d:
	{
		double L_22 = ___now0;
		NetConnection_SendConnect_m3418894170(__this, L_22, /*hidden argument*/NULL);
		goto IL_014e;
	}

IL_0117:
	{
		double L_23 = ___now0;
		NetConnection_SendConnectResponse_m1494124902(__this, L_23, (bool)1, /*hidden argument*/NULL);
		goto IL_014e;
	}

IL_0122:
	{
		double L_24 = ___now0;
		__this->set_m_lastHandshakeSendTime_21(L_24);
		goto IL_014e;
	}

IL_012b:
	{
		NetPeer_t1779390221 * L_25 = __this->get_m_peer_0();
		int32_t L_26 = __this->get_m_status_2();
		int32_t L_27 = L_26;
		Il2CppObject * L_28 = Box(NetConnectionStatus_t952199027_il2cpp_TypeInfo_var, &L_27);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_29 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral3330822647, L_28, /*hidden argument*/NULL);
		NullCheck(L_25);
		NetPeer_LogWarning_m3266657906(L_25, L_29, /*hidden argument*/NULL);
		goto IL_014e;
	}

IL_014e:
	{
	}

IL_014f:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetConnection::ExecuteDisconnect(System.String,System.Boolean)
extern const MethodInfo* Dictionary_2_Remove_m2570672626_MethodInfo_var;
extern const uint32_t NetConnection_ExecuteDisconnect_m666203348_MetadataUsageId;
extern "C"  void NetConnection_ExecuteDisconnect_m666203348 (NetConnection_t3331492029 * __this, String_t* ___reason0, bool ___sendByeMessage1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetConnection_ExecuteDisconnect_m666203348_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	NetSenderChannelBase_t3096690204 * V_1 = NULL;
	bool V_2 = false;
	Dictionary_2_t3898409514 * V_3 = NULL;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		NetPeer_t1779390221 * L_0 = __this->get_m_peer_0();
		NullCheck(L_0);
		NetPeer_VerifyNetworkThread_m4075953563(L_0, /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_002f;
	}

IL_0011:
	{
		NetSenderChannelBaseU5BU5D_t470374901* L_1 = __this->get_m_sendChannels_6();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		NetSenderChannelBase_t3096690204 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		NetSenderChannelBase_t3096690204 * L_5 = V_1;
		V_2 = (bool)((((Il2CppObject*)(NetSenderChannelBase_t3096690204 *)L_5) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
		bool L_6 = V_2;
		if (L_6)
		{
			goto IL_002a;
		}
	}
	{
		NetSenderChannelBase_t3096690204 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(8 /* System.Void Lidgren.Network.NetSenderChannelBase::Reset() */, L_7);
	}

IL_002a:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_002f:
	{
		int32_t L_9 = V_0;
		NetSenderChannelBaseU5BU5D_t470374901* L_10 = __this->get_m_sendChannels_6();
		NullCheck(L_10);
		V_2 = (bool)((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_10)->max_length))))))? 1 : 0);
		bool L_11 = V_2;
		if (L_11)
		{
			goto IL_0011;
		}
	}
	{
		bool L_12 = ___sendByeMessage1;
		V_2 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_2;
		if (L_13)
		{
			goto IL_004f;
		}
	}
	{
		String_t* L_14 = ___reason0;
		NetConnection_SendDisconnect_m1840522381(__this, L_14, (bool)1, /*hidden argument*/NULL);
	}

IL_004f:
	{
		int32_t L_15 = __this->get_m_status_2();
		V_2 = (bool)((((int32_t)((((int32_t)L_15) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_2;
		if (L_16)
		{
			goto IL_006a;
		}
	}
	{
		__this->set_m_status_2(7);
		goto IL_0075;
	}

IL_006a:
	{
		String_t* L_17 = ___reason0;
		NetConnection_SetStatus_m2040093136(__this, 7, L_17, /*hidden argument*/NULL);
	}

IL_0075:
	{
		NetPeer_t1779390221 * L_18 = __this->get_m_peer_0();
		NullCheck(L_18);
		Dictionary_2_t3898409514 * L_19 = L_18->get_m_handshakes_24();
		Dictionary_2_t3898409514 * L_20 = L_19;
		V_3 = L_20;
		Monitor_Enter_m2136705809(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
	}

IL_0088:
	try
	{ // begin try (depth: 1)
		NetPeer_t1779390221 * L_21 = __this->get_m_peer_0();
		NullCheck(L_21);
		Dictionary_2_t3898409514 * L_22 = L_21->get_m_handshakes_24();
		IPEndPoint_t2615413766 * L_23 = __this->get_m_remoteEndPoint_5();
		NullCheck(L_22);
		Dictionary_2_Remove_m2570672626(L_22, L_23, /*hidden argument*/Dictionary_2_Remove_m2570672626_MethodInfo_var);
		IL2CPP_LEAVE(0xA9, FINALLY_00a1);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_00a1;
	}

FINALLY_00a1:
	{ // begin finally (depth: 1)
		Dictionary_2_t3898409514 * L_24 = V_3;
		Monitor_Exit_m2677760297(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(161)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(161)
	{
		IL2CPP_JUMP_TBL(0xA9, IL_00a9)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_00a9:
	{
		__this->set_m_disconnectRequested_16((bool)0);
		__this->set_m_connectRequested_15((bool)0);
		__this->set_m_handshakeAttempts_22(0);
		return;
	}
}
// System.Void Lidgren.Network.NetConnection::SendConnect(System.Double)
extern Il2CppCodeGenString* _stringLiteral2935650295;
extern Il2CppCodeGenString* _stringLiteral1808009572;
extern const uint32_t NetConnection_SendConnect_m3418894170_MetadataUsageId;
extern "C"  void NetConnection_SendConnect_m3418894170 (NetConnection_t3331492029 * __this, double ___now0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetConnection_SendConnect_m3418894170_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	NetOutgoingMessage_t2016542980 * V_1 = NULL;
	bool V_2 = false;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		NetPeer_t1779390221 * L_0 = __this->get_m_peer_0();
		NullCheck(L_0);
		NetPeer_VerifyNetworkThread_m4075953563(L_0, /*hidden argument*/NULL);
		NetPeerConfiguration_t136603591 * L_1 = __this->get_m_peerConfiguration_1();
		NullCheck(L_1);
		String_t* L_2 = NetPeerConfiguration_get_AppIdentifier_m1563815312(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m1606060069(L_2, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)13)+(int32_t)L_3));
		int32_t L_4 = V_0;
		NetOutgoingMessage_t2016542980 * L_5 = __this->get_m_localHailMessage_8();
		G_B1_0 = L_4;
		if (!L_5)
		{
			G_B2_0 = L_4;
			goto IL_0037;
		}
	}
	{
		NetOutgoingMessage_t2016542980 * L_6 = __this->get_m_localHailMessage_8();
		NullCheck(L_6);
		int32_t L_7 = NetBuffer_get_LengthBytes_m2765088638(L_6, /*hidden argument*/NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B1_0;
		goto IL_0038;
	}

IL_0037:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0038:
	{
		V_0 = ((int32_t)((int32_t)G_B3_1+(int32_t)G_B3_0));
		NetPeer_t1779390221 * L_8 = __this->get_m_peer_0();
		int32_t L_9 = V_0;
		NullCheck(L_8);
		NetOutgoingMessage_t2016542980 * L_10 = NetPeer_CreateMessage_m3328975762(L_8, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		NetOutgoingMessage_t2016542980 * L_11 = V_1;
		NullCheck(L_11);
		L_11->set_m_messageType_5(((int32_t)131));
		NetOutgoingMessage_t2016542980 * L_12 = V_1;
		NetPeerConfiguration_t136603591 * L_13 = __this->get_m_peerConfiguration_1();
		NullCheck(L_13);
		String_t* L_14 = NetPeerConfiguration_get_AppIdentifier_m1563815312(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		NetBuffer_Write_m962556565(L_12, L_14, /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_15 = V_1;
		NetPeer_t1779390221 * L_16 = __this->get_m_peer_0();
		NullCheck(L_16);
		int64_t L_17 = L_16->get_m_uniqueIdentifier_26();
		NullCheck(L_15);
		NetBuffer_Write_m4098639993(L_15, L_17, /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_18 = V_1;
		double L_19 = ___now0;
		NullCheck(L_18);
		NetBuffer_Write_m2191092918(L_18, (((float)((float)L_19))), /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_20 = V_1;
		NetConnection_WriteLocalHail_m1600369383(__this, L_20, /*hidden argument*/NULL);
		NetPeer_t1779390221 * L_21 = __this->get_m_peer_0();
		NetOutgoingMessage_t2016542980 * L_22 = V_1;
		IPEndPoint_t2615413766 * L_23 = __this->get_m_remoteEndPoint_5();
		NullCheck(L_21);
		NetPeer_SendLibrary_m4133093622(L_21, L_22, L_23, /*hidden argument*/NULL);
		__this->set_m_connectRequested_15((bool)0);
		double L_24 = ___now0;
		__this->set_m_lastHandshakeSendTime_21(L_24);
		int32_t L_25 = __this->get_m_handshakeAttempts_22();
		__this->set_m_handshakeAttempts_22(((int32_t)((int32_t)L_25+(int32_t)1)));
		int32_t L_26 = __this->get_m_handshakeAttempts_22();
		V_2 = (bool)((((int32_t)((((int32_t)L_26) > ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_2;
		if (L_27)
		{
			goto IL_00d8;
		}
	}
	{
		NetPeer_t1779390221 * L_28 = __this->get_m_peer_0();
		NullCheck(L_28);
		NetPeer_LogDebug_m2983960595(L_28, _stringLiteral2935650295, /*hidden argument*/NULL);
	}

IL_00d8:
	{
		NetConnection_SetStatus_m2040093136(__this, 1, _stringLiteral1808009572, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Lidgren.Network.NetConnection::SendConnectResponse(System.Double,System.Boolean)
extern const MethodInfo* NetTuple_2__ctor_m896140118_MethodInfo_var;
extern const MethodInfo* NetQueue_1_Enqueue_m1061700747_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral3004604600;
extern Il2CppCodeGenString* _stringLiteral2417339459;
extern const uint32_t NetConnection_SendConnectResponse_m1494124902_MetadataUsageId;
extern "C"  void NetConnection_SendConnectResponse_m1494124902 (NetConnection_t3331492029 * __this, double ___now0, bool ___onLibraryThread1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetConnection_SendConnectResponse_m1494124902_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	NetOutgoingMessage_t2016542980 * V_0 = NULL;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	NetPeer_t1779390221 * G_B4_1 = NULL;
	int32_t G_B3_0 = 0;
	NetPeer_t1779390221 * G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	NetPeer_t1779390221 * G_B5_2 = NULL;
	{
		bool L_0 = ___onLibraryThread1;
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		NetPeer_t1779390221 * L_2 = __this->get_m_peer_0();
		NullCheck(L_2);
		NetPeer_VerifyNetworkThread_m4075953563(L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
		NetPeer_t1779390221 * L_3 = __this->get_m_peer_0();
		NetPeerConfiguration_t136603591 * L_4 = __this->get_m_peerConfiguration_1();
		NullCheck(L_4);
		String_t* L_5 = NetPeerConfiguration_get_AppIdentifier_m1563815312(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m1606060069(L_5, /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_7 = __this->get_m_localHailMessage_8();
		G_B3_0 = ((int32_t)((int32_t)L_6+(int32_t)((int32_t)13)));
		G_B3_1 = L_3;
		if (!L_7)
		{
			G_B4_0 = ((int32_t)((int32_t)L_6+(int32_t)((int32_t)13)));
			G_B4_1 = L_3;
			goto IL_0043;
		}
	}
	{
		NetOutgoingMessage_t2016542980 * L_8 = __this->get_m_localHailMessage_8();
		NullCheck(L_8);
		int32_t L_9 = NetBuffer_get_LengthBytes_m2765088638(L_8, /*hidden argument*/NULL);
		G_B5_0 = L_9;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0044:
	{
		NullCheck(G_B5_2);
		NetOutgoingMessage_t2016542980 * L_10 = NetPeer_CreateMessage_m3328975762(G_B5_2, ((int32_t)((int32_t)G_B5_1+(int32_t)G_B5_0)), /*hidden argument*/NULL);
		V_0 = L_10;
		NetOutgoingMessage_t2016542980 * L_11 = V_0;
		NullCheck(L_11);
		L_11->set_m_messageType_5(((int32_t)132));
		NetOutgoingMessage_t2016542980 * L_12 = V_0;
		NetPeerConfiguration_t136603591 * L_13 = __this->get_m_peerConfiguration_1();
		NullCheck(L_13);
		String_t* L_14 = NetPeerConfiguration_get_AppIdentifier_m1563815312(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		NetBuffer_Write_m962556565(L_12, L_14, /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_15 = V_0;
		NetPeer_t1779390221 * L_16 = __this->get_m_peer_0();
		NullCheck(L_16);
		int64_t L_17 = L_16->get_m_uniqueIdentifier_26();
		NullCheck(L_15);
		NetBuffer_Write_m4098639993(L_15, L_17, /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_18 = V_0;
		double L_19 = ___now0;
		NullCheck(L_18);
		NetBuffer_Write_m2191092918(L_18, (((float)((float)L_19))), /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_20 = V_0;
		NullCheck(L_20);
		int32_t* L_21 = L_20->get_address_of_m_recyclingCount_7();
		Interlocked_Increment_m129308425(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_22 = V_0;
		NetConnection_WriteLocalHail_m1600369383(__this, L_22, /*hidden argument*/NULL);
		bool L_23 = ___onLibraryThread1;
		V_1 = (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_1;
		if (L_24)
		{
			goto IL_00b5;
		}
	}
	{
		NetPeer_t1779390221 * L_25 = __this->get_m_peer_0();
		NetOutgoingMessage_t2016542980 * L_26 = V_0;
		IPEndPoint_t2615413766 * L_27 = __this->get_m_remoteEndPoint_5();
		NullCheck(L_25);
		NetPeer_SendLibrary_m4133093622(L_25, L_26, L_27, /*hidden argument*/NULL);
		goto IL_00d2;
	}

IL_00b5:
	{
		NetPeer_t1779390221 * L_28 = __this->get_m_peer_0();
		NullCheck(L_28);
		NetQueue_1_t1703294902 * L_29 = L_28->get_m_unsentUnconnectedMessages_23();
		IPEndPoint_t2615413766 * L_30 = __this->get_m_remoteEndPoint_5();
		NetOutgoingMessage_t2016542980 * L_31 = V_0;
		NetTuple_2_t3781571512  L_32;
		memset(&L_32, 0, sizeof(L_32));
		NetTuple_2__ctor_m896140118(&L_32, L_30, L_31, /*hidden argument*/NetTuple_2__ctor_m896140118_MethodInfo_var);
		NullCheck(L_29);
		NetQueue_1_Enqueue_m1061700747(L_29, L_32, /*hidden argument*/NetQueue_1_Enqueue_m1061700747_MethodInfo_var);
	}

IL_00d2:
	{
		double L_33 = ___now0;
		__this->set_m_lastHandshakeSendTime_21(L_33);
		int32_t L_34 = __this->get_m_handshakeAttempts_22();
		__this->set_m_handshakeAttempts_22(((int32_t)((int32_t)L_34+(int32_t)1)));
		int32_t L_35 = __this->get_m_handshakeAttempts_22();
		V_1 = (bool)((((int32_t)((((int32_t)L_35) > ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_36 = V_1;
		if (L_36)
		{
			goto IL_0108;
		}
	}
	{
		NetPeer_t1779390221 * L_37 = __this->get_m_peer_0();
		NullCheck(L_37);
		NetPeer_LogDebug_m2983960595(L_37, _stringLiteral3004604600, /*hidden argument*/NULL);
	}

IL_0108:
	{
		NetConnection_SetStatus_m2040093136(__this, 4, _stringLiteral2417339459, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Lidgren.Network.NetConnection::SendDisconnect(System.String,System.Boolean)
extern const MethodInfo* NetTuple_2__ctor_m896140118_MethodInfo_var;
extern const MethodInfo* NetQueue_1_Enqueue_m1061700747_MethodInfo_var;
extern const uint32_t NetConnection_SendDisconnect_m1840522381_MetadataUsageId;
extern "C"  void NetConnection_SendDisconnect_m1840522381 (NetConnection_t3331492029 * __this, String_t* ___reason0, bool ___onLibraryThread1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetConnection_SendDisconnect_m1840522381_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	NetOutgoingMessage_t2016542980 * V_0 = NULL;
	bool V_1 = false;
	{
		bool L_0 = ___onLibraryThread1;
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		NetPeer_t1779390221 * L_2 = __this->get_m_peer_0();
		NullCheck(L_2);
		NetPeer_VerifyNetworkThread_m4075953563(L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
		NetPeer_t1779390221 * L_3 = __this->get_m_peer_0();
		String_t* L_4 = ___reason0;
		NullCheck(L_3);
		NetOutgoingMessage_t2016542980 * L_5 = NetPeer_CreateMessage_m3445598245(L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		NetOutgoingMessage_t2016542980 * L_6 = V_0;
		NullCheck(L_6);
		L_6->set_m_messageType_5(((int32_t)135));
		NetOutgoingMessage_t2016542980 * L_7 = V_0;
		NullCheck(L_7);
		int32_t* L_8 = L_7->get_address_of_m_recyclingCount_7();
		Interlocked_Increment_m129308425(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		bool L_9 = ___onLibraryThread1;
		V_1 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_0056;
		}
	}
	{
		NetPeer_t1779390221 * L_11 = __this->get_m_peer_0();
		NetOutgoingMessage_t2016542980 * L_12 = V_0;
		IPEndPoint_t2615413766 * L_13 = __this->get_m_remoteEndPoint_5();
		NullCheck(L_11);
		NetPeer_SendLibrary_m4133093622(L_11, L_12, L_13, /*hidden argument*/NULL);
		goto IL_0073;
	}

IL_0056:
	{
		NetPeer_t1779390221 * L_14 = __this->get_m_peer_0();
		NullCheck(L_14);
		NetQueue_1_t1703294902 * L_15 = L_14->get_m_unsentUnconnectedMessages_23();
		IPEndPoint_t2615413766 * L_16 = __this->get_m_remoteEndPoint_5();
		NetOutgoingMessage_t2016542980 * L_17 = V_0;
		NetTuple_2_t3781571512  L_18;
		memset(&L_18, 0, sizeof(L_18));
		NetTuple_2__ctor_m896140118(&L_18, L_16, L_17, /*hidden argument*/NetTuple_2__ctor_m896140118_MethodInfo_var);
		NullCheck(L_15);
		NetQueue_1_Enqueue_m1061700747(L_15, L_18, /*hidden argument*/NetQueue_1_Enqueue_m1061700747_MethodInfo_var);
	}

IL_0073:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetConnection::WriteLocalHail(Lidgren.Network.NetOutgoingMessage)
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3786716932;
extern const uint32_t NetConnection_WriteLocalHail_m1600369383_MetadataUsageId;
extern "C"  void NetConnection_WriteLocalHail_m1600369383 (NetConnection_t3331492029 * __this, NetOutgoingMessage_t2016542980 * ___om0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetConnection_WriteLocalHail_m1600369383_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t3397334013* V_0 = NULL;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	{
		NetOutgoingMessage_t2016542980 * L_0 = __this->get_m_localHailMessage_8();
		V_1 = (bool)((((Il2CppObject*)(NetOutgoingMessage_t2016542980 *)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (L_1)
		{
			goto IL_00b3;
		}
	}
	{
		NetOutgoingMessage_t2016542980 * L_2 = __this->get_m_localHailMessage_8();
		NullCheck(L_2);
		ByteU5BU5D_t3397334013* L_3 = NetBuffer_get_Data_m1302059707(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		ByteU5BU5D_t3397334013* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		ByteU5BU5D_t3397334013* L_5 = V_0;
		NullCheck(L_5);
		NetOutgoingMessage_t2016542980 * L_6 = __this->get_m_localHailMessage_8();
		NullCheck(L_6);
		int32_t L_7 = NetBuffer_get_LengthBytes_m2765088638(L_6, /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_5)->max_length))))) < ((int32_t)L_7))? 1 : 0);
		goto IL_0034;
	}

IL_0033:
	{
		G_B4_0 = 1;
	}

IL_0034:
	{
		V_1 = (bool)G_B4_0;
		bool L_8 = V_1;
		if (L_8)
		{
			goto IL_00b2;
		}
	}
	{
		NetOutgoingMessage_t2016542980 * L_9 = ___om0;
		NullCheck(L_9);
		int32_t L_10 = NetBuffer_get_LengthBytes_m2765088638(L_9, /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_11 = __this->get_m_localHailMessage_8();
		NullCheck(L_11);
		int32_t L_12 = NetBuffer_get_LengthBytes_m2765088638(L_11, /*hidden argument*/NULL);
		NetPeerConfiguration_t136603591 * L_13 = __this->get_m_peerConfiguration_1();
		NullCheck(L_13);
		int32_t L_14 = L_13->get_m_maximumTransmissionUnit_26();
		V_1 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_10+(int32_t)L_12))) > ((int32_t)((int32_t)((int32_t)L_14-(int32_t)((int32_t)10)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_1;
		if (L_15)
		{
			goto IL_0093;
		}
	}
	{
		NetPeer_t1779390221 * L_16 = __this->get_m_peer_0();
		NetPeerConfiguration_t136603591 * L_17 = __this->get_m_peerConfiguration_1();
		NullCheck(L_17);
		int32_t L_18 = L_17->get_m_maximumTransmissionUnit_26();
		NetOutgoingMessage_t2016542980 * L_19 = ___om0;
		NullCheck(L_19);
		int32_t L_20 = NetBuffer_get_LengthBytes_m2765088638(L_19, /*hidden argument*/NULL);
		int32_t L_21 = ((int32_t)((int32_t)((int32_t)((int32_t)L_18-(int32_t)((int32_t)10)))-(int32_t)L_20));
		Il2CppObject * L_22 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_21);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral3786716932, L_22, /*hidden argument*/NULL);
		NullCheck(L_16);
		NetPeer_ThrowOrLog_m2301784333(L_16, L_23, /*hidden argument*/NULL);
	}

IL_0093:
	{
		NetOutgoingMessage_t2016542980 * L_24 = ___om0;
		NetOutgoingMessage_t2016542980 * L_25 = __this->get_m_localHailMessage_8();
		NullCheck(L_25);
		ByteU5BU5D_t3397334013* L_26 = NetBuffer_get_Data_m1302059707(L_25, /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_27 = __this->get_m_localHailMessage_8();
		NullCheck(L_27);
		int32_t L_28 = NetBuffer_get_LengthBytes_m2765088638(L_27, /*hidden argument*/NULL);
		NullCheck(L_24);
		NetBuffer_Write_m3872681458(L_24, L_26, 0, L_28, /*hidden argument*/NULL);
	}

IL_00b2:
	{
	}

IL_00b3:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetConnection::SendConnectionEstablished()
extern Il2CppClass* NetTime_t3056501352_il2cpp_TypeInfo_var;
extern Il2CppClass* NetUtility_t3562260209_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral246561994;
extern const uint32_t NetConnection_SendConnectionEstablished_m3743151856_MetadataUsageId;
extern "C"  void NetConnection_SendConnectionEstablished_m3743151856 (NetConnection_t3331492029 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetConnection_SendConnectionEstablished_m3743151856_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	NetOutgoingMessage_t2016542980 * V_0 = NULL;
	bool V_1 = false;
	{
		NetPeer_t1779390221 * L_0 = __this->get_m_peer_0();
		NullCheck(L_0);
		NetOutgoingMessage_t2016542980 * L_1 = NetPeer_CreateMessage_m3328975762(L_0, 4, /*hidden argument*/NULL);
		V_0 = L_1;
		NetOutgoingMessage_t2016542980 * L_2 = V_0;
		NullCheck(L_2);
		L_2->set_m_messageType_5(((int32_t)133));
		NetOutgoingMessage_t2016542980 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(NetTime_t3056501352_il2cpp_TypeInfo_var);
		double L_4 = NetTime_get_Now_m1609702533(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		NetBuffer_Write_m2191092918(L_3, (((float)((float)L_4))), /*hidden argument*/NULL);
		NetPeer_t1779390221 * L_5 = __this->get_m_peer_0();
		NetOutgoingMessage_t2016542980 * L_6 = V_0;
		IPEndPoint_t2615413766 * L_7 = __this->get_m_remoteEndPoint_5();
		NullCheck(L_5);
		NetPeer_SendLibrary_m4133093622(L_5, L_6, L_7, /*hidden argument*/NULL);
		__this->set_m_handshakeAttempts_22(0);
		NetConnection_InitializePing_m1433079092(__this, /*hidden argument*/NULL);
		int32_t L_8 = __this->get_m_status_2();
		V_1 = (bool)((((int32_t)L_8) == ((int32_t)5))? 1 : 0);
		bool L_9 = V_1;
		if (L_9)
		{
			goto IL_0071;
		}
	}
	{
		int64_t L_10 = __this->get_m_remoteUniqueIdentifier_9();
		IL2CPP_RUNTIME_CLASS_INIT(NetUtility_t3562260209_il2cpp_TypeInfo_var);
		String_t* L_11 = NetUtility_ToHexString_m433916538(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m2596409543(NULL /*static, unused*/, _stringLiteral246561994, L_11, /*hidden argument*/NULL);
		NetConnection_SetStatus_m2040093136(__this, 5, L_12, /*hidden argument*/NULL);
	}

IL_0071:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetConnection::ReceivedHandshake(System.Double,Lidgren.Network.NetMessageType,System.Int32,System.Int32)
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern Il2CppClass* NetMessageType_t191235414_il2cpp_TypeInfo_var;
extern Il2CppClass* NetConnectionStatus_t952199027_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* NetUtility_t3562260209_il2cpp_TypeInfo_var;
extern Il2CppClass* Il2CppObject_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4231290937;
extern Il2CppCodeGenString* _stringLiteral3755334964;
extern Il2CppCodeGenString* _stringLiteral2339958817;
extern Il2CppCodeGenString* _stringLiteral1872536088;
extern Il2CppCodeGenString* _stringLiteral1791829564;
extern Il2CppCodeGenString* _stringLiteral246561994;
extern Il2CppCodeGenString* _stringLiteral4069224161;
extern Il2CppCodeGenString* _stringLiteral1666295375;
extern const uint32_t NetConnection_ReceivedHandshake_m1128410455_MetadataUsageId;
extern "C"  void NetConnection_ReceivedHandshake_m1128410455 (NetConnection_t3331492029 * __this, double ___now0, uint8_t ___tp1, int32_t ___ptr2, int32_t ___payloadLength3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetConnection_ReceivedHandshake_m1128410455_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t3397334013* V_0 = NULL;
	bool V_1 = false;
	NetIncomingMessage_t2014089816 * V_2 = NULL;
	NetIncomingMessage_t2014089816 * V_3 = NULL;
	String_t* V_4 = NULL;
	NetIncomingMessage_t2014089816 * V_5 = NULL;
	uint8_t V_6 = 0;
	bool V_7 = false;
	ObjectU5BU5D_t3614634134* V_8 = NULL;
	int32_t V_9 = 0;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B10_0 = 0;
	NetPeer_t1779390221 * G_B10_1 = NULL;
	int32_t G_B9_0 = 0;
	NetPeer_t1779390221 * G_B9_1 = NULL;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	NetPeer_t1779390221 * G_B11_2 = NULL;
	{
		NetPeer_t1779390221 * L_0 = __this->get_m_peer_0();
		NullCheck(L_0);
		NetPeer_VerifyNetworkThread_m4075953563(L_0, /*hidden argument*/NULL);
		uint8_t L_1 = ___tp1;
		V_6 = L_1;
		uint8_t L_2 = V_6;
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)129))) == 0)
		{
			goto IL_0317;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)129))) == 1)
		{
			goto IL_0319;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)129))) == 2)
		{
			goto IL_0046;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)129))) == 3)
		{
			goto IL_0210;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)129))) == 4)
		{
			goto IL_0221;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)129))) == 5)
		{
			goto IL_0319;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)129))) == 6)
		{
			goto IL_02b1;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)129))) == 7)
		{
			goto IL_02e7;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)129))) == 8)
		{
			goto IL_02ff;
		}
	}
	{
		goto IL_0319;
	}

IL_0046:
	{
		int32_t L_3 = __this->get_m_status_2();
		V_7 = (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_7;
		if (L_4)
		{
			goto IL_0165;
		}
	}
	{
		int32_t L_5 = ___ptr2;
		int32_t L_6 = ___payloadLength3;
		bool L_7 = NetConnection_ValidateHandshakeData_m3971068028(__this, L_5, L_6, (&V_0), /*hidden argument*/NULL);
		V_1 = L_7;
		bool L_8 = V_1;
		V_7 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_7;
		if (L_9)
		{
			goto IL_0160;
		}
	}
	{
		ByteU5BU5D_t3397334013* L_10 = V_0;
		V_7 = (bool)((((Il2CppObject*)(ByteU5BU5D_t3397334013*)L_10) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
		bool L_11 = V_7;
		if (L_11)
		{
			goto IL_00a8;
		}
	}
	{
		NetPeer_t1779390221 * L_12 = __this->get_m_peer_0();
		ByteU5BU5D_t3397334013* L_13 = V_0;
		NullCheck(L_12);
		NetIncomingMessage_t2014089816 * L_14 = NetPeer_CreateIncomingMessage_m1102215321(L_12, 8, L_13, /*hidden argument*/NULL);
		__this->set_m_remoteHailMessage_20(L_14);
		NetIncomingMessage_t2014089816 * L_15 = __this->get_m_remoteHailMessage_20();
		ByteU5BU5D_t3397334013* L_16 = V_0;
		NullCheck(L_16);
		NullCheck(L_15);
		NetBuffer_set_LengthBits_m2102256812(L_15, ((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_16)->max_length))))*(int32_t)8)), /*hidden argument*/NULL);
		goto IL_00b1;
	}

IL_00a8:
	{
		__this->set_m_remoteHailMessage_20((NetIncomingMessage_t2014089816 *)NULL);
	}

IL_00b1:
	{
		NetPeerConfiguration_t136603591 * L_17 = __this->get_m_peerConfiguration_1();
		NullCheck(L_17);
		bool L_18 = NetPeerConfiguration_IsMessageTypeEnabled_m1110774391(L_17, 4, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_7;
		if (L_19)
		{
			goto IL_0154;
		}
	}
	{
		NetPeer_t1779390221 * L_20 = __this->get_m_peer_0();
		NetIncomingMessage_t2014089816 * L_21 = __this->get_m_remoteHailMessage_20();
		G_B9_0 = 4;
		G_B9_1 = L_20;
		if (!L_21)
		{
			G_B10_0 = 4;
			G_B10_1 = L_20;
			goto IL_00e6;
		}
	}
	{
		NetIncomingMessage_t2014089816 * L_22 = __this->get_m_remoteHailMessage_20();
		NullCheck(L_22);
		int32_t L_23 = NetBuffer_get_LengthBytes_m2765088638(L_22, /*hidden argument*/NULL);
		G_B11_0 = L_23;
		G_B11_1 = G_B9_0;
		G_B11_2 = G_B9_1;
		goto IL_00e7;
	}

IL_00e6:
	{
		G_B11_0 = 0;
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
	}

IL_00e7:
	{
		NullCheck(G_B11_2);
		NetIncomingMessage_t2014089816 * L_24 = NetPeer_CreateIncomingMessage_m2109562735(G_B11_2, G_B11_1, G_B11_0, /*hidden argument*/NULL);
		V_2 = L_24;
		NetIncomingMessage_t2014089816 * L_25 = V_2;
		double L_26 = ___now0;
		NullCheck(L_25);
		L_25->set_m_receiveTime_11(L_26);
		NetIncomingMessage_t2014089816 * L_27 = V_2;
		NullCheck(L_27);
		L_27->set_m_senderConnection_7(__this);
		NetIncomingMessage_t2014089816 * L_28 = V_2;
		IPEndPoint_t2615413766 * L_29 = __this->get_m_remoteEndPoint_5();
		NullCheck(L_28);
		L_28->set_m_senderEndPoint_6(L_29);
		NetIncomingMessage_t2014089816 * L_30 = __this->get_m_remoteHailMessage_20();
		V_7 = (bool)((((Il2CppObject*)(NetIncomingMessage_t2014089816 *)L_30) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
		bool L_31 = V_7;
		if (L_31)
		{
			goto IL_0135;
		}
	}
	{
		NetIncomingMessage_t2014089816 * L_32 = V_2;
		NetIncomingMessage_t2014089816 * L_33 = __this->get_m_remoteHailMessage_20();
		NullCheck(L_33);
		ByteU5BU5D_t3397334013* L_34 = ((NetBuffer_t3608062491 *)L_33)->get_m_data_2();
		NetIncomingMessage_t2014089816 * L_35 = __this->get_m_remoteHailMessage_20();
		NullCheck(L_35);
		int32_t L_36 = NetBuffer_get_LengthBytes_m2765088638(L_35, /*hidden argument*/NULL);
		NullCheck(L_32);
		NetBuffer_Write_m3872681458(L_32, L_34, 0, L_36, /*hidden argument*/NULL);
	}

IL_0135:
	{
		NetConnection_SetStatus_m2040093136(__this, 3, _stringLiteral4231290937, /*hidden argument*/NULL);
		NetPeer_t1779390221 * L_37 = __this->get_m_peer_0();
		NetIncomingMessage_t2014089816 * L_38 = V_2;
		NullCheck(L_37);
		NetPeer_ReleaseMessage_m3520648965(L_37, L_38, /*hidden argument*/NULL);
		goto IL_035d;
	}

IL_0154:
	{
		double L_39 = ___now0;
		NetConnection_SendConnectResponse_m1494124902(__this, (((double)((double)(((float)((float)L_39)))))), (bool)1, /*hidden argument*/NULL);
	}

IL_0160:
	{
		goto IL_035d;
	}

IL_0165:
	{
		int32_t L_40 = __this->get_m_status_2();
		V_7 = (bool)((((int32_t)((((int32_t)L_40) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_41 = V_7;
		if (L_41)
		{
			goto IL_018e;
		}
	}
	{
		NetPeer_t1779390221 * L_42 = __this->get_m_peer_0();
		NullCheck(L_42);
		NetPeer_LogWarning_m3266657906(L_42, _stringLiteral3755334964, /*hidden argument*/NULL);
		goto IL_035d;
	}

IL_018e:
	{
		int32_t L_43 = __this->get_m_status_2();
		V_7 = (bool)((((int32_t)((((int32_t)L_43) == ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_44 = V_7;
		if (L_44)
		{
			goto IL_01b1;
		}
	}
	{
		double L_45 = ___now0;
		NetConnection_SendConnectResponse_m1494124902(__this, (((double)((double)(((float)((float)L_45)))))), (bool)1, /*hidden argument*/NULL);
		goto IL_035d;
	}

IL_01b1:
	{
		NetPeer_t1779390221 * L_46 = __this->get_m_peer_0();
		V_8 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)6));
		ObjectU5BU5D_t3614634134* L_47 = V_8;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, 0);
		ArrayElementTypeCheck (L_47, _stringLiteral2339958817);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral2339958817);
		ObjectU5BU5D_t3614634134* L_48 = V_8;
		uint8_t L_49 = ___tp1;
		uint8_t L_50 = L_49;
		Il2CppObject * L_51 = Box(NetMessageType_t191235414_il2cpp_TypeInfo_var, &L_50);
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, 1);
		ArrayElementTypeCheck (L_48, L_51);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_51);
		ObjectU5BU5D_t3614634134* L_52 = V_8;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, 2);
		ArrayElementTypeCheck (L_52, _stringLiteral1872536088);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral1872536088);
		ObjectU5BU5D_t3614634134* L_53 = V_8;
		int32_t L_54 = __this->get_m_status_2();
		int32_t L_55 = L_54;
		Il2CppObject * L_56 = Box(NetConnectionStatus_t952199027_il2cpp_TypeInfo_var, &L_55);
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, 3);
		ArrayElementTypeCheck (L_53, L_56);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_56);
		ObjectU5BU5D_t3614634134* L_57 = V_8;
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, 4);
		ArrayElementTypeCheck (L_57, _stringLiteral1791829564);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(4), (Il2CppObject *)_stringLiteral1791829564);
		ObjectU5BU5D_t3614634134* L_58 = V_8;
		int32_t L_59 = ___payloadLength3;
		int32_t L_60 = L_59;
		Il2CppObject * L_61 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_60);
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, 5);
		ArrayElementTypeCheck (L_58, L_61);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(5), (Il2CppObject *)L_61);
		ObjectU5BU5D_t3614634134* L_62 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_63 = String_Concat_m3881798623(NULL /*static, unused*/, L_62, /*hidden argument*/NULL);
		NullCheck(L_46);
		NetPeer_LogDebug_m2983960595(L_46, L_63, /*hidden argument*/NULL);
		goto IL_035d;
	}

IL_0210:
	{
		double L_64 = ___now0;
		uint8_t L_65 = ___tp1;
		int32_t L_66 = ___ptr2;
		int32_t L_67 = ___payloadLength3;
		NetConnection_HandleConnectResponse_m2887867750(__this, L_64, L_65, L_66, L_67, /*hidden argument*/NULL);
		goto IL_035d;
	}

IL_0221:
	{
		int32_t L_68 = __this->get_m_status_2();
		V_9 = L_68;
		int32_t L_69 = V_9;
		if (L_69 == 0)
		{
			goto IL_0254;
		}
		if (L_69 == 1)
		{
			goto IL_0258;
		}
		if (L_69 == 2)
		{
			goto IL_0256;
		}
		if (L_69 == 3)
		{
			goto IL_02ac;
		}
		if (L_69 == 4)
		{
			goto IL_025a;
		}
		if (L_69 == 5)
		{
			goto IL_0252;
		}
		if (L_69 == 6)
		{
			goto IL_0254;
		}
		if (L_69 == 7)
		{
			goto IL_0254;
		}
	}
	{
		goto IL_02ac;
	}

IL_0252:
	{
		goto IL_02ac;
	}

IL_0254:
	{
		goto IL_02ac;
	}

IL_0256:
	{
		goto IL_02ac;
	}

IL_0258:
	{
		goto IL_02ac;
	}

IL_025a:
	{
		NetPeer_t1779390221 * L_70 = __this->get_m_peer_0();
		int32_t L_71 = ___ptr2;
		int32_t L_72 = ___payloadLength3;
		NullCheck(L_70);
		NetIncomingMessage_t2014089816 * L_73 = NetPeer_SetupReadHelperMessage_m906183392(L_70, L_71, L_72, /*hidden argument*/NULL);
		V_3 = L_73;
		NetIncomingMessage_t2014089816 * L_74 = V_3;
		NullCheck(L_74);
		float L_75 = NetBuffer_ReadSingle_m2767420110(L_74, /*hidden argument*/NULL);
		NetConnection_InitializeRemoteTimeOffset_m4193429857(__this, L_75, /*hidden argument*/NULL);
		NetPeer_t1779390221 * L_76 = __this->get_m_peer_0();
		NullCheck(L_76);
		NetPeer_AcceptConnection_m1347999118(L_76, __this, /*hidden argument*/NULL);
		NetConnection_InitializePing_m1433079092(__this, /*hidden argument*/NULL);
		int64_t L_77 = __this->get_m_remoteUniqueIdentifier_9();
		IL2CPP_RUNTIME_CLASS_INIT(NetUtility_t3562260209_il2cpp_TypeInfo_var);
		String_t* L_78 = NetUtility_ToHexString_m433916538(NULL /*static, unused*/, L_77, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_79 = String_Concat_m2596409543(NULL /*static, unused*/, _stringLiteral246561994, L_78, /*hidden argument*/NULL);
		NetConnection_SetStatus_m2040093136(__this, 5, L_79, /*hidden argument*/NULL);
		goto IL_035d;
	}

IL_02ac:
	{
		goto IL_035d;
	}

IL_02b1:
	{
		V_4 = _stringLiteral4069224161;
	}

IL_02b8:
	try
	{ // begin try (depth: 1)
		NetPeer_t1779390221 * L_80 = __this->get_m_peer_0();
		int32_t L_81 = ___ptr2;
		int32_t L_82 = ___payloadLength3;
		NullCheck(L_80);
		NetIncomingMessage_t2014089816 * L_83 = NetPeer_SetupReadHelperMessage_m906183392(L_80, L_81, L_82, /*hidden argument*/NULL);
		V_5 = L_83;
		NetIncomingMessage_t2014089816 * L_84 = V_5;
		NullCheck(L_84);
		String_t* L_85 = NetBuffer_ReadString_m1223210798(L_84, /*hidden argument*/NULL);
		V_4 = L_85;
		goto IL_02da;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t1927440687 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Il2CppObject_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_02d5;
		throw e;
	}

CATCH_02d5:
	{ // begin catch(System.Object)
		goto IL_02da;
	} // end catch (depth: 1)

IL_02da:
	{
		String_t* L_86 = V_4;
		NetConnection_ExecuteDisconnect_m666203348(__this, L_86, (bool)0, /*hidden argument*/NULL);
		goto IL_035d;
	}

IL_02e7:
	{
		NetPeer_t1779390221 * L_87 = __this->get_m_peer_0();
		double L_88 = ___now0;
		IPEndPoint_t2615413766 * L_89 = __this->get_m_remoteEndPoint_5();
		int32_t L_90 = ___ptr2;
		int32_t L_91 = ___payloadLength3;
		NullCheck(L_87);
		NetPeer_HandleIncomingDiscoveryRequest_m4170027425(L_87, L_88, L_89, L_90, L_91, /*hidden argument*/NULL);
		goto IL_035d;
	}

IL_02ff:
	{
		NetPeer_t1779390221 * L_92 = __this->get_m_peer_0();
		double L_93 = ___now0;
		IPEndPoint_t2615413766 * L_94 = __this->get_m_remoteEndPoint_5();
		int32_t L_95 = ___ptr2;
		int32_t L_96 = ___payloadLength3;
		NullCheck(L_92);
		NetPeer_HandleIncomingDiscoveryResponse_m1395777003(L_92, L_93, L_94, L_95, L_96, /*hidden argument*/NULL);
		goto IL_035d;
	}

IL_0317:
	{
		goto IL_035d;
	}

IL_0319:
	{
		NetPeer_t1779390221 * L_97 = __this->get_m_peer_0();
		V_8 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)4));
		ObjectU5BU5D_t3614634134* L_98 = V_8;
		NullCheck(L_98);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_98, 0);
		ArrayElementTypeCheck (L_98, _stringLiteral1666295375);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral1666295375);
		ObjectU5BU5D_t3614634134* L_99 = V_8;
		uint8_t L_100 = ___tp1;
		uint8_t L_101 = L_100;
		Il2CppObject * L_102 = Box(NetMessageType_t191235414_il2cpp_TypeInfo_var, &L_101);
		NullCheck(L_99);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_99, 1);
		ArrayElementTypeCheck (L_99, L_102);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_102);
		ObjectU5BU5D_t3614634134* L_103 = V_8;
		NullCheck(L_103);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_103, 2);
		ArrayElementTypeCheck (L_103, _stringLiteral1791829564);
		(L_103)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral1791829564);
		ObjectU5BU5D_t3614634134* L_104 = V_8;
		int32_t L_105 = ___payloadLength3;
		int32_t L_106 = L_105;
		Il2CppObject * L_107 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_106);
		NullCheck(L_104);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_104, 3);
		ArrayElementTypeCheck (L_104, L_107);
		(L_104)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_107);
		ObjectU5BU5D_t3614634134* L_108 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_109 = String_Concat_m3881798623(NULL /*static, unused*/, L_108, /*hidden argument*/NULL);
		NullCheck(L_97);
		NetPeer_LogDebug_m2983960595(L_97, L_109, /*hidden argument*/NULL);
		goto IL_035d;
	}

IL_035d:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetConnection::HandleConnectResponse(System.Double,Lidgren.Network.NetMessageType,System.Int32,System.Int32)
extern "C"  void NetConnection_HandleConnectResponse_m2887867750 (NetConnection_t3331492029 * __this, double ___now0, uint8_t ___tp1, int32_t ___ptr2, int32_t ___payloadLength3, const MethodInfo* method)
{
	ByteU5BU5D_t3397334013* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		int32_t L_0 = __this->get_m_status_2();
		V_2 = L_0;
		int32_t L_1 = V_2;
		if (L_1 == 0)
		{
			goto IL_0098;
		}
		if (L_1 == 1)
		{
			goto IL_0030;
		}
		if (L_1 == 2)
		{
			goto IL_0098;
		}
		if (L_1 == 3)
		{
			goto IL_00a3;
		}
		if (L_1 == 4)
		{
			goto IL_0096;
		}
		if (L_1 == 5)
		{
			goto IL_009a;
		}
		if (L_1 == 6)
		{
			goto IL_0098;
		}
		if (L_1 == 7)
		{
			goto IL_0098;
		}
	}
	{
		goto IL_00a3;
	}

IL_0030:
	{
		int32_t L_2 = ___ptr2;
		int32_t L_3 = ___payloadLength3;
		bool L_4 = NetConnection_ValidateHandshakeData_m3971068028(__this, L_2, L_3, (&V_0), /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		V_3 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_3;
		if (L_6)
		{
			goto IL_0094;
		}
	}
	{
		ByteU5BU5D_t3397334013* L_7 = V_0;
		V_3 = (bool)((((Il2CppObject*)(ByteU5BU5D_t3397334013*)L_7) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
		bool L_8 = V_3;
		if (L_8)
		{
			goto IL_0075;
		}
	}
	{
		NetPeer_t1779390221 * L_9 = __this->get_m_peer_0();
		ByteU5BU5D_t3397334013* L_10 = V_0;
		NullCheck(L_9);
		NetIncomingMessage_t2014089816 * L_11 = NetPeer_CreateIncomingMessage_m1102215321(L_9, 8, L_10, /*hidden argument*/NULL);
		__this->set_m_remoteHailMessage_20(L_11);
		NetIncomingMessage_t2014089816 * L_12 = __this->get_m_remoteHailMessage_20();
		ByteU5BU5D_t3397334013* L_13 = V_0;
		NullCheck(L_13);
		NullCheck(L_12);
		NetBuffer_set_LengthBits_m2102256812(L_12, ((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_13)->max_length))))*(int32_t)8)), /*hidden argument*/NULL);
		goto IL_007e;
	}

IL_0075:
	{
		__this->set_m_remoteHailMessage_20((NetIncomingMessage_t2014089816 *)NULL);
	}

IL_007e:
	{
		NetPeer_t1779390221 * L_14 = __this->get_m_peer_0();
		NullCheck(L_14);
		NetPeer_AcceptConnection_m1347999118(L_14, __this, /*hidden argument*/NULL);
		NetConnection_SendConnectionEstablished_m3743151856(__this, /*hidden argument*/NULL);
		goto IL_00a3;
	}

IL_0094:
	{
		goto IL_00a3;
	}

IL_0096:
	{
		goto IL_00a3;
	}

IL_0098:
	{
		goto IL_00a3;
	}

IL_009a:
	{
		NetConnection_SendConnectionEstablished_m3743151856(__this, /*hidden argument*/NULL);
		goto IL_00a3;
	}

IL_00a3:
	{
		return;
	}
}
// System.Boolean Lidgren.Network.NetConnection::ValidateHandshakeData(System.Int32,System.Int32,System.Byte[]&)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Exception_t1927440687_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral88985751;
extern Il2CppCodeGenString* _stringLiteral569298411;
extern Il2CppCodeGenString* _stringLiteral3124240064;
extern const uint32_t NetConnection_ValidateHandshakeData_m3971068028_MetadataUsageId;
extern "C"  bool NetConnection_ValidateHandshakeData_m3971068028 (NetConnection_t3331492029 * __this, int32_t ___ptr0, int32_t ___payloadLength1, ByteU5BU5D_t3397334013** ___hail2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetConnection_ValidateHandshakeData_m3971068028_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	NetIncomingMessage_t2014089816 * V_0 = NULL;
	String_t* V_1 = NULL;
	int64_t V_2 = 0;
	int32_t V_3 = 0;
	Exception_t1927440687 * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ByteU5BU5D_t3397334013** L_0 = ___hail2;
		*((Il2CppObject **)(L_0)) = (Il2CppObject *)NULL;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_0), (Il2CppObject *)NULL);
		NetPeer_t1779390221 * L_1 = __this->get_m_peer_0();
		int32_t L_2 = ___ptr0;
		int32_t L_3 = ___payloadLength1;
		NullCheck(L_1);
		NetIncomingMessage_t2014089816 * L_4 = NetPeer_SetupReadHelperMessage_m906183392(L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			NetIncomingMessage_t2014089816 * L_5 = V_0;
			NullCheck(L_5);
			String_t* L_6 = NetBuffer_ReadString_m1223210798(L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			NetIncomingMessage_t2014089816 * L_7 = V_0;
			NullCheck(L_7);
			int64_t L_8 = NetBuffer_ReadInt64_m2415498424(L_7, /*hidden argument*/NULL);
			V_2 = L_8;
			NetIncomingMessage_t2014089816 * L_9 = V_0;
			NullCheck(L_9);
			float L_10 = NetBuffer_ReadSingle_m2767420110(L_9, /*hidden argument*/NULL);
			NetConnection_InitializeRemoteTimeOffset_m4193429857(__this, L_10, /*hidden argument*/NULL);
			int32_t L_11 = ___payloadLength1;
			NetIncomingMessage_t2014089816 * L_12 = V_0;
			NullCheck(L_12);
			int32_t L_13 = NetBuffer_get_PositionInBytes_m2104121730(L_12, /*hidden argument*/NULL);
			int32_t L_14 = ___ptr0;
			V_3 = ((int32_t)((int32_t)L_11-(int32_t)((int32_t)((int32_t)L_13-(int32_t)L_14))));
			int32_t L_15 = V_3;
			V_6 = (bool)((((int32_t)((((int32_t)L_15) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_16 = V_6;
			if (L_16)
			{
				goto IL_004f;
			}
		}

IL_0046:
		{
			ByteU5BU5D_t3397334013** L_17 = ___hail2;
			NetIncomingMessage_t2014089816 * L_18 = V_0;
			int32_t L_19 = V_3;
			NullCheck(L_18);
			ByteU5BU5D_t3397334013* L_20 = NetBuffer_ReadBytes_m4004009464(L_18, L_19, /*hidden argument*/NULL);
			*((Il2CppObject **)(L_17)) = (Il2CppObject *)L_20;
			Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_17), (Il2CppObject *)L_20);
		}

IL_004f:
		{
			String_t* L_21 = V_1;
			NetPeer_t1779390221 * L_22 = __this->get_m_peer_0();
			NullCheck(L_22);
			NetPeerConfiguration_t136603591 * L_23 = L_22->get_m_configuration_21();
			NullCheck(L_23);
			String_t* L_24 = NetPeerConfiguration_get_AppIdentifier_m1563815312(L_23, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_25 = String_op_Inequality_m304203149(NULL /*static, unused*/, L_21, L_24, /*hidden argument*/NULL);
			V_6 = (bool)((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
			bool L_26 = V_6;
			if (L_26)
			{
				goto IL_0081;
			}
		}

IL_006e:
		{
			NetConnection_ExecuteDisconnect_m666203348(__this, _stringLiteral88985751, (bool)1, /*hidden argument*/NULL);
			V_5 = (bool)0;
			goto IL_00c3;
		}

IL_0081:
		{
			int64_t L_27 = V_2;
			__this->set_m_remoteUniqueIdentifier_9(L_27);
			goto IL_00bd;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t1927440687 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t1927440687_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_008b;
		throw e;
	}

CATCH_008b:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t1927440687 *)__exception_local);
		NetConnection_ExecuteDisconnect_m666203348(__this, _stringLiteral569298411, (bool)1, /*hidden argument*/NULL);
		NetPeer_t1779390221 * L_28 = __this->get_m_peer_0();
		Exception_t1927440687 * L_29 = V_4;
		NullCheck(L_29);
		String_t* L_30 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_29);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_31 = String_Concat_m2596409543(NULL /*static, unused*/, _stringLiteral3124240064, L_30, /*hidden argument*/NULL);
		NullCheck(L_28);
		NetPeer_LogWarning_m3266657906(L_28, L_31, /*hidden argument*/NULL);
		V_5 = (bool)0;
		goto IL_00c3;
	} // end catch (depth: 1)

IL_00bd:
	{
		V_5 = (bool)1;
		goto IL_00c3;
	}

IL_00c3:
	{
		bool L_32 = V_5;
		return L_32;
	}
}
// System.Void Lidgren.Network.NetConnection::InitializeRemoteTimeOffset(System.Single)
extern Il2CppClass* NetTime_t3056501352_il2cpp_TypeInfo_var;
extern const uint32_t NetConnection_InitializeRemoteTimeOffset_m4193429857_MetadataUsageId;
extern "C"  void NetConnection_InitializeRemoteTimeOffset_m4193429857 (NetConnection_t3331492029 * __this, float ___remoteSendTime0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetConnection_InitializeRemoteTimeOffset_m4193429857_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___remoteSendTime0;
		double L_1 = __this->get_m_averageRoundtripTime_25();
		IL2CPP_RUNTIME_CLASS_INIT(NetTime_t3056501352_il2cpp_TypeInfo_var);
		double L_2 = NetTime_get_Now_m1609702533(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_remoteTimeOffset_27(((double)((double)((double)((double)(((double)((double)L_0)))+(double)((double)((double)L_1/(double)(2.0)))))-(double)L_2)));
		return;
	}
}
// System.Void Lidgren.Network.NetConnection::InitializePing()
extern Il2CppClass* NetTime_t3056501352_il2cpp_TypeInfo_var;
extern const uint32_t NetConnection_InitializePing_m1433079092_MetadataUsageId;
extern "C"  void NetConnection_InitializePing_m1433079092 (NetConnection_t3331492029 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetConnection_InitializePing_m1433079092_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetTime_t3056501352_il2cpp_TypeInfo_var);
		double L_0 = NetTime_get_Now_m1609702533(NULL /*static, unused*/, /*hidden argument*/NULL);
		NetPeerConfiguration_t136603591 * L_1 = __this->get_m_peerConfiguration_1();
		NullCheck(L_1);
		float L_2 = L_1->get_m_connectionTimeout_11();
		__this->set_m_timeoutDeadline_26(((double)((double)L_0+(double)((double)((double)(((double)((double)L_2)))*(double)(2.0))))));
		NetConnection_SendPing_m2389823252(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Lidgren.Network.NetConnection::SendPing()
extern Il2CppClass* NetTime_t3056501352_il2cpp_TypeInfo_var;
extern const uint32_t NetConnection_SendPing_m2389823252_MetadataUsageId;
extern "C"  void NetConnection_SendPing_m2389823252 (NetConnection_t3331492029 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetConnection_SendPing_m2389823252_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	NetOutgoingMessage_t2016542980 * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		NetPeer_t1779390221 * L_0 = __this->get_m_peer_0();
		NullCheck(L_0);
		NetPeer_VerifyNetworkThread_m4075953563(L_0, /*hidden argument*/NULL);
		int32_t L_1 = __this->get_m_sentPingNumber_24();
		__this->set_m_sentPingNumber_24(((int32_t)((int32_t)L_1+(int32_t)1)));
		IL2CPP_RUNTIME_CLASS_INIT(NetTime_t3056501352_il2cpp_TypeInfo_var);
		double L_2 = NetTime_get_Now_m1609702533(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_sentPingTime_23(L_2);
		NetPeer_t1779390221 * L_3 = __this->get_m_peer_0();
		NullCheck(L_3);
		NetOutgoingMessage_t2016542980 * L_4 = NetPeer_CreateMessage_m3328975762(L_3, 1, /*hidden argument*/NULL);
		V_0 = L_4;
		NetOutgoingMessage_t2016542980 * L_5 = V_0;
		int32_t L_6 = __this->get_m_sentPingNumber_24();
		NullCheck(L_5);
		NetBuffer_Write_m4142810212(L_5, (((int32_t)((uint8_t)L_6))), /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_7 = V_0;
		NullCheck(L_7);
		L_7->set_m_messageType_5(((int32_t)129));
		NetOutgoingMessage_t2016542980 * L_8 = V_0;
		NetPeer_t1779390221 * L_9 = __this->get_m_peer_0();
		NullCheck(L_9);
		ByteU5BU5D_t3397334013* L_10 = L_9->get_m_sendBuffer_11();
		NullCheck(L_8);
		int32_t L_11 = NetOutgoingMessage_Encode_m2473987076(L_8, L_10, 0, 0, /*hidden argument*/NULL);
		V_1 = L_11;
		NetPeer_t1779390221 * L_12 = __this->get_m_peer_0();
		int32_t L_13 = V_1;
		IPEndPoint_t2615413766 * L_14 = __this->get_m_remoteEndPoint_5();
		NullCheck(L_12);
		NetPeer_SendPacket_m625616909(L_12, L_13, L_14, 1, (&V_2), /*hidden argument*/NULL);
		NetConnectionStatistics_t1235765202 * L_15 = __this->get_m_statistics_14();
		int32_t L_16 = V_1;
		NullCheck(L_15);
		NetConnectionStatistics_PacketSent_m833909693(L_15, L_16, 1, /*hidden argument*/NULL);
		NetPeer_t1779390221 * L_17 = __this->get_m_peer_0();
		NetOutgoingMessage_t2016542980 * L_18 = V_0;
		NullCheck(L_17);
		NetPeer_Recycle_m2290156780(L_17, L_18, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Lidgren.Network.NetConnection::SendPong(System.Int32)
extern Il2CppClass* NetTime_t3056501352_il2cpp_TypeInfo_var;
extern const uint32_t NetConnection_SendPong_m2305285507_MetadataUsageId;
extern "C"  void NetConnection_SendPong_m2305285507 (NetConnection_t3331492029 * __this, int32_t ___pingNumber0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetConnection_SendPong_m2305285507_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	NetOutgoingMessage_t2016542980 * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		NetPeer_t1779390221 * L_0 = __this->get_m_peer_0();
		NullCheck(L_0);
		NetPeer_VerifyNetworkThread_m4075953563(L_0, /*hidden argument*/NULL);
		NetPeer_t1779390221 * L_1 = __this->get_m_peer_0();
		NullCheck(L_1);
		NetOutgoingMessage_t2016542980 * L_2 = NetPeer_CreateMessage_m3328975762(L_1, 5, /*hidden argument*/NULL);
		V_0 = L_2;
		NetOutgoingMessage_t2016542980 * L_3 = V_0;
		int32_t L_4 = ___pingNumber0;
		NullCheck(L_3);
		NetBuffer_Write_m4142810212(L_3, (((int32_t)((uint8_t)L_4))), /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(NetTime_t3056501352_il2cpp_TypeInfo_var);
		double L_6 = NetTime_get_Now_m1609702533(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		NetBuffer_Write_m2191092918(L_5, (((float)((float)L_6))), /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_7 = V_0;
		NullCheck(L_7);
		L_7->set_m_messageType_5(((int32_t)130));
		NetOutgoingMessage_t2016542980 * L_8 = V_0;
		NetPeer_t1779390221 * L_9 = __this->get_m_peer_0();
		NullCheck(L_9);
		ByteU5BU5D_t3397334013* L_10 = L_9->get_m_sendBuffer_11();
		NullCheck(L_8);
		int32_t L_11 = NetOutgoingMessage_Encode_m2473987076(L_8, L_10, 0, 0, /*hidden argument*/NULL);
		V_1 = L_11;
		NetPeer_t1779390221 * L_12 = __this->get_m_peer_0();
		int32_t L_13 = V_1;
		IPEndPoint_t2615413766 * L_14 = __this->get_m_remoteEndPoint_5();
		NullCheck(L_12);
		NetPeer_SendPacket_m625616909(L_12, L_13, L_14, 1, (&V_2), /*hidden argument*/NULL);
		NetConnectionStatistics_t1235765202 * L_15 = __this->get_m_statistics_14();
		int32_t L_16 = V_1;
		NullCheck(L_15);
		NetConnectionStatistics_PacketSent_m833909693(L_15, L_16, 1, /*hidden argument*/NULL);
		NetPeer_t1779390221 * L_17 = __this->get_m_peer_0();
		NetOutgoingMessage_t2016542980 * L_18 = V_0;
		NullCheck(L_17);
		NetPeer_Recycle_m2290156780(L_17, L_18, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Lidgren.Network.NetConnection::ReceivedPong(System.Double,System.Int32,System.Single)
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern Il2CppClass* NetTime_t3056501352_il2cpp_TypeInfo_var;
extern Il2CppClass* Double_t4078015681_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* NetReliableSenderChannel_t2899775811_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4245561682;
extern Il2CppCodeGenString* _stringLiteral1321227063;
extern Il2CppCodeGenString* _stringLiteral2416199701;
extern Il2CppCodeGenString* _stringLiteral3057783585;
extern Il2CppCodeGenString* _stringLiteral2075953382;
extern Il2CppCodeGenString* _stringLiteral272685891;
extern Il2CppCodeGenString* _stringLiteral372029317;
extern const uint32_t NetConnection_ReceivedPong_m1658356675_MetadataUsageId;
extern "C"  void NetConnection_ReceivedPong_m1658356675 (NetConnection_t3331492029 * __this, double ___now0, int32_t ___pongNumber1, float ___remoteSendTime2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetConnection_ReceivedPong_m1658356675_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	NetSenderChannelBase_t3096690204 * V_3 = NULL;
	NetReliableSenderChannel_t2899775811 * V_4 = NULL;
	NetIncomingMessage_t2014089816 * V_5 = NULL;
	bool V_6 = false;
	ObjectU5BU5D_t3614634134* V_7 = NULL;
	NetSenderChannelBaseU5BU5D_t470374901* V_8 = NULL;
	int32_t V_9 = 0;
	{
		int32_t L_0 = ___pongNumber1;
		int32_t L_1 = __this->get_m_sentPingNumber_24();
		V_6 = (bool)((((int32_t)(((int32_t)((uint8_t)L_0)))) == ((int32_t)(((int32_t)((uint8_t)L_1)))))? 1 : 0);
		bool L_2 = V_6;
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		NetPeer_t1779390221 * L_3 = __this->get_m_peer_0();
		NullCheck(L_3);
		NetPeer_LogVerbose_m3434660420(L_3, _stringLiteral4245561682, /*hidden argument*/NULL);
		goto IL_0241;
	}

IL_0029:
	{
		double L_4 = ___now0;
		NetPeerConfiguration_t136603591 * L_5 = __this->get_m_peerConfiguration_1();
		NullCheck(L_5);
		float L_6 = L_5->get_m_connectionTimeout_11();
		__this->set_m_timeoutDeadline_26(((double)((double)L_4+(double)(((double)((double)L_6))))));
		double L_7 = ___now0;
		double L_8 = __this->get_m_sentPingTime_23();
		V_0 = ((double)((double)L_7-(double)L_8));
		double L_9 = V_0;
		NetException_Assert_m1426298558(NULL /*static, unused*/, (bool)((((int32_t)((!(((double)L_9) >= ((double)(0.0))))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		float L_10 = ___remoteSendTime2;
		double L_11 = V_0;
		double L_12 = ___now0;
		V_1 = ((double)((double)((double)((double)(((double)((double)L_10)))+(double)((double)((double)L_11/(double)(2.0)))))-(double)L_12));
		double L_13 = __this->get_m_averageRoundtripTime_25();
		V_6 = (bool)((((int32_t)((((double)L_13) < ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_6;
		if (L_14)
		{
			goto IL_00e3;
		}
	}
	{
		double L_15 = V_1;
		__this->set_m_remoteTimeOffset_27(L_15);
		double L_16 = V_0;
		__this->set_m_averageRoundtripTime_25(L_16);
		NetPeer_t1779390221 * L_17 = __this->get_m_peer_0();
		V_7 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)4));
		ObjectU5BU5D_t3614634134* L_18 = V_7;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 0);
		ArrayElementTypeCheck (L_18, _stringLiteral1321227063);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral1321227063);
		ObjectU5BU5D_t3614634134* L_19 = V_7;
		double L_20 = __this->get_m_averageRoundtripTime_25();
		IL2CPP_RUNTIME_CLASS_INIT(NetTime_t3056501352_il2cpp_TypeInfo_var);
		String_t* L_21 = NetTime_ToReadable_m2326980775(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 1);
		ArrayElementTypeCheck (L_19, L_21);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_21);
		ObjectU5BU5D_t3614634134* L_22 = V_7;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, 2);
		ArrayElementTypeCheck (L_22, _stringLiteral2416199701);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral2416199701);
		ObjectU5BU5D_t3614634134* L_23 = V_7;
		double L_24 = ___now0;
		double L_25 = V_1;
		double L_26 = ((double)((double)L_24+(double)L_25));
		Il2CppObject * L_27 = Box(Double_t4078015681_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, 3);
		ArrayElementTypeCheck (L_23, L_27);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_27);
		ObjectU5BU5D_t3614634134* L_28 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_29 = String_Concat_m3881798623(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		NullCheck(L_17);
		NetPeer_LogDebug_m2983960595(L_17, L_29, /*hidden argument*/NULL);
		goto IL_0195;
	}

IL_00e3:
	{
		double L_30 = __this->get_m_averageRoundtripTime_25();
		double L_31 = V_0;
		__this->set_m_averageRoundtripTime_25(((double)((double)((double)((double)L_30*(double)(0.7)))+(double)((double)((double)L_31*(double)(0.3))))));
		double L_32 = __this->get_m_remoteTimeOffset_27();
		int32_t L_33 = __this->get_m_sentPingNumber_24();
		double L_34 = V_1;
		int32_t L_35 = __this->get_m_sentPingNumber_24();
		__this->set_m_remoteTimeOffset_27(((double)((double)((double)((double)((double)((double)L_32*(double)(((double)((double)((int32_t)((int32_t)L_33-(int32_t)1)))))))+(double)L_34))/(double)(((double)((double)L_35))))));
		NetPeer_t1779390221 * L_36 = __this->get_m_peer_0();
		V_7 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)7));
		ObjectU5BU5D_t3614634134* L_37 = V_7;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, 0);
		ArrayElementTypeCheck (L_37, _stringLiteral3057783585);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral3057783585);
		ObjectU5BU5D_t3614634134* L_38 = V_7;
		double L_39 = __this->get_m_averageRoundtripTime_25();
		IL2CPP_RUNTIME_CLASS_INIT(NetTime_t3056501352_il2cpp_TypeInfo_var);
		String_t* L_40 = NetTime_ToReadable_m2326980775(NULL /*static, unused*/, L_39, /*hidden argument*/NULL);
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, 1);
		ArrayElementTypeCheck (L_38, L_40);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_40);
		ObjectU5BU5D_t3614634134* L_41 = V_7;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, 2);
		ArrayElementTypeCheck (L_41, _stringLiteral2075953382);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral2075953382);
		ObjectU5BU5D_t3614634134* L_42 = V_7;
		double L_43 = ___now0;
		double L_44 = __this->get_m_remoteTimeOffset_27();
		double L_45 = ((double)((double)L_43+(double)L_44));
		Il2CppObject * L_46 = Box(Double_t4078015681_il2cpp_TypeInfo_var, &L_45);
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 3);
		ArrayElementTypeCheck (L_42, L_46);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_46);
		ObjectU5BU5D_t3614634134* L_47 = V_7;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, 4);
		ArrayElementTypeCheck (L_47, _stringLiteral272685891);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(4), (Il2CppObject *)_stringLiteral272685891);
		ObjectU5BU5D_t3614634134* L_48 = V_7;
		double L_49 = __this->get_m_remoteTimeOffset_27();
		double L_50 = L_49;
		Il2CppObject * L_51 = Box(Double_t4078015681_il2cpp_TypeInfo_var, &L_50);
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, 5);
		ArrayElementTypeCheck (L_48, L_51);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(5), (Il2CppObject *)L_51);
		ObjectU5BU5D_t3614634134* L_52 = V_7;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, 6);
		ArrayElementTypeCheck (L_52, _stringLiteral372029317);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(6), (Il2CppObject *)_stringLiteral372029317);
		ObjectU5BU5D_t3614634134* L_53 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_54 = String_Concat_m3881798623(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		NullCheck(L_36);
		NetPeer_LogVerbose_m3434660420(L_36, L_54, /*hidden argument*/NULL);
	}

IL_0195:
	{
		double L_55 = NetConnection_GetResendDelay_m601539877(__this, /*hidden argument*/NULL);
		V_2 = L_55;
		NetSenderChannelBaseU5BU5D_t470374901* L_56 = __this->get_m_sendChannels_6();
		V_8 = L_56;
		V_9 = 0;
		goto IL_01d3;
	}

IL_01aa:
	{
		NetSenderChannelBaseU5BU5D_t470374901* L_57 = V_8;
		int32_t L_58 = V_9;
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, L_58);
		int32_t L_59 = L_58;
		NetSenderChannelBase_t3096690204 * L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_3 = L_60;
		NetSenderChannelBase_t3096690204 * L_61 = V_3;
		V_4 = ((NetReliableSenderChannel_t2899775811 *)IsInstSealed(L_61, NetReliableSenderChannel_t2899775811_il2cpp_TypeInfo_var));
		NetReliableSenderChannel_t2899775811 * L_62 = V_4;
		V_6 = (bool)((((Il2CppObject*)(NetReliableSenderChannel_t2899775811 *)L_62) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
		bool L_63 = V_6;
		if (L_63)
		{
			goto IL_01cc;
		}
	}
	{
		NetReliableSenderChannel_t2899775811 * L_64 = V_4;
		double L_65 = V_2;
		NullCheck(L_64);
		L_64->set_m_resendDelay_8(L_65);
	}

IL_01cc:
	{
		int32_t L_66 = V_9;
		V_9 = ((int32_t)((int32_t)L_66+(int32_t)1));
	}

IL_01d3:
	{
		int32_t L_67 = V_9;
		NetSenderChannelBaseU5BU5D_t470374901* L_68 = V_8;
		NullCheck(L_68);
		V_6 = (bool)((((int32_t)L_67) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_68)->max_length))))))? 1 : 0);
		bool L_69 = V_6;
		if (L_69)
		{
			goto IL_01aa;
		}
	}
	{
		NetPeer_t1779390221 * L_70 = __this->get_m_peer_0();
		NullCheck(L_70);
		NetPeerConfiguration_t136603591 * L_71 = L_70->get_m_configuration_21();
		NullCheck(L_71);
		bool L_72 = NetPeerConfiguration_IsMessageTypeEnabled_m1110774391(L_71, ((int32_t)4096), /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)L_72) == ((int32_t)0))? 1 : 0);
		bool L_73 = V_6;
		if (L_73)
		{
			goto IL_0241;
		}
	}
	{
		NetPeer_t1779390221 * L_74 = __this->get_m_peer_0();
		NullCheck(L_74);
		NetIncomingMessage_t2014089816 * L_75 = NetPeer_CreateIncomingMessage_m2109562735(L_74, ((int32_t)4096), 4, /*hidden argument*/NULL);
		V_5 = L_75;
		NetIncomingMessage_t2014089816 * L_76 = V_5;
		NullCheck(L_76);
		L_76->set_m_senderConnection_7(__this);
		NetIncomingMessage_t2014089816 * L_77 = V_5;
		IPEndPoint_t2615413766 * L_78 = __this->get_m_remoteEndPoint_5();
		NullCheck(L_77);
		L_77->set_m_senderEndPoint_6(L_78);
		NetIncomingMessage_t2014089816 * L_79 = V_5;
		double L_80 = V_0;
		NullCheck(L_79);
		NetBuffer_Write_m2191092918(L_79, (((float)((float)L_80))), /*hidden argument*/NULL);
		NetPeer_t1779390221 * L_81 = __this->get_m_peer_0();
		NetIncomingMessage_t2014089816 * L_82 = V_5;
		NullCheck(L_81);
		NetPeer_ReleaseMessage_m3520648965(L_81, L_82, /*hidden argument*/NULL);
	}

IL_0241:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetConnection::InitExpandMTU(System.Double)
extern "C"  void NetConnection_InitExpandMTU_m3761872672 (NetConnection_t3331492029 * __this, double ___now0, const MethodInfo* method)
{
	{
		double L_0 = ___now0;
		NetPeerConfiguration_t136603591 * L_1 = __this->get_m_peerConfiguration_1();
		NullCheck(L_1);
		float L_2 = L_1->get_m_expandMTUFrequency_28();
		double L_3 = __this->get_m_averageRoundtripTime_25();
		__this->set_m_lastSentMTUAttemptTime_32(((double)((double)((double)((double)((double)((double)L_0+(double)(((double)((double)L_2)))))+(double)(1.5)))+(double)L_3)));
		__this->set_m_largestSuccessfulMTU_29(((int32_t)512));
		__this->set_m_smallestFailedMTU_30((-1));
		NetPeerConfiguration_t136603591 * L_4 = __this->get_m_peerConfiguration_1();
		NullCheck(L_4);
		int32_t L_5 = NetPeerConfiguration_get_MaximumTransmissionUnit_m2375210687(L_4, /*hidden argument*/NULL);
		__this->set_m_currentMTU_34(L_5);
		return;
	}
}
// System.Void Lidgren.Network.NetConnection::MTUExpansionHeartbeat(System.Double)
extern "C"  void NetConnection_MTUExpansionHeartbeat_m2691120475 (NetConnection_t3331492029 * __this, double ___now0, const MethodInfo* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_m_expandMTUStatus_28();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		goto IL_00b1;
	}

IL_0016:
	{
		int32_t L_2 = __this->get_m_expandMTUStatus_28();
		V_0 = (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (L_3)
		{
			goto IL_0050;
		}
	}
	{
		NetPeerConfiguration_t136603591 * L_4 = __this->get_m_peerConfiguration_1();
		NullCheck(L_4);
		bool L_5 = L_4->get_m_autoExpandMTU_27();
		V_0 = L_5;
		bool L_6 = V_0;
		if (L_6)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_7 = __this->get_m_currentMTU_34();
		NetConnection_FinalizeMTU_m2014645003(__this, L_7, /*hidden argument*/NULL);
		goto IL_00b1;
	}

IL_0046:
	{
		double L_8 = ___now0;
		NetConnection_ExpandMTU_m3901073334(__this, L_8, /*hidden argument*/NULL);
		goto IL_00b1;
	}

IL_0050:
	{
		double L_9 = ___now0;
		double L_10 = __this->get_m_lastSentMTUAttemptTime_32();
		NetPeerConfiguration_t136603591 * L_11 = __this->get_m_peerConfiguration_1();
		NullCheck(L_11);
		float L_12 = NetPeerConfiguration_get_ExpandMTUFrequency_m1301209541(L_11, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)((((double)L_9) > ((double)((double)((double)L_10+(double)(((double)((double)L_12)))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_0;
		if (L_13)
		{
			goto IL_00b1;
		}
	}
	{
		int32_t L_14 = __this->get_m_mtuAttemptFails_33();
		__this->set_m_mtuAttemptFails_33(((int32_t)((int32_t)L_14+(int32_t)1)));
		int32_t L_15 = __this->get_m_mtuAttemptFails_33();
		V_0 = (bool)((((int32_t)((((int32_t)L_15) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_0;
		if (L_16)
		{
			goto IL_009c;
		}
	}
	{
		int32_t L_17 = __this->get_m_currentMTU_34();
		NetConnection_FinalizeMTU_m2014645003(__this, L_17, /*hidden argument*/NULL);
		goto IL_00b1;
	}

IL_009c:
	{
		int32_t L_18 = __this->get_m_lastSentMTUAttemptSize_31();
		__this->set_m_smallestFailedMTU_30(L_18);
		double L_19 = ___now0;
		NetConnection_ExpandMTU_m3901073334(__this, L_19, /*hidden argument*/NULL);
	}

IL_00b1:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetConnection::ExpandMTU(System.Double)
extern "C"  void NetConnection_ExpandMTU_m3901073334 (NetConnection_t3331492029 * __this, double ___now0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->get_m_smallestFailedMTU_30();
		V_1 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (L_1)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = __this->get_m_currentMTU_34();
		V_0 = (((int32_t)((int32_t)((float)((float)(((float)((float)L_2)))*(float)(1.25f))))));
		goto IL_003d;
	}

IL_0024:
	{
		int32_t L_3 = __this->get_m_smallestFailedMTU_30();
		int32_t L_4 = __this->get_m_largestSuccessfulMTU_29();
		V_0 = (((int32_t)((int32_t)((float)((float)((float)((float)(((float)((float)L_3)))+(float)(((float)((float)L_4)))))/(float)(2.0f))))));
	}

IL_003d:
	{
		int32_t L_5 = V_0;
		V_1 = (bool)((((int32_t)((((int32_t)L_5) > ((int32_t)((int32_t)8190)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (L_6)
		{
			goto IL_0052;
		}
	}
	{
		V_0 = ((int32_t)8190);
	}

IL_0052:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = __this->get_m_largestSuccessfulMTU_29();
		V_1 = (bool)((((int32_t)((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_1;
		if (L_9)
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_10 = __this->get_m_largestSuccessfulMTU_29();
		NetConnection_FinalizeMTU_m2014645003(__this, L_10, /*hidden argument*/NULL);
		goto IL_007b;
	}

IL_0072:
	{
		double L_11 = ___now0;
		int32_t L_12 = V_0;
		NetConnection_SendExpandMTU_m2101316153(__this, L_11, L_12, /*hidden argument*/NULL);
	}

IL_007b:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetConnection::SendExpandMTU(System.Double,System.Int32)
extern Il2CppClass* ByteU5BU5D_t3397334013_il2cpp_TypeInfo_var;
extern const uint32_t NetConnection_SendExpandMTU_m2101316153_MetadataUsageId;
extern "C"  void NetConnection_SendExpandMTU_m2101316153 (NetConnection_t3331492029 * __this, double ___now0, int32_t ___size1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetConnection_SendExpandMTU_m2101316153_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	NetOutgoingMessage_t2016542980 * V_0 = NULL;
	ByteU5BU5D_t3397334013* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B4_0 = 0;
	{
		NetPeer_t1779390221 * L_0 = __this->get_m_peer_0();
		int32_t L_1 = ___size1;
		NullCheck(L_0);
		NetOutgoingMessage_t2016542980 * L_2 = NetPeer_CreateMessage_m3328975762(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = ___size1;
		V_1 = ((ByteU5BU5D_t3397334013*)SZArrayNew(ByteU5BU5D_t3397334013_il2cpp_TypeInfo_var, (uint32_t)L_3));
		NetOutgoingMessage_t2016542980 * L_4 = V_0;
		ByteU5BU5D_t3397334013* L_5 = V_1;
		NullCheck(L_4);
		NetBuffer_Write_m3595600516(L_4, L_5, /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_6 = V_0;
		NullCheck(L_6);
		L_6->set_m_messageType_5(((int32_t)140));
		NetOutgoingMessage_t2016542980 * L_7 = V_0;
		NetPeer_t1779390221 * L_8 = __this->get_m_peer_0();
		NullCheck(L_8);
		ByteU5BU5D_t3397334013* L_9 = L_8->get_m_sendBuffer_11();
		NullCheck(L_7);
		int32_t L_10 = NetOutgoingMessage_Encode_m2473987076(L_7, L_9, 0, 0, /*hidden argument*/NULL);
		V_2 = L_10;
		NetPeer_t1779390221 * L_11 = __this->get_m_peer_0();
		int32_t L_12 = V_2;
		IPEndPoint_t2615413766 * L_13 = __this->get_m_remoteEndPoint_5();
		NullCheck(L_11);
		bool L_14 = NetPeer_SendMTUPacket_m1323873705(L_11, L_12, L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		bool L_15 = V_3;
		V_4 = L_15;
		bool L_16 = V_4;
		if (L_16)
		{
			goto IL_00c0;
		}
	}
	{
		int32_t L_17 = __this->get_m_smallestFailedMTU_30();
		if ((((int32_t)L_17) == ((int32_t)(-1))))
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_18 = ___size1;
		int32_t L_19 = __this->get_m_smallestFailedMTU_30();
		G_B4_0 = ((((int32_t)((((int32_t)L_18) < ((int32_t)L_19))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_006f;
	}

IL_006e:
	{
		G_B4_0 = 0;
	}

IL_006f:
	{
		V_4 = (bool)G_B4_0;
		bool L_20 = V_4;
		if (L_20)
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_21 = ___size1;
		__this->set_m_smallestFailedMTU_30(L_21);
		int32_t L_22 = __this->get_m_mtuAttemptFails_33();
		__this->set_m_mtuAttemptFails_33(((int32_t)((int32_t)L_22+(int32_t)1)));
		int32_t L_23 = __this->get_m_mtuAttemptFails_33();
		NetPeerConfiguration_t136603591 * L_24 = __this->get_m_peerConfiguration_1();
		NullCheck(L_24);
		int32_t L_25 = NetPeerConfiguration_get_ExpandMTUFailAttempts_m2610030021(L_24, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)L_23) < ((int32_t)L_25))? 1 : 0);
		bool L_26 = V_4;
		if (L_26)
		{
			goto IL_00b5;
		}
	}
	{
		int32_t L_27 = __this->get_m_largestSuccessfulMTU_29();
		NetConnection_FinalizeMTU_m2014645003(__this, L_27, /*hidden argument*/NULL);
		goto IL_00e9;
	}

IL_00b5:
	{
	}

IL_00b6:
	{
		double L_28 = ___now0;
		NetConnection_ExpandMTU_m3901073334(__this, L_28, /*hidden argument*/NULL);
		goto IL_00e9;
	}

IL_00c0:
	{
		int32_t L_29 = ___size1;
		__this->set_m_lastSentMTUAttemptSize_31(L_29);
		double L_30 = ___now0;
		__this->set_m_lastSentMTUAttemptTime_32(L_30);
		NetConnectionStatistics_t1235765202 * L_31 = __this->get_m_statistics_14();
		int32_t L_32 = V_2;
		NullCheck(L_31);
		NetConnectionStatistics_PacketSent_m833909693(L_31, L_32, 1, /*hidden argument*/NULL);
		NetPeer_t1779390221 * L_33 = __this->get_m_peer_0();
		NetOutgoingMessage_t2016542980 * L_34 = V_0;
		NullCheck(L_33);
		NetPeer_Recycle_m2290156780(L_33, L_34, /*hidden argument*/NULL);
	}

IL_00e9:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetConnection::FinalizeMTU(System.Int32)
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1699947350;
extern Il2CppCodeGenString* _stringLiteral2058082297;
extern const uint32_t NetConnection_FinalizeMTU_m2014645003_MetadataUsageId;
extern "C"  void NetConnection_FinalizeMTU_m2014645003 (NetConnection_t3331492029 * __this, int32_t ___size0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetConnection_FinalizeMTU_m2014645003_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_m_expandMTUStatus_28();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		goto IL_0060;
	}

IL_0013:
	{
		__this->set_m_expandMTUStatus_28(2);
		int32_t L_2 = ___size0;
		__this->set_m_currentMTU_34(L_2);
		int32_t L_3 = __this->get_m_currentMTU_34();
		NetPeerConfiguration_t136603591 * L_4 = __this->get_m_peerConfiguration_1();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_m_maximumTransmissionUnit_26();
		V_0 = (bool)((((int32_t)L_3) == ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_0;
		if (L_6)
		{
			goto IL_005e;
		}
	}
	{
		NetPeer_t1779390221 * L_7 = __this->get_m_peer_0();
		int32_t L_8 = __this->get_m_currentMTU_34();
		int32_t L_9 = L_8;
		Il2CppObject * L_10 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m2000667605(NULL /*static, unused*/, _stringLiteral1699947350, L_10, _stringLiteral2058082297, /*hidden argument*/NULL);
		NullCheck(L_7);
		NetPeer_LogDebug_m2983960595(L_7, L_11, /*hidden argument*/NULL);
	}

IL_005e:
	{
		goto IL_0060;
	}

IL_0060:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetConnection::SendMTUSuccess(System.Int32)
extern "C"  void NetConnection_SendMTUSuccess_m827100686 (NetConnection_t3331492029 * __this, int32_t ___size0, const MethodInfo* method)
{
	NetOutgoingMessage_t2016542980 * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		NetPeer_t1779390221 * L_0 = __this->get_m_peer_0();
		NullCheck(L_0);
		NetOutgoingMessage_t2016542980 * L_1 = NetPeer_CreateMessage_m3328975762(L_0, 4, /*hidden argument*/NULL);
		V_0 = L_1;
		NetOutgoingMessage_t2016542980 * L_2 = V_0;
		int32_t L_3 = ___size0;
		NullCheck(L_2);
		NetBuffer_Write_m3675152492(L_2, L_3, /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_4 = V_0;
		NullCheck(L_4);
		L_4->set_m_messageType_5(((int32_t)141));
		NetOutgoingMessage_t2016542980 * L_5 = V_0;
		NetPeer_t1779390221 * L_6 = __this->get_m_peer_0();
		NullCheck(L_6);
		ByteU5BU5D_t3397334013* L_7 = L_6->get_m_sendBuffer_11();
		NullCheck(L_5);
		int32_t L_8 = NetOutgoingMessage_Encode_m2473987076(L_5, L_7, 0, 0, /*hidden argument*/NULL);
		V_1 = L_8;
		NetPeer_t1779390221 * L_9 = __this->get_m_peer_0();
		int32_t L_10 = V_1;
		IPEndPoint_t2615413766 * L_11 = __this->get_m_remoteEndPoint_5();
		NullCheck(L_9);
		NetPeer_SendPacket_m625616909(L_9, L_10, L_11, 1, (&V_2), /*hidden argument*/NULL);
		NetPeer_t1779390221 * L_12 = __this->get_m_peer_0();
		NetOutgoingMessage_t2016542980 * L_13 = V_0;
		NullCheck(L_12);
		NetPeer_Recycle_m2290156780(L_12, L_13, /*hidden argument*/NULL);
		NetConnectionStatistics_t1235765202 * L_14 = __this->get_m_statistics_14();
		int32_t L_15 = V_1;
		NullCheck(L_14);
		NetConnectionStatistics_PacketSent_m833909693(L_14, L_15, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Lidgren.Network.NetConnection::HandleExpandMTUSuccess(System.Double,System.Int32)
extern "C"  void NetConnection_HandleExpandMTUSuccess_m3820777494 (NetConnection_t3331492029 * __this, double ___now0, int32_t ___size1, const MethodInfo* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___size1;
		int32_t L_1 = __this->get_m_largestSuccessfulMTU_29();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___size1;
		__this->set_m_largestSuccessfulMTU_29(L_3);
	}

IL_0018:
	{
		int32_t L_4 = ___size1;
		int32_t L_5 = __this->get_m_currentMTU_34();
		V_0 = (bool)((((int32_t)((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_0;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		goto IL_003a;
	}

IL_002b:
	{
		int32_t L_7 = ___size1;
		__this->set_m_currentMTU_34(L_7);
		double L_8 = ___now0;
		NetConnection_ExpandMTU_m3901073334(__this, L_8, /*hidden argument*/NULL);
	}

IL_003a:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetConnectionStatistics::.ctor(Lidgren.Network.NetConnection)
extern "C"  void NetConnectionStatistics__ctor_m2288023573 (NetConnectionStatistics_t1235765202 * __this, NetConnection_t3331492029 * ___conn0, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		NetConnection_t3331492029 * L_0 = ___conn0;
		__this->set_m_connection_0(L_0);
		NetConnectionStatistics_Reset_m3876387378(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Lidgren.Network.NetConnectionStatistics::Reset()
extern "C"  void NetConnectionStatistics_Reset_m3876387378 (NetConnectionStatistics_t1235765202 * __this, const MethodInfo* method)
{
	{
		__this->set_m_sentPackets_1((((int64_t)((int64_t)0))));
		__this->set_m_receivedPackets_2((((int64_t)((int64_t)0))));
		__this->set_m_sentMessages_3((((int64_t)((int64_t)0))));
		__this->set_m_receivedMessages_4((((int64_t)((int64_t)0))));
		__this->set_m_receivedFragments_6((((int64_t)((int64_t)0))));
		__this->set_m_sentBytes_7((((int64_t)((int64_t)0))));
		__this->set_m_receivedBytes_8((((int64_t)((int64_t)0))));
		__this->set_m_resentMessagesDueToDelay_9((((int64_t)((int64_t)0))));
		__this->set_m_resentMessagesDueToHole_10((((int64_t)((int64_t)0))));
		return;
	}
}
// System.Void Lidgren.Network.NetConnectionStatistics::PacketSent(System.Int32,System.Int32)
extern "C"  void NetConnectionStatistics_PacketSent_m833909693 (NetConnectionStatistics_t1235765202 * __this, int32_t ___numBytes0, int32_t ___numMessages1, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___numBytes0;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___numMessages1;
		G_B3_0 = ((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 0;
	}

IL_000c:
	{
		NetException_Assert_m1426298558(NULL /*static, unused*/, (bool)G_B3_0, /*hidden argument*/NULL);
		int64_t L_2 = __this->get_m_sentPackets_1();
		__this->set_m_sentPackets_1(((int64_t)((int64_t)L_2+(int64_t)(((int64_t)((int64_t)1))))));
		int64_t L_3 = __this->get_m_sentBytes_7();
		int32_t L_4 = ___numBytes0;
		__this->set_m_sentBytes_7(((int64_t)((int64_t)L_3+(int64_t)(((int64_t)((int64_t)L_4))))));
		int64_t L_5 = __this->get_m_sentMessages_3();
		int32_t L_6 = ___numMessages1;
		__this->set_m_sentMessages_3(((int64_t)((int64_t)L_5+(int64_t)(((int64_t)((int64_t)L_6))))));
		return;
	}
}
// System.Void Lidgren.Network.NetConnectionStatistics::PacketReceived(System.Int32,System.Int32,System.Int32)
extern "C"  void NetConnectionStatistics_PacketReceived_m1973808183 (NetConnectionStatistics_t1235765202 * __this, int32_t ___numBytes0, int32_t ___numMessages1, int32_t ___numFragments2, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___numBytes0;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___numMessages1;
		G_B3_0 = ((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 0;
	}

IL_000c:
	{
		NetException_Assert_m1426298558(NULL /*static, unused*/, (bool)G_B3_0, /*hidden argument*/NULL);
		int64_t L_2 = __this->get_m_receivedPackets_2();
		__this->set_m_receivedPackets_2(((int64_t)((int64_t)L_2+(int64_t)(((int64_t)((int64_t)1))))));
		int64_t L_3 = __this->get_m_receivedBytes_8();
		int32_t L_4 = ___numBytes0;
		__this->set_m_receivedBytes_8(((int64_t)((int64_t)L_3+(int64_t)(((int64_t)((int64_t)L_4))))));
		int64_t L_5 = __this->get_m_receivedMessages_4();
		int32_t L_6 = ___numMessages1;
		__this->set_m_receivedMessages_4(((int64_t)((int64_t)L_5+(int64_t)(((int64_t)((int64_t)L_6))))));
		int64_t L_7 = __this->get_m_receivedFragments_6();
		int32_t L_8 = ___numFragments2;
		__this->set_m_receivedFragments_6(((int64_t)((int64_t)L_7+(int64_t)(((int64_t)((int64_t)L_8))))));
		return;
	}
}
// System.Void Lidgren.Network.NetConnectionStatistics::MessageResent(Lidgren.Network.MessageResendReason)
extern "C"  void NetConnectionStatistics_MessageResent_m3999886766 (NetConnectionStatistics_t1235765202 * __this, int32_t ___reason0, const MethodInfo* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___reason0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		int64_t L_2 = __this->get_m_resentMessagesDueToDelay_9();
		__this->set_m_resentMessagesDueToDelay_9(((int64_t)((int64_t)L_2+(int64_t)(((int64_t)((int64_t)1))))));
		goto IL_002c;
	}

IL_001d:
	{
		int64_t L_3 = __this->get_m_resentMessagesDueToHole_10();
		__this->set_m_resentMessagesDueToHole_10(((int64_t)((int64_t)L_3+(int64_t)(((int64_t)((int64_t)1))))));
	}

IL_002c:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetConnectionStatistics::MessageDropped()
extern "C"  void NetConnectionStatistics_MessageDropped_m4117327218 (NetConnectionStatistics_t1235765202 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = __this->get_m_droppedMessages_5();
		__this->set_m_droppedMessages_5(((int64_t)((int64_t)L_0+(int64_t)(((int64_t)((int64_t)1))))));
		return;
	}
}
// System.String Lidgren.Network.NetConnectionStatistics::ToString()
extern Il2CppClass* StringBuilder_t1221177846_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern Il2CppClass* Int64_t909078037_il2cpp_TypeInfo_var;
extern Il2CppClass* NetReliableSenderChannel_t2899775811_il2cpp_TypeInfo_var;
extern Il2CppClass* NetReliableOrderedReceiver_t2554037675_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3033998311;
extern Il2CppCodeGenString* _stringLiteral3611366396;
extern Il2CppCodeGenString* _stringLiteral3196969700;
extern Il2CppCodeGenString* _stringLiteral3895894051;
extern Il2CppCodeGenString* _stringLiteral2753271771;
extern Il2CppCodeGenString* _stringLiteral1174327339;
extern Il2CppCodeGenString* _stringLiteral688910150;
extern Il2CppCodeGenString* _stringLiteral3517506669;
extern Il2CppCodeGenString* _stringLiteral1060952548;
extern Il2CppCodeGenString* _stringLiteral3516013425;
extern Il2CppCodeGenString* _stringLiteral3507262861;
extern Il2CppCodeGenString* _stringLiteral2026179425;
extern Il2CppCodeGenString* _stringLiteral3188287249;
extern Il2CppCodeGenString* _stringLiteral3308454241;
extern Il2CppCodeGenString* _stringLiteral1628089849;
extern const uint32_t NetConnectionStatistics_ToString_m2368372030_MetadataUsageId;
extern "C"  String_t* NetConnectionStatistics_ToString_m2368372030 (NetConnectionStatistics_t1235765202 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetConnectionStatistics_ToString_m2368372030_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t1221177846 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	NetSenderChannelBase_t3096690204 * V_3 = NULL;
	NetReliableSenderChannel_t2899775811 * V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	NetReceiverChannelBase_t908288882 * V_7 = NULL;
	NetReliableOrderedReceiver_t2554037675 * V_8 = NULL;
	String_t* V_9 = NULL;
	ObjectU5BU5D_t3614634134* V_10 = NULL;
	bool V_11 = false;
	NetSenderChannelBaseU5BU5D_t470374901* V_12 = NULL;
	int32_t V_13 = 0;
	NetReceiverChannelBaseU5BU5D_t1250440839* V_14 = NULL;
	{
		StringBuilder_t1221177846 * L_0 = (StringBuilder_t1221177846 *)il2cpp_codegen_object_new(StringBuilder_t1221177846_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3946851802(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringBuilder_t1221177846 * L_1 = V_0;
		NetConnection_t3331492029 * L_2 = __this->get_m_connection_0();
		NullCheck(L_2);
		int32_t L_3 = L_2->get_m_currentMTU_34();
		int32_t L_4 = L_3;
		Il2CppObject * L_5 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral3033998311, L_5, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_AppendLine_m2033101329(L_1, L_6, /*hidden argument*/NULL);
		StringBuilder_t1221177846 * L_7 = V_0;
		V_10 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)7));
		ObjectU5BU5D_t3614634134* L_8 = V_10;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		ArrayElementTypeCheck (L_8, _stringLiteral3611366396);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral3611366396);
		ObjectU5BU5D_t3614634134* L_9 = V_10;
		int64_t L_10 = __this->get_m_sentBytes_7();
		int64_t L_11 = L_10;
		Il2CppObject * L_12 = Box(Int64_t909078037_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 1);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_12);
		ObjectU5BU5D_t3614634134* L_13 = V_10;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 2);
		ArrayElementTypeCheck (L_13, _stringLiteral3196969700);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral3196969700);
		ObjectU5BU5D_t3614634134* L_14 = V_10;
		int64_t L_15 = __this->get_m_sentMessages_3();
		int64_t L_16 = L_15;
		Il2CppObject * L_17 = Box(Int64_t909078037_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 3);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_17);
		ObjectU5BU5D_t3614634134* L_18 = V_10;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 4);
		ArrayElementTypeCheck (L_18, _stringLiteral3895894051);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(4), (Il2CppObject *)_stringLiteral3895894051);
		ObjectU5BU5D_t3614634134* L_19 = V_10;
		int64_t L_20 = __this->get_m_sentPackets_1();
		int64_t L_21 = L_20;
		Il2CppObject * L_22 = Box(Int64_t909078037_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 5);
		ArrayElementTypeCheck (L_19, L_22);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(5), (Il2CppObject *)L_22);
		ObjectU5BU5D_t3614634134* L_23 = V_10;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, 6);
		ArrayElementTypeCheck (L_23, _stringLiteral2753271771);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(6), (Il2CppObject *)_stringLiteral2753271771);
		ObjectU5BU5D_t3614634134* L_24 = V_10;
		String_t* L_25 = String_Concat_m3881798623(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		NullCheck(L_7);
		StringBuilder_AppendLine_m2033101329(L_7, L_25, /*hidden argument*/NULL);
		StringBuilder_t1221177846 * L_26 = V_0;
		V_10 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9)));
		ObjectU5BU5D_t3614634134* L_27 = V_10;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, 0);
		ArrayElementTypeCheck (L_27, _stringLiteral1174327339);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral1174327339);
		ObjectU5BU5D_t3614634134* L_28 = V_10;
		int64_t L_29 = __this->get_m_receivedBytes_8();
		int64_t L_30 = L_29;
		Il2CppObject * L_31 = Box(Int64_t909078037_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 1);
		ArrayElementTypeCheck (L_28, L_31);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_31);
		ObjectU5BU5D_t3614634134* L_32 = V_10;
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 2);
		ArrayElementTypeCheck (L_32, _stringLiteral3196969700);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral3196969700);
		ObjectU5BU5D_t3614634134* L_33 = V_10;
		int64_t L_34 = __this->get_m_receivedMessages_4();
		int64_t L_35 = L_34;
		Il2CppObject * L_36 = Box(Int64_t909078037_il2cpp_TypeInfo_var, &L_35);
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, 3);
		ArrayElementTypeCheck (L_33, L_36);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_36);
		ObjectU5BU5D_t3614634134* L_37 = V_10;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, 4);
		ArrayElementTypeCheck (L_37, _stringLiteral688910150);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(4), (Il2CppObject *)_stringLiteral688910150);
		ObjectU5BU5D_t3614634134* L_38 = V_10;
		int64_t L_39 = __this->get_m_receivedFragments_6();
		int64_t L_40 = L_39;
		Il2CppObject * L_41 = Box(Int64_t909078037_il2cpp_TypeInfo_var, &L_40);
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, 5);
		ArrayElementTypeCheck (L_38, L_41);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(5), (Il2CppObject *)L_41);
		ObjectU5BU5D_t3614634134* L_42 = V_10;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 6);
		ArrayElementTypeCheck (L_42, _stringLiteral3517506669);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(6), (Il2CppObject *)_stringLiteral3517506669);
		ObjectU5BU5D_t3614634134* L_43 = V_10;
		int64_t L_44 = __this->get_m_receivedPackets_2();
		int64_t L_45 = L_44;
		Il2CppObject * L_46 = Box(Int64_t909078037_il2cpp_TypeInfo_var, &L_45);
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, 7);
		ArrayElementTypeCheck (L_43, L_46);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(7), (Il2CppObject *)L_46);
		ObjectU5BU5D_t3614634134* L_47 = V_10;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, 8);
		ArrayElementTypeCheck (L_47, _stringLiteral2753271771);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(8), (Il2CppObject *)_stringLiteral2753271771);
		ObjectU5BU5D_t3614634134* L_48 = V_10;
		String_t* L_49 = String_Concat_m3881798623(NULL /*static, unused*/, L_48, /*hidden argument*/NULL);
		NullCheck(L_26);
		StringBuilder_AppendLine_m2033101329(L_26, L_49, /*hidden argument*/NULL);
		StringBuilder_t1221177846 * L_50 = V_0;
		int64_t L_51 = __this->get_m_droppedMessages_5();
		int64_t L_52 = L_51;
		Il2CppObject * L_53 = Box(Int64_t909078037_il2cpp_TypeInfo_var, &L_52);
		String_t* L_54 = String_Concat_m2000667605(NULL /*static, unused*/, _stringLiteral1060952548, L_53, _stringLiteral3516013425, /*hidden argument*/NULL);
		NullCheck(L_50);
		StringBuilder_AppendLine_m2033101329(L_50, L_54, /*hidden argument*/NULL);
		int64_t L_55 = __this->get_m_resentMessagesDueToDelay_9();
		V_11 = (bool)((((int32_t)((((int64_t)L_55) > ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_56 = V_11;
		if (L_56)
		{
			goto IL_015f;
		}
	}
	{
		StringBuilder_t1221177846 * L_57 = V_0;
		int64_t L_58 = __this->get_m_resentMessagesDueToDelay_9();
		int64_t L_59 = L_58;
		Il2CppObject * L_60 = Box(Int64_t909078037_il2cpp_TypeInfo_var, &L_59);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_61 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral3507262861, L_60, /*hidden argument*/NULL);
		NullCheck(L_57);
		StringBuilder_AppendLine_m2033101329(L_57, L_61, /*hidden argument*/NULL);
	}

IL_015f:
	{
		int64_t L_62 = __this->get_m_resentMessagesDueToHole_10();
		V_11 = (bool)((((int32_t)((((int64_t)L_62) > ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_63 = V_11;
		if (L_63)
		{
			goto IL_018e;
		}
	}
	{
		StringBuilder_t1221177846 * L_64 = V_0;
		int64_t L_65 = __this->get_m_resentMessagesDueToHole_10();
		int64_t L_66 = L_65;
		Il2CppObject * L_67 = Box(Int64_t909078037_il2cpp_TypeInfo_var, &L_66);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_68 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral2026179425, L_67, /*hidden argument*/NULL);
		NullCheck(L_64);
		StringBuilder_AppendLine_m2033101329(L_64, L_68, /*hidden argument*/NULL);
	}

IL_018e:
	{
		V_1 = 0;
		V_2 = 0;
		NetConnection_t3331492029 * L_69 = __this->get_m_connection_0();
		NullCheck(L_69);
		NetSenderChannelBaseU5BU5D_t470374901* L_70 = L_69->get_m_sendChannels_6();
		V_12 = L_70;
		V_13 = 0;
		goto IL_021e;
	}

IL_01a5:
	{
		NetSenderChannelBaseU5BU5D_t470374901* L_71 = V_12;
		int32_t L_72 = V_13;
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, L_72);
		int32_t L_73 = L_72;
		NetSenderChannelBase_t3096690204 * L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		V_3 = L_74;
		NetSenderChannelBase_t3096690204 * L_75 = V_3;
		V_11 = (bool)((((int32_t)((((Il2CppObject*)(NetSenderChannelBase_t3096690204 *)L_75) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_76 = V_11;
		if (L_76)
		{
			goto IL_01bb;
		}
	}
	{
		goto IL_0218;
	}

IL_01bb:
	{
		int32_t L_77 = V_1;
		NetSenderChannelBase_t3096690204 * L_78 = V_3;
		NullCheck(L_78);
		int32_t L_79 = NetSenderChannelBase_get_QueuedSendsCount_m1530659097(L_78, /*hidden argument*/NULL);
		V_1 = ((int32_t)((int32_t)L_77+(int32_t)L_79));
		NetSenderChannelBase_t3096690204 * L_80 = V_3;
		V_4 = ((NetReliableSenderChannel_t2899775811 *)IsInstSealed(L_80, NetReliableSenderChannel_t2899775811_il2cpp_TypeInfo_var));
		NetReliableSenderChannel_t2899775811 * L_81 = V_4;
		V_11 = (bool)((((Il2CppObject*)(NetReliableSenderChannel_t2899775811 *)L_81) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
		bool L_82 = V_11;
		if (L_82)
		{
			goto IL_0217;
		}
	}
	{
		V_5 = 0;
		goto IL_0203;
	}

IL_01dd:
	{
		NetReliableSenderChannel_t2899775811 * L_83 = V_4;
		NullCheck(L_83);
		NetStoredReliableMessageU5BU5D_t4079791060* L_84 = L_83->get_m_storedMessages_7();
		int32_t L_85 = V_5;
		NullCheck(L_84);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_84, L_85);
		NetOutgoingMessage_t2016542980 * L_86 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->get_Message_2();
		V_11 = (bool)((((Il2CppObject*)(NetOutgoingMessage_t2016542980 *)L_86) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
		bool L_87 = V_11;
		if (L_87)
		{
			goto IL_01fd;
		}
	}
	{
		int32_t L_88 = V_2;
		V_2 = ((int32_t)((int32_t)L_88+(int32_t)1));
	}

IL_01fd:
	{
		int32_t L_89 = V_5;
		V_5 = ((int32_t)((int32_t)L_89+(int32_t)1));
	}

IL_0203:
	{
		int32_t L_90 = V_5;
		NetReliableSenderChannel_t2899775811 * L_91 = V_4;
		NullCheck(L_91);
		NetStoredReliableMessageU5BU5D_t4079791060* L_92 = L_91->get_m_storedMessages_7();
		NullCheck(L_92);
		V_11 = (bool)((((int32_t)L_90) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_92)->max_length))))))? 1 : 0);
		bool L_93 = V_11;
		if (L_93)
		{
			goto IL_01dd;
		}
	}
	{
	}

IL_0217:
	{
	}

IL_0218:
	{
		int32_t L_94 = V_13;
		V_13 = ((int32_t)((int32_t)L_94+(int32_t)1));
	}

IL_021e:
	{
		int32_t L_95 = V_13;
		NetSenderChannelBaseU5BU5D_t470374901* L_96 = V_12;
		NullCheck(L_96);
		V_11 = (bool)((((int32_t)L_95) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_96)->max_length))))))? 1 : 0);
		bool L_97 = V_11;
		if (L_97)
		{
			goto IL_01a5;
		}
	}
	{
		V_6 = 0;
		NetConnection_t3331492029 * L_98 = __this->get_m_connection_0();
		NullCheck(L_98);
		NetReceiverChannelBaseU5BU5D_t1250440839* L_99 = L_98->get_m_receiveChannels_7();
		V_14 = L_99;
		V_13 = 0;
		goto IL_02a1;
	}

IL_0245:
	{
		NetReceiverChannelBaseU5BU5D_t1250440839* L_100 = V_14;
		int32_t L_101 = V_13;
		NullCheck(L_100);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_100, L_101);
		int32_t L_102 = L_101;
		NetReceiverChannelBase_t908288882 * L_103 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		V_7 = L_103;
		NetReceiverChannelBase_t908288882 * L_104 = V_7;
		V_8 = ((NetReliableOrderedReceiver_t2554037675 *)IsInstSealed(L_104, NetReliableOrderedReceiver_t2554037675_il2cpp_TypeInfo_var));
		NetReliableOrderedReceiver_t2554037675 * L_105 = V_8;
		V_11 = (bool)((((Il2CppObject*)(NetReliableOrderedReceiver_t2554037675 *)L_105) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
		bool L_106 = V_11;
		if (L_106)
		{
			goto IL_029a;
		}
	}
	{
		V_5 = 0;
		goto IL_0286;
	}

IL_0267:
	{
		NetReliableOrderedReceiver_t2554037675 * L_107 = V_8;
		NullCheck(L_107);
		NetIncomingMessageU5BU5D_t827121993* L_108 = L_107->get_m_withheldMessages_5();
		int32_t L_109 = V_5;
		NullCheck(L_108);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_108, L_109);
		int32_t L_110 = L_109;
		NetIncomingMessage_t2014089816 * L_111 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		V_11 = (bool)((((Il2CppObject*)(NetIncomingMessage_t2014089816 *)L_111) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
		bool L_112 = V_11;
		if (L_112)
		{
			goto IL_0280;
		}
	}
	{
		int32_t L_113 = V_6;
		V_6 = ((int32_t)((int32_t)L_113+(int32_t)1));
	}

IL_0280:
	{
		int32_t L_114 = V_5;
		V_5 = ((int32_t)((int32_t)L_114+(int32_t)1));
	}

IL_0286:
	{
		int32_t L_115 = V_5;
		NetReliableOrderedReceiver_t2554037675 * L_116 = V_8;
		NullCheck(L_116);
		NetIncomingMessageU5BU5D_t827121993* L_117 = L_116->get_m_withheldMessages_5();
		NullCheck(L_117);
		V_11 = (bool)((((int32_t)L_115) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_117)->max_length))))))? 1 : 0);
		bool L_118 = V_11;
		if (L_118)
		{
			goto IL_0267;
		}
	}
	{
	}

IL_029a:
	{
		int32_t L_119 = V_13;
		V_13 = ((int32_t)((int32_t)L_119+(int32_t)1));
	}

IL_02a1:
	{
		int32_t L_120 = V_13;
		NetReceiverChannelBaseU5BU5D_t1250440839* L_121 = V_14;
		NullCheck(L_121);
		V_11 = (bool)((((int32_t)L_120) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_121)->max_length))))))? 1 : 0);
		bool L_122 = V_11;
		if (L_122)
		{
			goto IL_0245;
		}
	}
	{
		StringBuilder_t1221177846 * L_123 = V_0;
		int32_t L_124 = V_1;
		int32_t L_125 = L_124;
		Il2CppObject * L_126 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_125);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_127 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral3188287249, L_126, /*hidden argument*/NULL);
		NullCheck(L_123);
		StringBuilder_AppendLine_m2033101329(L_123, L_127, /*hidden argument*/NULL);
		StringBuilder_t1221177846 * L_128 = V_0;
		int32_t L_129 = V_2;
		int32_t L_130 = L_129;
		Il2CppObject * L_131 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_130);
		String_t* L_132 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral3308454241, L_131, /*hidden argument*/NULL);
		NullCheck(L_128);
		StringBuilder_AppendLine_m2033101329(L_128, L_132, /*hidden argument*/NULL);
		StringBuilder_t1221177846 * L_133 = V_0;
		int32_t L_134 = V_6;
		int32_t L_135 = L_134;
		Il2CppObject * L_136 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_135);
		String_t* L_137 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral1628089849, L_136, /*hidden argument*/NULL);
		NullCheck(L_133);
		StringBuilder_AppendLine_m2033101329(L_133, L_137, /*hidden argument*/NULL);
		StringBuilder_t1221177846 * L_138 = V_0;
		NullCheck(L_138);
		String_t* L_139 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_138);
		V_9 = L_139;
		goto IL_02ff;
	}

IL_02ff:
	{
		String_t* L_140 = V_9;
		return L_140;
	}
}
// System.Void Lidgren.Network.NetException::.ctor()
extern "C"  void NetException__ctor_m407345561 (NetException_t2452891498 * __this, const MethodInfo* method)
{
	{
		Exception__ctor_m3886110570(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Lidgren.Network.NetException::.ctor(System.String)
extern "C"  void NetException__ctor_m2724322251 (NetException_t2452891498 * __this, String_t* ___message0, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message0;
		Exception__ctor_m485833136(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Lidgren.Network.NetException::Assert(System.Boolean,System.String)
extern Il2CppClass* NetException_t2452891498_il2cpp_TypeInfo_var;
extern const uint32_t NetException_Assert_m1067120882_MetadataUsageId;
extern "C"  void NetException_Assert_m1067120882 (Il2CppObject * __this /* static, unused */, bool ___isOk0, String_t* ___message1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetException_Assert_m1067120882_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = ___isOk0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_2 = ___message1;
		NetException_t2452891498 * L_3 = (NetException_t2452891498 *)il2cpp_codegen_object_new(NetException_t2452891498_il2cpp_TypeInfo_var);
		NetException__ctor_m2724322251(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_000d:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetException::Assert(System.Boolean)
extern Il2CppClass* NetException_t2452891498_il2cpp_TypeInfo_var;
extern const uint32_t NetException_Assert_m1426298558_MetadataUsageId;
extern "C"  void NetException_Assert_m1426298558 (Il2CppObject * __this /* static, unused */, bool ___isOk0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetException_Assert_m1426298558_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = ___isOk0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		NetException_t2452891498 * L_2 = (NetException_t2452891498 *)il2cpp_codegen_object_new(NetException_t2452891498_il2cpp_TypeInfo_var);
		NetException__ctor_m407345561(L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_000c:
	{
		return;
	}
}
// System.Int32 Lidgren.Network.NetFragmentationHelper::WriteHeader(System.Byte[],System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t NetFragmentationHelper_WriteHeader_m2245683411 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___destination0, int32_t ___ptr1, int32_t ___group2, int32_t ___totalBits3, int32_t ___chunkByteSize4, int32_t ___chunkNumber5, const MethodInfo* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	{
		int32_t L_0 = ___group2;
		V_0 = L_0;
		goto IL_001b;
	}

IL_0005:
	{
		ByteU5BU5D_t3397334013* L_1 = ___destination0;
		int32_t L_2 = ___ptr1;
		int32_t L_3 = L_2;
		___ptr1 = ((int32_t)((int32_t)L_3+(int32_t)1));
		uint32_t L_4 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)128)))))));
		uint32_t L_5 = V_0;
		V_0 = ((int32_t)((uint32_t)L_5>>7));
	}

IL_001b:
	{
		uint32_t L_6 = V_0;
		V_5 = (bool)((((int32_t)((!(((uint32_t)L_6) >= ((uint32_t)((int32_t)128))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_5;
		if (L_7)
		{
			goto IL_0005;
		}
	}
	{
		ByteU5BU5D_t3397334013* L_8 = ___destination0;
		int32_t L_9 = ___ptr1;
		int32_t L_10 = L_9;
		___ptr1 = ((int32_t)((int32_t)L_10+(int32_t)1));
		uint32_t L_11 = V_0;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint8_t)(((int32_t)((uint8_t)L_11))));
		int32_t L_12 = ___totalBits3;
		V_1 = L_12;
		goto IL_0050;
	}

IL_003a:
	{
		ByteU5BU5D_t3397334013* L_13 = ___destination0;
		int32_t L_14 = ___ptr1;
		int32_t L_15 = L_14;
		___ptr1 = ((int32_t)((int32_t)L_15+(int32_t)1));
		uint32_t L_16 = V_1;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_16|(int32_t)((int32_t)128)))))));
		uint32_t L_17 = V_1;
		V_1 = ((int32_t)((uint32_t)L_17>>7));
	}

IL_0050:
	{
		uint32_t L_18 = V_1;
		V_5 = (bool)((((int32_t)((!(((uint32_t)L_18) >= ((uint32_t)((int32_t)128))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_5;
		if (L_19)
		{
			goto IL_003a;
		}
	}
	{
		ByteU5BU5D_t3397334013* L_20 = ___destination0;
		int32_t L_21 = ___ptr1;
		int32_t L_22 = L_21;
		___ptr1 = ((int32_t)((int32_t)L_22+(int32_t)1));
		uint32_t L_23 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (uint8_t)(((int32_t)((uint8_t)L_23))));
		int32_t L_24 = ___chunkByteSize4;
		V_2 = L_24;
		goto IL_0086;
	}

IL_0070:
	{
		ByteU5BU5D_t3397334013* L_25 = ___destination0;
		int32_t L_26 = ___ptr1;
		int32_t L_27 = L_26;
		___ptr1 = ((int32_t)((int32_t)L_27+(int32_t)1));
		uint32_t L_28 = V_2;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_27);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_28|(int32_t)((int32_t)128)))))));
		uint32_t L_29 = V_2;
		V_2 = ((int32_t)((uint32_t)L_29>>7));
	}

IL_0086:
	{
		uint32_t L_30 = V_2;
		V_5 = (bool)((((int32_t)((!(((uint32_t)L_30) >= ((uint32_t)((int32_t)128))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_5;
		if (L_31)
		{
			goto IL_0070;
		}
	}
	{
		ByteU5BU5D_t3397334013* L_32 = ___destination0;
		int32_t L_33 = ___ptr1;
		int32_t L_34 = L_33;
		___ptr1 = ((int32_t)((int32_t)L_34+(int32_t)1));
		uint32_t L_35 = V_2;
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, L_34);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (uint8_t)(((int32_t)((uint8_t)L_35))));
		int32_t L_36 = ___chunkNumber5;
		V_3 = L_36;
		goto IL_00bc;
	}

IL_00a6:
	{
		ByteU5BU5D_t3397334013* L_37 = ___destination0;
		int32_t L_38 = ___ptr1;
		int32_t L_39 = L_38;
		___ptr1 = ((int32_t)((int32_t)L_39+(int32_t)1));
		uint32_t L_40 = V_3;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, L_39);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_39), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_40|(int32_t)((int32_t)128)))))));
		uint32_t L_41 = V_3;
		V_3 = ((int32_t)((uint32_t)L_41>>7));
	}

IL_00bc:
	{
		uint32_t L_42 = V_3;
		V_5 = (bool)((((int32_t)((!(((uint32_t)L_42) >= ((uint32_t)((int32_t)128))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_43 = V_5;
		if (L_43)
		{
			goto IL_00a6;
		}
	}
	{
		ByteU5BU5D_t3397334013* L_44 = ___destination0;
		int32_t L_45 = ___ptr1;
		int32_t L_46 = L_45;
		___ptr1 = ((int32_t)((int32_t)L_46+(int32_t)1));
		uint32_t L_47 = V_3;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_46);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (uint8_t)(((int32_t)((uint8_t)L_47))));
		int32_t L_48 = ___ptr1;
		V_4 = L_48;
		goto IL_00dc;
	}

IL_00dc:
	{
		int32_t L_49 = V_4;
		return L_49;
	}
}
// System.Int32 Lidgren.Network.NetFragmentationHelper::ReadHeader(System.Byte[],System.Int32,System.Int32&,System.Int32&,System.Int32&,System.Int32&)
extern "C"  int32_t NetFragmentationHelper_ReadHeader_m1346941602 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___ptr1, int32_t* ___group2, int32_t* ___totalBits3, int32_t* ___chunkByteSize4, int32_t* ___chunkNumber5, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_003e;
	}

IL_0007:
	{
		ByteU5BU5D_t3397334013* L_0 = ___buffer0;
		int32_t L_1 = ___ptr1;
		int32_t L_2 = L_1;
		___ptr1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_2);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		int32_t L_5 = V_0;
		uint8_t L_6 = V_2;
		int32_t L_7 = V_1;
		V_0 = ((int32_t)((int32_t)L_5|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)127)))<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)31)))&(int32_t)((int32_t)31)))))));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)7));
		uint8_t L_9 = V_2;
		V_4 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_9&(int32_t)((int32_t)128)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_4;
		if (L_10)
		{
			goto IL_003d;
		}
	}
	{
		int32_t* L_11 = ___group2;
		int32_t L_12 = V_0;
		*((int32_t*)(L_11)) = (int32_t)L_12;
		goto IL_0043;
	}

IL_003d:
	{
	}

IL_003e:
	{
		V_4 = (bool)1;
		goto IL_0007;
	}

IL_0043:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0080;
	}

IL_0049:
	{
		ByteU5BU5D_t3397334013* L_13 = ___buffer0;
		int32_t L_14 = ___ptr1;
		int32_t L_15 = L_14;
		___ptr1 = ((int32_t)((int32_t)L_15+(int32_t)1));
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_15);
		int32_t L_16 = L_15;
		uint8_t L_17 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_2 = L_17;
		int32_t L_18 = V_0;
		uint8_t L_19 = V_2;
		int32_t L_20 = V_1;
		V_0 = ((int32_t)((int32_t)L_18|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_19&(int32_t)((int32_t)127)))<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_20&(int32_t)((int32_t)31)))&(int32_t)((int32_t)31)))))));
		int32_t L_21 = V_1;
		V_1 = ((int32_t)((int32_t)L_21+(int32_t)7));
		uint8_t L_22 = V_2;
		V_4 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_22&(int32_t)((int32_t)128)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_4;
		if (L_23)
		{
			goto IL_007f;
		}
	}
	{
		int32_t* L_24 = ___totalBits3;
		int32_t L_25 = V_0;
		*((int32_t*)(L_24)) = (int32_t)L_25;
		goto IL_0085;
	}

IL_007f:
	{
	}

IL_0080:
	{
		V_4 = (bool)1;
		goto IL_0049;
	}

IL_0085:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_00c3;
	}

IL_008b:
	{
		ByteU5BU5D_t3397334013* L_26 = ___buffer0;
		int32_t L_27 = ___ptr1;
		int32_t L_28 = L_27;
		___ptr1 = ((int32_t)((int32_t)L_28+(int32_t)1));
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_28);
		int32_t L_29 = L_28;
		uint8_t L_30 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_2 = L_30;
		int32_t L_31 = V_0;
		uint8_t L_32 = V_2;
		int32_t L_33 = V_1;
		V_0 = ((int32_t)((int32_t)L_31|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_32&(int32_t)((int32_t)127)))<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_33&(int32_t)((int32_t)31)))&(int32_t)((int32_t)31)))))));
		int32_t L_34 = V_1;
		V_1 = ((int32_t)((int32_t)L_34+(int32_t)7));
		uint8_t L_35 = V_2;
		V_4 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_35&(int32_t)((int32_t)128)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_36 = V_4;
		if (L_36)
		{
			goto IL_00c2;
		}
	}
	{
		int32_t* L_37 = ___chunkByteSize4;
		int32_t L_38 = V_0;
		*((int32_t*)(L_37)) = (int32_t)L_38;
		goto IL_00c8;
	}

IL_00c2:
	{
	}

IL_00c3:
	{
		V_4 = (bool)1;
		goto IL_008b;
	}

IL_00c8:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0106;
	}

IL_00ce:
	{
		ByteU5BU5D_t3397334013* L_39 = ___buffer0;
		int32_t L_40 = ___ptr1;
		int32_t L_41 = L_40;
		___ptr1 = ((int32_t)((int32_t)L_41+(int32_t)1));
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_41);
		int32_t L_42 = L_41;
		uint8_t L_43 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_2 = L_43;
		int32_t L_44 = V_0;
		uint8_t L_45 = V_2;
		int32_t L_46 = V_1;
		V_0 = ((int32_t)((int32_t)L_44|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_45&(int32_t)((int32_t)127)))<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_46&(int32_t)((int32_t)31)))&(int32_t)((int32_t)31)))))));
		int32_t L_47 = V_1;
		V_1 = ((int32_t)((int32_t)L_47+(int32_t)7));
		uint8_t L_48 = V_2;
		V_4 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_48&(int32_t)((int32_t)128)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_49 = V_4;
		if (L_49)
		{
			goto IL_0105;
		}
	}
	{
		int32_t* L_50 = ___chunkNumber5;
		int32_t L_51 = V_0;
		*((int32_t*)(L_50)) = (int32_t)L_51;
		goto IL_010b;
	}

IL_0105:
	{
	}

IL_0106:
	{
		V_4 = (bool)1;
		goto IL_00ce;
	}

IL_010b:
	{
		int32_t L_52 = ___ptr1;
		V_3 = L_52;
		goto IL_010f;
	}

IL_010f:
	{
		int32_t L_53 = V_3;
		return L_53;
	}
}
// System.Int32 Lidgren.Network.NetFragmentationHelper::GetFragmentationHeaderSize(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t NetFragmentationHelper_GetFragmentationHeaderSize_m3360396866 (Il2CppObject * __this /* static, unused */, int32_t ___groupId0, int32_t ___totalBytes1, int32_t ___chunkByteSize2, int32_t ___numChunks3, const MethodInfo* method)
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	{
		V_0 = 4;
		int32_t L_0 = ___groupId0;
		V_1 = L_0;
		goto IL_0011;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)((int32_t)L_1+(int32_t)1));
		uint32_t L_2 = V_1;
		V_1 = ((int32_t)((uint32_t)L_2>>7));
	}

IL_0011:
	{
		uint32_t L_3 = V_1;
		V_6 = (bool)((((int32_t)((!(((uint32_t)L_3) >= ((uint32_t)((int32_t)128))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_6;
		if (L_4)
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_5 = ___totalBytes1;
		V_2 = ((int32_t)((int32_t)L_5*(int32_t)8));
		goto IL_0032;
	}

IL_0028:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
		uint32_t L_7 = V_2;
		V_2 = ((int32_t)((uint32_t)L_7>>7));
	}

IL_0032:
	{
		uint32_t L_8 = V_2;
		V_6 = (bool)((((int32_t)((!(((uint32_t)L_8) >= ((uint32_t)((int32_t)128))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_6;
		if (L_9)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_10 = ___chunkByteSize2;
		V_3 = L_10;
		goto IL_0051;
	}

IL_0047:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)((int32_t)L_11+(int32_t)1));
		uint32_t L_12 = V_3;
		V_3 = ((int32_t)((uint32_t)L_12>>7));
	}

IL_0051:
	{
		uint32_t L_13 = V_3;
		V_6 = (bool)((((int32_t)((!(((uint32_t)L_13) >= ((uint32_t)((int32_t)128))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_6;
		if (L_14)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_15 = ___numChunks3;
		V_4 = L_15;
		goto IL_0073;
	}

IL_0067:
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)((int32_t)L_16+(int32_t)1));
		uint32_t L_17 = V_4;
		V_4 = ((int32_t)((uint32_t)L_17>>7));
	}

IL_0073:
	{
		uint32_t L_18 = V_4;
		V_6 = (bool)((((int32_t)((!(((uint32_t)L_18) >= ((uint32_t)((int32_t)128))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_6;
		if (L_19)
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_20 = V_0;
		V_5 = L_20;
		goto IL_008a;
	}

IL_008a:
	{
		int32_t L_21 = V_5;
		return L_21;
	}
}
// System.Int32 Lidgren.Network.NetFragmentationHelper::GetBestChunkSize(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t NetFragmentationHelper_GetBestChunkSize_m1359511180 (Il2CppObject * __this /* static, unused */, int32_t ___group0, int32_t ___totalBytes1, int32_t ___mtu2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	{
		int32_t L_0 = ___mtu2;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0-(int32_t)5))-(int32_t)4));
		int32_t L_1 = ___group0;
		int32_t L_2 = ___totalBytes1;
		int32_t L_3 = V_0;
		int32_t L_4 = ___totalBytes1;
		int32_t L_5 = V_0;
		int32_t L_6 = NetFragmentationHelper_GetFragmentationHeaderSize_m3360396866(NULL /*static, unused*/, L_1, L_2, L_3, ((int32_t)((int32_t)L_4/(int32_t)L_5)), /*hidden argument*/NULL);
		V_1 = L_6;
		int32_t L_7 = ___mtu2;
		int32_t L_8 = V_1;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7-(int32_t)5))-(int32_t)L_8));
		V_2 = 0;
	}

IL_001b:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9-(int32_t)1));
		int32_t L_10 = ___totalBytes1;
		int32_t L_11 = V_0;
		V_3 = ((int32_t)((int32_t)L_10/(int32_t)L_11));
		int32_t L_12 = V_3;
		int32_t L_13 = V_0;
		int32_t L_14 = ___totalBytes1;
		V_5 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_12*(int32_t)L_13))) < ((int32_t)L_14))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_5;
		if (L_15)
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_16 = V_3;
		V_3 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0037:
	{
		int32_t L_17 = ___group0;
		int32_t L_18 = ___totalBytes1;
		int32_t L_19 = V_0;
		int32_t L_20 = V_3;
		int32_t L_21 = NetFragmentationHelper_GetFragmentationHeaderSize_m3360396866(NULL /*static, unused*/, L_17, L_18, L_19, L_20, /*hidden argument*/NULL);
		V_2 = L_21;
		int32_t L_22 = V_0;
		int32_t L_23 = V_2;
		int32_t L_24 = ___mtu2;
		V_5 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_22+(int32_t)L_23))+(int32_t)5))+(int32_t)1))) < ((int32_t)L_24))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_5;
		if (L_25)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_26 = V_0;
		V_4 = L_26;
		goto IL_005a;
	}

IL_005a:
	{
		int32_t L_27 = V_4;
		return L_27;
	}
}
// Lidgren.Network.NetIncomingMessageType Lidgren.Network.NetIncomingMessage::get_MessageType()
extern "C"  int32_t NetIncomingMessage_get_MessageType_m1134653489 (NetIncomingMessage_t2014089816 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_incomingMessageType_5();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// Lidgren.Network.NetConnection Lidgren.Network.NetIncomingMessage::get_SenderConnection()
extern "C"  NetConnection_t3331492029 * NetIncomingMessage_get_SenderConnection_m102869984 (NetIncomingMessage_t2014089816 * __this, const MethodInfo* method)
{
	NetConnection_t3331492029 * V_0 = NULL;
	{
		NetConnection_t3331492029 * L_0 = __this->get_m_senderConnection_7();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		NetConnection_t3331492029 * L_1 = V_0;
		return L_1;
	}
}
// System.Void Lidgren.Network.NetIncomingMessage::.ctor(Lidgren.Network.NetIncomingMessageType)
extern Il2CppClass* NetBuffer_t3608062491_il2cpp_TypeInfo_var;
extern const uint32_t NetIncomingMessage__ctor_m2874845560_MetadataUsageId;
extern "C"  void NetIncomingMessage__ctor_m2874845560 (NetIncomingMessage_t2014089816 * __this, int32_t ___tp0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetIncomingMessage__ctor_m2874845560_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetBuffer_t3608062491_il2cpp_TypeInfo_var);
		NetBuffer__ctor_m3780783062(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___tp0;
		__this->set_m_incomingMessageType_5(L_0);
		return;
	}
}
// System.Void Lidgren.Network.NetIncomingMessage::Reset()
extern "C"  void NetIncomingMessage_Reset_m2284406032 (NetIncomingMessage_t2014089816 * __this, const MethodInfo* method)
{
	{
		__this->set_m_incomingMessageType_5(0);
		((NetBuffer_t3608062491 *)__this)->set_m_readPosition_4(0);
		__this->set_m_receivedMessageType_9(((int32_t)128));
		__this->set_m_senderConnection_7((NetConnection_t3331492029 *)NULL);
		((NetBuffer_t3608062491 *)__this)->set_m_bitLength_3(0);
		__this->set_m_isFragment_10((bool)0);
		return;
	}
}
// System.String Lidgren.Network.NetIncomingMessage::ToString()
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2875225744;
extern Il2CppCodeGenString* _stringLiteral372029310;
extern Il2CppCodeGenString* _stringLiteral3950120644;
extern const uint32_t NetIncomingMessage_ToString_m4237620030_MetadataUsageId;
extern "C"  String_t* NetIncomingMessage_ToString_m4237620030 (NetIncomingMessage_t2014089816 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetIncomingMessage_ToString_m4237620030_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = NULL;
	ObjectU5BU5D_t3614634134* V_1 = NULL;
	{
		V_1 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)5));
		ObjectU5BU5D_t3614634134* L_0 = V_1;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral2875225744);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral2875225744);
		ObjectU5BU5D_t3614634134* L_1 = V_1;
		int32_t L_2 = __this->get_m_sequenceNumber_8();
		int32_t L_3 = L_2;
		Il2CppObject * L_4 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_4);
		ObjectU5BU5D_t3614634134* L_5 = V_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 2);
		ArrayElementTypeCheck (L_5, _stringLiteral372029310);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral372029310);
		ObjectU5BU5D_t3614634134* L_6 = V_1;
		int32_t L_7 = NetBuffer_get_LengthBytes_m2765088638(__this, /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		Il2CppObject * L_9 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_9);
		ObjectU5BU5D_t3614634134* L_10 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 4);
		ArrayElementTypeCheck (L_10, _stringLiteral3950120644);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (Il2CppObject *)_stringLiteral3950120644);
		ObjectU5BU5D_t3614634134* L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m3881798623(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0045;
	}

IL_0045:
	{
		String_t* L_13 = V_0;
		return L_13;
	}
}
// System.Void Lidgren.Network.NetOutgoingMessage::.ctor()
extern Il2CppClass* NetBuffer_t3608062491_il2cpp_TypeInfo_var;
extern const uint32_t NetOutgoingMessage__ctor_m724105531_MetadataUsageId;
extern "C"  void NetOutgoingMessage__ctor_m724105531 (NetOutgoingMessage_t2016542980 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetOutgoingMessage__ctor_m724105531_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetBuffer_t3608062491_il2cpp_TypeInfo_var);
		NetBuffer__ctor_m3780783062(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Lidgren.Network.NetOutgoingMessage::Reset()
extern "C"  void NetOutgoingMessage_Reset_m4185181874 (NetOutgoingMessage_t2016542980 * __this, const MethodInfo* method)
{
	{
		__this->set_m_messageType_5(((int32_t)128));
		((NetBuffer_t3608062491 *)__this)->set_m_bitLength_3(0);
		__this->set_m_isSent_6((bool)0);
		int32_t L_0 = __this->get_m_recyclingCount_7();
		NetException_Assert_m1426298558(NULL /*static, unused*/, (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		__this->set_m_fragmentGroup_8(0);
		return;
	}
}
// System.Int32 Lidgren.Network.NetOutgoingMessage::Encode(System.Byte[],System.Int32,System.Int32)
extern Il2CppClass* NetUtility_t3562260209_il2cpp_TypeInfo_var;
extern const uint32_t NetOutgoingMessage_Encode_m2473987076_MetadataUsageId;
extern "C"  int32_t NetOutgoingMessage_Encode_m2473987076 (NetOutgoingMessage_t2016542980 * __this, ByteU5BU5D_t3397334013* ___intoBuffer0, int32_t ___ptr1, int32_t ___sequenceNumber2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetOutgoingMessage_Encode_m2473987076_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		ByteU5BU5D_t3397334013* L_0 = ___intoBuffer0;
		int32_t L_1 = ___ptr1;
		int32_t L_2 = L_1;
		___ptr1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		uint8_t L_3 = __this->get_m_messageType_5();
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_2);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (uint8_t)L_3);
		int32_t L_4 = ___sequenceNumber2;
		int32_t L_5 = __this->get_m_fragmentGroup_8();
		G_B1_0 = ((int32_t)((int32_t)L_4<<(int32_t)1));
		if (!L_5)
		{
			G_B2_0 = ((int32_t)((int32_t)L_4<<(int32_t)1));
			goto IL_001d;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_001e:
	{
		V_0 = (((int32_t)((uint8_t)((int32_t)((int32_t)G_B3_1|(int32_t)G_B3_0)))));
		ByteU5BU5D_t3397334013* L_6 = ___intoBuffer0;
		int32_t L_7 = ___ptr1;
		int32_t L_8 = L_7;
		___ptr1 = ((int32_t)((int32_t)L_8+(int32_t)1));
		uint8_t L_9 = V_0;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint8_t)L_9);
		ByteU5BU5D_t3397334013* L_10 = ___intoBuffer0;
		int32_t L_11 = ___ptr1;
		int32_t L_12 = L_11;
		___ptr1 = ((int32_t)((int32_t)L_12+(int32_t)1));
		int32_t L_13 = ___sequenceNumber2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_13>>(int32_t)7))))));
		int32_t L_14 = __this->get_m_fragmentGroup_8();
		V_6 = (bool)((((int32_t)((((int32_t)L_14) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_6;
		if (L_15)
		{
			goto IL_00a0;
		}
	}
	{
		ByteU5BU5D_t3397334013* L_16 = ___intoBuffer0;
		int32_t L_17 = ___ptr1;
		int32_t L_18 = L_17;
		___ptr1 = ((int32_t)((int32_t)L_18+(int32_t)1));
		int32_t L_19 = ((NetBuffer_t3608062491 *)__this)->get_m_bitLength_3();
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_18);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (uint8_t)(((int32_t)((uint8_t)L_19))));
		ByteU5BU5D_t3397334013* L_20 = ___intoBuffer0;
		int32_t L_21 = ___ptr1;
		int32_t L_22 = L_21;
		___ptr1 = ((int32_t)((int32_t)L_22+(int32_t)1));
		int32_t L_23 = ((NetBuffer_t3608062491 *)__this)->get_m_bitLength_3();
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_23>>(int32_t)8))))));
		int32_t L_24 = ((NetBuffer_t3608062491 *)__this)->get_m_bitLength_3();
		IL2CPP_RUNTIME_CLASS_INIT(NetUtility_t3562260209_il2cpp_TypeInfo_var);
		int32_t L_25 = NetUtility_BytesToHoldBits_m1372162852(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		V_1 = L_25;
		int32_t L_26 = V_1;
		V_6 = (bool)((((int32_t)((((int32_t)L_26) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_6;
		if (L_27)
		{
			goto IL_009a;
		}
	}
	{
		ByteU5BU5D_t3397334013* L_28 = ((NetBuffer_t3608062491 *)__this)->get_m_data_2();
		ByteU5BU5D_t3397334013* L_29 = ___intoBuffer0;
		int32_t L_30 = ___ptr1;
		int32_t L_31 = V_1;
		Buffer_BlockCopy_m1586717258(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_28, 0, (Il2CppArray *)(Il2CppArray *)L_29, L_30, L_31, /*hidden argument*/NULL);
		int32_t L_32 = ___ptr1;
		int32_t L_33 = V_1;
		___ptr1 = ((int32_t)((int32_t)L_32+(int32_t)L_33));
	}

IL_009a:
	{
		goto IL_0143;
	}

IL_00a0:
	{
		int32_t L_34 = ___ptr1;
		V_2 = L_34;
		ByteU5BU5D_t3397334013* L_35 = ___intoBuffer0;
		int32_t L_36 = ___ptr1;
		int32_t L_37 = L_36;
		___ptr1 = ((int32_t)((int32_t)L_37+(int32_t)1));
		int32_t L_38 = ((NetBuffer_t3608062491 *)__this)->get_m_bitLength_3();
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, L_37);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (uint8_t)(((int32_t)((uint8_t)L_38))));
		ByteU5BU5D_t3397334013* L_39 = ___intoBuffer0;
		int32_t L_40 = ___ptr1;
		int32_t L_41 = L_40;
		___ptr1 = ((int32_t)((int32_t)L_41+(int32_t)1));
		int32_t L_42 = ((NetBuffer_t3608062491 *)__this)->get_m_bitLength_3();
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_41);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_42>>(int32_t)8))))));
		ByteU5BU5D_t3397334013* L_43 = ___intoBuffer0;
		int32_t L_44 = ___ptr1;
		int32_t L_45 = __this->get_m_fragmentGroup_8();
		int32_t L_46 = __this->get_m_fragmentGroupTotalBits_9();
		int32_t L_47 = __this->get_m_fragmentChunkByteSize_10();
		int32_t L_48 = __this->get_m_fragmentChunkNumber_11();
		int32_t L_49 = NetFragmentationHelper_WriteHeader_m2245683411(NULL /*static, unused*/, L_43, L_44, L_45, L_46, L_47, L_48, /*hidden argument*/NULL);
		___ptr1 = L_49;
		int32_t L_50 = ___ptr1;
		int32_t L_51 = V_2;
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)L_50-(int32_t)L_51))-(int32_t)2));
		int32_t L_52 = ((NetBuffer_t3608062491 *)__this)->get_m_bitLength_3();
		int32_t L_53 = V_3;
		V_4 = ((int32_t)((int32_t)L_52+(int32_t)((int32_t)((int32_t)L_53*(int32_t)8))));
		ByteU5BU5D_t3397334013* L_54 = ___intoBuffer0;
		int32_t L_55 = V_2;
		int32_t L_56 = V_4;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, L_55);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(L_55), (uint8_t)(((int32_t)((uint8_t)L_56))));
		ByteU5BU5D_t3397334013* L_57 = ___intoBuffer0;
		int32_t L_58 = V_2;
		int32_t L_59 = V_4;
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, ((int32_t)((int32_t)L_58+(int32_t)1)));
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_58+(int32_t)1))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_59>>(int32_t)8))))));
		int32_t L_60 = ((NetBuffer_t3608062491 *)__this)->get_m_bitLength_3();
		IL2CPP_RUNTIME_CLASS_INIT(NetUtility_t3562260209_il2cpp_TypeInfo_var);
		int32_t L_61 = NetUtility_BytesToHoldBits_m1372162852(NULL /*static, unused*/, L_60, /*hidden argument*/NULL);
		V_1 = L_61;
		int32_t L_62 = V_1;
		V_6 = (bool)((((int32_t)((((int32_t)L_62) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_63 = V_6;
		if (L_63)
		{
			goto IL_0142;
		}
	}
	{
		ByteU5BU5D_t3397334013* L_64 = ((NetBuffer_t3608062491 *)__this)->get_m_data_2();
		int32_t L_65 = __this->get_m_fragmentChunkNumber_11();
		int32_t L_66 = __this->get_m_fragmentChunkByteSize_10();
		ByteU5BU5D_t3397334013* L_67 = ___intoBuffer0;
		int32_t L_68 = ___ptr1;
		int32_t L_69 = V_1;
		Buffer_BlockCopy_m1586717258(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_64, ((int32_t)((int32_t)L_65*(int32_t)L_66)), (Il2CppArray *)(Il2CppArray *)L_67, L_68, L_69, /*hidden argument*/NULL);
		int32_t L_70 = ___ptr1;
		int32_t L_71 = V_1;
		___ptr1 = ((int32_t)((int32_t)L_70+(int32_t)L_71));
	}

IL_0142:
	{
	}

IL_0143:
	{
		int32_t L_72 = ___ptr1;
		NetException_Assert_m1426298558(NULL /*static, unused*/, (bool)((((int32_t)L_72) > ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		int32_t L_73 = ___ptr1;
		V_5 = L_73;
		goto IL_0152;
	}

IL_0152:
	{
		int32_t L_74 = V_5;
		return L_74;
	}
}
// System.Int32 Lidgren.Network.NetOutgoingMessage::GetEncodedSize()
extern "C"  int32_t NetOutgoingMessage_GetEncodedSize_m3842097810 (NetOutgoingMessage_t2016542980 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		V_0 = 5;
		int32_t L_0 = __this->get_m_fragmentGroup_8();
		V_2 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (L_1)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->get_m_fragmentGroup_8();
		int32_t L_4 = __this->get_m_fragmentGroupTotalBits_9();
		int32_t L_5 = __this->get_m_fragmentChunkByteSize_10();
		int32_t L_6 = __this->get_m_fragmentChunkNumber_11();
		int32_t L_7 = NetFragmentationHelper_GetFragmentationHeaderSize_m3360396866(NULL /*static, unused*/, L_3, ((int32_t)((int32_t)L_4/(int32_t)8)), L_5, L_6, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_2+(int32_t)L_7));
	}

IL_0032:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = NetBuffer_get_LengthBytes_m2765088638(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)L_9));
		int32_t L_10 = V_0;
		V_1 = L_10;
		goto IL_003f;
	}

IL_003f:
	{
		int32_t L_11 = V_1;
		return L_11;
	}
}
// System.String Lidgren.Network.NetOutgoingMessage::ToString()
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern Il2CppClass* NetMessageType_t191235414_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral176854741;
extern Il2CppCodeGenString* _stringLiteral372029310;
extern Il2CppCodeGenString* _stringLiteral3950120644;
extern const uint32_t NetOutgoingMessage_ToString_m1440072292_MetadataUsageId;
extern "C"  String_t* NetOutgoingMessage_ToString_m1440072292 (NetOutgoingMessage_t2016542980 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetOutgoingMessage_ToString_m1440072292_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	ObjectU5BU5D_t3614634134* V_2 = NULL;
	{
		bool L_0 = __this->get_m_isSent_6();
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (L_1)
		{
			goto IL_0052;
		}
	}
	{
		V_2 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)5));
		ObjectU5BU5D_t3614634134* L_2 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, _stringLiteral176854741);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral176854741);
		ObjectU5BU5D_t3614634134* L_3 = V_2;
		uint8_t L_4 = __this->get_m_messageType_5();
		uint8_t L_5 = L_4;
		Il2CppObject * L_6 = Box(NetMessageType_t191235414_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_6);
		ObjectU5BU5D_t3614634134* L_7 = V_2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, _stringLiteral372029310);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral372029310);
		ObjectU5BU5D_t3614634134* L_8 = V_2;
		int32_t L_9 = NetBuffer_get_LengthBytes_m2765088638(__this, /*hidden argument*/NULL);
		int32_t L_10 = L_9;
		Il2CppObject * L_11 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_11);
		ObjectU5BU5D_t3614634134* L_12 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 4);
		ArrayElementTypeCheck (L_12, _stringLiteral3950120644);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (Il2CppObject *)_stringLiteral3950120644);
		ObjectU5BU5D_t3614634134* L_13 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m3881798623(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		goto IL_006f;
	}

IL_0052:
	{
		int32_t L_15 = NetBuffer_get_LengthBytes_m2765088638(__this, /*hidden argument*/NULL);
		int32_t L_16 = L_15;
		Il2CppObject * L_17 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_16);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_18 = String_Concat_m2000667605(NULL /*static, unused*/, _stringLiteral176854741, L_17, _stringLiteral3950120644, /*hidden argument*/NULL);
		V_0 = L_18;
		goto IL_006f;
	}

IL_006f:
	{
		String_t* L_19 = V_0;
		return L_19;
	}
}
// System.Void Lidgren.Network.NetPeer::HandleNatIntroduction(System.Int32)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* NetTuple_2__ctor_m896140118_MethodInfo_var;
extern const MethodInfo* NetQueue_1_Enqueue_m1061700747_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral3657623505;
extern Il2CppCodeGenString* _stringLiteral3374638073;
extern Il2CppCodeGenString* _stringLiteral3430667732;
extern Il2CppCodeGenString* _stringLiteral2404739822;
extern const uint32_t NetPeer_HandleNatIntroduction_m4079714032_MetadataUsageId;
extern "C"  void NetPeer_HandleNatIntroduction_m4079714032 (NetPeer_t1779390221 * __this, int32_t ___ptr0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetPeer_HandleNatIntroduction_m4079714032_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	NetIncomingMessage_t2014089816 * V_0 = NULL;
	uint8_t V_1 = 0x0;
	IPEndPoint_t2615413766 * V_2 = NULL;
	IPEndPoint_t2615413766 * V_3 = NULL;
	String_t* V_4 = NULL;
	bool V_5 = false;
	NetOutgoingMessage_t2016542980 * V_6 = NULL;
	bool V_7 = false;
	String_t* G_B2_0 = NULL;
	NetPeer_t1779390221 * G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	NetPeer_t1779390221 * G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	NetPeer_t1779390221 * G_B3_2 = NULL;
	int32_t G_B6_0 = 0;
	{
		NetPeer_VerifyNetworkThread_m4075953563(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___ptr0;
		NetIncomingMessage_t2014089816 * L_1 = NetPeer_SetupReadHelperMessage_m906183392(__this, L_0, ((int32_t)1000), /*hidden argument*/NULL);
		V_0 = L_1;
		NetIncomingMessage_t2014089816 * L_2 = V_0;
		NullCheck(L_2);
		uint8_t L_3 = NetBuffer_ReadByte_m3348400846(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		NetIncomingMessage_t2014089816 * L_4 = V_0;
		NullCheck(L_4);
		IPEndPoint_t2615413766 * L_5 = NetBuffer_ReadIPEndPoint_m430505649(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		NetIncomingMessage_t2014089816 * L_6 = V_0;
		NullCheck(L_6);
		IPEndPoint_t2615413766 * L_7 = NetBuffer_ReadIPEndPoint_m430505649(L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		NetIncomingMessage_t2014089816 * L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9 = NetBuffer_ReadString_m1223210798(L_8, /*hidden argument*/NULL);
		V_4 = L_9;
		uint8_t L_10 = V_1;
		V_5 = (bool)((((int32_t)((((int32_t)L_10) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_5;
		G_B1_0 = _stringLiteral3657623505;
		G_B1_1 = __this;
		if (L_11)
		{
			G_B2_0 = _stringLiteral3657623505;
			G_B2_1 = __this;
			goto IL_004c;
		}
	}
	{
		G_B3_0 = _stringLiteral3374638073;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0051;
	}

IL_004c:
	{
		G_B3_0 = _stringLiteral3430667732;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0051:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m2596409543(NULL /*static, unused*/, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		NullCheck(G_B3_2);
		NetPeer_LogDebug_m2983960595(G_B3_2, L_12, /*hidden argument*/NULL);
		bool L_13 = V_5;
		if (L_13)
		{
			goto IL_0073;
		}
	}
	{
		NetPeerConfiguration_t136603591 * L_14 = __this->get_m_configuration_21();
		NullCheck(L_14);
		bool L_15 = NetPeerConfiguration_IsMessageTypeEnabled_m1110774391(L_14, ((int32_t)2048), /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0074;
	}

IL_0073:
	{
		G_B6_0 = 1;
	}

IL_0074:
	{
		V_7 = (bool)G_B6_0;
		bool L_16 = V_7;
		if (L_16)
		{
			goto IL_0080;
		}
	}
	{
		goto IL_0136;
	}

IL_0080:
	{
		NetOutgoingMessage_t2016542980 * L_17 = NetPeer_CreateMessage_m3328975762(__this, 1, /*hidden argument*/NULL);
		V_6 = L_17;
		NetOutgoingMessage_t2016542980 * L_18 = V_6;
		NullCheck(L_18);
		L_18->set_m_messageType_5(((int32_t)138));
		NetOutgoingMessage_t2016542980 * L_19 = V_6;
		uint8_t L_20 = V_1;
		NullCheck(L_19);
		NetBuffer_Write_m4142810212(L_19, L_20, /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_21 = V_6;
		String_t* L_22 = V_4;
		NullCheck(L_21);
		NetBuffer_Write_m962556565(L_21, L_22, /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_23 = V_6;
		NullCheck(L_23);
		int32_t* L_24 = L_23->get_address_of_m_recyclingCount_7();
		Interlocked_Increment_m129308425(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		NetQueue_1_t1703294902 * L_25 = __this->get_m_unsentUnconnectedMessages_23();
		IPEndPoint_t2615413766 * L_26 = V_2;
		NetOutgoingMessage_t2016542980 * L_27 = V_6;
		NetTuple_2_t3781571512  L_28;
		memset(&L_28, 0, sizeof(L_28));
		NetTuple_2__ctor_m896140118(&L_28, L_26, L_27, /*hidden argument*/NetTuple_2__ctor_m896140118_MethodInfo_var);
		NullCheck(L_25);
		NetQueue_1_Enqueue_m1061700747(L_25, L_28, /*hidden argument*/NetQueue_1_Enqueue_m1061700747_MethodInfo_var);
		IPEndPoint_t2615413766 * L_29 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_30 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral2404739822, L_29, /*hidden argument*/NULL);
		NetPeer_LogDebug_m2983960595(__this, L_30, /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_31 = NetPeer_CreateMessage_m3328975762(__this, 1, /*hidden argument*/NULL);
		V_6 = L_31;
		NetOutgoingMessage_t2016542980 * L_32 = V_6;
		NullCheck(L_32);
		L_32->set_m_messageType_5(((int32_t)138));
		NetOutgoingMessage_t2016542980 * L_33 = V_6;
		uint8_t L_34 = V_1;
		NullCheck(L_33);
		NetBuffer_Write_m4142810212(L_33, L_34, /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_35 = V_6;
		String_t* L_36 = V_4;
		NullCheck(L_35);
		NetBuffer_Write_m962556565(L_35, L_36, /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_37 = V_6;
		NullCheck(L_37);
		int32_t* L_38 = L_37->get_address_of_m_recyclingCount_7();
		Interlocked_Increment_m129308425(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
		NetQueue_1_t1703294902 * L_39 = __this->get_m_unsentUnconnectedMessages_23();
		IPEndPoint_t2615413766 * L_40 = V_3;
		NetOutgoingMessage_t2016542980 * L_41 = V_6;
		NetTuple_2_t3781571512  L_42;
		memset(&L_42, 0, sizeof(L_42));
		NetTuple_2__ctor_m896140118(&L_42, L_40, L_41, /*hidden argument*/NetTuple_2__ctor_m896140118_MethodInfo_var);
		NullCheck(L_39);
		NetQueue_1_Enqueue_m1061700747(L_39, L_42, /*hidden argument*/NetQueue_1_Enqueue_m1061700747_MethodInfo_var);
		IPEndPoint_t2615413766 * L_43 = V_3;
		String_t* L_44 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral2404739822, L_43, /*hidden argument*/NULL);
		NetPeer_LogDebug_m2983960595(__this, L_44, /*hidden argument*/NULL);
	}

IL_0136:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetPeer::HandleNatPunch(System.Int32,System.Net.IPEndPoint)
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* NetTuple_2__ctor_m896140118_MethodInfo_var;
extern const MethodInfo* NetQueue_1_Enqueue_m1061700747_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral143800184;
extern Il2CppCodeGenString* _stringLiteral2837538112;
extern Il2CppCodeGenString* _stringLiteral3165262718;
extern const uint32_t NetPeer_HandleNatPunch_m77480994_MetadataUsageId;
extern "C"  void NetPeer_HandleNatPunch_m77480994 (NetPeer_t1779390221 * __this, int32_t ___ptr0, IPEndPoint_t2615413766 * ___senderEndPoint1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetPeer_HandleNatPunch_m77480994_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	NetIncomingMessage_t2014089816 * V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	NetOutgoingMessage_t2016542980 * V_3 = NULL;
	NetOutgoingMessage_t2016542980 * V_4 = NULL;
	bool V_5 = false;
	ObjectU5BU5D_t3614634134* V_6 = NULL;
	{
		int32_t L_0 = ___ptr0;
		NetIncomingMessage_t2014089816 * L_1 = NetPeer_SetupReadHelperMessage_m906183392(__this, L_0, ((int32_t)1000), /*hidden argument*/NULL);
		V_0 = L_1;
		NetIncomingMessage_t2014089816 * L_2 = V_0;
		NullCheck(L_2);
		uint8_t L_3 = NetBuffer_ReadByte_m3348400846(L_2, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		NetIncomingMessage_t2014089816 * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = NetBuffer_ReadString_m1223210798(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		bool L_6 = V_1;
		V_5 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_5;
		if (L_7)
		{
			goto IL_00a1;
		}
	}
	{
		V_6 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)4));
		ObjectU5BU5D_t3614634134* L_8 = V_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		ArrayElementTypeCheck (L_8, _stringLiteral143800184);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral143800184);
		ObjectU5BU5D_t3614634134* L_9 = V_6;
		IPEndPoint_t2615413766 * L_10 = ___senderEndPoint1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 1);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_10);
		ObjectU5BU5D_t3614634134* L_11 = V_6;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 2);
		ArrayElementTypeCheck (L_11, _stringLiteral2837538112);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral2837538112);
		ObjectU5BU5D_t3614634134* L_12 = V_6;
		String_t* L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_13);
		ObjectU5BU5D_t3614634134* L_14 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m3881798623(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		NetPeer_LogDebug_m2983960595(__this, L_15, /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_16 = NetPeer_CreateMessage_m3328975762(__this, 1, /*hidden argument*/NULL);
		V_3 = L_16;
		NetOutgoingMessage_t2016542980 * L_17 = V_3;
		NullCheck(L_17);
		L_17->set_m_messageType_5(((int32_t)143));
		NetOutgoingMessage_t2016542980 * L_18 = V_3;
		NullCheck(L_18);
		NetBuffer_Write_m4142810212(L_18, 1, /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_19 = V_3;
		String_t* L_20 = V_2;
		NullCheck(L_19);
		NetBuffer_Write_m962556565(L_19, L_20, /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_21 = V_3;
		NullCheck(L_21);
		int32_t* L_22 = L_21->get_address_of_m_recyclingCount_7();
		Interlocked_Increment_m129308425(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		NetQueue_1_t1703294902 * L_23 = __this->get_m_unsentUnconnectedMessages_23();
		IPEndPoint_t2615413766 * L_24 = ___senderEndPoint1;
		NetOutgoingMessage_t2016542980 * L_25 = V_3;
		NetTuple_2_t3781571512  L_26;
		memset(&L_26, 0, sizeof(L_26));
		NetTuple_2__ctor_m896140118(&L_26, L_24, L_25, /*hidden argument*/NetTuple_2__ctor_m896140118_MethodInfo_var);
		NullCheck(L_23);
		NetQueue_1_Enqueue_m1061700747(L_23, L_26, /*hidden argument*/NetQueue_1_Enqueue_m1061700747_MethodInfo_var);
		goto IL_011d;
	}

IL_00a1:
	{
		V_6 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)4));
		ObjectU5BU5D_t3614634134* L_27 = V_6;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, 0);
		ArrayElementTypeCheck (L_27, _stringLiteral143800184);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral143800184);
		ObjectU5BU5D_t3614634134* L_28 = V_6;
		IPEndPoint_t2615413766 * L_29 = ___senderEndPoint1;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 1);
		ArrayElementTypeCheck (L_28, L_29);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_29);
		ObjectU5BU5D_t3614634134* L_30 = V_6;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, 2);
		ArrayElementTypeCheck (L_30, _stringLiteral3165262718);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral3165262718);
		ObjectU5BU5D_t3614634134* L_31 = V_6;
		String_t* L_32 = V_2;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 3);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_32);
		ObjectU5BU5D_t3614634134* L_33 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_34 = String_Concat_m3881798623(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		NetPeer_LogDebug_m2983960595(__this, L_34, /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_35 = NetPeer_CreateMessage_m3328975762(__this, 1, /*hidden argument*/NULL);
		V_4 = L_35;
		NetOutgoingMessage_t2016542980 * L_36 = V_4;
		NullCheck(L_36);
		L_36->set_m_messageType_5(((int32_t)142));
		NetOutgoingMessage_t2016542980 * L_37 = V_4;
		NullCheck(L_37);
		NetBuffer_Write_m4142810212(L_37, 0, /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_38 = V_4;
		String_t* L_39 = V_2;
		NullCheck(L_38);
		NetBuffer_Write_m962556565(L_38, L_39, /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_40 = V_4;
		NullCheck(L_40);
		int32_t* L_41 = L_40->get_address_of_m_recyclingCount_7();
		Interlocked_Increment_m129308425(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
		NetQueue_1_t1703294902 * L_42 = __this->get_m_unsentUnconnectedMessages_23();
		IPEndPoint_t2615413766 * L_43 = ___senderEndPoint1;
		NetOutgoingMessage_t2016542980 * L_44 = V_4;
		NetTuple_2_t3781571512  L_45;
		memset(&L_45, 0, sizeof(L_45));
		NetTuple_2__ctor_m896140118(&L_45, L_43, L_44, /*hidden argument*/NetTuple_2__ctor_m896140118_MethodInfo_var);
		NullCheck(L_42);
		NetQueue_1_Enqueue_m1061700747(L_42, L_45, /*hidden argument*/NetQueue_1_Enqueue_m1061700747_MethodInfo_var);
	}

IL_011d:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetPeer::HandleNatPunchConfirmRequest(System.Int32,System.Net.IPEndPoint)
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* NetTuple_2__ctor_m896140118_MethodInfo_var;
extern const MethodInfo* NetQueue_1_Enqueue_m1061700747_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2395040233;
extern Il2CppCodeGenString* _stringLiteral2770199202;
extern const uint32_t NetPeer_HandleNatPunchConfirmRequest_m3944409323_MetadataUsageId;
extern "C"  void NetPeer_HandleNatPunchConfirmRequest_m3944409323 (NetPeer_t1779390221 * __this, int32_t ___ptr0, IPEndPoint_t2615413766 * ___senderEndPoint1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetPeer_HandleNatPunchConfirmRequest_m3944409323_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	NetIncomingMessage_t2014089816 * V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	NetOutgoingMessage_t2016542980 * V_3 = NULL;
	ObjectU5BU5D_t3614634134* V_4 = NULL;
	NetOutgoingMessage_t2016542980 * G_B2_0 = NULL;
	NetOutgoingMessage_t2016542980 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NetOutgoingMessage_t2016542980 * G_B3_1 = NULL;
	{
		int32_t L_0 = ___ptr0;
		NetIncomingMessage_t2014089816 * L_1 = NetPeer_SetupReadHelperMessage_m906183392(__this, L_0, ((int32_t)1000), /*hidden argument*/NULL);
		V_0 = L_1;
		NetIncomingMessage_t2014089816 * L_2 = V_0;
		NullCheck(L_2);
		uint8_t L_3 = NetBuffer_ReadByte_m3348400846(L_2, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		NetIncomingMessage_t2014089816 * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = NetBuffer_ReadString_m1223210798(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		V_4 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)4));
		ObjectU5BU5D_t3614634134* L_6 = V_4;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		ArrayElementTypeCheck (L_6, _stringLiteral2395040233);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral2395040233);
		ObjectU5BU5D_t3614634134* L_7 = V_4;
		IPEndPoint_t2615413766 * L_8 = ___senderEndPoint1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 1);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_8);
		ObjectU5BU5D_t3614634134* L_9 = V_4;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 2);
		ArrayElementTypeCheck (L_9, _stringLiteral2770199202);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral2770199202);
		ObjectU5BU5D_t3614634134* L_10 = V_4;
		String_t* L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 3);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_11);
		ObjectU5BU5D_t3614634134* L_12 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m3881798623(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		NetPeer_LogDebug_m2983960595(__this, L_13, /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_14 = NetPeer_CreateMessage_m3328975762(__this, 1, /*hidden argument*/NULL);
		V_3 = L_14;
		NetOutgoingMessage_t2016542980 * L_15 = V_3;
		NullCheck(L_15);
		L_15->set_m_messageType_5(((int32_t)143));
		NetOutgoingMessage_t2016542980 * L_16 = V_3;
		bool L_17 = V_1;
		G_B1_0 = L_16;
		if (L_17)
		{
			G_B2_0 = L_16;
			goto IL_006b;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_006c;
	}

IL_006b:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_006c:
	{
		NullCheck(G_B3_1);
		NetBuffer_Write_m4142810212(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_18 = V_3;
		String_t* L_19 = V_2;
		NullCheck(L_18);
		NetBuffer_Write_m962556565(L_18, L_19, /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_20 = V_3;
		NullCheck(L_20);
		int32_t* L_21 = L_20->get_address_of_m_recyclingCount_7();
		Interlocked_Increment_m129308425(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		NetQueue_1_t1703294902 * L_22 = __this->get_m_unsentUnconnectedMessages_23();
		IPEndPoint_t2615413766 * L_23 = ___senderEndPoint1;
		NetOutgoingMessage_t2016542980 * L_24 = V_3;
		NetTuple_2_t3781571512  L_25;
		memset(&L_25, 0, sizeof(L_25));
		NetTuple_2__ctor_m896140118(&L_25, L_23, L_24, /*hidden argument*/NetTuple_2__ctor_m896140118_MethodInfo_var);
		NullCheck(L_22);
		NetQueue_1_Enqueue_m1061700747(L_22, L_25, /*hidden argument*/NetQueue_1_Enqueue_m1061700747_MethodInfo_var);
		return;
	}
}
// System.Void Lidgren.Network.NetPeer::HandleNatPunchConfirmed(System.Int32,System.Net.IPEndPoint)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral792097889;
extern Il2CppCodeGenString* _stringLiteral4165751516;
extern Il2CppCodeGenString* _stringLiteral60653504;
extern const uint32_t NetPeer_HandleNatPunchConfirmed_m1119557487_MetadataUsageId;
extern "C"  void NetPeer_HandleNatPunchConfirmed_m1119557487 (NetPeer_t1779390221 * __this, int32_t ___ptr0, IPEndPoint_t2615413766 * ___senderEndPoint1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetPeer_HandleNatPunchConfirmed_m1119557487_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	NetIncomingMessage_t2014089816 * V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	NetIncomingMessage_t2014089816 * V_3 = NULL;
	bool V_4 = false;
	{
		int32_t L_0 = ___ptr0;
		NetIncomingMessage_t2014089816 * L_1 = NetPeer_SetupReadHelperMessage_m906183392(__this, L_0, ((int32_t)1000), /*hidden argument*/NULL);
		V_0 = L_1;
		NetIncomingMessage_t2014089816 * L_2 = V_0;
		NullCheck(L_2);
		uint8_t L_3 = NetBuffer_ReadByte_m3348400846(L_2, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		V_4 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_4;
		if (L_5)
		{
			goto IL_003c;
		}
	}
	{
		IPEndPoint_t2615413766 * L_6 = ___senderEndPoint1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m2000667605(NULL /*static, unused*/, _stringLiteral792097889, L_6, _stringLiteral4165751516, /*hidden argument*/NULL);
		NetPeer_LogDebug_m2983960595(__this, L_7, /*hidden argument*/NULL);
		goto IL_007f;
	}

IL_003c:
	{
		NetIncomingMessage_t2014089816 * L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9 = NetBuffer_ReadString_m1223210798(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		IPEndPoint_t2615413766 * L_10 = ___senderEndPoint1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m2000667605(NULL /*static, unused*/, _stringLiteral792097889, L_10, _stringLiteral60653504, /*hidden argument*/NULL);
		NetPeer_LogDebug_m2983960595(__this, L_11, /*hidden argument*/NULL);
		NetIncomingMessage_t2014089816 * L_12 = NetPeer_CreateIncomingMessage_m2109562735(__this, ((int32_t)2048), ((int32_t)10), /*hidden argument*/NULL);
		V_3 = L_12;
		NetIncomingMessage_t2014089816 * L_13 = V_3;
		IPEndPoint_t2615413766 * L_14 = ___senderEndPoint1;
		NullCheck(L_13);
		L_13->set_m_senderEndPoint_6(L_14);
		NetIncomingMessage_t2014089816 * L_15 = V_3;
		String_t* L_16 = V_2;
		NullCheck(L_15);
		NetBuffer_Write_m962556565(L_15, L_16, /*hidden argument*/NULL);
		NetIncomingMessage_t2014089816 * L_17 = V_3;
		NetPeer_ReleaseMessage_m3520648965(__this, L_17, /*hidden argument*/NULL);
	}

IL_007f:
	{
		return;
	}
}
// System.Threading.AutoResetEvent Lidgren.Network.NetPeer::get_MessageReceivedEvent()
extern Il2CppClass* AutoResetEvent_t15112628_il2cpp_TypeInfo_var;
extern const uint32_t NetPeer_get_MessageReceivedEvent_m4116203547_MetadataUsageId;
extern "C"  AutoResetEvent_t15112628 * NetPeer_get_MessageReceivedEvent_m4116203547 (NetPeer_t1779390221 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetPeer_get_MessageReceivedEvent_m4116203547_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	AutoResetEvent_t15112628 * V_0 = NULL;
	bool V_1 = false;
	Il2CppObject * V_2 = NULL;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		AutoResetEvent_t15112628 * L_0 = __this->get_m_messageReceivedEvent_28();
		V_1 = (bool)((((int32_t)((((Il2CppObject*)(AutoResetEvent_t15112628 *)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (L_1)
		{
			goto IL_004a;
		}
	}
	{
		Il2CppObject * L_2 = __this->get_m_messageReceivedEventCreationLock_2();
		Il2CppObject * L_3 = L_2;
		V_2 = L_3;
		Monitor_Enter_m2136705809(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			AutoResetEvent_t15112628 * L_4 = __this->get_m_messageReceivedEvent_28();
			V_1 = (bool)((((int32_t)((((Il2CppObject*)(AutoResetEvent_t15112628 *)L_4) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_5 = V_1;
			if (L_5)
			{
				goto IL_003d;
			}
		}

IL_0031:
		{
			AutoResetEvent_t15112628 * L_6 = (AutoResetEvent_t15112628 *)il2cpp_codegen_object_new(AutoResetEvent_t15112628_il2cpp_TypeInfo_var);
			AutoResetEvent__ctor_m2634317352(L_6, (bool)0, /*hidden argument*/NULL);
			__this->set_m_messageReceivedEvent_28(L_6);
		}

IL_003d:
		{
			IL2CPP_LEAVE(0x48, FINALLY_0040);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		Il2CppObject * L_7 = V_2;
		Monitor_Exit_m2677760297(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(64)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_JUMP_TBL(0x48, IL_0048)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_0048:
	{
	}

IL_004a:
	{
		AutoResetEvent_t15112628 * L_8 = __this->get_m_messageReceivedEvent_28();
		V_0 = L_8;
		goto IL_0053;
	}

IL_0053:
	{
		AutoResetEvent_t15112628 * L_9 = V_0;
		return L_9;
	}
}
// System.Int32 Lidgren.Network.NetPeer::get_ConnectionsCount()
extern const MethodInfo* List_1_get_Count_m1394854046_MethodInfo_var;
extern const uint32_t NetPeer_get_ConnectionsCount_m847920945_MetadataUsageId;
extern "C"  int32_t NetPeer_get_ConnectionsCount_m847920945 (NetPeer_t1779390221 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetPeer_get_ConnectionsCount_m847920945_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_t2700613161 * L_0 = __this->get_m_connections_3();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m1394854046(L_0, /*hidden argument*/List_1_get_Count_m1394854046_MethodInfo_var);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// Lidgren.Network.NetPeerConfiguration Lidgren.Network.NetPeer::get_Configuration()
extern "C"  NetPeerConfiguration_t136603591 * NetPeer_get_Configuration_m323836264 (NetPeer_t1779390221 * __this, const MethodInfo* method)
{
	NetPeerConfiguration_t136603591 * V_0 = NULL;
	{
		NetPeerConfiguration_t136603591 * L_0 = __this->get_m_configuration_21();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		NetPeerConfiguration_t136603591 * L_1 = V_0;
		return L_1;
	}
}
// System.Void Lidgren.Network.NetPeer::.ctor(Lidgren.Network.NetPeerConfiguration)
extern Il2CppClass* Il2CppObject_il2cpp_TypeInfo_var;
extern Il2CppClass* List_1_t667328605_il2cpp_TypeInfo_var;
extern Il2CppClass* NetPeerStatistics_t101027066_il2cpp_TypeInfo_var;
extern Il2CppClass* NetQueue_1_t4230780502_il2cpp_TypeInfo_var;
extern Il2CppClass* NetQueue_1_t1703294902_il2cpp_TypeInfo_var;
extern Il2CppClass* List_1_t2700613161_il2cpp_TypeInfo_var;
extern Il2CppClass* Dictionary_2_t3898409514_il2cpp_TypeInfo_var;
extern Il2CppClass* IPAddress_t1399971723_il2cpp_TypeInfo_var;
extern Il2CppClass* IPEndPoint_t2615413766_il2cpp_TypeInfo_var;
extern Il2CppClass* Dictionary_2_t2557578811_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m2848358961_MethodInfo_var;
extern const MethodInfo* NetQueue_1__ctor_m2751966236_MethodInfo_var;
extern const MethodInfo* NetQueue_1__ctor_m3815424430_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m3318628702_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m4180928651_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1945917482_MethodInfo_var;
extern const uint32_t NetPeer__ctor_m1244084668_MetadataUsageId;
extern "C"  void NetPeer__ctor_m1244084668 (NetPeer_t1779390221 * __this, NetPeerConfiguration_t136603591 * ___config0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetPeer__ctor_m1244084668_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Il2CppObject * L_0 = (Il2CppObject *)il2cpp_codegen_object_new(Il2CppObject_il2cpp_TypeInfo_var);
		Object__ctor_m2551263788(L_0, /*hidden argument*/NULL);
		__this->set_m_messageReceivedEventCreationLock_2(L_0);
		Il2CppObject * L_1 = (Il2CppObject *)il2cpp_codegen_object_new(Il2CppObject_il2cpp_TypeInfo_var);
		Object__ctor_m2551263788(L_1, /*hidden argument*/NULL);
		__this->set_m_initializeLock_15(L_1);
		__this->set_m_lastSocketBind_18((-3.4028234663852886E+38));
		List_1_t667328605 * L_2 = (List_1_t667328605 *)il2cpp_codegen_object_new(List_1_t667328605_il2cpp_TypeInfo_var);
		List_1__ctor_m2848358961(L_2, /*hidden argument*/List_1__ctor_m2848358961_MethodInfo_var);
		__this->set_m_delayedPackets_30(L_2);
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		NetPeerConfiguration_t136603591 * L_3 = ___config0;
		__this->set_m_configuration_21(L_3);
		NetPeerStatistics_t101027066 * L_4 = (NetPeerStatistics_t101027066 *)il2cpp_codegen_object_new(NetPeerStatistics_t101027066_il2cpp_TypeInfo_var);
		NetPeerStatistics__ctor_m358809733(L_4, __this, /*hidden argument*/NULL);
		__this->set_m_statistics_25(L_4);
		NetQueue_1_t4230780502 * L_5 = (NetQueue_1_t4230780502 *)il2cpp_codegen_object_new(NetQueue_1_t4230780502_il2cpp_TypeInfo_var);
		NetQueue_1__ctor_m2751966236(L_5, 4, /*hidden argument*/NetQueue_1__ctor_m2751966236_MethodInfo_var);
		__this->set_m_releasedIncomingMessages_22(L_5);
		NetQueue_1_t1703294902 * L_6 = (NetQueue_1_t1703294902 *)il2cpp_codegen_object_new(NetQueue_1_t1703294902_il2cpp_TypeInfo_var);
		NetQueue_1__ctor_m3815424430(L_6, 2, /*hidden argument*/NetQueue_1__ctor_m3815424430_MethodInfo_var);
		__this->set_m_unsentUnconnectedMessages_23(L_6);
		List_1_t2700613161 * L_7 = (List_1_t2700613161 *)il2cpp_codegen_object_new(List_1_t2700613161_il2cpp_TypeInfo_var);
		List_1__ctor_m3318628702(L_7, /*hidden argument*/List_1__ctor_m3318628702_MethodInfo_var);
		__this->set_m_connections_3(L_7);
		Dictionary_2_t3898409514 * L_8 = (Dictionary_2_t3898409514 *)il2cpp_codegen_object_new(Dictionary_2_t3898409514_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4180928651(L_8, /*hidden argument*/Dictionary_2__ctor_m4180928651_MethodInfo_var);
		__this->set_m_connectionLookup_4(L_8);
		Dictionary_2_t3898409514 * L_9 = (Dictionary_2_t3898409514 *)il2cpp_codegen_object_new(Dictionary_2_t3898409514_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4180928651(L_9, /*hidden argument*/Dictionary_2__ctor_m4180928651_MethodInfo_var);
		__this->set_m_handshakes_24(L_9);
		IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t1399971723_il2cpp_TypeInfo_var);
		IPAddress_t1399971723 * L_10 = ((IPAddress_t1399971723_StaticFields*)IPAddress_t1399971723_il2cpp_TypeInfo_var->static_fields)->get_Any_4();
		IPEndPoint_t2615413766 * L_11 = (IPEndPoint_t2615413766 *)il2cpp_codegen_object_new(IPEndPoint_t2615413766_il2cpp_TypeInfo_var);
		IPEndPoint__ctor_m3477723888(L_11, L_10, 0, /*hidden argument*/NULL);
		__this->set_m_senderRemote_14(L_11);
		__this->set_m_status_8(0);
		Dictionary_2_t2557578811 * L_12 = (Dictionary_2_t2557578811 *)il2cpp_codegen_object_new(Dictionary_2_t2557578811_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1945917482(L_12, /*hidden argument*/Dictionary_2__ctor_m1945917482_MethodInfo_var);
		__this->set_m_receivedFragmentGroups_7(L_12);
		return;
	}
}
// System.Void Lidgren.Network.NetPeer::Start()
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* NetPeer_t1779390221_il2cpp_TypeInfo_var;
extern Il2CppClass* ThreadStart_t3437517264_il2cpp_TypeInfo_var;
extern Il2CppClass* Thread_t241561612_il2cpp_TypeInfo_var;
extern Il2CppClass* NetUtility_t3562260209_il2cpp_TypeInfo_var;
extern const MethodInfo* NetPeer_NetworkLoop_m1488252008_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1313602929;
extern Il2CppCodeGenString* _stringLiteral2344018411;
extern Il2CppCodeGenString* _stringLiteral613995275;
extern const uint32_t NetPeer_Start_m3936372496_MetadataUsageId;
extern "C"  void NetPeer_Start_m3936372496 (NetPeer_t1779390221 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetPeer_Start_m3936372496_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->get_m_status_8();
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		NetPeer_LogWarning_m3266657906(__this, _stringLiteral1313602929, /*hidden argument*/NULL);
		goto IL_00dd;
	}

IL_0020:
	{
		__this->set_m_status_8(1);
		NetPeerConfiguration_t136603591 * L_2 = __this->get_m_configuration_21();
		NullCheck(L_2);
		String_t* L_3 = NetPeerConfiguration_get_NetworkThreadName_m2092581791(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_3, _stringLiteral2344018411, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (L_5)
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_6 = Interlocked_Increment_m129308425(NULL /*static, unused*/, (((NetPeer_t1779390221_StaticFields*)NetPeer_t1779390221_il2cpp_TypeInfo_var->static_fields)->get_address_of_s_initializedPeersCount_0()), /*hidden argument*/NULL);
		V_0 = L_6;
		NetPeerConfiguration_t136603591 * L_7 = __this->get_m_configuration_21();
		String_t* L_8 = Int32_ToString_m2960866144((&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m2596409543(NULL /*static, unused*/, _stringLiteral613995275, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		NetPeerConfiguration_set_NetworkThreadName_m1927203884(L_7, L_9, /*hidden argument*/NULL);
	}

IL_006d:
	{
		NetPeer_InitializeNetwork_m4038073148(__this, /*hidden argument*/NULL);
		IntPtr_t L_10;
		L_10.set_m_value_0((void*)(void*)NetPeer_NetworkLoop_m1488252008_MethodInfo_var);
		ThreadStart_t3437517264 * L_11 = (ThreadStart_t3437517264 *)il2cpp_codegen_object_new(ThreadStart_t3437517264_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m3015256841(L_11, __this, L_10, /*hidden argument*/NULL);
		Thread_t241561612 * L_12 = (Thread_t241561612 *)il2cpp_codegen_object_new(Thread_t241561612_il2cpp_TypeInfo_var);
		Thread__ctor_m4175494164(L_12, L_11, /*hidden argument*/NULL);
		__this->set_m_networkThread_9(L_12);
		Thread_t241561612 * L_13 = __this->get_m_networkThread_9();
		NetPeerConfiguration_t136603591 * L_14 = __this->get_m_configuration_21();
		NullCheck(L_14);
		String_t* L_15 = NetPeerConfiguration_get_NetworkThreadName_m2092581791(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		Thread_set_Name_m1343706609(L_13, L_15, /*hidden argument*/NULL);
		Thread_t241561612 * L_16 = __this->get_m_networkThread_9();
		NullCheck(L_16);
		Thread_set_IsBackground_m2222126055(L_16, (bool)1, /*hidden argument*/NULL);
		Thread_t241561612 * L_17 = __this->get_m_networkThread_9();
		NullCheck(L_17);
		Thread_Start_m1419497481(L_17, /*hidden argument*/NULL);
		NetUPnP_t2794379482 * L_18 = __this->get_m_upnp_19();
		V_1 = (bool)((((Il2CppObject*)(NetUPnP_t2794379482 *)L_18) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
		bool L_19 = V_1;
		if (L_19)
		{
			goto IL_00d5;
		}
	}
	{
		NetUPnP_t2794379482 * L_20 = __this->get_m_upnp_19();
		NullCheck(L_20);
		NetUPnP_Discover_m2977051670(L_20, __this, /*hidden argument*/NULL);
	}

IL_00d5:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetUtility_t3562260209_il2cpp_TypeInfo_var);
		NetUtility_Sleep_m886463228(NULL /*static, unused*/, ((int32_t)50), /*hidden argument*/NULL);
	}

IL_00dd:
	{
		return;
	}
}
// Lidgren.Network.NetIncomingMessage Lidgren.Network.NetPeer::ReadMessage()
extern const MethodInfo* NetQueue_1_TryDequeue_m2762539262_MethodInfo_var;
extern const uint32_t NetPeer_ReadMessage_m1719847425_MetadataUsageId;
extern "C"  NetIncomingMessage_t2014089816 * NetPeer_ReadMessage_m1719847425 (NetPeer_t1779390221 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetPeer_ReadMessage_m1719847425_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	NetIncomingMessage_t2014089816 * V_0 = NULL;
	int32_t V_1 = 0;
	NetIncomingMessage_t2014089816 * V_2 = NULL;
	bool V_3 = false;
	{
		NetQueue_1_t4230780502 * L_0 = __this->get_m_releasedIncomingMessages_22();
		NullCheck(L_0);
		bool L_1 = NetQueue_1_TryDequeue_m2762539262(L_0, (&V_0), /*hidden argument*/NetQueue_1_TryDequeue_m2762539262_MethodInfo_var);
		V_3 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_3;
		if (L_2)
		{
			goto IL_003c;
		}
	}
	{
		NetIncomingMessage_t2014089816 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = NetIncomingMessage_get_MessageType_m1134653489(L_3, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_3;
		if (L_5)
		{
			goto IL_003b;
		}
	}
	{
		NetIncomingMessage_t2014089816 * L_6 = V_0;
		NullCheck(L_6);
		uint8_t L_7 = NetBuffer_PeekByte_m934254441(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		NetIncomingMessage_t2014089816 * L_8 = V_0;
		NullCheck(L_8);
		NetConnection_t3331492029 * L_9 = NetIncomingMessage_get_SenderConnection_m102869984(L_8, /*hidden argument*/NULL);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		L_9->set_m_visibleStatus_4(L_10);
	}

IL_003b:
	{
	}

IL_003c:
	{
		NetIncomingMessage_t2014089816 * L_11 = V_0;
		V_2 = L_11;
		goto IL_0040;
	}

IL_0040:
	{
		NetIncomingMessage_t2014089816 * L_12 = V_2;
		return L_12;
	}
}
// System.Void Lidgren.Network.NetPeer::SendLibrary(Lidgren.Network.NetOutgoingMessage,System.Net.IPEndPoint)
extern "C"  void NetPeer_SendLibrary_m4133093622 (NetPeer_t1779390221 * __this, NetOutgoingMessage_t2016542980 * ___msg0, IPEndPoint_t2615413766 * ___recipient1, const MethodInfo* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		NetPeer_VerifyNetworkThread_m4075953563(__this, /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1 = L_0->get_m_isSent_6();
		NetException_Assert_m1426298558(NULL /*static, unused*/, (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_2 = ___msg0;
		ByteU5BU5D_t3397334013* L_3 = __this->get_m_sendBuffer_11();
		NullCheck(L_2);
		int32_t L_4 = NetOutgoingMessage_Encode_m2473987076(L_2, L_3, 0, 0, /*hidden argument*/NULL);
		V_1 = L_4;
		int32_t L_5 = V_1;
		IPEndPoint_t2615413766 * L_6 = ___recipient1;
		NetPeer_SendPacket_m625616909(__this, L_5, L_6, 1, (&V_0), /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_7 = ___msg0;
		NullCheck(L_7);
		L_7->set_m_recyclingCount_7(0);
		NetOutgoingMessage_t2016542980 * L_8 = ___msg0;
		NetPeer_Recycle_m2290156780(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Net.IPEndPoint Lidgren.Network.NetPeer::GetNetEndPoint(System.String,System.Int32)
extern Il2CppClass* NetUtility_t3562260209_il2cpp_TypeInfo_var;
extern Il2CppClass* NetException_t2452891498_il2cpp_TypeInfo_var;
extern Il2CppClass* IPEndPoint_t2615413766_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral805736132;
extern const uint32_t NetPeer_GetNetEndPoint_m1659140620_MetadataUsageId;
extern "C"  IPEndPoint_t2615413766 * NetPeer_GetNetEndPoint_m1659140620 (Il2CppObject * __this /* static, unused */, String_t* ___host0, int32_t ___port1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetPeer_GetNetEndPoint_m1659140620_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	IPAddress_t1399971723 * V_0 = NULL;
	IPEndPoint_t2615413766 * V_1 = NULL;
	bool V_2 = false;
	{
		String_t* L_0 = ___host0;
		IL2CPP_RUNTIME_CLASS_INIT(NetUtility_t3562260209_il2cpp_TypeInfo_var);
		IPAddress_t1399971723 * L_1 = NetUtility_Resolve_m1627662274(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IPAddress_t1399971723 * L_2 = V_0;
		V_2 = (bool)((((int32_t)((((Il2CppObject*)(IPAddress_t1399971723 *)L_2) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		NetException_t2452891498 * L_4 = (NetException_t2452891498 *)il2cpp_codegen_object_new(NetException_t2452891498_il2cpp_TypeInfo_var);
		NetException__ctor_m2724322251(L_4, _stringLiteral805736132, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4);
	}

IL_001e:
	{
		IPAddress_t1399971723 * L_5 = V_0;
		int32_t L_6 = ___port1;
		IPEndPoint_t2615413766 * L_7 = (IPEndPoint_t2615413766 *)il2cpp_codegen_object_new(IPEndPoint_t2615413766_il2cpp_TypeInfo_var);
		IPEndPoint__ctor_m3477723888(L_7, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		goto IL_0028;
	}

IL_0028:
	{
		IPEndPoint_t2615413766 * L_8 = V_1;
		return L_8;
	}
}
// Lidgren.Network.NetConnection Lidgren.Network.NetPeer::Connect(System.String,System.Int32)
extern "C"  NetConnection_t3331492029 * NetPeer_Connect_m1304614920 (NetPeer_t1779390221 * __this, String_t* ___host0, int32_t ___port1, const MethodInfo* method)
{
	NetConnection_t3331492029 * V_0 = NULL;
	{
		String_t* L_0 = ___host0;
		int32_t L_1 = ___port1;
		IPEndPoint_t2615413766 * L_2 = NetPeer_GetNetEndPoint_m1659140620(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		NetConnection_t3331492029 * L_3 = VirtFuncInvoker2< NetConnection_t3331492029 *, IPEndPoint_t2615413766 *, NetOutgoingMessage_t2016542980 * >::Invoke(4 /* Lidgren.Network.NetConnection Lidgren.Network.NetPeer::Connect(System.Net.IPEndPoint,Lidgren.Network.NetOutgoingMessage) */, __this, L_2, (NetOutgoingMessage_t2016542980 *)NULL);
		V_0 = L_3;
		goto IL_0012;
	}

IL_0012:
	{
		NetConnection_t3331492029 * L_4 = V_0;
		return L_4;
	}
}
// Lidgren.Network.NetConnection Lidgren.Network.NetPeer::Connect(System.Net.IPEndPoint,Lidgren.Network.NetOutgoingMessage)
extern Il2CppClass* ArgumentNullException_t628810857_il2cpp_TypeInfo_var;
extern Il2CppClass* NetException_t2452891498_il2cpp_TypeInfo_var;
extern Il2CppClass* NetTime_t3056501352_il2cpp_TypeInfo_var;
extern Il2CppClass* NetConnectionStatus_t952199027_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* NetConnection_t3331492029_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_ContainsKey_m2053216074_MethodInfo_var;
extern const MethodInfo* Dictionary_2_TryGetValue_m2698685646_MethodInfo_var;
extern const MethodInfo* Dictionary_2_Add_m462421331_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral599359995;
extern Il2CppCodeGenString* _stringLiteral369833300;
extern Il2CppCodeGenString* _stringLiteral3332880525;
extern Il2CppCodeGenString* _stringLiteral4036189522;
extern const uint32_t NetPeer_Connect_m539482134_MetadataUsageId;
extern "C"  NetConnection_t3331492029 * NetPeer_Connect_m539482134 (NetPeer_t1779390221 * __this, IPEndPoint_t2615413766 * ___remoteEndPoint0, NetOutgoingMessage_t2016542980 * ___hailMessage1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetPeer_Connect_m539482134_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	NetConnection_t3331492029 * V_0 = NULL;
	NetConnection_t3331492029 * V_1 = NULL;
	NetConnection_t3331492029 * V_2 = NULL;
	bool V_3 = false;
	List_1_t2700613161 * V_4 = NULL;
	int32_t V_5 = 0;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IPEndPoint_t2615413766 * L_0 = ___remoteEndPoint0;
		V_3 = (bool)((((int32_t)((((Il2CppObject*)(IPEndPoint_t2615413766 *)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_3;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t628810857 * L_2 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_2, _stringLiteral599359995, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		List_1_t2700613161 * L_3 = __this->get_m_connections_3();
		List_1_t2700613161 * L_4 = L_3;
		V_4 = L_4;
		Monitor_Enter_m2136705809(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0026:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_5 = __this->get_m_status_8();
			V_3 = (bool)((((int32_t)((((int32_t)L_5) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_6 = V_3;
			if (L_6)
			{
				goto IL_0042;
			}
		}

IL_0037:
		{
			NetException_t2452891498 * L_7 = (NetException_t2452891498 *)il2cpp_codegen_object_new(NetException_t2452891498_il2cpp_TypeInfo_var);
			NetException__ctor_m2724322251(L_7, _stringLiteral369833300, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_7);
		}

IL_0042:
		{
			Dictionary_2_t3898409514 * L_8 = __this->get_m_connectionLookup_4();
			IPEndPoint_t2615413766 * L_9 = ___remoteEndPoint0;
			NullCheck(L_8);
			bool L_10 = Dictionary_2_ContainsKey_m2053216074(L_8, L_9, /*hidden argument*/Dictionary_2_ContainsKey_m2053216074_MethodInfo_var);
			V_3 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
			bool L_11 = V_3;
			if (L_11)
			{
				goto IL_0060;
			}
		}

IL_0055:
		{
			NetException_t2452891498 * L_12 = (NetException_t2452891498 *)il2cpp_codegen_object_new(NetException_t2452891498_il2cpp_TypeInfo_var);
			NetException__ctor_m2724322251(L_12, _stringLiteral3332880525, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_12);
		}

IL_0060:
		{
			Dictionary_2_t3898409514 * L_13 = __this->get_m_handshakes_24();
			IPEndPoint_t2615413766 * L_14 = ___remoteEndPoint0;
			NullCheck(L_13);
			bool L_15 = Dictionary_2_TryGetValue_m2698685646(L_13, L_14, (&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m2698685646_MethodInfo_var);
			V_3 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
			bool L_16 = V_3;
			if (L_16)
			{
				goto IL_00c4;
			}
		}

IL_0075:
		{
			NetConnection_t3331492029 * L_17 = V_0;
			NullCheck(L_17);
			int32_t L_18 = L_17->get_m_status_2();
			V_5 = L_18;
			int32_t L_19 = V_5;
			if ((((int32_t)L_19) == ((int32_t)1)))
			{
				goto IL_008a;
			}
		}

IL_0083:
		{
			int32_t L_20 = V_5;
			if ((((int32_t)L_20) == ((int32_t)4)))
			{
				goto IL_0093;
			}
		}

IL_0088:
		{
			goto IL_00a2;
		}

IL_008a:
		{
			NetConnection_t3331492029 * L_21 = V_0;
			NullCheck(L_21);
			L_21->set_m_connectRequested_15((bool)1);
			goto IL_00c0;
		}

IL_0093:
		{
			NetConnection_t3331492029 * L_22 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(NetTime_t3056501352_il2cpp_TypeInfo_var);
			double L_23 = NetTime_get_Now_m1609702533(NULL /*static, unused*/, /*hidden argument*/NULL);
			NullCheck(L_22);
			NetConnection_SendConnectResponse_m1494124902(L_22, L_23, (bool)0, /*hidden argument*/NULL);
			goto IL_00c0;
		}

IL_00a2:
		{
			NetConnection_t3331492029 * L_24 = V_0;
			NullCheck(L_24);
			int32_t L_25 = L_24->get_m_status_2();
			int32_t L_26 = L_25;
			Il2CppObject * L_27 = Box(NetConnectionStatus_t952199027_il2cpp_TypeInfo_var, &L_26);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_28 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral4036189522, L_27, /*hidden argument*/NULL);
			NetPeer_LogWarning_m3266657906(__this, L_28, /*hidden argument*/NULL);
			goto IL_00c0;
		}

IL_00c0:
		{
			NetConnection_t3331492029 * L_29 = V_0;
			V_2 = L_29;
			IL2CPP_LEAVE(0x103, FINALLY_00fa);
		}

IL_00c4:
		{
			IPEndPoint_t2615413766 * L_30 = ___remoteEndPoint0;
			NetConnection_t3331492029 * L_31 = (NetConnection_t3331492029 *)il2cpp_codegen_object_new(NetConnection_t3331492029_il2cpp_TypeInfo_var);
			NetConnection__ctor_m695103806(L_31, __this, L_30, /*hidden argument*/NULL);
			V_1 = L_31;
			NetConnection_t3331492029 * L_32 = V_1;
			NullCheck(L_32);
			L_32->set_m_status_2(1);
			NetConnection_t3331492029 * L_33 = V_1;
			NetOutgoingMessage_t2016542980 * L_34 = ___hailMessage1;
			NullCheck(L_33);
			L_33->set_m_localHailMessage_8(L_34);
			NetConnection_t3331492029 * L_35 = V_1;
			NullCheck(L_35);
			L_35->set_m_connectRequested_15((bool)1);
			NetConnection_t3331492029 * L_36 = V_1;
			NullCheck(L_36);
			L_36->set_m_connectionInitiator_19((bool)1);
			Dictionary_2_t3898409514 * L_37 = __this->get_m_handshakes_24();
			IPEndPoint_t2615413766 * L_38 = ___remoteEndPoint0;
			NetConnection_t3331492029 * L_39 = V_1;
			NullCheck(L_37);
			Dictionary_2_Add_m462421331(L_37, L_38, L_39, /*hidden argument*/Dictionary_2_Add_m462421331_MethodInfo_var);
			NetConnection_t3331492029 * L_40 = V_1;
			V_2 = L_40;
			IL2CPP_LEAVE(0x103, FINALLY_00fa);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_00fa;
	}

FINALLY_00fa:
	{ // begin finally (depth: 1)
		List_1_t2700613161 * L_41 = V_4;
		Monitor_Exit_m2677760297(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(250)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(250)
	{
		IL2CPP_JUMP_TBL(0x103, IL_0103)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_0103:
	{
		NetConnection_t3331492029 * L_42 = V_2;
		return L_42;
	}
}
// System.Void Lidgren.Network.NetPeer::RawSend(System.Byte[],System.Int32,System.Int32,System.Net.IPEndPoint)
extern "C"  void NetPeer_RawSend_m737396087 (NetPeer_t1779390221 * __this, ByteU5BU5D_t3397334013* ___arr0, int32_t ___offset1, int32_t ___length2, IPEndPoint_t2615413766 * ___destination3, const MethodInfo* method)
{
	bool V_0 = false;
	{
		ByteU5BU5D_t3397334013* L_0 = ___arr0;
		int32_t L_1 = ___offset1;
		ByteU5BU5D_t3397334013* L_2 = __this->get_m_sendBuffer_11();
		int32_t L_3 = ___length2;
		Array_Copy_m3808317496(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_0, L_1, (Il2CppArray *)(Il2CppArray *)L_2, 0, L_3, /*hidden argument*/NULL);
		int32_t L_4 = ___length2;
		IPEndPoint_t2615413766 * L_5 = ___destination3;
		NetPeer_SendPacket_m625616909(__this, L_4, L_5, 1, (&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Lidgren.Network.NetPeer::ThrowOrLog(System.String)
extern Il2CppClass* NetException_t2452891498_il2cpp_TypeInfo_var;
extern const uint32_t NetPeer_ThrowOrLog_m2301784333_MetadataUsageId;
extern "C"  void NetPeer_ThrowOrLog_m2301784333 (NetPeer_t1779390221 * __this, String_t* ___message0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetPeer_ThrowOrLog_m2301784333_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___message0;
		NetException_t2452891498 * L_1 = (NetException_t2452891498 *)il2cpp_codegen_object_new(NetException_t2452891498_il2cpp_TypeInfo_var);
		NetException__ctor_m2724322251(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}
}
// Lidgren.Network.NetSendResult Lidgren.Network.NetPeer::SendFragmentedMessage(Lidgren.Network.NetOutgoingMessage,System.Collections.Generic.IList`1<Lidgren.Network.NetConnection>,Lidgren.Network.NetDeliveryMethod,System.Int32)
extern Il2CppClass* ICollection_1_t4283567334_il2cpp_TypeInfo_var;
extern Il2CppClass* IEnumerable_1_t3623619074_il2cpp_TypeInfo_var;
extern Il2CppClass* IEnumerator_1_t807015856_il2cpp_TypeInfo_var;
extern Il2CppClass* IEnumerator_t1466026749_il2cpp_TypeInfo_var;
extern Il2CppClass* IDisposable_t2427283555_il2cpp_TypeInfo_var;
extern const uint32_t NetPeer_SendFragmentedMessage_m1345482430_MetadataUsageId;
extern "C"  int32_t NetPeer_SendFragmentedMessage_m1345482430 (NetPeer_t1779390221 * __this, NetOutgoingMessage_t2016542980 * ___msg0, Il2CppObject* ___recipients1, uint8_t ___method2, int32_t ___sequenceChannel3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetPeer_SendFragmentedMessage_m1345482430_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	NetOutgoingMessage_t2016542980 * V_9 = NULL;
	NetConnection_t3331492029 * V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	bool V_13 = false;
	Il2CppObject* V_14 = NULL;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	NetOutgoingMessage_t2016542980 * G_B7_0 = NULL;
	NetOutgoingMessage_t2016542980 * G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	NetOutgoingMessage_t2016542980 * G_B8_1 = NULL;
	{
		int32_t* L_0 = __this->get_address_of_m_lastUsedFragmentGroup_6();
		int32_t L_1 = Interlocked_Increment_m129308425(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_13 = (bool)((((int32_t)L_2) < ((int32_t)((int32_t)65534)))? 1 : 0);
		bool L_3 = V_13;
		if (L_3)
		{
			goto IL_0026;
		}
	}
	{
		__this->set_m_lastUsedFragmentGroup_6(1);
		V_0 = 1;
	}

IL_0026:
	{
		NetOutgoingMessage_t2016542980 * L_4 = ___msg0;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		L_4->set_m_fragmentGroup_8(L_5);
		NetOutgoingMessage_t2016542980 * L_6 = ___msg0;
		NullCheck(L_6);
		int32_t L_7 = NetBuffer_get_LengthBytes_m2765088638(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		Il2CppObject* L_8 = ___recipients1;
		int32_t L_9 = NetPeer_GetMTU_m2569335695(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		int32_t L_12 = V_2;
		int32_t L_13 = NetFragmentationHelper_GetBestChunkSize_m1359511180(NULL /*static, unused*/, L_10, L_11, L_12, /*hidden argument*/NULL);
		V_3 = L_13;
		int32_t L_14 = V_1;
		int32_t L_15 = V_3;
		V_4 = ((int32_t)((int32_t)L_14/(int32_t)L_15));
		int32_t L_16 = V_4;
		int32_t L_17 = V_3;
		int32_t L_18 = V_1;
		V_13 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_16*(int32_t)L_17))) < ((int32_t)L_18))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_13;
		if (L_19)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_20 = V_4;
		V_4 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_005f:
	{
		V_5 = 1;
		int32_t L_21 = V_3;
		V_6 = ((int32_t)((int32_t)L_21*(int32_t)8));
		NetOutgoingMessage_t2016542980 * L_22 = ___msg0;
		NullCheck(L_22);
		int32_t L_23 = NetBuffer_get_LengthBits_m2426148225(L_22, /*hidden argument*/NULL);
		V_7 = L_23;
		V_8 = 0;
		goto IL_017f;
	}

IL_0077:
	{
		NetOutgoingMessage_t2016542980 * L_24 = NetPeer_CreateMessage_m3328975762(__this, 0, /*hidden argument*/NULL);
		V_9 = L_24;
		NetOutgoingMessage_t2016542980 * L_25 = V_9;
		int32_t L_26 = V_7;
		int32_t L_27 = V_6;
		G_B6_0 = L_25;
		if ((((int32_t)L_26) > ((int32_t)L_27)))
		{
			G_B7_0 = L_25;
			goto IL_008d;
		}
	}
	{
		int32_t L_28 = V_7;
		G_B8_0 = L_28;
		G_B8_1 = G_B6_0;
		goto IL_008f;
	}

IL_008d:
	{
		int32_t L_29 = V_6;
		G_B8_0 = L_29;
		G_B8_1 = G_B7_0;
	}

IL_008f:
	{
		NullCheck(G_B8_1);
		((NetBuffer_t3608062491 *)G_B8_1)->set_m_bitLength_3(G_B8_0);
		NetOutgoingMessage_t2016542980 * L_30 = V_9;
		NetOutgoingMessage_t2016542980 * L_31 = ___msg0;
		NullCheck(L_31);
		ByteU5BU5D_t3397334013* L_32 = ((NetBuffer_t3608062491 *)L_31)->get_m_data_2();
		NullCheck(L_30);
		((NetBuffer_t3608062491 *)L_30)->set_m_data_2(L_32);
		NetOutgoingMessage_t2016542980 * L_33 = V_9;
		int32_t L_34 = V_0;
		NullCheck(L_33);
		L_33->set_m_fragmentGroup_8(L_34);
		NetOutgoingMessage_t2016542980 * L_35 = V_9;
		int32_t L_36 = V_1;
		NullCheck(L_35);
		L_35->set_m_fragmentGroupTotalBits_9(((int32_t)((int32_t)L_36*(int32_t)8)));
		NetOutgoingMessage_t2016542980 * L_37 = V_9;
		int32_t L_38 = V_3;
		NullCheck(L_37);
		L_37->set_m_fragmentChunkByteSize_10(L_38);
		NetOutgoingMessage_t2016542980 * L_39 = V_9;
		int32_t L_40 = V_8;
		NullCheck(L_39);
		L_39->set_m_fragmentChunkNumber_11(L_40);
		NetOutgoingMessage_t2016542980 * L_41 = V_9;
		NullCheck(L_41);
		int32_t L_42 = ((NetBuffer_t3608062491 *)L_41)->get_m_bitLength_3();
		NetException_Assert_m1426298558(NULL /*static, unused*/, (bool)((((int32_t)((((int32_t)L_42) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_43 = V_9;
		NullCheck(L_43);
		int32_t L_44 = NetOutgoingMessage_GetEncodedSize_m3842097810(L_43, /*hidden argument*/NULL);
		int32_t L_45 = V_2;
		NetException_Assert_m1426298558(NULL /*static, unused*/, (bool)((((int32_t)L_44) < ((int32_t)L_45))? 1 : 0), /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_46 = V_9;
		NullCheck(L_46);
		int32_t* L_47 = L_46->get_address_of_m_recyclingCount_7();
		Il2CppObject* L_48 = ___recipients1;
		NullCheck(L_48);
		int32_t L_49 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Lidgren.Network.NetConnection>::get_Count() */, ICollection_1_t4283567334_il2cpp_TypeInfo_var, L_48);
		Interlocked_Add_m2992456762(NULL /*static, unused*/, L_47, L_49, /*hidden argument*/NULL);
		Il2CppObject* L_50 = ___recipients1;
		NullCheck(L_50);
		Il2CppObject* L_51 = InterfaceFuncInvoker0< Il2CppObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Lidgren.Network.NetConnection>::GetEnumerator() */, IEnumerable_1_t3623619074_il2cpp_TypeInfo_var, L_50);
		V_14 = L_51;
	}

IL_0104:
	try
	{ // begin try (depth: 1)
		{
			goto IL_014d;
		}

IL_0106:
		{
			Il2CppObject* L_52 = V_14;
			NullCheck(L_52);
			NetConnection_t3331492029 * L_53 = InterfaceFuncInvoker0< NetConnection_t3331492029 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Lidgren.Network.NetConnection>::get_Current() */, IEnumerator_1_t807015856_il2cpp_TypeInfo_var, L_52);
			V_10 = L_53;
			NetConnection_t3331492029 * L_54 = V_10;
			NetOutgoingMessage_t2016542980 * L_55 = V_9;
			uint8_t L_56 = ___method2;
			int32_t L_57 = ___sequenceChannel3;
			NullCheck(L_54);
			int32_t L_58 = NetConnection_EnqueueMessage_m3897273412(L_54, L_55, L_56, L_57, /*hidden argument*/NULL);
			V_11 = L_58;
			int32_t L_59 = V_11;
			V_13 = (bool)((((int32_t)((((int32_t)L_59) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_60 = V_13;
			if (L_60)
			{
				goto IL_0139;
			}
		}

IL_012c:
		{
			NetOutgoingMessage_t2016542980 * L_61 = V_9;
			NullCheck(L_61);
			int32_t* L_62 = L_61->get_address_of_m_recyclingCount_7();
			Interlocked_Decrement_m70525859(NULL /*static, unused*/, L_62, /*hidden argument*/NULL);
		}

IL_0139:
		{
			int32_t L_63 = V_11;
			int32_t L_64 = V_5;
			V_13 = (bool)((((int32_t)((((int32_t)L_63) > ((int32_t)L_64))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_65 = V_13;
			if (L_65)
			{
				goto IL_014c;
			}
		}

IL_0148:
		{
			int32_t L_66 = V_11;
			V_5 = L_66;
		}

IL_014c:
		{
		}

IL_014d:
		{
			Il2CppObject* L_67 = V_14;
			NullCheck(L_67);
			bool L_68 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_67);
			V_13 = L_68;
			bool L_69 = V_13;
			if (L_69)
			{
				goto IL_0106;
			}
		}

IL_015a:
		{
			IL2CPP_LEAVE(0x170, FINALLY_015c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_015c;
	}

FINALLY_015c:
	{ // begin finally (depth: 1)
		{
			Il2CppObject* L_70 = V_14;
			V_13 = (bool)((((Il2CppObject*)(Il2CppObject*)L_70) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
			bool L_71 = V_13;
			if (L_71)
			{
				goto IL_016f;
			}
		}

IL_0167:
		{
			Il2CppObject* L_72 = V_14;
			NullCheck(L_72);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_72);
		}

IL_016f:
		{
			IL2CPP_END_FINALLY(348)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(348)
	{
		IL2CPP_JUMP_TBL(0x170, IL_0170)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_0170:
	{
		int32_t L_73 = V_7;
		int32_t L_74 = V_6;
		V_7 = ((int32_t)((int32_t)L_73-(int32_t)L_74));
		int32_t L_75 = V_8;
		V_8 = ((int32_t)((int32_t)L_75+(int32_t)1));
	}

IL_017f:
	{
		int32_t L_76 = V_8;
		int32_t L_77 = V_4;
		V_13 = (bool)((((int32_t)L_76) < ((int32_t)L_77))? 1 : 0);
		bool L_78 = V_13;
		if (L_78)
		{
			goto IL_0077;
		}
	}
	{
		int32_t L_79 = V_5;
		V_12 = L_79;
		goto IL_0194;
	}

IL_0194:
	{
		int32_t L_80 = V_12;
		return L_80;
	}
}
// System.Void Lidgren.Network.NetPeer::HandleReleasedFragment(Lidgren.Network.NetIncomingMessage)
extern Il2CppClass* NetUtility_t3562260209_il2cpp_TypeInfo_var;
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Dictionary_2_t3116406337_il2cpp_TypeInfo_var;
extern Il2CppClass* ReceivedFragmentGroup_t4108580702_il2cpp_TypeInfo_var;
extern Il2CppClass* ByteU5BU5D_t3397334013_il2cpp_TypeInfo_var;
extern Il2CppClass* NetBitVector_t1774780753_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_TryGetValue_m1324564509_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m752686887_MethodInfo_var;
extern const MethodInfo* Dictionary_2_set_Item_m3704576329_MethodInfo_var;
extern const MethodInfo* Dictionary_2_TryGetValue_m855411342_MethodInfo_var;
extern const MethodInfo* Dictionary_2_set_Item_m2302260864_MethodInfo_var;
extern const MethodInfo* Dictionary_2_Remove_m1546056622_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral4240255234;
extern Il2CppCodeGenString* _stringLiteral3074570466;
extern Il2CppCodeGenString* _stringLiteral372029317;
extern Il2CppCodeGenString* _stringLiteral2270452699;
extern Il2CppCodeGenString* _stringLiteral728633301;
extern Il2CppCodeGenString* _stringLiteral455075110;
extern Il2CppCodeGenString* _stringLiteral3852101942;
extern Il2CppCodeGenString* _stringLiteral399521832;
extern Il2CppCodeGenString* _stringLiteral2353303200;
extern Il2CppCodeGenString* _stringLiteral321480496;
extern Il2CppCodeGenString* _stringLiteral2676434177;
extern const uint32_t NetPeer_HandleReleasedFragment_m1676538552_MetadataUsageId;
extern "C"  void NetPeer_HandleReleasedFragment_m1676538552 (NetPeer_t1779390221 * __this, NetIncomingMessage_t2014089816 * ___im0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetPeer_HandleReleasedFragment_m1676538552_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Dictionary_2_t3116406337 * V_7 = NULL;
	ReceivedFragmentGroup_t4108580702 * V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	bool V_11 = false;
	ObjectU5BU5D_t3614634134* V_12 = NULL;
	{
		NetPeer_VerifyNetworkThread_m4075953563(__this, /*hidden argument*/NULL);
		NetIncomingMessage_t2014089816 * L_0 = ___im0;
		NullCheck(L_0);
		ByteU5BU5D_t3397334013* L_1 = ((NetBuffer_t3608062491 *)L_0)->get_m_data_2();
		int32_t L_2 = NetFragmentationHelper_ReadHeader_m1346941602(NULL /*static, unused*/, L_1, 0, (&V_0), (&V_1), (&V_2), (&V_3), /*hidden argument*/NULL);
		V_4 = L_2;
		NetIncomingMessage_t2014089816 * L_3 = ___im0;
		NullCheck(L_3);
		int32_t L_4 = NetBuffer_get_LengthBytes_m2765088638(L_3, /*hidden argument*/NULL);
		int32_t L_5 = V_4;
		NetException_Assert_m1426298558(NULL /*static, unused*/, (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0), /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		NetException_Assert_m1426298558(NULL /*static, unused*/, (bool)((((int32_t)L_6) > ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		NetException_Assert_m1426298558(NULL /*static, unused*/, (bool)((((int32_t)L_7) > ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		int32_t L_8 = V_2;
		NetException_Assert_m1426298558(NULL /*static, unused*/, (bool)((((int32_t)L_8) > ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		int32_t L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(NetUtility_t3562260209_il2cpp_TypeInfo_var);
		int32_t L_10 = NetUtility_BytesToHoldBits_m1372162852(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		V_5 = L_10;
		int32_t L_11 = V_5;
		int32_t L_12 = V_2;
		V_6 = ((int32_t)((int32_t)L_11/(int32_t)L_12));
		int32_t L_13 = V_6;
		int32_t L_14 = V_2;
		int32_t L_15 = V_5;
		V_11 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_13*(int32_t)L_14))) < ((int32_t)L_15))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_11;
		if (L_16)
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_17 = V_6;
		V_6 = ((int32_t)((int32_t)L_17+(int32_t)1));
	}

IL_0071:
	{
		int32_t L_18 = V_3;
		int32_t L_19 = V_6;
		NetException_Assert_m1426298558(NULL /*static, unused*/, (bool)((((int32_t)L_18) < ((int32_t)L_19))? 1 : 0), /*hidden argument*/NULL);
		int32_t L_20 = V_3;
		int32_t L_21 = V_6;
		V_11 = (bool)((((int32_t)L_20) < ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_11;
		if (L_22)
		{
			goto IL_00d3;
		}
	}
	{
		V_12 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)5));
		ObjectU5BU5D_t3614634134* L_23 = V_12;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, 0);
		ArrayElementTypeCheck (L_23, _stringLiteral4240255234);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral4240255234);
		ObjectU5BU5D_t3614634134* L_24 = V_12;
		int32_t L_25 = V_3;
		int32_t L_26 = L_25;
		Il2CppObject * L_27 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 1);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_27);
		ObjectU5BU5D_t3614634134* L_28 = V_12;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 2);
		ArrayElementTypeCheck (L_28, _stringLiteral3074570466);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral3074570466);
		ObjectU5BU5D_t3614634134* L_29 = V_12;
		int32_t L_30 = V_6;
		int32_t L_31 = L_30;
		Il2CppObject * L_32 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, 3);
		ArrayElementTypeCheck (L_29, L_32);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_32);
		ObjectU5BU5D_t3614634134* L_33 = V_12;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, 4);
		ArrayElementTypeCheck (L_33, _stringLiteral372029317);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(4), (Il2CppObject *)_stringLiteral372029317);
		ObjectU5BU5D_t3614634134* L_34 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_35 = String_Concat_m3881798623(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		NetPeer_LogWarning_m3266657906(__this, L_35, /*hidden argument*/NULL);
		goto IL_0296;
	}

IL_00d3:
	{
		Dictionary_2_t2557578811 * L_36 = __this->get_m_receivedFragmentGroups_7();
		NetIncomingMessage_t2014089816 * L_37 = ___im0;
		NullCheck(L_37);
		NetConnection_t3331492029 * L_38 = NetIncomingMessage_get_SenderConnection_m102869984(L_37, /*hidden argument*/NULL);
		NullCheck(L_36);
		bool L_39 = Dictionary_2_TryGetValue_m1324564509(L_36, L_38, (&V_7), /*hidden argument*/Dictionary_2_TryGetValue_m1324564509_MethodInfo_var);
		V_11 = L_39;
		bool L_40 = V_11;
		if (L_40)
		{
			goto IL_0109;
		}
	}
	{
		Dictionary_2_t3116406337 * L_41 = (Dictionary_2_t3116406337 *)il2cpp_codegen_object_new(Dictionary_2_t3116406337_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m752686887(L_41, /*hidden argument*/Dictionary_2__ctor_m752686887_MethodInfo_var);
		V_7 = L_41;
		Dictionary_2_t2557578811 * L_42 = __this->get_m_receivedFragmentGroups_7();
		NetIncomingMessage_t2014089816 * L_43 = ___im0;
		NullCheck(L_43);
		NetConnection_t3331492029 * L_44 = NetIncomingMessage_get_SenderConnection_m102869984(L_43, /*hidden argument*/NULL);
		Dictionary_2_t3116406337 * L_45 = V_7;
		NullCheck(L_42);
		Dictionary_2_set_Item_m3704576329(L_42, L_44, L_45, /*hidden argument*/Dictionary_2_set_Item_m3704576329_MethodInfo_var);
	}

IL_0109:
	{
		Dictionary_2_t3116406337 * L_46 = V_7;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		bool L_48 = Dictionary_2_TryGetValue_m855411342(L_46, L_47, (&V_8), /*hidden argument*/Dictionary_2_TryGetValue_m855411342_MethodInfo_var);
		V_11 = L_48;
		bool L_49 = V_11;
		if (L_49)
		{
			goto IL_0149;
		}
	}
	{
		ReceivedFragmentGroup_t4108580702 * L_50 = (ReceivedFragmentGroup_t4108580702 *)il2cpp_codegen_object_new(ReceivedFragmentGroup_t4108580702_il2cpp_TypeInfo_var);
		ReceivedFragmentGroup__ctor_m4190711617(L_50, /*hidden argument*/NULL);
		V_8 = L_50;
		ReceivedFragmentGroup_t4108580702 * L_51 = V_8;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		L_51->set_Data_0(((ByteU5BU5D_t3397334013*)SZArrayNew(ByteU5BU5D_t3397334013_il2cpp_TypeInfo_var, (uint32_t)L_52)));
		ReceivedFragmentGroup_t4108580702 * L_53 = V_8;
		int32_t L_54 = V_6;
		NetBitVector_t1774780753 * L_55 = (NetBitVector_t1774780753 *)il2cpp_codegen_object_new(NetBitVector_t1774780753_il2cpp_TypeInfo_var);
		NetBitVector__ctor_m1517128273(L_55, L_54, /*hidden argument*/NULL);
		NullCheck(L_53);
		L_53->set_ReceivedChunks_1(L_55);
		Dictionary_2_t3116406337 * L_56 = V_7;
		int32_t L_57 = V_0;
		ReceivedFragmentGroup_t4108580702 * L_58 = V_8;
		NullCheck(L_56);
		Dictionary_2_set_Item_m2302260864(L_56, L_57, L_58, /*hidden argument*/Dictionary_2_set_Item_m2302260864_MethodInfo_var);
	}

IL_0149:
	{
		ReceivedFragmentGroup_t4108580702 * L_59 = V_8;
		NullCheck(L_59);
		NetBitVector_t1774780753 * L_60 = L_59->get_ReceivedChunks_1();
		int32_t L_61 = V_3;
		NullCheck(L_60);
		NetBitVector_set_Bit_m3149930918(L_60, L_61, (bool)1, /*hidden argument*/NULL);
		int32_t L_62 = V_3;
		int32_t L_63 = V_2;
		V_9 = ((int32_t)((int32_t)L_62*(int32_t)L_63));
		NetIncomingMessage_t2014089816 * L_64 = ___im0;
		NullCheck(L_64);
		ByteU5BU5D_t3397334013* L_65 = ((NetBuffer_t3608062491 *)L_64)->get_m_data_2();
		int32_t L_66 = V_4;
		ReceivedFragmentGroup_t4108580702 * L_67 = V_8;
		NullCheck(L_67);
		ByteU5BU5D_t3397334013* L_68 = L_67->get_Data_0();
		int32_t L_69 = V_9;
		NetIncomingMessage_t2014089816 * L_70 = ___im0;
		NullCheck(L_70);
		int32_t L_71 = NetBuffer_get_LengthBytes_m2765088638(L_70, /*hidden argument*/NULL);
		int32_t L_72 = V_4;
		Buffer_BlockCopy_m1586717258(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_65, L_66, (Il2CppArray *)(Il2CppArray *)L_68, L_69, ((int32_t)((int32_t)L_71-(int32_t)L_72)), /*hidden argument*/NULL);
		ReceivedFragmentGroup_t4108580702 * L_73 = V_8;
		NullCheck(L_73);
		NetBitVector_t1774780753 * L_74 = L_73->get_ReceivedChunks_1();
		NullCheck(L_74);
		int32_t L_75 = NetBitVector_Count_m179947577(L_74, /*hidden argument*/NULL);
		V_10 = L_75;
		V_12 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)7));
		ObjectU5BU5D_t3614634134* L_76 = V_12;
		NullCheck(L_76);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_76, 0);
		ArrayElementTypeCheck (L_76, _stringLiteral2270452699);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral2270452699);
		ObjectU5BU5D_t3614634134* L_77 = V_12;
		int32_t L_78 = V_3;
		int32_t L_79 = L_78;
		Il2CppObject * L_80 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_79);
		NullCheck(L_77);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_77, 1);
		ArrayElementTypeCheck (L_77, L_80);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_80);
		ObjectU5BU5D_t3614634134* L_81 = V_12;
		NullCheck(L_81);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_81, 2);
		ArrayElementTypeCheck (L_81, _stringLiteral728633301);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral728633301);
		ObjectU5BU5D_t3614634134* L_82 = V_12;
		int32_t L_83 = V_6;
		int32_t L_84 = L_83;
		Il2CppObject * L_85 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_84);
		NullCheck(L_82);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_82, 3);
		ArrayElementTypeCheck (L_82, L_85);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_85);
		ObjectU5BU5D_t3614634134* L_86 = V_12;
		NullCheck(L_86);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_86, 4);
		ArrayElementTypeCheck (L_86, _stringLiteral455075110);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(4), (Il2CppObject *)_stringLiteral455075110);
		ObjectU5BU5D_t3614634134* L_87 = V_12;
		int32_t L_88 = V_10;
		int32_t L_89 = L_88;
		Il2CppObject * L_90 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_89);
		NullCheck(L_87);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_87, 5);
		ArrayElementTypeCheck (L_87, L_90);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(5), (Il2CppObject *)L_90);
		ObjectU5BU5D_t3614634134* L_91 = V_12;
		NullCheck(L_91);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_91, 6);
		ArrayElementTypeCheck (L_91, _stringLiteral3852101942);
		(L_91)->SetAt(static_cast<il2cpp_array_size_t>(6), (Il2CppObject *)_stringLiteral3852101942);
		ObjectU5BU5D_t3614634134* L_92 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_93 = String_Concat_m3881798623(NULL /*static, unused*/, L_92, /*hidden argument*/NULL);
		NetPeer_LogVerbose_m3434660420(__this, L_93, /*hidden argument*/NULL);
		ReceivedFragmentGroup_t4108580702 * L_94 = V_8;
		NullCheck(L_94);
		NetBitVector_t1774780753 * L_95 = L_94->get_ReceivedChunks_1();
		NullCheck(L_95);
		int32_t L_96 = NetBitVector_Count_m179947577(L_95, /*hidden argument*/NULL);
		int32_t L_97 = V_6;
		V_11 = (bool)((((int32_t)((((int32_t)L_96) == ((int32_t)L_97))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_98 = V_11;
		if (L_98)
		{
			goto IL_028a;
		}
	}
	{
		NetIncomingMessage_t2014089816 * L_99 = ___im0;
		ReceivedFragmentGroup_t4108580702 * L_100 = V_8;
		NullCheck(L_100);
		ByteU5BU5D_t3397334013* L_101 = L_100->get_Data_0();
		NullCheck(L_99);
		((NetBuffer_t3608062491 *)L_99)->set_m_data_2(L_101);
		NetIncomingMessage_t2014089816 * L_102 = ___im0;
		int32_t L_103 = V_1;
		NullCheck(L_102);
		((NetBuffer_t3608062491 *)L_102)->set_m_bitLength_3(L_103);
		NetIncomingMessage_t2014089816 * L_104 = ___im0;
		NullCheck(L_104);
		L_104->set_m_isFragment_10((bool)0);
		V_12 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)7));
		ObjectU5BU5D_t3614634134* L_105 = V_12;
		NullCheck(L_105);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_105, 0);
		ArrayElementTypeCheck (L_105, _stringLiteral399521832);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral399521832);
		ObjectU5BU5D_t3614634134* L_106 = V_12;
		int32_t L_107 = V_0;
		int32_t L_108 = L_107;
		Il2CppObject * L_109 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_108);
		NullCheck(L_106);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_106, 1);
		ArrayElementTypeCheck (L_106, L_109);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_109);
		ObjectU5BU5D_t3614634134* L_110 = V_12;
		NullCheck(L_110);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_110, 2);
		ArrayElementTypeCheck (L_110, _stringLiteral2353303200);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral2353303200);
		ObjectU5BU5D_t3614634134* L_111 = V_12;
		int32_t L_112 = V_6;
		int32_t L_113 = L_112;
		Il2CppObject * L_114 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_113);
		NullCheck(L_111);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_111, 3);
		ArrayElementTypeCheck (L_111, L_114);
		(L_111)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_114);
		ObjectU5BU5D_t3614634134* L_115 = V_12;
		NullCheck(L_115);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_115, 4);
		ArrayElementTypeCheck (L_115, _stringLiteral321480496);
		(L_115)->SetAt(static_cast<il2cpp_array_size_t>(4), (Il2CppObject *)_stringLiteral321480496);
		ObjectU5BU5D_t3614634134* L_116 = V_12;
		int32_t L_117 = V_1;
		int32_t L_118 = L_117;
		Il2CppObject * L_119 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_118);
		NullCheck(L_116);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_116, 5);
		ArrayElementTypeCheck (L_116, L_119);
		(L_116)->SetAt(static_cast<il2cpp_array_size_t>(5), (Il2CppObject *)L_119);
		ObjectU5BU5D_t3614634134* L_120 = V_12;
		NullCheck(L_120);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_120, 6);
		ArrayElementTypeCheck (L_120, _stringLiteral2676434177);
		(L_120)->SetAt(static_cast<il2cpp_array_size_t>(6), (Il2CppObject *)_stringLiteral2676434177);
		ObjectU5BU5D_t3614634134* L_121 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_122 = String_Concat_m3881798623(NULL /*static, unused*/, L_121, /*hidden argument*/NULL);
		NetPeer_LogVerbose_m3434660420(__this, L_122, /*hidden argument*/NULL);
		Dictionary_2_t3116406337 * L_123 = V_7;
		int32_t L_124 = V_0;
		NullCheck(L_123);
		Dictionary_2_Remove_m1546056622(L_123, L_124, /*hidden argument*/Dictionary_2_Remove_m1546056622_MethodInfo_var);
		NetIncomingMessage_t2014089816 * L_125 = ___im0;
		NetPeer_ReleaseMessage_m3520648965(__this, L_125, /*hidden argument*/NULL);
		goto IL_0294;
	}

IL_028a:
	{
		NetIncomingMessage_t2014089816 * L_126 = ___im0;
		NetPeer_Recycle_m1601919902(__this, L_126, /*hidden argument*/NULL);
	}

IL_0294:
	{
		goto IL_0296;
	}

IL_0296:
	{
		return;
	}
}
// System.Net.Sockets.Socket Lidgren.Network.NetPeer::get_Socket()
extern "C"  Socket_t3821512045 * NetPeer_get_Socket_m1042619742 (NetPeer_t1779390221 * __this, const MethodInfo* method)
{
	Socket_t3821512045 * V_0 = NULL;
	{
		Socket_t3821512045 * L_0 = __this->get_m_socket_10();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Socket_t3821512045 * L_1 = V_0;
		return L_1;
	}
}
// System.Void Lidgren.Network.NetPeer::ReleaseMessage(Lidgren.Network.NetIncomingMessage)
extern Il2CppClass* Exception_t1927440687_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* NetQueue_1_Enqueue_m989769817_MethodInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m2323646086_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m1930271102_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m884872724_MethodInfo_var;
extern const MethodInfo* Enumerator_Dispose_m3281725221_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral3176581795;
extern const uint32_t NetPeer_ReleaseMessage_m3520648965_MetadataUsageId;
extern "C"  void NetPeer_ReleaseMessage_m3520648965 (NetPeer_t1779390221 * __this, NetIncomingMessage_t2014089816 * ___msg0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetPeer_ReleaseMessage_m3520648965_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	NetTuple_2_t1886281639  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Exception_t1927440687 * V_1 = NULL;
	bool V_2 = false;
	Enumerator_t790132445  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		NetIncomingMessage_t2014089816 * L_0 = ___msg0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_m_incomingMessageType_5();
		NetException_Assert_m1426298558(NULL /*static, unused*/, (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		NetIncomingMessage_t2014089816 * L_2 = ___msg0;
		NullCheck(L_2);
		bool L_3 = L_2->get_m_isFragment_10();
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		NetIncomingMessage_t2014089816 * L_5 = ___msg0;
		NetPeer_HandleReleasedFragment_m1676538552(__this, L_5, /*hidden argument*/NULL);
		goto IL_00ca;
	}

IL_002e:
	{
		NetQueue_1_t4230780502 * L_6 = __this->get_m_releasedIncomingMessages_22();
		NetIncomingMessage_t2014089816 * L_7 = ___msg0;
		NullCheck(L_6);
		NetQueue_1_Enqueue_m989769817(L_6, L_7, /*hidden argument*/NetQueue_1_Enqueue_m989769817_MethodInfo_var);
		AutoResetEvent_t15112628 * L_8 = __this->get_m_messageReceivedEvent_28();
		V_2 = (bool)((((Il2CppObject*)(AutoResetEvent_t15112628 *)L_8) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
		bool L_9 = V_2;
		if (L_9)
		{
			goto IL_0054;
		}
	}
	{
		AutoResetEvent_t15112628 * L_10 = __this->get_m_messageReceivedEvent_28();
		NullCheck(L_10);
		EventWaitHandle_Set_m2975776670(L_10, /*hidden argument*/NULL);
	}

IL_0054:
	{
		List_1_t1255402771 * L_11 = __this->get_m_receiveCallbacks_29();
		V_2 = (bool)((((Il2CppObject*)(List_1_t1255402771 *)L_11) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
		bool L_12 = V_2;
		if (L_12)
		{
			goto IL_00ca;
		}
	}
	{
		List_1_t1255402771 * L_13 = __this->get_m_receiveCallbacks_29();
		NullCheck(L_13);
		Enumerator_t790132445  L_14 = List_1_GetEnumerator_m2323646086(L_13, /*hidden argument*/List_1_GetEnumerator_m2323646086_MethodInfo_var);
		V_3 = L_14;
	}

IL_006f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00ac;
		}

IL_0071:
		{
			NetTuple_2_t1886281639  L_15 = Enumerator_get_Current_m1930271102((&V_3), /*hidden argument*/Enumerator_get_Current_m1930271102_MethodInfo_var);
			V_0 = L_15;
		}

IL_007a:
		try
		{ // begin try (depth: 2)
			SynchronizationContext_t3857790437 * L_16 = (&V_0)->get_Item1_0();
			SendOrPostCallback_t296893742 * L_17 = (&V_0)->get_Item2_1();
			NullCheck(L_16);
			VirtActionInvoker2< SendOrPostCallback_t296893742 *, Il2CppObject * >::Invoke(4 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, L_16, L_17, __this);
			goto IL_00aa;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t1927440687 *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t1927440687_il2cpp_TypeInfo_var, e.ex->object.klass))
				goto CATCH_0093;
			throw e;
		}

CATCH_0093:
		{ // begin catch(System.Exception)
			V_1 = ((Exception_t1927440687 *)__exception_local);
			Exception_t1927440687 * L_18 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_19 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral3176581795, L_18, /*hidden argument*/NULL);
			NetPeer_LogWarning_m3266657906(__this, L_19, /*hidden argument*/NULL);
			goto IL_00aa;
		} // end catch (depth: 2)

IL_00aa:
		{
		}

IL_00ac:
		{
			bool L_20 = Enumerator_MoveNext_m884872724((&V_3), /*hidden argument*/Enumerator_MoveNext_m884872724_MethodInfo_var);
			V_2 = L_20;
			bool L_21 = V_2;
			if (L_21)
			{
				goto IL_0071;
			}
		}

IL_00b7:
		{
			IL2CPP_LEAVE(0xC8, FINALLY_00b9);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_00b9;
	}

FINALLY_00b9:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3281725221((&V_3), /*hidden argument*/Enumerator_Dispose_m3281725221_MethodInfo_var);
		IL2CPP_END_FINALLY(185)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(185)
	{
		IL2CPP_JUMP_TBL(0xC8, IL_00c8)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_00c8:
	{
	}

IL_00ca:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetPeer::BindSocket(System.Boolean)
extern Il2CppClass* NetTime_t3056501352_il2cpp_TypeInfo_var;
extern Il2CppClass* Double_t4078015681_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Socket_t3821512045_il2cpp_TypeInfo_var;
extern Il2CppClass* IPEndPoint_t2615413766_il2cpp_TypeInfo_var;
extern Il2CppClass* ByteU5BU5D_t3397334013_il2cpp_TypeInfo_var;
extern Il2CppClass* Convert_t2607082565_il2cpp_TypeInfo_var;
extern Il2CppClass* Il2CppObject_il2cpp_TypeInfo_var;
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern Il2CppClass* Boolean_t3825574718_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1046210774;
extern Il2CppCodeGenString* _stringLiteral4073575562;
extern Il2CppCodeGenString* _stringLiteral3331961208;
extern Il2CppCodeGenString* _stringLiteral811305496;
extern const uint32_t NetPeer_BindSocket_m3838079755_MetadataUsageId;
extern "C"  void NetPeer_BindSocket_m3838079755 (NetPeer_t1779390221 * __this, bool ___reBind0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetPeer_BindSocket_m3838079755_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	double V_0 = 0.0;
	EndPoint_t4156119363 * V_1 = NULL;
	uint32_t V_2 = 0;
	IPEndPoint_t2615413766 * V_3 = NULL;
	bool V_4 = false;
	ByteU5BU5D_t3397334013* V_5 = NULL;
	ObjectU5BU5D_t3614634134* V_6 = NULL;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	IPAddress_t1399971723 * G_B8_0 = NULL;
	IPAddress_t1399971723 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	IPAddress_t1399971723 * G_B9_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetTime_t3056501352_il2cpp_TypeInfo_var);
		double L_0 = NetTime_get_Now_m1609702533(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		double L_1 = V_0;
		double L_2 = __this->get_m_lastSocketBind_18();
		V_4 = (bool)((((int32_t)((((double)((double)((double)L_1-(double)L_2))) < ((double)(1.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_4;
		if (L_3)
		{
			goto IL_004c;
		}
	}
	{
		double L_4 = V_0;
		double L_5 = __this->get_m_lastSocketBind_18();
		double L_6 = ((double)((double)L_4-(double)L_5));
		Il2CppObject * L_7 = Box(Double_t4078015681_il2cpp_TypeInfo_var, &L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m2000667605(NULL /*static, unused*/, _stringLiteral1046210774, L_7, _stringLiteral4073575562, /*hidden argument*/NULL);
		NetPeer_LogDebug_m2983960595(__this, L_8, /*hidden argument*/NULL);
		goto IL_0191;
	}

IL_004c:
	{
		double L_9 = V_0;
		__this->set_m_lastSocketBind_18(L_9);
		Socket_t3821512045 * L_10 = __this->get_m_socket_10();
		V_4 = (bool)((((int32_t)((((Il2CppObject*)(Socket_t3821512045 *)L_10) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_4;
		if (L_11)
		{
			goto IL_0074;
		}
	}
	{
		Socket_t3821512045 * L_12 = (Socket_t3821512045 *)il2cpp_codegen_object_new(Socket_t3821512045_il2cpp_TypeInfo_var);
		Socket__ctor_m2624772808(L_12, 2, 2, ((int32_t)17), /*hidden argument*/NULL);
		__this->set_m_socket_10(L_12);
	}

IL_0074:
	{
		bool L_13 = ___reBind0;
		V_4 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_4;
		if (L_14)
		{
			goto IL_0091;
		}
	}
	{
		Socket_t3821512045 * L_15 = __this->get_m_socket_10();
		NullCheck(L_15);
		Socket_SetSocketOption_m2520328933(L_15, ((int32_t)65535), 4, 1, /*hidden argument*/NULL);
	}

IL_0091:
	{
		Socket_t3821512045 * L_16 = __this->get_m_socket_10();
		NetPeerConfiguration_t136603591 * L_17 = __this->get_m_configuration_21();
		NullCheck(L_17);
		int32_t L_18 = NetPeerConfiguration_get_ReceiveBufferSize_m3874336565(L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		Socket_set_ReceiveBufferSize_m2259137467(L_16, L_18, /*hidden argument*/NULL);
		Socket_t3821512045 * L_19 = __this->get_m_socket_10();
		NetPeerConfiguration_t136603591 * L_20 = __this->get_m_configuration_21();
		NullCheck(L_20);
		int32_t L_21 = NetPeerConfiguration_get_SendBufferSize_m1353049686(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		Socket_set_SendBufferSize_m3462801204(L_19, L_21, /*hidden argument*/NULL);
		Socket_t3821512045 * L_22 = __this->get_m_socket_10();
		NullCheck(L_22);
		Socket_set_Blocking_m353034810(L_22, (bool)0, /*hidden argument*/NULL);
		NetPeerConfiguration_t136603591 * L_23 = __this->get_m_configuration_21();
		NullCheck(L_23);
		IPAddress_t1399971723 * L_24 = NetPeerConfiguration_get_LocalAddress_m4101942348(L_23, /*hidden argument*/NULL);
		bool L_25 = ___reBind0;
		G_B7_0 = L_24;
		if (L_25)
		{
			G_B8_0 = L_24;
			goto IL_00e7;
		}
	}
	{
		NetPeerConfiguration_t136603591 * L_26 = __this->get_m_configuration_21();
		NullCheck(L_26);
		int32_t L_27 = NetPeerConfiguration_get_Port_m3233330308(L_26, /*hidden argument*/NULL);
		G_B9_0 = L_27;
		G_B9_1 = G_B7_0;
		goto IL_00ed;
	}

IL_00e7:
	{
		int32_t L_28 = __this->get_m_listenPort_1();
		G_B9_0 = L_28;
		G_B9_1 = G_B8_0;
	}

IL_00ed:
	{
		IPEndPoint_t2615413766 * L_29 = (IPEndPoint_t2615413766 *)il2cpp_codegen_object_new(IPEndPoint_t2615413766_il2cpp_TypeInfo_var);
		IPEndPoint__ctor_m3477723888(L_29, G_B9_1, G_B9_0, /*hidden argument*/NULL);
		V_1 = L_29;
		Socket_t3821512045 * L_30 = __this->get_m_socket_10();
		EndPoint_t4156119363 * L_31 = V_1;
		NullCheck(L_30);
		Socket_Bind_m2654205209(L_30, L_31, /*hidden argument*/NULL);
	}

IL_0101:
	try
	{ // begin try (depth: 1)
		V_2 = ((int32_t)-1744830452);
		Socket_t3821512045 * L_32 = __this->get_m_socket_10();
		uint32_t L_33 = V_2;
		V_5 = ((ByteU5BU5D_t3397334013*)SZArrayNew(ByteU5BU5D_t3397334013_il2cpp_TypeInfo_var, (uint32_t)1));
		ByteU5BU5D_t3397334013* L_34 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2607082565_il2cpp_TypeInfo_var);
		uint8_t L_35 = Convert_ToByte_m3220387780(NULL /*static, unused*/, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, 0);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_35);
		ByteU5BU5D_t3397334013* L_36 = V_5;
		NullCheck(L_32);
		Socket_IOControl_m93430235(L_32, L_33, L_36, (ByteU5BU5D_t3397334013*)(ByteU5BU5D_t3397334013*)NULL, /*hidden argument*/NULL);
		goto IL_0132;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t1927440687 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Il2CppObject_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_012d;
		throw e;
	}

CATCH_012d:
	{ // begin catch(System.Object)
		goto IL_0132;
	} // end catch (depth: 1)

IL_0132:
	{
		Socket_t3821512045 * L_37 = __this->get_m_socket_10();
		NullCheck(L_37);
		EndPoint_t4156119363 * L_38 = Socket_get_LocalEndPoint_m289394380(L_37, /*hidden argument*/NULL);
		V_3 = ((IPEndPoint_t2615413766 *)IsInstClass(L_38, IPEndPoint_t2615413766_il2cpp_TypeInfo_var));
		V_6 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)4));
		ObjectU5BU5D_t3614634134* L_39 = V_6;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, 0);
		ArrayElementTypeCheck (L_39, _stringLiteral3331961208);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral3331961208);
		ObjectU5BU5D_t3614634134* L_40 = V_6;
		IPEndPoint_t2615413766 * L_41 = V_3;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, 1);
		ArrayElementTypeCheck (L_40, L_41);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_41);
		ObjectU5BU5D_t3614634134* L_42 = V_6;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 2);
		ArrayElementTypeCheck (L_42, _stringLiteral811305496);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral811305496);
		ObjectU5BU5D_t3614634134* L_43 = V_6;
		Socket_t3821512045 * L_44 = __this->get_m_socket_10();
		NullCheck(L_44);
		bool L_45 = Socket_get_IsBound_m2059543394(L_44, /*hidden argument*/NULL);
		bool L_46 = L_45;
		Il2CppObject * L_47 = Box(Boolean_t3825574718_il2cpp_TypeInfo_var, &L_46);
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, 3);
		ArrayElementTypeCheck (L_43, L_47);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_47);
		ObjectU5BU5D_t3614634134* L_48 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_49 = String_Concat_m3881798623(NULL /*static, unused*/, L_48, /*hidden argument*/NULL);
		NetPeer_LogDebug_m2983960595(__this, L_49, /*hidden argument*/NULL);
		IPEndPoint_t2615413766 * L_50 = V_3;
		NullCheck(L_50);
		int32_t L_51 = IPEndPoint_get_Port_m1973738026(L_50, /*hidden argument*/NULL);
		__this->set_m_listenPort_1(L_51);
	}

IL_0191:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetPeer::InitializeNetwork()
extern Il2CppClass* NetUPnP_t2794379482_il2cpp_TypeInfo_var;
extern Il2CppClass* ByteU5BU5D_t3397334013_il2cpp_TypeInfo_var;
extern Il2CppClass* NetIncomingMessage_t2014089816_il2cpp_TypeInfo_var;
extern Il2CppClass* NetUtility_t3562260209_il2cpp_TypeInfo_var;
extern Il2CppClass* IPEndPoint_t2615413766_il2cpp_TypeInfo_var;
extern Il2CppClass* BitConverter_t3195628829_il2cpp_TypeInfo_var;
extern const MethodInfo* NetQueue_1_Clear_m2237230048_MethodInfo_var;
extern const MethodInfo* NetQueue_1_Clear_m3067589550_MethodInfo_var;
extern const MethodInfo* Dictionary_2_Clear_m1586068996_MethodInfo_var;
extern const uint32_t NetPeer_InitializeNetwork_m4038073148_MetadataUsageId;
extern "C"  void NetPeer_InitializeNetwork_m4038073148 (NetPeer_t1779390221 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetPeer_InitializeNetwork_m4038073148_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t3397334013* V_0 = NULL;
	IPEndPoint_t2615413766 * V_1 = NULL;
	ByteU5BU5D_t3397334013* V_2 = NULL;
	ByteU5BU5D_t3397334013* V_3 = NULL;
	Il2CppObject * V_4 = NULL;
	bool V_5 = false;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Il2CppObject * L_0 = __this->get_m_initializeLock_15();
		Il2CppObject * L_1 = L_0;
		V_4 = L_1;
		Monitor_Enter_m2136705809(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		{
			NetPeerConfiguration_t136603591 * L_2 = __this->get_m_configuration_21();
			NullCheck(L_2);
			NetPeerConfiguration_Lock_m363221111(L_2, /*hidden argument*/NULL);
			int32_t L_3 = __this->get_m_status_8();
			V_5 = (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_4 = V_5;
			if (L_4)
			{
				goto IL_0034;
			}
		}

IL_002f:
		{
			IL2CPP_LEAVE(0x142, FINALLY_0138);
		}

IL_0034:
		{
			NetPeerConfiguration_t136603591 * L_5 = __this->get_m_configuration_21();
			NullCheck(L_5);
			bool L_6 = L_5->get_m_enableUPnP_12();
			V_5 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
			bool L_7 = V_5;
			if (L_7)
			{
				goto IL_0054;
			}
		}

IL_0048:
		{
			NetUPnP_t2794379482 * L_8 = (NetUPnP_t2794379482 *)il2cpp_codegen_object_new(NetUPnP_t2794379482_il2cpp_TypeInfo_var);
			NetUPnP__ctor_m1248845477(L_8, __this, /*hidden argument*/NULL);
			__this->set_m_upnp_19(L_8);
		}

IL_0054:
		{
			NetPeer_InitializePools_m2290904387(__this, /*hidden argument*/NULL);
			NetQueue_1_t4230780502 * L_9 = __this->get_m_releasedIncomingMessages_22();
			NullCheck(L_9);
			NetQueue_1_Clear_m2237230048(L_9, /*hidden argument*/NetQueue_1_Clear_m2237230048_MethodInfo_var);
			NetQueue_1_t1703294902 * L_10 = __this->get_m_unsentUnconnectedMessages_23();
			NullCheck(L_10);
			NetQueue_1_Clear_m3067589550(L_10, /*hidden argument*/NetQueue_1_Clear_m3067589550_MethodInfo_var);
			Dictionary_2_t3898409514 * L_11 = __this->get_m_handshakes_24();
			NullCheck(L_11);
			Dictionary_2_Clear_m1586068996(L_11, /*hidden argument*/Dictionary_2_Clear_m1586068996_MethodInfo_var);
			NetPeer_BindSocket_m3838079755(__this, (bool)0, /*hidden argument*/NULL);
			NetPeerConfiguration_t136603591 * L_12 = __this->get_m_configuration_21();
			NullCheck(L_12);
			int32_t L_13 = NetPeerConfiguration_get_ReceiveBufferSize_m3874336565(L_12, /*hidden argument*/NULL);
			__this->set_m_receiveBuffer_12(((ByteU5BU5D_t3397334013*)SZArrayNew(ByteU5BU5D_t3397334013_il2cpp_TypeInfo_var, (uint32_t)L_13)));
			NetPeerConfiguration_t136603591 * L_14 = __this->get_m_configuration_21();
			NullCheck(L_14);
			int32_t L_15 = NetPeerConfiguration_get_SendBufferSize_m1353049686(L_14, /*hidden argument*/NULL);
			__this->set_m_sendBuffer_11(((ByteU5BU5D_t3397334013*)SZArrayNew(ByteU5BU5D_t3397334013_il2cpp_TypeInfo_var, (uint32_t)L_15)));
			NetIncomingMessage_t2014089816 * L_16 = (NetIncomingMessage_t2014089816 *)il2cpp_codegen_object_new(NetIncomingMessage_t2014089816_il2cpp_TypeInfo_var);
			NetIncomingMessage__ctor_m2874845560(L_16, 0, /*hidden argument*/NULL);
			__this->set_m_readHelperMessage_13(L_16);
			NetIncomingMessage_t2014089816 * L_17 = __this->get_m_readHelperMessage_13();
			ByteU5BU5D_t3397334013* L_18 = __this->get_m_receiveBuffer_12();
			NullCheck(L_17);
			((NetBuffer_t3608062491 *)L_17)->set_m_data_2(L_18);
			IL2CPP_RUNTIME_CLASS_INIT(NetUtility_t3562260209_il2cpp_TypeInfo_var);
			ByteU5BU5D_t3397334013* L_19 = NetUtility_GetMacAddressBytes_m2783516176(NULL /*static, unused*/, /*hidden argument*/NULL);
			V_0 = L_19;
			Socket_t3821512045 * L_20 = __this->get_m_socket_10();
			NullCheck(L_20);
			EndPoint_t4156119363 * L_21 = Socket_get_LocalEndPoint_m289394380(L_20, /*hidden argument*/NULL);
			V_1 = ((IPEndPoint_t2615413766 *)IsInstClass(L_21, IPEndPoint_t2615413766_il2cpp_TypeInfo_var));
			IPEndPoint_t2615413766 * L_22 = V_1;
			NullCheck(L_22);
			int32_t L_23 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_22);
			IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3195628829_il2cpp_TypeInfo_var);
			ByteU5BU5D_t3397334013* L_24 = BitConverter_GetBytes_m1300847478(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
			V_2 = L_24;
			ByteU5BU5D_t3397334013* L_25 = V_2;
			NullCheck(L_25);
			ByteU5BU5D_t3397334013* L_26 = V_0;
			NullCheck(L_26);
			V_3 = ((ByteU5BU5D_t3397334013*)SZArrayNew(ByteU5BU5D_t3397334013_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_25)->max_length))))+(int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_26)->max_length))))))));
			ByteU5BU5D_t3397334013* L_27 = V_2;
			ByteU5BU5D_t3397334013* L_28 = V_3;
			ByteU5BU5D_t3397334013* L_29 = V_2;
			NullCheck(L_29);
			Array_Copy_m3808317496(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_27, 0, (Il2CppArray *)(Il2CppArray *)L_28, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_29)->max_length)))), /*hidden argument*/NULL);
			ByteU5BU5D_t3397334013* L_30 = V_0;
			ByteU5BU5D_t3397334013* L_31 = V_3;
			ByteU5BU5D_t3397334013* L_32 = V_2;
			NullCheck(L_32);
			ByteU5BU5D_t3397334013* L_33 = V_0;
			NullCheck(L_33);
			Array_Copy_m3808317496(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_30, 0, (Il2CppArray *)(Il2CppArray *)L_31, (((int32_t)((int32_t)(((Il2CppArray *)L_32)->max_length)))), (((int32_t)((int32_t)(((Il2CppArray *)L_33)->max_length)))), /*hidden argument*/NULL);
			ByteU5BU5D_t3397334013* L_34 = V_3;
			ByteU5BU5D_t3397334013* L_35 = NetUtility_ComputeSHAHash_m2577505156(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
			int64_t L_36 = BitConverter_ToInt64_m1329623425(NULL /*static, unused*/, L_35, 0, /*hidden argument*/NULL);
			__this->set_m_uniqueIdentifier_26(L_36);
			__this->set_m_status_8(2);
			IL2CPP_LEAVE(0x141, FINALLY_0138);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_0138;
	}

FINALLY_0138:
	{ // begin finally (depth: 1)
		Il2CppObject * L_37 = V_4;
		Monitor_Exit_m2677760297(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(312)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(312)
	{
		IL2CPP_JUMP_TBL(0x142, IL_0142)
		IL2CPP_JUMP_TBL(0x141, IL_0141)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_0141:
	{
	}

IL_0142:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetPeer::NetworkLoop()
extern Il2CppClass* Exception_t1927440687_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2542021573;
extern const uint32_t NetPeer_NetworkLoop_m1488252008_MetadataUsageId;
extern "C"  void NetPeer_NetworkLoop_m1488252008 (NetPeer_t1779390221 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetPeer_NetworkLoop_m1488252008_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t1927440687 * V_0 = NULL;
	bool V_1 = false;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		NetPeer_VerifyNetworkThread_m4075953563(__this, /*hidden argument*/NULL);
		NetPeer_LogDebug_m2983960595(__this, _stringLiteral2542021573, /*hidden argument*/NULL);
	}

IL_0014:
	{
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		NetPeer_Heartbeat_m4039216740(__this, /*hidden argument*/NULL);
		goto IL_0032;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t1927440687 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t1927440687_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0020;
		throw e;
	}

CATCH_0020:
	{ // begin catch(System.Exception)
		V_0 = ((Exception_t1927440687 *)__exception_local);
		Exception_t1927440687 * L_0 = V_0;
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		NetPeer_LogWarning_m3266657906(__this, L_1, /*hidden argument*/NULL);
		goto IL_0032;
	} // end catch (depth: 1)

IL_0032:
	{
		int32_t L_2 = __this->get_m_status_8();
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)2))? 1 : 0);
		bool L_3 = V_1;
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		NetPeer_ExecutePeerShutdown_m4009449549(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Lidgren.Network.NetPeer::ExecutePeerShutdown()
extern Il2CppClass* List_1_t2700613161_il2cpp_TypeInfo_var;
extern Il2CppClass* NetUtility_t3562260209_il2cpp_TypeInfo_var;
extern Il2CppClass* Exception_t1927440687_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_get_Count_m3270350375_MethodInfo_var;
extern const MethodInfo* List_1_get_Count_m1394854046_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m3477244707_MethodInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m1905895923_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m2264966067_MethodInfo_var;
extern const MethodInfo* List_1_Add_m2801045858_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m1275401007_MethodInfo_var;
extern const MethodInfo* Enumerator_Dispose_m2177334822_MethodInfo_var;
extern const MethodInfo* Dictionary_2_get_Values_m2081171493_MethodInfo_var;
extern const MethodInfo* ValueCollection_GetEnumerator_m4258835047_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m1025502873_MethodInfo_var;
extern const MethodInfo* List_1_Contains_m4168039338_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3140744238_MethodInfo_var;
extern const MethodInfo* Enumerator_Dispose_m622234141_MethodInfo_var;
extern const MethodInfo* NetQueue_1_Clear_m3067589550_MethodInfo_var;
extern const MethodInfo* List_1_Clear_m3383322207_MethodInfo_var;
extern const MethodInfo* Dictionary_2_Clear_m1586068996_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral4164533770;
extern Il2CppCodeGenString* _stringLiteral2728614686;
extern Il2CppCodeGenString* _stringLiteral1328456286;
extern Il2CppCodeGenString* _stringLiteral799260213;
extern const uint32_t NetPeer_ExecutePeerShutdown_m4009449549_MetadataUsageId;
extern "C"  void NetPeer_ExecutePeerShutdown_m4009449549 (NetPeer_t1779390221 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetPeer_ExecutePeerShutdown_m4009449549_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t2700613161 * V_0 = NULL;
	NetConnection_t3331492029 * V_1 = NULL;
	NetConnection_t3331492029 * V_2 = NULL;
	Exception_t1927440687 * V_3 = NULL;
	List_1_t2700613161 * V_4 = NULL;
	Enumerator_t2235342835  V_5;
	memset(&V_5, 0, sizeof(V_5));
	bool V_6 = false;
	Dictionary_2_t3898409514 * V_7 = NULL;
	Enumerator_t1289974982  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Il2CppObject * V_9 = NULL;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B16_0 = 0;
	{
		NetPeer_VerifyNetworkThread_m4075953563(__this, /*hidden argument*/NULL);
		NetPeer_LogDebug_m2983960595(__this, _stringLiteral4164533770, /*hidden argument*/NULL);
		Dictionary_2_t3898409514 * L_0 = __this->get_m_handshakes_24();
		NullCheck(L_0);
		int32_t L_1 = Dictionary_2_get_Count_m3270350375(L_0, /*hidden argument*/Dictionary_2_get_Count_m3270350375_MethodInfo_var);
		List_1_t2700613161 * L_2 = __this->get_m_connections_3();
		NullCheck(L_2);
		int32_t L_3 = List_1_get_Count_m1394854046(L_2, /*hidden argument*/List_1_get_Count_m1394854046_MethodInfo_var);
		List_1_t2700613161 * L_4 = (List_1_t2700613161 *)il2cpp_codegen_object_new(List_1_t2700613161_il2cpp_TypeInfo_var);
		List_1__ctor_m3477244707(L_4, ((int32_t)((int32_t)L_1+(int32_t)L_3)), /*hidden argument*/List_1__ctor_m3477244707_MethodInfo_var);
		V_0 = L_4;
		List_1_t2700613161 * L_5 = __this->get_m_connections_3();
		List_1_t2700613161 * L_6 = L_5;
		V_4 = L_6;
		Monitor_Enter_m2136705809(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
	}

IL_0040:
	try
	{ // begin try (depth: 1)
		{
			List_1_t2700613161 * L_7 = __this->get_m_connections_3();
			NullCheck(L_7);
			Enumerator_t2235342835  L_8 = List_1_GetEnumerator_m1905895923(L_7, /*hidden argument*/List_1_GetEnumerator_m1905895923_MethodInfo_var);
			V_5 = L_8;
		}

IL_004f:
		try
		{ // begin try (depth: 2)
			{
				goto IL_006b;
			}

IL_0051:
			{
				NetConnection_t3331492029 * L_9 = Enumerator_get_Current_m2264966067((&V_5), /*hidden argument*/Enumerator_get_Current_m2264966067_MethodInfo_var);
				V_1 = L_9;
				NetConnection_t3331492029 * L_10 = V_1;
				V_6 = (bool)((((Il2CppObject*)(NetConnection_t3331492029 *)L_10) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
				bool L_11 = V_6;
				if (L_11)
				{
					goto IL_006b;
				}
			}

IL_0063:
			{
				List_1_t2700613161 * L_12 = V_0;
				NetConnection_t3331492029 * L_13 = V_1;
				NullCheck(L_12);
				List_1_Add_m2801045858(L_12, L_13, /*hidden argument*/List_1_Add_m2801045858_MethodInfo_var);
			}

IL_006b:
			{
				bool L_14 = Enumerator_MoveNext_m1275401007((&V_5), /*hidden argument*/Enumerator_MoveNext_m1275401007_MethodInfo_var);
				V_6 = L_14;
				bool L_15 = V_6;
				if (L_15)
				{
					goto IL_0051;
				}
			}

IL_0078:
			{
				IL2CPP_LEAVE(0x89, FINALLY_007a);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
			goto FINALLY_007a;
		}

FINALLY_007a:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m2177334822((&V_5), /*hidden argument*/Enumerator_Dispose_m2177334822_MethodInfo_var);
			IL2CPP_END_FINALLY(122)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(122)
		{
			IL2CPP_JUMP_TBL(0x89, IL_0089)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
		}

IL_0089:
		{
			IL2CPP_LEAVE(0x96, FINALLY_008d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_008d;
	}

FINALLY_008d:
	{ // begin finally (depth: 1)
		List_1_t2700613161 * L_16 = V_4;
		Monitor_Exit_m2677760297(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(141)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(141)
	{
		IL2CPP_JUMP_TBL(0x96, IL_0096)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_0096:
	{
		Dictionary_2_t3898409514 * L_17 = __this->get_m_handshakes_24();
		Dictionary_2_t3898409514 * L_18 = L_17;
		V_7 = L_18;
		Monitor_Enter_m2136705809(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
	}

IL_00a6:
	try
	{ // begin try (depth: 1)
		{
			Dictionary_2_t3898409514 * L_19 = __this->get_m_handshakes_24();
			NullCheck(L_19);
			ValueCollection_t2601469357 * L_20 = Dictionary_2_get_Values_m2081171493(L_19, /*hidden argument*/Dictionary_2_get_Values_m2081171493_MethodInfo_var);
			NullCheck(L_20);
			Enumerator_t1289974982  L_21 = ValueCollection_GetEnumerator_m4258835047(L_20, /*hidden argument*/ValueCollection_GetEnumerator_m4258835047_MethodInfo_var);
			V_8 = L_21;
		}

IL_00ba:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00e0;
			}

IL_00bc:
			{
				NetConnection_t3331492029 * L_22 = Enumerator_get_Current_m1025502873((&V_8), /*hidden argument*/Enumerator_get_Current_m1025502873_MethodInfo_var);
				V_2 = L_22;
				NetConnection_t3331492029 * L_23 = V_2;
				if (!L_23)
				{
					goto IL_00d0;
				}
			}

IL_00c7:
			{
				List_1_t2700613161 * L_24 = V_0;
				NetConnection_t3331492029 * L_25 = V_2;
				NullCheck(L_24);
				bool L_26 = List_1_Contains_m4168039338(L_24, L_25, /*hidden argument*/List_1_Contains_m4168039338_MethodInfo_var);
				G_B16_0 = ((int32_t)(L_26));
				goto IL_00d1;
			}

IL_00d0:
			{
				G_B16_0 = 1;
			}

IL_00d1:
			{
				V_6 = (bool)G_B16_0;
				bool L_27 = V_6;
				if (L_27)
				{
					goto IL_00e0;
				}
			}

IL_00d8:
			{
				List_1_t2700613161 * L_28 = V_0;
				NetConnection_t3331492029 * L_29 = V_2;
				NullCheck(L_28);
				List_1_Add_m2801045858(L_28, L_29, /*hidden argument*/List_1_Add_m2801045858_MethodInfo_var);
			}

IL_00e0:
			{
				bool L_30 = Enumerator_MoveNext_m3140744238((&V_8), /*hidden argument*/Enumerator_MoveNext_m3140744238_MethodInfo_var);
				V_6 = L_30;
				bool L_31 = V_6;
				if (L_31)
				{
					goto IL_00bc;
				}
			}

IL_00ed:
			{
				IL2CPP_LEAVE(0xFE, FINALLY_00ef);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
			goto FINALLY_00ef;
		}

FINALLY_00ef:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m622234141((&V_8), /*hidden argument*/Enumerator_Dispose_m622234141_MethodInfo_var);
			IL2CPP_END_FINALLY(239)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(239)
		{
			IL2CPP_JUMP_TBL(0xFE, IL_00fe)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
		}

IL_00fe:
		{
			IL2CPP_LEAVE(0x10B, FINALLY_0102);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_0102;
	}

FINALLY_0102:
	{ // begin finally (depth: 1)
		Dictionary_2_t3898409514 * L_32 = V_7;
		Monitor_Exit_m2677760297(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(258)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(258)
	{
		IL2CPP_JUMP_TBL(0x10B, IL_010b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_010b:
	{
		List_1_t2700613161 * L_33 = V_0;
		NullCheck(L_33);
		Enumerator_t2235342835  L_34 = List_1_GetEnumerator_m1905895923(L_33, /*hidden argument*/List_1_GetEnumerator_m1905895923_MethodInfo_var);
		V_5 = L_34;
	}

IL_0115:
	try
	{ // begin try (depth: 1)
		{
			goto IL_012c;
		}

IL_0117:
		{
			NetConnection_t3331492029 * L_35 = Enumerator_get_Current_m2264966067((&V_5), /*hidden argument*/Enumerator_get_Current_m2264966067_MethodInfo_var);
			V_1 = L_35;
			NetConnection_t3331492029 * L_36 = V_1;
			String_t* L_37 = __this->get_m_shutdownReason_5();
			NullCheck(L_36);
			NetConnection_Shutdown_m3044084954(L_36, L_37, /*hidden argument*/NULL);
		}

IL_012c:
		{
			bool L_38 = Enumerator_MoveNext_m1275401007((&V_5), /*hidden argument*/Enumerator_MoveNext_m1275401007_MethodInfo_var);
			V_6 = L_38;
			bool L_39 = V_6;
			if (L_39)
			{
				goto IL_0117;
			}
		}

IL_0139:
		{
			IL2CPP_LEAVE(0x14A, FINALLY_013b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_013b;
	}

FINALLY_013b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2177334822((&V_5), /*hidden argument*/Enumerator_Dispose_m2177334822_MethodInfo_var);
		IL2CPP_END_FINALLY(315)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(315)
	{
		IL2CPP_JUMP_TBL(0x14A, IL_014a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_014a:
	{
		NetPeer_FlushDelayedPackets_m2271676463(__this, /*hidden argument*/NULL);
		NetPeer_Heartbeat_m4039216740(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetUtility_t3562260209_il2cpp_TypeInfo_var);
		NetUtility_Sleep_m886463228(NULL /*static, unused*/, ((int32_t)10), /*hidden argument*/NULL);
		Il2CppObject * L_40 = __this->get_m_initializeLock_15();
		Il2CppObject * L_41 = L_40;
		V_9 = L_41;
		Monitor_Enter_m2136705809(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
	}

IL_0170:
	try
	{ // begin try (depth: 1)
		{
		}

IL_0171:
		try
		{ // begin try (depth: 2)
			{
				Socket_t3821512045 * L_42 = __this->get_m_socket_10();
				V_6 = (bool)((((Il2CppObject*)(Socket_t3821512045 *)L_42) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
				bool L_43 = V_6;
				if (L_43)
				{
					goto IL_01df;
				}
			}

IL_0181:
			{
			}

IL_0182:
			try
			{ // begin try (depth: 3)
				Socket_t3821512045 * L_44 = __this->get_m_socket_10();
				NullCheck(L_44);
				Socket_Shutdown_m4200427980(L_44, 0, /*hidden argument*/NULL);
				goto IL_01af;
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__exception_local = (Exception_t1927440687 *)e.ex;
				if(il2cpp_codegen_class_is_assignable_from (Exception_t1927440687_il2cpp_TypeInfo_var, e.ex->object.klass))
					goto CATCH_0193;
				throw e;
			}

CATCH_0193:
			{ // begin catch(System.Exception)
				V_3 = ((Exception_t1927440687 *)__exception_local);
				Exception_t1927440687 * L_45 = V_3;
				NullCheck(L_45);
				String_t* L_46 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_45);
				IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
				String_t* L_47 = String_Concat_m2596409543(NULL /*static, unused*/, _stringLiteral2728614686, L_46, /*hidden argument*/NULL);
				NetPeer_LogDebug_m2983960595(__this, L_47, /*hidden argument*/NULL);
				goto IL_01af;
			} // end catch (depth: 3)

IL_01af:
			{
			}

IL_01b0:
			try
			{ // begin try (depth: 3)
				Socket_t3821512045 * L_48 = __this->get_m_socket_10();
				NullCheck(L_48);
				Socket_Close_m2025852140(L_48, 2, /*hidden argument*/NULL);
				goto IL_01dd;
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__exception_local = (Exception_t1927440687 *)e.ex;
				if(il2cpp_codegen_class_is_assignable_from (Exception_t1927440687_il2cpp_TypeInfo_var, e.ex->object.klass))
					goto CATCH_01c1;
				throw e;
			}

CATCH_01c1:
			{ // begin catch(System.Exception)
				V_3 = ((Exception_t1927440687 *)__exception_local);
				Exception_t1927440687 * L_49 = V_3;
				NullCheck(L_49);
				String_t* L_50 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_49);
				IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
				String_t* L_51 = String_Concat_m2596409543(NULL /*static, unused*/, _stringLiteral1328456286, L_50, /*hidden argument*/NULL);
				NetPeer_LogDebug_m2983960595(__this, L_51, /*hidden argument*/NULL);
				goto IL_01dd;
			} // end catch (depth: 3)

IL_01dd:
			{
			}

IL_01df:
			{
				IL2CPP_LEAVE(0x21A, FINALLY_01e2);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
			goto FINALLY_01e2;
		}

FINALLY_01e2:
		{ // begin finally (depth: 2)
			{
				__this->set_m_socket_10((Socket_t3821512045 *)NULL);
				__this->set_m_status_8(0);
				NetPeer_LogDebug_m2983960595(__this, _stringLiteral799260213, /*hidden argument*/NULL);
				AutoResetEvent_t15112628 * L_52 = __this->get_m_messageReceivedEvent_28();
				V_6 = (bool)((((Il2CppObject*)(AutoResetEvent_t15112628 *)L_52) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
				bool L_53 = V_6;
				if (L_53)
				{
					goto IL_0218;
				}
			}

IL_020c:
			{
				AutoResetEvent_t15112628 * L_54 = __this->get_m_messageReceivedEvent_28();
				NullCheck(L_54);
				EventWaitHandle_Set_m2975776670(L_54, /*hidden argument*/NULL);
			}

IL_0218:
			{
				IL2CPP_END_FINALLY(482)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(482)
		{
			IL2CPP_JUMP_TBL(0x21A, IL_021a)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
		}

IL_021a:
		{
			__this->set_m_lastSocketBind_18((-3.4028234663852886E+38));
			__this->set_m_receiveBuffer_12((ByteU5BU5D_t3397334013*)NULL);
			__this->set_m_sendBuffer_11((ByteU5BU5D_t3397334013*)NULL);
			NetQueue_1_t1703294902 * L_55 = __this->get_m_unsentUnconnectedMessages_23();
			NullCheck(L_55);
			NetQueue_1_Clear_m3067589550(L_55, /*hidden argument*/NetQueue_1_Clear_m3067589550_MethodInfo_var);
			List_1_t2700613161 * L_56 = __this->get_m_connections_3();
			NullCheck(L_56);
			List_1_Clear_m3383322207(L_56, /*hidden argument*/List_1_Clear_m3383322207_MethodInfo_var);
			Dictionary_2_t3898409514 * L_57 = __this->get_m_connectionLookup_4();
			NullCheck(L_57);
			Dictionary_2_Clear_m1586068996(L_57, /*hidden argument*/Dictionary_2_Clear_m1586068996_MethodInfo_var);
			Dictionary_2_t3898409514 * L_58 = __this->get_m_handshakes_24();
			NullCheck(L_58);
			Dictionary_2_Clear_m1586068996(L_58, /*hidden argument*/Dictionary_2_Clear_m1586068996_MethodInfo_var);
			IL2CPP_LEAVE(0x274, FINALLY_026b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_026b;
	}

FINALLY_026b:
	{ // begin finally (depth: 1)
		Il2CppObject * L_59 = V_9;
		Monitor_Exit_m2677760297(NULL /*static, unused*/, L_59, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(619)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(619)
	{
		IL2CPP_JUMP_TBL(0x274, IL_0274)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_0274:
	{
		goto IL_0277;
	}

IL_0277:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetPeer::Heartbeat()
extern Il2CppClass* NetTime_t3056501352_il2cpp_TypeInfo_var;
extern Il2CppClass* SocketException_t1618573604_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* IPEndPoint_t2615413766_il2cpp_TypeInfo_var;
extern Il2CppClass* Encoding_t663144255_il2cpp_TypeInfo_var;
extern Il2CppClass* Exception_t1927440687_il2cpp_TypeInfo_var;
extern Il2CppClass* NetUtility_t3562260209_il2cpp_TypeInfo_var;
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppClass* NetMessageType_t191235414_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_get_Count_m1394854046_MethodInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m3728096743_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m2227275631_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m1515431574_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m4001602897_MethodInfo_var;
extern const MethodInfo* Dictionary_2_ContainsKey_m2053216074_MethodInfo_var;
extern const MethodInfo* Dictionary_2_Remove_m2570672626_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m586729744_MethodInfo_var;
extern const MethodInfo* Enumerator_Dispose_m2896629615_MethodInfo_var;
extern const MethodInfo* List_1_get_Item_m1684201913_MethodInfo_var;
extern const MethodInfo* List_1_RemoveAt_m3633877100_MethodInfo_var;
extern const MethodInfo* NetQueue_1_TryDequeue_m504151096_MethodInfo_var;
extern const MethodInfo* Dictionary_2_TryGetValue_m2698685646_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2944197306;
extern Il2CppCodeGenString* _stringLiteral1648757208;
extern Il2CppCodeGenString* _stringLiteral3329200195;
extern Il2CppCodeGenString* _stringLiteral701915360;
extern Il2CppCodeGenString* _stringLiteral671997955;
extern Il2CppCodeGenString* _stringLiteral1880305331;
extern Il2CppCodeGenString* _stringLiteral409666631;
extern Il2CppCodeGenString* _stringLiteral372029345;
extern Il2CppCodeGenString* _stringLiteral1189522563;
extern Il2CppCodeGenString* _stringLiteral3718723205;
extern Il2CppCodeGenString* _stringLiteral986412037;
extern Il2CppCodeGenString* _stringLiteral89479935;
extern Il2CppCodeGenString* _stringLiteral3099179458;
extern Il2CppCodeGenString* _stringLiteral4166804854;
extern const uint32_t NetPeer_Heartbeat_m4039216740_MetadataUsageId;
extern "C"  void NetPeer_Heartbeat_m4039216740 (NetPeer_t1779390221 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetPeer_Heartbeat_m4039216740_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	int32_t V_2 = 0;
	KeyValuePair_2_t1655754736  V_3;
	memset(&V_3, 0, sizeof(V_3));
	NetConnection_t3331492029 * V_4 = NULL;
	int32_t V_5 = 0;
	NetTuple_2_t3781571512  V_6;
	memset(&V_6, 0, sizeof(V_6));
	NetOutgoingMessage_t2016542980 * V_7 = NULL;
	int32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	SocketException_t1618573604 * V_11 = NULL;
	IPEndPoint_t2615413766 * V_12 = NULL;
	String_t* V_13 = NULL;
	Exception_t1927440687 * V_14 = NULL;
	NetConnection_t3331492029 * V_15 = NULL;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	uint8_t V_19 = 0;
	uint8_t V_20 = 0x0;
	uint8_t V_21 = 0x0;
	bool V_22 = false;
	uint16_t V_23 = 0;
	uint16_t V_24 = 0;
	int32_t V_25 = 0;
	NetIncomingMessage_t2014089816 * V_26 = NULL;
	bool V_27 = false;
	Enumerator_t923466920  V_28;
	memset(&V_28, 0, sizeof(V_28));
	List_1_t2700613161 * V_29 = NULL;
	int32_t V_30 = 0;
	ObjectU5BU5D_t3614634134* V_31 = NULL;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B5_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B29_0 = 0;
	int32_t G_B66_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B83_0 = 0;
	int32_t G_B93_0 = 0;
	{
		NetPeer_VerifyNetworkThread_m4075953563(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetTime_t3056501352_il2cpp_TypeInfo_var);
		double L_0 = NetTime_get_Now_m1609702533(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		double L_1 = V_0;
		double L_2 = __this->get_m_lastHeartbeat_17();
		V_1 = ((double)((double)L_1-(double)L_2));
		List_1_t2700613161 * L_3 = __this->get_m_connections_3();
		NullCheck(L_3);
		int32_t L_4 = List_1_get_Count_m1394854046(L_3, /*hidden argument*/List_1_get_Count_m1394854046_MethodInfo_var);
		V_2 = ((int32_t)((int32_t)((int32_t)1250)-(int32_t)L_4));
		int32_t L_5 = V_2;
		V_27 = (bool)((((int32_t)((((int32_t)L_5) < ((int32_t)((int32_t)250)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_27;
		if (L_6)
		{
			goto IL_0040;
		}
	}
	{
		V_2 = ((int32_t)250);
	}

IL_0040:
	{
		double L_7 = V_1;
		int32_t L_8 = V_2;
		if ((((double)L_7) > ((double)((double)((double)(1.0)/(double)(((double)((double)L_8))))))))
		{
			goto IL_0060;
		}
	}
	{
		double L_9 = V_1;
		G_B5_0 = ((((int32_t)((((double)L_9) < ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0061;
	}

IL_0060:
	{
		G_B5_0 = 0;
	}

IL_0061:
	{
		V_27 = (bool)G_B5_0;
		bool L_10 = V_27;
		if (L_10)
		{
			goto IL_02bc;
		}
	}
	{
		uint32_t L_11 = __this->get_m_frameCounter_16();
		__this->set_m_frameCounter_16(((int32_t)((int32_t)L_11+(int32_t)1)));
		double L_12 = V_0;
		__this->set_m_lastHeartbeat_17(L_12);
		uint32_t L_13 = __this->get_m_frameCounter_16();
		V_27 = (bool)((((int32_t)((((int32_t)((int32_t)((uint32_t)(int32_t)L_13%(uint32_t)(int32_t)3))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_27;
		if (L_14)
		{
			goto IL_017b;
		}
	}
	{
		Dictionary_2_t3898409514 * L_15 = __this->get_m_handshakes_24();
		NullCheck(L_15);
		Enumerator_t923466920  L_16 = Dictionary_2_GetEnumerator_m3728096743(L_15, /*hidden argument*/Dictionary_2_GetEnumerator_m3728096743_MethodInfo_var);
		V_28 = L_16;
	}

IL_00a7:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0158;
		}

IL_00ac:
		{
			KeyValuePair_2_t1655754736  L_17 = Enumerator_get_Current_m2227275631((&V_28), /*hidden argument*/Enumerator_get_Current_m2227275631_MethodInfo_var);
			V_3 = L_17;
			NetConnection_t3331492029 * L_18 = KeyValuePair_2_get_Value_m1515431574((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m1515431574_MethodInfo_var);
			V_4 = L_18;
			IPEndPoint_t2615413766 * L_19 = KeyValuePair_2_get_Key_m4001602897((&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m4001602897_MethodInfo_var);
			IPEndPoint_t2615413766 * L_20 = KeyValuePair_2_get_Key_m4001602897((&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m4001602897_MethodInfo_var);
			V_27 = (bool)((((Il2CppObject*)(IPEndPoint_t2615413766 *)L_19) == ((Il2CppObject*)(IPEndPoint_t2615413766 *)L_20))? 1 : 0);
			bool L_21 = V_27;
			if (L_21)
			{
				goto IL_00e0;
			}
		}

IL_00d4:
		{
			NetPeer_LogWarning_m3266657906(__this, _stringLiteral2944197306, /*hidden argument*/NULL);
		}

IL_00e0:
		{
			NetConnection_t3331492029 * L_22 = V_4;
			double L_23 = V_0;
			NullCheck(L_22);
			NetConnection_UnconnectedHeartbeat_m3795858382(L_22, L_23, /*hidden argument*/NULL);
			NetConnection_t3331492029 * L_24 = V_4;
			NullCheck(L_24);
			int32_t L_25 = L_24->get_m_status_2();
			if ((((int32_t)L_25) == ((int32_t)5)))
			{
				goto IL_0102;
			}
		}

IL_00f3:
		{
			NetConnection_t3331492029 * L_26 = V_4;
			NullCheck(L_26);
			int32_t L_27 = L_26->get_m_status_2();
			G_B14_0 = ((((int32_t)((((int32_t)L_27) == ((int32_t)7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			goto IL_0103;
		}

IL_0102:
		{
			G_B14_0 = 0;
		}

IL_0103:
		{
			V_27 = (bool)G_B14_0;
			bool L_28 = V_27;
			if (L_28)
			{
				goto IL_0157;
			}
		}

IL_010a:
		{
			NetConnection_t3331492029 * L_29 = V_4;
			NullCheck(L_29);
			int32_t L_30 = L_29->get_m_status_2();
			if ((!(((uint32_t)L_30) == ((uint32_t)7))))
			{
				goto IL_012c;
			}
		}

IL_0115:
		{
			Dictionary_2_t3898409514 * L_31 = __this->get_m_handshakes_24();
			NetConnection_t3331492029 * L_32 = V_4;
			NullCheck(L_32);
			IPEndPoint_t2615413766 * L_33 = NetConnection_get_RemoteEndPoint_m1562753089(L_32, /*hidden argument*/NULL);
			NullCheck(L_31);
			bool L_34 = Dictionary_2_ContainsKey_m2053216074(L_31, L_33, /*hidden argument*/Dictionary_2_ContainsKey_m2053216074_MethodInfo_var);
			G_B18_0 = ((((int32_t)L_34) == ((int32_t)0))? 1 : 0);
			goto IL_012d;
		}

IL_012c:
		{
			G_B18_0 = 1;
		}

IL_012d:
		{
			V_27 = (bool)G_B18_0;
			bool L_35 = V_27;
			if (L_35)
			{
				goto IL_0155;
			}
		}

IL_0134:
		{
			NetPeer_LogWarning_m3266657906(__this, _stringLiteral1648757208, /*hidden argument*/NULL);
			Dictionary_2_t3898409514 * L_36 = __this->get_m_handshakes_24();
			NetConnection_t3331492029 * L_37 = V_4;
			NullCheck(L_37);
			IPEndPoint_t2615413766 * L_38 = NetConnection_get_RemoteEndPoint_m1562753089(L_37, /*hidden argument*/NULL);
			NullCheck(L_36);
			Dictionary_2_Remove_m2570672626(L_36, L_38, /*hidden argument*/Dictionary_2_Remove_m2570672626_MethodInfo_var);
		}

IL_0155:
		{
			goto IL_0168;
		}

IL_0157:
		{
		}

IL_0158:
		{
			bool L_39 = Enumerator_MoveNext_m586729744((&V_28), /*hidden argument*/Enumerator_MoveNext_m586729744_MethodInfo_var);
			V_27 = L_39;
			bool L_40 = V_27;
			if (L_40)
			{
				goto IL_00ac;
			}
		}

IL_0168:
		{
			IL2CPP_LEAVE(0x179, FINALLY_016a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_016a;
	}

FINALLY_016a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2896629615((&V_28), /*hidden argument*/Enumerator_Dispose_m2896629615_MethodInfo_var);
		IL2CPP_END_FINALLY(362)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(362)
	{
		IL2CPP_JUMP_TBL(0x179, IL_0179)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_0179:
	{
	}

IL_017b:
	{
		NetPeer_SendDelayedPackets_m213428423(__this, /*hidden argument*/NULL);
		NetPeerConfiguration_t136603591 * L_41 = __this->get_m_configuration_21();
		NullCheck(L_41);
		bool L_42 = L_41->get_m_autoFlushSendQueue_13();
		if (!L_42)
		{
			goto IL_019a;
		}
	}
	{
		bool L_43 = __this->get_m_needFlushSendQueue_20();
		G_B29_0 = ((((int32_t)L_43) == ((int32_t)0))? 1 : 0);
		goto IL_019b;
	}

IL_019a:
	{
		G_B29_0 = 1;
	}

IL_019b:
	{
		V_27 = (bool)G_B29_0;
		bool L_44 = V_27;
		if (L_44)
		{
			goto IL_01b2;
		}
	}
	{
		__this->set_m_executeFlushSendQueue_27((bool)1);
		__this->set_m_needFlushSendQueue_20((bool)0);
	}

IL_01b2:
	{
		List_1_t2700613161 * L_45 = __this->get_m_connections_3();
		List_1_t2700613161 * L_46 = L_45;
		V_29 = L_46;
		Monitor_Enter_m2136705809(NULL /*static, unused*/, L_46, /*hidden argument*/NULL);
	}

IL_01c1:
	try
	{ // begin try (depth: 1)
		{
			List_1_t2700613161 * L_47 = __this->get_m_connections_3();
			NullCheck(L_47);
			int32_t L_48 = List_1_get_Count_m1394854046(L_47, /*hidden argument*/List_1_get_Count_m1394854046_MethodInfo_var);
			V_5 = ((int32_t)((int32_t)L_48-(int32_t)1));
			goto IL_022f;
		}

IL_01d3:
		{
			List_1_t2700613161 * L_49 = __this->get_m_connections_3();
			int32_t L_50 = V_5;
			NullCheck(L_49);
			NetConnection_t3331492029 * L_51 = List_1_get_Item_m1684201913(L_49, L_50, /*hidden argument*/List_1_get_Item_m1684201913_MethodInfo_var);
			V_4 = L_51;
			NetConnection_t3331492029 * L_52 = V_4;
			double L_53 = V_0;
			uint32_t L_54 = __this->get_m_frameCounter_16();
			NullCheck(L_52);
			NetConnection_Heartbeat_m3721342474(L_52, L_53, L_54, /*hidden argument*/NULL);
			NetConnection_t3331492029 * L_55 = V_4;
			NullCheck(L_55);
			int32_t L_56 = L_55->get_m_status_2();
			V_27 = (bool)((((int32_t)((((int32_t)L_56) == ((int32_t)7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_57 = V_27;
			if (L_57)
			{
				goto IL_0228;
			}
		}

IL_0205:
		{
			List_1_t2700613161 * L_58 = __this->get_m_connections_3();
			int32_t L_59 = V_5;
			NullCheck(L_58);
			List_1_RemoveAt_m3633877100(L_58, L_59, /*hidden argument*/List_1_RemoveAt_m3633877100_MethodInfo_var);
			Dictionary_2_t3898409514 * L_60 = __this->get_m_connectionLookup_4();
			NetConnection_t3331492029 * L_61 = V_4;
			NullCheck(L_61);
			IPEndPoint_t2615413766 * L_62 = NetConnection_get_RemoteEndPoint_m1562753089(L_61, /*hidden argument*/NULL);
			NullCheck(L_60);
			Dictionary_2_Remove_m2570672626(L_60, L_62, /*hidden argument*/Dictionary_2_Remove_m2570672626_MethodInfo_var);
		}

IL_0228:
		{
			int32_t L_63 = V_5;
			V_5 = ((int32_t)((int32_t)L_63-(int32_t)1));
		}

IL_022f:
		{
			int32_t L_64 = V_5;
			V_27 = (bool)((((int32_t)((((int32_t)L_64) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_65 = V_27;
			if (L_65)
			{
				goto IL_01d3;
			}
		}

IL_023d:
		{
			IL2CPP_LEAVE(0x249, FINALLY_0240);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_0240;
	}

FINALLY_0240:
	{ // begin finally (depth: 1)
		List_1_t2700613161 * L_66 = V_29;
		Monitor_Exit_m2677760297(NULL /*static, unused*/, L_66, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(576)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(576)
	{
		IL2CPP_JUMP_TBL(0x249, IL_0249)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_0249:
	{
		__this->set_m_executeFlushSendQueue_27((bool)0);
		goto IL_02a8;
	}

IL_0253:
	{
		NetOutgoingMessage_t2016542980 * L_67 = (&V_6)->get_Item2_1();
		V_7 = L_67;
		NetOutgoingMessage_t2016542980 * L_68 = V_7;
		ByteU5BU5D_t3397334013* L_69 = __this->get_m_sendBuffer_11();
		NullCheck(L_68);
		int32_t L_70 = NetOutgoingMessage_Encode_m2473987076(L_68, L_69, 0, 0, /*hidden argument*/NULL);
		V_8 = L_70;
		NetOutgoingMessage_t2016542980 * L_71 = V_7;
		NullCheck(L_71);
		int32_t* L_72 = L_71->get_address_of_m_recyclingCount_7();
		Interlocked_Decrement_m70525859(NULL /*static, unused*/, L_72, /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_73 = V_7;
		NullCheck(L_73);
		int32_t L_74 = L_73->get_m_recyclingCount_7();
		V_27 = (bool)((((int32_t)L_74) > ((int32_t)0))? 1 : 0);
		bool L_75 = V_27;
		if (L_75)
		{
			goto IL_0294;
		}
	}
	{
		NetOutgoingMessage_t2016542980 * L_76 = V_7;
		NetPeer_Recycle_m2290156780(__this, L_76, /*hidden argument*/NULL);
	}

IL_0294:
	{
		int32_t L_77 = V_8;
		IPEndPoint_t2615413766 * L_78 = (&V_6)->get_Item1_0();
		NetPeer_SendPacket_m625616909(__this, L_77, L_78, 1, (&V_9), /*hidden argument*/NULL);
	}

IL_02a8:
	{
		NetQueue_1_t1703294902 * L_79 = __this->get_m_unsentUnconnectedMessages_23();
		NullCheck(L_79);
		bool L_80 = NetQueue_1_TryDequeue_m504151096(L_79, (&V_6), /*hidden argument*/NetQueue_1_TryDequeue_m504151096_MethodInfo_var);
		V_27 = L_80;
		bool L_81 = V_27;
		if (L_81)
		{
			goto IL_0253;
		}
	}
	{
	}

IL_02bc:
	{
		NetUPnP_t2794379482 * L_82 = __this->get_m_upnp_19();
		V_27 = (bool)((((Il2CppObject*)(NetUPnP_t2794379482 *)L_82) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
		bool L_83 = V_27;
		if (L_83)
		{
			goto IL_02d7;
		}
	}
	{
		NetUPnP_t2794379482 * L_84 = __this->get_m_upnp_19();
		NullCheck(L_84);
		NetUPnP_CheckForDiscoveryTimeout_m1059646905(L_84, /*hidden argument*/NULL);
	}

IL_02d7:
	{
		Socket_t3821512045 * L_85 = __this->get_m_socket_10();
		V_27 = (bool)((((int32_t)((((Il2CppObject*)(Socket_t3821512045 *)L_85) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_86 = V_27;
		if (L_86)
		{
			goto IL_02ee;
		}
	}
	{
		goto IL_0780;
	}

IL_02ee:
	{
		Socket_t3821512045 * L_87 = __this->get_m_socket_10();
		NullCheck(L_87);
		bool L_88 = Socket_Poll_m2898913906(L_87, ((int32_t)1000), 0, /*hidden argument*/NULL);
		V_27 = L_88;
		bool L_89 = V_27;
		if (L_89)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0780;
	}

IL_030a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetTime_t3056501352_il2cpp_TypeInfo_var);
		double L_90 = NetTime_get_Now_m1609702533(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_90;
	}

IL_0310:
	{
		V_10 = 0;
	}

IL_0314:
	try
	{ // begin try (depth: 1)
		Socket_t3821512045 * L_91 = __this->get_m_socket_10();
		ByteU5BU5D_t3397334013* L_92 = __this->get_m_receiveBuffer_12();
		ByteU5BU5D_t3397334013* L_93 = __this->get_m_receiveBuffer_12();
		NullCheck(L_93);
		EndPoint_t4156119363 ** L_94 = __this->get_address_of_m_senderRemote_14();
		NullCheck(L_91);
		int32_t L_95 = Socket_ReceiveFrom_m376318322(L_91, L_92, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_93)->max_length)))), 0, L_94, /*hidden argument*/NULL);
		V_10 = L_95;
		goto IL_0396;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t1927440687 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (SocketException_t1618573604_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_033b;
		throw e;
	}

CATCH_033b:
	{ // begin catch(System.Net.Sockets.SocketException)
		{
			V_11 = ((SocketException_t1618573604 *)__exception_local);
			SocketException_t1618573604 * L_96 = V_11;
			NullCheck(L_96);
			int32_t L_97 = SocketException_get_SocketErrorCode_m3898993591(L_96, /*hidden argument*/NULL);
			V_30 = L_97;
			int32_t L_98 = V_30;
			if ((((int32_t)L_98) == ((int32_t)((int32_t)10054))))
			{
				goto IL_035b;
			}
		}

IL_0350:
		{
			int32_t L_99 = V_30;
			if ((((int32_t)L_99) == ((int32_t)((int32_t)10057))))
			{
				goto IL_036c;
			}
		}

IL_0359:
		{
			goto IL_0379;
		}

IL_035b:
		{
			NetPeer_LogWarning_m3266657906(__this, _stringLiteral3329200195, /*hidden argument*/NULL);
			goto IL_0780;
		}

IL_036c:
		{
			NetPeer_BindSocket_m3838079755(__this, (bool)1, /*hidden argument*/NULL);
			goto IL_0780;
		}

IL_0379:
		{
			SocketException_t1618573604 * L_100 = V_11;
			NullCheck(L_100);
			String_t* L_101 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_100);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_102 = String_Concat_m2596409543(NULL /*static, unused*/, _stringLiteral701915360, L_101, /*hidden argument*/NULL);
			NetPeer_LogWarning_m3266657906(__this, L_102, /*hidden argument*/NULL);
			goto IL_0780;
		}
	} // end catch (depth: 1)

IL_0396:
	{
		int32_t L_103 = V_10;
		V_27 = (bool)((((int32_t)((((int32_t)L_103) < ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_104 = V_27;
		if (L_104)
		{
			goto IL_03aa;
		}
	}
	{
		goto IL_0780;
	}

IL_03aa:
	{
		EndPoint_t4156119363 * L_105 = __this->get_m_senderRemote_14();
		V_12 = ((IPEndPoint_t2615413766 *)CastclassClass(L_105, IPEndPoint_t2615413766_il2cpp_TypeInfo_var));
		NetUPnP_t2794379482 * L_106 = __this->get_m_upnp_19();
		if (!L_106)
		{
			goto IL_03d8;
		}
	}
	{
		double L_107 = V_0;
		NetUPnP_t2794379482 * L_108 = __this->get_m_upnp_19();
		NullCheck(L_108);
		double L_109 = L_108->get_m_discoveryResponseDeadline_4();
		if ((!(((double)L_107) < ((double)L_109))))
		{
			goto IL_03d8;
		}
	}
	{
		int32_t L_110 = V_10;
		G_B66_0 = ((((int32_t)((((int32_t)L_110) > ((int32_t)((int32_t)32)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_03d9;
	}

IL_03d8:
	{
		G_B66_0 = 1;
	}

IL_03d9:
	{
		V_27 = (bool)G_B66_0;
		bool L_111 = V_27;
		if (L_111)
		{
			goto IL_048e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t663144255_il2cpp_TypeInfo_var);
		Encoding_t663144255 * L_112 = Encoding_get_UTF8_m1752852937(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t3397334013* L_113 = __this->get_m_receiveBuffer_12();
		int32_t L_114 = V_10;
		NullCheck(L_112);
		String_t* L_115 = VirtFuncInvoker3< String_t*, ByteU5BU5D_t3397334013*, int32_t, int32_t >::Invoke(21 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_112, L_113, 0, L_114);
		V_13 = L_115;
		String_t* L_116 = V_13;
		NullCheck(L_116);
		bool L_117 = String_Contains_m4017059963(L_116, _stringLiteral671997955, /*hidden argument*/NULL);
		if (L_117)
		{
			goto IL_0418;
		}
	}
	{
		String_t* L_118 = V_13;
		NullCheck(L_118);
		bool L_119 = String_Contains_m4017059963(L_118, _stringLiteral1880305331, /*hidden argument*/NULL);
		G_B70_0 = ((((int32_t)L_119) == ((int32_t)0))? 1 : 0);
		goto IL_0419;
	}

IL_0418:
	{
		G_B70_0 = 0;
	}

IL_0419:
	{
		V_27 = (bool)G_B70_0;
		bool L_120 = V_27;
		if (L_120)
		{
			goto IL_048d;
		}
	}
	{
	}

IL_0421:
	try
	{ // begin try (depth: 1)
		String_t* L_121 = V_13;
		String_t* L_122 = V_13;
		NullCheck(L_122);
		String_t* L_123 = String_ToLower_m2994460523(L_122, /*hidden argument*/NULL);
		NullCheck(L_123);
		int32_t L_124 = String_IndexOf_m4251815737(L_123, _stringLiteral409666631, /*hidden argument*/NULL);
		NullCheck(L_121);
		String_t* L_125 = String_Substring_m2032624251(L_121, ((int32_t)((int32_t)L_124+(int32_t)((int32_t)9))), /*hidden argument*/NULL);
		V_13 = L_125;
		String_t* L_126 = V_13;
		String_t* L_127 = V_13;
		NullCheck(L_127);
		int32_t L_128 = String_IndexOf_m4251815737(L_127, _stringLiteral372029345, /*hidden argument*/NULL);
		NullCheck(L_126);
		String_t* L_129 = String_Substring_m12482732(L_126, 0, L_128, /*hidden argument*/NULL);
		NullCheck(L_129);
		String_t* L_130 = String_Trim_m2668767713(L_129, /*hidden argument*/NULL);
		V_13 = L_130;
		NetUPnP_t2794379482 * L_131 = __this->get_m_upnp_19();
		String_t* L_132 = V_13;
		NullCheck(L_131);
		NetUPnP_ExtractServiceUrl_m1890440714(L_131, L_132, /*hidden argument*/NULL);
		goto IL_0780;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t1927440687 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t1927440687_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_046d;
		throw e;
	}

CATCH_046d:
	{ // begin catch(System.Exception)
		V_14 = ((Exception_t1927440687 *)__exception_local);
		Exception_t1927440687 * L_133 = V_14;
		NullCheck(L_133);
		String_t* L_134 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_133);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_135 = String_Concat_m2596409543(NULL /*static, unused*/, _stringLiteral1189522563, L_134, /*hidden argument*/NULL);
		NetPeer_LogDebug_m2983960595(__this, L_135, /*hidden argument*/NULL);
		goto IL_0780;
	} // end catch (depth: 1)

IL_048d:
	{
	}

IL_048e:
	{
		V_15 = (NetConnection_t3331492029 *)NULL;
		Dictionary_2_t3898409514 * L_136 = __this->get_m_connectionLookup_4();
		IPEndPoint_t2615413766 * L_137 = V_12;
		NullCheck(L_136);
		Dictionary_2_TryGetValue_m2698685646(L_136, L_137, (&V_15), /*hidden argument*/Dictionary_2_TryGetValue_m2698685646_MethodInfo_var);
		V_16 = 0;
		V_17 = 0;
		V_18 = 0;
		goto IL_0724;
	}

IL_04af:
	{
		int32_t L_138 = V_16;
		V_16 = ((int32_t)((int32_t)L_138+(int32_t)1));
		ByteU5BU5D_t3397334013* L_139 = __this->get_m_receiveBuffer_12();
		int32_t L_140 = V_18;
		int32_t L_141 = L_140;
		V_18 = ((int32_t)((int32_t)L_141+(int32_t)1));
		NullCheck(L_139);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_139, L_141);
		int32_t L_142 = L_141;
		uint8_t L_143 = (L_139)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		V_19 = L_143;
		ByteU5BU5D_t3397334013* L_144 = __this->get_m_receiveBuffer_12();
		int32_t L_145 = V_18;
		int32_t L_146 = L_145;
		V_18 = ((int32_t)((int32_t)L_146+(int32_t)1));
		NullCheck(L_144);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_144, L_146);
		int32_t L_147 = L_146;
		uint8_t L_148 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_147));
		V_20 = L_148;
		ByteU5BU5D_t3397334013* L_149 = __this->get_m_receiveBuffer_12();
		int32_t L_150 = V_18;
		int32_t L_151 = L_150;
		V_18 = ((int32_t)((int32_t)L_151+(int32_t)1));
		NullCheck(L_149);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_149, L_151);
		int32_t L_152 = L_151;
		uint8_t L_153 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		V_21 = L_153;
		uint8_t L_154 = V_20;
		V_22 = (bool)((((int32_t)((int32_t)((int32_t)L_154&(int32_t)1))) == ((int32_t)1))? 1 : 0);
		uint8_t L_155 = V_20;
		uint8_t L_156 = V_21;
		V_23 = (((int32_t)((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_155>>(int32_t)1))|(int32_t)((int32_t)((int32_t)L_156<<(int32_t)7)))))));
		bool L_157 = V_22;
		V_27 = (bool)((((int32_t)L_157) == ((int32_t)0))? 1 : 0);
		bool L_158 = V_27;
		if (L_158)
		{
			goto IL_050c;
		}
	}
	{
		int32_t L_159 = V_17;
		V_17 = ((int32_t)((int32_t)L_159+(int32_t)1));
	}

IL_050c:
	{
		ByteU5BU5D_t3397334013* L_160 = __this->get_m_receiveBuffer_12();
		int32_t L_161 = V_18;
		int32_t L_162 = L_161;
		V_18 = ((int32_t)((int32_t)L_162+(int32_t)1));
		NullCheck(L_160);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_160, L_162);
		int32_t L_163 = L_162;
		uint8_t L_164 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_163));
		ByteU5BU5D_t3397334013* L_165 = __this->get_m_receiveBuffer_12();
		int32_t L_166 = V_18;
		int32_t L_167 = L_166;
		V_18 = ((int32_t)((int32_t)L_167+(int32_t)1));
		NullCheck(L_165);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_165, L_167);
		int32_t L_168 = L_167;
		uint8_t L_169 = (L_165)->GetAt(static_cast<il2cpp_array_size_t>(L_168));
		V_24 = (((int32_t)((uint16_t)((int32_t)((int32_t)L_164|(int32_t)((int32_t)((int32_t)L_169<<(int32_t)8)))))));
		uint16_t L_170 = V_24;
		IL2CPP_RUNTIME_CLASS_INIT(NetUtility_t3562260209_il2cpp_TypeInfo_var);
		int32_t L_171 = NetUtility_BytesToHoldBits_m1372162852(NULL /*static, unused*/, L_170, /*hidden argument*/NULL);
		V_25 = L_171;
		int32_t L_172 = V_10;
		int32_t L_173 = V_18;
		int32_t L_174 = V_25;
		V_27 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_172-(int32_t)L_173))) < ((int32_t)L_174))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_175 = V_27;
		if (L_175)
		{
			goto IL_0590;
		}
	}
	{
		V_31 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)4));
		ObjectU5BU5D_t3614634134* L_176 = V_31;
		NullCheck(L_176);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_176, 0);
		ArrayElementTypeCheck (L_176, _stringLiteral3718723205);
		(L_176)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral3718723205);
		ObjectU5BU5D_t3614634134* L_177 = V_31;
		int32_t L_178 = V_25;
		int32_t L_179 = L_178;
		Il2CppObject * L_180 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_179);
		NullCheck(L_177);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_177, 1);
		ArrayElementTypeCheck (L_177, L_180);
		(L_177)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_180);
		ObjectU5BU5D_t3614634134* L_181 = V_31;
		NullCheck(L_181);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_181, 2);
		ArrayElementTypeCheck (L_181, _stringLiteral986412037);
		(L_181)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral986412037);
		ObjectU5BU5D_t3614634134* L_182 = V_31;
		int32_t L_183 = V_10;
		int32_t L_184 = V_18;
		int32_t L_185 = ((int32_t)((int32_t)L_183-(int32_t)L_184));
		Il2CppObject * L_186 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_185);
		NullCheck(L_182);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_182, 3);
		ArrayElementTypeCheck (L_182, L_186);
		(L_182)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_186);
		ObjectU5BU5D_t3614634134* L_187 = V_31;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_188 = String_Concat_m3881798623(NULL /*static, unused*/, L_187, /*hidden argument*/NULL);
		NetPeer_LogWarning_m3266657906(__this, L_188, /*hidden argument*/NULL);
		goto IL_0780;
	}

IL_0590:
	{
		uint8_t L_189 = V_19;
		if ((((int32_t)L_189) < ((int32_t)((int32_t)99))))
		{
			goto IL_059e;
		}
	}
	{
		uint8_t L_190 = V_19;
		G_B83_0 = ((((int32_t)L_190) > ((int32_t)((int32_t)127)))? 1 : 0);
		goto IL_059f;
	}

IL_059e:
	{
		G_B83_0 = 1;
	}

IL_059f:
	{
		V_27 = (bool)G_B83_0;
		bool L_191 = V_27;
		if (L_191)
		{
			goto IL_05c4;
		}
	}
	{
		uint8_t L_192 = V_19;
		uint8_t L_193 = L_192;
		Il2CppObject * L_194 = Box(NetMessageType_t191235414_il2cpp_TypeInfo_var, &L_193);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_195 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral89479935, L_194, /*hidden argument*/NULL);
		NetPeer_ThrowOrLog_m2301784333(__this, L_195, /*hidden argument*/NULL);
		goto IL_0780;
	}

IL_05c4:
	try
	{ // begin try (depth: 1)
		{
			uint8_t L_196 = V_19;
			V_27 = (bool)((((int32_t)L_196) < ((int32_t)((int32_t)128)))? 1 : 0);
			bool L_197 = V_27;
			if (L_197)
			{
				goto IL_0606;
			}
		}

IL_05d4:
		{
			NetConnection_t3331492029 * L_198 = V_15;
			V_27 = (bool)((((Il2CppObject*)(NetConnection_t3331492029 *)L_198) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
			bool L_199 = V_27;
			if (L_199)
			{
				goto IL_05f0;
			}
		}

IL_05e0:
		{
			NetConnection_t3331492029 * L_200 = V_15;
			uint8_t L_201 = V_19;
			int32_t L_202 = V_18;
			int32_t L_203 = V_25;
			NullCheck(L_200);
			NetConnection_ReceivedLibraryMessage_m3458110466(L_200, L_201, L_202, L_203, /*hidden argument*/NULL);
			goto IL_0600;
		}

IL_05f0:
		{
			double L_204 = V_0;
			IPEndPoint_t2615413766 * L_205 = V_12;
			uint8_t L_206 = V_19;
			int32_t L_207 = V_18;
			int32_t L_208 = V_25;
			NetPeer_ReceivedUnconnectedLibraryMessage_m2683277802(__this, L_204, L_205, L_206, L_207, L_208, /*hidden argument*/NULL);
		}

IL_0600:
		{
			goto IL_06d9;
		}

IL_0606:
		{
			NetConnection_t3331492029 * L_209 = V_15;
			if (L_209)
			{
				goto IL_0619;
			}
		}

IL_060b:
		{
			NetPeerConfiguration_t136603591 * L_210 = __this->get_m_configuration_21();
			NullCheck(L_210);
			bool L_211 = NetPeerConfiguration_IsMessageTypeEnabled_m1110774391(L_210, 2, /*hidden argument*/NULL);
			G_B93_0 = ((int32_t)(L_211));
			goto IL_061a;
		}

IL_0619:
		{
			G_B93_0 = 1;
		}

IL_061a:
		{
			V_27 = (bool)G_B93_0;
			bool L_212 = V_27;
			if (L_212)
			{
				goto IL_0626;
			}
		}

IL_0621:
		{
			goto IL_0780;
		}

IL_0626:
		{
			int32_t L_213 = V_25;
			NetIncomingMessage_t2014089816 * L_214 = NetPeer_CreateIncomingMessage_m2109562735(__this, 8, L_213, /*hidden argument*/NULL);
			V_26 = L_214;
			NetIncomingMessage_t2014089816 * L_215 = V_26;
			bool L_216 = V_22;
			NullCheck(L_215);
			L_215->set_m_isFragment_10(L_216);
			NetIncomingMessage_t2014089816 * L_217 = V_26;
			double L_218 = V_0;
			NullCheck(L_217);
			L_217->set_m_receiveTime_11(L_218);
			NetIncomingMessage_t2014089816 * L_219 = V_26;
			uint16_t L_220 = V_23;
			NullCheck(L_219);
			L_219->set_m_sequenceNumber_8(L_220);
			NetIncomingMessage_t2014089816 * L_221 = V_26;
			uint8_t L_222 = V_19;
			NullCheck(L_221);
			L_221->set_m_receivedMessageType_9(L_222);
			NetIncomingMessage_t2014089816 * L_223 = V_26;
			NetConnection_t3331492029 * L_224 = V_15;
			NullCheck(L_223);
			L_223->set_m_senderConnection_7(L_224);
			NetIncomingMessage_t2014089816 * L_225 = V_26;
			IPEndPoint_t2615413766 * L_226 = V_12;
			NullCheck(L_225);
			L_225->set_m_senderEndPoint_6(L_226);
			NetIncomingMessage_t2014089816 * L_227 = V_26;
			uint16_t L_228 = V_24;
			NullCheck(L_227);
			((NetBuffer_t3608062491 *)L_227)->set_m_bitLength_3(L_228);
			ByteU5BU5D_t3397334013* L_229 = __this->get_m_receiveBuffer_12();
			int32_t L_230 = V_18;
			NetIncomingMessage_t2014089816 * L_231 = V_26;
			NullCheck(L_231);
			ByteU5BU5D_t3397334013* L_232 = ((NetBuffer_t3608062491 *)L_231)->get_m_data_2();
			int32_t L_233 = V_25;
			Buffer_BlockCopy_m1586717258(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_229, L_230, (Il2CppArray *)(Il2CppArray *)L_232, 0, L_233, /*hidden argument*/NULL);
			NetConnection_t3331492029 * L_234 = V_15;
			V_27 = (bool)((((Il2CppObject*)(NetConnection_t3331492029 *)L_234) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
			bool L_235 = V_27;
			if (L_235)
			{
				goto IL_06c5;
			}
		}

IL_0692:
		{
			uint8_t L_236 = V_19;
			V_27 = (bool)((((int32_t)((((int32_t)L_236) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_237 = V_27;
			if (L_237)
			{
				goto IL_06b6;
			}
		}

IL_06a1:
		{
			NetIncomingMessage_t2014089816 * L_238 = V_26;
			NullCheck(L_238);
			L_238->set_m_incomingMessageType_5(2);
			NetIncomingMessage_t2014089816 * L_239 = V_26;
			NetPeer_ReleaseMessage_m3520648965(__this, L_239, /*hidden argument*/NULL);
			goto IL_06c2;
		}

IL_06b6:
		{
			NetConnection_t3331492029 * L_240 = V_15;
			NetIncomingMessage_t2014089816 * L_241 = V_26;
			NullCheck(L_240);
			NetConnection_ReceivedMessage_m864391479(L_240, L_241, /*hidden argument*/NULL);
		}

IL_06c2:
		{
			goto IL_06d8;
		}

IL_06c5:
		{
			NetIncomingMessage_t2014089816 * L_242 = V_26;
			NullCheck(L_242);
			L_242->set_m_incomingMessageType_5(2);
			NetIncomingMessage_t2014089816 * L_243 = V_26;
			NetPeer_ReleaseMessage_m3520648965(__this, L_243, /*hidden argument*/NULL);
		}

IL_06d8:
		{
		}

IL_06d9:
		{
			goto IL_071b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t1927440687 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t1927440687_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_06dc;
		throw e;
	}

CATCH_06dc:
	{ // begin catch(System.Exception)
		V_14 = ((Exception_t1927440687 *)__exception_local);
		V_31 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)4));
		ObjectU5BU5D_t3614634134* L_244 = V_31;
		NullCheck(L_244);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_244, 0);
		ArrayElementTypeCheck (L_244, _stringLiteral3099179458);
		(L_244)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral3099179458);
		ObjectU5BU5D_t3614634134* L_245 = V_31;
		Exception_t1927440687 * L_246 = V_14;
		NullCheck(L_246);
		String_t* L_247 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_246);
		NullCheck(L_245);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_245, 1);
		ArrayElementTypeCheck (L_245, L_247);
		(L_245)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_247);
		ObjectU5BU5D_t3614634134* L_248 = V_31;
		NullCheck(L_248);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_248, 2);
		ArrayElementTypeCheck (L_248, _stringLiteral4166804854);
		(L_248)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral4166804854);
		ObjectU5BU5D_t3614634134* L_249 = V_31;
		IPEndPoint_t2615413766 * L_250 = V_12;
		NullCheck(L_249);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_249, 3);
		ArrayElementTypeCheck (L_249, L_250);
		(L_249)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_250);
		ObjectU5BU5D_t3614634134* L_251 = V_31;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_252 = String_Concat_m3881798623(NULL /*static, unused*/, L_251, /*hidden argument*/NULL);
		NetPeer_LogError_m1931099304(__this, L_252, /*hidden argument*/NULL);
		goto IL_071b;
	} // end catch (depth: 1)

IL_071b:
	{
		int32_t L_253 = V_18;
		int32_t L_254 = V_25;
		V_18 = ((int32_t)((int32_t)L_253+(int32_t)L_254));
	}

IL_0724:
	{
		int32_t L_255 = V_10;
		int32_t L_256 = V_18;
		V_27 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_255-(int32_t)L_256))) < ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_257 = V_27;
		if (L_257)
		{
			goto IL_04af;
		}
	}
	{
		NetPeerStatistics_t101027066 * L_258 = __this->get_m_statistics_25();
		int32_t L_259 = V_10;
		int32_t L_260 = V_16;
		int32_t L_261 = V_17;
		NullCheck(L_258);
		NetPeerStatistics_PacketReceived_m2812231107(L_258, L_259, L_260, L_261, /*hidden argument*/NULL);
		NetConnection_t3331492029 * L_262 = V_15;
		V_27 = (bool)((((Il2CppObject*)(NetConnection_t3331492029 *)L_262) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
		bool L_263 = V_27;
		if (L_263)
		{
			goto IL_0768;
		}
	}
	{
		NetConnection_t3331492029 * L_264 = V_15;
		NullCheck(L_264);
		NetConnectionStatistics_t1235765202 * L_265 = L_264->get_m_statistics_14();
		int32_t L_266 = V_10;
		int32_t L_267 = V_16;
		int32_t L_268 = V_17;
		NullCheck(L_265);
		NetConnectionStatistics_PacketReceived_m1973808183(L_265, L_266, L_267, L_268, /*hidden argument*/NULL);
	}

IL_0768:
	{
		Socket_t3821512045 * L_269 = __this->get_m_socket_10();
		NullCheck(L_269);
		int32_t L_270 = Socket_get_Available_m2478984899(L_269, /*hidden argument*/NULL);
		V_27 = (bool)((((int32_t)L_270) > ((int32_t)0))? 1 : 0);
		bool L_271 = V_27;
		if (L_271)
		{
			goto IL_0310;
		}
	}

IL_0780:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetPeer::FlushSendQueue()
extern "C"  void NetPeer_FlushSendQueue_m2253071797 (NetPeer_t1779390221 * __this, const MethodInfo* method)
{
	{
		__this->set_m_executeFlushSendQueue_27((bool)1);
		return;
	}
}
// System.Void Lidgren.Network.NetPeer::HandleIncomingDiscoveryRequest(System.Double,System.Net.IPEndPoint,System.Int32,System.Int32)
extern "C"  void NetPeer_HandleIncomingDiscoveryRequest_m4170027425 (NetPeer_t1779390221 * __this, double ___now0, IPEndPoint_t2615413766 * ___senderEndPoint1, int32_t ___ptr2, int32_t ___payloadByteLength3, const MethodInfo* method)
{
	NetIncomingMessage_t2014089816 * V_0 = NULL;
	bool V_1 = false;
	{
		NetPeerConfiguration_t136603591 * L_0 = __this->get_m_configuration_21();
		NullCheck(L_0);
		bool L_1 = NetPeerConfiguration_IsMessageTypeEnabled_m1110774391(L_0, ((int32_t)32), /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (L_2)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_3 = ___payloadByteLength3;
		NetIncomingMessage_t2014089816 * L_4 = NetPeer_CreateIncomingMessage_m2109562735(__this, ((int32_t)32), L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = ___payloadByteLength3;
		V_1 = (bool)((((int32_t)((((int32_t)L_5) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (L_6)
		{
			goto IL_0043;
		}
	}
	{
		ByteU5BU5D_t3397334013* L_7 = __this->get_m_receiveBuffer_12();
		int32_t L_8 = ___ptr2;
		NetIncomingMessage_t2014089816 * L_9 = V_0;
		NullCheck(L_9);
		ByteU5BU5D_t3397334013* L_10 = ((NetBuffer_t3608062491 *)L_9)->get_m_data_2();
		int32_t L_11 = ___payloadByteLength3;
		Buffer_BlockCopy_m1586717258(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_7, L_8, (Il2CppArray *)(Il2CppArray *)L_10, 0, L_11, /*hidden argument*/NULL);
	}

IL_0043:
	{
		NetIncomingMessage_t2014089816 * L_12 = V_0;
		double L_13 = ___now0;
		NullCheck(L_12);
		L_12->set_m_receiveTime_11(L_13);
		NetIncomingMessage_t2014089816 * L_14 = V_0;
		int32_t L_15 = ___payloadByteLength3;
		NullCheck(L_14);
		((NetBuffer_t3608062491 *)L_14)->set_m_bitLength_3(((int32_t)((int32_t)L_15*(int32_t)8)));
		NetIncomingMessage_t2014089816 * L_16 = V_0;
		IPEndPoint_t2615413766 * L_17 = ___senderEndPoint1;
		NullCheck(L_16);
		L_16->set_m_senderEndPoint_6(L_17);
		NetIncomingMessage_t2014089816 * L_18 = V_0;
		NetPeer_ReleaseMessage_m3520648965(__this, L_18, /*hidden argument*/NULL);
	}

IL_0064:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetPeer::HandleIncomingDiscoveryResponse(System.Double,System.Net.IPEndPoint,System.Int32,System.Int32)
extern "C"  void NetPeer_HandleIncomingDiscoveryResponse_m1395777003 (NetPeer_t1779390221 * __this, double ___now0, IPEndPoint_t2615413766 * ___senderEndPoint1, int32_t ___ptr2, int32_t ___payloadByteLength3, const MethodInfo* method)
{
	NetIncomingMessage_t2014089816 * V_0 = NULL;
	bool V_1 = false;
	{
		NetPeerConfiguration_t136603591 * L_0 = __this->get_m_configuration_21();
		NullCheck(L_0);
		bool L_1 = NetPeerConfiguration_IsMessageTypeEnabled_m1110774391(L_0, ((int32_t)64), /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (L_2)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_3 = ___payloadByteLength3;
		NetIncomingMessage_t2014089816 * L_4 = NetPeer_CreateIncomingMessage_m2109562735(__this, ((int32_t)64), L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = ___payloadByteLength3;
		V_1 = (bool)((((int32_t)((((int32_t)L_5) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (L_6)
		{
			goto IL_0043;
		}
	}
	{
		ByteU5BU5D_t3397334013* L_7 = __this->get_m_receiveBuffer_12();
		int32_t L_8 = ___ptr2;
		NetIncomingMessage_t2014089816 * L_9 = V_0;
		NullCheck(L_9);
		ByteU5BU5D_t3397334013* L_10 = ((NetBuffer_t3608062491 *)L_9)->get_m_data_2();
		int32_t L_11 = ___payloadByteLength3;
		Buffer_BlockCopy_m1586717258(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_7, L_8, (Il2CppArray *)(Il2CppArray *)L_10, 0, L_11, /*hidden argument*/NULL);
	}

IL_0043:
	{
		NetIncomingMessage_t2014089816 * L_12 = V_0;
		double L_13 = ___now0;
		NullCheck(L_12);
		L_12->set_m_receiveTime_11(L_13);
		NetIncomingMessage_t2014089816 * L_14 = V_0;
		int32_t L_15 = ___payloadByteLength3;
		NullCheck(L_14);
		((NetBuffer_t3608062491 *)L_14)->set_m_bitLength_3(((int32_t)((int32_t)L_15*(int32_t)8)));
		NetIncomingMessage_t2014089816 * L_16 = V_0;
		IPEndPoint_t2615413766 * L_17 = ___senderEndPoint1;
		NullCheck(L_16);
		L_16->set_m_senderEndPoint_6(L_17);
		NetIncomingMessage_t2014089816 * L_18 = V_0;
		NetPeer_ReleaseMessage_m3520648965(__this, L_18, /*hidden argument*/NULL);
	}

IL_0064:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetPeer::ReceivedUnconnectedLibraryMessage(System.Double,System.Net.IPEndPoint,Lidgren.Network.NetMessageType,System.Int32,System.Int32)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern Il2CppClass* NetMessageType_t191235414_il2cpp_TypeInfo_var;
extern Il2CppClass* NetConnection_t3331492029_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_TryGetValue_m2698685646_MethodInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m3728096743_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m2227275631_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m4001602897_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m1515431574_MethodInfo_var;
extern const MethodInfo* Dictionary_2_Remove_m2570672626_MethodInfo_var;
extern const MethodInfo* Dictionary_2_Add_m462421331_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m586729744_MethodInfo_var;
extern const MethodInfo* Enumerator_Dispose_m2896629615_MethodInfo_var;
extern const MethodInfo* Dictionary_2_get_Count_m3270350375_MethodInfo_var;
extern const MethodInfo* List_1_get_Count_m1394854046_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral698253060;
extern Il2CppCodeGenString* _stringLiteral1068359790;
extern Il2CppCodeGenString* _stringLiteral4166804854;
extern Il2CppCodeGenString* _stringLiteral292773447;
extern Il2CppCodeGenString* _stringLiteral930789854;
extern Il2CppCodeGenString* _stringLiteral2576259168;
extern const uint32_t NetPeer_ReceivedUnconnectedLibraryMessage_m2683277802_MetadataUsageId;
extern "C"  void NetPeer_ReceivedUnconnectedLibraryMessage_m2683277802 (NetPeer_t1779390221 * __this, double ___now0, IPEndPoint_t2615413766 * ___senderEndPoint1, uint8_t ___tp2, int32_t ___ptr3, int32_t ___payloadByteLength4, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetPeer_ReceivedUnconnectedLibraryMessage_m2683277802_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	NetConnection_t3331492029 * V_0 = NULL;
	KeyValuePair_2_t1655754736  V_1;
	memset(&V_1, 0, sizeof(V_1));
	NetConnection_t3331492029 * V_2 = NULL;
	int32_t V_3 = 0;
	NetOutgoingMessage_t2016542980 * V_4 = NULL;
	NetConnection_t3331492029 * V_5 = NULL;
	bool V_6 = false;
	uint8_t V_7 = 0;
	Dictionary_2_t3898409514 * V_8 = NULL;
	Enumerator_t923466920  V_9;
	memset(&V_9, 0, sizeof(V_9));
	ObjectU5BU5D_t3614634134* V_10 = NULL;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t3898409514 * L_0 = __this->get_m_handshakes_24();
		IPEndPoint_t2615413766 * L_1 = ___senderEndPoint1;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_TryGetValue_m2698685646(L_0, L_1, (&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m2698685646_MethodInfo_var);
		V_6 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_6;
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		NetConnection_t3331492029 * L_4 = V_0;
		double L_5 = ___now0;
		uint8_t L_6 = ___tp2;
		int32_t L_7 = ___ptr3;
		int32_t L_8 = ___payloadByteLength4;
		NullCheck(L_4);
		NetConnection_ReceivedHandshake_m1128410455(L_4, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		goto IL_0372;
	}

IL_002b:
	{
		uint8_t L_9 = ___tp2;
		V_7 = L_9;
		uint8_t L_10 = V_7;
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)131))) == 0)
		{
			goto IL_0280;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)131))) == 1)
		{
			goto IL_0137;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)131))) == 2)
		{
			goto IL_0339;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)131))) == 3)
		{
			goto IL_0339;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)131))) == 4)
		{
			goto IL_0325;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)131))) == 5)
		{
			goto IL_0074;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)131))) == 6)
		{
			goto IL_0086;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)131))) == 7)
		{
			goto IL_00bf;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)131))) == 8)
		{
			goto IL_0098;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)131))) == 9)
		{
			goto IL_0339;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)131))) == 10)
		{
			goto IL_0339;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)131))) == 11)
		{
			goto IL_00e7;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)131))) == 12)
		{
			goto IL_010f;
		}
	}
	{
		goto IL_0339;
	}

IL_0074:
	{
		double L_11 = ___now0;
		IPEndPoint_t2615413766 * L_12 = ___senderEndPoint1;
		int32_t L_13 = ___ptr3;
		int32_t L_14 = ___payloadByteLength4;
		NetPeer_HandleIncomingDiscoveryRequest_m4170027425(__this, L_11, L_12, L_13, L_14, /*hidden argument*/NULL);
		goto IL_0372;
	}

IL_0086:
	{
		double L_15 = ___now0;
		IPEndPoint_t2615413766 * L_16 = ___senderEndPoint1;
		int32_t L_17 = ___ptr3;
		int32_t L_18 = ___payloadByteLength4;
		NetPeer_HandleIncomingDiscoveryResponse_m1395777003(__this, L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
		goto IL_0372;
	}

IL_0098:
	{
		NetPeerConfiguration_t136603591 * L_19 = __this->get_m_configuration_21();
		NullCheck(L_19);
		bool L_20 = NetPeerConfiguration_IsMessageTypeEnabled_m1110774391(L_19, ((int32_t)2048), /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_6;
		if (L_21)
		{
			goto IL_00ba;
		}
	}
	{
		int32_t L_22 = ___ptr3;
		NetPeer_HandleNatIntroduction_m4079714032(__this, L_22, /*hidden argument*/NULL);
	}

IL_00ba:
	{
		goto IL_0372;
	}

IL_00bf:
	{
		NetPeerConfiguration_t136603591 * L_23 = __this->get_m_configuration_21();
		NullCheck(L_23);
		bool L_24 = NetPeerConfiguration_IsMessageTypeEnabled_m1110774391(L_23, ((int32_t)2048), /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_6;
		if (L_25)
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_26 = ___ptr3;
		IPEndPoint_t2615413766 * L_27 = ___senderEndPoint1;
		NetPeer_HandleNatPunch_m77480994(__this, L_26, L_27, /*hidden argument*/NULL);
	}

IL_00e2:
	{
		goto IL_0372;
	}

IL_00e7:
	{
		NetPeerConfiguration_t136603591 * L_28 = __this->get_m_configuration_21();
		NullCheck(L_28);
		bool L_29 = NetPeerConfiguration_IsMessageTypeEnabled_m1110774391(L_28, ((int32_t)2048), /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)L_29) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_6;
		if (L_30)
		{
			goto IL_010a;
		}
	}
	{
		int32_t L_31 = ___ptr3;
		IPEndPoint_t2615413766 * L_32 = ___senderEndPoint1;
		NetPeer_HandleNatPunchConfirmRequest_m3944409323(__this, L_31, L_32, /*hidden argument*/NULL);
	}

IL_010a:
	{
		goto IL_0372;
	}

IL_010f:
	{
		NetPeerConfiguration_t136603591 * L_33 = __this->get_m_configuration_21();
		NullCheck(L_33);
		bool L_34 = NetPeerConfiguration_IsMessageTypeEnabled_m1110774391(L_33, ((int32_t)2048), /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)L_34) == ((int32_t)0))? 1 : 0);
		bool L_35 = V_6;
		if (L_35)
		{
			goto IL_0132;
		}
	}
	{
		int32_t L_36 = ___ptr3;
		IPEndPoint_t2615413766 * L_37 = ___senderEndPoint1;
		NetPeer_HandleNatPunchConfirmed_m1119557487(__this, L_36, L_37, /*hidden argument*/NULL);
	}

IL_0132:
	{
		goto IL_0372;
	}

IL_0137:
	{
		Dictionary_2_t3898409514 * L_38 = __this->get_m_handshakes_24();
		Dictionary_2_t3898409514 * L_39 = L_38;
		V_8 = L_39;
		Monitor_Enter_m2136705809(NULL /*static, unused*/, L_39, /*hidden argument*/NULL);
	}

IL_0146:
	try
	{ // begin try (depth: 1)
		{
			Dictionary_2_t3898409514 * L_40 = __this->get_m_handshakes_24();
			NullCheck(L_40);
			Enumerator_t923466920  L_41 = Dictionary_2_GetEnumerator_m3728096743(L_40, /*hidden argument*/Dictionary_2_GetEnumerator_m3728096743_MethodInfo_var);
			V_9 = L_41;
		}

IL_0155:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0215;
			}

IL_015a:
			{
				KeyValuePair_2_t1655754736  L_42 = Enumerator_get_Current_m2227275631((&V_9), /*hidden argument*/Enumerator_get_Current_m2227275631_MethodInfo_var);
				V_1 = L_42;
				IPEndPoint_t2615413766 * L_43 = KeyValuePair_2_get_Key_m4001602897((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m4001602897_MethodInfo_var);
				NullCheck(L_43);
				IPAddress_t1399971723 * L_44 = IPEndPoint_get_Address_m1772553499(L_43, /*hidden argument*/NULL);
				IPEndPoint_t2615413766 * L_45 = ___senderEndPoint1;
				NullCheck(L_45);
				IPAddress_t1399971723 * L_46 = IPEndPoint_get_Address_m1772553499(L_45, /*hidden argument*/NULL);
				NullCheck(L_44);
				bool L_47 = VirtFuncInvoker1< bool, Il2CppObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_44, L_46);
				V_6 = (bool)((((int32_t)L_47) == ((int32_t)0))? 1 : 0);
				bool L_48 = V_6;
				if (L_48)
				{
					goto IL_0214;
				}
			}

IL_0186:
			{
				NetConnection_t3331492029 * L_49 = KeyValuePair_2_get_Value_m1515431574((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m1515431574_MethodInfo_var);
				NullCheck(L_49);
				bool L_50 = L_49->get_m_connectionInitiator_19();
				V_6 = (bool)((((int32_t)L_50) == ((int32_t)0))? 1 : 0);
				bool L_51 = V_6;
				if (L_51)
				{
					goto IL_0213;
				}
			}

IL_019c:
			{
				NetConnection_t3331492029 * L_52 = KeyValuePair_2_get_Value_m1515431574((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m1515431574_MethodInfo_var);
				V_2 = L_52;
				Dictionary_2_t3898409514 * L_53 = __this->get_m_connectionLookup_4();
				IPEndPoint_t2615413766 * L_54 = KeyValuePair_2_get_Key_m4001602897((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m4001602897_MethodInfo_var);
				NullCheck(L_53);
				Dictionary_2_Remove_m2570672626(L_53, L_54, /*hidden argument*/Dictionary_2_Remove_m2570672626_MethodInfo_var);
				Dictionary_2_t3898409514 * L_55 = __this->get_m_handshakes_24();
				IPEndPoint_t2615413766 * L_56 = KeyValuePair_2_get_Key_m4001602897((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m4001602897_MethodInfo_var);
				NullCheck(L_55);
				Dictionary_2_Remove_m2570672626(L_55, L_56, /*hidden argument*/Dictionary_2_Remove_m2570672626_MethodInfo_var);
				IPEndPoint_t2615413766 * L_57 = ___senderEndPoint1;
				IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
				String_t* L_58 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral698253060, L_57, /*hidden argument*/NULL);
				NetPeer_LogDebug_m2983960595(__this, L_58, /*hidden argument*/NULL);
				NetConnection_t3331492029 * L_59 = V_2;
				IPEndPoint_t2615413766 * L_60 = ___senderEndPoint1;
				NullCheck(L_59);
				NetConnection_MutateEndPoint_m3264432459(L_59, L_60, /*hidden argument*/NULL);
				Dictionary_2_t3898409514 * L_61 = __this->get_m_connectionLookup_4();
				IPEndPoint_t2615413766 * L_62 = ___senderEndPoint1;
				NetConnection_t3331492029 * L_63 = V_2;
				NullCheck(L_61);
				Dictionary_2_Add_m462421331(L_61, L_62, L_63, /*hidden argument*/Dictionary_2_Add_m462421331_MethodInfo_var);
				Dictionary_2_t3898409514 * L_64 = __this->get_m_handshakes_24();
				IPEndPoint_t2615413766 * L_65 = ___senderEndPoint1;
				NetConnection_t3331492029 * L_66 = V_2;
				NullCheck(L_64);
				Dictionary_2_Add_m462421331(L_64, L_65, L_66, /*hidden argument*/Dictionary_2_Add_m462421331_MethodInfo_var);
				NetConnection_t3331492029 * L_67 = V_2;
				double L_68 = ___now0;
				uint8_t L_69 = ___tp2;
				int32_t L_70 = ___ptr3;
				int32_t L_71 = ___payloadByteLength4;
				NullCheck(L_67);
				NetConnection_ReceivedHandshake_m1128410455(L_67, L_68, L_69, L_70, L_71, /*hidden argument*/NULL);
				IL2CPP_LEAVE(0x372, FINALLY_0227);
			}

IL_0213:
			{
			}

IL_0214:
			{
			}

IL_0215:
			{
				bool L_72 = Enumerator_MoveNext_m586729744((&V_9), /*hidden argument*/Enumerator_MoveNext_m586729744_MethodInfo_var);
				V_6 = L_72;
				bool L_73 = V_6;
				if (L_73)
				{
					goto IL_015a;
				}
			}

IL_0225:
			{
				IL2CPP_LEAVE(0x236, FINALLY_0227);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
			goto FINALLY_0227;
		}

FINALLY_0227:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m2896629615((&V_9), /*hidden argument*/Enumerator_Dispose_m2896629615_MethodInfo_var);
			IL2CPP_END_FINALLY(551)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(551)
		{
			IL2CPP_END_CLEANUP(0x372, FINALLY_023a);
			IL2CPP_JUMP_TBL(0x236, IL_0236)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
		}

IL_0236:
		{
			IL2CPP_LEAVE(0x243, FINALLY_023a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_023a;
	}

FINALLY_023a:
	{ // begin finally (depth: 1)
		Dictionary_2_t3898409514 * L_74 = V_8;
		Monitor_Exit_m2677760297(NULL /*static, unused*/, L_74, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(570)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(570)
	{
		IL2CPP_JUMP_TBL(0x372, IL_0372)
		IL2CPP_JUMP_TBL(0x243, IL_0243)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_0243:
	{
		V_10 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)4));
		ObjectU5BU5D_t3614634134* L_75 = V_10;
		NullCheck(L_75);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_75, 0);
		ArrayElementTypeCheck (L_75, _stringLiteral1068359790);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral1068359790);
		ObjectU5BU5D_t3614634134* L_76 = V_10;
		uint8_t L_77 = ___tp2;
		uint8_t L_78 = L_77;
		Il2CppObject * L_79 = Box(NetMessageType_t191235414_il2cpp_TypeInfo_var, &L_78);
		NullCheck(L_76);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_76, 1);
		ArrayElementTypeCheck (L_76, L_79);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_79);
		ObjectU5BU5D_t3614634134* L_80 = V_10;
		NullCheck(L_80);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_80, 2);
		ArrayElementTypeCheck (L_80, _stringLiteral4166804854);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral4166804854);
		ObjectU5BU5D_t3614634134* L_81 = V_10;
		IPEndPoint_t2615413766 * L_82 = ___senderEndPoint1;
		NullCheck(L_81);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_81, 3);
		ArrayElementTypeCheck (L_81, L_82);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_82);
		ObjectU5BU5D_t3614634134* L_83 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_84 = String_Concat_m3881798623(NULL /*static, unused*/, L_83, /*hidden argument*/NULL);
		NetPeer_LogWarning_m3266657906(__this, L_84, /*hidden argument*/NULL);
		goto IL_0372;
	}

IL_0280:
	{
		NetPeerConfiguration_t136603591 * L_85 = __this->get_m_configuration_21();
		NullCheck(L_85);
		bool L_86 = NetPeerConfiguration_get_AcceptIncomingConnections_m878586354(L_85, /*hidden argument*/NULL);
		V_6 = L_86;
		bool L_87 = V_6;
		if (L_87)
		{
			goto IL_02a3;
		}
	}
	{
		NetPeer_LogWarning_m3266657906(__this, _stringLiteral292773447, /*hidden argument*/NULL);
		goto IL_0372;
	}

IL_02a3:
	{
		Dictionary_2_t3898409514 * L_88 = __this->get_m_handshakes_24();
		NullCheck(L_88);
		int32_t L_89 = Dictionary_2_get_Count_m3270350375(L_88, /*hidden argument*/Dictionary_2_get_Count_m3270350375_MethodInfo_var);
		List_1_t2700613161 * L_90 = __this->get_m_connections_3();
		NullCheck(L_90);
		int32_t L_91 = List_1_get_Count_m1394854046(L_90, /*hidden argument*/List_1_get_Count_m1394854046_MethodInfo_var);
		V_3 = ((int32_t)((int32_t)L_89+(int32_t)L_91));
		int32_t L_92 = V_3;
		NetPeerConfiguration_t136603591 * L_93 = __this->get_m_configuration_21();
		NullCheck(L_93);
		int32_t L_94 = L_93->get_m_maximumConnections_6();
		V_6 = (bool)((((int32_t)L_92) < ((int32_t)L_94))? 1 : 0);
		bool L_95 = V_6;
		if (L_95)
		{
			goto IL_02f5;
		}
	}
	{
		NetOutgoingMessage_t2016542980 * L_96 = NetPeer_CreateMessage_m3445598245(__this, _stringLiteral930789854, /*hidden argument*/NULL);
		V_4 = L_96;
		NetOutgoingMessage_t2016542980 * L_97 = V_4;
		NullCheck(L_97);
		L_97->set_m_messageType_5(((int32_t)135));
		NetOutgoingMessage_t2016542980 * L_98 = V_4;
		IPEndPoint_t2615413766 * L_99 = ___senderEndPoint1;
		NetPeer_SendLibrary_m4133093622(__this, L_98, L_99, /*hidden argument*/NULL);
		goto IL_0372;
	}

IL_02f5:
	{
		IPEndPoint_t2615413766 * L_100 = ___senderEndPoint1;
		NetConnection_t3331492029 * L_101 = (NetConnection_t3331492029 *)il2cpp_codegen_object_new(NetConnection_t3331492029_il2cpp_TypeInfo_var);
		NetConnection__ctor_m695103806(L_101, __this, L_100, /*hidden argument*/NULL);
		V_5 = L_101;
		NetConnection_t3331492029 * L_102 = V_5;
		NullCheck(L_102);
		L_102->set_m_status_2(2);
		Dictionary_2_t3898409514 * L_103 = __this->get_m_handshakes_24();
		IPEndPoint_t2615413766 * L_104 = ___senderEndPoint1;
		NetConnection_t3331492029 * L_105 = V_5;
		NullCheck(L_103);
		Dictionary_2_Add_m462421331(L_103, L_104, L_105, /*hidden argument*/Dictionary_2_Add_m462421331_MethodInfo_var);
		NetConnection_t3331492029 * L_106 = V_5;
		double L_107 = ___now0;
		uint8_t L_108 = ___tp2;
		int32_t L_109 = ___ptr3;
		int32_t L_110 = ___payloadByteLength4;
		NullCheck(L_106);
		NetConnection_ReceivedHandshake_m1128410455(L_106, L_107, L_108, L_109, L_110, /*hidden argument*/NULL);
		goto IL_0372;
	}

IL_0325:
	{
		IPEndPoint_t2615413766 * L_111 = ___senderEndPoint1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_112 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral2576259168, L_111, /*hidden argument*/NULL);
		NetPeer_LogVerbose_m3434660420(__this, L_112, /*hidden argument*/NULL);
		goto IL_0372;
	}

IL_0339:
	{
		V_10 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)4));
		ObjectU5BU5D_t3614634134* L_113 = V_10;
		NullCheck(L_113);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_113, 0);
		ArrayElementTypeCheck (L_113, _stringLiteral1068359790);
		(L_113)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral1068359790);
		ObjectU5BU5D_t3614634134* L_114 = V_10;
		uint8_t L_115 = ___tp2;
		uint8_t L_116 = L_115;
		Il2CppObject * L_117 = Box(NetMessageType_t191235414_il2cpp_TypeInfo_var, &L_116);
		NullCheck(L_114);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_114, 1);
		ArrayElementTypeCheck (L_114, L_117);
		(L_114)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_117);
		ObjectU5BU5D_t3614634134* L_118 = V_10;
		NullCheck(L_118);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_118, 2);
		ArrayElementTypeCheck (L_118, _stringLiteral4166804854);
		(L_118)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral4166804854);
		ObjectU5BU5D_t3614634134* L_119 = V_10;
		IPEndPoint_t2615413766 * L_120 = ___senderEndPoint1;
		NullCheck(L_119);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_119, 3);
		ArrayElementTypeCheck (L_119, L_120);
		(L_119)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_120);
		ObjectU5BU5D_t3614634134* L_121 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_122 = String_Concat_m3881798623(NULL /*static, unused*/, L_121, /*hidden argument*/NULL);
		NetPeer_LogWarning_m3266657906(__this, L_122, /*hidden argument*/NULL);
		goto IL_0372;
	}

IL_0372:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetPeer::AcceptConnection(Lidgren.Network.NetConnection)
extern Il2CppClass* NetTime_t3056501352_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_Remove_m2570672626_MethodInfo_var;
extern const MethodInfo* List_1_Contains_m4168039338_MethodInfo_var;
extern const MethodInfo* List_1_Add_m2801045858_MethodInfo_var;
extern const MethodInfo* Dictionary_2_Add_m462421331_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1728373786;
extern Il2CppCodeGenString* _stringLiteral4058863251;
extern const uint32_t NetPeer_AcceptConnection_m1347999118_MetadataUsageId;
extern "C"  void NetPeer_AcceptConnection_m1347999118 (NetPeer_t1779390221 * __this, NetConnection_t3331492029 * ___conn0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetPeer_AcceptConnection_m1347999118_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	List_1_t2700613161 * V_1 = NULL;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		NetConnection_t3331492029 * L_0 = ___conn0;
		IL2CPP_RUNTIME_CLASS_INIT(NetTime_t3056501352_il2cpp_TypeInfo_var);
		double L_1 = NetTime_get_Now_m1609702533(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		NetConnection_InitExpandMTU_m3761872672(L_0, L_1, /*hidden argument*/NULL);
		Dictionary_2_t3898409514 * L_2 = __this->get_m_handshakes_24();
		NetConnection_t3331492029 * L_3 = ___conn0;
		NullCheck(L_3);
		IPEndPoint_t2615413766 * L_4 = L_3->get_m_remoteEndPoint_5();
		NullCheck(L_2);
		bool L_5 = Dictionary_2_Remove_m2570672626(L_2, L_4, /*hidden argument*/Dictionary_2_Remove_m2570672626_MethodInfo_var);
		V_0 = L_5;
		bool L_6 = V_0;
		if (L_6)
		{
			goto IL_002e;
		}
	}
	{
		NetPeer_LogWarning_m3266657906(__this, _stringLiteral1728373786, /*hidden argument*/NULL);
	}

IL_002e:
	{
		List_1_t2700613161 * L_7 = __this->get_m_connections_3();
		List_1_t2700613161 * L_8 = L_7;
		V_1 = L_8;
		Monitor_Enter_m2136705809(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
	}

IL_003c:
	try
	{ // begin try (depth: 1)
		{
			List_1_t2700613161 * L_9 = __this->get_m_connections_3();
			NetConnection_t3331492029 * L_10 = ___conn0;
			NullCheck(L_9);
			bool L_11 = List_1_Contains_m4168039338(L_9, L_10, /*hidden argument*/List_1_Contains_m4168039338_MethodInfo_var);
			V_0 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
			bool L_12 = V_0;
			if (L_12)
			{
				goto IL_0060;
			}
		}

IL_0050:
		{
			NetPeer_LogWarning_m3266657906(__this, _stringLiteral4058863251, /*hidden argument*/NULL);
			goto IL_0082;
		}

IL_0060:
		{
			List_1_t2700613161 * L_13 = __this->get_m_connections_3();
			NetConnection_t3331492029 * L_14 = ___conn0;
			NullCheck(L_13);
			List_1_Add_m2801045858(L_13, L_14, /*hidden argument*/List_1_Add_m2801045858_MethodInfo_var);
			Dictionary_2_t3898409514 * L_15 = __this->get_m_connectionLookup_4();
			NetConnection_t3331492029 * L_16 = ___conn0;
			NullCheck(L_16);
			IPEndPoint_t2615413766 * L_17 = L_16->get_m_remoteEndPoint_5();
			NetConnection_t3331492029 * L_18 = ___conn0;
			NullCheck(L_15);
			Dictionary_2_Add_m462421331(L_15, L_17, L_18, /*hidden argument*/Dictionary_2_Add_m462421331_MethodInfo_var);
		}

IL_0082:
		{
			IL2CPP_LEAVE(0x8D, FINALLY_0085);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_0085;
	}

FINALLY_0085:
	{ // begin finally (depth: 1)
		List_1_t2700613161 * L_19 = V_1;
		Monitor_Exit_m2677760297(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(133)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(133)
	{
		IL2CPP_JUMP_TBL(0x8D, IL_008d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_008d:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetPeer::VerifyNetworkThread()
extern Il2CppClass* Thread_t241561612_il2cpp_TypeInfo_var;
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* NetException_t2452891498_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral966470011;
extern Il2CppCodeGenString* _stringLiteral1158037928;
extern Il2CppCodeGenString* _stringLiteral372029317;
extern const uint32_t NetPeer_VerifyNetworkThread_m4075953563_MetadataUsageId;
extern "C"  void NetPeer_VerifyNetworkThread_m4075953563 (NetPeer_t1779390221 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetPeer_VerifyNetworkThread_m4075953563_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Thread_t241561612 * V_0 = NULL;
	bool V_1 = false;
	ObjectU5BU5D_t3614634134* V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t241561612_il2cpp_TypeInfo_var);
		Thread_t241561612 * L_0 = Thread_get_CurrentThread_m3667342817(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		Thread_t241561612 * L_1 = Thread_get_CurrentThread_m3667342817(NULL /*static, unused*/, /*hidden argument*/NULL);
		Thread_t241561612 * L_2 = __this->get_m_networkThread_9();
		V_1 = (bool)((((Il2CppObject*)(Thread_t241561612 *)L_1) == ((Il2CppObject*)(Thread_t241561612 *)L_2))? 1 : 0);
		bool L_3 = V_1;
		if (L_3)
		{
			goto IL_005a;
		}
	}
	{
		V_2 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)5));
		ObjectU5BU5D_t3614634134* L_4 = V_2;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, _stringLiteral966470011);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral966470011);
		ObjectU5BU5D_t3614634134* L_5 = V_2;
		Thread_t241561612 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = Thread_get_Name_m1646946390(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 1);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_7);
		ObjectU5BU5D_t3614634134* L_8 = V_2;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, _stringLiteral1158037928);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral1158037928);
		ObjectU5BU5D_t3614634134* L_9 = V_2;
		Thread_t241561612 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = Thread_get_ManagedThreadId_m1995754972(L_10, /*hidden argument*/NULL);
		int32_t L_12 = L_11;
		Il2CppObject * L_13 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 3);
		ArrayElementTypeCheck (L_9, L_13);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_13);
		ObjectU5BU5D_t3614634134* L_14 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 4);
		ArrayElementTypeCheck (L_14, _stringLiteral372029317);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(4), (Il2CppObject *)_stringLiteral372029317);
		ObjectU5BU5D_t3614634134* L_15 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m3881798623(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		NetException_t2452891498 * L_17 = (NetException_t2452891498 *)il2cpp_codegen_object_new(NetException_t2452891498_il2cpp_TypeInfo_var);
		NetException__ctor_m2724322251(L_17, L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17);
	}

IL_005a:
	{
		return;
	}
}
// Lidgren.Network.NetIncomingMessage Lidgren.Network.NetPeer::SetupReadHelperMessage(System.Int32,System.Int32)
extern "C"  NetIncomingMessage_t2014089816 * NetPeer_SetupReadHelperMessage_m906183392 (NetPeer_t1779390221 * __this, int32_t ___ptr0, int32_t ___payloadLength1, const MethodInfo* method)
{
	NetIncomingMessage_t2014089816 * V_0 = NULL;
	{
		NetPeer_VerifyNetworkThread_m4075953563(__this, /*hidden argument*/NULL);
		NetIncomingMessage_t2014089816 * L_0 = __this->get_m_readHelperMessage_13();
		int32_t L_1 = ___ptr0;
		int32_t L_2 = ___payloadLength1;
		NullCheck(L_0);
		((NetBuffer_t3608062491 *)L_0)->set_m_bitLength_3(((int32_t)((int32_t)((int32_t)((int32_t)L_1+(int32_t)L_2))*(int32_t)8)));
		NetIncomingMessage_t2014089816 * L_3 = __this->get_m_readHelperMessage_13();
		int32_t L_4 = ___ptr0;
		NullCheck(L_3);
		((NetBuffer_t3608062491 *)L_3)->set_m_readPosition_4(((int32_t)((int32_t)L_4*(int32_t)8)));
		NetIncomingMessage_t2014089816 * L_5 = __this->get_m_readHelperMessage_13();
		V_0 = L_5;
		goto IL_002f;
	}

IL_002f:
	{
		NetIncomingMessage_t2014089816 * L_6 = V_0;
		return L_6;
	}
}
// System.Void Lidgren.Network.NetPeer::SendPacket(System.Int32,System.Net.IPEndPoint,System.Int32,System.Boolean&)
extern Il2CppClass* MWCRandom_t315011312_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* DelayedPacket_t1298207473_il2cpp_TypeInfo_var;
extern Il2CppClass* ByteU5BU5D_t3397334013_il2cpp_TypeInfo_var;
extern Il2CppClass* NetTime_t3056501352_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_Add_m3810272245_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral352310852;
extern Il2CppCodeGenString* _stringLiteral979995151;
extern const uint32_t NetPeer_SendPacket_m625616909_MetadataUsageId;
extern "C"  void NetPeer_SendPacket_m625616909 (NetPeer_t1779390221 * __this, int32_t ___numBytes0, IPEndPoint_t2615413766 * ___target1, int32_t ___numMessages2, bool* ___connectionReset3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetPeer_SendPacket_m625616909_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	bool V_3 = false;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	int32_t V_6 = 0;
	DelayedPacket_t1298207473 * V_7 = NULL;
	bool V_8 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B17_0 = 0;
	{
		bool* L_0 = ___connectionReset3;
		*((int8_t*)(L_0)) = (int8_t)0;
		NetPeerConfiguration_t136603591 * L_1 = __this->get_m_configuration_21();
		NullCheck(L_1);
		float L_2 = L_1->get_m_loss_22();
		V_0 = L_2;
		float L_3 = V_0;
		V_8 = (bool)((((int32_t)((((float)L_3) > ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_8;
		if (L_4)
		{
			goto IL_005d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MWCRandom_t315011312_il2cpp_TypeInfo_var);
		MWCRandom_t315011312 * L_5 = ((MWCRandom_t315011312_StaticFields*)MWCRandom_t315011312_il2cpp_TypeInfo_var->static_fields)->get_Instance_4();
		NullCheck(L_5);
		double L_6 = VirtFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_5);
		float L_7 = V_0;
		V_8 = (bool)((((int32_t)((((float)(((float)((float)L_6)))) < ((float)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_8;
		if (L_8)
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_9 = ___numBytes0;
		int32_t L_10 = L_9;
		Il2CppObject * L_11 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m2000667605(NULL /*static, unused*/, _stringLiteral352310852, L_11, _stringLiteral979995151, /*hidden argument*/NULL);
		NetPeer_LogVerbose_m3434660420(__this, L_12, /*hidden argument*/NULL);
		goto IL_01d5;
	}

IL_005c:
	{
	}

IL_005d:
	{
		NetPeerStatistics_t101027066 * L_13 = __this->get_m_statistics_25();
		int32_t L_14 = ___numBytes0;
		int32_t L_15 = ___numMessages2;
		NullCheck(L_13);
		NetPeerStatistics_PacketSent_m2099282197(L_13, L_14, L_15, /*hidden argument*/NULL);
		NetPeerConfiguration_t136603591 * L_16 = __this->get_m_configuration_21();
		NullCheck(L_16);
		float L_17 = L_16->get_m_minimumOneWayLatency_24();
		V_1 = L_17;
		NetPeerConfiguration_t136603591 * L_18 = __this->get_m_configuration_21();
		NullCheck(L_18);
		float L_19 = L_18->get_m_randomOneWayLatency_25();
		V_2 = L_19;
		float L_20 = V_1;
		if ((!(((float)L_20) == ((float)(0.0f)))))
		{
			goto IL_0098;
		}
	}
	{
		float L_21 = V_2;
		G_B7_0 = ((((int32_t)((((float)L_21) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0099;
	}

IL_0098:
	{
		G_B7_0 = 1;
	}

IL_0099:
	{
		V_8 = (bool)G_B7_0;
		bool L_22 = V_8;
		if (L_22)
		{
			goto IL_00ff;
		}
	}
	{
		ByteU5BU5D_t3397334013* L_23 = __this->get_m_sendBuffer_11();
		int32_t L_24 = ___numBytes0;
		IPEndPoint_t2615413766 * L_25 = ___target1;
		bool* L_26 = ___connectionReset3;
		bool L_27 = NetPeer_ActuallySendPacket_m4213106728(__this, L_23, L_24, L_25, L_26, /*hidden argument*/NULL);
		V_3 = L_27;
		NetPeerConfiguration_t136603591 * L_28 = __this->get_m_configuration_21();
		NullCheck(L_28);
		float L_29 = L_28->get_m_duplicates_23();
		if ((!(((float)L_29) > ((float)(0.0f)))))
		{
			goto IL_00e1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MWCRandom_t315011312_il2cpp_TypeInfo_var);
		MWCRandom_t315011312 * L_30 = ((MWCRandom_t315011312_StaticFields*)MWCRandom_t315011312_il2cpp_TypeInfo_var->static_fields)->get_Instance_4();
		NullCheck(L_30);
		double L_31 = VirtFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_30);
		NetPeerConfiguration_t136603591 * L_32 = __this->get_m_configuration_21();
		NullCheck(L_32);
		float L_33 = L_32->get_m_duplicates_23();
		G_B11_0 = ((((int32_t)((((double)L_31) < ((double)(((double)((double)L_33)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00e2;
	}

IL_00e1:
	{
		G_B11_0 = 1;
	}

IL_00e2:
	{
		V_8 = (bool)G_B11_0;
		bool L_34 = V_8;
		if (L_34)
		{
			goto IL_00fa;
		}
	}
	{
		ByteU5BU5D_t3397334013* L_35 = __this->get_m_sendBuffer_11();
		int32_t L_36 = ___numBytes0;
		IPEndPoint_t2615413766 * L_37 = ___target1;
		bool* L_38 = ___connectionReset3;
		NetPeer_ActuallySendPacket_m4213106728(__this, L_35, L_36, L_37, L_38, /*hidden argument*/NULL);
	}

IL_00fa:
	{
		goto IL_01d5;
	}

IL_00ff:
	{
		V_4 = 1;
		NetPeerConfiguration_t136603591 * L_39 = __this->get_m_configuration_21();
		NullCheck(L_39);
		float L_40 = L_39->get_m_duplicates_23();
		if ((!(((float)L_40) > ((float)(0.0f)))))
		{
			goto IL_0130;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MWCRandom_t315011312_il2cpp_TypeInfo_var);
		MWCRandom_t315011312 * L_41 = ((MWCRandom_t315011312_StaticFields*)MWCRandom_t315011312_il2cpp_TypeInfo_var->static_fields)->get_Instance_4();
		NullCheck(L_41);
		float L_42 = NetRandom_NextSingle_m2975933834(L_41, /*hidden argument*/NULL);
		NetPeerConfiguration_t136603591 * L_43 = __this->get_m_configuration_21();
		NullCheck(L_43);
		float L_44 = L_43->get_m_duplicates_23();
		G_B17_0 = ((((int32_t)((((float)L_42) < ((float)L_44))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0131;
	}

IL_0130:
	{
		G_B17_0 = 1;
	}

IL_0131:
	{
		V_8 = (bool)G_B17_0;
		bool L_45 = V_8;
		if (L_45)
		{
			goto IL_013e;
		}
	}
	{
		int32_t L_46 = V_4;
		V_4 = ((int32_t)((int32_t)L_46+(int32_t)1));
	}

IL_013e:
	{
		V_5 = (0.0f);
		V_6 = 0;
		goto IL_01c6;
	}

IL_014a:
	{
		NetPeerConfiguration_t136603591 * L_47 = __this->get_m_configuration_21();
		NullCheck(L_47);
		float L_48 = L_47->get_m_minimumOneWayLatency_24();
		IL2CPP_RUNTIME_CLASS_INIT(MWCRandom_t315011312_il2cpp_TypeInfo_var);
		MWCRandom_t315011312 * L_49 = ((MWCRandom_t315011312_StaticFields*)MWCRandom_t315011312_il2cpp_TypeInfo_var->static_fields)->get_Instance_4();
		NullCheck(L_49);
		float L_50 = NetRandom_NextSingle_m2975933834(L_49, /*hidden argument*/NULL);
		NetPeerConfiguration_t136603591 * L_51 = __this->get_m_configuration_21();
		NullCheck(L_51);
		float L_52 = L_51->get_m_randomOneWayLatency_25();
		V_5 = ((float)((float)L_48+(float)((float)((float)L_50*(float)L_52))));
		DelayedPacket_t1298207473 * L_53 = (DelayedPacket_t1298207473 *)il2cpp_codegen_object_new(DelayedPacket_t1298207473_il2cpp_TypeInfo_var);
		DelayedPacket__ctor_m30217367(L_53, /*hidden argument*/NULL);
		V_7 = L_53;
		DelayedPacket_t1298207473 * L_54 = V_7;
		IPEndPoint_t2615413766 * L_55 = ___target1;
		NullCheck(L_54);
		L_54->set_Target_2(L_55);
		DelayedPacket_t1298207473 * L_56 = V_7;
		int32_t L_57 = ___numBytes0;
		NullCheck(L_56);
		L_56->set_Data_0(((ByteU5BU5D_t3397334013*)SZArrayNew(ByteU5BU5D_t3397334013_il2cpp_TypeInfo_var, (uint32_t)L_57)));
		ByteU5BU5D_t3397334013* L_58 = __this->get_m_sendBuffer_11();
		DelayedPacket_t1298207473 * L_59 = V_7;
		NullCheck(L_59);
		ByteU5BU5D_t3397334013* L_60 = L_59->get_Data_0();
		int32_t L_61 = ___numBytes0;
		Buffer_BlockCopy_m1586717258(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_58, 0, (Il2CppArray *)(Il2CppArray *)L_60, 0, L_61, /*hidden argument*/NULL);
		DelayedPacket_t1298207473 * L_62 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(NetTime_t3056501352_il2cpp_TypeInfo_var);
		double L_63 = NetTime_get_Now_m1609702533(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_64 = V_5;
		NullCheck(L_62);
		L_62->set_DelayedUntil_1(((double)((double)L_63+(double)(((double)((double)L_64))))));
		List_1_t667328605 * L_65 = __this->get_m_delayedPackets_30();
		DelayedPacket_t1298207473 * L_66 = V_7;
		NullCheck(L_65);
		List_1_Add_m3810272245(L_65, L_66, /*hidden argument*/List_1_Add_m3810272245_MethodInfo_var);
		int32_t L_67 = V_6;
		V_6 = ((int32_t)((int32_t)L_67+(int32_t)1));
	}

IL_01c6:
	{
		int32_t L_68 = V_6;
		int32_t L_69 = V_4;
		V_8 = (bool)((((int32_t)L_68) < ((int32_t)L_69))? 1 : 0);
		bool L_70 = V_8;
		if (L_70)
		{
			goto IL_014a;
		}
	}

IL_01d5:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetPeer::SendDelayedPackets()
extern Il2CppClass* NetTime_t3056501352_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_get_Count_m1493969637_MethodInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m655420434_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m1466792658_MethodInfo_var;
extern const MethodInfo* List_1_Remove_m4112597920_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3327494400_MethodInfo_var;
extern const MethodInfo* Enumerator_Dispose_m1541289489_MethodInfo_var;
extern const uint32_t NetPeer_SendDelayedPackets_m213428423_MetadataUsageId;
extern "C"  void NetPeer_SendDelayedPackets_m213428423 (NetPeer_t1779390221 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetPeer_SendDelayedPackets_m213428423_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	double V_0 = 0.0;
	bool V_1 = false;
	DelayedPacket_t1298207473 * V_2 = NULL;
	bool V_3 = false;
	Enumerator_t202058279  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t667328605 * L_0 = __this->get_m_delayedPackets_30();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m1493969637(L_0, /*hidden argument*/List_1_get_Count_m1493969637_MethodInfo_var);
		V_3 = (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
		bool L_2 = V_3;
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		goto IL_0090;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetTime_t3056501352_il2cpp_TypeInfo_var);
		double L_3 = NetTime_get_Now_m1609702533(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_001b:
	{
		List_1_t667328605 * L_4 = __this->get_m_delayedPackets_30();
		NullCheck(L_4);
		Enumerator_t202058279  L_5 = List_1_GetEnumerator_m655420434(L_4, /*hidden argument*/List_1_GetEnumerator_m655420434_MethodInfo_var);
		V_4 = L_5;
	}

IL_002a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0073;
		}

IL_002c:
		{
			DelayedPacket_t1298207473 * L_6 = Enumerator_get_Current_m1466792658((&V_4), /*hidden argument*/Enumerator_get_Current_m1466792658_MethodInfo_var);
			V_2 = L_6;
			double L_7 = V_0;
			DelayedPacket_t1298207473 * L_8 = V_2;
			NullCheck(L_8);
			double L_9 = L_8->get_DelayedUntil_1();
			V_3 = (bool)((((int32_t)((((double)L_7) > ((double)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_10 = V_3;
			if (L_10)
			{
				goto IL_0072;
			}
		}

IL_0045:
		{
			DelayedPacket_t1298207473 * L_11 = V_2;
			NullCheck(L_11);
			ByteU5BU5D_t3397334013* L_12 = L_11->get_Data_0();
			DelayedPacket_t1298207473 * L_13 = V_2;
			NullCheck(L_13);
			ByteU5BU5D_t3397334013* L_14 = L_13->get_Data_0();
			NullCheck(L_14);
			DelayedPacket_t1298207473 * L_15 = V_2;
			NullCheck(L_15);
			IPEndPoint_t2615413766 * L_16 = L_15->get_Target_2();
			NetPeer_ActuallySendPacket_m4213106728(__this, L_12, (((int32_t)((int32_t)(((Il2CppArray *)L_14)->max_length)))), L_16, (&V_1), /*hidden argument*/NULL);
			List_1_t667328605 * L_17 = __this->get_m_delayedPackets_30();
			DelayedPacket_t1298207473 * L_18 = V_2;
			NullCheck(L_17);
			List_1_Remove_m4112597920(L_17, L_18, /*hidden argument*/List_1_Remove_m4112597920_MethodInfo_var);
			goto IL_001b;
		}

IL_0072:
		{
		}

IL_0073:
		{
			bool L_19 = Enumerator_MoveNext_m3327494400((&V_4), /*hidden argument*/Enumerator_MoveNext_m3327494400_MethodInfo_var);
			V_3 = L_19;
			bool L_20 = V_3;
			if (L_20)
			{
				goto IL_002c;
			}
		}

IL_007e:
		{
			IL2CPP_LEAVE(0x8F, FINALLY_0080);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_0080;
	}

FINALLY_0080:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1541289489((&V_4), /*hidden argument*/Enumerator_Dispose_m1541289489_MethodInfo_var);
		IL2CPP_END_FINALLY(128)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(128)
	{
		IL2CPP_JUMP_TBL(0x8F, IL_008f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_008f:
	{
	}

IL_0090:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetPeer::FlushDelayedPackets()
extern Il2CppClass* Il2CppObject_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m655420434_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m1466792658_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3327494400_MethodInfo_var;
extern const MethodInfo* Enumerator_Dispose_m1541289489_MethodInfo_var;
extern const MethodInfo* List_1_Clear_m3510185858_MethodInfo_var;
extern const uint32_t NetPeer_FlushDelayedPackets_m2271676463_MetadataUsageId;
extern "C"  void NetPeer_FlushDelayedPackets_m2271676463 (NetPeer_t1779390221 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetPeer_FlushDelayedPackets_m2271676463_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	DelayedPacket_t1298207473 * V_1 = NULL;
	Enumerator_t202058279  V_2;
	memset(&V_2, 0, sizeof(V_2));
	bool V_3 = false;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			List_1_t667328605 * L_0 = __this->get_m_delayedPackets_30();
			NullCheck(L_0);
			Enumerator_t202058279  L_1 = List_1_GetEnumerator_m655420434(L_0, /*hidden argument*/List_1_GetEnumerator_m655420434_MethodInfo_var);
			V_2 = L_1;
		}

IL_000f:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0036;
			}

IL_0011:
			{
				DelayedPacket_t1298207473 * L_2 = Enumerator_get_Current_m1466792658((&V_2), /*hidden argument*/Enumerator_get_Current_m1466792658_MethodInfo_var);
				V_1 = L_2;
				DelayedPacket_t1298207473 * L_3 = V_1;
				NullCheck(L_3);
				ByteU5BU5D_t3397334013* L_4 = L_3->get_Data_0();
				DelayedPacket_t1298207473 * L_5 = V_1;
				NullCheck(L_5);
				ByteU5BU5D_t3397334013* L_6 = L_5->get_Data_0();
				NullCheck(L_6);
				DelayedPacket_t1298207473 * L_7 = V_1;
				NullCheck(L_7);
				IPEndPoint_t2615413766 * L_8 = L_7->get_Target_2();
				NetPeer_ActuallySendPacket_m4213106728(__this, L_4, (((int32_t)((int32_t)(((Il2CppArray *)L_6)->max_length)))), L_8, (&V_0), /*hidden argument*/NULL);
			}

IL_0036:
			{
				bool L_9 = Enumerator_MoveNext_m3327494400((&V_2), /*hidden argument*/Enumerator_MoveNext_m3327494400_MethodInfo_var);
				V_3 = L_9;
				bool L_10 = V_3;
				if (L_10)
				{
					goto IL_0011;
				}
			}

IL_0041:
			{
				IL2CPP_LEAVE(0x52, FINALLY_0043);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
			goto FINALLY_0043;
		}

FINALLY_0043:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m1541289489((&V_2), /*hidden argument*/Enumerator_Dispose_m1541289489_MethodInfo_var);
			IL2CPP_END_FINALLY(67)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(67)
		{
			IL2CPP_JUMP_TBL(0x52, IL_0052)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
		}

IL_0052:
		{
			List_1_t667328605 * L_11 = __this->get_m_delayedPackets_30();
			NullCheck(L_11);
			List_1_Clear_m3510185858(L_11, /*hidden argument*/List_1_Clear_m3510185858_MethodInfo_var);
			goto IL_0067;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t1927440687 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Il2CppObject_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0062;
		throw e;
	}

CATCH_0062:
	{ // begin catch(System.Object)
		goto IL_0067;
	} // end catch (depth: 1)

IL_0067:
	{
		return;
	}
}
// System.Boolean Lidgren.Network.NetPeer::ActuallySendPacket(System.Byte[],System.Int32,System.Net.IPEndPoint,System.Boolean&)
extern Il2CppClass* NetUtility_t3562260209_il2cpp_TypeInfo_var;
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* SocketException_t1618573604_il2cpp_TypeInfo_var;
extern Il2CppClass* Exception_t1927440687_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3279583894;
extern Il2CppCodeGenString* _stringLiteral2658163415;
extern Il2CppCodeGenString* _stringLiteral1493780019;
extern Il2CppCodeGenString* _stringLiteral2211373706;
extern Il2CppCodeGenString* _stringLiteral3628407244;
extern const uint32_t NetPeer_ActuallySendPacket_m4213106728_MetadataUsageId;
extern "C"  bool NetPeer_ActuallySendPacket_m4213106728 (NetPeer_t1779390221 * __this, ByteU5BU5D_t3397334013* ___data0, int32_t ___numBytes1, IPEndPoint_t2615413766 * ___target2, bool* ___connectionReset3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetPeer_ActuallySendPacket_m4213106728_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	IPAddress_t1399971723 * V_0 = NULL;
	int32_t V_1 = 0;
	SocketException_t1618573604 * V_2 = NULL;
	Exception_t1927440687 * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	ObjectU5BU5D_t3614634134* V_6 = NULL;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool* L_0 = ___connectionReset3;
		*((int8_t*)(L_0)) = (int8_t)0;
		V_0 = (IPAddress_t1399971723 *)NULL;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				IL2CPP_RUNTIME_CLASS_INIT(NetUtility_t3562260209_il2cpp_TypeInfo_var);
				IPAddress_t1399971723 * L_1 = NetUtility_GetCachedBroadcastAddress_m1409773543(NULL /*static, unused*/, /*hidden argument*/NULL);
				V_0 = L_1;
				IPEndPoint_t2615413766 * L_2 = ___target2;
				NullCheck(L_2);
				IPAddress_t1399971723 * L_3 = IPEndPoint_get_Address_m1772553499(L_2, /*hidden argument*/NULL);
				IPAddress_t1399971723 * L_4 = V_0;
				V_5 = (bool)((((int32_t)((((Il2CppObject*)(IPAddress_t1399971723 *)L_3) == ((Il2CppObject*)(IPAddress_t1399971723 *)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_5 = V_5;
				if (L_5)
				{
					goto IL_0048;
				}
			}

IL_0020:
			{
				IPEndPoint_t2615413766 * L_6 = ___target2;
				NetPeerConfiguration_t136603591 * L_7 = __this->get_m_configuration_21();
				NullCheck(L_7);
				IPAddress_t1399971723 * L_8 = NetPeerConfiguration_get_BroadcastAddress_m3449879104(L_7, /*hidden argument*/NULL);
				NullCheck(L_6);
				IPEndPoint_set_Address_m42566818(L_6, L_8, /*hidden argument*/NULL);
				Socket_t3821512045 * L_9 = __this->get_m_socket_10();
				NullCheck(L_9);
				Socket_SetSocketOption_m180008383(L_9, ((int32_t)65535), ((int32_t)32), (bool)1, /*hidden argument*/NULL);
			}

IL_0048:
			{
				Socket_t3821512045 * L_10 = __this->get_m_socket_10();
				ByteU5BU5D_t3397334013* L_11 = ___data0;
				int32_t L_12 = ___numBytes1;
				IPEndPoint_t2615413766 * L_13 = ___target2;
				NullCheck(L_10);
				int32_t L_14 = Socket_SendTo_m3632452604(L_10, L_11, 0, L_12, 0, L_13, /*hidden argument*/NULL);
				V_1 = L_14;
				int32_t L_15 = ___numBytes1;
				int32_t L_16 = V_1;
				V_5 = (bool)((((int32_t)L_15) == ((int32_t)L_16))? 1 : 0);
				bool L_17 = V_5;
				if (L_17)
				{
					goto IL_00a8;
				}
			}

IL_0063:
			{
				V_6 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)5));
				ObjectU5BU5D_t3614634134* L_18 = V_6;
				NullCheck(L_18);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 0);
				ArrayElementTypeCheck (L_18, _stringLiteral3279583894);
				(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral3279583894);
				ObjectU5BU5D_t3614634134* L_19 = V_6;
				int32_t L_20 = ___numBytes1;
				int32_t L_21 = L_20;
				Il2CppObject * L_22 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_21);
				NullCheck(L_19);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 1);
				ArrayElementTypeCheck (L_19, L_22);
				(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_22);
				ObjectU5BU5D_t3614634134* L_23 = V_6;
				NullCheck(L_23);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_23, 2);
				ArrayElementTypeCheck (L_23, _stringLiteral2658163415);
				(L_23)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral2658163415);
				ObjectU5BU5D_t3614634134* L_24 = V_6;
				int32_t L_25 = V_1;
				int32_t L_26 = L_25;
				Il2CppObject * L_27 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_26);
				NullCheck(L_24);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 3);
				ArrayElementTypeCheck (L_24, L_27);
				(L_24)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_27);
				ObjectU5BU5D_t3614634134* L_28 = V_6;
				NullCheck(L_28);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 4);
				ArrayElementTypeCheck (L_28, _stringLiteral1493780019);
				(L_28)->SetAt(static_cast<il2cpp_array_size_t>(4), (Il2CppObject *)_stringLiteral1493780019);
				ObjectU5BU5D_t3614634134* L_29 = V_6;
				IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
				String_t* L_30 = String_Concat_m3881798623(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
				NetPeer_LogWarning_m3266657906(__this, L_30, /*hidden argument*/NULL);
			}

IL_00a8:
			{
				goto IL_0121;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t1927440687 *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (SocketException_t1618573604_il2cpp_TypeInfo_var, e.ex->object.klass))
				goto CATCH_00ab;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t1927440687_il2cpp_TypeInfo_var, e.ex->object.klass))
				goto CATCH_010a;
			throw e;
		}

CATCH_00ab:
		{ // begin catch(System.Net.Sockets.SocketException)
			{
				V_2 = ((SocketException_t1618573604 *)__exception_local);
				SocketException_t1618573604 * L_31 = V_2;
				NullCheck(L_31);
				int32_t L_32 = SocketException_get_SocketErrorCode_m3898993591(L_31, /*hidden argument*/NULL);
				V_5 = (bool)((((int32_t)((((int32_t)L_32) == ((int32_t)((int32_t)10035)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_33 = V_5;
				if (L_33)
				{
					goto IL_00d5;
				}
			}

IL_00c3:
			{
				NetPeer_LogWarning_m3266657906(__this, _stringLiteral2211373706, /*hidden argument*/NULL);
				V_4 = (bool)0;
				IL2CPP_LEAVE(0x153, FINALLY_0124);
			}

IL_00d5:
			{
				SocketException_t1618573604 * L_34 = V_2;
				NullCheck(L_34);
				int32_t L_35 = SocketException_get_SocketErrorCode_m3898993591(L_34, /*hidden argument*/NULL);
				V_5 = (bool)((((int32_t)((((int32_t)L_35) == ((int32_t)((int32_t)10054)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_36 = V_5;
				if (L_36)
				{
					goto IL_00f5;
				}
			}

IL_00eb:
			{
				bool* L_37 = ___connectionReset3;
				*((int8_t*)(L_37)) = (int8_t)1;
				V_4 = (bool)0;
				IL2CPP_LEAVE(0x153, FINALLY_0124);
			}

IL_00f5:
			{
				SocketException_t1618573604 * L_38 = V_2;
				IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
				String_t* L_39 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral3628407244, L_38, /*hidden argument*/NULL);
				NetPeer_LogError_m1931099304(__this, L_39, /*hidden argument*/NULL);
				goto IL_0121;
			}
		} // end catch (depth: 2)

CATCH_010a:
		{ // begin catch(System.Exception)
			V_3 = ((Exception_t1927440687 *)__exception_local);
			Exception_t1927440687 * L_40 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_41 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral3628407244, L_40, /*hidden argument*/NULL);
			NetPeer_LogError_m1931099304(__this, L_41, /*hidden argument*/NULL);
			goto IL_0121;
		} // end catch (depth: 2)

IL_0121:
		{
			IL2CPP_LEAVE(0x14D, FINALLY_0124);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_0124;
	}

FINALLY_0124:
	{ // begin finally (depth: 1)
		{
			IPEndPoint_t2615413766 * L_42 = ___target2;
			NullCheck(L_42);
			IPAddress_t1399971723 * L_43 = IPEndPoint_get_Address_m1772553499(L_42, /*hidden argument*/NULL);
			IPAddress_t1399971723 * L_44 = V_0;
			V_5 = (bool)((((int32_t)((((Il2CppObject*)(IPAddress_t1399971723 *)L_43) == ((Il2CppObject*)(IPAddress_t1399971723 *)L_44))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_45 = V_5;
			if (L_45)
			{
				goto IL_014b;
			}
		}

IL_0137:
		{
			Socket_t3821512045 * L_46 = __this->get_m_socket_10();
			NullCheck(L_46);
			Socket_SetSocketOption_m180008383(L_46, ((int32_t)65535), ((int32_t)32), (bool)0, /*hidden argument*/NULL);
		}

IL_014b:
		{
			IL2CPP_END_FINALLY(292)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(292)
	{
		IL2CPP_JUMP_TBL(0x153, IL_0153)
		IL2CPP_JUMP_TBL(0x14D, IL_014d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_014d:
	{
		V_4 = (bool)1;
		goto IL_0153;
	}

IL_0153:
	{
		bool L_47 = V_4;
		return L_47;
	}
}
// System.Boolean Lidgren.Network.NetPeer::SendMTUPacket(System.Int32,System.Net.IPEndPoint)
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* SocketException_t1618573604_il2cpp_TypeInfo_var;
extern Il2CppClass* Exception_t1927440687_il2cpp_TypeInfo_var;
extern Il2CppClass* SocketError_t307542793_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3279583894;
extern Il2CppCodeGenString* _stringLiteral2658163415;
extern Il2CppCodeGenString* _stringLiteral1493780019;
extern Il2CppCodeGenString* _stringLiteral2211373706;
extern Il2CppCodeGenString* _stringLiteral907202932;
extern Il2CppCodeGenString* _stringLiteral811305477;
extern Il2CppCodeGenString* _stringLiteral3628407244;
extern const uint32_t NetPeer_SendMTUPacket_m1323873705_MetadataUsageId;
extern "C"  bool NetPeer_SendMTUPacket_m1323873705 (NetPeer_t1779390221 * __this, int32_t ___numBytes0, IPEndPoint_t2615413766 * ___target1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetPeer_SendMTUPacket_m1323873705_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	SocketException_t1618573604 * V_1 = NULL;
	Exception_t1927440687 * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	ObjectU5BU5D_t3614634134* V_5 = NULL;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				Socket_t3821512045 * L_0 = __this->get_m_socket_10();
				NullCheck(L_0);
				Socket_set_DontFragment_m3458934082(L_0, (bool)1, /*hidden argument*/NULL);
				Socket_t3821512045 * L_1 = __this->get_m_socket_10();
				ByteU5BU5D_t3397334013* L_2 = __this->get_m_sendBuffer_11();
				int32_t L_3 = ___numBytes0;
				IPEndPoint_t2615413766 * L_4 = ___target1;
				NullCheck(L_1);
				int32_t L_5 = Socket_SendTo_m3632452604(L_1, L_2, 0, L_3, 0, L_4, /*hidden argument*/NULL);
				V_0 = L_5;
				int32_t L_6 = ___numBytes0;
				int32_t L_7 = V_0;
				V_4 = (bool)((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0);
				bool L_8 = V_4;
				if (L_8)
				{
					goto IL_0074;
				}
			}

IL_002f:
			{
				V_5 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)5));
				ObjectU5BU5D_t3614634134* L_9 = V_5;
				NullCheck(L_9);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 0);
				ArrayElementTypeCheck (L_9, _stringLiteral3279583894);
				(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral3279583894);
				ObjectU5BU5D_t3614634134* L_10 = V_5;
				int32_t L_11 = ___numBytes0;
				int32_t L_12 = L_11;
				Il2CppObject * L_13 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_12);
				NullCheck(L_10);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 1);
				ArrayElementTypeCheck (L_10, L_13);
				(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_13);
				ObjectU5BU5D_t3614634134* L_14 = V_5;
				NullCheck(L_14);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 2);
				ArrayElementTypeCheck (L_14, _stringLiteral2658163415);
				(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral2658163415);
				ObjectU5BU5D_t3614634134* L_15 = V_5;
				int32_t L_16 = V_0;
				int32_t L_17 = L_16;
				Il2CppObject * L_18 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_17);
				NullCheck(L_15);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 3);
				ArrayElementTypeCheck (L_15, L_18);
				(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_18);
				ObjectU5BU5D_t3614634134* L_19 = V_5;
				NullCheck(L_19);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 4);
				ArrayElementTypeCheck (L_19, _stringLiteral1493780019);
				(L_19)->SetAt(static_cast<il2cpp_array_size_t>(4), (Il2CppObject *)_stringLiteral1493780019);
				ObjectU5BU5D_t3614634134* L_20 = V_5;
				IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
				String_t* L_21 = String_Concat_m3881798623(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
				NetPeer_LogWarning_m3266657906(__this, L_21, /*hidden argument*/NULL);
			}

IL_0074:
			{
				NetPeerStatistics_t101027066 * L_22 = __this->get_m_statistics_25();
				int32_t L_23 = ___numBytes0;
				NullCheck(L_22);
				NetPeerStatistics_PacketSent_m2099282197(L_22, L_23, 1, /*hidden argument*/NULL);
				goto IL_0141;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t1927440687 *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (SocketException_t1618573604_il2cpp_TypeInfo_var, e.ex->object.klass))
				goto CATCH_0088;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t1927440687_il2cpp_TypeInfo_var, e.ex->object.klass))
				goto CATCH_012a;
			throw e;
		}

CATCH_0088:
		{ // begin catch(System.Net.Sockets.SocketException)
			{
				V_1 = ((SocketException_t1618573604 *)__exception_local);
				SocketException_t1618573604 * L_24 = V_1;
				NullCheck(L_24);
				int32_t L_25 = SocketException_get_SocketErrorCode_m3898993591(L_24, /*hidden argument*/NULL);
				V_4 = (bool)((((int32_t)((((int32_t)L_25) == ((int32_t)((int32_t)10040)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_26 = V_4;
				if (L_26)
				{
					goto IL_00a7;
				}
			}

IL_00a0:
			{
				V_3 = (bool)0;
				IL2CPP_LEAVE(0x159, FINALLY_0144);
			}

IL_00a7:
			{
				SocketException_t1618573604 * L_27 = V_1;
				NullCheck(L_27);
				int32_t L_28 = SocketException_get_SocketErrorCode_m3898993591(L_27, /*hidden argument*/NULL);
				V_4 = (bool)((((int32_t)((((int32_t)L_28) == ((int32_t)((int32_t)10035)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_29 = V_4;
				if (L_29)
				{
					goto IL_00d1;
				}
			}

IL_00bd:
			{
				NetPeer_LogWarning_m3266657906(__this, _stringLiteral2211373706, /*hidden argument*/NULL);
				V_3 = (bool)1;
				IL2CPP_LEAVE(0x159, FINALLY_0144);
			}

IL_00d1:
			{
				SocketException_t1618573604 * L_30 = V_1;
				NullCheck(L_30);
				int32_t L_31 = SocketException_get_SocketErrorCode_m3898993591(L_30, /*hidden argument*/NULL);
				V_4 = (bool)((((int32_t)((((int32_t)L_31) == ((int32_t)((int32_t)10054)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_32 = V_4;
				if (L_32)
				{
					goto IL_00eb;
				}
			}

IL_00e7:
			{
				V_3 = (bool)1;
				IL2CPP_LEAVE(0x159, FINALLY_0144);
			}

IL_00eb:
			{
				V_5 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)4));
				ObjectU5BU5D_t3614634134* L_33 = V_5;
				NullCheck(L_33);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_33, 0);
				ArrayElementTypeCheck (L_33, _stringLiteral907202932);
				(L_33)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral907202932);
				ObjectU5BU5D_t3614634134* L_34 = V_5;
				SocketException_t1618573604 * L_35 = V_1;
				NullCheck(L_35);
				int32_t L_36 = SocketException_get_SocketErrorCode_m3898993591(L_35, /*hidden argument*/NULL);
				int32_t L_37 = L_36;
				Il2CppObject * L_38 = Box(SocketError_t307542793_il2cpp_TypeInfo_var, &L_37);
				NullCheck(L_34);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_34, 1);
				ArrayElementTypeCheck (L_34, L_38);
				(L_34)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_38);
				ObjectU5BU5D_t3614634134* L_39 = V_5;
				NullCheck(L_39);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_39, 2);
				ArrayElementTypeCheck (L_39, _stringLiteral811305477);
				(L_39)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral811305477);
				ObjectU5BU5D_t3614634134* L_40 = V_5;
				SocketException_t1618573604 * L_41 = V_1;
				NullCheck(L_40);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_40, 3);
				ArrayElementTypeCheck (L_40, L_41);
				(L_40)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_41);
				ObjectU5BU5D_t3614634134* L_42 = V_5;
				IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
				String_t* L_43 = String_Concat_m3881798623(NULL /*static, unused*/, L_42, /*hidden argument*/NULL);
				NetPeer_LogError_m1931099304(__this, L_43, /*hidden argument*/NULL);
				goto IL_0141;
			}
		} // end catch (depth: 2)

CATCH_012a:
		{ // begin catch(System.Exception)
			V_2 = ((Exception_t1927440687 *)__exception_local);
			Exception_t1927440687 * L_44 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_45 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral3628407244, L_44, /*hidden argument*/NULL);
			NetPeer_LogError_m1931099304(__this, L_45, /*hidden argument*/NULL);
			goto IL_0141;
		} // end catch (depth: 2)

IL_0141:
		{
			IL2CPP_LEAVE(0x154, FINALLY_0144);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_0144;
	}

FINALLY_0144:
	{ // begin finally (depth: 1)
		Socket_t3821512045 * L_46 = __this->get_m_socket_10();
		NullCheck(L_46);
		Socket_set_DontFragment_m3458934082(L_46, (bool)0, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(324)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(324)
	{
		IL2CPP_JUMP_TBL(0x159, IL_0159)
		IL2CPP_JUMP_TBL(0x154, IL_0154)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_0154:
	{
		V_3 = (bool)1;
		goto IL_0159;
	}

IL_0159:
	{
		bool L_47 = V_3;
		return L_47;
	}
}
// System.Void Lidgren.Network.NetPeer::LogVerbose(System.String)
extern "C"  void NetPeer_LogVerbose_m3434660420 (NetPeer_t1779390221 * __this, String_t* ___message0, const MethodInfo* method)
{
	bool V_0 = false;
	{
		NetPeerConfiguration_t136603591 * L_0 = __this->get_m_configuration_21();
		NullCheck(L_0);
		bool L_1 = NetPeerConfiguration_IsMessageTypeEnabled_m1110774391(L_0, ((int32_t)128), /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_3 = ___message0;
		NetIncomingMessage_t2014089816 * L_4 = NetPeer_CreateIncomingMessage_m226906442(__this, ((int32_t)128), L_3, /*hidden argument*/NULL);
		NetPeer_ReleaseMessage_m3520648965(__this, L_4, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetPeer::LogDebug(System.String)
extern "C"  void NetPeer_LogDebug_m2983960595 (NetPeer_t1779390221 * __this, String_t* ___message0, const MethodInfo* method)
{
	bool V_0 = false;
	{
		NetPeerConfiguration_t136603591 * L_0 = __this->get_m_configuration_21();
		NullCheck(L_0);
		bool L_1 = NetPeerConfiguration_IsMessageTypeEnabled_m1110774391(L_0, ((int32_t)256), /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_3 = ___message0;
		NetIncomingMessage_t2014089816 * L_4 = NetPeer_CreateIncomingMessage_m226906442(__this, ((int32_t)256), L_3, /*hidden argument*/NULL);
		NetPeer_ReleaseMessage_m3520648965(__this, L_4, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetPeer::LogWarning(System.String)
extern "C"  void NetPeer_LogWarning_m3266657906 (NetPeer_t1779390221 * __this, String_t* ___message0, const MethodInfo* method)
{
	bool V_0 = false;
	{
		NetPeerConfiguration_t136603591 * L_0 = __this->get_m_configuration_21();
		NullCheck(L_0);
		bool L_1 = NetPeerConfiguration_IsMessageTypeEnabled_m1110774391(L_0, ((int32_t)512), /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_3 = ___message0;
		NetIncomingMessage_t2014089816 * L_4 = NetPeer_CreateIncomingMessage_m226906442(__this, ((int32_t)512), L_3, /*hidden argument*/NULL);
		NetPeer_ReleaseMessage_m3520648965(__this, L_4, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetPeer::LogError(System.String)
extern "C"  void NetPeer_LogError_m1931099304 (NetPeer_t1779390221 * __this, String_t* ___message0, const MethodInfo* method)
{
	bool V_0 = false;
	{
		NetPeerConfiguration_t136603591 * L_0 = __this->get_m_configuration_21();
		NullCheck(L_0);
		bool L_1 = NetPeerConfiguration_IsMessageTypeEnabled_m1110774391(L_0, ((int32_t)1024), /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_3 = ___message0;
		NetIncomingMessage_t2014089816 * L_4 = NetPeer_CreateIncomingMessage_m226906442(__this, ((int32_t)1024), L_3, /*hidden argument*/NULL);
		NetPeer_ReleaseMessage_m3520648965(__this, L_4, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetPeer::InitializePools()
extern Il2CppClass* List_1_t2766455145_il2cpp_TypeInfo_var;
extern Il2CppClass* NetQueue_1_t4233233666_il2cpp_TypeInfo_var;
extern Il2CppClass* NetQueue_1_t4230780502_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4273216646_MethodInfo_var;
extern const MethodInfo* NetQueue_1__ctor_m2411511422_MethodInfo_var;
extern const MethodInfo* NetQueue_1__ctor_m2751966236_MethodInfo_var;
extern const uint32_t NetPeer_InitializePools_m2290904387_MetadataUsageId;
extern "C"  void NetPeer_InitializePools_m2290904387 (NetPeer_t1779390221 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetPeer_InitializePools_m2290904387_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		__this->set_m_storageSlotsUsedCount_35(0);
		NetPeerConfiguration_t136603591 * L_0 = __this->get_m_configuration_21();
		NullCheck(L_0);
		bool L_1 = NetPeerConfiguration_get_UseMessageRecycling_m3846967355(L_0, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (L_2)
		{
			goto IL_0043;
		}
	}
	{
		List_1_t2766455145 * L_3 = (List_1_t2766455145 *)il2cpp_codegen_object_new(List_1_t2766455145_il2cpp_TypeInfo_var);
		List_1__ctor_m4273216646(L_3, ((int32_t)16), /*hidden argument*/List_1__ctor_m4273216646_MethodInfo_var);
		__this->set_m_storagePool_31(L_3);
		NetQueue_1_t4233233666 * L_4 = (NetQueue_1_t4233233666 *)il2cpp_codegen_object_new(NetQueue_1_t4233233666_il2cpp_TypeInfo_var);
		NetQueue_1__ctor_m2411511422(L_4, 4, /*hidden argument*/NetQueue_1__ctor_m2411511422_MethodInfo_var);
		__this->set_m_outgoingMessagesPool_32(L_4);
		NetQueue_1_t4230780502 * L_5 = (NetQueue_1_t4230780502 *)il2cpp_codegen_object_new(NetQueue_1_t4230780502_il2cpp_TypeInfo_var);
		NetQueue_1__ctor_m2751966236(L_5, 4, /*hidden argument*/NetQueue_1__ctor_m2751966236_MethodInfo_var);
		__this->set_m_incomingMessagesPool_33(L_5);
		goto IL_005a;
	}

IL_0043:
	{
		__this->set_m_storagePool_31((List_1_t2766455145 *)NULL);
		__this->set_m_outgoingMessagesPool_32((NetQueue_1_t4233233666 *)NULL);
		__this->set_m_incomingMessagesPool_33((NetQueue_1_t4230780502 *)NULL);
	}

IL_005a:
	{
		NetPeerConfiguration_t136603591 * L_6 = __this->get_m_configuration_21();
		NullCheck(L_6);
		int32_t L_7 = NetPeerConfiguration_get_RecycledCacheMaxCount_m2721437515(L_6, /*hidden argument*/NULL);
		__this->set_m_maxCacheCount_36(L_7);
		return;
	}
}
// System.Byte[] Lidgren.Network.NetPeer::GetStorage(System.Int32)
extern Il2CppClass* ByteU5BU5D_t3397334013_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_get_Item_m3195270850_MethodInfo_var;
extern const MethodInfo* List_1_set_Item_m3147885089_MethodInfo_var;
extern const MethodInfo* List_1_get_Count_m3625537567_MethodInfo_var;
extern const uint32_t NetPeer_GetStorage_m389417990_MetadataUsageId;
extern "C"  ByteU5BU5D_t3397334013* NetPeer_GetStorage_m389417990 (NetPeer_t1779390221 * __this, int32_t ___minimumCapacityInBytes0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetPeer_GetStorage_m389417990_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_t3397334013* V_1 = NULL;
	ByteU5BU5D_t3397334013* V_2 = NULL;
	bool V_3 = false;
	List_1_t2766455145 * V_4 = NULL;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B7_0 = 0;
	{
		List_1_t2766455145 * L_0 = __this->get_m_storagePool_31();
		V_3 = (bool)((((int32_t)((((Il2CppObject*)(List_1_t2766455145 *)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_3;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___minimumCapacityInBytes0;
		V_2 = ((ByteU5BU5D_t3397334013*)SZArrayNew(ByteU5BU5D_t3397334013_il2cpp_TypeInfo_var, (uint32_t)L_2));
		goto IL_00c2;
	}

IL_001d:
	{
		List_1_t2766455145 * L_3 = __this->get_m_storagePool_31();
		List_1_t2766455145 * L_4 = L_3;
		V_4 = L_4;
		Monitor_Enter_m2136705809(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_002c:
	try
	{ // begin try (depth: 1)
		{
			V_0 = 0;
			goto IL_0086;
		}

IL_0031:
		{
			List_1_t2766455145 * L_5 = __this->get_m_storagePool_31();
			int32_t L_6 = V_0;
			NullCheck(L_5);
			ByteU5BU5D_t3397334013* L_7 = List_1_get_Item_m3195270850(L_5, L_6, /*hidden argument*/List_1_get_Item_m3195270850_MethodInfo_var);
			V_1 = L_7;
			ByteU5BU5D_t3397334013* L_8 = V_1;
			if (!L_8)
			{
				goto IL_004a;
			}
		}

IL_0042:
		{
			ByteU5BU5D_t3397334013* L_9 = V_1;
			NullCheck(L_9);
			int32_t L_10 = ___minimumCapacityInBytes0;
			G_B7_0 = ((((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_9)->max_length))))) < ((int32_t)L_10))? 1 : 0);
			goto IL_004b;
		}

IL_004a:
		{
			G_B7_0 = 1;
		}

IL_004b:
		{
			V_3 = (bool)G_B7_0;
			bool L_11 = V_3;
			if (L_11)
			{
				goto IL_0081;
			}
		}

IL_0050:
		{
			List_1_t2766455145 * L_12 = __this->get_m_storagePool_31();
			int32_t L_13 = V_0;
			NullCheck(L_12);
			List_1_set_Item_m3147885089(L_12, L_13, (ByteU5BU5D_t3397334013*)(ByteU5BU5D_t3397334013*)NULL, /*hidden argument*/List_1_set_Item_m3147885089_MethodInfo_var);
			int32_t L_14 = __this->get_m_storageSlotsUsedCount_35();
			__this->set_m_storageSlotsUsedCount_35(((int32_t)((int32_t)L_14-(int32_t)1)));
			int32_t L_15 = __this->get_m_storagePoolBytes_34();
			ByteU5BU5D_t3397334013* L_16 = V_1;
			NullCheck(L_16);
			__this->set_m_storagePoolBytes_34(((int32_t)((int32_t)L_15-(int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_16)->max_length)))))));
			ByteU5BU5D_t3397334013* L_17 = V_1;
			V_2 = L_17;
			IL2CPP_LEAVE(0xC2, FINALLY_009b);
		}

IL_0081:
		{
			int32_t L_18 = V_0;
			V_0 = ((int32_t)((int32_t)L_18+(int32_t)1));
		}

IL_0086:
		{
			int32_t L_19 = V_0;
			List_1_t2766455145 * L_20 = __this->get_m_storagePool_31();
			NullCheck(L_20);
			int32_t L_21 = List_1_get_Count_m3625537567(L_20, /*hidden argument*/List_1_get_Count_m3625537567_MethodInfo_var);
			V_3 = (bool)((((int32_t)L_19) < ((int32_t)L_21))? 1 : 0);
			bool L_22 = V_3;
			if (L_22)
			{
				goto IL_0031;
			}
		}

IL_0098:
		{
			IL2CPP_LEAVE(0xA4, FINALLY_009b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_009b;
	}

FINALLY_009b:
	{ // begin finally (depth: 1)
		List_1_t2766455145 * L_23 = V_4;
		Monitor_Exit_m2677760297(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(155)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(155)
	{
		IL2CPP_JUMP_TBL(0xC2, IL_00c2)
		IL2CPP_JUMP_TBL(0xA4, IL_00a4)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_00a4:
	{
		NetPeerStatistics_t101027066 * L_24 = __this->get_m_statistics_25();
		NetPeerStatistics_t101027066 * L_25 = L_24;
		NullCheck(L_25);
		int64_t L_26 = L_25->get_m_bytesAllocated_8();
		int32_t L_27 = ___minimumCapacityInBytes0;
		NullCheck(L_25);
		L_25->set_m_bytesAllocated_8(((int64_t)((int64_t)L_26+(int64_t)(((int64_t)((int64_t)L_27))))));
		int32_t L_28 = ___minimumCapacityInBytes0;
		V_2 = ((ByteU5BU5D_t3397334013*)SZArrayNew(ByteU5BU5D_t3397334013_il2cpp_TypeInfo_var, (uint32_t)L_28));
		goto IL_00c2;
	}

IL_00c2:
	{
		ByteU5BU5D_t3397334013* L_29 = V_2;
		return L_29;
	}
}
// System.Void Lidgren.Network.NetPeer::Recycle(System.Byte[])
extern Il2CppClass* NetRandom_t509742058_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_get_Count_m3625537567_MethodInfo_var;
extern const MethodInfo* List_1_get_Item_m3195270850_MethodInfo_var;
extern const MethodInfo* List_1_set_Item_m3147885089_MethodInfo_var;
extern const MethodInfo* List_1_Add_m44369977_MethodInfo_var;
extern const uint32_t NetPeer_Recycle_m1253877116_MetadataUsageId;
extern "C"  void NetPeer_Recycle_m1253877116 (NetPeer_t1779390221 * __this, ByteU5BU5D_t3397334013* ___storage0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetPeer_Recycle_m1253877116_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	List_1_t2766455145 * V_4 = NULL;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B3_0 = 0;
	{
		List_1_t2766455145 * L_0 = __this->get_m_storagePool_31();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		ByteU5BU5D_t3397334013* L_1 = ___storage0;
		G_B3_0 = ((((int32_t)((((Il2CppObject*)(ByteU5BU5D_t3397334013*)L_1) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		V_3 = (bool)G_B3_0;
		bool L_2 = V_3;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		goto IL_0137;
	}

IL_001d:
	{
		List_1_t2766455145 * L_3 = __this->get_m_storagePool_31();
		List_1_t2766455145 * L_4 = L_3;
		V_4 = L_4;
		Monitor_Enter_m2136705809(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_002c:
	try
	{ // begin try (depth: 1)
		{
			List_1_t2766455145 * L_5 = __this->get_m_storagePool_31();
			NullCheck(L_5);
			int32_t L_6 = List_1_get_Count_m3625537567(L_5, /*hidden argument*/List_1_get_Count_m3625537567_MethodInfo_var);
			V_0 = L_6;
			V_1 = 0;
			goto IL_008b;
		}

IL_003d:
		{
			List_1_t2766455145 * L_7 = __this->get_m_storagePool_31();
			int32_t L_8 = V_1;
			NullCheck(L_7);
			ByteU5BU5D_t3397334013* L_9 = List_1_get_Item_m3195270850(L_7, L_8, /*hidden argument*/List_1_get_Item_m3195270850_MethodInfo_var);
			V_3 = (bool)((((int32_t)((((Il2CppObject*)(ByteU5BU5D_t3397334013*)L_9) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_10 = V_3;
			if (L_10)
			{
				goto IL_0086;
			}
		}

IL_0054:
		{
			int32_t L_11 = __this->get_m_storageSlotsUsedCount_35();
			__this->set_m_storageSlotsUsedCount_35(((int32_t)((int32_t)L_11+(int32_t)1)));
			int32_t L_12 = __this->get_m_storagePoolBytes_34();
			ByteU5BU5D_t3397334013* L_13 = ___storage0;
			NullCheck(L_13);
			__this->set_m_storagePoolBytes_34(((int32_t)((int32_t)L_12+(int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_13)->max_length)))))));
			List_1_t2766455145 * L_14 = __this->get_m_storagePool_31();
			int32_t L_15 = V_1;
			ByteU5BU5D_t3397334013* L_16 = ___storage0;
			NullCheck(L_14);
			List_1_set_Item_m3147885089(L_14, L_15, L_16, /*hidden argument*/List_1_set_Item_m3147885089_MethodInfo_var);
			IL2CPP_LEAVE(0x137, FINALLY_012d);
		}

IL_0086:
		{
			int32_t L_17 = V_1;
			V_1 = ((int32_t)((int32_t)L_17+(int32_t)1));
		}

IL_008b:
		{
			int32_t L_18 = V_1;
			int32_t L_19 = V_0;
			V_3 = (bool)((((int32_t)L_18) < ((int32_t)L_19))? 1 : 0);
			bool L_20 = V_3;
			if (L_20)
			{
				goto IL_003d;
			}
		}

IL_0093:
		{
			List_1_t2766455145 * L_21 = __this->get_m_storagePool_31();
			NullCheck(L_21);
			int32_t L_22 = List_1_get_Count_m3625537567(L_21, /*hidden argument*/List_1_get_Count_m3625537567_MethodInfo_var);
			int32_t L_23 = __this->get_m_maxCacheCount_36();
			V_3 = (bool)((((int32_t)L_22) < ((int32_t)L_23))? 1 : 0);
			bool L_24 = V_3;
			if (L_24)
			{
				goto IL_00fd;
			}
		}

IL_00aa:
		{
			IL2CPP_RUNTIME_CLASS_INIT(NetRandom_t509742058_il2cpp_TypeInfo_var);
			NetRandom_t509742058 * L_25 = ((NetRandom_t509742058_StaticFields*)NetRandom_t509742058_il2cpp_TypeInfo_var->static_fields)->get_Instance_3();
			List_1_t2766455145 * L_26 = __this->get_m_storagePool_31();
			NullCheck(L_26);
			int32_t L_27 = List_1_get_Count_m3625537567(L_26, /*hidden argument*/List_1_get_Count_m3625537567_MethodInfo_var);
			NullCheck(L_25);
			int32_t L_28 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32) */, L_25, L_27);
			V_2 = L_28;
			int32_t L_29 = __this->get_m_storagePoolBytes_34();
			List_1_t2766455145 * L_30 = __this->get_m_storagePool_31();
			int32_t L_31 = V_2;
			NullCheck(L_30);
			ByteU5BU5D_t3397334013* L_32 = List_1_get_Item_m3195270850(L_30, L_31, /*hidden argument*/List_1_get_Item_m3195270850_MethodInfo_var);
			NullCheck(L_32);
			__this->set_m_storagePoolBytes_34(((int32_t)((int32_t)L_29-(int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_32)->max_length)))))));
			int32_t L_33 = __this->get_m_storagePoolBytes_34();
			ByteU5BU5D_t3397334013* L_34 = ___storage0;
			NullCheck(L_34);
			__this->set_m_storagePoolBytes_34(((int32_t)((int32_t)L_33+(int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_34)->max_length)))))));
			List_1_t2766455145 * L_35 = __this->get_m_storagePool_31();
			int32_t L_36 = V_2;
			ByteU5BU5D_t3397334013* L_37 = ___storage0;
			NullCheck(L_35);
			List_1_set_Item_m3147885089(L_35, L_36, L_37, /*hidden argument*/List_1_set_Item_m3147885089_MethodInfo_var);
			goto IL_012a;
		}

IL_00fd:
		{
			int32_t L_38 = __this->get_m_storageSlotsUsedCount_35();
			__this->set_m_storageSlotsUsedCount_35(((int32_t)((int32_t)L_38+(int32_t)1)));
			int32_t L_39 = __this->get_m_storagePoolBytes_34();
			ByteU5BU5D_t3397334013* L_40 = ___storage0;
			NullCheck(L_40);
			__this->set_m_storagePoolBytes_34(((int32_t)((int32_t)L_39+(int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_40)->max_length)))))));
			List_1_t2766455145 * L_41 = __this->get_m_storagePool_31();
			ByteU5BU5D_t3397334013* L_42 = ___storage0;
			NullCheck(L_41);
			List_1_Add_m44369977(L_41, L_42, /*hidden argument*/List_1_Add_m44369977_MethodInfo_var);
		}

IL_012a:
		{
			IL2CPP_LEAVE(0x136, FINALLY_012d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_012d;
	}

FINALLY_012d:
	{ // begin finally (depth: 1)
		List_1_t2766455145 * L_43 = V_4;
		Monitor_Exit_m2677760297(NULL /*static, unused*/, L_43, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(301)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(301)
	{
		IL2CPP_JUMP_TBL(0x137, IL_0137)
		IL2CPP_JUMP_TBL(0x136, IL_0136)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_0136:
	{
	}

IL_0137:
	{
		return;
	}
}
// Lidgren.Network.NetOutgoingMessage Lidgren.Network.NetPeer::CreateMessage()
extern "C"  NetOutgoingMessage_t2016542980 * NetPeer_CreateMessage_m4252675839 (NetPeer_t1779390221 * __this, const MethodInfo* method)
{
	NetOutgoingMessage_t2016542980 * V_0 = NULL;
	{
		NetPeerConfiguration_t136603591 * L_0 = __this->get_m_configuration_21();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_m_defaultOutgoingMessageCapacity_7();
		NetOutgoingMessage_t2016542980 * L_2 = NetPeer_CreateMessage_m3328975762(__this, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		NetOutgoingMessage_t2016542980 * L_3 = V_0;
		return L_3;
	}
}
// Lidgren.Network.NetOutgoingMessage Lidgren.Network.NetPeer::CreateMessage(System.String)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const uint32_t NetPeer_CreateMessage_m3445598245_MetadataUsageId;
extern "C"  NetOutgoingMessage_t2016542980 * NetPeer_CreateMessage_m3445598245 (NetPeer_t1779390221 * __this, String_t* ___content0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetPeer_CreateMessage_m3445598245_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	NetOutgoingMessage_t2016542980 * V_0 = NULL;
	NetOutgoingMessage_t2016542980 * V_1 = NULL;
	bool V_2 = false;
	{
		String_t* L_0 = ___content0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m2802126737(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		NetOutgoingMessage_t2016542980 * L_3 = NetPeer_CreateMessage_m3328975762(__this, 1, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_002b;
	}

IL_001a:
	{
		String_t* L_4 = ___content0;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m1606060069(L_4, /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_6 = NetPeer_CreateMessage_m3328975762(__this, ((int32_t)((int32_t)2+(int32_t)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_002b:
	{
		NetOutgoingMessage_t2016542980 * L_7 = V_0;
		String_t* L_8 = ___content0;
		NullCheck(L_7);
		NetBuffer_Write_m962556565(L_7, L_8, /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_9 = V_0;
		V_1 = L_9;
		goto IL_0037;
	}

IL_0037:
	{
		NetOutgoingMessage_t2016542980 * L_10 = V_1;
		return L_10;
	}
}
// Lidgren.Network.NetOutgoingMessage Lidgren.Network.NetPeer::CreateMessage(System.Int32)
extern Il2CppClass* NetOutgoingMessage_t2016542980_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* NetQueue_1_TryDequeue_m592441308_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral511144471;
extern const uint32_t NetPeer_CreateMessage_m3328975762_MetadataUsageId;
extern "C"  NetOutgoingMessage_t2016542980 * NetPeer_CreateMessage_m3328975762 (NetPeer_t1779390221 * __this, int32_t ___initialCapacity0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetPeer_CreateMessage_m3328975762_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	NetOutgoingMessage_t2016542980 * V_0 = NULL;
	NetOutgoingMessage_t2016542980 * V_1 = NULL;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		NetQueue_1_t4233233666 * L_0 = __this->get_m_outgoingMessagesPool_32();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		NetQueue_1_t4233233666 * L_1 = __this->get_m_outgoingMessagesPool_32();
		NullCheck(L_1);
		bool L_2 = NetQueue_1_TryDequeue_m592441308(L_1, (&V_0), /*hidden argument*/NetQueue_1_TryDequeue_m592441308_MethodInfo_var);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		V_2 = (bool)G_B3_0;
		bool L_3 = V_2;
		if (L_3)
		{
			goto IL_0024;
		}
	}
	{
		NetOutgoingMessage_t2016542980 * L_4 = (NetOutgoingMessage_t2016542980 *)il2cpp_codegen_object_new(NetOutgoingMessage_t2016542980_il2cpp_TypeInfo_var);
		NetOutgoingMessage__ctor_m724105531(L_4, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_0024:
	{
		NetOutgoingMessage_t2016542980 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->get_m_recyclingCount_7();
		NetOutgoingMessage_t2016542980 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_m_recyclingCount_7();
		int32_t L_9 = L_8;
		Il2CppObject * L_10 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral511144471, L_10, /*hidden argument*/NULL);
		NetException_Assert_m1067120882(NULL /*static, unused*/, (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0), L_11, /*hidden argument*/NULL);
		int32_t L_12 = ___initialCapacity0;
		V_2 = (bool)((((int32_t)((((int32_t)L_12) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_2;
		if (L_13)
		{
			goto IL_0060;
		}
	}
	{
		NetOutgoingMessage_t2016542980 * L_14 = V_0;
		int32_t L_15 = ___initialCapacity0;
		ByteU5BU5D_t3397334013* L_16 = NetPeer_GetStorage_m389417990(__this, L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		((NetBuffer_t3608062491 *)L_14)->set_m_data_2(L_16);
	}

IL_0060:
	{
		NetOutgoingMessage_t2016542980 * L_17 = V_0;
		V_1 = L_17;
		goto IL_0064;
	}

IL_0064:
	{
		NetOutgoingMessage_t2016542980 * L_18 = V_1;
		return L_18;
	}
}
// Lidgren.Network.NetIncomingMessage Lidgren.Network.NetPeer::CreateIncomingMessage(Lidgren.Network.NetIncomingMessageType,System.Byte[])
extern Il2CppClass* NetIncomingMessage_t2014089816_il2cpp_TypeInfo_var;
extern const MethodInfo* NetQueue_1_TryDequeue_m2762539262_MethodInfo_var;
extern const uint32_t NetPeer_CreateIncomingMessage_m1102215321_MetadataUsageId;
extern "C"  NetIncomingMessage_t2014089816 * NetPeer_CreateIncomingMessage_m1102215321 (NetPeer_t1779390221 * __this, int32_t ___tp0, ByteU5BU5D_t3397334013* ___useStorageData1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetPeer_CreateIncomingMessage_m1102215321_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	NetIncomingMessage_t2014089816 * V_0 = NULL;
	NetIncomingMessage_t2014089816 * V_1 = NULL;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		NetQueue_1_t4230780502 * L_0 = __this->get_m_incomingMessagesPool_33();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		NetQueue_1_t4230780502 * L_1 = __this->get_m_incomingMessagesPool_33();
		NullCheck(L_1);
		bool L_2 = NetQueue_1_TryDequeue_m2762539262(L_1, (&V_0), /*hidden argument*/NetQueue_1_TryDequeue_m2762539262_MethodInfo_var);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		V_2 = (bool)G_B3_0;
		bool L_3 = V_2;
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_4 = ___tp0;
		NetIncomingMessage_t2014089816 * L_5 = (NetIncomingMessage_t2014089816 *)il2cpp_codegen_object_new(NetIncomingMessage_t2014089816_il2cpp_TypeInfo_var);
		NetIncomingMessage__ctor_m2874845560(L_5, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_002e;
	}

IL_0027:
	{
		NetIncomingMessage_t2014089816 * L_6 = V_0;
		int32_t L_7 = ___tp0;
		NullCheck(L_6);
		L_6->set_m_incomingMessageType_5(L_7);
	}

IL_002e:
	{
		NetIncomingMessage_t2014089816 * L_8 = V_0;
		ByteU5BU5D_t3397334013* L_9 = ___useStorageData1;
		NullCheck(L_8);
		((NetBuffer_t3608062491 *)L_8)->set_m_data_2(L_9);
		NetIncomingMessage_t2014089816 * L_10 = V_0;
		V_1 = L_10;
		goto IL_0039;
	}

IL_0039:
	{
		NetIncomingMessage_t2014089816 * L_11 = V_1;
		return L_11;
	}
}
// Lidgren.Network.NetIncomingMessage Lidgren.Network.NetPeer::CreateIncomingMessage(Lidgren.Network.NetIncomingMessageType,System.Int32)
extern Il2CppClass* NetIncomingMessage_t2014089816_il2cpp_TypeInfo_var;
extern const MethodInfo* NetQueue_1_TryDequeue_m2762539262_MethodInfo_var;
extern const uint32_t NetPeer_CreateIncomingMessage_m2109562735_MetadataUsageId;
extern "C"  NetIncomingMessage_t2014089816 * NetPeer_CreateIncomingMessage_m2109562735 (NetPeer_t1779390221 * __this, int32_t ___tp0, int32_t ___minimumByteSize1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetPeer_CreateIncomingMessage_m2109562735_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	NetIncomingMessage_t2014089816 * V_0 = NULL;
	NetIncomingMessage_t2014089816 * V_1 = NULL;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		NetQueue_1_t4230780502 * L_0 = __this->get_m_incomingMessagesPool_33();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		NetQueue_1_t4230780502 * L_1 = __this->get_m_incomingMessagesPool_33();
		NullCheck(L_1);
		bool L_2 = NetQueue_1_TryDequeue_m2762539262(L_1, (&V_0), /*hidden argument*/NetQueue_1_TryDequeue_m2762539262_MethodInfo_var);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		V_2 = (bool)G_B3_0;
		bool L_3 = V_2;
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_4 = ___tp0;
		NetIncomingMessage_t2014089816 * L_5 = (NetIncomingMessage_t2014089816 *)il2cpp_codegen_object_new(NetIncomingMessage_t2014089816_il2cpp_TypeInfo_var);
		NetIncomingMessage__ctor_m2874845560(L_5, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_002e;
	}

IL_0027:
	{
		NetIncomingMessage_t2014089816 * L_6 = V_0;
		int32_t L_7 = ___tp0;
		NullCheck(L_6);
		L_6->set_m_incomingMessageType_5(L_7);
	}

IL_002e:
	{
		NetIncomingMessage_t2014089816 * L_8 = V_0;
		int32_t L_9 = ___minimumByteSize1;
		ByteU5BU5D_t3397334013* L_10 = NetPeer_GetStorage_m389417990(__this, L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		((NetBuffer_t3608062491 *)L_8)->set_m_data_2(L_10);
		NetIncomingMessage_t2014089816 * L_11 = V_0;
		V_1 = L_11;
		goto IL_003f;
	}

IL_003f:
	{
		NetIncomingMessage_t2014089816 * L_12 = V_1;
		return L_12;
	}
}
// System.Void Lidgren.Network.NetPeer::Recycle(Lidgren.Network.NetIncomingMessage)
extern const MethodInfo* NetQueue_1_Contains_m2505440926_MethodInfo_var;
extern const MethodInfo* NetQueue_1_get_Count_m1000636011_MethodInfo_var;
extern const MethodInfo* NetQueue_1_Enqueue_m989769817_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral97253458;
extern const uint32_t NetPeer_Recycle_m1601919902_MetadataUsageId;
extern "C"  void NetPeer_Recycle_m1601919902 (NetPeer_t1779390221 * __this, NetIncomingMessage_t2014089816 * ___msg0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetPeer_Recycle_m1601919902_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t3397334013* V_0 = NULL;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		NetQueue_1_t4230780502 * L_0 = __this->get_m_incomingMessagesPool_33();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		NetIncomingMessage_t2014089816 * L_1 = ___msg0;
		G_B3_0 = ((((int32_t)((((Il2CppObject*)(NetIncomingMessage_t2014089816 *)L_1) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		goto IL_0078;
	}

IL_001a:
	{
		NetQueue_1_t4230780502 * L_3 = __this->get_m_incomingMessagesPool_33();
		NetIncomingMessage_t2014089816 * L_4 = ___msg0;
		NullCheck(L_3);
		bool L_5 = NetQueue_1_Contains_m2505440926(L_3, L_4, /*hidden argument*/NetQueue_1_Contains_m2505440926_MethodInfo_var);
		NetException_Assert_m1067120882(NULL /*static, unused*/, (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0), _stringLiteral97253458, /*hidden argument*/NULL);
		NetIncomingMessage_t2014089816 * L_6 = ___msg0;
		NullCheck(L_6);
		ByteU5BU5D_t3397334013* L_7 = ((NetBuffer_t3608062491 *)L_6)->get_m_data_2();
		V_0 = L_7;
		NetIncomingMessage_t2014089816 * L_8 = ___msg0;
		NullCheck(L_8);
		((NetBuffer_t3608062491 *)L_8)->set_m_data_2((ByteU5BU5D_t3397334013*)NULL);
		ByteU5BU5D_t3397334013* L_9 = V_0;
		NetPeer_Recycle_m1253877116(__this, L_9, /*hidden argument*/NULL);
		NetIncomingMessage_t2014089816 * L_10 = ___msg0;
		NullCheck(L_10);
		NetIncomingMessage_Reset_m2284406032(L_10, /*hidden argument*/NULL);
		NetQueue_1_t4230780502 * L_11 = __this->get_m_incomingMessagesPool_33();
		NullCheck(L_11);
		int32_t L_12 = NetQueue_1_get_Count_m1000636011(L_11, /*hidden argument*/NetQueue_1_get_Count_m1000636011_MethodInfo_var);
		int32_t L_13 = __this->get_m_maxCacheCount_36();
		V_1 = (bool)((((int32_t)((((int32_t)L_12) < ((int32_t)L_13))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_1;
		if (L_14)
		{
			goto IL_0078;
		}
	}
	{
		NetQueue_1_t4230780502 * L_15 = __this->get_m_incomingMessagesPool_33();
		NetIncomingMessage_t2014089816 * L_16 = ___msg0;
		NullCheck(L_15);
		NetQueue_1_Enqueue_m989769817(L_15, L_16, /*hidden argument*/NetQueue_1_Enqueue_m989769817_MethodInfo_var);
	}

IL_0078:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetPeer::Recycle(Lidgren.Network.NetOutgoingMessage)
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* NetQueue_1_Contains_m974444428_MethodInfo_var;
extern const MethodInfo* NetQueue_1_get_Count_m685192943_MethodInfo_var;
extern const MethodInfo* NetQueue_1_Enqueue_m3616763713_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1912447608;
extern Il2CppCodeGenString* _stringLiteral3009685346;
extern const uint32_t NetPeer_Recycle_m2290156780_MetadataUsageId;
extern "C"  void NetPeer_Recycle_m2290156780 (NetPeer_t1779390221 * __this, NetOutgoingMessage_t2016542980 * ___msg0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetPeer_Recycle_m2290156780_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t3397334013* V_0 = NULL;
	bool V_1 = false;
	{
		NetQueue_1_t4233233666 * L_0 = __this->get_m_outgoingMessagesPool_32();
		V_1 = (bool)((((int32_t)((((Il2CppObject*)(NetQueue_1_t4233233666 *)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		goto IL_00b4;
	}

IL_0016:
	{
		NetQueue_1_t4233233666 * L_2 = __this->get_m_outgoingMessagesPool_32();
		NetOutgoingMessage_t2016542980 * L_3 = ___msg0;
		NullCheck(L_2);
		bool L_4 = NetQueue_1_Contains_m974444428(L_2, L_3, /*hidden argument*/NetQueue_1_Contains_m974444428_MethodInfo_var);
		NetException_Assert_m1067120882(NULL /*static, unused*/, (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0), _stringLiteral1912447608, /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_5 = ___msg0;
		NullCheck(L_5);
		int32_t L_6 = L_5->get_m_recyclingCount_7();
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (L_7)
		{
			goto IL_0059;
		}
	}
	{
		NetOutgoingMessage_t2016542980 * L_8 = ___msg0;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_m_recyclingCount_7();
		int32_t L_10 = L_9;
		Il2CppObject * L_11 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral3009685346, L_11, /*hidden argument*/NULL);
		NetPeer_LogWarning_m3266657906(__this, L_12, /*hidden argument*/NULL);
	}

IL_0059:
	{
		NetOutgoingMessage_t2016542980 * L_13 = ___msg0;
		NullCheck(L_13);
		L_13->set_m_recyclingCount_7(0);
		NetOutgoingMessage_t2016542980 * L_14 = ___msg0;
		NullCheck(L_14);
		ByteU5BU5D_t3397334013* L_15 = ((NetBuffer_t3608062491 *)L_14)->get_m_data_2();
		V_0 = L_15;
		NetOutgoingMessage_t2016542980 * L_16 = ___msg0;
		NullCheck(L_16);
		((NetBuffer_t3608062491 *)L_16)->set_m_data_2((ByteU5BU5D_t3397334013*)NULL);
		NetOutgoingMessage_t2016542980 * L_17 = ___msg0;
		NullCheck(L_17);
		int32_t L_18 = L_17->get_m_fragmentGroup_8();
		V_1 = (bool)((((int32_t)((((int32_t)L_18) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_1;
		if (L_19)
		{
			goto IL_0086;
		}
	}
	{
		ByteU5BU5D_t3397334013* L_20 = V_0;
		NetPeer_Recycle_m1253877116(__this, L_20, /*hidden argument*/NULL);
	}

IL_0086:
	{
		NetOutgoingMessage_t2016542980 * L_21 = ___msg0;
		NullCheck(L_21);
		NetOutgoingMessage_Reset_m4185181874(L_21, /*hidden argument*/NULL);
		NetQueue_1_t4233233666 * L_22 = __this->get_m_outgoingMessagesPool_32();
		NullCheck(L_22);
		int32_t L_23 = NetQueue_1_get_Count_m685192943(L_22, /*hidden argument*/NetQueue_1_get_Count_m685192943_MethodInfo_var);
		int32_t L_24 = __this->get_m_maxCacheCount_36();
		V_1 = (bool)((((int32_t)((((int32_t)L_23) < ((int32_t)L_24))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_1;
		if (L_25)
		{
			goto IL_00b4;
		}
	}
	{
		NetQueue_1_t4233233666 * L_26 = __this->get_m_outgoingMessagesPool_32();
		NetOutgoingMessage_t2016542980 * L_27 = ___msg0;
		NullCheck(L_26);
		NetQueue_1_Enqueue_m3616763713(L_26, L_27, /*hidden argument*/NetQueue_1_Enqueue_m3616763713_MethodInfo_var);
	}

IL_00b4:
	{
		return;
	}
}
// Lidgren.Network.NetIncomingMessage Lidgren.Network.NetPeer::CreateIncomingMessage(Lidgren.Network.NetIncomingMessageType,System.String)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Encoding_t663144255_il2cpp_TypeInfo_var;
extern const uint32_t NetPeer_CreateIncomingMessage_m226906442_MetadataUsageId;
extern "C"  NetIncomingMessage_t2014089816 * NetPeer_CreateIncomingMessage_m226906442 (NetPeer_t1779390221 * __this, int32_t ___tp0, String_t* ___text1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetPeer_CreateIncomingMessage_m226906442_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	NetIncomingMessage_t2014089816 * V_0 = NULL;
	int32_t V_1 = 0;
	NetIncomingMessage_t2014089816 * V_2 = NULL;
	bool V_3 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	NetPeer_t1779390221 * G_B4_2 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	NetPeer_t1779390221 * G_B3_2 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	int32_t G_B5_2 = 0;
	NetPeer_t1779390221 * G_B5_3 = NULL;
	{
		String_t* L_0 = ___text1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m2802126737(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_3;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___tp0;
		NetIncomingMessage_t2014089816 * L_4 = NetPeer_CreateIncomingMessage_m2109562735(__this, L_3, 1, /*hidden argument*/NULL);
		V_0 = L_4;
		NetIncomingMessage_t2014089816 * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		NullCheck(L_5);
		NetBuffer_Write_m962556565(L_5, L_6, /*hidden argument*/NULL);
		NetIncomingMessage_t2014089816 * L_7 = V_0;
		V_2 = L_7;
		goto IL_0054;
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t663144255_il2cpp_TypeInfo_var);
		Encoding_t663144255 * L_8 = Encoding_get_UTF8_m1752852937(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_9 = ___text1;
		NullCheck(L_8);
		int32_t L_10 = VirtFuncInvoker1< int32_t, String_t* >::Invoke(6 /* System.Int32 System.Text.Encoding::GetByteCount(System.String) */, L_8, L_9);
		V_1 = L_10;
		int32_t L_11 = ___tp0;
		int32_t L_12 = V_1;
		int32_t L_13 = V_1;
		G_B3_0 = L_12;
		G_B3_1 = L_11;
		G_B3_2 = __this;
		if ((((int32_t)L_13) > ((int32_t)((int32_t)127))))
		{
			G_B4_0 = L_12;
			G_B4_1 = L_11;
			G_B4_2 = __this;
			goto IL_003f;
		}
	}
	{
		G_B5_0 = 1;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		G_B5_3 = G_B3_2;
		goto IL_0040;
	}

IL_003f:
	{
		G_B5_0 = 2;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		G_B5_3 = G_B4_2;
	}

IL_0040:
	{
		NullCheck(G_B5_3);
		NetIncomingMessage_t2014089816 * L_14 = NetPeer_CreateIncomingMessage_m2109562735(G_B5_3, G_B5_2, ((int32_t)((int32_t)G_B5_1+(int32_t)G_B5_0)), /*hidden argument*/NULL);
		V_0 = L_14;
		NetIncomingMessage_t2014089816 * L_15 = V_0;
		String_t* L_16 = ___text1;
		NullCheck(L_15);
		NetBuffer_Write_m962556565(L_15, L_16, /*hidden argument*/NULL);
		NetIncomingMessage_t2014089816 * L_17 = V_0;
		V_2 = L_17;
		goto IL_0054;
	}

IL_0054:
	{
		NetIncomingMessage_t2014089816 * L_18 = V_2;
		return L_18;
	}
}
// Lidgren.Network.NetSendResult Lidgren.Network.NetPeer::SendMessage(Lidgren.Network.NetOutgoingMessage,Lidgren.Network.NetConnection,Lidgren.Network.NetDeliveryMethod,System.Int32)
extern Il2CppClass* ArgumentNullException_t628810857_il2cpp_TypeInfo_var;
extern Il2CppClass* ArgumentOutOfRangeException_t279959794_il2cpp_TypeInfo_var;
extern Il2CppClass* NetDeliveryMethod_t3645638710_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* NetException_t2452891498_il2cpp_TypeInfo_var;
extern Il2CppClass* NetConnectionU5BU5D_t3463746480_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3115736605;
extern Il2CppCodeGenString* _stringLiteral676241627;
extern Il2CppCodeGenString* _stringLiteral2408859122;
extern Il2CppCodeGenString* _stringLiteral100989647;
extern Il2CppCodeGenString* _stringLiteral3257827683;
extern Il2CppCodeGenString* _stringLiteral312909813;
extern Il2CppCodeGenString* _stringLiteral1007400342;
extern const uint32_t NetPeer_SendMessage_m3610804500_MetadataUsageId;
extern "C"  int32_t NetPeer_SendMessage_m3610804500 (NetPeer_t1779390221 * __this, NetOutgoingMessage_t2016542980 * ___msg0, NetConnection_t3331492029 * ___recipient1, uint8_t ___method2, int32_t ___sequenceChannel3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetPeer_SendMessage_m3610804500_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	NetConnectionU5BU5D_t3463746480* V_4 = NULL;
	int32_t G_B12_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B23_0 = 0;
	{
		NetOutgoingMessage_t2016542980 * L_0 = ___msg0;
		V_3 = (bool)((((int32_t)((((Il2CppObject*)(NetOutgoingMessage_t2016542980 *)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_3;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t628810857 * L_2 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_2, _stringLiteral3115736605, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		NetConnection_t3331492029 * L_3 = ___recipient1;
		V_3 = (bool)((((int32_t)((((Il2CppObject*)(NetConnection_t3331492029 *)L_3) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_3;
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		ArgumentNullException_t628810857 * L_5 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_5, _stringLiteral676241627, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5);
	}

IL_002d:
	{
		int32_t L_6 = ___sequenceChannel3;
		V_3 = (bool)((((int32_t)L_6) < ((int32_t)((int32_t)32)))? 1 : 0);
		bool L_7 = V_3;
		if (L_7)
		{
			goto IL_0042;
		}
	}
	{
		ArgumentOutOfRangeException_t279959794 * L_8 = (ArgumentOutOfRangeException_t279959794 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t279959794_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1595007065(L_8, _stringLiteral2408859122, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8);
	}

IL_0042:
	{
		uint8_t L_9 = ___method2;
		if ((((int32_t)L_9) == ((int32_t)1)))
		{
			goto IL_004b;
		}
	}
	{
		uint8_t L_10 = ___method2;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_005f;
		}
	}

IL_004b:
	{
		uint8_t L_11 = ___method2;
		if ((((int32_t)L_11) == ((int32_t)1)))
		{
			goto IL_0054;
		}
	}
	{
		uint8_t L_12 = ___method2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_005b;
		}
	}

IL_0054:
	{
		int32_t L_13 = ___sequenceChannel3;
		G_B12_0 = ((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B12_0 = 0;
	}

IL_005c:
	{
		G_B14_0 = G_B12_0;
		goto IL_0060;
	}

IL_005f:
	{
		G_B14_0 = 1;
	}

IL_0060:
	{
		uint8_t L_14 = ___method2;
		uint8_t L_15 = L_14;
		Il2CppObject * L_16 = Box(NetDeliveryMethod_t3645638710_il2cpp_TypeInfo_var, &L_15);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Concat_m2000667605(NULL /*static, unused*/, _stringLiteral100989647, L_16, _stringLiteral3257827683, /*hidden argument*/NULL);
		NetException_Assert_m1067120882(NULL /*static, unused*/, (bool)G_B14_0, L_17, /*hidden argument*/NULL);
		uint8_t L_18 = ___method2;
		NetException_Assert_m1067120882(NULL /*static, unused*/, (bool)((((int32_t)((((int32_t)L_18) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral312909813, /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_19 = ___msg0;
		NullCheck(L_19);
		bool L_20 = L_19->get_m_isSent_6();
		V_3 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_3;
		if (L_21)
		{
			goto IL_00a6;
		}
	}
	{
		NetException_t2452891498 * L_22 = (NetException_t2452891498 *)il2cpp_codegen_object_new(NetException_t2452891498_il2cpp_TypeInfo_var);
		NetException__ctor_m2724322251(L_22, _stringLiteral1007400342, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22);
	}

IL_00a6:
	{
		NetOutgoingMessage_t2016542980 * L_23 = ___msg0;
		NullCheck(L_23);
		L_23->set_m_isSent_6((bool)1);
		uint8_t L_24 = ___method2;
		if ((((int32_t)L_24) == ((int32_t)1)))
		{
			goto IL_00b5;
		}
	}
	{
		uint8_t L_25 = ___method2;
		if ((!(((uint32_t)L_25) == ((uint32_t)2))))
		{
			goto IL_00c8;
		}
	}

IL_00b5:
	{
		NetPeerConfiguration_t136603591 * L_26 = __this->get_m_configuration_21();
		NullCheck(L_26);
		int32_t L_27 = NetPeerConfiguration_get_UnreliableSizeBehaviour_m2649350738(L_26, /*hidden argument*/NULL);
		G_B20_0 = ((((int32_t)((((int32_t)L_27) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00c9;
	}

IL_00c8:
	{
		G_B20_0 = 0;
	}

IL_00c9:
	{
		V_0 = (bool)G_B20_0;
		NetOutgoingMessage_t2016542980 * L_28 = ___msg0;
		NullCheck(L_28);
		int32_t L_29 = NetBuffer_get_LengthBytes_m2765088638(L_28, /*hidden argument*/NULL);
		V_1 = ((int32_t)((int32_t)5+(int32_t)L_29));
		int32_t L_30 = V_1;
		NetConnection_t3331492029 * L_31 = ___recipient1;
		NullCheck(L_31);
		int32_t L_32 = L_31->get_m_currentMTU_34();
		if ((((int32_t)L_30) <= ((int32_t)L_32)))
		{
			goto IL_00e3;
		}
	}
	{
		bool L_33 = V_0;
		G_B23_0 = ((((int32_t)L_33) == ((int32_t)0))? 1 : 0);
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B23_0 = 0;
	}

IL_00e4:
	{
		V_3 = (bool)G_B23_0;
		bool L_34 = V_3;
		if (L_34)
		{
			goto IL_0103;
		}
	}
	{
		NetOutgoingMessage_t2016542980 * L_35 = ___msg0;
		NullCheck(L_35);
		int32_t* L_36 = L_35->get_address_of_m_recyclingCount_7();
		Interlocked_Increment_m129308425(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		NetConnection_t3331492029 * L_37 = ___recipient1;
		NetOutgoingMessage_t2016542980 * L_38 = ___msg0;
		uint8_t L_39 = ___method2;
		int32_t L_40 = ___sequenceChannel3;
		NullCheck(L_37);
		int32_t L_41 = NetConnection_EnqueueMessage_m3897273412(L_37, L_38, L_39, L_40, /*hidden argument*/NULL);
		V_2 = L_41;
		goto IL_0131;
	}

IL_0103:
	{
		NetConnection_t3331492029 * L_42 = ___recipient1;
		NullCheck(L_42);
		int32_t L_43 = L_42->get_m_status_2();
		V_3 = (bool)((((int32_t)L_43) == ((int32_t)5))? 1 : 0);
		bool L_44 = V_3;
		if (L_44)
		{
			goto IL_0115;
		}
	}
	{
		V_2 = 0;
		goto IL_0131;
	}

IL_0115:
	{
		NetOutgoingMessage_t2016542980 * L_45 = ___msg0;
		V_4 = ((NetConnectionU5BU5D_t3463746480*)SZArrayNew(NetConnectionU5BU5D_t3463746480_il2cpp_TypeInfo_var, (uint32_t)1));
		NetConnectionU5BU5D_t3463746480* L_46 = V_4;
		NetConnection_t3331492029 * L_47 = ___recipient1;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, 0);
		ArrayElementTypeCheck (L_46, L_47);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(0), (NetConnection_t3331492029 *)L_47);
		NetConnectionU5BU5D_t3463746480* L_48 = V_4;
		uint8_t L_49 = ___method2;
		int32_t L_50 = ___sequenceChannel3;
		int32_t L_51 = NetPeer_SendFragmentedMessage_m1345482430(__this, L_45, (Il2CppObject*)(Il2CppObject*)L_48, L_49, L_50, /*hidden argument*/NULL);
		V_2 = L_51;
		goto IL_0131;
	}

IL_0131:
	{
		int32_t L_52 = V_2;
		return L_52;
	}
}
// System.Int32 Lidgren.Network.NetPeer::GetMTU(System.Collections.Generic.IList`1<Lidgren.Network.NetConnection>)
extern Il2CppClass* ICollection_1_t4283567334_il2cpp_TypeInfo_var;
extern Il2CppClass* NetException_t2452891498_il2cpp_TypeInfo_var;
extern Il2CppClass* IList_1_t3872432630_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2968979408;
extern const uint32_t NetPeer_GetMTU_m2569335695_MetadataUsageId;
extern "C"  int32_t NetPeer_GetMTU_m2569335695 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___recipients0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetPeer_GetMTU_m2569335695_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	NetConnection_t3331492029 * V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	{
		Il2CppObject* L_0 = ___recipients0;
		NullCheck(L_0);
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Lidgren.Network.NetConnection>::get_Count() */, ICollection_1_t4283567334_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		V_1 = ((int32_t)2147483647LL);
		int32_t L_2 = V_0;
		V_6 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_6;
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		NetException_t2452891498 * L_4 = (NetException_t2452891498 *)il2cpp_codegen_object_new(NetException_t2452891498_il2cpp_TypeInfo_var);
		NetException__ctor_m2724322251(L_4, _stringLiteral2968979408, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4);
	}

IL_0027:
	{
		V_2 = 0;
		goto IL_0052;
	}

IL_002b:
	{
		Il2CppObject* L_5 = ___recipients0;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		NetConnection_t3331492029 * L_7 = InterfaceFuncInvoker1< NetConnection_t3331492029 *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<Lidgren.Network.NetConnection>::get_Item(System.Int32) */, IList_1_t3872432630_il2cpp_TypeInfo_var, L_5, L_6);
		V_3 = L_7;
		NetConnection_t3331492029 * L_8 = V_3;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_m_currentMTU_34();
		V_4 = L_9;
		int32_t L_10 = V_4;
		int32_t L_11 = V_1;
		V_6 = (bool)((((int32_t)((((int32_t)L_10) < ((int32_t)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_6;
		if (L_12)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_13 = V_4;
		V_1 = L_13;
	}

IL_004d:
	{
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0052:
	{
		int32_t L_15 = V_2;
		int32_t L_16 = V_0;
		V_6 = (bool)((((int32_t)L_15) < ((int32_t)L_16))? 1 : 0);
		bool L_17 = V_6;
		if (L_17)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_18 = V_1;
		V_5 = L_18;
		goto IL_0061;
	}

IL_0061:
	{
		int32_t L_19 = V_5;
		return L_19;
	}
}
// System.Void Lidgren.Network.NetPeer/DelayedPacket::.ctor()
extern "C"  void DelayedPacket__ctor_m30217367 (DelayedPacket_t1298207473 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Lidgren.Network.NetPeerConfiguration::.ctor(System.String)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* NetException_t2452891498_il2cpp_TypeInfo_var;
extern Il2CppClass* IPAddress_t1399971723_il2cpp_TypeInfo_var;
extern Il2CppClass* NetUtility_t3562260209_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3133094195;
extern Il2CppCodeGenString* _stringLiteral2344018411;
extern const uint32_t NetPeerConfiguration__ctor_m2730954738_MetadataUsageId;
extern "C"  void NetPeerConfiguration__ctor_m2730954738 (NetPeerConfiguration_t136603591 * __this, String_t* ___appIdentifier0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetPeerConfiguration__ctor_m2730954738_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	IPAddress_t1399971723 * V_0 = NULL;
	bool V_1 = false;
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___appIdentifier0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m2802126737(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		NetException_t2452891498 * L_3 = (NetException_t2452891498 *)il2cpp_codegen_object_new(NetException_t2452891498_il2cpp_TypeInfo_var);
		NetException__ctor_m2724322251(L_3, _stringLiteral3133094195, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_0020:
	{
		String_t* L_4 = ___appIdentifier0;
		__this->set_m_appIdentifier_1(L_4);
		__this->set_m_disabledTypes_16(((int32_t)6278));
		__this->set_m_networkThreadName_2(_stringLiteral2344018411);
		IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t1399971723_il2cpp_TypeInfo_var);
		IPAddress_t1399971723 * L_5 = ((IPAddress_t1399971723_StaticFields*)IPAddress_t1399971723_il2cpp_TypeInfo_var->static_fields)->get_Any_4();
		__this->set_m_localAddress_3(L_5);
		IPAddress_t1399971723 * L_6 = ((IPAddress_t1399971723_StaticFields*)IPAddress_t1399971723_il2cpp_TypeInfo_var->static_fields)->get_Broadcast_5();
		__this->set_m_broadcastAddress_4(L_6);
		IL2CPP_RUNTIME_CLASS_INIT(NetUtility_t3562260209_il2cpp_TypeInfo_var);
		IPAddress_t1399971723 * L_7 = NetUtility_GetBroadcastAddress_m2689141683(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_7;
		IPAddress_t1399971723 * L_8 = V_0;
		V_1 = (bool)((((Il2CppObject*)(IPAddress_t1399971723 *)L_8) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
		bool L_9 = V_1;
		if (L_9)
		{
			goto IL_006a;
		}
	}
	{
		IPAddress_t1399971723 * L_10 = V_0;
		__this->set_m_broadcastAddress_4(L_10);
	}

IL_006a:
	{
		__this->set_m_port_17(0);
		__this->set_m_receiveBufferSize_18(((int32_t)131071));
		__this->set_m_sendBufferSize_19(((int32_t)131071));
		__this->set_m_acceptIncomingConnections_5((bool)0);
		__this->set_m_maximumConnections_6(((int32_t)32));
		__this->set_m_defaultOutgoingMessageCapacity_7(((int32_t)16));
		__this->set_m_pingInterval_8((4.0f));
		__this->set_m_connectionTimeout_11((25.0f));
		__this->set_m_useMessageRecycling_9((bool)1);
		__this->set_m_recycledCacheMaxCount_10(((int32_t)64));
		__this->set_m_resendHandshakeInterval_20((3.0f));
		__this->set_m_maximumHandshakeAttempts_21(5);
		__this->set_m_autoFlushSendQueue_13((bool)1);
		__this->set_m_suppressUnreliableUnorderedAcks_15((bool)0);
		__this->set_m_maximumTransmissionUnit_26(((int32_t)1408));
		__this->set_m_autoExpandMTU_27((bool)0);
		__this->set_m_expandMTUFrequency_28((2.0f));
		__this->set_m_expandMTUFailAttempts_29(5);
		__this->set_m_unreliableSizeBehaviour_14(0);
		__this->set_m_loss_22((0.0f));
		__this->set_m_minimumOneWayLatency_24((0.0f));
		__this->set_m_randomOneWayLatency_25((0.0f));
		__this->set_m_duplicates_23((0.0f));
		__this->set_m_isLocked_0((bool)0);
		return;
	}
}
// System.Void Lidgren.Network.NetPeerConfiguration::Lock()
extern "C"  void NetPeerConfiguration_Lock_m363221111 (NetPeerConfiguration_t136603591 * __this, const MethodInfo* method)
{
	{
		__this->set_m_isLocked_0((bool)1);
		return;
	}
}
// System.String Lidgren.Network.NetPeerConfiguration::get_AppIdentifier()
extern "C"  String_t* NetPeerConfiguration_get_AppIdentifier_m1563815312 (NetPeerConfiguration_t136603591 * __this, const MethodInfo* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_appIdentifier_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Lidgren.Network.NetPeerConfiguration::EnableMessageType(Lidgren.Network.NetIncomingMessageType)
extern "C"  void NetPeerConfiguration_EnableMessageType_m3529385845 (NetPeerConfiguration_t136603591 * __this, int32_t ___type0, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_m_disabledTypes_16();
		int32_t L_1 = ___type0;
		__this->set_m_disabledTypes_16(((int32_t)((int32_t)L_0&(int32_t)((~L_1)))));
		return;
	}
}
// System.Void Lidgren.Network.NetPeerConfiguration::DisableMessageType(Lidgren.Network.NetIncomingMessageType)
extern "C"  void NetPeerConfiguration_DisableMessageType_m34389850 (NetPeerConfiguration_t136603591 * __this, int32_t ___type0, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_m_disabledTypes_16();
		int32_t L_1 = ___type0;
		__this->set_m_disabledTypes_16(((int32_t)((int32_t)L_0|(int32_t)L_1)));
		return;
	}
}
// System.Boolean Lidgren.Network.NetPeerConfiguration::IsMessageTypeEnabled(Lidgren.Network.NetIncomingMessageType)
extern "C"  bool NetPeerConfiguration_IsMessageTypeEnabled_m1110774391 (NetPeerConfiguration_t136603591 * __this, int32_t ___type0, const MethodInfo* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_m_disabledTypes_16();
		int32_t L_1 = ___type0;
		int32_t L_2 = ___type0;
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) == ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// Lidgren.Network.NetUnreliableSizeBehaviour Lidgren.Network.NetPeerConfiguration::get_UnreliableSizeBehaviour()
extern "C"  int32_t NetPeerConfiguration_get_UnreliableSizeBehaviour_m2649350738 (NetPeerConfiguration_t136603591 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_unreliableSizeBehaviour_14();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.String Lidgren.Network.NetPeerConfiguration::get_NetworkThreadName()
extern "C"  String_t* NetPeerConfiguration_get_NetworkThreadName_m2092581791 (NetPeerConfiguration_t136603591 * __this, const MethodInfo* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_networkThreadName_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Lidgren.Network.NetPeerConfiguration::set_NetworkThreadName(System.String)
extern Il2CppClass* NetException_t2452891498_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral970084489;
extern const uint32_t NetPeerConfiguration_set_NetworkThreadName_m1927203884_MetadataUsageId;
extern "C"  void NetPeerConfiguration_set_NetworkThreadName_m1927203884 (NetPeerConfiguration_t136603591 * __this, String_t* ___value0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetPeerConfiguration_set_NetworkThreadName_m1927203884_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_isLocked_0();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		NetException_t2452891498 * L_2 = (NetException_t2452891498 *)il2cpp_codegen_object_new(NetException_t2452891498_il2cpp_TypeInfo_var);
		NetException__ctor_m2724322251(L_2, _stringLiteral970084489, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0019:
	{
		String_t* L_3 = ___value0;
		__this->set_m_networkThreadName_2(L_3);
		return;
	}
}
// System.Int32 Lidgren.Network.NetPeerConfiguration::get_MaximumTransmissionUnit()
extern "C"  int32_t NetPeerConfiguration_get_MaximumTransmissionUnit_m2375210687 (NetPeerConfiguration_t136603591 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_maximumTransmissionUnit_26();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Lidgren.Network.NetPeerConfiguration::get_UseMessageRecycling()
extern "C"  bool NetPeerConfiguration_get_UseMessageRecycling_m3846967355 (NetPeerConfiguration_t136603591 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_useMessageRecycling_9();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Int32 Lidgren.Network.NetPeerConfiguration::get_RecycledCacheMaxCount()
extern "C"  int32_t NetPeerConfiguration_get_RecycledCacheMaxCount_m2721437515 (NetPeerConfiguration_t136603591 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_recycledCacheMaxCount_10();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Lidgren.Network.NetPeerConfiguration::set_AutoFlushSendQueue(System.Boolean)
extern "C"  void NetPeerConfiguration_set_AutoFlushSendQueue_m1991348126 (NetPeerConfiguration_t136603591 * __this, bool ___value0, const MethodInfo* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_autoFlushSendQueue_13(L_0);
		return;
	}
}
// System.Boolean Lidgren.Network.NetPeerConfiguration::get_SuppressUnreliableUnorderedAcks()
extern "C"  bool NetPeerConfiguration_get_SuppressUnreliableUnorderedAcks_m1255305261 (NetPeerConfiguration_t136603591 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_suppressUnreliableUnorderedAcks_15();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Net.IPAddress Lidgren.Network.NetPeerConfiguration::get_LocalAddress()
extern "C"  IPAddress_t1399971723 * NetPeerConfiguration_get_LocalAddress_m4101942348 (NetPeerConfiguration_t136603591 * __this, const MethodInfo* method)
{
	IPAddress_t1399971723 * V_0 = NULL;
	{
		IPAddress_t1399971723 * L_0 = __this->get_m_localAddress_3();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		IPAddress_t1399971723 * L_1 = V_0;
		return L_1;
	}
}
// System.Net.IPAddress Lidgren.Network.NetPeerConfiguration::get_BroadcastAddress()
extern "C"  IPAddress_t1399971723 * NetPeerConfiguration_get_BroadcastAddress_m3449879104 (NetPeerConfiguration_t136603591 * __this, const MethodInfo* method)
{
	IPAddress_t1399971723 * V_0 = NULL;
	{
		IPAddress_t1399971723 * L_0 = __this->get_m_broadcastAddress_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		IPAddress_t1399971723 * L_1 = V_0;
		return L_1;
	}
}
// System.Int32 Lidgren.Network.NetPeerConfiguration::get_Port()
extern "C"  int32_t NetPeerConfiguration_get_Port_m3233330308 (NetPeerConfiguration_t136603591 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_port_17();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 Lidgren.Network.NetPeerConfiguration::get_ReceiveBufferSize()
extern "C"  int32_t NetPeerConfiguration_get_ReceiveBufferSize_m3874336565 (NetPeerConfiguration_t136603591 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_receiveBufferSize_18();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 Lidgren.Network.NetPeerConfiguration::get_SendBufferSize()
extern "C"  int32_t NetPeerConfiguration_get_SendBufferSize_m1353049686 (NetPeerConfiguration_t136603591 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_sendBufferSize_19();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Lidgren.Network.NetPeerConfiguration::get_AcceptIncomingConnections()
extern "C"  bool NetPeerConfiguration_get_AcceptIncomingConnections_m878586354 (NetPeerConfiguration_t136603591 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_acceptIncomingConnections_5();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Lidgren.Network.NetPeerConfiguration::set_AcceptIncomingConnections(System.Boolean)
extern "C"  void NetPeerConfiguration_set_AcceptIncomingConnections_m1397507705 (NetPeerConfiguration_t136603591 * __this, bool ___value0, const MethodInfo* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_acceptIncomingConnections_5(L_0);
		return;
	}
}
// System.Boolean Lidgren.Network.NetPeerConfiguration::get_AutoExpandMTU()
extern "C"  bool NetPeerConfiguration_get_AutoExpandMTU_m1376610458 (NetPeerConfiguration_t136603591 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_autoExpandMTU_27();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Single Lidgren.Network.NetPeerConfiguration::get_ExpandMTUFrequency()
extern "C"  float NetPeerConfiguration_get_ExpandMTUFrequency_m1301209541 (NetPeerConfiguration_t136603591 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_expandMTUFrequency_28();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Int32 Lidgren.Network.NetPeerConfiguration::get_ExpandMTUFailAttempts()
extern "C"  int32_t NetPeerConfiguration_get_ExpandMTUFailAttempts_m2610030021 (NetPeerConfiguration_t136603591 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_expandMTUFailAttempts_29();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Lidgren.Network.NetPeerStatistics::.ctor(Lidgren.Network.NetPeer)
extern "C"  void NetPeerStatistics__ctor_m358809733 (NetPeerStatistics_t101027066 * __this, NetPeer_t1779390221 * ___peer0, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		NetPeer_t1779390221 * L_0 = ___peer0;
		__this->set_m_peer_0(L_0);
		NetPeerStatistics_Reset_m36393242(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Lidgren.Network.NetPeerStatistics::Reset()
extern "C"  void NetPeerStatistics_Reset_m36393242 (NetPeerStatistics_t101027066 * __this, const MethodInfo* method)
{
	{
		__this->set_m_sentPackets_1(0);
		__this->set_m_receivedPackets_2(0);
		__this->set_m_sentMessages_3(0);
		__this->set_m_receivedMessages_4(0);
		__this->set_m_receivedFragments_5(0);
		__this->set_m_sentBytes_6(0);
		__this->set_m_receivedBytes_7(0);
		__this->set_m_bytesAllocated_8((((int64_t)((int64_t)0))));
		return;
	}
}
// System.Void Lidgren.Network.NetPeerStatistics::PacketSent(System.Int32,System.Int32)
extern "C"  void NetPeerStatistics_PacketSent_m2099282197 (NetPeerStatistics_t101027066 * __this, int32_t ___numBytes0, int32_t ___numMessages1, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_m_sentPackets_1();
		__this->set_m_sentPackets_1(((int32_t)((int32_t)L_0+(int32_t)1)));
		int32_t L_1 = __this->get_m_sentBytes_6();
		int32_t L_2 = ___numBytes0;
		__this->set_m_sentBytes_6(((int32_t)((int32_t)L_1+(int32_t)L_2)));
		int32_t L_3 = __this->get_m_sentMessages_3();
		int32_t L_4 = ___numMessages1;
		__this->set_m_sentMessages_3(((int32_t)((int32_t)L_3+(int32_t)L_4)));
		return;
	}
}
// System.Void Lidgren.Network.NetPeerStatistics::PacketReceived(System.Int32,System.Int32,System.Int32)
extern "C"  void NetPeerStatistics_PacketReceived_m2812231107 (NetPeerStatistics_t101027066 * __this, int32_t ___numBytes0, int32_t ___numMessages1, int32_t ___numFragments2, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_m_receivedPackets_2();
		__this->set_m_receivedPackets_2(((int32_t)((int32_t)L_0+(int32_t)1)));
		int32_t L_1 = __this->get_m_receivedBytes_7();
		int32_t L_2 = ___numBytes0;
		__this->set_m_receivedBytes_7(((int32_t)((int32_t)L_1+(int32_t)L_2)));
		int32_t L_3 = __this->get_m_receivedMessages_4();
		int32_t L_4 = ___numMessages1;
		__this->set_m_receivedMessages_4(((int32_t)((int32_t)L_3+(int32_t)L_4)));
		int32_t L_5 = __this->get_m_receivedFragments_5();
		int32_t L_6 = ___numFragments2;
		__this->set_m_receivedFragments_5(((int32_t)((int32_t)L_5+(int32_t)L_6)));
		return;
	}
}
// System.String Lidgren.Network.NetPeerStatistics::ToString()
extern Il2CppClass* StringBuilder_t1221177846_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppClass* Int64_t909078037_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2627332153;
extern Il2CppCodeGenString* _stringLiteral3611366396;
extern Il2CppCodeGenString* _stringLiteral3196969700;
extern Il2CppCodeGenString* _stringLiteral3895894051;
extern Il2CppCodeGenString* _stringLiteral2753271771;
extern Il2CppCodeGenString* _stringLiteral1174327339;
extern Il2CppCodeGenString* _stringLiteral688910150;
extern Il2CppCodeGenString* _stringLiteral3517506669;
extern Il2CppCodeGenString* _stringLiteral781345298;
extern Il2CppCodeGenString* _stringLiteral2058082297;
extern Il2CppCodeGenString* _stringLiteral3959465879;
extern Il2CppCodeGenString* _stringLiteral1711054593;
extern Il2CppCodeGenString* _stringLiteral2205145915;
extern const uint32_t NetPeerStatistics_ToString_m3092286938_MetadataUsageId;
extern "C"  String_t* NetPeerStatistics_ToString_m3092286938 (NetPeerStatistics_t101027066 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetPeerStatistics_ToString_m3092286938_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t1221177846 * V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	ObjectU5BU5D_t3614634134* V_3 = NULL;
	bool V_4 = false;
	{
		StringBuilder_t1221177846 * L_0 = (StringBuilder_t1221177846 *)il2cpp_codegen_object_new(StringBuilder_t1221177846_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3946851802(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringBuilder_t1221177846 * L_1 = V_0;
		NetPeer_t1779390221 * L_2 = __this->get_m_peer_0();
		NullCheck(L_2);
		int32_t L_3 = NetPeer_get_ConnectionsCount_m847920945(L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		String_t* L_4 = Int32_ToString_m2960866144((&V_2), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m2596409543(NULL /*static, unused*/, L_4, _stringLiteral2627332153, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_AppendLine_m2033101329(L_1, L_5, /*hidden argument*/NULL);
		StringBuilder_t1221177846 * L_6 = V_0;
		V_3 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)7));
		ObjectU5BU5D_t3614634134* L_7 = V_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		ArrayElementTypeCheck (L_7, _stringLiteral3611366396);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral3611366396);
		ObjectU5BU5D_t3614634134* L_8 = V_3;
		int32_t L_9 = __this->get_m_sentBytes_6();
		int32_t L_10 = L_9;
		Il2CppObject * L_11 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 1);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_11);
		ObjectU5BU5D_t3614634134* L_12 = V_3;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 2);
		ArrayElementTypeCheck (L_12, _stringLiteral3196969700);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral3196969700);
		ObjectU5BU5D_t3614634134* L_13 = V_3;
		int32_t L_14 = __this->get_m_sentMessages_3();
		int32_t L_15 = L_14;
		Il2CppObject * L_16 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 3);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_16);
		ObjectU5BU5D_t3614634134* L_17 = V_3;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 4);
		ArrayElementTypeCheck (L_17, _stringLiteral3895894051);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (Il2CppObject *)_stringLiteral3895894051);
		ObjectU5BU5D_t3614634134* L_18 = V_3;
		int32_t L_19 = __this->get_m_sentPackets_1();
		int32_t L_20 = L_19;
		Il2CppObject * L_21 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 5);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(5), (Il2CppObject *)L_21);
		ObjectU5BU5D_t3614634134* L_22 = V_3;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, 6);
		ArrayElementTypeCheck (L_22, _stringLiteral2753271771);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(6), (Il2CppObject *)_stringLiteral2753271771);
		ObjectU5BU5D_t3614634134* L_23 = V_3;
		String_t* L_24 = String_Concat_m3881798623(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		NullCheck(L_6);
		StringBuilder_AppendLine_m2033101329(L_6, L_24, /*hidden argument*/NULL);
		StringBuilder_t1221177846 * L_25 = V_0;
		V_3 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9)));
		ObjectU5BU5D_t3614634134* L_26 = V_3;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 0);
		ArrayElementTypeCheck (L_26, _stringLiteral1174327339);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral1174327339);
		ObjectU5BU5D_t3614634134* L_27 = V_3;
		int32_t L_28 = __this->get_m_receivedBytes_7();
		int32_t L_29 = L_28;
		Il2CppObject * L_30 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_29);
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, 1);
		ArrayElementTypeCheck (L_27, L_30);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_30);
		ObjectU5BU5D_t3614634134* L_31 = V_3;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 2);
		ArrayElementTypeCheck (L_31, _stringLiteral3196969700);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral3196969700);
		ObjectU5BU5D_t3614634134* L_32 = V_3;
		int32_t L_33 = __this->get_m_receivedMessages_4();
		int32_t L_34 = L_33;
		Il2CppObject * L_35 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 3);
		ArrayElementTypeCheck (L_32, L_35);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_35);
		ObjectU5BU5D_t3614634134* L_36 = V_3;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, 4);
		ArrayElementTypeCheck (L_36, _stringLiteral688910150);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(4), (Il2CppObject *)_stringLiteral688910150);
		ObjectU5BU5D_t3614634134* L_37 = V_3;
		int32_t L_38 = __this->get_m_receivedFragments_5();
		int32_t L_39 = L_38;
		Il2CppObject * L_40 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_39);
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, 5);
		ArrayElementTypeCheck (L_37, L_40);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(5), (Il2CppObject *)L_40);
		ObjectU5BU5D_t3614634134* L_41 = V_3;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, 6);
		ArrayElementTypeCheck (L_41, _stringLiteral3517506669);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(6), (Il2CppObject *)_stringLiteral3517506669);
		ObjectU5BU5D_t3614634134* L_42 = V_3;
		int32_t L_43 = __this->get_m_receivedPackets_2();
		int32_t L_44 = L_43;
		Il2CppObject * L_45 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_44);
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 7);
		ArrayElementTypeCheck (L_42, L_45);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(7), (Il2CppObject *)L_45);
		ObjectU5BU5D_t3614634134* L_46 = V_3;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, 8);
		ArrayElementTypeCheck (L_46, _stringLiteral2753271771);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(8), (Il2CppObject *)_stringLiteral2753271771);
		ObjectU5BU5D_t3614634134* L_47 = V_3;
		String_t* L_48 = String_Concat_m3881798623(NULL /*static, unused*/, L_47, /*hidden argument*/NULL);
		NullCheck(L_25);
		StringBuilder_AppendLine_m2033101329(L_25, L_48, /*hidden argument*/NULL);
		StringBuilder_t1221177846 * L_49 = V_0;
		int64_t L_50 = __this->get_m_bytesAllocated_8();
		int64_t L_51 = L_50;
		Il2CppObject * L_52 = Box(Int64_t909078037_il2cpp_TypeInfo_var, &L_51);
		String_t* L_53 = String_Concat_m2000667605(NULL /*static, unused*/, _stringLiteral781345298, L_52, _stringLiteral2058082297, /*hidden argument*/NULL);
		NullCheck(L_49);
		StringBuilder_AppendLine_m2033101329(L_49, L_53, /*hidden argument*/NULL);
		NetPeer_t1779390221 * L_54 = __this->get_m_peer_0();
		NullCheck(L_54);
		List_1_t2766455145 * L_55 = L_54->get_m_storagePool_31();
		V_4 = (bool)((((Il2CppObject*)(List_1_t2766455145 *)L_55) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
		bool L_56 = V_4;
		if (L_56)
		{
			goto IL_0185;
		}
	}
	{
		StringBuilder_t1221177846 * L_57 = V_0;
		V_3 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)5));
		ObjectU5BU5D_t3614634134* L_58 = V_3;
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, 0);
		ArrayElementTypeCheck (L_58, _stringLiteral3959465879);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral3959465879);
		ObjectU5BU5D_t3614634134* L_59 = V_3;
		NetPeer_t1779390221 * L_60 = __this->get_m_peer_0();
		NullCheck(L_60);
		int32_t L_61 = L_60->get_m_storagePoolBytes_34();
		int32_t L_62 = L_61;
		Il2CppObject * L_63 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_62);
		NullCheck(L_59);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_59, 1);
		ArrayElementTypeCheck (L_59, L_63);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_63);
		ObjectU5BU5D_t3614634134* L_64 = V_3;
		NullCheck(L_64);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_64, 2);
		ArrayElementTypeCheck (L_64, _stringLiteral1711054593);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral1711054593);
		ObjectU5BU5D_t3614634134* L_65 = V_3;
		NetPeer_t1779390221 * L_66 = __this->get_m_peer_0();
		NullCheck(L_66);
		int32_t L_67 = L_66->get_m_storageSlotsUsedCount_35();
		int32_t L_68 = L_67;
		Il2CppObject * L_69 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_68);
		NullCheck(L_65);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_65, 3);
		ArrayElementTypeCheck (L_65, L_69);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_69);
		ObjectU5BU5D_t3614634134* L_70 = V_3;
		NullCheck(L_70);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_70, 4);
		ArrayElementTypeCheck (L_70, _stringLiteral2205145915);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(4), (Il2CppObject *)_stringLiteral2205145915);
		ObjectU5BU5D_t3614634134* L_71 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_72 = String_Concat_m3881798623(NULL /*static, unused*/, L_71, /*hidden argument*/NULL);
		NullCheck(L_57);
		StringBuilder_AppendLine_m2033101329(L_57, L_72, /*hidden argument*/NULL);
	}

IL_0185:
	{
		StringBuilder_t1221177846 * L_73 = V_0;
		NullCheck(L_73);
		String_t* L_74 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_73);
		V_1 = L_74;
		goto IL_018e;
	}

IL_018e:
	{
		String_t* L_75 = V_1;
		return L_75;
	}
}
// System.Void Lidgren.Network.NetRandom::.ctor()
extern Il2CppClass* NetRandomSeed_t726093591_il2cpp_TypeInfo_var;
extern const uint32_t NetRandom__ctor_m1930519285_MetadataUsageId;
extern "C"  void NetRandom__ctor_m1930519285 (NetRandom_t509742058 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetRandom__ctor_m1930519285_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Random__ctor_m1561335652(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetRandomSeed_t726093591_il2cpp_TypeInfo_var);
		uint32_t L_0 = NetRandomSeed_GetUInt32_m4251441882(NULL /*static, unused*/, /*hidden argument*/NULL);
		VirtActionInvoker1< uint32_t >::Invoke(9 /* System.Void Lidgren.Network.NetRandom::Initialize(System.UInt32) */, __this, L_0);
		return;
	}
}
// System.Void Lidgren.Network.NetRandom::Initialize(System.UInt32)
extern Il2CppClass* NotImplementedException_t2785117854_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3941954466;
extern const uint32_t NetRandom_Initialize_m3538796821_MetadataUsageId;
extern "C"  void NetRandom_Initialize_m3538796821 (NetRandom_t509742058 * __this, uint32_t ___seed0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetRandom_Initialize_m3538796821_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotImplementedException_t2785117854 * L_0 = (NotImplementedException_t2785117854 *)il2cpp_codegen_object_new(NotImplementedException_t2785117854_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m1795163961(L_0, _stringLiteral3941954466, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.UInt32 Lidgren.Network.NetRandom::NextUInt32()
extern Il2CppClass* NotImplementedException_t2785117854_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3941954466;
extern const uint32_t NetRandom_NextUInt32_m1563057962_MetadataUsageId;
extern "C"  uint32_t NetRandom_NextUInt32_m1563057962 (NetRandom_t509742058 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetRandom_NextUInt32_m1563057962_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotImplementedException_t2785117854 * L_0 = (NotImplementedException_t2785117854 *)il2cpp_codegen_object_new(NotImplementedException_t2785117854_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m1795163961(L_0, _stringLiteral3941954466, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Int32 Lidgren.Network.NetRandom::Next()
extern "C"  int32_t NetRandom_Next_m3515987696 (NetRandom_t509742058 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		uint32_t L_0 = VirtFuncInvoker0< uint32_t >::Invoke(10 /* System.UInt32 Lidgren.Network.NetRandom::NextUInt32() */, __this);
		V_0 = ((int32_t)((int32_t)((int32_t)2147483647LL)&(int32_t)L_0));
		int32_t L_1 = V_0;
		V_2 = (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)((int32_t)2147483647LL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = NetRandom_NextInt32_m3600204010(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_002a;
	}

IL_0026:
	{
		int32_t L_4 = V_0;
		V_1 = L_4;
		goto IL_002a;
	}

IL_002a:
	{
		int32_t L_5 = V_1;
		return L_5;
	}
}
// System.Int32 Lidgren.Network.NetRandom::NextInt32()
extern "C"  int32_t NetRandom_NextInt32_m3600204010 (NetRandom_t509742058 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		uint32_t L_0 = VirtFuncInvoker0< uint32_t >::Invoke(10 /* System.UInt32 Lidgren.Network.NetRandom::NextUInt32() */, __this);
		V_0 = ((int32_t)((int32_t)((int32_t)2147483647LL)&(int32_t)L_0));
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Double Lidgren.Network.NetRandom::NextDouble()
extern "C"  double NetRandom_NextDouble_m193002282 (NetRandom_t509742058 * __this, const MethodInfo* method)
{
	double V_0 = 0.0;
	{
		int32_t L_0 = NetRandom_NextInt32_m3600204010(__this, /*hidden argument*/NULL);
		V_0 = ((double)((double)(4.6566128730773926E-10)*(double)(((double)((double)L_0)))));
		goto IL_0015;
	}

IL_0015:
	{
		double L_1 = V_0;
		return L_1;
	}
}
// System.Double Lidgren.Network.NetRandom::Sample()
extern "C"  double NetRandom_Sample_m1013401964 (NetRandom_t509742058 * __this, const MethodInfo* method)
{
	double V_0 = 0.0;
	{
		int32_t L_0 = NetRandom_NextInt32_m3600204010(__this, /*hidden argument*/NULL);
		V_0 = ((double)((double)(4.6566128730773926E-10)*(double)(((double)((double)L_0)))));
		goto IL_0015;
	}

IL_0015:
	{
		double L_1 = V_0;
		return L_1;
	}
}
// System.Single Lidgren.Network.NetRandom::NextSingle()
extern "C"  float NetRandom_NextSingle_m2975933834 (NetRandom_t509742058 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		int32_t L_0 = NetRandom_NextInt32_m3600204010(__this, /*hidden argument*/NULL);
		V_0 = (((float)((float)((double)((double)(4.6566128730773926E-10)*(double)(((double)((double)L_0))))))));
		float L_1 = V_0;
		V_2 = (bool)((((int32_t)((((float)L_1) == ((float)(1.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		float L_3 = NetRandom_NextSingle_m2975933834(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0030;
	}

IL_002c:
	{
		float L_4 = V_0;
		V_1 = L_4;
		goto IL_0030;
	}

IL_0030:
	{
		float L_5 = V_1;
		return L_5;
	}
}
// System.Int32 Lidgren.Network.NetRandom::Next(System.Int32)
extern "C"  int32_t NetRandom_Next_m2445239325 (NetRandom_t509742058 * __this, int32_t ___maxValue0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		double L_0 = VirtFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, __this);
		int32_t L_1 = ___maxValue0;
		V_0 = (((int32_t)((int32_t)((double)((double)L_0*(double)(((double)((double)L_1))))))));
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Lidgren.Network.NetRandom::Next(System.Int32,System.Int32)
extern "C"  int32_t NetRandom_Next_m2869914940 (NetRandom_t509742058 * __this, int32_t ___minValue0, int32_t ___maxValue1, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___minValue0;
		double L_1 = VirtFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, __this);
		int32_t L_2 = ___maxValue1;
		int32_t L_3 = ___minValue0;
		V_0 = ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)((int32_t)((double)((double)L_1*(double)(((double)((double)((int32_t)((int32_t)L_2-(int32_t)L_3))))))))))));
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Void Lidgren.Network.NetRandom::.cctor()
extern Il2CppClass* MWCRandom_t315011312_il2cpp_TypeInfo_var;
extern Il2CppClass* NetRandom_t509742058_il2cpp_TypeInfo_var;
extern const uint32_t NetRandom__cctor_m2811150516_MetadataUsageId;
extern "C"  void NetRandom__cctor_m2811150516 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetRandom__cctor_m2811150516_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		MWCRandom_t315011312 * L_0 = (MWCRandom_t315011312 *)il2cpp_codegen_object_new(MWCRandom_t315011312_il2cpp_TypeInfo_var);
		MWCRandom__ctor_m14555459(L_0, /*hidden argument*/NULL);
		((NetRandom_t509742058_StaticFields*)NetRandom_t509742058_il2cpp_TypeInfo_var->static_fields)->set_Instance_3(L_0);
		return;
	}
}
// System.UInt32 Lidgren.Network.NetRandomSeed::GetUInt32()
extern Il2CppClass* NetRandomSeed_t726093591_il2cpp_TypeInfo_var;
extern const uint32_t NetRandomSeed_GetUInt32_m4251441882_MetadataUsageId;
extern "C"  uint32_t NetRandomSeed_GetUInt32_m4251441882 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetRandomSeed_GetUInt32_m4251441882_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	uint64_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetRandomSeed_t726093591_il2cpp_TypeInfo_var);
		uint64_t L_0 = NetRandomSeed_GetUInt64_m1791162272(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		uint64_t L_1 = V_0;
		V_1 = (((int32_t)((uint32_t)L_1)));
		uint64_t L_2 = V_0;
		V_2 = (((int32_t)((uint32_t)((int64_t)((uint64_t)L_2>>((int32_t)32))))));
		uint32_t L_3 = V_1;
		uint32_t L_4 = V_2;
		V_3 = ((int32_t)((int32_t)L_3^(int32_t)L_4));
		goto IL_0016;
	}

IL_0016:
	{
		uint32_t L_5 = V_3;
		return L_5;
	}
}
// System.UInt64 Lidgren.Network.NetRandomSeed::GetUInt64()
extern Il2CppClass* Guid_t2533601593_il2cpp_TypeInfo_var;
extern Il2CppClass* NetRandomSeed_t726093591_il2cpp_TypeInfo_var;
extern Il2CppClass* NetUtility_t3562260209_il2cpp_TypeInfo_var;
extern const uint32_t NetRandomSeed_GetUInt64_m1791162272_MetadataUsageId;
extern "C"  uint64_t NetRandomSeed_GetUInt64_m1791162272 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetRandomSeed_GetUInt64_m1791162272_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t3397334013* V_0 = NULL;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	Guid_t2533601593  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t2533601593_il2cpp_TypeInfo_var);
		Guid_t2533601593  L_0 = Guid_NewGuid_m3493657620(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_0;
		ByteU5BU5D_t3397334013* L_1 = Guid_ToByteArray_m1495052102((&V_3), /*hidden argument*/NULL);
		V_0 = L_1;
		ByteU5BU5D_t3397334013* L_2 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		uint8_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		ByteU5BU5D_t3397334013* L_5 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 1);
		int32_t L_6 = 1;
		uint8_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_t3397334013* L_8 = V_0;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		int32_t L_9 = 2;
		uint8_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		ByteU5BU5D_t3397334013* L_11 = V_0;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 3);
		int32_t L_12 = 3;
		uint8_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		ByteU5BU5D_t3397334013* L_14 = V_0;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 4);
		int32_t L_15 = 4;
		uint8_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		ByteU5BU5D_t3397334013* L_17 = V_0;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 5);
		int32_t L_18 = 5;
		uint8_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		ByteU5BU5D_t3397334013* L_20 = V_0;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 6);
		int32_t L_21 = 6;
		uint8_t L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		ByteU5BU5D_t3397334013* L_23 = V_0;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, 7);
		int32_t L_24 = 7;
		uint8_t L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_1 = ((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)(((int64_t)((uint64_t)L_4)))|(int64_t)((int64_t)((int64_t)(((int64_t)((uint64_t)L_7)))<<(int32_t)8))))|(int64_t)((int64_t)((int64_t)(((int64_t)((uint64_t)L_10)))<<(int32_t)((int32_t)16)))))|(int64_t)((int64_t)((int64_t)(((int64_t)((uint64_t)L_13)))<<(int32_t)((int32_t)24)))))|(int64_t)((int64_t)((int64_t)(((int64_t)((uint64_t)L_16)))<<(int32_t)((int32_t)32)))))|(int64_t)((int64_t)((int64_t)(((int64_t)((uint64_t)L_19)))<<(int32_t)((int32_t)40)))))|(int64_t)((int64_t)((int64_t)(((int64_t)((uint64_t)L_22)))<<(int32_t)((int32_t)48)))))|(int64_t)((int64_t)((int64_t)(((int64_t)((uint64_t)L_25)))<<(int32_t)((int32_t)56)))));
		uint64_t L_26 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(NetRandomSeed_t726093591_il2cpp_TypeInfo_var);
		int32_t L_27 = ((NetRandomSeed_t726093591_StaticFields*)NetRandomSeed_t726093591_il2cpp_TypeInfo_var->static_fields)->get_m_seedIncrement_0();
		IL2CPP_RUNTIME_CLASS_INIT(NetUtility_t3562260209_il2cpp_TypeInfo_var);
		uint64_t L_28 = NetUtility_GetPlatformSeed_m3510865201(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		V_2 = ((int64_t)((int64_t)L_26^(int64_t)L_28));
		goto IL_005a;
	}

IL_005a:
	{
		uint64_t L_29 = V_2;
		return L_29;
	}
}
// System.Void Lidgren.Network.NetRandomSeed::.cctor()
extern Il2CppClass* NetRandomSeed_t726093591_il2cpp_TypeInfo_var;
extern const uint32_t NetRandomSeed__cctor_m2240423589_MetadataUsageId;
extern "C"  void NetRandomSeed__cctor_m2240423589 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetRandomSeed__cctor_m2240423589_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		((NetRandomSeed_t726093591_StaticFields*)NetRandomSeed_t726093591_il2cpp_TypeInfo_var->static_fields)->set_m_seedIncrement_0(((int32_t)-1640531527));
		return;
	}
}
// System.Void Lidgren.Network.NetReceiverChannelBase::.ctor(Lidgren.Network.NetConnection)
extern "C"  void NetReceiverChannelBase__ctor_m892231457 (NetReceiverChannelBase_t908288882 * __this, NetConnection_t3331492029 * ___connection0, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		NetConnection_t3331492029 * L_0 = ___connection0;
		__this->set_m_connection_1(L_0);
		NetConnection_t3331492029 * L_1 = ___connection0;
		NullCheck(L_1);
		NetPeer_t1779390221 * L_2 = L_1->get_m_peer_0();
		__this->set_m_peer_0(L_2);
		return;
	}
}
// System.Void Lidgren.Network.NetReliableOrderedReceiver::.ctor(Lidgren.Network.NetConnection,System.Int32)
extern Il2CppClass* NetIncomingMessageU5BU5D_t827121993_il2cpp_TypeInfo_var;
extern Il2CppClass* NetBitVector_t1774780753_il2cpp_TypeInfo_var;
extern const uint32_t NetReliableOrderedReceiver__ctor_m3553848617_MetadataUsageId;
extern "C"  void NetReliableOrderedReceiver__ctor_m3553848617 (NetReliableOrderedReceiver_t2554037675 * __this, NetConnection_t3331492029 * ___connection0, int32_t ___windowSize1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetReliableOrderedReceiver__ctor_m3553848617_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		NetConnection_t3331492029 * L_0 = ___connection0;
		NetReceiverChannelBase__ctor_m892231457(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___windowSize1;
		__this->set_m_windowSize_3(L_1);
		int32_t L_2 = ___windowSize1;
		__this->set_m_withheldMessages_5(((NetIncomingMessageU5BU5D_t827121993*)SZArrayNew(NetIncomingMessageU5BU5D_t827121993_il2cpp_TypeInfo_var, (uint32_t)L_2)));
		int32_t L_3 = ___windowSize1;
		NetBitVector_t1774780753 * L_4 = (NetBitVector_t1774780753 *)il2cpp_codegen_object_new(NetBitVector_t1774780753_il2cpp_TypeInfo_var);
		NetBitVector__ctor_m1517128273(L_4, L_3, /*hidden argument*/NULL);
		__this->set_m_earlyReceived_4(L_4);
		return;
	}
}
// System.Void Lidgren.Network.NetReliableOrderedReceiver::AdvanceWindow()
extern "C"  void NetReliableOrderedReceiver_AdvanceWindow_m2797762522 (NetReliableOrderedReceiver_t2554037675 * __this, const MethodInfo* method)
{
	{
		NetBitVector_t1774780753 * L_0 = __this->get_m_earlyReceived_4();
		int32_t L_1 = __this->get_m_windowStart_2();
		int32_t L_2 = __this->get_m_windowSize_3();
		NullCheck(L_0);
		NetBitVector_Set_m2669921130(L_0, ((int32_t)((int32_t)L_1%(int32_t)L_2)), (bool)0, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_m_windowStart_2();
		__this->set_m_windowStart_2(((int32_t)((int32_t)((int32_t)((int32_t)L_3+(int32_t)1))%(int32_t)((int32_t)1024))));
		return;
	}
}
// System.Void Lidgren.Network.NetReliableOrderedReceiver::ReceiveMessage(Lidgren.Network.NetIncomingMessage)
extern Il2CppClass* NetUtility_t3562260209_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3536583815;
extern Il2CppCodeGenString* _stringLiteral2279591503;
extern Il2CppCodeGenString* _stringLiteral2486397350;
extern Il2CppCodeGenString* _stringLiteral1174327339;
extern Il2CppCodeGenString* _stringLiteral1925410982;
extern Il2CppCodeGenString* _stringLiteral2282954049;
extern const uint32_t NetReliableOrderedReceiver_ReceiveMessage_m3222467075_MetadataUsageId;
extern "C"  void NetReliableOrderedReceiver_ReceiveMessage_m3222467075 (NetReliableOrderedReceiver_t2554037675 * __this, NetIncomingMessage_t2014089816 * ___message0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetReliableOrderedReceiver_ReceiveMessage_m3222467075_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	ObjectU5BU5D_t3614634134* V_3 = NULL;
	{
		NetIncomingMessage_t2014089816 * L_0 = ___message0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_m_sequenceNumber_8();
		int32_t L_2 = __this->get_m_windowStart_2();
		IL2CPP_RUNTIME_CLASS_INIT(NetUtility_t3562260209_il2cpp_TypeInfo_var);
		int32_t L_3 = NetUtility_RelativeSequenceNumber_m1713083748(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		NetConnection_t3331492029 * L_4 = ((NetReceiverChannelBase_t908288882 *)__this)->get_m_connection_1();
		NetIncomingMessage_t2014089816 * L_5 = ___message0;
		NullCheck(L_5);
		uint8_t L_6 = L_5->get_m_receivedMessageType_9();
		NetIncomingMessage_t2014089816 * L_7 = ___message0;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_m_sequenceNumber_8();
		NullCheck(L_4);
		NetConnection_QueueAck_m3101883724(L_4, L_6, L_8, /*hidden argument*/NULL);
		int32_t L_9 = V_0;
		V_2 = (bool)((((int32_t)((((int32_t)L_9) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (L_10)
		{
			goto IL_00da;
		}
	}
	{
		NetReliableOrderedReceiver_AdvanceWindow_m2797762522(__this, /*hidden argument*/NULL);
		NetPeer_t1779390221 * L_11 = ((NetReceiverChannelBase_t908288882 *)__this)->get_m_peer_0();
		NetIncomingMessage_t2014089816 * L_12 = ___message0;
		NullCheck(L_11);
		NetPeer_ReleaseMessage_m3520648965(L_11, L_12, /*hidden argument*/NULL);
		NetIncomingMessage_t2014089816 * L_13 = ___message0;
		NullCheck(L_13);
		int32_t L_14 = L_13->get_m_sequenceNumber_8();
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_14+(int32_t)1))%(int32_t)((int32_t)1024)));
		goto IL_00be;
	}

IL_005f:
	{
		NetIncomingMessageU5BU5D_t827121993* L_15 = __this->get_m_withheldMessages_5();
		int32_t L_16 = V_1;
		int32_t L_17 = __this->get_m_windowSize_3();
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, ((int32_t)((int32_t)L_16%(int32_t)L_17)));
		int32_t L_18 = ((int32_t)((int32_t)L_16%(int32_t)L_17));
		NetIncomingMessage_t2014089816 * L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		___message0 = L_19;
		NetIncomingMessage_t2014089816 * L_20 = ___message0;
		NetException_Assert_m1426298558(NULL /*static, unused*/, (bool)((((int32_t)((((Il2CppObject*)(NetIncomingMessage_t2014089816 *)L_20) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		NetIncomingMessageU5BU5D_t827121993* L_21 = __this->get_m_withheldMessages_5();
		int32_t L_22 = V_1;
		int32_t L_23 = __this->get_m_windowSize_3();
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, ((int32_t)((int32_t)L_22%(int32_t)L_23)));
		ArrayElementTypeCheck (L_21, NULL);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_22%(int32_t)L_23))), (NetIncomingMessage_t2014089816 *)NULL);
		NetPeer_t1779390221 * L_24 = ((NetReceiverChannelBase_t908288882 *)__this)->get_m_peer_0();
		NetIncomingMessage_t2014089816 * L_25 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_26 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral3536583815, L_25, /*hidden argument*/NULL);
		NullCheck(L_24);
		NetPeer_LogVerbose_m3434660420(L_24, L_26, /*hidden argument*/NULL);
		NetPeer_t1779390221 * L_27 = ((NetReceiverChannelBase_t908288882 *)__this)->get_m_peer_0();
		NetIncomingMessage_t2014089816 * L_28 = ___message0;
		NullCheck(L_27);
		NetPeer_ReleaseMessage_m3520648965(L_27, L_28, /*hidden argument*/NULL);
		NetReliableOrderedReceiver_AdvanceWindow_m2797762522(__this, /*hidden argument*/NULL);
		int32_t L_29 = V_1;
		V_1 = ((int32_t)((int32_t)L_29+(int32_t)1));
	}

IL_00be:
	{
		NetBitVector_t1774780753 * L_30 = __this->get_m_earlyReceived_4();
		int32_t L_31 = V_1;
		int32_t L_32 = __this->get_m_windowSize_3();
		NullCheck(L_30);
		bool L_33 = NetBitVector_get_Bit_m3575907859(L_30, ((int32_t)((int32_t)L_31%(int32_t)L_32)), /*hidden argument*/NULL);
		V_2 = L_33;
		bool L_34 = V_2;
		if (L_34)
		{
			goto IL_005f;
		}
	}
	{
		goto IL_01eb;
	}

IL_00da:
	{
		int32_t L_35 = V_0;
		V_2 = (bool)((((int32_t)((((int32_t)L_35) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_36 = V_2;
		if (L_36)
		{
			goto IL_0122;
		}
	}
	{
		NetConnection_t3331492029 * L_37 = ((NetReceiverChannelBase_t908288882 *)__this)->get_m_connection_1();
		NullCheck(L_37);
		NetConnectionStatistics_t1235765202 * L_38 = L_37->get_m_statistics_14();
		NullCheck(L_38);
		NetConnectionStatistics_MessageDropped_m4117327218(L_38, /*hidden argument*/NULL);
		NetPeer_t1779390221 * L_39 = ((NetReceiverChannelBase_t908288882 *)__this)->get_m_peer_0();
		NetIncomingMessage_t2014089816 * L_40 = ___message0;
		NullCheck(L_40);
		int32_t L_41 = L_40->get_m_sequenceNumber_8();
		int32_t L_42 = L_41;
		Il2CppObject * L_43 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_42);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_44 = String_Concat_m2000667605(NULL /*static, unused*/, _stringLiteral2279591503, L_43, _stringLiteral2486397350, /*hidden argument*/NULL);
		NullCheck(L_39);
		NetPeer_LogVerbose_m3434660420(L_39, L_44, /*hidden argument*/NULL);
		goto IL_01eb;
	}

IL_0122:
	{
		int32_t L_45 = V_0;
		int32_t L_46 = __this->get_m_windowSize_3();
		V_2 = (bool)((((int32_t)((((int32_t)L_45) > ((int32_t)L_46))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_47 = V_2;
		if (L_47)
		{
			goto IL_0181;
		}
	}
	{
		NetConnection_t3331492029 * L_48 = ((NetReceiverChannelBase_t908288882 *)__this)->get_m_connection_1();
		NullCheck(L_48);
		NetConnectionStatistics_t1235765202 * L_49 = L_48->get_m_statistics_14();
		NullCheck(L_49);
		NetConnectionStatistics_MessageDropped_m4117327218(L_49, /*hidden argument*/NULL);
		NetPeer_t1779390221 * L_50 = ((NetReceiverChannelBase_t908288882 *)__this)->get_m_peer_0();
		V_3 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)4));
		ObjectU5BU5D_t3614634134* L_51 = V_3;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, 0);
		ArrayElementTypeCheck (L_51, _stringLiteral1174327339);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral1174327339);
		ObjectU5BU5D_t3614634134* L_52 = V_3;
		NetIncomingMessage_t2014089816 * L_53 = ___message0;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, 1);
		ArrayElementTypeCheck (L_52, L_53);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_53);
		ObjectU5BU5D_t3614634134* L_54 = V_3;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, 2);
		ArrayElementTypeCheck (L_54, _stringLiteral1925410982);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral1925410982);
		ObjectU5BU5D_t3614634134* L_55 = V_3;
		int32_t L_56 = __this->get_m_windowStart_2();
		int32_t L_57 = L_56;
		Il2CppObject * L_58 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_57);
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, 3);
		ArrayElementTypeCheck (L_55, L_58);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_58);
		ObjectU5BU5D_t3614634134* L_59 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_60 = String_Concat_m3881798623(NULL /*static, unused*/, L_59, /*hidden argument*/NULL);
		NullCheck(L_50);
		NetPeer_LogDebug_m2983960595(L_50, L_60, /*hidden argument*/NULL);
		goto IL_01eb;
	}

IL_0181:
	{
		NetBitVector_t1774780753 * L_61 = __this->get_m_earlyReceived_4();
		NetIncomingMessage_t2014089816 * L_62 = ___message0;
		NullCheck(L_62);
		int32_t L_63 = L_62->get_m_sequenceNumber_8();
		int32_t L_64 = __this->get_m_windowSize_3();
		NullCheck(L_61);
		NetBitVector_Set_m2669921130(L_61, ((int32_t)((int32_t)L_63%(int32_t)L_64)), (bool)1, /*hidden argument*/NULL);
		NetPeer_t1779390221 * L_65 = ((NetReceiverChannelBase_t908288882 *)__this)->get_m_peer_0();
		V_3 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)4));
		ObjectU5BU5D_t3614634134* L_66 = V_3;
		NullCheck(L_66);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_66, 0);
		ArrayElementTypeCheck (L_66, _stringLiteral1174327339);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral1174327339);
		ObjectU5BU5D_t3614634134* L_67 = V_3;
		NetIncomingMessage_t2014089816 * L_68 = ___message0;
		NullCheck(L_67);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_67, 1);
		ArrayElementTypeCheck (L_67, L_68);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_68);
		ObjectU5BU5D_t3614634134* L_69 = V_3;
		NullCheck(L_69);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_69, 2);
		ArrayElementTypeCheck (L_69, _stringLiteral2282954049);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral2282954049);
		ObjectU5BU5D_t3614634134* L_70 = V_3;
		int32_t L_71 = __this->get_m_windowStart_2();
		int32_t L_72 = L_71;
		Il2CppObject * L_73 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_72);
		NullCheck(L_70);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_70, 3);
		ArrayElementTypeCheck (L_70, L_73);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_73);
		ObjectU5BU5D_t3614634134* L_74 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_75 = String_Concat_m3881798623(NULL /*static, unused*/, L_74, /*hidden argument*/NULL);
		NullCheck(L_65);
		NetPeer_LogVerbose_m3434660420(L_65, L_75, /*hidden argument*/NULL);
		NetIncomingMessageU5BU5D_t827121993* L_76 = __this->get_m_withheldMessages_5();
		NetIncomingMessage_t2014089816 * L_77 = ___message0;
		NullCheck(L_77);
		int32_t L_78 = L_77->get_m_sequenceNumber_8();
		int32_t L_79 = __this->get_m_windowSize_3();
		NetIncomingMessage_t2014089816 * L_80 = ___message0;
		NullCheck(L_76);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_76, ((int32_t)((int32_t)L_78%(int32_t)L_79)));
		ArrayElementTypeCheck (L_76, L_80);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_78%(int32_t)L_79))), (NetIncomingMessage_t2014089816 *)L_80);
	}

IL_01eb:
	{
		return;
	}
}
// System.Boolean Lidgren.Network.NetReliableSenderChannel::NeedToSendMessages()
extern "C"  bool NetReliableSenderChannel_NeedToSendMessages_m909824567 (NetReliableSenderChannel_t2899775811 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		bool L_0 = NetSenderChannelBase_NeedToSendMessages_m2902542338(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		bool L_1 = __this->get_m_anyStoredResends_5();
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void Lidgren.Network.NetReliableSenderChannel::.ctor(Lidgren.Network.NetConnection,System.Int32)
extern Il2CppClass* NetBitVector_t1774780753_il2cpp_TypeInfo_var;
extern Il2CppClass* NetStoredReliableMessageU5BU5D_t4079791060_il2cpp_TypeInfo_var;
extern Il2CppClass* NetQueue_1_t4233233666_il2cpp_TypeInfo_var;
extern const MethodInfo* NetQueue_1__ctor_m2411511422_MethodInfo_var;
extern const uint32_t NetReliableSenderChannel__ctor_m2647494615_MetadataUsageId;
extern "C"  void NetReliableSenderChannel__ctor_m2647494615 (NetReliableSenderChannel_t2899775811 * __this, NetConnection_t3331492029 * ___connection0, int32_t ___windowSize1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetReliableSenderChannel__ctor_m2647494615_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		NetSenderChannelBase__ctor_m1977648499(__this, /*hidden argument*/NULL);
		NetConnection_t3331492029 * L_0 = ___connection0;
		__this->set_m_connection_1(L_0);
		int32_t L_1 = ___windowSize1;
		__this->set_m_windowSize_3(L_1);
		__this->set_m_windowStart_2(0);
		__this->set_m_sendStart_4(0);
		__this->set_m_anyStoredResends_5((bool)0);
		NetBitVector_t1774780753 * L_2 = (NetBitVector_t1774780753 *)il2cpp_codegen_object_new(NetBitVector_t1774780753_il2cpp_TypeInfo_var);
		NetBitVector__ctor_m1517128273(L_2, ((int32_t)1024), /*hidden argument*/NULL);
		__this->set_m_receivedAcks_6(L_2);
		int32_t L_3 = __this->get_m_windowSize_3();
		__this->set_m_storedMessages_7(((NetStoredReliableMessageU5BU5D_t4079791060*)SZArrayNew(NetStoredReliableMessageU5BU5D_t4079791060_il2cpp_TypeInfo_var, (uint32_t)L_3)));
		NetQueue_1_t4233233666 * L_4 = (NetQueue_1_t4233233666 *)il2cpp_codegen_object_new(NetQueue_1_t4233233666_il2cpp_TypeInfo_var);
		NetQueue_1__ctor_m2411511422(L_4, 8, /*hidden argument*/NetQueue_1__ctor_m2411511422_MethodInfo_var);
		((NetSenderChannelBase_t3096690204 *)__this)->set_m_queuedSends_0(L_4);
		NetConnection_t3331492029 * L_5 = __this->get_m_connection_1();
		NullCheck(L_5);
		double L_6 = NetConnection_GetResendDelay_m601539877(L_5, /*hidden argument*/NULL);
		__this->set_m_resendDelay_8(L_6);
		return;
	}
}
// System.Int32 Lidgren.Network.NetReliableSenderChannel::GetAllowedSends()
extern "C"  int32_t NetReliableSenderChannel_GetAllowedSends_m1553689841 (NetReliableSenderChannel_t2899775811 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->get_m_windowSize_3();
		int32_t L_1 = __this->get_m_sendStart_4();
		int32_t L_2 = __this->get_m_windowStart_2();
		V_0 = ((int32_t)((int32_t)L_0-(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1+(int32_t)((int32_t)1024)))-(int32_t)L_2))%(int32_t)((int32_t)1024)))));
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = __this->get_m_windowSize_3();
		G_B3_0 = ((((int32_t)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0035;
	}

IL_0034:
	{
		G_B3_0 = 0;
	}

IL_0035:
	{
		NetException_Assert_m1426298558(NULL /*static, unused*/, (bool)G_B3_0, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		V_1 = L_6;
		goto IL_0040;
	}

IL_0040:
	{
		int32_t L_7 = V_1;
		return L_7;
	}
}
// System.Void Lidgren.Network.NetReliableSenderChannel::Reset()
extern const MethodInfo* NetQueue_1_Clear_m2534478962_MethodInfo_var;
extern const uint32_t NetReliableSenderChannel_Reset_m2812992339_MetadataUsageId;
extern "C"  void NetReliableSenderChannel_Reset_m2812992339 (NetReliableSenderChannel_t2899775811 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetReliableSenderChannel_Reset_m2812992339_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		NetBitVector_t1774780753 * L_0 = __this->get_m_receivedAcks_6();
		NullCheck(L_0);
		NetBitVector_Clear_m3351354433(L_0, /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_0027;
	}

IL_0011:
	{
		NetStoredReliableMessageU5BU5D_t4079791060* L_1 = __this->get_m_storedMessages_7();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		NetStoredReliableMessage_Reset_m441337071(((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2))), /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		V_0 = ((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_0027:
	{
		int32_t L_4 = V_0;
		NetStoredReliableMessageU5BU5D_t4079791060* L_5 = __this->get_m_storedMessages_7();
		NullCheck(L_5);
		V_1 = (bool)((((int32_t)L_4) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_5)->max_length))))))? 1 : 0);
		bool L_6 = V_1;
		if (L_6)
		{
			goto IL_0011;
		}
	}
	{
		__this->set_m_anyStoredResends_5((bool)0);
		NetQueue_1_t4233233666 * L_7 = ((NetSenderChannelBase_t3096690204 *)__this)->get_m_queuedSends_0();
		NullCheck(L_7);
		NetQueue_1_Clear_m2534478962(L_7, /*hidden argument*/NetQueue_1_Clear_m2534478962_MethodInfo_var);
		__this->set_m_windowStart_2(0);
		__this->set_m_sendStart_4(0);
		return;
	}
}
// Lidgren.Network.NetSendResult Lidgren.Network.NetReliableSenderChannel::Enqueue(Lidgren.Network.NetOutgoingMessage)
extern const MethodInfo* NetQueue_1_Enqueue_m3616763713_MethodInfo_var;
extern const MethodInfo* NetQueue_1_get_Count_m685192943_MethodInfo_var;
extern const uint32_t NetReliableSenderChannel_Enqueue_m2590298439_MetadataUsageId;
extern "C"  int32_t NetReliableSenderChannel_Enqueue_m2590298439 (NetReliableSenderChannel_t2899775811 * __this, NetOutgoingMessage_t2016542980 * ___message0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetReliableSenderChannel_Enqueue_m2590298439_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		NetQueue_1_t4233233666 * L_0 = ((NetSenderChannelBase_t3096690204 *)__this)->get_m_queuedSends_0();
		NetOutgoingMessage_t2016542980 * L_1 = ___message0;
		NullCheck(L_0);
		NetQueue_1_Enqueue_m3616763713(L_0, L_1, /*hidden argument*/NetQueue_1_Enqueue_m3616763713_MethodInfo_var);
		NetConnection_t3331492029 * L_2 = __this->get_m_connection_1();
		NullCheck(L_2);
		NetPeer_t1779390221 * L_3 = L_2->get_m_peer_0();
		NullCheck(L_3);
		L_3->set_m_needFlushSendQueue_20((bool)1);
		NetQueue_1_t4233233666 * L_4 = ((NetSenderChannelBase_t3096690204 *)__this)->get_m_queuedSends_0();
		NullCheck(L_4);
		int32_t L_5 = NetQueue_1_get_Count_m685192943(L_4, /*hidden argument*/NetQueue_1_get_Count_m685192943_MethodInfo_var);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Lidgren.Network.NetSenderChannelBase::GetAllowedSends() */, __this);
		V_1 = (bool)((((int32_t)L_5) > ((int32_t)L_6))? 1 : 0);
		bool L_7 = V_1;
		if (L_7)
		{
			goto IL_003a;
		}
	}
	{
		V_0 = 1;
		goto IL_003e;
	}

IL_003a:
	{
		V_0 = 2;
		goto IL_003e;
	}

IL_003e:
	{
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.Void Lidgren.Network.NetReliableSenderChannel::SendQueuedMessages(System.Double)
extern const MethodInfo* NetQueue_1_TryDequeue_m592441308_MethodInfo_var;
extern const MethodInfo* NetQueue_1_get_Count_m685192943_MethodInfo_var;
extern const uint32_t NetReliableSenderChannel_SendQueuedMessages_m1852233465_MetadataUsageId;
extern "C"  void NetReliableSenderChannel_SendQueuedMessages_m1852233465 (NetReliableSenderChannel_t2899775811 * __this, double ___now0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetReliableSenderChannel_SendQueuedMessages_m1852233465_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	NetStoredReliableMessage_t1576378473  V_1;
	memset(&V_1, 0, sizeof(V_1));
	NetOutgoingMessage_t2016542980 * V_2 = NULL;
	double V_3 = 0.0;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B20_0 = 0;
	{
		__this->set_m_anyStoredResends_5((bool)0);
		V_0 = 0;
		goto IL_00d3;
	}

IL_000f:
	{
		NetStoredReliableMessageU5BU5D_t4079791060* L_0 = __this->get_m_storedMessages_7();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		V_1 = (*(NetStoredReliableMessage_t1576378473 *)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))));
		NetOutgoingMessage_t2016542980 * L_2 = (&V_1)->get_Message_2();
		V_2 = L_2;
		NetOutgoingMessage_t2016542980 * L_3 = V_2;
		V_5 = (bool)((((int32_t)((((Il2CppObject*)(NetOutgoingMessage_t2016542980 *)L_3) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_5;
		if (L_4)
		{
			goto IL_003c;
		}
	}
	{
		goto IL_00cf;
	}

IL_003c:
	{
		__this->set_m_anyStoredResends_5((bool)1);
		double L_5 = (&V_1)->get_LastSent_1();
		V_3 = L_5;
		double L_6 = V_3;
		if ((!(((double)L_6) > ((double)(0.0)))))
		{
			goto IL_0067;
		}
	}
	{
		double L_7 = ___now0;
		double L_8 = V_3;
		double L_9 = __this->get_m_resendDelay_8();
		G_B6_0 = ((((int32_t)((((double)((double)((double)L_7-(double)L_8))) > ((double)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0068;
	}

IL_0067:
	{
		G_B6_0 = 1;
	}

IL_0068:
	{
		V_5 = (bool)G_B6_0;
		bool L_10 = V_5;
		if (L_10)
		{
			goto IL_00ce;
		}
	}
	{
		NetConnection_t3331492029 * L_11 = __this->get_m_connection_1();
		NullCheck(L_11);
		NetConnectionStatistics_t1235765202 * L_12 = L_11->get_m_statistics_14();
		NullCheck(L_12);
		NetConnectionStatistics_MessageResent_m3999886766(L_12, 0, /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_13 = V_2;
		NullCheck(L_13);
		int32_t* L_14 = L_13->get_address_of_m_recyclingCount_7();
		Interlocked_Increment_m129308425(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		NetConnection_t3331492029 * L_15 = __this->get_m_connection_1();
		NetOutgoingMessage_t2016542980 * L_16 = V_2;
		int32_t L_17 = (&V_1)->get_SequenceNumber_3();
		NullCheck(L_15);
		NetConnection_QueueSendMessage_m496824802(L_15, L_16, L_17, /*hidden argument*/NULL);
		NetStoredReliableMessageU5BU5D_t4079791060* L_18 = __this->get_m_storedMessages_7();
		int32_t L_19 = V_0;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		double L_20 = ___now0;
		((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->set_LastSent_1(L_20);
		NetStoredReliableMessageU5BU5D_t4079791060* L_21 = __this->get_m_storedMessages_7();
		int32_t L_22 = V_0;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		NetStoredReliableMessage_t1576378473 * L_23 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)));
		int32_t L_24 = L_23->get_NumSent_0();
		L_23->set_NumSent_0(((int32_t)((int32_t)L_24+(int32_t)1)));
	}

IL_00ce:
	{
	}

IL_00cf:
	{
		int32_t L_25 = V_0;
		V_0 = ((int32_t)((int32_t)L_25+(int32_t)1));
	}

IL_00d3:
	{
		int32_t L_26 = V_0;
		NetStoredReliableMessageU5BU5D_t4079791060* L_27 = __this->get_m_storedMessages_7();
		NullCheck(L_27);
		V_5 = (bool)((((int32_t)L_26) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_27)->max_length))))))? 1 : 0);
		bool L_28 = V_5;
		if (L_28)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_29 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Lidgren.Network.NetSenderChannelBase::GetAllowedSends() */, __this);
		V_4 = L_29;
		int32_t L_30 = V_4;
		V_5 = (bool)((((int32_t)((((int32_t)L_30) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_5;
		if (L_31)
		{
			goto IL_00ff;
		}
	}
	{
		goto IL_0155;
	}

IL_00ff:
	{
		goto IL_0138;
	}

IL_0101:
	{
		NetQueue_1_t4233233666 * L_32 = ((NetSenderChannelBase_t3096690204 *)__this)->get_m_queuedSends_0();
		NullCheck(L_32);
		bool L_33 = NetQueue_1_TryDequeue_m592441308(L_32, (&V_2), /*hidden argument*/NetQueue_1_TryDequeue_m592441308_MethodInfo_var);
		V_5 = (bool)((((int32_t)L_33) == ((int32_t)0))? 1 : 0);
		bool L_34 = V_5;
		if (L_34)
		{
			goto IL_0121;
		}
	}
	{
		double L_35 = ___now0;
		NetOutgoingMessage_t2016542980 * L_36 = V_2;
		NetReliableSenderChannel_ExecuteSend_m2366433064(__this, L_35, L_36, /*hidden argument*/NULL);
	}

IL_0121:
	{
		int32_t L_37 = V_4;
		V_4 = ((int32_t)((int32_t)L_37-(int32_t)1));
		int32_t L_38 = V_4;
		int32_t L_39 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Lidgren.Network.NetSenderChannelBase::GetAllowedSends() */, __this);
		NetException_Assert_m1426298558(NULL /*static, unused*/, (bool)((((int32_t)L_38) == ((int32_t)L_39))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0138:
	{
		int32_t L_40 = V_4;
		if ((((int32_t)L_40) <= ((int32_t)0)))
		{
			goto IL_014d;
		}
	}
	{
		NetQueue_1_t4233233666 * L_41 = ((NetSenderChannelBase_t3096690204 *)__this)->get_m_queuedSends_0();
		NullCheck(L_41);
		int32_t L_42 = NetQueue_1_get_Count_m685192943(L_41, /*hidden argument*/NetQueue_1_get_Count_m685192943_MethodInfo_var);
		G_B20_0 = ((((int32_t)L_42) > ((int32_t)0))? 1 : 0);
		goto IL_014e;
	}

IL_014d:
	{
		G_B20_0 = 0;
	}

IL_014e:
	{
		V_5 = (bool)G_B20_0;
		bool L_43 = V_5;
		if (L_43)
		{
			goto IL_0101;
		}
	}

IL_0155:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetReliableSenderChannel::ExecuteSend(System.Double,Lidgren.Network.NetOutgoingMessage)
extern "C"  void NetReliableSenderChannel_ExecuteSend_m2366433064 (NetReliableSenderChannel_t2899775811 * __this, double ___now0, NetOutgoingMessage_t2016542980 * ___message1, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->get_m_sendStart_4();
		V_0 = L_0;
		int32_t L_1 = __this->get_m_sendStart_4();
		__this->set_m_sendStart_4(((int32_t)((int32_t)((int32_t)((int32_t)L_1+(int32_t)1))%(int32_t)((int32_t)1024))));
		NetOutgoingMessage_t2016542980 * L_2 = ___message1;
		NullCheck(L_2);
		int32_t* L_3 = L_2->get_address_of_m_recyclingCount_7();
		Interlocked_Increment_m129308425(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		NetConnection_t3331492029 * L_4 = __this->get_m_connection_1();
		NetOutgoingMessage_t2016542980 * L_5 = ___message1;
		int32_t L_6 = V_0;
		NullCheck(L_4);
		NetConnection_QueueSendMessage_m496824802(L_4, L_5, L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		int32_t L_8 = __this->get_m_windowSize_3();
		V_1 = ((int32_t)((int32_t)L_7%(int32_t)L_8));
		NetStoredReliableMessageU5BU5D_t4079791060* L_9 = __this->get_m_storedMessages_7();
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		NetOutgoingMessage_t2016542980 * L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->get_Message_2();
		NetException_Assert_m1426298558(NULL /*static, unused*/, (bool)((((Il2CppObject*)(NetOutgoingMessage_t2016542980 *)L_11) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0), /*hidden argument*/NULL);
		NetStoredReliableMessageU5BU5D_t4079791060* L_12 = __this->get_m_storedMessages_7();
		int32_t L_13 = V_1;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		NetStoredReliableMessage_t1576378473 * L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)));
		int32_t L_15 = L_14->get_NumSent_0();
		L_14->set_NumSent_0(((int32_t)((int32_t)L_15+(int32_t)1)));
		NetStoredReliableMessageU5BU5D_t4079791060* L_16 = __this->get_m_storedMessages_7();
		int32_t L_17 = V_1;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		NetOutgoingMessage_t2016542980 * L_18 = ___message1;
		((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->set_Message_2(L_18);
		NetStoredReliableMessageU5BU5D_t4079791060* L_19 = __this->get_m_storedMessages_7();
		int32_t L_20 = V_1;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		double L_21 = ___now0;
		((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->set_LastSent_1(L_21);
		NetStoredReliableMessageU5BU5D_t4079791060* L_22 = __this->get_m_storedMessages_7();
		int32_t L_23 = V_1;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = V_0;
		((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->set_SequenceNumber_3(L_24);
		__this->set_m_anyStoredResends_5((bool)1);
		goto IL_00b1;
	}

IL_00b1:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetReliableSenderChannel::DestoreMessage(System.Double,System.Int32,System.Boolean&)
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppClass* NetTime_t3056501352_il2cpp_TypeInfo_var;
extern Il2CppClass* Double_t4078015681_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* NetException_t2452891498_il2cpp_TypeInfo_var;
extern Il2CppClass* NetStoredReliableMessage_t1576378473_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1578693010;
extern Il2CppCodeGenString* _stringLiteral985107812;
extern Il2CppCodeGenString* _stringLiteral1650627813;
extern Il2CppCodeGenString* _stringLiteral4073575562;
extern const uint32_t NetReliableSenderChannel_DestoreMessage_m167941949_MetadataUsageId;
extern "C"  void NetReliableSenderChannel_DestoreMessage_m167941949 (NetReliableSenderChannel_t2899775811 * __this, double ___now0, int32_t ___storeIndex1, bool* ___resetTimeout2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetReliableSenderChannel_DestoreMessage_m167941949_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	NetStoredReliableMessage_t1576378473  V_0;
	memset(&V_0, 0, sizeof(V_0));
	NetOutgoingMessage_t2016542980 * V_1 = NULL;
	bool V_2 = false;
	ObjectU5BU5D_t3614634134* V_3 = NULL;
	bool* G_B2_0 = NULL;
	bool* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	bool* G_B3_1 = NULL;
	{
		NetStoredReliableMessageU5BU5D_t4079791060* L_0 = __this->get_m_storedMessages_7();
		int32_t L_1 = ___storeIndex1;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		V_0 = (*(NetStoredReliableMessage_t1576378473 *)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))));
		bool* L_2 = ___resetTimeout2;
		int32_t L_3 = (&V_0)->get_NumSent_0();
		G_B1_0 = L_2;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			G_B2_0 = L_2;
			goto IL_0034;
		}
	}
	{
		double L_4 = ___now0;
		double L_5 = (&V_0)->get_LastSent_1();
		G_B3_0 = ((((double)((double)((double)L_4-(double)L_5))) < ((double)(2.0)))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_0035;
	}

IL_0034:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0035:
	{
		*((int8_t*)(G_B3_1)) = (int8_t)G_B3_0;
		NetOutgoingMessage_t2016542980 * L_6 = (&V_0)->get_Message_2();
		V_1 = L_6;
		NetOutgoingMessage_t2016542980 * L_7 = V_1;
		NullCheck(L_7);
		int32_t* L_8 = L_7->get_address_of_m_recyclingCount_7();
		Interlocked_Decrement_m70525859(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_9 = V_1;
		V_2 = (bool)((((int32_t)((((Il2CppObject*)(NetOutgoingMessage_t2016542980 *)L_9) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (L_10)
		{
			goto IL_00ca;
		}
	}
	{
		V_3 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)7));
		ObjectU5BU5D_t3614634134* L_11 = V_3;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, _stringLiteral1578693010);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral1578693010);
		ObjectU5BU5D_t3614634134* L_12 = V_3;
		int32_t L_13 = ___storeIndex1;
		int32_t L_14 = L_13;
		Il2CppObject * L_15 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 1);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_15);
		ObjectU5BU5D_t3614634134* L_16 = V_3;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 2);
		ArrayElementTypeCheck (L_16, _stringLiteral985107812);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral985107812);
		ObjectU5BU5D_t3614634134* L_17 = V_3;
		NetStoredReliableMessageU5BU5D_t4079791060* L_18 = __this->get_m_storedMessages_7();
		int32_t L_19 = ___storeIndex1;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->get_NumSent_0();
		int32_t L_21 = L_20;
		Il2CppObject * L_22 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 3);
		ArrayElementTypeCheck (L_17, L_22);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_22);
		ObjectU5BU5D_t3614634134* L_23 = V_3;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, 4);
		ArrayElementTypeCheck (L_23, _stringLiteral1650627813);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(4), (Il2CppObject *)_stringLiteral1650627813);
		ObjectU5BU5D_t3614634134* L_24 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(NetTime_t3056501352_il2cpp_TypeInfo_var);
		double L_25 = NetTime_get_Now_m1609702533(NULL /*static, unused*/, /*hidden argument*/NULL);
		NetStoredReliableMessageU5BU5D_t4079791060* L_26 = __this->get_m_storedMessages_7();
		int32_t L_27 = ___storeIndex1;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		double L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->get_LastSent_1();
		double L_29 = ((double)((double)L_25-(double)L_28));
		Il2CppObject * L_30 = Box(Double_t4078015681_il2cpp_TypeInfo_var, &L_29);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 5);
		ArrayElementTypeCheck (L_24, L_30);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(5), (Il2CppObject *)L_30);
		ObjectU5BU5D_t3614634134* L_31 = V_3;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 6);
		ArrayElementTypeCheck (L_31, _stringLiteral4073575562);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(6), (Il2CppObject *)_stringLiteral4073575562);
		ObjectU5BU5D_t3614634134* L_32 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_33 = String_Concat_m3881798623(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		NetException_t2452891498 * L_34 = (NetException_t2452891498 *)il2cpp_codegen_object_new(NetException_t2452891498_il2cpp_TypeInfo_var);
		NetException__ctor_m2724322251(L_34, L_33, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34);
	}

IL_00ca:
	{
		NetOutgoingMessage_t2016542980 * L_35 = V_1;
		NullCheck(L_35);
		int32_t L_36 = L_35->get_m_recyclingCount_7();
		V_2 = (bool)((((int32_t)L_36) > ((int32_t)0))? 1 : 0);
		bool L_37 = V_2;
		if (L_37)
		{
			goto IL_00e9;
		}
	}
	{
		NetConnection_t3331492029 * L_38 = __this->get_m_connection_1();
		NullCheck(L_38);
		NetPeer_t1779390221 * L_39 = L_38->get_m_peer_0();
		NetOutgoingMessage_t2016542980 * L_40 = V_1;
		NullCheck(L_39);
		NetPeer_Recycle_m2290156780(L_39, L_40, /*hidden argument*/NULL);
	}

IL_00e9:
	{
		NetStoredReliableMessageU5BU5D_t4079791060* L_41 = __this->get_m_storedMessages_7();
		int32_t L_42 = ___storeIndex1;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, L_42);
		Initobj (NetStoredReliableMessage_t1576378473_il2cpp_TypeInfo_var, ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42))));
		return;
	}
}
// System.Void Lidgren.Network.NetReliableSenderChannel::ReceiveAcknowledge(System.Double,System.Int32)
extern Il2CppClass* NetUtility_t3562260209_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1809452803;
extern const uint32_t NetReliableSenderChannel_ReceiveAcknowledge_m3155274464_MetadataUsageId;
extern "C"  void NetReliableSenderChannel_ReceiveAcknowledge_m3155274464 (NetReliableSenderChannel_t2899775811 * __this, double ___now0, int32_t ___seqNr1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetReliableSenderChannel_ReceiveAcknowledge_m3155274464_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	NetOutgoingMessage_t2016542980 * V_6 = NULL;
	bool V_7 = false;
	{
		int32_t L_0 = ___seqNr1;
		int32_t L_1 = __this->get_m_windowStart_2();
		IL2CPP_RUNTIME_CLASS_INIT(NetUtility_t3562260209_il2cpp_TypeInfo_var);
		int32_t L_2 = NetUtility_RelativeSequenceNumber_m1713083748(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		V_7 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_7;
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_02ca;
	}

IL_0021:
	{
		int32_t L_5 = V_0;
		V_7 = (bool)((((int32_t)((((int32_t)L_5) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_7;
		if (L_6)
		{
			goto IL_0121;
		}
	}
	{
		int32_t L_7 = ___seqNr1;
		int32_t L_8 = __this->get_m_windowStart_2();
		NetException_Assert_m1426298558(NULL /*static, unused*/, (bool)((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0), /*hidden argument*/NULL);
		NetBitVector_t1774780753 * L_9 = __this->get_m_receivedAcks_6();
		int32_t L_10 = __this->get_m_windowStart_2();
		NullCheck(L_9);
		NetBitVector_set_Bit_m3149930918(L_9, L_10, (bool)0, /*hidden argument*/NULL);
		double L_11 = ___now0;
		int32_t L_12 = __this->get_m_windowStart_2();
		int32_t L_13 = __this->get_m_windowSize_3();
		NetReliableSenderChannel_DestoreMessage_m167941949(__this, L_11, ((int32_t)((int32_t)L_12%(int32_t)L_13)), (&V_1), /*hidden argument*/NULL);
		int32_t L_14 = __this->get_m_windowStart_2();
		__this->set_m_windowStart_2(((int32_t)((int32_t)((int32_t)((int32_t)L_14+(int32_t)1))%(int32_t)((int32_t)1024))));
		goto IL_00eb;
	}

IL_0081:
	{
		NetBitVector_t1774780753 * L_15 = __this->get_m_receivedAcks_6();
		int32_t L_16 = __this->get_m_windowStart_2();
		NullCheck(L_15);
		NetBitVector_set_Bit_m3149930918(L_15, L_16, (bool)0, /*hidden argument*/NULL);
		double L_17 = ___now0;
		int32_t L_18 = __this->get_m_windowStart_2();
		int32_t L_19 = __this->get_m_windowSize_3();
		NetReliableSenderChannel_DestoreMessage_m167941949(__this, L_17, ((int32_t)((int32_t)L_18%(int32_t)L_19)), (&V_2), /*hidden argument*/NULL);
		bool L_20 = V_1;
		bool L_21 = V_2;
		V_1 = (bool)((int32_t)((int32_t)L_20|(int32_t)L_21));
		NetStoredReliableMessageU5BU5D_t4079791060* L_22 = __this->get_m_storedMessages_7();
		int32_t L_23 = __this->get_m_windowStart_2();
		int32_t L_24 = __this->get_m_windowSize_3();
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, ((int32_t)((int32_t)L_23%(int32_t)L_24)));
		NetOutgoingMessage_t2016542980 * L_25 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_23%(int32_t)L_24)))))->get_Message_2();
		NetException_Assert_m1426298558(NULL /*static, unused*/, (bool)((((Il2CppObject*)(NetOutgoingMessage_t2016542980 *)L_25) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0), /*hidden argument*/NULL);
		int32_t L_26 = __this->get_m_windowStart_2();
		__this->set_m_windowStart_2(((int32_t)((int32_t)((int32_t)((int32_t)L_26+(int32_t)1))%(int32_t)((int32_t)1024))));
	}

IL_00eb:
	{
		NetBitVector_t1774780753 * L_27 = __this->get_m_receivedAcks_6();
		int32_t L_28 = __this->get_m_windowStart_2();
		NullCheck(L_27);
		bool L_29 = NetBitVector_Get_m2410185427(L_27, L_28, /*hidden argument*/NULL);
		V_7 = L_29;
		bool L_30 = V_7;
		if (L_30)
		{
			goto IL_0081;
		}
	}
	{
		bool L_31 = V_1;
		V_7 = (bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_7;
		if (L_32)
		{
			goto IL_011c;
		}
	}
	{
		NetConnection_t3331492029 * L_33 = __this->get_m_connection_1();
		double L_34 = ___now0;
		NullCheck(L_33);
		NetConnection_ResetTimeout_m3986183602(L_33, L_34, /*hidden argument*/NULL);
	}

IL_011c:
	{
		goto IL_02ca;
	}

IL_0121:
	{
		int32_t L_35 = ___seqNr1;
		int32_t L_36 = __this->get_m_sendStart_4();
		IL2CPP_RUNTIME_CLASS_INIT(NetUtility_t3562260209_il2cpp_TypeInfo_var);
		int32_t L_37 = NetUtility_RelativeSequenceNumber_m1713083748(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		V_3 = L_37;
		int32_t L_38 = V_3;
		V_7 = (bool)((((int32_t)L_38) > ((int32_t)0))? 1 : 0);
		bool L_39 = V_7;
		if (L_39)
		{
			goto IL_0165;
		}
	}
	{
		NetBitVector_t1774780753 * L_40 = __this->get_m_receivedAcks_6();
		int32_t L_41 = ___seqNr1;
		NullCheck(L_40);
		bool L_42 = NetBitVector_get_Bit_m3575907859(L_40, L_41, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)L_42) == ((int32_t)0))? 1 : 0);
		bool L_43 = V_7;
		if (L_43)
		{
			goto IL_0152;
		}
	}
	{
		goto IL_0162;
	}

IL_0152:
	{
		NetBitVector_t1774780753 * L_44 = __this->get_m_receivedAcks_6();
		int32_t L_45 = ___seqNr1;
		NullCheck(L_44);
		NetBitVector_set_Bit_m3149930918(L_44, L_45, (bool)1, /*hidden argument*/NULL);
	}

IL_0162:
	{
		goto IL_0184;
	}

IL_0165:
	{
		int32_t L_46 = V_3;
		V_7 = (bool)((((int32_t)((((int32_t)L_46) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_47 = V_7;
		if (L_47)
		{
			goto IL_0184;
		}
	}
	{
		NetException_Assert_m1067120882(NULL /*static, unused*/, (bool)0, _stringLiteral1809452803, /*hidden argument*/NULL);
		goto IL_02ca;
	}

IL_0184:
	{
		int32_t L_48 = ___seqNr1;
		V_4 = L_48;
	}

IL_0187:
	{
		int32_t L_49 = V_4;
		V_4 = ((int32_t)((int32_t)L_49-(int32_t)1));
		int32_t L_50 = V_4;
		V_7 = (bool)((((int32_t)((((int32_t)L_50) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_51 = V_7;
		if (L_51)
		{
			goto IL_01a3;
		}
	}
	{
		V_4 = ((int32_t)1023);
	}

IL_01a3:
	{
		NetBitVector_t1774780753 * L_52 = __this->get_m_receivedAcks_6();
		int32_t L_53 = V_4;
		NullCheck(L_52);
		bool L_54 = NetBitVector_get_Bit_m3575907859(L_52, L_53, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)L_54) == ((int32_t)0))? 1 : 0);
		bool L_55 = V_7;
		if (L_55)
		{
			goto IL_01c0;
		}
	}
	{
		goto IL_02b3;
	}

IL_01c0:
	{
		int32_t L_56 = V_4;
		int32_t L_57 = __this->get_m_windowSize_3();
		V_5 = ((int32_t)((int32_t)L_56%(int32_t)L_57));
		NetStoredReliableMessageU5BU5D_t4079791060* L_58 = __this->get_m_storedMessages_7();
		int32_t L_59 = V_5;
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, L_59);
		NetOutgoingMessage_t2016542980 * L_60 = ((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->get_Message_2();
		NetException_Assert_m1426298558(NULL /*static, unused*/, (bool)((((int32_t)((((Il2CppObject*)(NetOutgoingMessage_t2016542980 *)L_60) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		NetStoredReliableMessageU5BU5D_t4079791060* L_61 = __this->get_m_storedMessages_7();
		int32_t L_62 = V_5;
		NullCheck(L_61);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_61, L_62);
		int32_t L_63 = ((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->get_NumSent_0();
		V_7 = (bool)((((int32_t)((((int32_t)L_63) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_64 = V_7;
		if (L_64)
		{
			goto IL_02b2;
		}
	}
	{
		NetStoredReliableMessageU5BU5D_t4079791060* L_65 = __this->get_m_storedMessages_7();
		int32_t L_66 = V_5;
		NullCheck(L_65);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_65, L_66);
		NetOutgoingMessage_t2016542980 * L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->get_Message_2();
		V_6 = L_67;
		double L_68 = ___now0;
		NetStoredReliableMessageU5BU5D_t4079791060* L_69 = __this->get_m_storedMessages_7();
		int32_t L_70 = V_5;
		NullCheck(L_69);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_69, L_70);
		double L_71 = ((L_69)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_70)))->get_LastSent_1();
		double L_72 = __this->get_m_resendDelay_8();
		V_7 = (bool)((((int32_t)((((double)((double)((double)L_68-(double)L_71))) < ((double)((double)((double)L_72*(double)(0.35)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_73 = V_7;
		if (L_73)
		{
			goto IL_0253;
		}
	}
	{
		goto IL_02b1;
	}

IL_0253:
	{
		NetStoredReliableMessageU5BU5D_t4079791060* L_74 = __this->get_m_storedMessages_7();
		int32_t L_75 = V_5;
		NullCheck(L_74);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_74, L_75);
		double L_76 = ___now0;
		((L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_75)))->set_LastSent_1(L_76);
		NetStoredReliableMessageU5BU5D_t4079791060* L_77 = __this->get_m_storedMessages_7();
		int32_t L_78 = V_5;
		NullCheck(L_77);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_77, L_78);
		NetStoredReliableMessage_t1576378473 * L_79 = ((L_77)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_78)));
		int32_t L_80 = L_79->get_NumSent_0();
		L_79->set_NumSent_0(((int32_t)((int32_t)L_80+(int32_t)1)));
		NetConnection_t3331492029 * L_81 = __this->get_m_connection_1();
		NullCheck(L_81);
		NetConnectionStatistics_t1235765202 * L_82 = L_81->get_m_statistics_14();
		NullCheck(L_82);
		NetConnectionStatistics_MessageResent_m3999886766(L_82, 1, /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_83 = V_6;
		NullCheck(L_83);
		int32_t* L_84 = L_83->get_address_of_m_recyclingCount_7();
		Interlocked_Increment_m129308425(NULL /*static, unused*/, L_84, /*hidden argument*/NULL);
		NetConnection_t3331492029 * L_85 = __this->get_m_connection_1();
		NetOutgoingMessage_t2016542980 * L_86 = V_6;
		int32_t L_87 = V_4;
		NullCheck(L_85);
		NetConnection_QueueSendMessage_m496824802(L_85, L_86, L_87, /*hidden argument*/NULL);
	}

IL_02b1:
	{
	}

IL_02b2:
	{
	}

IL_02b3:
	{
		int32_t L_88 = V_4;
		int32_t L_89 = __this->get_m_windowStart_2();
		V_7 = (bool)((((int32_t)((((int32_t)L_88) == ((int32_t)L_89))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_90 = V_7;
		if (L_90)
		{
			goto IL_0187;
		}
	}

IL_02ca:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetReliableSequencedReceiver::.ctor(Lidgren.Network.NetConnection,System.Int32)
extern "C"  void NetReliableSequencedReceiver__ctor_m408695305 (NetReliableSequencedReceiver_t2385271929 * __this, NetConnection_t3331492029 * ___connection0, int32_t ___windowSize1, const MethodInfo* method)
{
	{
		NetConnection_t3331492029 * L_0 = ___connection0;
		NetReceiverChannelBase__ctor_m892231457(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___windowSize1;
		__this->set_m_windowSize_3(L_1);
		return;
	}
}
// System.Void Lidgren.Network.NetReliableSequencedReceiver::AdvanceWindow()
extern "C"  void NetReliableSequencedReceiver_AdvanceWindow_m2796465932 (NetReliableSequencedReceiver_t2385271929 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_m_windowStart_2();
		__this->set_m_windowStart_2(((int32_t)((int32_t)((int32_t)((int32_t)L_0+(int32_t)1))%(int32_t)((int32_t)1024))));
		return;
	}
}
// System.Void Lidgren.Network.NetReliableSequencedReceiver::ReceiveMessage(Lidgren.Network.NetIncomingMessage)
extern Il2CppClass* NetUtility_t3562260209_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2279591503;
extern Il2CppCodeGenString* _stringLiteral3496729934;
extern Il2CppCodeGenString* _stringLiteral1174327339;
extern Il2CppCodeGenString* _stringLiteral1925410982;
extern const uint32_t NetReliableSequencedReceiver_ReceiveMessage_m2961521515_MetadataUsageId;
extern "C"  void NetReliableSequencedReceiver_ReceiveMessage_m2961521515 (NetReliableSequencedReceiver_t2385271929 * __this, NetIncomingMessage_t2014089816 * ___message0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetReliableSequencedReceiver_ReceiveMessage_m2961521515_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	ObjectU5BU5D_t3614634134* V_3 = NULL;
	{
		NetIncomingMessage_t2014089816 * L_0 = ___message0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_m_sequenceNumber_8();
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->get_m_windowStart_2();
		IL2CPP_RUNTIME_CLASS_INIT(NetUtility_t3562260209_il2cpp_TypeInfo_var);
		int32_t L_4 = NetUtility_RelativeSequenceNumber_m1713083748(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		NetConnection_t3331492029 * L_5 = ((NetReceiverChannelBase_t908288882 *)__this)->get_m_connection_1();
		NetIncomingMessage_t2014089816 * L_6 = ___message0;
		NullCheck(L_6);
		uint8_t L_7 = L_6->get_m_receivedMessageType_9();
		int32_t L_8 = V_0;
		NullCheck(L_5);
		NetConnection_QueueAck_m3101883724(L_5, L_7, L_8, /*hidden argument*/NULL);
		int32_t L_9 = V_1;
		V_2 = (bool)((((int32_t)((((int32_t)L_9) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (L_10)
		{
			goto IL_004d;
		}
	}
	{
		NetReliableSequencedReceiver_AdvanceWindow_m2796465932(__this, /*hidden argument*/NULL);
		NetPeer_t1779390221 * L_11 = ((NetReceiverChannelBase_t908288882 *)__this)->get_m_peer_0();
		NetIncomingMessage_t2014089816 * L_12 = ___message0;
		NullCheck(L_11);
		NetPeer_ReleaseMessage_m3520648965(L_11, L_12, /*hidden argument*/NULL);
		goto IL_0117;
	}

IL_004d:
	{
		int32_t L_13 = V_1;
		V_2 = (bool)((((int32_t)((((int32_t)L_13) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_2;
		if (L_14)
		{
			goto IL_0095;
		}
	}
	{
		NetConnection_t3331492029 * L_15 = ((NetReceiverChannelBase_t908288882 *)__this)->get_m_connection_1();
		NullCheck(L_15);
		NetConnectionStatistics_t1235765202 * L_16 = L_15->get_m_statistics_14();
		NullCheck(L_16);
		NetConnectionStatistics_MessageDropped_m4117327218(L_16, /*hidden argument*/NULL);
		NetPeer_t1779390221 * L_17 = ((NetReceiverChannelBase_t908288882 *)__this)->get_m_peer_0();
		NetIncomingMessage_t2014089816 * L_18 = ___message0;
		NullCheck(L_18);
		int32_t L_19 = L_18->get_m_sequenceNumber_8();
		int32_t L_20 = L_19;
		Il2CppObject * L_21 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_20);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m2000667605(NULL /*static, unused*/, _stringLiteral2279591503, L_21, _stringLiteral3496729934, /*hidden argument*/NULL);
		NullCheck(L_17);
		NetPeer_LogVerbose_m3434660420(L_17, L_22, /*hidden argument*/NULL);
		goto IL_0117;
	}

IL_0095:
	{
		int32_t L_23 = V_1;
		int32_t L_24 = __this->get_m_windowSize_3();
		V_2 = (bool)((((int32_t)((((int32_t)L_23) > ((int32_t)L_24))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_2;
		if (L_25)
		{
			goto IL_00f4;
		}
	}
	{
		NetConnection_t3331492029 * L_26 = ((NetReceiverChannelBase_t908288882 *)__this)->get_m_connection_1();
		NullCheck(L_26);
		NetConnectionStatistics_t1235765202 * L_27 = L_26->get_m_statistics_14();
		NullCheck(L_27);
		NetConnectionStatistics_MessageDropped_m4117327218(L_27, /*hidden argument*/NULL);
		NetPeer_t1779390221 * L_28 = ((NetReceiverChannelBase_t908288882 *)__this)->get_m_peer_0();
		V_3 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)4));
		ObjectU5BU5D_t3614634134* L_29 = V_3;
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, 0);
		ArrayElementTypeCheck (L_29, _stringLiteral1174327339);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral1174327339);
		ObjectU5BU5D_t3614634134* L_30 = V_3;
		NetIncomingMessage_t2014089816 * L_31 = ___message0;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, 1);
		ArrayElementTypeCheck (L_30, L_31);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_31);
		ObjectU5BU5D_t3614634134* L_32 = V_3;
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 2);
		ArrayElementTypeCheck (L_32, _stringLiteral1925410982);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral1925410982);
		ObjectU5BU5D_t3614634134* L_33 = V_3;
		int32_t L_34 = __this->get_m_windowStart_2();
		int32_t L_35 = L_34;
		Il2CppObject * L_36 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_35);
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, 3);
		ArrayElementTypeCheck (L_33, L_36);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_36);
		ObjectU5BU5D_t3614634134* L_37 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_38 = String_Concat_m3881798623(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
		NullCheck(L_28);
		NetPeer_LogDebug_m2983960595(L_28, L_38, /*hidden argument*/NULL);
		goto IL_0117;
	}

IL_00f4:
	{
		int32_t L_39 = __this->get_m_windowStart_2();
		int32_t L_40 = V_1;
		__this->set_m_windowStart_2(((int32_t)((int32_t)((int32_t)((int32_t)L_39+(int32_t)L_40))%(int32_t)((int32_t)1024))));
		NetPeer_t1779390221 * L_41 = ((NetReceiverChannelBase_t908288882 *)__this)->get_m_peer_0();
		NetIncomingMessage_t2014089816 * L_42 = ___message0;
		NullCheck(L_41);
		NetPeer_ReleaseMessage_m3520648965(L_41, L_42, /*hidden argument*/NULL);
		goto IL_0117;
	}

IL_0117:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetReliableUnorderedReceiver::.ctor(Lidgren.Network.NetConnection,System.Int32)
extern Il2CppClass* NetBitVector_t1774780753_il2cpp_TypeInfo_var;
extern const uint32_t NetReliableUnorderedReceiver__ctor_m1507047812_MetadataUsageId;
extern "C"  void NetReliableUnorderedReceiver__ctor_m1507047812 (NetReliableUnorderedReceiver_t3992686328 * __this, NetConnection_t3331492029 * ___connection0, int32_t ___windowSize1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetReliableUnorderedReceiver__ctor_m1507047812_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		NetConnection_t3331492029 * L_0 = ___connection0;
		NetReceiverChannelBase__ctor_m892231457(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___windowSize1;
		__this->set_m_windowSize_3(L_1);
		int32_t L_2 = ___windowSize1;
		NetBitVector_t1774780753 * L_3 = (NetBitVector_t1774780753 *)il2cpp_codegen_object_new(NetBitVector_t1774780753_il2cpp_TypeInfo_var);
		NetBitVector__ctor_m1517128273(L_3, L_2, /*hidden argument*/NULL);
		__this->set_m_earlyReceived_4(L_3);
		return;
	}
}
// System.Void Lidgren.Network.NetReliableUnorderedReceiver::AdvanceWindow()
extern "C"  void NetReliableUnorderedReceiver_AdvanceWindow_m832664157 (NetReliableUnorderedReceiver_t3992686328 * __this, const MethodInfo* method)
{
	{
		NetBitVector_t1774780753 * L_0 = __this->get_m_earlyReceived_4();
		int32_t L_1 = __this->get_m_windowStart_2();
		int32_t L_2 = __this->get_m_windowSize_3();
		NullCheck(L_0);
		NetBitVector_Set_m2669921130(L_0, ((int32_t)((int32_t)L_1%(int32_t)L_2)), (bool)0, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_m_windowStart_2();
		__this->set_m_windowStart_2(((int32_t)((int32_t)((int32_t)((int32_t)L_3+(int32_t)1))%(int32_t)((int32_t)1024))));
		return;
	}
}
// System.Void Lidgren.Network.NetReliableUnorderedReceiver::ReceiveMessage(Lidgren.Network.NetIncomingMessage)
extern Il2CppClass* NetUtility_t3562260209_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2279591503;
extern Il2CppCodeGenString* _stringLiteral2486397350;
extern Il2CppCodeGenString* _stringLiteral1174327339;
extern Il2CppCodeGenString* _stringLiteral1925410982;
extern const uint32_t NetReliableUnorderedReceiver_ReceiveMessage_m3956639720_MetadataUsageId;
extern "C"  void NetReliableUnorderedReceiver_ReceiveMessage_m3956639720 (NetReliableUnorderedReceiver_t3992686328 * __this, NetIncomingMessage_t2014089816 * ___message0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetReliableUnorderedReceiver_ReceiveMessage_m3956639720_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	ObjectU5BU5D_t3614634134* V_3 = NULL;
	{
		NetIncomingMessage_t2014089816 * L_0 = ___message0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_m_sequenceNumber_8();
		int32_t L_2 = __this->get_m_windowStart_2();
		IL2CPP_RUNTIME_CLASS_INIT(NetUtility_t3562260209_il2cpp_TypeInfo_var);
		int32_t L_3 = NetUtility_RelativeSequenceNumber_m1713083748(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		NetConnection_t3331492029 * L_4 = ((NetReceiverChannelBase_t908288882 *)__this)->get_m_connection_1();
		NetIncomingMessage_t2014089816 * L_5 = ___message0;
		NullCheck(L_5);
		uint8_t L_6 = L_5->get_m_receivedMessageType_9();
		NetIncomingMessage_t2014089816 * L_7 = ___message0;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_m_sequenceNumber_8();
		NullCheck(L_4);
		NetConnection_QueueAck_m3101883724(L_4, L_6, L_8, /*hidden argument*/NULL);
		int32_t L_9 = V_0;
		V_2 = (bool)((((int32_t)((((int32_t)L_9) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (L_10)
		{
			goto IL_0085;
		}
	}
	{
		NetReliableUnorderedReceiver_AdvanceWindow_m832664157(__this, /*hidden argument*/NULL);
		NetPeer_t1779390221 * L_11 = ((NetReceiverChannelBase_t908288882 *)__this)->get_m_peer_0();
		NetIncomingMessage_t2014089816 * L_12 = ___message0;
		NullCheck(L_11);
		NetPeer_ReleaseMessage_m3520648965(L_11, L_12, /*hidden argument*/NULL);
		NetIncomingMessage_t2014089816 * L_13 = ___message0;
		NullCheck(L_13);
		int32_t L_14 = L_13->get_m_sequenceNumber_8();
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_14+(int32_t)1))%(int32_t)((int32_t)1024)));
		goto IL_0069;
	}

IL_005c:
	{
		NetReliableUnorderedReceiver_AdvanceWindow_m832664157(__this, /*hidden argument*/NULL);
		int32_t L_15 = V_1;
		V_1 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0069:
	{
		NetBitVector_t1774780753 * L_16 = __this->get_m_earlyReceived_4();
		int32_t L_17 = V_1;
		int32_t L_18 = __this->get_m_windowSize_3();
		NullCheck(L_16);
		bool L_19 = NetBitVector_get_Bit_m3575907859(L_16, ((int32_t)((int32_t)L_17%(int32_t)L_18)), /*hidden argument*/NULL);
		V_2 = L_19;
		bool L_20 = V_2;
		if (L_20)
		{
			goto IL_005c;
		}
	}
	{
		goto IL_01af;
	}

IL_0085:
	{
		int32_t L_21 = V_0;
		V_2 = (bool)((((int32_t)((((int32_t)L_21) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_2;
		if (L_22)
		{
			goto IL_00cd;
		}
	}
	{
		NetConnection_t3331492029 * L_23 = ((NetReceiverChannelBase_t908288882 *)__this)->get_m_connection_1();
		NullCheck(L_23);
		NetConnectionStatistics_t1235765202 * L_24 = L_23->get_m_statistics_14();
		NullCheck(L_24);
		NetConnectionStatistics_MessageDropped_m4117327218(L_24, /*hidden argument*/NULL);
		NetPeer_t1779390221 * L_25 = ((NetReceiverChannelBase_t908288882 *)__this)->get_m_peer_0();
		NetIncomingMessage_t2014089816 * L_26 = ___message0;
		NullCheck(L_26);
		int32_t L_27 = L_26->get_m_sequenceNumber_8();
		int32_t L_28 = L_27;
		Il2CppObject * L_29 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_28);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_30 = String_Concat_m2000667605(NULL /*static, unused*/, _stringLiteral2279591503, L_29, _stringLiteral2486397350, /*hidden argument*/NULL);
		NullCheck(L_25);
		NetPeer_LogVerbose_m3434660420(L_25, L_30, /*hidden argument*/NULL);
		goto IL_01af;
	}

IL_00cd:
	{
		int32_t L_31 = V_0;
		int32_t L_32 = __this->get_m_windowSize_3();
		V_2 = (bool)((((int32_t)((((int32_t)L_31) > ((int32_t)L_32))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_33 = V_2;
		if (L_33)
		{
			goto IL_012f;
		}
	}
	{
		NetConnection_t3331492029 * L_34 = ((NetReceiverChannelBase_t908288882 *)__this)->get_m_connection_1();
		NullCheck(L_34);
		NetConnectionStatistics_t1235765202 * L_35 = L_34->get_m_statistics_14();
		NullCheck(L_35);
		NetConnectionStatistics_MessageDropped_m4117327218(L_35, /*hidden argument*/NULL);
		NetPeer_t1779390221 * L_36 = ((NetReceiverChannelBase_t908288882 *)__this)->get_m_peer_0();
		V_3 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)4));
		ObjectU5BU5D_t3614634134* L_37 = V_3;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, 0);
		ArrayElementTypeCheck (L_37, _stringLiteral1174327339);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral1174327339);
		ObjectU5BU5D_t3614634134* L_38 = V_3;
		NetIncomingMessage_t2014089816 * L_39 = ___message0;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, 1);
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_39);
		ObjectU5BU5D_t3614634134* L_40 = V_3;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, 2);
		ArrayElementTypeCheck (L_40, _stringLiteral1925410982);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral1925410982);
		ObjectU5BU5D_t3614634134* L_41 = V_3;
		int32_t L_42 = __this->get_m_windowStart_2();
		int32_t L_43 = L_42;
		Il2CppObject * L_44 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_43);
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, 3);
		ArrayElementTypeCheck (L_41, L_44);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_44);
		ObjectU5BU5D_t3614634134* L_45 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_46 = String_Concat_m3881798623(NULL /*static, unused*/, L_45, /*hidden argument*/NULL);
		NullCheck(L_36);
		NetPeer_LogDebug_m2983960595(L_36, L_46, /*hidden argument*/NULL);
		goto IL_01af;
	}

IL_012f:
	{
		NetBitVector_t1774780753 * L_47 = __this->get_m_earlyReceived_4();
		NetIncomingMessage_t2014089816 * L_48 = ___message0;
		NullCheck(L_48);
		int32_t L_49 = L_48->get_m_sequenceNumber_8();
		int32_t L_50 = __this->get_m_windowSize_3();
		NullCheck(L_47);
		bool L_51 = NetBitVector_Get_m2410185427(L_47, ((int32_t)((int32_t)L_49%(int32_t)L_50)), /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_51) == ((int32_t)0))? 1 : 0);
		bool L_52 = V_2;
		if (L_52)
		{
			goto IL_0188;
		}
	}
	{
		NetConnection_t3331492029 * L_53 = ((NetReceiverChannelBase_t908288882 *)__this)->get_m_connection_1();
		NullCheck(L_53);
		NetConnectionStatistics_t1235765202 * L_54 = L_53->get_m_statistics_14();
		NullCheck(L_54);
		NetConnectionStatistics_MessageDropped_m4117327218(L_54, /*hidden argument*/NULL);
		NetPeer_t1779390221 * L_55 = ((NetReceiverChannelBase_t908288882 *)__this)->get_m_peer_0();
		NetIncomingMessage_t2014089816 * L_56 = ___message0;
		NullCheck(L_56);
		int32_t L_57 = L_56->get_m_sequenceNumber_8();
		int32_t L_58 = L_57;
		Il2CppObject * L_59 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_58);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_60 = String_Concat_m2000667605(NULL /*static, unused*/, _stringLiteral2279591503, L_59, _stringLiteral2486397350, /*hidden argument*/NULL);
		NullCheck(L_55);
		NetPeer_LogVerbose_m3434660420(L_55, L_60, /*hidden argument*/NULL);
		goto IL_01af;
	}

IL_0188:
	{
		NetBitVector_t1774780753 * L_61 = __this->get_m_earlyReceived_4();
		NetIncomingMessage_t2014089816 * L_62 = ___message0;
		NullCheck(L_62);
		int32_t L_63 = L_62->get_m_sequenceNumber_8();
		int32_t L_64 = __this->get_m_windowSize_3();
		NullCheck(L_61);
		NetBitVector_Set_m2669921130(L_61, ((int32_t)((int32_t)L_63%(int32_t)L_64)), (bool)1, /*hidden argument*/NULL);
		NetPeer_t1779390221 * L_65 = ((NetReceiverChannelBase_t908288882 *)__this)->get_m_peer_0();
		NetIncomingMessage_t2014089816 * L_66 = ___message0;
		NullCheck(L_65);
		NetPeer_ReleaseMessage_m3520648965(L_65, L_66, /*hidden argument*/NULL);
	}

IL_01af:
	{
		return;
	}
}
// System.Int32 Lidgren.Network.NetSenderChannelBase::get_QueuedSendsCount()
extern const MethodInfo* NetQueue_1_get_Count_m685192943_MethodInfo_var;
extern const uint32_t NetSenderChannelBase_get_QueuedSendsCount_m1530659097_MetadataUsageId;
extern "C"  int32_t NetSenderChannelBase_get_QueuedSendsCount_m1530659097 (NetSenderChannelBase_t3096690204 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetSenderChannelBase_get_QueuedSendsCount_m1530659097_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		NetQueue_1_t4233233666 * L_0 = __this->get_m_queuedSends_0();
		NullCheck(L_0);
		int32_t L_1 = NetQueue_1_get_Count_m685192943(L_0, /*hidden argument*/NetQueue_1_get_Count_m685192943_MethodInfo_var);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Lidgren.Network.NetSenderChannelBase::NeedToSendMessages()
extern const MethodInfo* NetQueue_1_get_Count_m685192943_MethodInfo_var;
extern const uint32_t NetSenderChannelBase_NeedToSendMessages_m2902542338_MetadataUsageId;
extern "C"  bool NetSenderChannelBase_NeedToSendMessages_m2902542338 (NetSenderChannelBase_t3096690204 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetSenderChannelBase_NeedToSendMessages_m2902542338_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		NetQueue_1_t4233233666 * L_0 = __this->get_m_queuedSends_0();
		NullCheck(L_0);
		int32_t L_1 = NetQueue_1_get_Count_m685192943(L_0, /*hidden argument*/NetQueue_1_get_Count_m685192943_MethodInfo_var);
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void Lidgren.Network.NetSenderChannelBase::.ctor()
extern "C"  void NetSenderChannelBase__ctor_m1977648499 (NetSenderChannelBase_t3096690204 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Lidgren.Network.NetStoredReliableMessage::Reset()
extern "C"  void NetStoredReliableMessage_Reset_m441337071 (NetStoredReliableMessage_t1576378473 * __this, const MethodInfo* method)
{
	{
		__this->set_NumSent_0(0);
		__this->set_LastSent_1((0.0));
		__this->set_Message_2((NetOutgoingMessage_t2016542980 *)NULL);
		return;
	}
}
extern "C"  void NetStoredReliableMessage_Reset_m441337071_AdjustorThunk (Il2CppObject * __this, const MethodInfo* method)
{
	NetStoredReliableMessage_t1576378473 * _thisAdjusted = reinterpret_cast<NetStoredReliableMessage_t1576378473 *>(__this + 1);
	NetStoredReliableMessage_Reset_m441337071(_thisAdjusted, method);
}
// Conversion methods for marshalling of: Lidgren.Network.NetStoredReliableMessage
extern "C" void NetStoredReliableMessage_t1576378473_marshal_pinvoke(const NetStoredReliableMessage_t1576378473& unmarshaled, NetStoredReliableMessage_t1576378473_marshaled_pinvoke& marshaled)
{
	Il2CppCodeGenException* ___Message_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Message' of type 'NetStoredReliableMessage': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Message_2Exception);
}
extern "C" void NetStoredReliableMessage_t1576378473_marshal_pinvoke_back(const NetStoredReliableMessage_t1576378473_marshaled_pinvoke& marshaled, NetStoredReliableMessage_t1576378473& unmarshaled)
{
	Il2CppCodeGenException* ___Message_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Message' of type 'NetStoredReliableMessage': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Message_2Exception);
}
// Conversion method for clean up from marshalling of: Lidgren.Network.NetStoredReliableMessage
extern "C" void NetStoredReliableMessage_t1576378473_marshal_pinvoke_cleanup(NetStoredReliableMessage_t1576378473_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Lidgren.Network.NetStoredReliableMessage
extern "C" void NetStoredReliableMessage_t1576378473_marshal_com(const NetStoredReliableMessage_t1576378473& unmarshaled, NetStoredReliableMessage_t1576378473_marshaled_com& marshaled)
{
	Il2CppCodeGenException* ___Message_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Message' of type 'NetStoredReliableMessage': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Message_2Exception);
}
extern "C" void NetStoredReliableMessage_t1576378473_marshal_com_back(const NetStoredReliableMessage_t1576378473_marshaled_com& marshaled, NetStoredReliableMessage_t1576378473& unmarshaled)
{
	Il2CppCodeGenException* ___Message_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Message' of type 'NetStoredReliableMessage': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Message_2Exception);
}
// Conversion method for clean up from marshalling of: Lidgren.Network.NetStoredReliableMessage
extern "C" void NetStoredReliableMessage_t1576378473_marshal_com_cleanup(NetStoredReliableMessage_t1576378473_marshaled_com& marshaled)
{
}
// System.String Lidgren.Network.NetTime::ToReadable(System.Double)
extern Il2CppClass* TimeSpan_t3430258949_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3231012734;
extern Il2CppCodeGenString* _stringLiteral2665395774;
extern const uint32_t NetTime_ToReadable_m2326980775_MetadataUsageId;
extern "C"  String_t* NetTime_ToReadable_m2326980775 (Il2CppObject * __this /* static, unused */, double ___seconds0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetTime_ToReadable_m2326980775_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	TimeSpan_t3430258949  V_2;
	memset(&V_2, 0, sizeof(V_2));
	double V_3 = 0.0;
	{
		double L_0 = ___seconds0;
		V_1 = (bool)((((int32_t)((((double)L_0) > ((double)(60.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		double L_2 = ___seconds0;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t3430258949_il2cpp_TypeInfo_var);
		TimeSpan_t3430258949  L_3 = TimeSpan_FromSeconds_m2861206200(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		String_t* L_4 = TimeSpan_ToString_m2947282901((&V_2), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0050;
	}

IL_002b:
	{
		double L_5 = ___seconds0;
		V_3 = ((double)((double)L_5*(double)(1000.0)));
		String_t* L_6 = Double_ToString_m2210043919((&V_3), _stringLiteral3231012734, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m2596409543(NULL /*static, unused*/, L_6, _stringLiteral2665395774, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_0050;
	}

IL_0050:
	{
		String_t* L_8 = V_0;
		return L_8;
	}
}
// System.Double Lidgren.Network.NetTime::get_Now()
extern Il2CppClass* Stopwatch_t1380178105_il2cpp_TypeInfo_var;
extern Il2CppClass* NetTime_t3056501352_il2cpp_TypeInfo_var;
extern const uint32_t NetTime_get_Now_m1609702533_MetadataUsageId;
extern "C"  double NetTime_get_Now_m1609702533 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetTime_get_Now_m1609702533_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	double V_0 = 0.0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Stopwatch_t1380178105_il2cpp_TypeInfo_var);
		int64_t L_0 = Stopwatch_GetTimestamp_m4156329811(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetTime_t3056501352_il2cpp_TypeInfo_var);
		int64_t L_1 = ((NetTime_t3056501352_StaticFields*)NetTime_t3056501352_il2cpp_TypeInfo_var->static_fields)->get_s_timeInitialized_0();
		double L_2 = ((NetTime_t3056501352_StaticFields*)NetTime_t3056501352_il2cpp_TypeInfo_var->static_fields)->get_s_dInvFreq_1();
		V_0 = ((double)((double)(((double)((double)((int64_t)((int64_t)L_0-(int64_t)L_1)))))*(double)L_2));
		goto IL_0016;
	}

IL_0016:
	{
		double L_3 = V_0;
		return L_3;
	}
}
// System.Void Lidgren.Network.NetTime::.cctor()
extern Il2CppClass* Stopwatch_t1380178105_il2cpp_TypeInfo_var;
extern Il2CppClass* NetTime_t3056501352_il2cpp_TypeInfo_var;
extern const uint32_t NetTime__cctor_m2887513798_MetadataUsageId;
extern "C"  void NetTime__cctor_m2887513798 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetTime__cctor_m2887513798_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Stopwatch_t1380178105_il2cpp_TypeInfo_var);
		int64_t L_0 = Stopwatch_GetTimestamp_m4156329811(NULL /*static, unused*/, /*hidden argument*/NULL);
		((NetTime_t3056501352_StaticFields*)NetTime_t3056501352_il2cpp_TypeInfo_var->static_fields)->set_s_timeInitialized_0(L_0);
		int64_t L_1 = ((Stopwatch_t1380178105_StaticFields*)Stopwatch_t1380178105_il2cpp_TypeInfo_var->static_fields)->get_Frequency_0();
		((NetTime_t3056501352_StaticFields*)NetTime_t3056501352_il2cpp_TypeInfo_var->static_fields)->set_s_dInvFreq_1(((double)((double)(1.0)/(double)(((double)((double)L_1))))));
		return;
	}
}
// System.Void Lidgren.Network.NetUnreliableSenderChannel::.ctor(Lidgren.Network.NetConnection,System.Int32,Lidgren.Network.NetDeliveryMethod)
extern Il2CppClass* NetBitVector_t1774780753_il2cpp_TypeInfo_var;
extern Il2CppClass* NetQueue_1_t4233233666_il2cpp_TypeInfo_var;
extern const MethodInfo* NetQueue_1__ctor_m2411511422_MethodInfo_var;
extern const uint32_t NetUnreliableSenderChannel__ctor_m2332360361_MetadataUsageId;
extern "C"  void NetUnreliableSenderChannel__ctor_m2332360361 (NetUnreliableSenderChannel_t1909769502 * __this, NetConnection_t3331492029 * ___connection0, int32_t ___windowSize1, uint8_t ___method2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetUnreliableSenderChannel__ctor_m2332360361_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		NetSenderChannelBase__ctor_m1977648499(__this, /*hidden argument*/NULL);
		NetConnection_t3331492029 * L_0 = ___connection0;
		__this->set_m_connection_1(L_0);
		int32_t L_1 = ___windowSize1;
		__this->set_m_windowSize_3(L_1);
		__this->set_m_windowStart_2(0);
		__this->set_m_sendStart_4(0);
		NetBitVector_t1774780753 * L_2 = (NetBitVector_t1774780753 *)il2cpp_codegen_object_new(NetBitVector_t1774780753_il2cpp_TypeInfo_var);
		NetBitVector__ctor_m1517128273(L_2, ((int32_t)1024), /*hidden argument*/NULL);
		__this->set_m_receivedAcks_6(L_2);
		NetQueue_1_t4233233666 * L_3 = (NetQueue_1_t4233233666 *)il2cpp_codegen_object_new(NetQueue_1_t4233233666_il2cpp_TypeInfo_var);
		NetQueue_1__ctor_m2411511422(L_3, 8, /*hidden argument*/NetQueue_1__ctor_m2411511422_MethodInfo_var);
		((NetSenderChannelBase_t3096690204 *)__this)->set_m_queuedSends_0(L_3);
		__this->set_m_doFlowControl_5((bool)1);
		uint8_t L_4 = ___method2;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0060;
		}
	}
	{
		NetConnection_t3331492029 * L_5 = ___connection0;
		NullCheck(L_5);
		NetPeer_t1779390221 * L_6 = NetConnection_get_Peer_m784846870(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		NetPeerConfiguration_t136603591 * L_7 = NetPeer_get_Configuration_m323836264(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		bool L_8 = NetPeerConfiguration_get_SuppressUnreliableUnorderedAcks_m1255305261(L_7, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		goto IL_0061;
	}

IL_0060:
	{
		G_B3_0 = 1;
	}

IL_0061:
	{
		V_0 = (bool)G_B3_0;
		bool L_9 = V_0;
		if (L_9)
		{
			goto IL_006d;
		}
	}
	{
		__this->set_m_doFlowControl_5((bool)0);
	}

IL_006d:
	{
		return;
	}
}
// System.Int32 Lidgren.Network.NetUnreliableSenderChannel::GetAllowedSends()
extern "C"  int32_t NetUnreliableSenderChannel_GetAllowedSends_m4022653188 (NetUnreliableSenderChannel_t1909769502 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		bool L_0 = __this->get_m_doFlowControl_5();
		V_2 = L_0;
		bool L_1 = V_2;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		V_1 = 2;
		goto IL_004f;
	}

IL_000f:
	{
		int32_t L_2 = __this->get_m_windowSize_3();
		int32_t L_3 = __this->get_m_sendStart_4();
		int32_t L_4 = __this->get_m_windowStart_2();
		int32_t L_5 = __this->get_m_windowSize_3();
		V_0 = ((int32_t)((int32_t)L_2-(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_3+(int32_t)((int32_t)1024)))-(int32_t)L_4))%(int32_t)L_5))));
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8 = __this->get_m_windowSize_3();
		G_B5_0 = ((((int32_t)((((int32_t)L_7) > ((int32_t)L_8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		NetException_Assert_m1426298558(NULL /*static, unused*/, (bool)G_B5_0, /*hidden argument*/NULL);
		int32_t L_9 = V_0;
		V_1 = L_9;
		goto IL_004f;
	}

IL_004f:
	{
		int32_t L_10 = V_1;
		return L_10;
	}
}
// System.Void Lidgren.Network.NetUnreliableSenderChannel::Reset()
extern const MethodInfo* NetQueue_1_Clear_m2534478962_MethodInfo_var;
extern const uint32_t NetUnreliableSenderChannel_Reset_m2705274180_MetadataUsageId;
extern "C"  void NetUnreliableSenderChannel_Reset_m2705274180 (NetUnreliableSenderChannel_t1909769502 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetUnreliableSenderChannel_Reset_m2705274180_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		NetBitVector_t1774780753 * L_0 = __this->get_m_receivedAcks_6();
		NullCheck(L_0);
		NetBitVector_Clear_m3351354433(L_0, /*hidden argument*/NULL);
		NetQueue_1_t4233233666 * L_1 = ((NetSenderChannelBase_t3096690204 *)__this)->get_m_queuedSends_0();
		NullCheck(L_1);
		NetQueue_1_Clear_m2534478962(L_1, /*hidden argument*/NetQueue_1_Clear_m2534478962_MethodInfo_var);
		__this->set_m_windowStart_2(0);
		__this->set_m_sendStart_4(0);
		return;
	}
}
// Lidgren.Network.NetSendResult Lidgren.Network.NetUnreliableSenderChannel::Enqueue(Lidgren.Network.NetOutgoingMessage)
extern const MethodInfo* NetQueue_1_get_Count_m685192943_MethodInfo_var;
extern const MethodInfo* NetQueue_1_Enqueue_m3616763713_MethodInfo_var;
extern const uint32_t NetUnreliableSenderChannel_Enqueue_m3305376402_MetadataUsageId;
extern "C"  int32_t NetUnreliableSenderChannel_Enqueue_m3305376402 (NetUnreliableSenderChannel_t1909769502 * __this, NetOutgoingMessage_t2016542980 * ___message0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetUnreliableSenderChannel_Enqueue_m3305376402_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		NetQueue_1_t4233233666 * L_0 = ((NetSenderChannelBase_t3096690204 *)__this)->get_m_queuedSends_0();
		NullCheck(L_0);
		int32_t L_1 = NetQueue_1_get_Count_m685192943(L_0, /*hidden argument*/NetQueue_1_get_Count_m685192943_MethodInfo_var);
		V_0 = ((int32_t)((int32_t)L_1+(int32_t)1));
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Lidgren.Network.NetSenderChannelBase::GetAllowedSends() */, __this);
		V_1 = L_2;
		int32_t L_3 = V_0;
		int32_t L_4 = V_1;
		if ((((int32_t)L_3) > ((int32_t)L_4)))
		{
			goto IL_0049;
		}
	}
	{
		NetOutgoingMessage_t2016542980 * L_5 = ___message0;
		NullCheck(L_5);
		int32_t L_6 = NetBuffer_get_LengthBytes_m2765088638(L_5, /*hidden argument*/NULL);
		NetConnection_t3331492029 * L_7 = __this->get_m_connection_1();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_m_currentMTU_34();
		if ((((int32_t)L_6) <= ((int32_t)L_8)))
		{
			goto IL_0045;
		}
	}
	{
		NetConnection_t3331492029 * L_9 = __this->get_m_connection_1();
		NullCheck(L_9);
		NetPeerConfiguration_t136603591 * L_10 = L_9->get_m_peerConfiguration_1();
		NullCheck(L_10);
		int32_t L_11 = NetPeerConfiguration_get_UnreliableSizeBehaviour_m2649350738(L_10, /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)((((int32_t)L_11) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B4_0 = 1;
	}

IL_0046:
	{
		G_B6_0 = G_B4_0;
		goto IL_004a;
	}

IL_0049:
	{
		G_B6_0 = 0;
	}

IL_004a:
	{
		V_3 = (bool)G_B6_0;
		bool L_12 = V_3;
		if (L_12)
		{
			goto IL_0054;
		}
	}
	{
		V_2 = 3;
		goto IL_0076;
	}

IL_0054:
	{
		NetQueue_1_t4233233666 * L_13 = ((NetSenderChannelBase_t3096690204 *)__this)->get_m_queuedSends_0();
		NetOutgoingMessage_t2016542980 * L_14 = ___message0;
		NullCheck(L_13);
		NetQueue_1_Enqueue_m3616763713(L_13, L_14, /*hidden argument*/NetQueue_1_Enqueue_m3616763713_MethodInfo_var);
		NetConnection_t3331492029 * L_15 = __this->get_m_connection_1();
		NullCheck(L_15);
		NetPeer_t1779390221 * L_16 = L_15->get_m_peer_0();
		NullCheck(L_16);
		L_16->set_m_needFlushSendQueue_20((bool)1);
		V_2 = 1;
		goto IL_0076;
	}

IL_0076:
	{
		int32_t L_17 = V_2;
		return L_17;
	}
}
// System.Void Lidgren.Network.NetUnreliableSenderChannel::SendQueuedMessages(System.Double)
extern const MethodInfo* NetQueue_1_TryDequeue_m592441308_MethodInfo_var;
extern const MethodInfo* NetQueue_1_get_Count_m685192943_MethodInfo_var;
extern const uint32_t NetUnreliableSenderChannel_SendQueuedMessages_m1720590766_MetadataUsageId;
extern "C"  void NetUnreliableSenderChannel_SendQueuedMessages_m1720590766 (NetUnreliableSenderChannel_t1909769502 * __this, double ___now0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetUnreliableSenderChannel_SendQueuedMessages_m1720590766_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	NetOutgoingMessage_t2016542980 * V_1 = NULL;
	bool V_2 = false;
	int32_t G_B9_0 = 0;
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Lidgren.Network.NetSenderChannelBase::GetAllowedSends() */, __this);
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_2 = (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		goto IL_0053;
	}

IL_0015:
	{
		goto IL_0039;
	}

IL_0017:
	{
		NetQueue_1_t4233233666 * L_3 = ((NetSenderChannelBase_t3096690204 *)__this)->get_m_queuedSends_0();
		NullCheck(L_3);
		bool L_4 = NetQueue_1_TryDequeue_m592441308(L_3, (&V_1), /*hidden argument*/NetQueue_1_TryDequeue_m592441308_MethodInfo_var);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		NetOutgoingMessage_t2016542980 * L_6 = V_1;
		NetUnreliableSenderChannel_ExecuteSend_m3640853513(__this, L_6, /*hidden argument*/NULL);
	}

IL_0034:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7-(int32_t)1));
	}

IL_0039:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		NetQueue_1_t4233233666 * L_9 = ((NetSenderChannelBase_t3096690204 *)__this)->get_m_queuedSends_0();
		NullCheck(L_9);
		int32_t L_10 = NetQueue_1_get_Count_m685192943(L_9, /*hidden argument*/NetQueue_1_get_Count_m685192943_MethodInfo_var);
		G_B9_0 = ((((int32_t)L_10) > ((int32_t)0))? 1 : 0);
		goto IL_004e;
	}

IL_004d:
	{
		G_B9_0 = 0;
	}

IL_004e:
	{
		V_2 = (bool)G_B9_0;
		bool L_11 = V_2;
		if (L_11)
		{
			goto IL_0017;
		}
	}

IL_0053:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetUnreliableSenderChannel::ExecuteSend(Lidgren.Network.NetOutgoingMessage)
extern "C"  void NetUnreliableSenderChannel_ExecuteSend_m3640853513 (NetUnreliableSenderChannel_t1909769502 * __this, NetOutgoingMessage_t2016542980 * ___message0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		NetConnection_t3331492029 * L_0 = __this->get_m_connection_1();
		NullCheck(L_0);
		NetPeer_t1779390221 * L_1 = L_0->get_m_peer_0();
		NullCheck(L_1);
		NetPeer_VerifyNetworkThread_m4075953563(L_1, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_m_sendStart_4();
		V_0 = L_2;
		int32_t L_3 = __this->get_m_sendStart_4();
		__this->set_m_sendStart_4(((int32_t)((int32_t)((int32_t)((int32_t)L_3+(int32_t)1))%(int32_t)((int32_t)1024))));
		NetConnection_t3331492029 * L_4 = __this->get_m_connection_1();
		NetOutgoingMessage_t2016542980 * L_5 = ___message0;
		int32_t L_6 = V_0;
		NullCheck(L_4);
		NetConnection_QueueSendMessage_m496824802(L_4, L_5, L_6, /*hidden argument*/NULL);
		NetOutgoingMessage_t2016542980 * L_7 = ___message0;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_m_recyclingCount_7();
		V_1 = (bool)((((int32_t)L_8) > ((int32_t)0))? 1 : 0);
		bool L_9 = V_1;
		if (L_9)
		{
			goto IL_005a;
		}
	}
	{
		NetConnection_t3331492029 * L_10 = __this->get_m_connection_1();
		NullCheck(L_10);
		NetPeer_t1779390221 * L_11 = L_10->get_m_peer_0();
		NetOutgoingMessage_t2016542980 * L_12 = ___message0;
		NullCheck(L_11);
		NetPeer_Recycle_m2290156780(L_11, L_12, /*hidden argument*/NULL);
	}

IL_005a:
	{
		goto IL_005c;
	}

IL_005c:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetUnreliableSenderChannel::ReceiveAcknowledge(System.Double,System.Int32)
extern Il2CppClass* NetUtility_t3562260209_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1987345686;
extern const uint32_t NetUnreliableSenderChannel_ReceiveAcknowledge_m3887587101_MetadataUsageId;
extern "C"  void NetUnreliableSenderChannel_ReceiveAcknowledge_m3887587101 (NetUnreliableSenderChannel_t1909769502 * __this, double ___now0, int32_t ___seqNr1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetUnreliableSenderChannel_ReceiveAcknowledge_m3887587101_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		bool L_0 = __this->get_m_doFlowControl_5();
		V_1 = L_0;
		bool L_1 = V_1;
		if (L_1)
		{
			goto IL_0027;
		}
	}
	{
		NetConnection_t3331492029 * L_2 = __this->get_m_connection_1();
		NullCheck(L_2);
		NetPeer_t1779390221 * L_3 = L_2->get_m_peer_0();
		NullCheck(L_3);
		NetPeer_LogWarning_m3266657906(L_3, _stringLiteral1987345686, /*hidden argument*/NULL);
		goto IL_00d2;
	}

IL_0027:
	{
		int32_t L_4 = ___seqNr1;
		int32_t L_5 = __this->get_m_windowStart_2();
		IL2CPP_RUNTIME_CLASS_INIT(NetUtility_t3562260209_il2cpp_TypeInfo_var);
		int32_t L_6 = NetUtility_RelativeSequenceNumber_m1713083748(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7 = V_0;
		V_1 = (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (L_8)
		{
			goto IL_0045;
		}
	}
	{
		goto IL_00d2;
	}

IL_0045:
	{
		int32_t L_9 = V_0;
		V_1 = (bool)((((int32_t)((((int32_t)L_9) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_11 = ___seqNr1;
		int32_t L_12 = __this->get_m_windowStart_2();
		NetException_Assert_m1426298558(NULL /*static, unused*/, (bool)((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0), /*hidden argument*/NULL);
		NetBitVector_t1774780753 * L_13 = __this->get_m_receivedAcks_6();
		int32_t L_14 = __this->get_m_windowStart_2();
		NullCheck(L_13);
		NetBitVector_set_Bit_m3149930918(L_13, L_14, (bool)0, /*hidden argument*/NULL);
		int32_t L_15 = __this->get_m_windowStart_2();
		__this->set_m_windowStart_2(((int32_t)((int32_t)((int32_t)((int32_t)L_15+(int32_t)1))%(int32_t)((int32_t)1024))));
		goto IL_00d2;
	}

IL_0089:
	{
		NetBitVector_t1774780753 * L_16 = __this->get_m_receivedAcks_6();
		int32_t L_17 = ___seqNr1;
		NullCheck(L_16);
		NetBitVector_set_Bit_m3149930918(L_16, L_17, (bool)1, /*hidden argument*/NULL);
		goto IL_00c2;
	}

IL_0099:
	{
		NetBitVector_t1774780753 * L_18 = __this->get_m_receivedAcks_6();
		int32_t L_19 = __this->get_m_windowStart_2();
		NullCheck(L_18);
		NetBitVector_set_Bit_m3149930918(L_18, L_19, (bool)0, /*hidden argument*/NULL);
		int32_t L_20 = __this->get_m_windowStart_2();
		__this->set_m_windowStart_2(((int32_t)((int32_t)((int32_t)((int32_t)L_20+(int32_t)1))%(int32_t)((int32_t)1024))));
	}

IL_00c2:
	{
		int32_t L_21 = __this->get_m_windowStart_2();
		int32_t L_22 = ___seqNr1;
		V_1 = (bool)((((int32_t)((((int32_t)L_21) == ((int32_t)L_22))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_1;
		if (L_23)
		{
			goto IL_0099;
		}
	}

IL_00d2:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetUnreliableSequencedReceiver::.ctor(Lidgren.Network.NetConnection)
extern "C"  void NetUnreliableSequencedReceiver__ctor_m3415245671 (NetUnreliableSequencedReceiver_t2497601560 * __this, NetConnection_t3331492029 * ___connection0, const MethodInfo* method)
{
	{
		__this->set_m_lastReceivedSequenceNumber_2((-1));
		NetConnection_t3331492029 * L_0 = ___connection0;
		NetReceiverChannelBase__ctor_m892231457(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Lidgren.Network.NetUnreliableSequencedReceiver::ReceiveMessage(Lidgren.Network.NetIncomingMessage)
extern Il2CppClass* NetUtility_t3562260209_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2279591503;
extern Il2CppCodeGenString* _stringLiteral2486397350;
extern const uint32_t NetUnreliableSequencedReceiver_ReceiveMessage_m1400670066_MetadataUsageId;
extern "C"  void NetUnreliableSequencedReceiver_ReceiveMessage_m1400670066 (NetUnreliableSequencedReceiver_t2497601560 * __this, NetIncomingMessage_t2014089816 * ___msg0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetUnreliableSequencedReceiver_ReceiveMessage_m1400670066_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		NetIncomingMessage_t2014089816 * L_0 = ___msg0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_m_sequenceNumber_8();
		V_0 = L_1;
		NetConnection_t3331492029 * L_2 = ((NetReceiverChannelBase_t908288882 *)__this)->get_m_connection_1();
		NetIncomingMessage_t2014089816 * L_3 = ___msg0;
		NullCheck(L_3);
		uint8_t L_4 = L_3->get_m_receivedMessageType_9();
		int32_t L_5 = V_0;
		NullCheck(L_2);
		NetConnection_QueueAck_m3101883724(L_2, L_4, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		int32_t L_7 = __this->get_m_lastReceivedSequenceNumber_2();
		IL2CPP_RUNTIME_CLASS_INIT(NetUtility_t3562260209_il2cpp_TypeInfo_var);
		int32_t L_8 = NetUtility_RelativeSequenceNumber_m1713083748(NULL /*static, unused*/, L_6, ((int32_t)((int32_t)L_7+(int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_8;
		int32_t L_9 = V_1;
		V_2 = (bool)((((int32_t)((((int32_t)L_9) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (L_10)
		{
			goto IL_006a;
		}
	}
	{
		NetConnection_t3331492029 * L_11 = ((NetReceiverChannelBase_t908288882 *)__this)->get_m_connection_1();
		NullCheck(L_11);
		NetConnectionStatistics_t1235765202 * L_12 = L_11->get_m_statistics_14();
		NullCheck(L_12);
		NetConnectionStatistics_MessageDropped_m4117327218(L_12, /*hidden argument*/NULL);
		NetPeer_t1779390221 * L_13 = ((NetReceiverChannelBase_t908288882 *)__this)->get_m_peer_0();
		int32_t L_14 = V_0;
		int32_t L_15 = L_14;
		Il2CppObject * L_16 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_15);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Concat_m2000667605(NULL /*static, unused*/, _stringLiteral2279591503, L_16, _stringLiteral2486397350, /*hidden argument*/NULL);
		NullCheck(L_13);
		NetPeer_LogVerbose_m3434660420(L_13, L_17, /*hidden argument*/NULL);
		goto IL_007e;
	}

IL_006a:
	{
		int32_t L_18 = V_0;
		__this->set_m_lastReceivedSequenceNumber_2(L_18);
		NetPeer_t1779390221 * L_19 = ((NetReceiverChannelBase_t908288882 *)__this)->get_m_peer_0();
		NetIncomingMessage_t2014089816 * L_20 = ___msg0;
		NullCheck(L_19);
		NetPeer_ReleaseMessage_m3520648965(L_19, L_20, /*hidden argument*/NULL);
	}

IL_007e:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetUnreliableUnorderedReceiver::.ctor(Lidgren.Network.NetConnection)
extern "C"  void NetUnreliableUnorderedReceiver__ctor_m3560667024 (NetUnreliableUnorderedReceiver_t3541921227 * __this, NetConnection_t3331492029 * ___connection0, const MethodInfo* method)
{
	{
		NetConnection_t3331492029 * L_0 = ___connection0;
		NetReceiverChannelBase__ctor_m892231457(__this, L_0, /*hidden argument*/NULL);
		NetConnection_t3331492029 * L_1 = ___connection0;
		NullCheck(L_1);
		NetPeer_t1779390221 * L_2 = NetConnection_get_Peer_m784846870(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		NetPeerConfiguration_t136603591 * L_3 = NetPeer_get_Configuration_m323836264(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4 = NetPeerConfiguration_get_SuppressUnreliableUnorderedAcks_m1255305261(L_3, /*hidden argument*/NULL);
		__this->set_m_doFlowControl_2((bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0));
		return;
	}
}
// System.Void Lidgren.Network.NetUnreliableUnorderedReceiver::ReceiveMessage(Lidgren.Network.NetIncomingMessage)
extern "C"  void NetUnreliableUnorderedReceiver_ReceiveMessage_m3586422051 (NetUnreliableUnorderedReceiver_t3541921227 * __this, NetIncomingMessage_t2014089816 * ___msg0, const MethodInfo* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_doFlowControl_2();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		NetConnection_t3331492029 * L_2 = ((NetReceiverChannelBase_t908288882 *)__this)->get_m_connection_1();
		NetIncomingMessage_t2014089816 * L_3 = ___msg0;
		NullCheck(L_3);
		uint8_t L_4 = L_3->get_m_receivedMessageType_9();
		NetIncomingMessage_t2014089816 * L_5 = ___msg0;
		NullCheck(L_5);
		int32_t L_6 = L_5->get_m_sequenceNumber_8();
		NullCheck(L_2);
		NetConnection_QueueAck_m3101883724(L_2, L_4, L_6, /*hidden argument*/NULL);
	}

IL_0026:
	{
		NetPeer_t1779390221 * L_7 = ((NetReceiverChannelBase_t908288882 *)__this)->get_m_peer_0();
		NetIncomingMessage_t2014089816 * L_8 = ___msg0;
		NullCheck(L_7);
		NetPeer_ReleaseMessage_m3520648965(L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Lidgren.Network.NetUPnP::.ctor(Lidgren.Network.NetPeer)
extern Il2CppClass* ManualResetEvent_t926074657_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral371857150;
extern const uint32_t NetUPnP__ctor_m1248845477_MetadataUsageId;
extern "C"  void NetUPnP__ctor_m1248845477 (NetUPnP_t2794379482 * __this, NetPeer_t1779390221 * ___peer0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetUPnP__ctor_m1248845477_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->set_m_serviceName_1(_stringLiteral371857150);
		ManualResetEvent_t926074657 * L_0 = (ManualResetEvent_t926074657 *)il2cpp_codegen_object_new(ManualResetEvent_t926074657_il2cpp_TypeInfo_var);
		ManualResetEvent__ctor_m3470249043(L_0, (bool)0, /*hidden argument*/NULL);
		__this->set_m_discoveryComplete_3(L_0);
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		NetPeer_t1779390221 * L_1 = ___peer0;
		__this->set_m_peer_2(L_1);
		__this->set_m_discoveryResponseDeadline_4((-1.7976931348623157E+308));
		return;
	}
}
// System.Void Lidgren.Network.NetUPnP::Discover(Lidgren.Network.NetPeer)
extern Il2CppClass* NetTime_t3056501352_il2cpp_TypeInfo_var;
extern Il2CppClass* Encoding_t663144255_il2cpp_TypeInfo_var;
extern Il2CppClass* NetUtility_t3562260209_il2cpp_TypeInfo_var;
extern Il2CppClass* IPEndPoint_t2615413766_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2074731587;
extern Il2CppCodeGenString* _stringLiteral211677886;
extern const uint32_t NetUPnP_Discover_m2977051670_MetadataUsageId;
extern "C"  void NetUPnP_Discover_m2977051670 (NetUPnP_t2794379482 * __this, NetPeer_t1779390221 * ___peer0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetUPnP_Discover_m2977051670_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = NULL;
	ByteU5BU5D_t3397334013* V_1 = NULL;
	{
		V_0 = _stringLiteral2074731587;
		IL2CPP_RUNTIME_CLASS_INIT(NetTime_t3056501352_il2cpp_TypeInfo_var);
		double L_0 = NetTime_get_Now_m1609702533(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_discoveryResponseDeadline_4(((double)((double)L_0+(double)(6.0))));
		__this->set_m_status_5(0);
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t663144255_il2cpp_TypeInfo_var);
		Encoding_t663144255 * L_1 = Encoding_get_UTF8_m1752852937(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_2 = V_0;
		NullCheck(L_1);
		ByteU5BU5D_t3397334013* L_3 = VirtFuncInvoker1< ByteU5BU5D_t3397334013*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_1, L_2);
		V_1 = L_3;
		NetPeer_t1779390221 * L_4 = __this->get_m_peer_2();
		NullCheck(L_4);
		NetPeer_LogDebug_m2983960595(L_4, _stringLiteral211677886, /*hidden argument*/NULL);
		NetPeer_t1779390221 * L_5 = ___peer0;
		NullCheck(L_5);
		Socket_t3821512045 * L_6 = NetPeer_get_Socket_m1042619742(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Socket_SetSocketOption_m180008383(L_6, ((int32_t)65535), ((int32_t)32), (bool)1, /*hidden argument*/NULL);
		NetPeer_t1779390221 * L_7 = ___peer0;
		ByteU5BU5D_t3397334013* L_8 = V_1;
		ByteU5BU5D_t3397334013* L_9 = V_1;
		NullCheck(L_9);
		IL2CPP_RUNTIME_CLASS_INIT(NetUtility_t3562260209_il2cpp_TypeInfo_var);
		IPAddress_t1399971723 * L_10 = NetUtility_GetBroadcastAddress_m2689141683(NULL /*static, unused*/, /*hidden argument*/NULL);
		IPEndPoint_t2615413766 * L_11 = (IPEndPoint_t2615413766 *)il2cpp_codegen_object_new(IPEndPoint_t2615413766_il2cpp_TypeInfo_var);
		IPEndPoint__ctor_m3477723888(L_11, L_10, ((int32_t)1900), /*hidden argument*/NULL);
		NullCheck(L_7);
		NetPeer_RawSend_m737396087(L_7, L_8, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_9)->max_length)))), L_11, /*hidden argument*/NULL);
		NetPeer_t1779390221 * L_12 = ___peer0;
		NullCheck(L_12);
		Socket_t3821512045 * L_13 = NetPeer_get_Socket_m1042619742(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Socket_SetSocketOption_m180008383(L_13, ((int32_t)65535), ((int32_t)32), (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Lidgren.Network.NetUPnP::CheckForDiscoveryTimeout()
extern Il2CppClass* NetTime_t3056501352_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1372822028;
extern const uint32_t NetUPnP_CheckForDiscoveryTimeout_m1059646905_MetadataUsageId;
extern "C"  void NetUPnP_CheckForDiscoveryTimeout_m1059646905 (NetUPnP_t2794379482 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetUPnP_CheckForDiscoveryTimeout_m1059646905_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->get_m_status_5();
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetTime_t3056501352_il2cpp_TypeInfo_var);
		double L_1 = NetTime_get_Now_m1609702533(NULL /*static, unused*/, /*hidden argument*/NULL);
		double L_2 = __this->get_m_discoveryResponseDeadline_4();
		G_B3_0 = ((((int32_t)((((double)L_1) < ((double)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (L_3)
		{
			goto IL_0023;
		}
	}
	{
		goto IL_003b;
	}

IL_0023:
	{
		NetPeer_t1779390221 * L_4 = __this->get_m_peer_2();
		NullCheck(L_4);
		NetPeer_LogDebug_m2983960595(L_4, _stringLiteral1372822028, /*hidden argument*/NULL);
		__this->set_m_status_5(1);
	}

IL_003b:
	{
		return;
	}
}
// System.Void Lidgren.Network.NetUPnP::ExtractServiceUrl(System.String)
extern Il2CppClass* XmlDocument_t3649534162_il2cpp_TypeInfo_var;
extern Il2CppClass* WebRequest_t1365124353_il2cpp_TypeInfo_var;
extern Il2CppClass* IDisposable_t2427283555_il2cpp_TypeInfo_var;
extern Il2CppClass* XmlNamespaceManager_t486731501_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3068682649;
extern Il2CppCodeGenString* _stringLiteral3430366403;
extern Il2CppCodeGenString* _stringLiteral2949535312;
extern Il2CppCodeGenString* _stringLiteral1219776091;
extern Il2CppCodeGenString* _stringLiteral937432703;
extern Il2CppCodeGenString* _stringLiteral2729541309;
extern Il2CppCodeGenString* _stringLiteral1735414183;
extern Il2CppCodeGenString* _stringLiteral2469705028;
extern Il2CppCodeGenString* _stringLiteral3824059609;
extern const uint32_t NetUPnP_ExtractServiceUrl_m1890440714_MetadataUsageId;
extern "C"  void NetUPnP_ExtractServiceUrl_m1890440714 (NetUPnP_t2794379482 * __this, String_t* ___resp0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetUPnP_ExtractServiceUrl_m1890440714_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	XmlDocument_t3649534162 * V_0 = NULL;
	WebResponse_t1895226051 * V_1 = NULL;
	XmlNamespaceManager_t486731501 * V_2 = NULL;
	XmlNode_t616554813 * V_3 = NULL;
	XmlNode_t616554813 * V_4 = NULL;
	bool V_5 = false;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		XmlDocument_t3649534162 * L_0 = (XmlDocument_t3649534162 *)il2cpp_codegen_object_new(XmlDocument_t3649534162_il2cpp_TypeInfo_var);
		XmlDocument__ctor_m3336214851(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = ___resp0;
		IL2CPP_RUNTIME_CLASS_INIT(WebRequest_t1365124353_il2cpp_TypeInfo_var);
		WebRequest_t1365124353 * L_2 = WebRequest_Create_m274268363(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		WebResponse_t1895226051 * L_3 = VirtFuncInvoker0< WebResponse_t1895226051 * >::Invoke(18 /* System.Net.WebResponse System.Net.WebRequest::GetResponse() */, L_2);
		V_1 = L_3;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		XmlDocument_t3649534162 * L_4 = V_0;
		WebResponse_t1895226051 * L_5 = V_1;
		NullCheck(L_5);
		Stream_t3255436806 * L_6 = VirtFuncInvoker0< Stream_t3255436806 * >::Invoke(9 /* System.IO.Stream System.Net.WebResponse::GetResponseStream() */, L_5);
		NullCheck(L_4);
		VirtActionInvoker1< Stream_t3255436806 * >::Invoke(56 /* System.Void System.Xml.XmlDocument::Load(System.IO.Stream) */, L_4, L_6);
		IL2CPP_LEAVE(0x34, FINALLY_0022);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_0022;
	}

FINALLY_0022:
	{ // begin finally (depth: 1)
		{
			WebResponse_t1895226051 * L_7 = V_1;
			V_5 = (bool)((((Il2CppObject*)(WebResponse_t1895226051 *)L_7) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
			bool L_8 = V_5;
			if (L_8)
			{
				goto IL_0033;
			}
		}

IL_002c:
		{
			WebResponse_t1895226051 * L_9 = V_1;
			NullCheck(L_9);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_9);
		}

IL_0033:
		{
			IL2CPP_END_FINALLY(34)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(34)
	{
		IL2CPP_JUMP_TBL(0x34, IL_0034)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_0034:
	{
		XmlDocument_t3649534162 * L_10 = V_0;
		NullCheck(L_10);
		XmlNameTable_t1345805268 * L_11 = XmlDocument_get_NameTable_m2493009838(L_10, /*hidden argument*/NULL);
		XmlNamespaceManager_t486731501 * L_12 = (XmlNamespaceManager_t486731501 *)il2cpp_codegen_object_new(XmlNamespaceManager_t486731501_il2cpp_TypeInfo_var);
		XmlNamespaceManager__ctor_m3164566160(L_12, L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		XmlNamespaceManager_t486731501 * L_13 = V_2;
		NullCheck(L_13);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(8 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_13, _stringLiteral3068682649, _stringLiteral3430366403);
		XmlDocument_t3649534162 * L_14 = V_0;
		XmlNamespaceManager_t486731501 * L_15 = V_2;
		NullCheck(L_14);
		XmlNode_t616554813 * L_16 = XmlNode_SelectSingleNode_m1274657031(L_14, _stringLiteral2949535312, L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		XmlNode_t616554813 * L_17 = V_3;
		NullCheck(L_17);
		String_t* L_18 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlNode::get_Value() */, L_17);
		NullCheck(L_18);
		bool L_19 = String_Contains_m4017059963(L_18, _stringLiteral1219776091, /*hidden argument*/NULL);
		V_5 = L_19;
		bool L_20 = V_5;
		if (L_20)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0123;
	}

IL_007a:
	{
		__this->set_m_serviceName_1(_stringLiteral937432703);
		XmlDocument_t3649534162 * L_21 = V_0;
		String_t* L_22 = __this->get_m_serviceName_1();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m612901809(NULL /*static, unused*/, _stringLiteral2729541309, L_22, _stringLiteral1735414183, /*hidden argument*/NULL);
		XmlNamespaceManager_t486731501 * L_24 = V_2;
		NullCheck(L_21);
		XmlNode_t616554813 * L_25 = XmlNode_SelectSingleNode_m1274657031(L_21, L_23, L_24, /*hidden argument*/NULL);
		V_4 = L_25;
		XmlNode_t616554813 * L_26 = V_4;
		V_5 = (bool)((((int32_t)((((Il2CppObject*)(XmlNode_t616554813 *)L_26) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_5;
		if (L_27)
		{
			goto IL_00ec;
		}
	}
	{
		__this->set_m_serviceName_1(_stringLiteral2469705028);
		XmlDocument_t3649534162 * L_28 = V_0;
		String_t* L_29 = __this->get_m_serviceName_1();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_30 = String_Concat_m612901809(NULL /*static, unused*/, _stringLiteral2729541309, L_29, _stringLiteral1735414183, /*hidden argument*/NULL);
		XmlNamespaceManager_t486731501 * L_31 = V_2;
		NullCheck(L_28);
		XmlNode_t616554813 * L_32 = XmlNode_SelectSingleNode_m1274657031(L_28, L_30, L_31, /*hidden argument*/NULL);
		V_4 = L_32;
		XmlNode_t616554813 * L_33 = V_4;
		V_5 = (bool)((((int32_t)((((Il2CppObject*)(XmlNode_t616554813 *)L_33) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_34 = V_5;
		if (L_34)
		{
			goto IL_00eb;
		}
	}
	{
		goto IL_0123;
	}

IL_00eb:
	{
	}

IL_00ec:
	{
		String_t* L_35 = ___resp0;
		XmlNode_t616554813 * L_36 = V_4;
		NullCheck(L_36);
		String_t* L_37 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlNode::get_Value() */, L_36);
		String_t* L_38 = NetUPnP_CombineUrls_m1444389121(NULL /*static, unused*/, L_35, L_37, /*hidden argument*/NULL);
		__this->set_m_serviceUrl_0(L_38);
		NetPeer_t1779390221 * L_39 = __this->get_m_peer_2();
		NullCheck(L_39);
		NetPeer_LogDebug_m2983960595(L_39, _stringLiteral3824059609, /*hidden argument*/NULL);
		__this->set_m_status_5(2);
		ManualResetEvent_t926074657 * L_40 = __this->get_m_discoveryComplete_3();
		NullCheck(L_40);
		EventWaitHandle_Set_m2975776670(L_40, /*hidden argument*/NULL);
	}

IL_0123:
	{
		return;
	}
}
// System.String Lidgren.Network.NetUPnP::CombineUrls(System.String,System.String)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4021508840;
extern Il2CppCodeGenString* _stringLiteral372029316;
extern Il2CppCodeGenString* _stringLiteral4169949010;
extern Il2CppCodeGenString* _stringLiteral371857150;
extern Il2CppCodeGenString* _stringLiteral372029315;
extern const uint32_t NetUPnP_CombineUrls_m1444389121_MetadataUsageId;
extern "C"  String_t* NetUPnP_CombineUrls_m1444389121 (Il2CppObject * __this /* static, unused */, String_t* ___gatewayURL0, String_t* ___subURL1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetUPnP_CombineUrls_m1444389121_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = ___subURL1;
		NullCheck(L_0);
		bool L_1 = String_Contains_m4017059963(L_0, _stringLiteral4021508840, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_2 = ___subURL1;
		NullCheck(L_2);
		bool L_3 = String_Contains_m4017059963(L_2, _stringLiteral372029316, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
	}

IL_001f:
	{
		V_2 = (bool)G_B3_0;
		bool L_4 = V_2;
		if (L_4)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_5 = ___subURL1;
		V_1 = L_5;
		goto IL_0067;
	}

IL_0028:
	{
		String_t* L_6 = ___gatewayURL0;
		NullCheck(L_6);
		String_t* L_7 = String_Replace_m1941156251(L_6, _stringLiteral4169949010, _stringLiteral371857150, /*hidden argument*/NULL);
		___gatewayURL0 = L_7;
		String_t* L_8 = ___gatewayURL0;
		NullCheck(L_8);
		int32_t L_9 = String_IndexOf_m4251815737(L_8, _stringLiteral372029315, /*hidden argument*/NULL);
		V_0 = L_9;
		int32_t L_10 = V_0;
		V_2 = (bool)((((int32_t)L_10) == ((int32_t)(-1)))? 1 : 0);
		bool L_11 = V_2;
		if (L_11)
		{
			goto IL_0058;
		}
	}
	{
		String_t* L_12 = ___gatewayURL0;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		String_t* L_14 = String_Substring_m12482732(L_12, 0, L_13, /*hidden argument*/NULL);
		___gatewayURL0 = L_14;
	}

IL_0058:
	{
		String_t* L_15 = ___gatewayURL0;
		String_t* L_16 = ___subURL1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Concat_m612901809(NULL /*static, unused*/, _stringLiteral4169949010, L_15, L_16, /*hidden argument*/NULL);
		V_1 = L_17;
		goto IL_0067;
	}

IL_0067:
	{
		String_t* L_18 = V_1;
		return L_18;
	}
}
// System.Net.IPAddress Lidgren.Network.NetUtility::GetCachedBroadcastAddress()
extern Il2CppClass* NetUtility_t3562260209_il2cpp_TypeInfo_var;
extern const uint32_t NetUtility_GetCachedBroadcastAddress_m1409773543_MetadataUsageId;
extern "C"  IPAddress_t1399971723 * NetUtility_GetCachedBroadcastAddress_m1409773543 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetUtility_GetCachedBroadcastAddress_m1409773543_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	IPAddress_t1399971723 * V_0 = NULL;
	bool V_1 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetUtility_t3562260209_il2cpp_TypeInfo_var);
		IPAddress_t1399971723 * L_0 = ((NetUtility_t3562260209_StaticFields*)NetUtility_t3562260209_il2cpp_TypeInfo_var->static_fields)->get_s_broadcastAddress_1();
		V_1 = (bool)((((int32_t)((((Il2CppObject*)(IPAddress_t1399971723 *)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetUtility_t3562260209_il2cpp_TypeInfo_var);
		IPAddress_t1399971723 * L_2 = NetUtility_GetBroadcastAddress_m2689141683(NULL /*static, unused*/, /*hidden argument*/NULL);
		((NetUtility_t3562260209_StaticFields*)NetUtility_t3562260209_il2cpp_TypeInfo_var->static_fields)->set_s_broadcastAddress_1(L_2);
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetUtility_t3562260209_il2cpp_TypeInfo_var);
		IPAddress_t1399971723 * L_3 = ((NetUtility_t3562260209_StaticFields*)NetUtility_t3562260209_il2cpp_TypeInfo_var->static_fields)->get_s_broadcastAddress_1();
		V_0 = L_3;
		goto IL_0022;
	}

IL_0022:
	{
		IPAddress_t1399971723 * L_4 = V_0;
		return L_4;
	}
}
// System.Net.IPAddress Lidgren.Network.NetUtility::Resolve(System.String)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* ArgumentException_t3259014390_il2cpp_TypeInfo_var;
extern Il2CppClass* IPAddress_t1399971723_il2cpp_TypeInfo_var;
extern Il2CppClass* Dns_t1335526197_il2cpp_TypeInfo_var;
extern Il2CppClass* SocketException_t1618573604_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1173154807;
extern Il2CppCodeGenString* _stringLiteral2667663716;
extern Il2CppCodeGenString* _stringLiteral4238725438;
extern const uint32_t NetUtility_Resolve_m1627662274_MetadataUsageId;
extern "C"  IPAddress_t1399971723 * NetUtility_Resolve_m1627662274 (Il2CppObject * __this /* static, unused */, String_t* ___ipOrHost0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetUtility_Resolve_m1627662274_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	IPAddress_t1399971723 * V_0 = NULL;
	IPAddressU5BU5D_t4087230954* V_1 = NULL;
	IPAddress_t1399971723 * V_2 = NULL;
	SocketException_t1618573604 * V_3 = NULL;
	IPAddress_t1399971723 * V_4 = NULL;
	bool V_5 = false;
	IPAddressU5BU5D_t4087230954* V_6 = NULL;
	int32_t V_7 = 0;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___ipOrHost0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m2802126737(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_5;
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_t3259014390 * L_3 = (ArgumentException_t3259014390 *)il2cpp_codegen_object_new(ArgumentException_t3259014390_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m544251339(L_3, _stringLiteral1173154807, _stringLiteral2667663716, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_0020:
	{
		String_t* L_4 = ___ipOrHost0;
		NullCheck(L_4);
		String_t* L_5 = String_Trim_m2668767713(L_4, /*hidden argument*/NULL);
		___ipOrHost0 = L_5;
		V_0 = (IPAddress_t1399971723 *)NULL;
		String_t* L_6 = ___ipOrHost0;
		IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t1399971723_il2cpp_TypeInfo_var);
		bool L_7 = IPAddress_TryParse_m2352368982(NULL /*static, unused*/, L_6, (&V_0), /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_5;
		if (L_8)
		{
			goto IL_0061;
		}
	}
	{
		IPAddress_t1399971723 * L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = IPAddress_get_AddressFamily_m2727317531(L_9, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_10) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_5;
		if (L_11)
		{
			goto IL_0056;
		}
	}
	{
		IPAddress_t1399971723 * L_12 = V_0;
		V_4 = L_12;
		goto IL_00dd;
	}

IL_0056:
	{
		ArgumentException_t3259014390 * L_13 = (ArgumentException_t3259014390 *)il2cpp_codegen_object_new(ArgumentException_t3259014390_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3739475201(L_13, _stringLiteral4238725438, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13);
	}

IL_0061:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_14 = ___ipOrHost0;
			IL2CPP_RUNTIME_CLASS_INIT(Dns_t1335526197_il2cpp_TypeInfo_var);
			IPAddressU5BU5D_t4087230954* L_15 = Dns_GetHostAddresses_m1469938777(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
			V_1 = L_15;
			IPAddressU5BU5D_t4087230954* L_16 = V_1;
			V_5 = (bool)((((int32_t)((((Il2CppObject*)(IPAddressU5BU5D_t4087230954*)L_16) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_17 = V_5;
			if (L_17)
			{
				goto IL_007b;
			}
		}

IL_0076:
		{
			V_4 = (IPAddress_t1399971723 *)NULL;
			goto IL_00dd;
		}

IL_007b:
		{
			IPAddressU5BU5D_t4087230954* L_18 = V_1;
			V_6 = L_18;
			V_7 = 0;
			goto IL_00a9;
		}

IL_0084:
		{
			IPAddressU5BU5D_t4087230954* L_19 = V_6;
			int32_t L_20 = V_7;
			NullCheck(L_19);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
			int32_t L_21 = L_20;
			IPAddress_t1399971723 * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
			V_2 = L_22;
			IPAddress_t1399971723 * L_23 = V_2;
			NullCheck(L_23);
			int32_t L_24 = IPAddress_get_AddressFamily_m2727317531(L_23, /*hidden argument*/NULL);
			V_5 = (bool)((((int32_t)((((int32_t)L_24) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_25 = V_5;
			if (L_25)
			{
				goto IL_00a2;
			}
		}

IL_009d:
		{
			IPAddress_t1399971723 * L_26 = V_2;
			V_4 = L_26;
			goto IL_00dd;
		}

IL_00a2:
		{
			int32_t L_27 = V_7;
			V_7 = ((int32_t)((int32_t)L_27+(int32_t)1));
		}

IL_00a9:
		{
			int32_t L_28 = V_7;
			IPAddressU5BU5D_t4087230954* L_29 = V_6;
			NullCheck(L_29);
			V_5 = (bool)((((int32_t)L_28) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_29)->max_length))))))? 1 : 0);
			bool L_30 = V_5;
			if (L_30)
			{
				goto IL_0084;
			}
		}

IL_00b7:
		{
			V_4 = (IPAddress_t1399971723 *)NULL;
			goto IL_00dd;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t1927440687 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (SocketException_t1618573604_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_00bc;
		throw e;
	}

CATCH_00bc:
	{ // begin catch(System.Net.Sockets.SocketException)
		{
			V_3 = ((SocketException_t1618573604 *)__exception_local);
			SocketException_t1618573604 * L_31 = V_3;
			NullCheck(L_31);
			int32_t L_32 = SocketException_get_SocketErrorCode_m3898993591(L_31, /*hidden argument*/NULL);
			V_5 = (bool)((((int32_t)((((int32_t)L_32) == ((int32_t)((int32_t)11001)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_33 = V_5;
			if (L_33)
			{
				goto IL_00da;
			}
		}

IL_00d4:
		{
			V_4 = (IPAddress_t1399971723 *)NULL;
			goto IL_00dd;
		}

IL_00da:
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local);
		}
	} // end catch (depth: 1)

IL_00dd:
	{
		IPAddress_t1399971723 * L_34 = V_4;
		return L_34;
	}
}
// System.String Lidgren.Network.NetUtility::ToHexString(System.Int64)
extern Il2CppClass* BitConverter_t3195628829_il2cpp_TypeInfo_var;
extern Il2CppClass* NetUtility_t3562260209_il2cpp_TypeInfo_var;
extern const uint32_t NetUtility_ToHexString_m433916538_MetadataUsageId;
extern "C"  String_t* NetUtility_ToHexString_m433916538 (Il2CppObject * __this /* static, unused */, int64_t ___data0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetUtility_ToHexString_m433916538_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = NULL;
	{
		int64_t L_0 = ___data0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3195628829_il2cpp_TypeInfo_var);
		ByteU5BU5D_t3397334013* L_1 = BitConverter_GetBytes_m2282078441(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetUtility_t3562260209_il2cpp_TypeInfo_var);
		String_t* L_2 = NetUtility_ToHexString_m3804094867(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.String Lidgren.Network.NetUtility::ToHexString(System.Byte[])
extern Il2CppClass* NetUtility_t3562260209_il2cpp_TypeInfo_var;
extern const uint32_t NetUtility_ToHexString_m3804094867_MetadataUsageId;
extern "C"  String_t* NetUtility_ToHexString_m3804094867 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetUtility_ToHexString_m3804094867_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = NULL;
	{
		ByteU5BU5D_t3397334013* L_0 = ___data0;
		ByteU5BU5D_t3397334013* L_1 = ___data0;
		NullCheck(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(NetUtility_t3562260209_il2cpp_TypeInfo_var);
		String_t* L_2 = NetUtility_ToHexString_m2921421631(NULL /*static, unused*/, L_0, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_1)->max_length)))), /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000e;
	}

IL_000e:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.String Lidgren.Network.NetUtility::ToHexString(System.Byte[],System.Int32,System.Int32)
extern Il2CppClass* CharU5BU5D_t1328083999_il2cpp_TypeInfo_var;
extern const uint32_t NetUtility_ToHexString_m2921421631_MetadataUsageId;
extern "C"  String_t* NetUtility_ToHexString_m2921421631 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, int32_t ___offset1, int32_t ___length2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetUtility_ToHexString_m2921421631_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	CharU5BU5D_t1328083999* V_0 = NULL;
	uint8_t V_1 = 0x0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	bool V_4 = false;
	int32_t G_B3_0 = 0;
	CharU5BU5D_t1328083999* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	CharU5BU5D_t1328083999* G_B2_1 = NULL;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	CharU5BU5D_t1328083999* G_B4_2 = NULL;
	int32_t G_B6_0 = 0;
	CharU5BU5D_t1328083999* G_B6_1 = NULL;
	int32_t G_B5_0 = 0;
	CharU5BU5D_t1328083999* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	CharU5BU5D_t1328083999* G_B7_2 = NULL;
	{
		int32_t L_0 = ___length2;
		V_0 = ((CharU5BU5D_t1328083999*)SZArrayNew(CharU5BU5D_t1328083999_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)L_0*(int32_t)2))));
		V_2 = 0;
		goto IL_0055;
	}

IL_000e:
	{
		ByteU5BU5D_t3397334013* L_1 = ___data0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = V_2;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, ((int32_t)((int32_t)L_2+(int32_t)L_3)));
		int32_t L_4 = ((int32_t)((int32_t)L_2+(int32_t)L_3));
		uint8_t L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = (((int32_t)((uint8_t)((int32_t)((int32_t)L_5>>(int32_t)4)))));
		CharU5BU5D_t1328083999* L_6 = V_0;
		int32_t L_7 = V_2;
		uint8_t L_8 = V_1;
		G_B2_0 = ((int32_t)((int32_t)L_7*(int32_t)2));
		G_B2_1 = L_6;
		if ((((int32_t)L_8) > ((int32_t)((int32_t)9))))
		{
			G_B3_0 = ((int32_t)((int32_t)L_7*(int32_t)2));
			G_B3_1 = L_6;
			goto IL_0027;
		}
	}
	{
		uint8_t L_9 = V_1;
		G_B4_0 = ((int32_t)((int32_t)L_9+(int32_t)((int32_t)48)));
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_002b;
	}

IL_0027:
	{
		uint8_t L_10 = V_1;
		G_B4_0 = ((int32_t)((int32_t)L_10+(int32_t)((int32_t)55)));
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_002b:
	{
		NullCheck(G_B4_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B4_2, G_B4_1);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (Il2CppChar)(((int32_t)((uint16_t)G_B4_0))));
		ByteU5BU5D_t3397334013* L_11 = ___data0;
		int32_t L_12 = ___offset1;
		int32_t L_13 = V_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, ((int32_t)((int32_t)L_12+(int32_t)L_13)));
		int32_t L_14 = ((int32_t)((int32_t)L_12+(int32_t)L_13));
		uint8_t L_15 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = (((int32_t)((uint8_t)((int32_t)((int32_t)L_15&(int32_t)((int32_t)15))))));
		CharU5BU5D_t1328083999* L_16 = V_0;
		int32_t L_17 = V_2;
		uint8_t L_18 = V_1;
		G_B5_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_17*(int32_t)2))+(int32_t)1));
		G_B5_1 = L_16;
		if ((((int32_t)L_18) > ((int32_t)((int32_t)9))))
		{
			G_B6_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_17*(int32_t)2))+(int32_t)1));
			G_B6_1 = L_16;
			goto IL_0049;
		}
	}
	{
		uint8_t L_19 = V_1;
		G_B7_0 = ((int32_t)((int32_t)L_19+(int32_t)((int32_t)48)));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_004d;
	}

IL_0049:
	{
		uint8_t L_20 = V_1;
		G_B7_0 = ((int32_t)((int32_t)L_20+(int32_t)((int32_t)55)));
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_004d:
	{
		NullCheck(G_B7_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B7_2, G_B7_1);
		(G_B7_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B7_1), (Il2CppChar)(((int32_t)((uint16_t)G_B7_0))));
		int32_t L_21 = V_2;
		V_2 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_0055:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = ___length2;
		V_4 = (bool)((((int32_t)L_22) < ((int32_t)L_23))? 1 : 0);
		bool L_24 = V_4;
		if (L_24)
		{
			goto IL_000e;
		}
	}
	{
		CharU5BU5D_t1328083999* L_25 = V_0;
		String_t* L_26 = String_CreateString_m3818307083(NULL, L_25, /*hidden argument*/NULL);
		V_3 = L_26;
		goto IL_0068;
	}

IL_0068:
	{
		String_t* L_27 = V_3;
		return L_27;
	}
}
// System.Int32 Lidgren.Network.NetUtility::BytesToHoldBits(System.Int32)
extern "C"  int32_t NetUtility_BytesToHoldBits_m1372162852 (Il2CppObject * __this /* static, unused */, int32_t ___numBits0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___numBits0;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0+(int32_t)7))/(int32_t)8));
		goto IL_0009;
	}

IL_0009:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 Lidgren.Network.NetUtility::RelativeSequenceNumber(System.Int32,System.Int32)
extern "C"  int32_t NetUtility_RelativeSequenceNumber_m1713083748 (Il2CppObject * __this /* static, unused */, int32_t ___nr0, int32_t ___expected1, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___nr0;
		int32_t L_1 = ___expected1;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0-(int32_t)L_1))+(int32_t)((int32_t)1024)))+(int32_t)((int32_t)512)))%(int32_t)((int32_t)1024)))-(int32_t)((int32_t)512)));
		goto IL_001f;
	}

IL_001f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Lidgren.Network.NetUtility::GetWindowSize(Lidgren.Network.NetDeliveryMethod)
extern "C"  int32_t NetUtility_GetWindowSize_m1637041950 (Il2CppObject * __this /* static, unused */, uint8_t ___method0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	uint8_t V_1 = 0;
	{
		uint8_t L_0 = ___method0;
		V_1 = L_0;
		uint8_t L_1 = V_1;
		if (L_1 == 0)
		{
			goto IL_002d;
		}
		if (L_1 == 1)
		{
			goto IL_0031;
		}
		if (L_1 == 2)
		{
			goto IL_0031;
		}
	}
	{
		uint8_t L_2 = V_1;
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)34))) == 0)
		{
			goto IL_003e;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)34))) == 1)
		{
			goto IL_003e;
		}
	}
	{
		uint8_t L_3 = V_1;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)67))))
		{
			goto IL_0039;
		}
	}
	{
		goto IL_003e;
	}

IL_002d:
	{
		V_0 = 0;
		goto IL_0043;
	}

IL_0031:
	{
		V_0 = ((int32_t)128);
		goto IL_0043;
	}

IL_0039:
	{
		V_0 = ((int32_t)64);
		goto IL_0043;
	}

IL_003e:
	{
		V_0 = ((int32_t)64);
		goto IL_0043;
	}

IL_0043:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// Lidgren.Network.NetDeliveryMethod Lidgren.Network.NetUtility::GetDeliveryMethod(Lidgren.Network.NetMessageType)
extern "C"  uint8_t NetUtility_GetDeliveryMethod_m2383198164 (Il2CppObject * __this /* static, unused */, uint8_t ___mtp0, const MethodInfo* method)
{
	uint8_t V_0 = 0;
	bool V_1 = false;
	{
		uint8_t L_0 = ___mtp0;
		V_1 = (bool)((((int32_t)L_0) < ((int32_t)((int32_t)67)))? 1 : 0);
		bool L_1 = V_1;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		V_0 = ((int32_t)67);
		goto IL_003b;
	}

IL_000f:
	{
		uint8_t L_2 = ___mtp0;
		V_1 = (bool)((((int32_t)L_2) < ((int32_t)((int32_t)35)))? 1 : 0);
		bool L_3 = V_1;
		if (L_3)
		{
			goto IL_001d;
		}
	}
	{
		V_0 = ((int32_t)35);
		goto IL_003b;
	}

IL_001d:
	{
		uint8_t L_4 = ___mtp0;
		V_1 = (bool)((((int32_t)L_4) < ((int32_t)((int32_t)34)))? 1 : 0);
		bool L_5 = V_1;
		if (L_5)
		{
			goto IL_002b;
		}
	}
	{
		V_0 = ((int32_t)34);
		goto IL_003b;
	}

IL_002b:
	{
		uint8_t L_6 = ___mtp0;
		V_1 = (bool)((((int32_t)L_6) < ((int32_t)2))? 1 : 0);
		bool L_7 = V_1;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		V_0 = 2;
		goto IL_003b;
	}

IL_0037:
	{
		V_0 = 1;
		goto IL_003b;
	}

IL_003b:
	{
		uint8_t L_8 = V_0;
		return L_8;
	}
}
// System.Byte[] Lidgren.Network.NetUtility::ComputeSHAHash(System.Byte[])
extern Il2CppClass* NetUtility_t3562260209_il2cpp_TypeInfo_var;
extern const uint32_t NetUtility_ComputeSHAHash_m2577505156_MetadataUsageId;
extern "C"  ByteU5BU5D_t3397334013* NetUtility_ComputeSHAHash_m2577505156 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bytes0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetUtility_ComputeSHAHash_m2577505156_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t3397334013* V_0 = NULL;
	{
		ByteU5BU5D_t3397334013* L_0 = ___bytes0;
		ByteU5BU5D_t3397334013* L_1 = ___bytes0;
		NullCheck(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(NetUtility_t3562260209_il2cpp_TypeInfo_var);
		ByteU5BU5D_t3397334013* L_2 = NetUtility_ComputeSHAHash_m3941709570(NULL /*static, unused*/, L_0, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_1)->max_length)))), /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000e;
	}

IL_000e:
	{
		ByteU5BU5D_t3397334013* L_3 = V_0;
		return L_3;
	}
}
// System.UInt64 Lidgren.Network.NetUtility::GetPlatformSeed(System.Int32)
extern Il2CppClass* Stopwatch_t1380178105_il2cpp_TypeInfo_var;
extern const uint32_t NetUtility_GetPlatformSeed_m3510865201_MetadataUsageId;
extern "C"  uint64_t NetUtility_GetPlatformSeed_m3510865201 (Il2CppObject * __this /* static, unused */, int32_t ___seedInc0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetUtility_GetPlatformSeed_m3510865201_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Stopwatch_t1380178105_il2cpp_TypeInfo_var);
		int64_t L_0 = Stopwatch_GetTimestamp_m4156329811(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		uint64_t L_1 = V_0;
		int64_t L_2 = Environment_get_WorkingSet_m3778626649(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = ___seedInc0;
		V_1 = ((int64_t)((int64_t)L_1^(int64_t)((int64_t)((int64_t)L_2+(int64_t)(((int64_t)((int64_t)L_3)))))));
		goto IL_0014;
	}

IL_0014:
	{
		uint64_t L_4 = V_1;
		return L_4;
	}
}
// System.Net.NetworkInformation.NetworkInterface Lidgren.Network.NetUtility::GetNetworkInterface()
extern Il2CppClass* NetworkInterface_t63927633_il2cpp_TypeInfo_var;
extern Il2CppClass* IEnumerator_1_t395310471_il2cpp_TypeInfo_var;
extern Il2CppClass* IEnumerator_t1466026749_il2cpp_TypeInfo_var;
extern Il2CppClass* IDisposable_t2427283555_il2cpp_TypeInfo_var;
extern const uint32_t NetUtility_GetNetworkInterface_m1628895093_MetadataUsageId;
extern "C"  NetworkInterface_t63927633 * NetUtility_GetNetworkInterface_m1628895093 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetUtility_GetNetworkInterface_m1628895093_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	IPGlobalProperties_t430107897 * V_0 = NULL;
	NetworkInterfaceU5BU5D_t4157644364* V_1 = NULL;
	NetworkInterface_t63927633 * V_2 = NULL;
	NetworkInterface_t63927633 * V_3 = NULL;
	IPInterfaceProperties_t3986609851 * V_4 = NULL;
	UnicastIPAddressInformation_t2919786644 * V_5 = NULL;
	NetworkInterface_t63927633 * V_6 = NULL;
	bool V_7 = false;
	NetworkInterfaceU5BU5D_t4157644364* V_8 = NULL;
	int32_t V_9 = 0;
	Il2CppObject* V_10 = NULL;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B25_0 = 0;
	{
		IPGlobalProperties_t430107897 * L_0 = IPGlobalProperties_GetIPGlobalProperties_m3339074596(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		IPGlobalProperties_t430107897 * L_1 = V_0;
		V_7 = (bool)((((int32_t)((((Il2CppObject*)(IPGlobalProperties_t430107897 *)L_1) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_7;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		V_6 = (NetworkInterface_t63927633 *)NULL;
		goto IL_0140;
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkInterface_t63927633_il2cpp_TypeInfo_var);
		NetworkInterfaceU5BU5D_t4157644364* L_3 = NetworkInterface_GetAllNetworkInterfaces_m3928187668(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_3;
		NetworkInterfaceU5BU5D_t4157644364* L_4 = V_1;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		NetworkInterfaceU5BU5D_t4157644364* L_5 = V_1;
		NullCheck(L_5);
		G_B5_0 = ((((int32_t)((((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_5)->max_length))))) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0031;
	}

IL_0030:
	{
		G_B5_0 = 0;
	}

IL_0031:
	{
		V_7 = (bool)G_B5_0;
		bool L_6 = V_7;
		if (L_6)
		{
			goto IL_0040;
		}
	}
	{
		V_6 = (NetworkInterface_t63927633 *)NULL;
		goto IL_0140;
	}

IL_0040:
	{
		V_2 = (NetworkInterface_t63927633 *)NULL;
		NetworkInterfaceU5BU5D_t4157644364* L_7 = V_1;
		V_8 = L_7;
		V_9 = 0;
		goto IL_012a;
	}

IL_004e:
	{
		NetworkInterfaceU5BU5D_t4157644364* L_8 = V_8;
		int32_t L_9 = V_9;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		NetworkInterface_t63927633 * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		NetworkInterface_t63927633 * L_12 = V_3;
		NullCheck(L_12);
		int32_t L_13 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.NetworkInterface::get_NetworkInterfaceType() */, L_12);
		if ((((int32_t)L_13) == ((int32_t)((int32_t)24))))
		{
			goto IL_006d;
		}
	}
	{
		NetworkInterface_t63927633 * L_14 = V_3;
		NullCheck(L_14);
		int32_t L_15 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.NetworkInterface::get_NetworkInterfaceType() */, L_14);
		G_B11_0 = ((((int32_t)((((int32_t)L_15) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_006e;
	}

IL_006d:
	{
		G_B11_0 = 0;
	}

IL_006e:
	{
		V_7 = (bool)G_B11_0;
		bool L_16 = V_7;
		if (L_16)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0124;
	}

IL_007a:
	{
		NetworkInterface_t63927633 * L_17 = V_3;
		NullCheck(L_17);
		bool L_18 = VirtFuncInvoker1< bool, int32_t >::Invoke(6 /* System.Boolean System.Net.NetworkInformation.NetworkInterface::Supports(System.Net.NetworkInformation.NetworkInterfaceComponent) */, L_17, 0);
		V_7 = L_18;
		bool L_19 = V_7;
		if (L_19)
		{
			goto IL_008c;
		}
	}
	{
		goto IL_0124;
	}

IL_008c:
	{
		NetworkInterface_t63927633 * L_20 = V_2;
		V_7 = (bool)((((int32_t)((((Il2CppObject*)(NetworkInterface_t63927633 *)L_20) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_7;
		if (L_21)
		{
			goto IL_009b;
		}
	}
	{
		NetworkInterface_t63927633 * L_22 = V_3;
		V_2 = L_22;
	}

IL_009b:
	{
		NetworkInterface_t63927633 * L_23 = V_3;
		NullCheck(L_23);
		int32_t L_24 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Net.NetworkInformation.OperationalStatus System.Net.NetworkInformation.NetworkInterface::get_OperationalStatus() */, L_23);
		V_7 = (bool)((((int32_t)L_24) == ((int32_t)1))? 1 : 0);
		bool L_25 = V_7;
		if (L_25)
		{
			goto IL_00ac;
		}
	}
	{
		goto IL_0124;
	}

IL_00ac:
	{
		NetworkInterface_t63927633 * L_26 = V_3;
		NullCheck(L_26);
		IPInterfaceProperties_t3986609851 * L_27 = VirtFuncInvoker0< IPInterfaceProperties_t3986609851 * >::Invoke(4 /* System.Net.NetworkInformation.IPInterfaceProperties System.Net.NetworkInformation.NetworkInterface::GetIPProperties() */, L_26);
		V_4 = L_27;
		IPInterfaceProperties_t3986609851 * L_28 = V_4;
		NullCheck(L_28);
		UnicastIPAddressInformationCollection_t347163204 * L_29 = VirtFuncInvoker0< UnicastIPAddressInformationCollection_t347163204 * >::Invoke(4 /* System.Net.NetworkInformation.UnicastIPAddressInformationCollection System.Net.NetworkInformation.IPInterfaceProperties::get_UnicastAddresses() */, L_28);
		NullCheck(L_29);
		Il2CppObject* L_30 = VirtFuncInvoker0< Il2CppObject* >::Invoke(17 /* System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.UnicastIPAddressInformation> System.Net.NetworkInformation.UnicastIPAddressInformationCollection::GetEnumerator() */, L_29);
		V_10 = L_30;
	}

IL_00c3:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00ff;
		}

IL_00c5:
		{
			Il2CppObject* L_31 = V_10;
			NullCheck(L_31);
			UnicastIPAddressInformation_t2919786644 * L_32 = InterfaceFuncInvoker0< UnicastIPAddressInformation_t2919786644 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.UnicastIPAddressInformation>::get_Current() */, IEnumerator_1_t395310471_il2cpp_TypeInfo_var, L_31);
			V_5 = L_32;
			UnicastIPAddressInformation_t2919786644 * L_33 = V_5;
			if (!L_33)
			{
				goto IL_00f0;
			}
		}

IL_00d3:
		{
			UnicastIPAddressInformation_t2919786644 * L_34 = V_5;
			NullCheck(L_34);
			IPAddress_t1399971723 * L_35 = VirtFuncInvoker0< IPAddress_t1399971723 * >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformation::get_Address() */, L_34);
			if (!L_35)
			{
				goto IL_00f0;
			}
		}

IL_00dc:
		{
			UnicastIPAddressInformation_t2919786644 * L_36 = V_5;
			NullCheck(L_36);
			IPAddress_t1399971723 * L_37 = VirtFuncInvoker0< IPAddress_t1399971723 * >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformation::get_Address() */, L_36);
			NullCheck(L_37);
			int32_t L_38 = IPAddress_get_AddressFamily_m2727317531(L_37, /*hidden argument*/NULL);
			G_B25_0 = ((((int32_t)((((int32_t)L_38) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			goto IL_00f1;
		}

IL_00f0:
		{
			G_B25_0 = 1;
		}

IL_00f1:
		{
			V_7 = (bool)G_B25_0;
			bool L_39 = V_7;
			if (L_39)
			{
				goto IL_00fe;
			}
		}

IL_00f8:
		{
			NetworkInterface_t63927633 * L_40 = V_3;
			V_6 = L_40;
			IL2CPP_LEAVE(0x140, FINALLY_010e);
		}

IL_00fe:
		{
		}

IL_00ff:
		{
			Il2CppObject* L_41 = V_10;
			NullCheck(L_41);
			bool L_42 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_41);
			V_7 = L_42;
			bool L_43 = V_7;
			if (L_43)
			{
				goto IL_00c5;
			}
		}

IL_010c:
		{
			IL2CPP_LEAVE(0x122, FINALLY_010e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_010e;
	}

FINALLY_010e:
	{ // begin finally (depth: 1)
		{
			Il2CppObject* L_44 = V_10;
			V_7 = (bool)((((Il2CppObject*)(Il2CppObject*)L_44) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
			bool L_45 = V_7;
			if (L_45)
			{
				goto IL_0121;
			}
		}

IL_0119:
		{
			Il2CppObject* L_46 = V_10;
			NullCheck(L_46);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_46);
		}

IL_0121:
		{
			IL2CPP_END_FINALLY(270)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(270)
	{
		IL2CPP_JUMP_TBL(0x140, IL_0140)
		IL2CPP_JUMP_TBL(0x122, IL_0122)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_0122:
	{
	}

IL_0124:
	{
		int32_t L_47 = V_9;
		V_9 = ((int32_t)((int32_t)L_47+(int32_t)1));
	}

IL_012a:
	{
		int32_t L_48 = V_9;
		NetworkInterfaceU5BU5D_t4157644364* L_49 = V_8;
		NullCheck(L_49);
		V_7 = (bool)((((int32_t)L_48) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_49)->max_length))))))? 1 : 0);
		bool L_50 = V_7;
		if (L_50)
		{
			goto IL_004e;
		}
	}
	{
		NetworkInterface_t63927633 * L_51 = V_2;
		V_6 = L_51;
		goto IL_0140;
	}

IL_0140:
	{
		NetworkInterface_t63927633 * L_52 = V_6;
		return L_52;
	}
}
// System.Byte[] Lidgren.Network.NetUtility::GetMacAddressBytes()
extern Il2CppClass* NetUtility_t3562260209_il2cpp_TypeInfo_var;
extern const uint32_t NetUtility_GetMacAddressBytes_m2783516176_MetadataUsageId;
extern "C"  ByteU5BU5D_t3397334013* NetUtility_GetMacAddressBytes_m2783516176 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetUtility_GetMacAddressBytes_m2783516176_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	NetworkInterface_t63927633 * V_0 = NULL;
	ByteU5BU5D_t3397334013* V_1 = NULL;
	bool V_2 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetUtility_t3562260209_il2cpp_TypeInfo_var);
		NetworkInterface_t63927633 * L_0 = NetUtility_GetNetworkInterface_m1628895093(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		NetworkInterface_t63927633 * L_1 = V_0;
		V_2 = (bool)((((int32_t)((((Il2CppObject*)(NetworkInterface_t63927633 *)L_1) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		V_1 = (ByteU5BU5D_t3397334013*)NULL;
		goto IL_0024;
	}

IL_0016:
	{
		NetworkInterface_t63927633 * L_3 = V_0;
		NullCheck(L_3);
		PhysicalAddress_t1613893277 * L_4 = VirtFuncInvoker0< PhysicalAddress_t1613893277 * >::Invoke(5 /* System.Net.NetworkInformation.PhysicalAddress System.Net.NetworkInformation.NetworkInterface::GetPhysicalAddress() */, L_3);
		NullCheck(L_4);
		ByteU5BU5D_t3397334013* L_5 = PhysicalAddress_GetAddressBytes_m3545084778(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_0024;
	}

IL_0024:
	{
		ByteU5BU5D_t3397334013* L_6 = V_1;
		return L_6;
	}
}
// System.Net.IPAddress Lidgren.Network.NetUtility::GetBroadcastAddress()
extern Il2CppClass* NetUtility_t3562260209_il2cpp_TypeInfo_var;
extern Il2CppClass* IEnumerator_1_t395310471_il2cpp_TypeInfo_var;
extern Il2CppClass* ArgumentException_t3259014390_il2cpp_TypeInfo_var;
extern Il2CppClass* ByteU5BU5D_t3397334013_il2cpp_TypeInfo_var;
extern Il2CppClass* IPAddress_t1399971723_il2cpp_TypeInfo_var;
extern Il2CppClass* IEnumerator_t1466026749_il2cpp_TypeInfo_var;
extern Il2CppClass* IDisposable_t2427283555_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1780020358;
extern const uint32_t NetUtility_GetBroadcastAddress_m2689141683_MetadataUsageId;
extern "C"  IPAddress_t1399971723 * NetUtility_GetBroadcastAddress_m2689141683 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetUtility_GetBroadcastAddress_m2689141683_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	NetworkInterface_t63927633 * V_0 = NULL;
	IPInterfaceProperties_t3986609851 * V_1 = NULL;
	UnicastIPAddressInformation_t2919786644 * V_2 = NULL;
	IPAddress_t1399971723 * V_3 = NULL;
	ByteU5BU5D_t3397334013* V_4 = NULL;
	ByteU5BU5D_t3397334013* V_5 = NULL;
	ByteU5BU5D_t3397334013* V_6 = NULL;
	int32_t V_7 = 0;
	IPAddress_t1399971723 * V_8 = NULL;
	bool V_9 = false;
	Il2CppObject* V_10 = NULL;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B8_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetUtility_t3562260209_il2cpp_TypeInfo_var);
		NetworkInterface_t63927633 * L_0 = NetUtility_GetNetworkInterface_m1628895093(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		NetworkInterface_t63927633 * L_1 = V_0;
		V_9 = (bool)((((int32_t)((((Il2CppObject*)(NetworkInterface_t63927633 *)L_1) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_9;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		V_8 = (IPAddress_t1399971723 *)NULL;
		goto IL_0119;
	}

IL_001c:
	{
		NetworkInterface_t63927633 * L_3 = V_0;
		NullCheck(L_3);
		IPInterfaceProperties_t3986609851 * L_4 = VirtFuncInvoker0< IPInterfaceProperties_t3986609851 * >::Invoke(4 /* System.Net.NetworkInformation.IPInterfaceProperties System.Net.NetworkInformation.NetworkInterface::GetIPProperties() */, L_3);
		V_1 = L_4;
		IPInterfaceProperties_t3986609851 * L_5 = V_1;
		NullCheck(L_5);
		UnicastIPAddressInformationCollection_t347163204 * L_6 = VirtFuncInvoker0< UnicastIPAddressInformationCollection_t347163204 * >::Invoke(4 /* System.Net.NetworkInformation.UnicastIPAddressInformationCollection System.Net.NetworkInformation.IPInterfaceProperties::get_UnicastAddresses() */, L_5);
		NullCheck(L_6);
		Il2CppObject* L_7 = VirtFuncInvoker0< Il2CppObject* >::Invoke(17 /* System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.UnicastIPAddressInformation> System.Net.NetworkInformation.UnicastIPAddressInformationCollection::GetEnumerator() */, L_6);
		V_10 = L_7;
	}

IL_0031:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00e9;
		}

IL_0036:
		{
			Il2CppObject* L_8 = V_10;
			NullCheck(L_8);
			UnicastIPAddressInformation_t2919786644 * L_9 = InterfaceFuncInvoker0< UnicastIPAddressInformation_t2919786644 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.UnicastIPAddressInformation>::get_Current() */, IEnumerator_1_t395310471_il2cpp_TypeInfo_var, L_8);
			V_2 = L_9;
			UnicastIPAddressInformation_t2919786644 * L_10 = V_2;
			if (!L_10)
			{
				goto IL_005d;
			}
		}

IL_0042:
		{
			UnicastIPAddressInformation_t2919786644 * L_11 = V_2;
			NullCheck(L_11);
			IPAddress_t1399971723 * L_12 = VirtFuncInvoker0< IPAddress_t1399971723 * >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformation::get_Address() */, L_11);
			if (!L_12)
			{
				goto IL_005d;
			}
		}

IL_004a:
		{
			UnicastIPAddressInformation_t2919786644 * L_13 = V_2;
			NullCheck(L_13);
			IPAddress_t1399971723 * L_14 = VirtFuncInvoker0< IPAddress_t1399971723 * >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformation::get_Address() */, L_13);
			NullCheck(L_14);
			int32_t L_15 = IPAddress_get_AddressFamily_m2727317531(L_14, /*hidden argument*/NULL);
			G_B8_0 = ((((int32_t)((((int32_t)L_15) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			goto IL_005e;
		}

IL_005d:
		{
			G_B8_0 = 1;
		}

IL_005e:
		{
			V_9 = (bool)G_B8_0;
			bool L_16 = V_9;
			if (L_16)
			{
				goto IL_00e8;
			}
		}

IL_0068:
		{
			UnicastIPAddressInformation_t2919786644 * L_17 = V_2;
			NullCheck(L_17);
			IPAddress_t1399971723 * L_18 = VirtFuncInvoker0< IPAddress_t1399971723 * >::Invoke(5 /* System.Net.IPAddress System.Net.NetworkInformation.UnicastIPAddressInformation::get_IPv4Mask() */, L_17);
			V_3 = L_18;
			UnicastIPAddressInformation_t2919786644 * L_19 = V_2;
			NullCheck(L_19);
			IPAddress_t1399971723 * L_20 = VirtFuncInvoker0< IPAddress_t1399971723 * >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformation::get_Address() */, L_19);
			NullCheck(L_20);
			ByteU5BU5D_t3397334013* L_21 = IPAddress_GetAddressBytes_m3037024450(L_20, /*hidden argument*/NULL);
			V_4 = L_21;
			IPAddress_t1399971723 * L_22 = V_3;
			NullCheck(L_22);
			ByteU5BU5D_t3397334013* L_23 = IPAddress_GetAddressBytes_m3037024450(L_22, /*hidden argument*/NULL);
			V_5 = L_23;
			ByteU5BU5D_t3397334013* L_24 = V_4;
			NullCheck(L_24);
			ByteU5BU5D_t3397334013* L_25 = V_5;
			NullCheck(L_25);
			V_9 = (bool)((((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_24)->max_length))))) == ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_25)->max_length))))))? 1 : 0);
			bool L_26 = V_9;
			if (L_26)
			{
				goto IL_00a0;
			}
		}

IL_0095:
		{
			ArgumentException_t3259014390 * L_27 = (ArgumentException_t3259014390 *)il2cpp_codegen_object_new(ArgumentException_t3259014390_il2cpp_TypeInfo_var);
			ArgumentException__ctor_m3739475201(L_27, _stringLiteral1780020358, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_27);
		}

IL_00a0:
		{
			ByteU5BU5D_t3397334013* L_28 = V_4;
			NullCheck(L_28);
			V_6 = ((ByteU5BU5D_t3397334013*)SZArrayNew(ByteU5BU5D_t3397334013_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_28)->max_length))))));
			V_7 = 0;
			goto IL_00cf;
		}

IL_00b0:
		{
			ByteU5BU5D_t3397334013* L_29 = V_6;
			int32_t L_30 = V_7;
			ByteU5BU5D_t3397334013* L_31 = V_4;
			int32_t L_32 = V_7;
			NullCheck(L_31);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
			int32_t L_33 = L_32;
			uint8_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
			ByteU5BU5D_t3397334013* L_35 = V_5;
			int32_t L_36 = V_7;
			NullCheck(L_35);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_35, L_36);
			int32_t L_37 = L_36;
			uint8_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
			NullCheck(L_29);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_29, L_30);
			(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_34|(int32_t)((int32_t)((int32_t)L_38^(int32_t)((int32_t)255)))))))));
			int32_t L_39 = V_7;
			V_7 = ((int32_t)((int32_t)L_39+(int32_t)1));
		}

IL_00cf:
		{
			int32_t L_40 = V_7;
			ByteU5BU5D_t3397334013* L_41 = V_6;
			NullCheck(L_41);
			V_9 = (bool)((((int32_t)L_40) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_41)->max_length))))))? 1 : 0);
			bool L_42 = V_9;
			if (L_42)
			{
				goto IL_00b0;
			}
		}

IL_00dd:
		{
			ByteU5BU5D_t3397334013* L_43 = V_6;
			IPAddress_t1399971723 * L_44 = (IPAddress_t1399971723 *)il2cpp_codegen_object_new(IPAddress_t1399971723_il2cpp_TypeInfo_var);
			IPAddress__ctor_m1440892504(L_44, L_43, /*hidden argument*/NULL);
			V_8 = L_44;
			IL2CPP_LEAVE(0x119, FINALLY_00fb);
		}

IL_00e8:
		{
		}

IL_00e9:
		{
			Il2CppObject* L_45 = V_10;
			NullCheck(L_45);
			bool L_46 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_45);
			V_9 = L_46;
			bool L_47 = V_9;
			if (L_47)
			{
				goto IL_0036;
			}
		}

IL_00f9:
		{
			IL2CPP_LEAVE(0x10F, FINALLY_00fb);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_00fb;
	}

FINALLY_00fb:
	{ // begin finally (depth: 1)
		{
			Il2CppObject* L_48 = V_10;
			V_9 = (bool)((((Il2CppObject*)(Il2CppObject*)L_48) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
			bool L_49 = V_9;
			if (L_49)
			{
				goto IL_010e;
			}
		}

IL_0106:
		{
			Il2CppObject* L_50 = V_10;
			NullCheck(L_50);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_50);
		}

IL_010e:
		{
			IL2CPP_END_FINALLY(251)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(251)
	{
		IL2CPP_JUMP_TBL(0x119, IL_0119)
		IL2CPP_JUMP_TBL(0x10F, IL_010f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_010f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t1399971723_il2cpp_TypeInfo_var);
		IPAddress_t1399971723 * L_51 = ((IPAddress_t1399971723_StaticFields*)IPAddress_t1399971723_il2cpp_TypeInfo_var->static_fields)->get_Broadcast_5();
		V_8 = L_51;
		goto IL_0119;
	}

IL_0119:
	{
		IPAddress_t1399971723 * L_52 = V_8;
		return L_52;
	}
}
// System.Void Lidgren.Network.NetUtility::Sleep(System.Int32)
extern Il2CppClass* Thread_t241561612_il2cpp_TypeInfo_var;
extern const uint32_t NetUtility_Sleep_m886463228_MetadataUsageId;
extern "C"  void NetUtility_Sleep_m886463228 (Il2CppObject * __this /* static, unused */, int32_t ___milliseconds0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetUtility_Sleep_m886463228_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___milliseconds0;
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t241561612_il2cpp_TypeInfo_var);
		Thread_Sleep_m1248422015(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Net.IPAddress Lidgren.Network.NetUtility::CreateAddressFromBytes(System.Byte[])
extern Il2CppClass* IPAddress_t1399971723_il2cpp_TypeInfo_var;
extern const uint32_t NetUtility_CreateAddressFromBytes_m1989273768_MetadataUsageId;
extern "C"  IPAddress_t1399971723 * NetUtility_CreateAddressFromBytes_m1989273768 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bytes0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetUtility_CreateAddressFromBytes_m1989273768_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	IPAddress_t1399971723 * V_0 = NULL;
	{
		ByteU5BU5D_t3397334013* L_0 = ___bytes0;
		IPAddress_t1399971723 * L_1 = (IPAddress_t1399971723 *)il2cpp_codegen_object_new(IPAddress_t1399971723_il2cpp_TypeInfo_var);
		IPAddress__ctor_m1440892504(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		IPAddress_t1399971723 * L_2 = V_0;
		return L_2;
	}
}
// System.Byte[] Lidgren.Network.NetUtility::ComputeSHAHash(System.Byte[],System.Int32,System.Int32)
extern Il2CppClass* NetUtility_t3562260209_il2cpp_TypeInfo_var;
extern const uint32_t NetUtility_ComputeSHAHash_m3941709570_MetadataUsageId;
extern "C"  ByteU5BU5D_t3397334013* NetUtility_ComputeSHAHash_m3941709570 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetUtility_ComputeSHAHash_m3941709570_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t3397334013* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetUtility_t3562260209_il2cpp_TypeInfo_var);
		SHA256_t582564463 * L_0 = ((NetUtility_t3562260209_StaticFields*)NetUtility_t3562260209_il2cpp_TypeInfo_var->static_fields)->get_s_sha_4();
		ByteU5BU5D_t3397334013* L_1 = ___bytes0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___count2;
		NullCheck(L_0);
		ByteU5BU5D_t3397334013* L_4 = HashAlgorithm_ComputeHash_m3945506296(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0011;
	}

IL_0011:
	{
		ByteU5BU5D_t3397334013* L_5 = V_0;
		return L_5;
	}
}
// System.Void Lidgren.Network.NetUtility::.cctor()
extern Il2CppClass* Type_t_il2cpp_TypeInfo_var;
extern Il2CppClass* NetUtility_t3562260209_il2cpp_TypeInfo_var;
extern Il2CppClass* Stopwatch_t1380178105_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2740602285;
extern const uint32_t NetUtility__cctor_m1679246969_MetadataUsageId;
extern "C"  void NetUtility__cctor_m1679246969 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetUtility__cctor_m1679246969_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = il2cpp_codegen_get_type((Il2CppMethodPointer)&Type_GetType_m773255995, _stringLiteral2740602285, "Lidgren.Network, Version=2012.1.7.0, Culture=neutral, PublicKeyToken=null");
		((NetUtility_t3562260209_StaticFields*)NetUtility_t3562260209_il2cpp_TypeInfo_var->static_fields)->set_IsMono_0((bool)((((int32_t)((((Il2CppObject*)(Type_t *)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0));
		IL2CPP_RUNTIME_CLASS_INIT(Stopwatch_t1380178105_il2cpp_TypeInfo_var);
		int64_t L_1 = Stopwatch_GetTimestamp_m4156329811(NULL /*static, unused*/, /*hidden argument*/NULL);
		((NetUtility_t3562260209_StaticFields*)NetUtility_t3562260209_il2cpp_TypeInfo_var->static_fields)->set_s_timeInitialized_2(L_1);
		int64_t L_2 = ((Stopwatch_t1380178105_StaticFields*)Stopwatch_t1380178105_il2cpp_TypeInfo_var->static_fields)->get_Frequency_0();
		((NetUtility_t3562260209_StaticFields*)NetUtility_t3562260209_il2cpp_TypeInfo_var->static_fields)->set_s_dInvFreq_3(((double)((double)(1.0)/(double)(((double)((double)L_2))))));
		SHA256_t582564463 * L_3 = SHA256_Create_m3464364143(NULL /*static, unused*/, /*hidden argument*/NULL);
		((NetUtility_t3562260209_StaticFields*)NetUtility_t3562260209_il2cpp_TypeInfo_var->static_fields)->set_s_sha_4(L_3);
		return;
	}
}
// System.Void Lidgren.Network.ReceivedFragmentGroup::.ctor()
extern "C"  void ReceivedFragmentGroup__ctor_m4190711617 (ReceivedFragmentGroup_t4108580702 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// Conversion methods for marshalling of: Lidgren.Network.SingleUIntUnion
extern "C" void SingleUIntUnion_t3787661257_marshal_pinvoke(const SingleUIntUnion_t3787661257& unmarshaled, SingleUIntUnion_t3787661257_marshaled_pinvoke& marshaled)
{
	marshaled.___SingleValue_0 = unmarshaled.get_SingleValue_0();
	marshaled.___UIntValue_1 = unmarshaled.get_UIntValue_1();
}
extern "C" void SingleUIntUnion_t3787661257_marshal_pinvoke_back(const SingleUIntUnion_t3787661257_marshaled_pinvoke& marshaled, SingleUIntUnion_t3787661257& unmarshaled)
{
	float unmarshaled_SingleValue_temp_0 = 0.0f;
	unmarshaled_SingleValue_temp_0 = marshaled.___SingleValue_0;
	unmarshaled.set_SingleValue_0(unmarshaled_SingleValue_temp_0);
	uint32_t unmarshaled_UIntValue_temp_1 = 0;
	unmarshaled_UIntValue_temp_1 = marshaled.___UIntValue_1;
	unmarshaled.set_UIntValue_1(unmarshaled_UIntValue_temp_1);
}
// Conversion method for clean up from marshalling of: Lidgren.Network.SingleUIntUnion
extern "C" void SingleUIntUnion_t3787661257_marshal_pinvoke_cleanup(SingleUIntUnion_t3787661257_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Lidgren.Network.SingleUIntUnion
extern "C" void SingleUIntUnion_t3787661257_marshal_com(const SingleUIntUnion_t3787661257& unmarshaled, SingleUIntUnion_t3787661257_marshaled_com& marshaled)
{
	marshaled.___SingleValue_0 = unmarshaled.get_SingleValue_0();
	marshaled.___UIntValue_1 = unmarshaled.get_UIntValue_1();
}
extern "C" void SingleUIntUnion_t3787661257_marshal_com_back(const SingleUIntUnion_t3787661257_marshaled_com& marshaled, SingleUIntUnion_t3787661257& unmarshaled)
{
	float unmarshaled_SingleValue_temp_0 = 0.0f;
	unmarshaled_SingleValue_temp_0 = marshaled.___SingleValue_0;
	unmarshaled.set_SingleValue_0(unmarshaled_SingleValue_temp_0);
	uint32_t unmarshaled_UIntValue_temp_1 = 0;
	unmarshaled_UIntValue_temp_1 = marshaled.___UIntValue_1;
	unmarshaled.set_UIntValue_1(unmarshaled_UIntValue_temp_1);
}
// Conversion method for clean up from marshalling of: Lidgren.Network.SingleUIntUnion
extern "C" void SingleUIntUnion_t3787661257_marshal_com_cleanup(SingleUIntUnion_t3787661257_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
