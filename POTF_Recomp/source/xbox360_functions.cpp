#include <cstdint>
#include <windows.h>
#include "ppc_context.h"
#include "ppc_recomp_shared.h"

PPC_FUNC(__imp__XamInputGetCapabilities)
{
    ctx.r3.u32 = 1;  // Success
}

PPC_FUNC(__imp__XamInputGetState)
{
    ctx.r3.u32 = 0;  // No input
}

PPC_FUNC(__imp__XamInputSetState)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamInputGetKeystrokeEx)
{
    ctx.r3.u32 = 0xC000009D;  // ERROR_DEVICE_NOT_CONNECTED
}

PPC_FUNC(__imp__XamShowMessageBoxUIEx)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XGetLanguage)
{
    ctx.r3.u32 = 1;  // English
}

PPC_FUNC(__imp__XGetAVPack)
{
    ctx.r3.u32 = 1;  // HDMI
}

PPC_FUNC(__imp__XamLoaderTerminateTitle)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamUserGetMembershipTierFromXUID)
{
    ctx.r3.u32 = 3;  // GOLD membership
}

PPC_FUNC(__imp__XamSessionCreateHandle)
{
    ctx.r3.u32 = 1;  // Fake handle
}

PPC_FUNC(__imp__XamSessionRefObjByHandle)
{
    ctx.r3.u32 = 1;  // Success
}

PPC_FUNC(__imp__XNetLogonGetMachineID)
{
    if (ctx.r3.ptr) {
        *(uint32_t*)ctx.r3.ptr = 0x12345678;
    }
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XNetLogonGetTitleID)
{
    ctx.r3.u32 = 0x4D530890;  // Random title ID
}

PPC_FUNC(__imp__XamUserWriteProfileSettings)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamAlloc)
{
    size_t size = ctx.r3.u32;
    ctx.r3.ptr = (double*)malloc(size);
}

PPC_FUNC(__imp__XamFree)
{
    free(ctx.r3.ptr);
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NetDll___WSAFDIsSet)
{
    ctx.r3.u32 = 0;  // Socket not in set
}

PPC_FUNC(__imp__NetDll_WSAWaitForMultipleEvents)
{
    ctx.r3.u32 = 0;  // Return immediately
}

PPC_FUNC(__imp__NetDll_WSAResetEvent)
{
    ctx.r3.u32 = 1;  // Success
}

PPC_FUNC(__imp__NetDll_WSASetEvent)
{
    ctx.r3.u32 = 1;  // Success
}

PPC_FUNC(__imp__NetDll_WSACloseEvent)
{
    ctx.r3.u32 = 1;  // Success
}

PPC_FUNC(__imp__NetDll_WSACreateEvent)
{
    ctx.r3.u32 = 1;  // Fake event handle
}

PPC_FUNC(__imp__NetDll_WSASetLastError)
{
    // Store error code but do nothing
}

PPC_FUNC(__imp__NetDll_WSAGetLastError)
{
    ctx.r3.u32 = 0;  // No error
}

PPC_FUNC(__imp__NetDll_inet_addr)
{
    ctx.r3.u32 = 0x7F000001;  // 127.0.0.1
}

PPC_FUNC(__imp__NetDll_WSAEventSelect)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NetDll_WSASendTo)
{
    ctx.r3.u32 = 0;  // Success, no bytes sent
}

PPC_FUNC(__imp__NetDll_sendto)
{
    ctx.r3.u32 = 0;  // Success, no bytes sent
}

PPC_FUNC(__imp__NetDll_WSASend)
{
    ctx.r3.u32 = 0;  // Success, no bytes sent
}

PPC_FUNC(__imp__NetDll_send)
{
    ctx.r3.u32 = 0;  // Success, no bytes sent
}

PPC_FUNC(__imp__NetDll_WSARecvFrom)
{
    ctx.r3.u32 = 0;  // Success, no bytes received
}

PPC_FUNC(__imp__NetDll_recvfrom)
{
    ctx.r3.u32 = 0;  // Success, no bytes received
}

PPC_FUNC(__imp__NetDll_WSARecv)
{
    ctx.r3.u32 = 0;  // Success, no bytes received
}

PPC_FUNC(__imp__NetDll_recv)
{
    ctx.r3.u32 = 0;  // Success, no bytes received
}

PPC_FUNC(__imp__NetDll_WSACancelOverlappedIO)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NetDll_WSAGetOverlappedResult)
{
    ctx.r3.u32 = 1;  // Operation completed
}

PPC_FUNC(__imp__NetDll_select)
{
    ctx.r3.u32 = 0;  // No sockets ready
}

PPC_FUNC(__imp__NetDll_accept)
{
    ctx.r3.u32 = -1;  // No pending connections
}

PPC_FUNC(__imp__NetDll_listen)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NetDll_connect)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NetDll_bind)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NetDll_getpeername)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NetDll_getsockname)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NetDll_getsockopt)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NetDll_setsockopt)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NetDll_ioctlsocket)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NetDll_shutdown)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NetDll_closesocket)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NetDll_socket)
{
    ctx.r3.u32 = 1;  // Return dummy socket handle
}

PPC_FUNC(__imp__NetDll_WSACleanup)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NetDll_WSAStartup)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NetDll_XNetSetOpt)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NetDll_XNetGetOpt)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NetDll_XNetQosGetListenStats)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NetDll_XNetGetBroadcastVersionStatus)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NetDll_XNetGetEthernetLinkStatus)
{
    ctx.r3.u32 = 1;  // Link is up
}

PPC_FUNC(__imp__NetDll_XNetGetDebugXnAddr)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NetDll_XNetGetTitleXnAddr)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NetDll_XNetQosRelease)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NetDll_XNetQosServiceLookup)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NetDll_XNetQosLookup)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NetDll_XNetQosListen)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NetDll_XNetDnsRelease)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NetDll_XNetDnsLookup)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NetDll_XNetGetConnectStatus)
{
    ctx.r3.u32 = 0;  // Connected
}

PPC_FUNC(__imp__NetDll_XNetConnect)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XGetVideoMode)
{
    ctx.r3.u32 = 1;  // Default video mode
}

PPC_FUNC(__imp__XNotifyGetNext)
{
    ctx.r3.u32 = 0;  // No notifications
}

PPC_FUNC(__imp__XGetGameRegion)
{
    ctx.r3.u32 = 1;  // NTSC/North America
}

PPC_FUNC(__imp__XNotifyPositionUI)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamNotifyCreateListener)
{
    ctx.r3.u32 = 1;  // Return dummy handle
}

PPC_FUNC(__imp__XamUserCheckPrivilege)
{
    ctx.r3.u32 = 1;  // Has privilege
}

PPC_FUNC(__imp__XamUserReadProfileSettings)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamUserGetSigninState)
{
    ctx.r3.u32 = 1;  // Signed in
}

PPC_FUNC(__imp__XamVoiceHeadsetPresent)
{
    ctx.r3.u32 = 0;  // No headset
}

PPC_FUNC(__imp__XamVoiceClose)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XMsgCancelIORequest)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamVoiceSubmitPacket)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamVoiceCreate)
{
    ctx.r3.u32 = 1;  // Return dummy handle
}

PPC_FUNC(__imp__XamUserAreUsersFriends)
{
    ctx.r3.u32 = 0;  // Not friends
}

PPC_FUNC(__imp__XamCreateEnumeratorHandle)
{
    ctx.r3.u32 = 1;  // Return dummy handle
}

PPC_FUNC(__imp__XMsgStartIORequestEx)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XMsgStartIORequest)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamGetSystemVersion)
{
    ctx.r3.u32 = 0x00020000;  // Version 2.0.0.0
}

PPC_FUNC(__imp__XMsgInProcessCall)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamGetPrivateEnumStructureFromHandle)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XMsgSystemProcessCall)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamShowSigninUI)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamShowSigninUIp)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamShowFriendsUI)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamShowPlayersUI)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamShowMessagesUI)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamShowKeyboardUI)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamShowQuickChatUI)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamShowVoiceMailUI)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamShowGamerCardUIForXUID)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamShowAchievementsUI)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamShowPlayerReviewUI)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamShowMarketplaceUI)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamShowDeviceSelectorUI)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamShowMessageBoxUI)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamShowMessageComposeUI)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamShowGameInviteUI)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamShowFriendRequestUI)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamShowDirtyDiscErrorUI)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__Refresh)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamContentCreateEx)
{
    ctx.r3.u32 = 1;  // Return dummy handle
}

PPC_FUNC(__imp__XamContentDelete)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamContentInstall)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamContentClose)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamContentFlush)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamContentSetThumbnail)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamContentGetThumbnail)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamContentGetCreator)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamContentGetLicenseMask)
{
    ctx.r3.u32 = 0xFFFFFFFF;  // Full license
}

PPC_FUNC(__imp__XamContentCreateEnumerator)
{
    ctx.r3.u32 = 1;  // Return dummy handle
}

PPC_FUNC(__imp__XamContentCreateDeviceEnumerator)
{
    ctx.r3.u32 = 1;  // Return dummy handle
}

PPC_FUNC(__imp__XamContentGetDeviceState)
{
    ctx.r3.u32 = 1;  // Device ready
}

PPC_FUNC(__imp__XamContentGetDeviceData)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamContentGetDeviceName)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamContentLaunchImage)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamContentResolve)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamUserGetName)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamUserCreateStatsEnumerator)
{
    ctx.r3.u32 = 1;  // Return dummy handle
}

PPC_FUNC(__imp__XamReadTileToTexture)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamParseGamerTileKey)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamWriteGamerTile)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamUserCreateAchievementEnumerator)
{
    ctx.r3.u32 = 1;  // Return dummy handle
}

PPC_FUNC(__imp__XamUserGetXUID)
{
    ctx.r3.u32 = 0x123456789;  // Dummy XUID
}

PPC_FUNC(__imp__XamUserGetSigninInfo)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamEnumerate)
{
    ctx.r3.u32 = 0;  // No more items
}

PPC_FUNC(__imp__XamLoaderLaunchTitle)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamGetExecutionId)
{
    ctx.r3.u32 = 0x12345678;  // Dummy execution ID
}

PPC_FUNC(__imp__NetDll_XNetXnAddrToMachineId)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NetDll_XNetUnregisterInAddr)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NetDll_XNetInAddrToString)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NetDll_XNetInAddrToServer)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NetDll_XNetInAddrToXnAddr)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NetDll_XNetTsAddrToInAddr)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NetDll_XNetServerToInAddr)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NetDll_XNetXnAddrToInAddr)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NetDll_XNetUnregisterKey)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NetDll_XNetRegisterKey)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NetDll_XNetCreateKey)
{
    ctx.r3.u32 = 1;  // Return dummy key
}

PPC_FUNC(__imp__NetDll_XNetRandom)
{
    ctx.r3.u32 = rand();  // Return random number
}

PPC_FUNC(__imp__NetDll_XNetCleanup)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NetDll_XNetStartup)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XamUserGetOnlineCountryFromXUID)
{
    ctx.r3.u32 = 1;  // United States
}

PPC_FUNC(__imp__XMASetInputBufferReadOffset)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XMASetOutputBufferReadOffset)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XMAIsOutputBufferValid)
{
    ctx.r3.u32 = 1;  // Valid
}

PPC_FUNC(__imp__XMAGetOutputBufferWriteOffset)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XMAGetOutputBufferReadOffset)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XMAGetInputBufferReadOffset)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XMASetInputBuffer1Valid)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XMASetInputBuffer0Valid)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XMADisableContext)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XMAIsInputBuffer0Valid)
{
    ctx.r3.u32 = 1;  // Valid
}

PPC_FUNC(__imp__XMAReleaseContext)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__RtlUnicodeToMultiByteN)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NtResumeThread)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__RtlTimeToTimeFields)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__KeQuerySystemTime)
{
    ctx.r3.u32 = GetTickCount64();  // Current system time
}

PPC_FUNC(__imp__XexUnloadImage)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XexUnloadImageAndExitThread)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XexGetProcedureAddress)
{
    ctx.r3.u32 = 1;  // Return dummy address
}

PPC_FUNC(__imp__XexLoadImage)
{
    ctx.r3.u32 = 1;  // Return dummy handle
}

PPC_FUNC(__imp__XexGetModuleSection)
{
    ctx.r3.u32 = 1;  // Return dummy section
}

PPC_FUNC(__imp__XexGetModuleHandle)
{
    ctx.r3.u32 = 1;  // Return dummy handle
}

PPC_FUNC(__imp__KeQueryPerformanceFrequency)
{
    ctx.r3.u32 = 3000000;  // 3MHz frequency
}

PPC_FUNC(__imp__FscSetCacheElementCount)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__FscGetCacheElementCount)
{
    ctx.r3.u32 = 1024;  // Default cache size
}

PPC_FUNC(__imp__ObOpenObjectByName)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__ExEventObjectType)
{
    ctx.r3.u32 = 1;  // Return dummy type
}

PPC_FUNC(__imp__NtPulseEvent)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NtCreateSemaphore)
{
    ctx.r3.u32 = 1;  // Return dummy handle
}

PPC_FUNC(__imp__ExSemaphoreObjectType)
{
    ctx.r3.u32 = 2;  // Return dummy type
}

PPC_FUNC(__imp__NtReleaseSemaphore)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NtSignalAndWaitForSingleObjectEx)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NtWaitForMultipleObjectsEx)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__ExTimerObjectType)
{
    ctx.r3.u32 = 3;  // Return dummy type
}

PPC_FUNC(__imp__NtSetEvent)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NtClearEvent)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NtWriteFile)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__ExFreePool)
{
    if (ctx.r3.ptr) {
        free(ctx.r3.ptr);
    }
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__ExAllocatePool)
{
    size_t size = ctx.r3.u32;
    ctx.r3.ptr = (double*)malloc(size);
}

PPC_FUNC(__imp__NtQueryFullAttributesFile)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__RtlFreeAnsiString)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__RtlUnicodeStringToAnsiString)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__RtlInitUnicodeString)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NtFlushBuffersFile)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__ExTerminateThread)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__KeTimeStampBundle)
{
    ctx.r3.u32 = GetTickCount64();  // Current timestamp
}

PPC_FUNC(__imp__NtCancelTimer)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NtSetTimerEx)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NtCreateTimer)
{
    ctx.r3.u32 = 1;  // Return dummy handle
}

PPC_FUNC(__imp__ExCreateThread)
{
    ctx.r3.u32 = 1;  // Return dummy thread handle
}

PPC_FUNC(__imp__KeDelayExecutionThread)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__RtlTimeFieldsToTime)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__KeCertMonitorData)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__VdGlobalDevice)
{
    ctx.r3.u32 = 1;  // Return dummy device handle
}

PPC_FUNC(__imp__VdQuerySystemCommandBuffer)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__sprintf)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__VdSetSystemCommandBuffer)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__VdPersistDisplay)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__VdSwap)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__VdGetSystemCommandBuffer)
{
    ctx.r3.u32 = 1;  // Return dummy buffer
}

PPC_FUNC(__imp__KeReleaseSpinLockFromRaisedIrql)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__KeAcquireSpinLockAtRaisedIrql)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__KiApcNormalRoutineNop)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__VdEnableRingBufferRPtrWriteBack)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__VdInitializeRingBuffer)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__MmGetPhysicalAddress)
{
    ctx.r3.u32 = ctx.r3.u32;  // Return same address for now
}

PPC_FUNC(__imp__VdSetSystemCommandBufferGpuIdentifierAddress)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__VdEnableDisableClockGating)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp___vsnprintf)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__VdShutdownEngines)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__ExRegisterTitleTerminateNotification)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__VdQueryVideoMode)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__VdGetCurrentDisplayInformation)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__VdSetDisplayMode)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__VdSetGraphicsInterruptCallback)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__VdInitializeEngines)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__VdIsHSIOTrainingSucceeded)
{
    ctx.r3.u32 = 1;  // Training succeeded
}

PPC_FUNC(__imp__VdGetCurrentDisplayGamma)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__VdQueryVideoFlags)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__VdCallGraphicsNotificationRoutines)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__VdGpuClockInMHz)
{
    ctx.r3.u32 = 500;  // 500MHz GPU clock
}

PPC_FUNC(__imp__VdInitializeScalerCommandBuffer)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__KeLeaveCriticalRegion)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__VdRetrainEDRAM)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__VdRetrainEDRAMWorker)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__VdHSIOCalibrationLock)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__KeEnterCriticalRegion)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__ObDeleteSymbolicLink)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__ObCreateSymbolicLink)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__KeLockL2)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__KeUnlockL2)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__KeResetEvent)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__KeWaitForSingleObject)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__KeSetEvent)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XMAInitializeContext)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XMASetOutputBufferValid)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XMAEnableContext)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XMACreateContext)
{
    ctx.r3.u32 = 1;  // Return dummy context handle
}

PPC_FUNC(__imp__KfAcquireSpinLock)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__KfReleaseSpinLock)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__RtlTryEnterCriticalSection)
{
    ctx.r3.u32 = 1;  // Successfully entered
}

PPC_FUNC(__imp__KeEnableFpuExceptions)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__RtlUnwind)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__KeTlsFree)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__KeTlsSetValue)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__KeTlsGetValue)
{
    ctx.r3.u32 = 0;  // Return default value
}

PPC_FUNC(__imp__KeTlsAlloc)
{
    ctx.r3.u32 = 1;  // Return dummy TLS index
}

PPC_FUNC(__imp__KeBugCheck)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NtWaitForSingleObjectEx)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__RtlRaiseException)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__RtlCompareMemory)
{
    ctx.r3.u32 = 0;  // Equal
}

PPC_FUNC(__imp__RtlCompareMemoryUlong)
{
    ctx.r3.u32 = 0;  // Equal
}

PPC_FUNC(__imp__KeGetCurrentProcessType)
{
    ctx.r3.u32 = 1;  // Game process
}

PPC_FUNC(__imp__KeBugCheckEx)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__RtlFillMemoryUlong)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__HalReturnToFirmware)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XexExecutableModuleHandle)
{
    ctx.r3.u32 = 1;  // Return dummy handle
}

PPC_FUNC(__imp__RtlImageXexHeaderField)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__KeDebugMonitorData)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__KeSetAffinityThread)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NtQueueApcThread)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NtSuspendThread)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__KeSetDisableBoostThread)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__KeQueryBasePriorityThread)
{
    ctx.r3.u32 = 8;  // Normal priority
}

PPC_FUNC(__imp__ExThreadObjectType)
{
    ctx.r3.u32 = 1;  // Return dummy type
}

PPC_FUNC(__imp__ObReferenceObjectByHandle)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__KeSetBasePriorityThread)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__ObLookupThreadByThreadId)
{
    ctx.r3.u32 = 1;  // Return dummy thread handle
}

PPC_FUNC(__imp__ObOpenObjectByPointer)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__ObDereferenceObject)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NtCreateFile)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NtReadFile)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NtReadFileScatter)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NtQueryDirectoryFile)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NtQueryVolumeInformationFile)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NtQueryInformationFile)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NtSetInformationFile)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NtOpenFile)
{
    ctx.r3.u32 = 0;  // Success
}


PPC_FUNC(__imp__DbgPrint)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XexCheckExecutablePrivilege)
{
    ctx.r3.u32 = 1;  // Has privilege
}

PPC_FUNC(__imp__ExGetXConfigSetting)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NtCreateEvent)
{
    ctx.r3.u32 = 1;  // Return dummy event handle
}

PPC_FUNC(__imp__NtClose)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__ExLoadedCommandLine)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XboxKrnlVersion)
{
    ctx.r3.u32 = 0x20000;  // Version 2.0.0.0
}

PPC_FUNC(__imp__NtDuplicateObject)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__MmQueryStatistics)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NtQueryVirtualMemory)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NtProtectVirtualMemory)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NtFreeVirtualMemory)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__RtlMultiByteToUnicodeN)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__RtlNtStatusToDosError)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__vswprintf)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__RtlInitAnsiString)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__DbgBreakPoint)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__MmQueryAddressProtect)
{
    ctx.r3.u32 = PAGE_EXECUTE_READWRITE;  // Default protection
}

PPC_FUNC(__imp__MmFreePhysicalMemory)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__MmSetAddressProtect)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__MmQueryAllocationSize)
{
    ctx.r3.u32 = 4096;  // Default page size
}

PPC_FUNC(__imp__MmAllocatePhysicalMemoryEx)
{
    ctx.r3.u32 = 1;  // Return dummy physical address
}

PPC_FUNC(__imp__NtAllocateVirtualMemory)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__RtlLeaveCriticalSection)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__RtlEnterCriticalSection)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__RtlInitializeCriticalSection)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XMAIsInputBuffer1Valid)
{
    ctx.r3.u32 = 1;  // Valid
}

PPC_FUNC(__imp__XAudioRegisterRenderDriverClient)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XAudioUnregisterRenderDriverClient)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XAudioSubmitRenderDriverFrame)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__KeRaiseIrqlToDpcLevel)
{
    ctx.r3.u32 = 2;  // DPC level
}

PPC_FUNC(__imp__KfLowerIrql)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XAudioQueryDriverPerformance)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__KeTryToAcquireSpinLockAtRaisedIrql)
{
    ctx.r3.u32 = 1;  // Acquired
}

PPC_FUNC(__imp__KeReleaseSemaphore)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__XAudioGetVoiceCategoryVolume)
{
    ctx.r3.u32 = 100;  // Full volume
}

PPC_FUNC(__imp__XAudioGetVoiceCategoryVolumeChangeMask)
{
    ctx.r3.u32 = 0;  // No changes
}

PPC_FUNC(__imp__KeWaitForMultipleObjects)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__KeResumeThread)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__KeInitializeSemaphore)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__ExAllocatePoolWithTag)
{
    size_t size = ctx.r3.u32;
    ctx.r3.ptr = (double*)malloc(size);
}

PPC_FUNC(__imp__MmAllocatePhysicalMemory)
{
    ctx.r3.u32 = 1;  // Return dummy physical address
}

PPC_FUNC(__imp__InterlockedFlushSList)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__InterlockedPopEntrySList)
{
    ctx.r3.u32 = 0;  // Empty list
}

PPC_FUNC(__imp__NtReleaseMutant)
{
    ctx.r3.u32 = 0;  // Success
}

PPC_FUNC(__imp__NtCreateMutant)
{
    ctx.r3.u32 = 1;  // Return dummy mutant handle
}


PPC_FUNC(__imp____C_specific_handler)
{
    ctx.r3.u32 = 0;  // Success, or modify for specific error code handling
}
