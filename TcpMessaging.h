
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/TcpMessaging.TcpMessagingSettings
/// Size: 0x0038 (0x000028 - 0x000060)
class UTcpMessagingSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      EnableTransport                                             OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FString)                                   ListenEndpoint                                              OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	CMember(TArray<FString>)                           ConnectToEndpoints                                          OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(int32_t)                                   ConnectionRetryDelay                                        OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	DMember(int32_t)                                   ConnectionRetryPeriod                                       OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	DMember(bool)                                      bStopServiceWhenAppDeactivates                              OFFSET(get<bool>, {0x58, 1, 0, 0})
};

