
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: OnlineSubsystemUtils

/// Class /Script/Spica.SpicaActorChannel
/// Size: 0x0020 (0x000290 - 0x0002B0)
class USpicaActorChannel : public UActorChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	CMember(class USpicaSupervisor*)                   Supervisor                                                  OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/Spica.SpicaActorSaveInfo
/// Size: 0x0078 (0x000028 - 0x0000A0)
class USpicaActorSaveInfo : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/Spica.SpicaAssistant
/// Size: 0x0158 (0x000028 - 0x000180)
class USpicaAssistant : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	CMember(class USpicaSupervisor*)                   Supervisor                                                  OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/Spica.SpicaActorTickAssistant
/// Size: 0x0008 (0x000180 - 0x000188)
class USpicaActorTickAssistant : public USpicaAssistant
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	DMember(bool)                                      bDisabledMovementComponentTick                              OFFSET(get<bool>, {0x180, 1, 0, 0})
	DMember(bool)                                      bUseAssignedActorMovementComponentTickInterval              OFFSET(get<bool>, {0x181, 1, 0, 0})
	DMember(float)                                     AssignedActorMovementComponentTickInterval                  OFFSET(get<float>, {0x184, 4, 0, 0})
};

/// Class /Script/Spica.SpicaAIAssistant
/// Size: 0x0028 (0x000180 - 0x0001A8)
class USpicaAIAssistant : public USpicaAssistant
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	CMember(TArray<class AController*>)                KeepControllers                                             OFFSET(get<T>, {0x198, 16, 0, 0})
};

/// Class /Script/Spica.SpicaControlChannel
/// Size: 0x0000 (0x000080 - 0x000080)
class USpicaControlChannel : public UControlChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/Spica.SpicaGameEngine
/// Size: 0x0110 (0x001090 - 0x0011A0)
class USpicaGameEngine : public UGameEngine
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4512;

public:
	DMember(bool)                                      bUseParallelWorldContextTick                                OFFSET(get<bool>, {0x1098, 1, 0, 0})
	DMember(bool)                                      bUseParallelWorldContextTickLoop                            OFFSET(get<bool>, {0x1099, 1, 0, 0})
	DMember(float)                                     ParallelWorldContextTickSyncFrequency                       OFFSET(get<float>, {0x109C, 4, 0, 0})
	DMember(bool)                                      bUseOverrideShouldSimulatePhysics                           OFFSET(get<bool>, {0x10A0, 1, 0, 0})
	DMember(bool)                                      bShouldSimulatePhysics                                      OFFSET(get<bool>, {0x10A1, 1, 0, 0})
	DMember(float)                                     WorldContextTickThresholdTime                               OFFSET(get<float>, {0x10B8, 4, 0, 0})
	DMember(bool)                                      bUseMultipleWorldOutputDeviceFile                           OFFSET(get<bool>, {0x1110, 1, 0, 0})
	DMember(bool)                                      bUseClientFastTravelMode                                    OFFSET(get<bool>, {0x112C, 1, 0, 0})
	DMember(bool)                                      bUseCameraFadeDuringLevelTransition                         OFFSET(get<bool>, {0x112D, 1, 0, 0})
	DMember(bool)                                      bUseAutoStopCameraFadeOnLevelTransitionCompleted            OFFSET(get<bool>, {0x112E, 1, 0, 0})


	/// Functions
	// Function /Script/Spica.SpicaGameEngine.GetOnPawnControllerChanged
	// void GetOnPawnControllerChanged(class APawn* InPawn, class AController* InController);                                   // [0x26da0f0] Final|Native|Private 
};

/// Class /Script/Spica.SpicaInfoCreator
/// Size: 0x0000 (0x000028 - 0x000028)
class USpicaInfoCreator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Spica.SpicaNetDriver
/// Size: 0x00C0 (0x000868 - 0x000928)
class USpicaNetDriver : public UIpNetDriver
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2344;

public:
	CMember(class USpicaSupervisor*)                   Supervisor                                                  OFFSET(get<T>, {0x878, 8, 0, 0})
};

/// Class /Script/Spica.SpicaRPCHelperComponent
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class USpicaRPCHelperComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:


	/// Functions
	// Function /Script/Spica.SpicaRPCHelperComponent.ServerNotifyRemoteFunctionCalled
	// void ServerNotifyRemoteFunctionCalled(class AActor* Actor, int32_t PacketId);                                            // [0x26dadb0] Net|NetReliableNative|Event|Public|NetServer 
};

/// Class /Script/Spica.SpicaSubNetDriver
/// Size: 0x03E8 (0x000928 - 0x000D10)
class USpicaSubNetDriver : public USpicaNetDriver
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3344;

public:
	CMember(class UNetConnection*)                     MainNetServerConnection                                     OFFSET(get<T>, {0xCE8, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr<AActor*>>)           AssignedActors                                              OFFSET(get<T>, {0xCF0, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<AActor*>>)           SpawnedActors                                               OFFSET(get<T>, {0xD00, 16, 0, 0})
};

/// Struct /Script/Spica.SpicaAssistantDefinition
/// Size: 0x0008 (0x000000 - 0x000008)
class FSpicaAssistantDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     ClassName                                                   OFFSET(getStruct<T>, {0x0, 8, 0, 0})
};

/// Class /Script/Spica.SpicaSupervisor
/// Size: 0x1A28 (0x000028 - 0x001A50)
class USpicaSupervisor : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6736;

public:
	CMember(TMap<class AActor*, class USpicaActorSaveInfo*>) SpicaActorSaveInfos                                   OFFSET(get<T>, {0x48, 80, 0, 0})
	DMember(int32_t)                                   SubNetDriverPort                                            OFFSET(get<int32_t>, {0x430, 4, 0, 0})
	DMember(int32_t)                                   MaxAssignedActorCount                                       OFFSET(get<int32_t>, {0x434, 4, 0, 0})
	DMember(int32_t)                                   SendActorCmdMaxCount                                        OFFSET(get<int32_t>, {0x438, 4, 0, 0})
	DMember(int32_t)                                   ProcessReserveActorCmdMaxCount                              OFFSET(get<int32_t>, {0x43C, 4, 0, 0})
	DMember(float)                                     ReserveActorTimeoutSeconds                                  OFFSET(get<float>, {0x440, 4, 0, 0})
	DMember(int32_t)                                   ProcessPendingActorCmdMaxCount                              OFFSET(get<int32_t>, {0x444, 4, 0, 0})
	DMember(float)                                     PendingActorTimeoutSeconds                                  OFFSET(get<float>, {0x448, 4, 0, 0})
	DMember(float)                                     UpdateInfoFrequency                                         OFFSET(get<float>, {0x44C, 4, 0, 0})
	DMember(bool)                                      bSkipMainNetReplicate                                       OFFSET(get<bool>, {0x450, 1, 0, 0})
	DMember(float)                                     MainNetUpdateFrequency                                      OFFSET(get<float>, {0x454, 4, 0, 0})
	SMember(FName)                                     SpicaInfoCreatorClassName                                   OFFSET(getStruct<T>, {0x458, 8, 0, 0})
	SMember(FName)                                     SpicaActorSaveInfoClassName                                 OFFSET(getStruct<T>, {0x460, 8, 0, 0})
	SMember(FName)                                     SpicaRPCHelperComponentClassName                            OFFSET(getStruct<T>, {0x468, 8, 0, 0})
	CMember(TArray<FSpicaAssistantDefinition>)         SpicaAssistantDefinitions                                   OFFSET(get<T>, {0x470, 16, 0, 0})
	DMember(float)                                     StartSubNetTimeoutSeconds                                   OFFSET(get<float>, {0x480, 4, 0, 0})
	DMember(float)                                     ConnectPrivateSubNetTimeoutSeconds                          OFFSET(get<float>, {0x484, 4, 0, 0})
	DMember(float)                                     ConnectPublicSubNetTimeoutSeconds                           OFFSET(get<float>, {0x488, 4, 0, 0})
	DMember(float)                                     ResendConnectionlessPacketIntervalSeconds                   OFFSET(get<float>, {0x48C, 4, 0, 0})
	DMember(float)                                     STUNHeartbeatIntervalSeconds                                OFFSET(get<float>, {0x490, 4, 0, 0})
	DMember(float)                                     STUNHolePunchingIntervalSeconds                             OFFSET(get<float>, {0x494, 4, 0, 0})
	DMember(int32_t)                                   ReceiveTimeoutMaxCount                                      OFFSET(get<int32_t>, {0x498, 4, 0, 0})
	DMember(float)                                     SubNetHeartbeatIntervalSeconds                              OFFSET(get<float>, {0x49C, 4, 0, 0})
	DMember(float)                                     SubNetReceiveTimeoutSeconds                                 OFFSET(get<float>, {0x4A0, 4, 0, 0})
	DMember(int32_t)                                   RTTTimeoutMaxCount                                          OFFSET(get<int32_t>, {0x4A4, 4, 0, 0})
	DMember(float)                                     SubNetRTTCheckIntervalSeconds                               OFFSET(get<float>, {0x4A8, 4, 0, 0})
	DMember(float)                                     SubNetRTTTimeoutSeconds                                     OFFSET(get<float>, {0x4AC, 4, 0, 0})
	CMember(class USpicaNetDriver*)                    MainNetDriver                                               OFFSET(get<T>, {0x4B0, 8, 0, 0})
	CMember(TArray<class USpicaSubNetDriver*>)         SubNetDrivers                                               OFFSET(get<T>, {0x4B8, 16, 0, 0})
	CMember(TArray<class USpicaSubNetDriver*>)         PendingDestroySubNetDrivers                                 OFFSET(get<T>, {0x4C8, 16, 0, 0})
	CMember(TArray<class USpicaSubNetDriver*>)         ShutdownSubNetDrivers                                       OFFSET(get<T>, {0x4D8, 16, 0, 0})
	CMember(class USpicaActorTickAssistant*)           ActorTickAssistant                                          OFFSET(get<T>, {0x4E8, 8, 0, 0})
	CMember(class USpicaAIAssistant*)                  AIAssistant                                                 OFFSET(get<T>, {0x4F0, 8, 0, 0})
	CMember(TArray<class USpicaAssistant*>)            Assistants                                                  OFFSET(get<T>, {0x4F8, 16, 0, 0})
	CMember(class USpicaInfoCreator*)                  InfoCreator                                                 OFFSET(get<T>, {0x19D8, 8, 0, 0})
	CMember(class UClass*)                             SpicaActorSaveInfoClass                                     OFFSET(get<T>, {0x19E0, 8, 0, 0})
	CMember(class UClass*)                             SpicaRPCHelperComponentClass                                OFFSET(get<T>, {0x19E8, 8, 0, 0})
};

