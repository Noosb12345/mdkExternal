
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/M1EpicOnlineServices.M1EOSNetworkTransportComponent
/// Size: 0x0038 (0x0000A8 - 0x0000E0)
class UM1EOSNetworkTransportComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:


	/// Functions
	// Function /Script/M1EpicOnlineServices.M1EOSNetworkTransportComponent.ServerReceiveAuthInfo
	// void ServerReceiveAuthInfo(FM1EOSClientAuthInfo ClientAuthInfo);                                                         // [0x1c76cb0] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/M1EpicOnlineServices.M1EOSNetworkTransportComponent.ServerOnReceivedAntiCheatClientMessage
	// void ServerOnReceivedAntiCheatClientMessage(FM1EOSNetworkTransportMessage Message);                                      // [0x1c76b90] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/M1EpicOnlineServices.M1EOSNetworkTransportComponent.ClientRequestAuthInfo
	// void ClientRequestAuthInfo();                                                                                            // [0x1c76e00] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/M1EpicOnlineServices.M1EOSNetworkTransportComponent.ClientOnReceivedAntiCheatServerMessage
	// void ClientOnReceivedAntiCheatServerMessage(FM1EOSNetworkTransportMessage Message);                                      // [0x1c76a90] Net|NetReliableNative|Event|Public|NetClient 
};

/// Struct /Script/M1EpicOnlineServices.M1EOSClientAuthInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FM1EOSClientAuthInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   ProductUserId                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   JsonWebToken                                                OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      bSkipVerifyAuth                                             OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/M1EpicOnlineServices.M1EOSNetworkTransportMessage
/// Size: 0x0010 (0x000000 - 0x000010)
class FM1EOSNetworkTransportMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<char>)                              Payload                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
};

