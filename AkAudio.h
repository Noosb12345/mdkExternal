
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene
/// dependency: SlateCore
/// dependency: UMG

/// Class /Script/AkAudio.AkPortalComponent
/// Size: 0x00C0 (0x0001F0 - 0x0002B0)
class UAkPortalComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	DMember(bool)                                      bDynamic                                                    OFFSET(get<bool>, {0x1F0, 1, 0, 0})
	CMember(AkAcousticPortalState)                     InitialState                                                OFFSET(get<T>, {0x1F1, 1, 0, 0})
	DMember(float)                                     ObstructionRefreshInterval                                  OFFSET(get<float>, {0x1F4, 4, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            ObstructionCollisionChannel                                 OFFSET(get<T>, {0x1F8, 1, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkPortalComponent.PortalPlacementValid
	// bool PortalPlacementValid();                                                                                             // [0x2716d80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkPortalComponent.OpenPortal
	// void OpenPortal();                                                                                                       // [0x2716e50] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkPortalComponent.GetPrimitiveParent
	// class UPrimitiveComponent* GetPrimitiveParent();                                                                         // [0x13c3fb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkPortalComponent.GetCurrentState
	// AkAcousticPortalState GetCurrentState();                                                                                 // [0x2716de0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkPortalComponent.ClosePortal
	// void ClosePortal();                                                                                                      // [0x2716e00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkAcousticPortal
/// Size: 0x0010 (0x000280 - 0x000290)
class AAkAcousticPortal : public AVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
	CMember(class UAkPortalComponent*)                 Portal                                                      OFFSET(get<T>, {0x280, 8, 0, 0})
	CMember(AkAcousticPortalState)                     InitialState                                                OFFSET(get<T>, {0x288, 1, 0, 0})
	DMember(bool)                                      bRequiresStateMigration                                     OFFSET(get<bool>, {0x289, 1, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkAcousticPortal.OpenPortal
	// void OpenPortal();                                                                                                       // [0x27171e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkAcousticPortal.GetCurrentState
	// AkAcousticPortalState GetCurrentState();                                                                                 // [0x2717140] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkAcousticPortal.ClosePortal
	// void ClosePortal();                                                                                                      // [0x2717180] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkAudioType
/// Size: 0x0018 (0x000028 - 0x000040)
class UAkAudioType : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(uint32_t)                                  ShortID                                                     OFFSET(get<uint32_t>, {0x28, 4, 0, 0})
	CMember(TArray<class UObject*>)                    UserData                                                    OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/AkAudio.AkAcousticTexture
/// Size: 0x0000 (0x000040 - 0x000040)
class UAkAcousticTexture : public UAkAudioType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/AkAudio.AkAcousticTextureSetComponent
/// Size: 0x0020 (0x0001F0 - 0x000210)
class UAkAcousticTextureSetComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
};

/// Class /Script/AkAudio.AkAmbientSound
/// Size: 0x0040 (0x000248 - 0x000288)
class AAkAmbientSound : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 648;

public:
	CMember(class UAkAudioEvent*)                      AkAudioEvent                                                OFFSET(get<T>, {0x248, 8, 0, 0})
	CMember(class UAkComponent*)                       AkComponent                                                 OFFSET(get<T>, {0x250, 8, 0, 0})
	DMember(bool)                                      StopWhenOwnerIsDestroyed                                    OFFSET(get<bool>, {0x258, 1, 0, 0})
	DMember(bool)                                      AutoPost                                                    OFFSET(get<bool>, {0x259, 1, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkAmbientSound.StopAmbientSound
	// void StopAmbientSound();                                                                                                 // [0x2717880] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkAmbientSound.StartAmbientSound
	// void StartAmbientSound();                                                                                                // [0x27178d0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Struct /Script/AkAudio.AkMainOutputSettings
/// Size: 0x0028 (0x000000 - 0x000028)
class FAkMainOutputSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   AudioDeviceShareset                                         OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(uint32_t)                                  DeviceID                                                    OFFSET(get<uint32_t>, {0x10, 4, 0, 0})
	CMember(EAkPanningRule)                            PanningRule                                                 OFFSET(get<T>, {0x14, 4, 0, 0})
	CMember(EAkChannelConfigType)                      ChannelConfigType                                           OFFSET(get<T>, {0x18, 4, 0, 0})
	DMember(uint32_t)                                  ChannelMask                                                 OFFSET(get<uint32_t>, {0x1C, 4, 0, 0})
	DMember(uint32_t)                                  NumberOfChannels                                            OFFSET(get<uint32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/AkAudio.AkSpatialAudioSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FAkSpatialAudioSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(uint32_t)                                  MaxSoundPropagationDepth                                    OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     MovementThreshold                                           OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(uint32_t)                                  NumberOfPrimaryRays                                         OFFSET(get<uint32_t>, {0x8, 4, 0, 0})
	DMember(uint32_t)                                  ReflectionOrder                                             OFFSET(get<uint32_t>, {0xC, 4, 0, 0})
	DMember(float)                                     MaximumPathLength                                           OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     CPULimitPercentage                                          OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(bool)                                      EnableDiffractionOnReflections                              OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(bool)                                      EnableGeometricDiffractionAndTransmission                   OFFSET(get<bool>, {0x19, 1, 0, 0})
	DMember(bool)                                      CalcEmitterVirtualPosition                                  OFFSET(get<bool>, {0x1A, 1, 0, 0})
	DMember(bool)                                      UseObstruction                                              OFFSET(get<bool>, {0x1B, 1, 0, 0})
	DMember(bool)                                      UseOcclusion                                                OFFSET(get<bool>, {0x1C, 1, 0, 0})
};

/// Struct /Script/AkAudio.AkCommonInitializationSettings
/// Size: 0x0060 (0x000000 - 0x000060)
class FAkCommonInitializationSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(uint32_t)                                  MaximumNumberOfMemoryPools                                  OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  MaximumNumberOfPositioningPaths                             OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	DMember(uint32_t)                                  CommandQueueSize                                            OFFSET(get<uint32_t>, {0x8, 4, 0, 0})
	DMember(uint32_t)                                  SamplesPerFrame                                             OFFSET(get<uint32_t>, {0xC, 4, 0, 0})
	SMember(FAkMainOutputSettings)                     MainOutputSettings                                          OFFSET(getStruct<T>, {0x10, 40, 0, 0})
	DMember(float)                                     StreamingLookAheadRatio                                     OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(uint16_t)                                  NumberOfRefillsInVoice                                      OFFSET(get<uint16_t>, {0x3C, 2, 0, 0})
	SMember(FAkSpatialAudioSettings)                   SpatialAudioSettings                                        OFFSET(getStruct<T>, {0x40, 32, 0, 0})
};

/// Struct /Script/AkAudio.AkCommonInitializationSettingsWithSampleRate
/// Size: 0x0008 (0x000060 - 0x000068)
class FAkCommonInitializationSettingsWithSampleRate : public FAkCommonInitializationSettings
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(uint32_t)                                  SampleRate                                                  OFFSET(get<uint32_t>, {0x60, 4, 0, 0})
};

/// Struct /Script/AkAudio.AkCommunicationSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FAkCommunicationSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(uint32_t)                                  PoolSize                                                    OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(uint16_t)                                  DiscoveryBroadcastPort                                      OFFSET(get<uint16_t>, {0x4, 2, 0, 0})
	DMember(uint16_t)                                  CommandPort                                                 OFFSET(get<uint16_t>, {0x6, 2, 0, 0})
	DMember(uint16_t)                                  NotificationPort                                            OFFSET(get<uint16_t>, {0x8, 2, 0, 0})
	SMember(FString)                                   NetworkName                                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/AkAudio.AkCommunicationSettingsWithSystemInitialization
/// Size: 0x0008 (0x000020 - 0x000028)
class FAkCommunicationSettingsWithSystemInitialization : public FAkCommunicationSettings
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      InitializeSystemComms                                       OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/AkAudio.AkAdvancedInitializationSettings
/// Size: 0x002C (0x000000 - 0x00002C)
class FAkAdvancedInitializationSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 44;

public:
	DMember(uint32_t)                                  IO_MemorySize                                               OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  IO_Granularity                                              OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	DMember(float)                                     TargetAutoStreamBufferLength                                OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      UseStreamCache                                              OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(uint32_t)                                  MaximumPinnedBytesInCache                                   OFFSET(get<uint32_t>, {0x10, 4, 0, 0})
	DMember(bool)                                      EnableGameSyncPreparation                                   OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(uint32_t)                                  ContinuousPlaybackLookAhead                                 OFFSET(get<uint32_t>, {0x18, 4, 0, 0})
	DMember(uint32_t)                                  MonitorQueuePoolSize                                        OFFSET(get<uint32_t>, {0x1C, 4, 0, 0})
	DMember(uint32_t)                                  MaximumHardwareTimeoutMs                                    OFFSET(get<uint32_t>, {0x20, 4, 0, 0})
	DMember(bool)                                      DebugOutOfRangeCheckEnabled                                 OFFSET(get<bool>, {0x24, 1, 0, 0})
	DMember(float)                                     DebugOutOfRangeLimit                                        OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Struct /Script/AkAudio.AkAdvancedInitializationSettingsWithMultiCoreRendering
/// Size: 0x0004 (0x00002C - 0x000030)
class FAkAdvancedInitializationSettingsWithMultiCoreRendering : public FAkAdvancedInitializationSettings
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      EnableMultiCoreRendering                                    OFFSET(get<bool>, {0x2C, 1, 0, 0})
};

/// Struct /Script/AkAudio.AkAndroidAdvancedInitializationSettings
/// Size: 0x0008 (0x000030 - 0x000038)
class FAkAndroidAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(uint32_t)                                  AudioAPI                                                    OFFSET(get<uint32_t>, {0x30, 4, 0, 0})
	DMember(bool)                                      RoundFrameSizeToHardwareSize                                OFFSET(get<bool>, {0x34, 1, 0, 0})
};

/// Class /Script/AkAudio.AkAndroidInitializationSettings
/// Size: 0x00D0 (0x000028 - 0x0000F8)
class UAkAndroidInitializationSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FAkCommonInitializationSettingsWithSampleRate) CommonSettings                                          OFFSET(getStruct<T>, {0x30, 104, 0, 0})
	SMember(FAkCommunicationSettingsWithSystemInitialization) CommunicationSettings                                OFFSET(getStruct<T>, {0x98, 40, 0, 0})
	SMember(FAkAndroidAdvancedInitializationSettings)  AdvancedSettings                                            OFFSET(getStruct<T>, {0xC0, 56, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x2717dc0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkPlatformInfo
/// Size: 0x0048 (0x000028 - 0x000070)
class UAkPlatformInfo : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/AkAudio.AkAndroidPlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkAndroidPlatformInfo : public UAkPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/AkAudio.AkAssetBase
/// Size: 0x0010 (0x000040 - 0x000050)
class UAkAssetBase : public UAkAudioType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class UAkAssetPlatformData*)               PlatformAssetData                                           OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/AkAudio.AkAssetData
/// Size: 0x0050 (0x000028 - 0x000078)
class UAkAssetData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(uint32_t)                                  CachedHash                                                  OFFSET(get<uint32_t>, {0x28, 4, 0, 0})
	SMember(FString)                                   BankLanguage                                                OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Class /Script/AkAudio.AkAssetDataWithMedia
/// Size: 0x0010 (0x000078 - 0x000088)
class UAkAssetDataWithMedia : public UAkAssetData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<class UAkMediaAsset*>)              MediaList                                                   OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Class /Script/AkAudio.AkAssetPlatformData
/// Size: 0x0008 (0x000028 - 0x000030)
class UAkAssetPlatformData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UAkAssetData*)                       CurrentAssetData                                            OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/AkAudio.AkAssetDataSwitchContainerData
/// Size: 0x0058 (0x000028 - 0x000080)
class UAkAssetDataSwitchContainerData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TWeakObjectPtr<class UAkGroupValue*>)      GroupValue                                                  OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UAkGroupValue*)                      DefaultGroupValue                                           OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(TArray<class UAkMediaAsset*>)              MediaList                                                   OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<class UAkAssetDataSwitchContainerData*>) Children                                               OFFSET(get<T>, {0x70, 16, 0, 0})
};

/// Class /Script/AkAudio.AkAssetDataSwitchContainer
/// Size: 0x0068 (0x000088 - 0x0000F0)
class UAkAssetDataSwitchContainer : public UAkAssetDataWithMedia
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TArray<class UAkAssetDataSwitchContainerData*>) SwitchContainers                                       OFFSET(get<T>, {0x88, 16, 0, 0})
	CMember(class UAkGroupValue*)                      DefaultGroupValue                                           OFFSET(get<T>, {0x98, 8, 0, 0})
};

/// Class /Script/AkAudio.AkAudioEventData
/// Size: 0x01A0 (0x0000F0 - 0x000290)
class UAkAudioEventData : public UAkAssetDataSwitchContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
	DMember(float)                                     MaxAttenuationRadius                                        OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(bool)                                      IsInfinite                                                  OFFSET(get<bool>, {0xF4, 1, 0, 0})
	DMember(float)                                     MinimumDuration                                             OFFSET(get<float>, {0xF8, 4, 0, 0})
	DMember(float)                                     MaximumDuration                                             OFFSET(get<float>, {0xFC, 4, 0, 0})
	CMember(TMap<FString, class UAkAssetDataSwitchContainer*>) LocalizedMedia                                      OFFSET(get<T>, {0x100, 80, 0, 0})
	CMember(TSet<UAkAudioEvent*>)                      PostedEvents                                                OFFSET(get<T>, {0x150, 80, 0, 0})
	CMember(TSet<UAkAuxBus*>)                          UserDefinedSends                                            OFFSET(get<T>, {0x1A0, 80, 0, 0})
	CMember(TSet<UAkTrigger*>)                         PostedTriggers                                              OFFSET(get<T>, {0x1F0, 80, 0, 0})
	CMember(TSet<UAkGroupValue*>)                      GroupValues                                                 OFFSET(get<T>, {0x240, 80, 0, 0})
};

/// Class /Script/AkAudio.AkAudioBank
/// Size: 0x00C8 (0x000050 - 0x000118)
class UAkAudioBank : public UAkAssetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	DMember(bool)                                      AutoLoad                                                    OFFSET(get<bool>, {0x50, 1, 0, 0})
	CMember(TMap<FString, class UAkAssetPlatformData*>) LocalizedPlatformAssetDataMap                              OFFSET(get<T>, {0x58, 80, 0, 0})
	CMember(TSet<TWeakObjectPtr<UAkAudioEvent*>>)      LinkedAkEvents                                              OFFSET(get<T>, {0xA8, 80, 0, 0})
	CMember(class UAkAssetPlatformData*)               CurrentLocalizedPlatformAssetData                           OFFSET(get<T>, {0xF8, 8, 0, 0})
};

/// Class /Script/AkAudio.AkAudioEvent
/// Size: 0x0080 (0x000050 - 0x0000D0)
class UAkAudioEvent : public UAkAssetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TMap<FString, class UAkAssetPlatformData*>) LocalizedPlatformAssetDataMap                              OFFSET(get<T>, {0x50, 80, 0, 0})
	CMember(class UAkAudioBank*)                       RequiredBank                                                OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class UAkAssetPlatformData*)               CurrentLocalizedPlatformData                                OFFSET(get<T>, {0xB0, 8, 0, 0})
	DMember(float)                                     MaxAttenuationRadius                                        OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(bool)                                      IsInfinite                                                  OFFSET(get<bool>, {0xBC, 1, 0, 0})
	DMember(float)                                     MinimumDuration                                             OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(float)                                     MaximumDuration                                             OFFSET(get<float>, {0xC4, 4, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkAudioEvent.GetMinimumDuration
	// float GetMinimumDuration();                                                                                              // [0x2719320] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkAudioEvent.GetMaximumDuration
	// float GetMaximumDuration();                                                                                              // [0x27192a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkAudioEvent.GetMaxAttenuationRadius
	// float GetMaxAttenuationRadius();                                                                                         // [0x2719420] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkAudioEvent.GetIsInfinite
	// bool GetIsInfinite();                                                                                                    // [0x27193a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkGameObject
/// Size: 0x0020 (0x0001F0 - 0x000210)
class UAkGameObject : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	CMember(class UAkAudioEvent*)                      AkAudioEvent                                                OFFSET(get<T>, {0x1F0, 8, 0, 0})
	SMember(FString)                                   EventName                                                   OFFSET(getStruct<T>, {0x1F8, 16, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkGameObject.Stop
	// void Stop();                                                                                                             // [0x271f410] BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameObject.SetRTPCValue
	// void SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, FString RTPC);                     // [0x271f0e0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|Const 
	// Function /Script/AkAudio.AkGameObject.PostAssociatedAkEventAsync
	// void PostAssociatedAkEventAsync(class UObject* WorldContextObject, int32_t CallbackMask, FDelegateProperty& PostEventCallback, TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo, int32_t& PlayingID); // [0x271fd50] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameObject.PostAssociatedAkEvent
	// int32_t PostAssociatedAkEvent(int32_t CallbackMask, FDelegateProperty& PostEventCallback, TArray<FAkExternalSourceInfo>& ExternalSources); // [0x27201f0] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameObject.PostAkEventAsync
	// void PostAkEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, int32_t& PlayingID, int32_t CallbackMask, FDelegateProperty& PostEventCallback, TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo); // [0x271f430] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameObject.PostAkEvent
	// int32_t PostAkEvent(class UAkAudioEvent* AkEvent, int32_t CallbackMask, FDelegateProperty& PostEventCallback, TArray<FAkExternalSourceInfo>& ExternalSources, FString in_EventName); // [0x271f960] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameObject.GetRTPCValue
	// void GetRTPCValue(class UAkRtpc* RTPCValue, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, FString RTPC, int32_t PlayingID); // [0x271ec80] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkComponent
/// Size: 0x01D0 (0x000210 - 0x0003E0)
class UAkComponent : public UAkGameObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	DMember(bool)                                      bUseSpatialAudio                                            OFFSET(get<bool>, {0x210, 1, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            OcclusionCollisionChannel                                   OFFSET(get<T>, {0x218, 1, 0, 0})
	DMember(bool)                                      EnableSpotReflectors                                        OFFSET(get<bool>, {0x219, 1, 0, 0})
	DMember(float)                                     OuterRadius                                                 OFFSET(get<float>, {0x21C, 4, 0, 0})
	DMember(float)                                     InnerRadius                                                 OFFSET(get<float>, {0x220, 4, 0, 0})
	CMember(class UAkAuxBus*)                          EarlyReflectionAuxBus                                       OFFSET(get<T>, {0x228, 8, 0, 0})
	SMember(FString)                                   EarlyReflectionAuxBusName                                   OFFSET(getStruct<T>, {0x230, 16, 0, 0})
	DMember(int32_t)                                   EarlyReflectionOrder                                        OFFSET(get<int32_t>, {0x240, 4, 0, 0})
	DMember(float)                                     EarlyReflectionBusSendGain                                  OFFSET(get<float>, {0x244, 4, 0, 0})
	DMember(float)                                     EarlyReflectionMaxPathLength                                OFFSET(get<float>, {0x248, 4, 0, 0})
	DMember(float)                                     roomReverbAuxBusGain                                        OFFSET(get<float>, {0x24C, 4, 0, 0})
	DMember(int32_t)                                   diffractionMaxEdges                                         OFFSET(get<int32_t>, {0x250, 4, 0, 0})
	DMember(int32_t)                                   diffractionMaxPaths                                         OFFSET(get<int32_t>, {0x254, 4, 0, 0})
	DMember(float)                                     diffractionMaxPathLength                                    OFFSET(get<float>, {0x258, 4, 0, 0})
	DMember(bool)                                      DrawFirstOrderReflections                                   OFFSET(get<bool>, {0x25C, 1, 0, 0})
	DMember(bool)                                      DrawSecondOrderReflections                                  OFFSET(get<bool>, {0x25D, 1, 0, 0})
	DMember(bool)                                      DrawHigherOrderReflections                                  OFFSET(get<bool>, {0x25E, 1, 0, 0})
	DMember(bool)                                      DrawDiffraction                                             OFFSET(get<bool>, {0x25F, 1, 0, 0})
	DMember(bool)                                      StopWhenOwnerDestroyed                                      OFFSET(get<bool>, {0x260, 1, 0, 0})
	DMember(float)                                     AttenuationScalingFactor                                    OFFSET(get<float>, {0x264, 4, 0, 0})
	DMember(float)                                     OcclusionRefreshInterval                                    OFFSET(get<float>, {0x268, 4, 0, 0})
	DMember(bool)                                      bUseReverbVolumes                                           OFFSET(get<bool>, {0x26C, 1, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkComponent.UseReverbVolumes
	// void UseReverbVolumes(bool inUseReverbVolumes);                                                                          // [0x271ba80] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.UseEarlyReflections
	// void UseEarlyReflections(class UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, FString AuxBusName); // [0x271b6b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetSwitch
	// void SetSwitch(class UAkSwitchValue* SwitchValue, FString SwitchGroup, FString SwitchState);                             // [0x271bd60] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetStopWhenOwnerDestroyed
	// void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);                                                            // [0x271bc70] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetOutputBusVolume
	// void SetOutputBusVolume(float BusVolume);                                                                                // [0x271b330] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetListeners
	// void SetListeners(TArray<UAkComponent*>& Listeners);                                                                     // [0x271bb70] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetGameObjectRadius
	// void SetGameObjectRadius(float in_outerRadius, float in_innerRadius);                                                    // [0x271cf20] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetEarlyReflectionsVolume
	// void SetEarlyReflectionsVolume(float SendVolume);                                                                        // [0x271b420] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetEarlyReflectionsAuxBus
	// void SetEarlyReflectionsAuxBus(FString AuxBusName);                                                                      // [0x271b530] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetAttenuationScalingFactor
	// void SetAttenuationScalingFactor(float Value);                                                                           // [0x271b220] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostTrigger
	// void PostTrigger(class UAkTrigger* TriggerValue, FString Trigger);                                                       // [0x271c050] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync
	// void PostAssociatedAkEventAndWaitForEndAsync(int32_t& PlayingID, TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo); // [0x271ca00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd
	// int32_t PostAssociatedAkEventAndWaitForEnd(TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo); // [0x271ccd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostAkEventByName
	// int32_t PostAkEventByName(FString in_EventName);                                                                         // [0x271c220] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostAkEventAndWaitForEndAsync
	// void PostAkEventAndWaitForEndAsync(class UAkAudioEvent* AkEvent, int32_t& PlayingID, TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo); // [0x271c330] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostAkEventAndWaitForEnd
	// int32_t PostAkEventAndWaitForEnd(class UAkAudioEvent* AkEvent, FString in_EventName, TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo); // [0x271c690] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.GetAttenuationRadius
	// float GetAttenuationRadius();                                                                                            // [0x271b170] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkAudioInputComponent
/// Size: 0x0030 (0x0003E0 - 0x000410)
class UAkAudioInputComponent : public UAkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1040;

public:


	/// Functions
	// Function /Script/AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent
	// int32_t PostAssociatedAudioInputEvent();                                                                                 // [0x2719910] BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkAuxBus
/// Size: 0x0008 (0x000050 - 0x000058)
class UAkAuxBus : public UAkAssetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class UAkAudioBank*)                       RequiredBank                                                OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Struct /Script/AkAudio.AkBoolPropertyToControl
/// Size: 0x0010 (0x000000 - 0x000010)
class FAkBoolPropertyToControl : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   ItemProperty                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/AkAudio.AkWwiseObjectDetails
/// Size: 0x0030 (0x000000 - 0x000030)
class FAkWwiseObjectDetails : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   ItemName                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ItemPath                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   ItemId                                                      OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/AkAudio.AkWwiseItemToControl
/// Size: 0x0040 (0x000000 - 0x000040)
class FAkWwiseItemToControl : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FAkWwiseObjectDetails)                     ItemPicked                                                  OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	SMember(FString)                                   ItemPath                                                    OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Class /Script/AkAudio.AkCheckBox
/// Size: 0x0D88 (0x000148 - 0x000ED0)
class UAkCheckBox : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3792;

public:
	CMember(ECheckBoxState)                            CheckedState                                                OFFSET(get<T>, {0x3C0, 1, 0, 0})
	SMember(FDelegateProperty)                         CheckedStateDelegate                                        OFFSET(getStruct<T>, {0x3C4, 16, 0, 0})
	SMember(FCheckBoxStyle)                            WidgetStyle                                                 OFFSET(getStruct<T>, {0x3E0, 2576, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0xDF0, 1, 0, 0})
	DMember(bool)                                      IsFocusable                                                 OFFSET(get<bool>, {0xDF1, 1, 0, 0})
	SMember(FAkBoolPropertyToControl)                  ThePropertyToControl                                        OFFSET(getStruct<T>, {0xDF8, 16, 0, 0})
	SMember(FAkWwiseItemToControl)                     ItemToControl                                               OFFSET(getStruct<T>, {0xE08, 64, 0, 0})
	SMember(FMulticastInlineDelegate)                  AkOnCheckStateChanged                                       OFFSET(getStruct<T>, {0xE48, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnItemDropped                                               OFFSET(getStruct<T>, {0xE58, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPropertyDropped                                           OFFSET(getStruct<T>, {0xE68, 16, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkCheckBox.SetIsChecked
	// void SetIsChecked(bool InIsChecked);                                                                                     // [0x271aa20] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkCheckBox.SetCheckedState
	// void SetCheckedState(ECheckBoxState InCheckedState);                                                                     // [0x271a810] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkCheckBox.SetAkItemId
	// void SetAkItemId(FGuid& ItemId);                                                                                         // [0x271a720] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkCheckBox.SetAkBoolProperty
	// void SetAkBoolProperty(FString ItemProperty);                                                                            // [0x271a560] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkCheckBox.IsPressed
	// bool IsPressed();                                                                                                        // [0x271abb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkCheckBox.IsChecked
	// bool IsChecked();                                                                                                        // [0x271ab60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkCheckBox.GetCheckedState
	// ECheckBoxState GetCheckedState();                                                                                        // [0x271ab10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkCheckBox.GetAkProperty
	// FString GetAkProperty();                                                                                                 // [0x271a4b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkCheckBox.GetAkItemId
	// FGuid GetAkItemId();                                                                                                     // [0x271a6c0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.DrawPortalComponent
/// Size: 0x0008 (0x000478 - 0x000480)
class UDrawPortalComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
};

/// Class /Script/AkAudio.DrawRoomComponent
/// Size: 0x0008 (0x000478 - 0x000480)
class UDrawRoomComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
};

/// Class /Script/AkAudio.AkFolder
/// Size: 0x0078 (0x000040 - 0x0000B8)
class UAkFolder : public UAkAudioType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FString)                                   UnrealFolderPath                                            OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FString)                                   WwiseFolderPath                                             OFFSET(getStruct<T>, {0x50, 16, 0, 0})
};

/// Class /Script/AkAudio.AkGameplayStatics
/// Size: 0x0000 (0x000028 - 0x000028)
class UAkGameplayStatics : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AkAudio.AkGameplayStatics.UseReverbVolumes
	// void UseReverbVolumes(bool inUseReverbVolumes, class AActor* Actor);                                                     // [0x27248f0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.UseEarlyReflections
	// void UseEarlyReflections(class AActor* Actor, class UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, FString AuxBusName); // [0x27244b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.UnloadBankByName
	// void UnloadBankByName(FString BankName);                                                                                 // [0x2721780] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.UnloadBankAsync
	// void UnloadBankAsync(class UAkAudioBank* Bank, FDelegateProperty& BankUnloadedCallback);                                 // [0x2721870] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.UnloadBank
	// void UnloadBank(class UAkAudioBank* Bank, FString BankName, FLatentActionInfo LatentInfo, class UObject* WorldContextObject); // [0x2721a20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StopProfilerCapture
	// void StopProfilerCapture();                                                                                              // [0x27213c0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StopOutputCapture
	// void StopOutputCapture();                                                                                                // [0x27214f0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StopAllAmbientSounds
	// void StopAllAmbientSounds(class UObject* WorldContextObject);                                                            // [0x2722860] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StopAll
	// void StopAll();                                                                                                          // [0x2722c90] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StopActor
	// void StopActor(class AActor* Actor);                                                                                     // [0x2722cc0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StartProfilerCapture
	// void StartProfilerCapture(FString Filename);                                                                             // [0x2721400] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StartOutputCapture
	// void StartOutputCapture(FString Filename);                                                                               // [0x2721690] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StartAllAmbientSounds
	// void StartAllAmbientSounds(class UObject* WorldContextObject);                                                           // [0x2722930] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation
	// class UAkComponent* SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, bool AutoPost, FString EventName, bool AutoDestroy); // [0x2727390] Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetSwitch
	// void SetSwitch(class UAkSwitchValue* SwitchValue, class AActor* Actor, FName SwitchGroup, FName SwitchState);            // [0x2725c20] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetState
	// void SetState(class UAkStateValue* StateValue, FName StateGroup, FName State);                                           // [0x27263a0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetSpeakerAngles
	// void SetSpeakerAngles(TArray<float>& SpeakerAngles, float HeightAngle, FString DeviceShareset);                          // [0x2722fb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetRTPCValue
	// void SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, class AActor* Actor, FName RTPC);  // [0x2726f20] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetReflectionsOrder
	// void SetReflectionsOrder(int32_t Order, bool RefreshPaths);                                                              // [0x2724300] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetPortalToPortalObstruction
	// void SetPortalToPortalObstruction(class UAkPortalComponent* PortalComponent0, class UAkPortalComponent* PortalComponent1, float ObstructionValue); // [0x2723b70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetPortalObstructionAndOcclusion
	// void SetPortalObstructionAndOcclusion(class UAkPortalComponent* PortalComponent, float ObstructionValue, float OcclusionValue); // [0x2724050] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetPanningRule
	// void SetPanningRule(PanningRule PanRule);                                                                                // [0x2723680] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetOutputBusVolume
	// void SetOutputBusVolume(float BusVolume, class AActor* Actor);                                                           // [0x27239a0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetOcclusionScalingFactor
	// void SetOcclusionScalingFactor(float ScalingFactor);                                                                     // [0x27212e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval
	// void SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor);                                            // [0x2722de0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetMultiplePositions
	// void SetMultiplePositions(class UAkComponent* GameObjectAkComponent, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType); // [0x2725720] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetMultipleChannelMaskEmitterPositions
	// void SetMultipleChannelMaskEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<FAkChannelMask> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType); // [0x2724aa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions
	// void SetMultipleChannelEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<AkChannelConfiguration> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType); // [0x27250f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetGameObjectToPortalObstruction
	// void SetGameObjectToPortalObstruction(class UAkComponent* GameObjectAkComponent, class UAkPortalComponent* PortalComponent, float ObstructionValue); // [0x2723de0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetCurrentAudioCultureAsync
	// void SetCurrentAudioCultureAsync(FString AudioCulture, FDelegateProperty& Completed);                                    // [0x2720b90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetCurrentAudioCulture
	// void SetCurrentAudioCulture(FString AudioCulture, FLatentActionInfo LatentInfo, class UObject* WorldContextObject);      // [0x2720e60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetBusConfig
	// void SetBusConfig(FString BusName, AkChannelConfiguration ChannelConfiguration);                                         // [0x2723770] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.ResetRTPCValue
	// void ResetRTPCValue(class UAkRtpc* RTPCValue, int32_t InterpolationTimeMs, class AActor* Actor, FName RTPC);             // [0x2726690] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.ReplaceMainOutput
	// void ReplaceMainOutput(FAkOutputSettings& MainOutputSettings);                                                           // [0x2723530] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostTrigger
	// void PostTrigger(class UAkTrigger* TriggerValue, class AActor* Actor, FName Trigger);                                    // [0x2726040] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostEventByName
	// void PostEventByName(FString EventName, class AActor* Actor, bool bStopWhenAttachedToDestroyed);                         // [0x2728800] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostEventAttached
	// int32_t PostEventAttached(class UAkAudioEvent* AkEvent, class AActor* Actor, FName AttachPointName, bool bStopWhenAttachedToDestroyed, FString EventName); // [0x2729910] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostEventAtLocationByName
	// void PostEventAtLocationByName(FString EventName, FVector Location, FRotator Orientation, class UObject* WorldContextObject); // [0x2727f70] Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostEventAtLocation
	// int32_t PostEventAtLocation(class UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, FString EventName, class UObject* WorldContextObject); // [0x2728340] Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostEvent
	// int32_t PostEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, int32_t CallbackMask, FDelegateProperty& PostEventCallback, TArray<FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed, FString EventName); // [0x27293e0] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostAndWaitForEndOfEventAsync
	// void PostAndWaitForEndOfEventAsync(class UAkAudioEvent* AkEvent, class AActor* Actor, int32_t& PlayingID, bool bStopWhenAttachedToDestroyed, TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo); // [0x2728ad0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent
	// int32_t PostAndWaitForEndOfEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, TArray<FAkExternalSourceInfo>& ExternalSources, FString EventName, FLatentActionInfo LatentInfo); // [0x2728f40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.LoadInitBank
	// void LoadInitBank();                                                                                                     // [0x2721de0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.LoadBanks
	// void LoadBanks(TArray<UAkAudioBank*>& SoundBanks, bool SynchronizeSoundBanks);                                           // [0x2721e30] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.LoadBankByName
	// void LoadBankByName(FString BankName);                                                                                   // [0x27221b0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.LoadBankAsyncByName
	// void LoadBankAsyncByName(FString BankName, FDelegateProperty& BankLoadedCallback);                                       // [0x2721fe0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.LoadBankAsync
	// void LoadBankAsync(class UAkAudioBank* Bank, FDelegateProperty& BankLoadedCallback);                                     // [0x27222a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.LoadBank
	// void LoadBank(class UAkAudioBank* Bank, FString BankName, FLatentActionInfo LatentInfo, class UObject* WorldContextObject); // [0x2722450] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.IsGame
	// bool IsGame(class UObject* WorldContextObject);                                                                          // [0x2729e10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.IsEditor
	// bool IsEditor();                                                                                                         // [0x2729f30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetSpeakerAngles
	// void GetSpeakerAngles(TArray<float>& SpeakerAngles, float& HeightAngle, FString DeviceShareset);                         // [0x2723250] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetRTPCValue
	// void GetRTPCValue(class UAkRtpc* RTPCValue, int32_t PlayingID, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, class AActor* Actor, FName RTPC); // [0x2726a00] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetOcclusionScalingFactor
	// float GetOcclusionScalingFactor();                                                                                       // [0x27212b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetCurrentAudioCulture
	// FString GetCurrentAudioCulture();                                                                                        // [0x2721170] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetAvailableAudioCultures
	// TArray<FString> GetAvailableAudioCultures();                                                                             // [0x27210c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetAkMediaAssetUserData
	// class UObject* GetAkMediaAssetUserData(class UAkMediaAsset* Instance, class UClass* Type);                               // [0x27207f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetAkComponent
	// class UAkComponent* GetAkComponent(class USceneComponent* AttachToComponent, bool& ComponentCreated, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation> LocationType); // [0x2729f50] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetAkAudioTypeUserData
	// class UObject* GetAkAudioTypeUserData(class UAkAudioType* Instance, class UClass* Type);                                 // [0x27209c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.ExecuteActionOnPlayingID
	// void ExecuteActionOnPlayingID(AkActionOnEventType ActionType, int32_t PlayingID, int32_t TransitionDuration, EAkCurveInterpolation FadeCurve); // [0x2727870] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.ExecuteActionOnEvent
	// void ExecuteActionOnEvent(class UAkAudioEvent* AkEvent, AkActionOnEventType ActionType, class AActor* Actor, int32_t TransitionDuration, EAkCurveInterpolation FadeCurve, int32_t PlayingID); // [0x2727b20] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.ClearBanks
	// void ClearBanks();                                                                                                       // [0x2722810] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.CancelEventCallback
	// void CancelEventCallback(FDelegateProperty& PostEventCallback);                                                          // [0x2722b80] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.AddOutputCaptureMarker
	// void AddOutputCaptureMarker(FString MarkerText);                                                                         // [0x2721530] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkCallbackInfo
/// Size: 0x0008 (0x000028 - 0x000030)
class UAkCallbackInfo : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UAkComponent*)                       AkComponent                                                 OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/AkAudio.AkEventCallbackInfo
/// Size: 0x0008 (0x000030 - 0x000038)
class UAkEventCallbackInfo : public UAkCallbackInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   PlayingID                                                   OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   EventId                                                     OFFSET(get<int32_t>, {0x34, 4, 0, 0})
};

/// Class /Script/AkAudio.AkMIDIEventCallbackInfo
/// Size: 0x0010 (0x000038 - 0x000048)
class UAkMIDIEventCallbackInfo : public UAkEventCallbackInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:


	/// Functions
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetType
	// EAkMidiEventType GetType();                                                                                              // [0x272e3c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetProgramChange
	// bool GetProgramChange(FAkMidiProgramChange& AsProgramChange);                                                            // [0x272d950] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetPitchBend
	// bool GetPitchBend(FAkMidiPitchBend& AsPitchBend);                                                                        // [0x272dd20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetNoteOn
	// bool GetNoteOn(FAkMidiNoteOnOff& AsNoteOn);                                                                              // [0x272e120] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetNoteOff
	// bool GetNoteOff(FAkMidiNoteOnOff& AsNoteOff);                                                                            // [0x272dfd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch
	// bool GetNoteAftertouch(FAkMidiNoteAftertouch& AsNoteAftertouch);                                                         // [0x272dbd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetGeneric
	// bool GetGeneric(FAkMidiGeneric& AsGeneric);                                                                              // [0x272e270] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch
	// bool GetChannelAftertouch(FAkMidiChannelAftertouch& AsChannelAftertouch);                                                // [0x272da90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetChannel
	// char GetChannel();                                                                                                       // [0x272e3a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetCc
	// bool GetCc(FAkMidiCc& AsCc);                                                                                             // [0x272de80] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AkAudio.AkMarkerCallbackInfo
/// Size: 0x0018 (0x000038 - 0x000050)
class UAkMarkerCallbackInfo : public UAkEventCallbackInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(int32_t)                                   Identifier                                                  OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   Position                                                    OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	SMember(FString)                                   Label                                                       OFFSET(getStruct<T>, {0x40, 16, 0, 0})
};

/// Class /Script/AkAudio.AkDurationCallbackInfo
/// Size: 0x0018 (0x000038 - 0x000050)
class UAkDurationCallbackInfo : public UAkEventCallbackInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(float)                                     Duration                                                    OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     EstimatedDuration                                           OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   AudioNodeID                                                 OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   MediaID                                                     OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	DMember(bool)                                      bStreaming                                                  OFFSET(get<bool>, {0x48, 1, 0, 0})
};

/// Struct /Script/AkAudio.AkSegmentInfo
/// Size: 0x0024 (0x000000 - 0x000024)
class FAkSegmentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	DMember(int32_t)                                   CurrentPosition                                             OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   PreEntryDuration                                            OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   ActiveDuration                                              OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   PostExitDuration                                            OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   RemainingLookAheadTime                                      OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(float)                                     BeatDuration                                                OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     BarDuration                                                 OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     GridDuration                                                OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     GridOffset                                                  OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Class /Script/AkAudio.AkMusicSyncCallbackInfo
/// Size: 0x0040 (0x000030 - 0x000070)
class UAkMusicSyncCallbackInfo : public UAkCallbackInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(int32_t)                                   PlayingID                                                   OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	SMember(FAkSegmentInfo)                            SegmentInfo                                                 OFFSET(getStruct<T>, {0x34, 36, 0, 0})
	CMember(EAkCallbackType)                           MusicSyncType                                               OFFSET(get<T>, {0x58, 1, 0, 0})
	SMember(FString)                                   UserCueName                                                 OFFSET(getStruct<T>, {0x60, 16, 0, 0})
};

/// Struct /Script/AkAudio.AkGeometrySurfaceOverride
/// Size: 0x0018 (0x000000 - 0x000018)
class FAkGeometrySurfaceOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UAkAcousticTexture*)                 AcousticTexture                                             OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bEnableOcclusionOverride                                    OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(float)                                     OcclusionValue                                              OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     SurfaceArea                                                 OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/AkAudio.AkAcousticSurface
/// Size: 0x0018 (0x000000 - 0x000018)
class FAkAcousticSurface : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(uint32_t)                                  Texture                                                     OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     Occlusion                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/AkAudio.AkTriangle
/// Size: 0x0008 (0x000000 - 0x000008)
class FAkTriangle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(uint16_t)                                  Point0                                                      OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(uint16_t)                                  Point1                                                      OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
	DMember(uint16_t)                                  Point2                                                      OFFSET(get<uint16_t>, {0x4, 2, 0, 0})
	DMember(uint16_t)                                  Surface                                                     OFFSET(get<uint16_t>, {0x6, 2, 0, 0})
};

/// Struct /Script/AkAudio.AkGeometryData
/// Size: 0x0050 (0x000000 - 0x000050)
class FAkGeometryData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FVector>)                           Vertices                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FAkAcousticSurface>)                Surfaces                                                    OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FAkTriangle>)                       Triangles                                                   OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<class UPhysicalMaterial*>)          ToOverrideAcousticTexture                                   OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<class UPhysicalMaterial*>)          ToOverrideOcclusion                                         OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/AkAudio.AkGeometryComponent
/// Size: 0x0188 (0x000208 - 0x000390)
class UAkGeometryComponent : public UAkAcousticTextureSetComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	CMember(AkMeshType)                                MeshType                                                    OFFSET(get<T>, {0x208, 1, 0, 0})
	DMember(int32_t)                                   LOD                                                         OFFSET(get<int32_t>, {0x20C, 4, 0, 0})
	DMember(float)                                     WeldingThreshold                                            OFFSET(get<float>, {0x210, 4, 0, 0})
	CMember(TMap<class UMaterialInterface*, FAkGeometrySurfaceOverride>) StaticMeshSurfaceOverride                 OFFSET(get<T>, {0x218, 80, 0, 0})
	SMember(FAkGeometrySurfaceOverride)                CollisionMeshSurfaceOverride                                OFFSET(getStruct<T>, {0x268, 24, 0, 0})
	DMember(bool)                                      bEnableDiffraction                                          OFFSET(get<bool>, {0x280, 1, 0, 0})
	DMember(bool)                                      bEnableDiffractionOnBoundaryEdges                           OFFSET(get<bool>, {0x281, 1, 0, 0})
	CMember(class AActor*)                             AssociatedRoom                                              OFFSET(get<T>, {0x288, 8, 0, 0})
	SMember(FAkGeometryData)                           GeometryData                                                OFFSET(getStruct<T>, {0x2A0, 80, 0, 0})
	CMember(TMap<int32_t, double>)                     SurfaceAreas                                                OFFSET(get<T>, {0x2F0, 80, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkGeometryComponent.UpdateGeometry
	// void UpdateGeometry();                                                                                                   // [0x272f260] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGeometryComponent.SendGeometry
	// void SendGeometry();                                                                                                     // [0x272f240] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGeometryComponent.RemoveGeometry
	// void RemoveGeometry();                                                                                                   // [0x272f280] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGeometryComponent.ConvertMesh
	// void ConvertMesh();                                                                                                      // [0x272f2a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkGroupValue
/// Size: 0x0028 (0x000040 - 0x000068)
class UAkGroupValue : public UAkAudioType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TArray<TWeakObjectPtr<UAkMediaAsset*>>)    MediaDependencies                                           OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(uint32_t)                                  GroupShortID                                                OFFSET(get<uint32_t>, {0x50, 4, 0, 0})
};

/// Struct /Script/AkAudio.AkHololensAdvancedInitializationSettings
/// Size: 0x0004 (0x000030 - 0x000034)
class FAkHololensAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 52;

public:
	DMember(bool)                                      UseHeadMountedDisplayAudioDevice                            OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Class /Script/AkAudio.AkHololensInitializationSettings
/// Size: 0x00D0 (0x000028 - 0x0000F8)
class UAkHololensInitializationSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FAkCommonInitializationSettingsWithSampleRate) CommonSettings                                          OFFSET(getStruct<T>, {0x30, 104, 0, 0})
	SMember(FAkCommunicationSettingsWithSystemInitialization) CommunicationSettings                                OFFSET(getStruct<T>, {0x98, 40, 0, 0})
	SMember(FAkHololensAdvancedInitializationSettings) AdvancedSettings                                            OFFSET(getStruct<T>, {0xC0, 52, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x2717dc0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkHololensPlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkHololensPlatformInfo : public UAkPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/AkAudio.AkPluginInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FAkPluginInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(uint32_t)                                  PluginID                                                    OFFSET(get<uint32_t>, {0x10, 4, 0, 0})
	SMember(FString)                                   dll                                                         OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Class /Script/AkAudio.AkInitBankAssetData
/// Size: 0x0010 (0x000088 - 0x000098)
class UAkInitBankAssetData : public UAkAssetDataWithMedia
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(TArray<FAkPluginInfo>)                     PluginInfos                                                 OFFSET(get<T>, {0x88, 16, 0, 0})
};

/// Class /Script/AkAudio.AkInitBank
/// Size: 0x0020 (0x000050 - 0x000070)
class UAkInitBank : public UAkAssetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<FString>)                           AvailableAudioCultures                                      OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FString)                                   DefaultLanguage                                             OFFSET(getStruct<T>, {0x60, 16, 0, 0})
};

/// Struct /Script/AkAudio.AkAudioSession
/// Size: 0x000C (0x000000 - 0x00000C)
class FAkAudioSession : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(EAkAudioSessionCategory)                   AudioSessionCategory                                        OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  AudioSessionCategoryOptions                                 OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	CMember(EAkAudioSessionMode)                       AudioSessionMode                                            OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Class /Script/AkAudio.AkIOSInitializationSettings
/// Size: 0x00D8 (0x000028 - 0x000100)
class UAkIOSInitializationSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FAkCommonInitializationSettingsWithSampleRate) CommonSettings                                          OFFSET(getStruct<T>, {0x30, 104, 0, 0})
	SMember(FAkAudioSession)                           AudioSession                                                OFFSET(getStruct<T>, {0x98, 12, 0, 0})
	SMember(FAkCommunicationSettingsWithSystemInitialization) CommunicationSettings                                OFFSET(getStruct<T>, {0xA8, 40, 0, 0})
	SMember(FAkAdvancedInitializationSettings)         AdvancedSettings                                            OFFSET(getStruct<T>, {0xD0, 44, 0, 0})
};

/// Class /Script/AkAudio.AkIOSPlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkIOSPlatformInfo : public UAkPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/AkAudio.AkItemBoolPropertiesConv
/// Size: 0x0000 (0x000028 - 0x000028)
class UAkItemBoolPropertiesConv : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText
	// FText Conv_FAkBoolPropertyToControlToText(FAkBoolPropertyToControl& INAkBoolPropertyToControl);                          // [0x2732a10] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString
	// FString Conv_FAkBoolPropertyToControlToString(FAkBoolPropertyToControl& INAkBoolPropertyToControl);                      // [0x2732c10] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AkAudio.AkItemBoolProperties
/// Size: 0x0040 (0x000130 - 0x000170)
class UAkItemBoolProperties : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FMulticastInlineDelegate)                  OnSelectionChanged                                          OFFSET(getStruct<T>, {0x130, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPropertyDragged                                           OFFSET(getStruct<T>, {0x140, 16, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkItemBoolProperties.SetSearchText
	// void SetSearchText(FString newText);                                                                                     // [0x2732e60] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkItemBoolProperties.GetSelectedProperty
	// FString GetSelectedProperty();                                                                                           // [0x27330b0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkItemBoolProperties.GetSearchText
	// FString GetSearchText();                                                                                                 // [0x2732f60] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkItemPropertiesConv
/// Size: 0x0000 (0x000028 - 0x000028)
class UAkItemPropertiesConv : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText
	// FText Conv_FAkPropertyToControlToText(FAkPropertyToControl& INAkPropertyToControl);                                      // [0x2732a10] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString
	// FString Conv_FAkPropertyToControlToString(FAkPropertyToControl& INAkPropertyToControl);                                  // [0x2732c10] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AkAudio.AkItemProperties
/// Size: 0x0040 (0x000130 - 0x000170)
class UAkItemProperties : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FMulticastInlineDelegate)                  OnSelectionChanged                                          OFFSET(getStruct<T>, {0x130, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPropertyDragged                                           OFFSET(getStruct<T>, {0x140, 16, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkItemProperties.SetSearchText
	// void SetSearchText(FString newText);                                                                                     // [0x2732e60] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkItemProperties.GetSelectedProperty
	// FString GetSelectedProperty();                                                                                           // [0x2733840] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkItemProperties.GetSearchText
	// FString GetSearchText();                                                                                                 // [0x2732f60] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkLateReverbComponent
/// Size: 0x0090 (0x0001F0 - 0x000280)
class UAkLateReverbComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
	DMember(bool)                                      bEnable                                                     OFFSET(get<bool>, {0x1F0, 1, 0, 0})
	DMember(float)                                     SendLevel                                                   OFFSET(get<float>, {0x1F4, 4, 0, 0})
	DMember(float)                                     FadeRate                                                    OFFSET(get<float>, {0x1F8, 4, 0, 0})
	DMember(float)                                     Priority                                                    OFFSET(get<float>, {0x1FC, 4, 0, 0})
	DMember(bool)                                      AutoAssignAuxBus                                            OFFSET(get<bool>, {0x200, 1, 0, 0})
	CMember(class UAkAuxBus*)                          AuxBus                                                      OFFSET(get<T>, {0x208, 8, 0, 0})
	SMember(FString)                                   AuxBusName                                                  OFFSET(getStruct<T>, {0x210, 16, 0, 0})
	CMember(class UAkAuxBus*)                          AuxBusManual                                                OFFSET(get<T>, {0x228, 8, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkLateReverbComponent.AssociateAkTextureSetComponent
	// void AssociateAkTextureSetComponent(class UAkAcousticTextureSetComponent* textureSetComponent);                          // [0x2733c50] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkLinuxInitializationSettings
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UAkLinuxInitializationSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FAkCommonInitializationSettingsWithSampleRate) CommonSettings                                          OFFSET(getStruct<T>, {0x30, 104, 0, 0})
	SMember(FAkCommunicationSettingsWithSystemInitialization) CommunicationSettings                                OFFSET(getStruct<T>, {0x98, 40, 0, 0})
	SMember(FAkAdvancedInitializationSettingsWithMultiCoreRendering) AdvancedSettings                              OFFSET(getStruct<T>, {0xC0, 48, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x2717dc0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkLinuxPlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkLinuxPlatformInfo : public UAkPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/AkAudio.AkMacInitializationSettings
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UAkMacInitializationSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FAkCommonInitializationSettingsWithSampleRate) CommonSettings                                          OFFSET(getStruct<T>, {0x30, 104, 0, 0})
	SMember(FAkCommunicationSettingsWithSystemInitialization) CommunicationSettings                                OFFSET(getStruct<T>, {0x98, 40, 0, 0})
	SMember(FAkAdvancedInitializationSettingsWithMultiCoreRendering) AdvancedSettings                              OFFSET(getStruct<T>, {0xC0, 48, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x2717dc0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkMacPlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkMacPlatformInfo : public UAkPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/AkAudio.AkMediaAssetData
/// Size: 0x0050 (0x000028 - 0x000078)
class UAkMediaAssetData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(bool)                                      IsStreamed                                                  OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      UseDeviceMemory                                             OFFSET(get<bool>, {0x29, 1, 0, 0})
	SMember(FString)                                   Language                                                    OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   AssetPlatform                                               OFFSET(getStruct<T>, {0x40, 16, 0, 0})
};

/// Class /Script/AkAudio.AkMediaAsset
/// Size: 0x0050 (0x000028 - 0x000078)
class UAkMediaAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(uint32_t)                                  ID                                                          OFFSET(get<uint32_t>, {0x28, 4, 0, 0})
	SMember(FString)                                   MediaName                                                   OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	DMember(bool)                                      AutoLoad                                                    OFFSET(get<bool>, {0x40, 1, 0, 0})
	CMember(TArray<class UObject*>)                    UserData                                                    OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FString)                                   Language                                                    OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	CMember(class UAkMediaAssetData*)                  CurrentMediaAssetData                                       OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Class /Script/AkAudio.AkLocalizedMediaAsset
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkLocalizedMediaAsset : public UAkMediaAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/AkAudio.AkExternalMediaAsset
/// Size: 0x0060 (0x000078 - 0x0000D8)
class UAkExternalMediaAsset : public UAkMediaAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
};

/// Class /Script/AkAudio.AkPlatformInitialisationSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UAkPlatformInitialisationSettingsBase : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/AkAudio.AkPS4AdvancedInitializationSettings
/// Size: 0x0008 (0x000030 - 0x000038)
class FAkPS4AdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(uint32_t)                                  ACPBatchBufferSize                                          OFFSET(get<uint32_t>, {0x30, 4, 0, 0})
	DMember(bool)                                      UseHardwareCodecLowLatencyMode                              OFFSET(get<bool>, {0x34, 1, 0, 0})
};

/// Class /Script/AkAudio.AkPS4InitializationSettings
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UAkPS4InitializationSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FAkCommonInitializationSettings)           CommonSettings                                              OFFSET(getStruct<T>, {0x30, 96, 0, 0})
	SMember(FAkCommunicationSettingsWithSystemInitialization) CommunicationSettings                                OFFSET(getStruct<T>, {0x90, 40, 0, 0})
	SMember(FAkPS4AdvancedInitializationSettings)      AdvancedSettings                                            OFFSET(getStruct<T>, {0xB8, 56, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x2735260] Final|Native|Public  
};

/// Class /Script/AkAudio.AkPS4PlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkPS4PlatformInfo : public UAkPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/AkAudio.AkPS5AdvancedInitializationSettings
/// Size: 0x0004 (0x000030 - 0x000034)
class FAkPS5AdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 52;

public:
	DMember(bool)                                      UseHardwareCodecLowLatencyMode                              OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      bVorbisHwAcceleration                                       OFFSET(get<bool>, {0x31, 1, 0, 0})
};

/// Class /Script/AkAudio.AkPS5InitializationSettings
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UAkPS5InitializationSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FAkCommonInitializationSettings)           CommonSettings                                              OFFSET(getStruct<T>, {0x30, 96, 0, 0})
	SMember(FAkCommunicationSettingsWithSystemInitialization) CommunicationSettings                                OFFSET(getStruct<T>, {0x90, 40, 0, 0})
	SMember(FAkPS5AdvancedInitializationSettings)      AdvancedSettings                                            OFFSET(getStruct<T>, {0xB8, 52, 0, 0})
};

/// Class /Script/AkAudio.AkDPXInitializationSettings
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UAkDPXInitializationSettings : public UAkPS5InitializationSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Script/AkAudio.AkPS5PlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkPS5PlatformInfo : public UAkPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/AkAudio.AkReverbVolume
/// Size: 0x0038 (0x000280 - 0x0002B8)
class AAkReverbVolume : public AVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x280, 1, 0, 0})
	CMember(class UAkAuxBus*)                          AuxBus                                                      OFFSET(get<T>, {0x288, 8, 0, 0})
	SMember(FString)                                   AuxBusName                                                  OFFSET(getStruct<T>, {0x290, 16, 0, 0})
	DMember(float)                                     SendLevel                                                   OFFSET(get<float>, {0x2A0, 4, 0, 0})
	DMember(float)                                     FadeRate                                                    OFFSET(get<float>, {0x2A4, 4, 0, 0})
	DMember(float)                                     Priority                                                    OFFSET(get<float>, {0x2A8, 4, 0, 0})
	CMember(class UAkLateReverbComponent*)             LateReverbComponent                                         OFFSET(get<T>, {0x2B0, 8, 0, 0})
};

/// Class /Script/AkAudio.AkRoomComponent
/// Size: 0x0030 (0x000210 - 0x000240)
class UAkRoomComponent : public UAkGameObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	DMember(bool)                                      bEnable                                                     OFFSET(get<bool>, {0x210, 1, 0, 0})
	DMember(bool)                                      bDynamic                                                    OFFSET(get<bool>, {0x211, 1, 0, 0})
	DMember(float)                                     Priority                                                    OFFSET(get<float>, {0x214, 4, 0, 0})
	DMember(float)                                     WallOcclusion                                               OFFSET(get<float>, {0x218, 4, 0, 0})
	DMember(float)                                     AuxSendLevel                                                OFFSET(get<float>, {0x21C, 4, 0, 0})
	DMember(bool)                                      AutoPost                                                    OFFSET(get<bool>, {0x220, 1, 0, 0})
	CMember(class UAkAcousticTextureSetComponent*)     GeometryComponent                                           OFFSET(get<T>, {0x230, 8, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkRoomComponent.SetGeometryComponent
	// void SetGeometryComponent(class UAkAcousticTextureSetComponent* textureSetComponent);                                    // [0x27379d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkRoomComponent.GetPrimitiveParent
	// class UPrimitiveComponent* GetPrimitiveParent();                                                                         // [0x2737c00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkRtpc
/// Size: 0x0000 (0x000040 - 0x000040)
class UAkRtpc : public UAkAudioType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/AkAudio.AkGeometrySurfacePropertiesToMap
/// Size: 0x0038 (0x000000 - 0x000038)
class FAkGeometrySurfacePropertiesToMap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TWeakObjectPtr<class UAkAcousticTexture*>) AcousticTexture                                             OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     OcclusionValue                                              OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Struct /Script/AkAudio.AkAcousticTextureParams
/// Size: 0x0020 (0x000000 - 0x000020)
class FAkAcousticTextureParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector4)                                  AbsorptionValues                                            OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Class /Script/AkAudio.AkSettings
/// Size: 0x02E0 (0x000028 - 0x000308)
class UAkSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	DMember(char)                                      MaxSimultaneousReverbVolumes                                OFFSET(get<char>, {0x28, 1, 0, 0})
	SMember(FFilePath)                                 WwiseProjectPath                                            OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FDirectoryPath)                            WwiseSoundDataFolder                                        OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	DMember(bool)                                      bAutoConnectToWAAPI                                         OFFSET(get<bool>, {0x50, 1, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            DefaultOcclusionCollisionChannel                            OFFSET(get<T>, {0x51, 1, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            DefaultFitToGeometryCollisionChannel                        OFFSET(get<T>, {0x52, 1, 0, 0})
	CMember(TMap<TWeakObjectPtr<UPhysicalMaterial*>, FAkGeometrySurfacePropertiesToMap>) AkGeometryMap             OFFSET(get<T>, {0x58, 80, 0, 0})
	DMember(float)                                     GlobalDecayAbsorption                                       OFFSET(get<float>, {0xA8, 4, 0, 0})
	CMember(TWeakObjectPtr<class UAkAuxBus*>)          DefaultReverbAuxBus                                         OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(TMap<float, TWeakObjectPtr<UAkAuxBus*>>)   EnvironmentDecayAuxBusMap                                   OFFSET(get<T>, {0xE0, 80, 0, 0})
	SMember(FString)                                   HFDampingName                                               OFFSET(getStruct<T>, {0x130, 16, 0, 0})
	SMember(FString)                                   DecayEstimateName                                           OFFSET(getStruct<T>, {0x140, 16, 0, 0})
	SMember(FString)                                   TimeToFirstReflectionName                                   OFFSET(getStruct<T>, {0x150, 16, 0, 0})
	CMember(TWeakObjectPtr<class UAkRtpc*>)            HFDampingRTPC                                               OFFSET(get<T>, {0x160, 8, 0, 0})
	CMember(TWeakObjectPtr<class UAkRtpc*>)            DecayEstimateRTPC                                           OFFSET(get<T>, {0x190, 8, 0, 0})
	CMember(TWeakObjectPtr<class UAkRtpc*>)            TimeToFirstReflectionRTPC                                   OFFSET(get<T>, {0x1C0, 8, 0, 0})
	CMember(TWeakObjectPtr<class UAkAudioEvent*>)      AudioInputEvent                                             OFFSET(get<T>, {0x1F0, 8, 0, 0})
	CMember(TMap<FGuid, FAkAcousticTextureParams>)     AcousticTextureParamsMap                                    OFFSET(get<T>, {0x220, 80, 0, 0})
	DMember(bool)                                      SplitSwitchContainerMedia                                   OFFSET(get<bool>, {0x270, 1, 0, 0})
	DMember(bool)                                      SplitMediaPerFolder                                         OFFSET(get<bool>, {0x271, 1, 0, 0})
	DMember(bool)                                      UseEventBasedPackaging                                      OFFSET(get<bool>, {0x272, 1, 0, 0})
	DMember(bool)                                      EnableAutomaticAssetSynchronization                         OFFSET(get<bool>, {0x273, 1, 0, 0})
	SMember(FString)                                   CommandletCommitMessage                                     OFFSET(getStruct<T>, {0x278, 16, 0, 0})
	CMember(TMap<FString, FString>)                    UnrealCultureToWwiseCulture                                 OFFSET(get<T>, {0x288, 80, 0, 0})
	DMember(bool)                                      AskedToUseNewAssetManagement                                OFFSET(get<bool>, {0x2D8, 1, 0, 0})
	DMember(bool)                                      bEnableMultiCoreRendering                                   OFFSET(get<bool>, {0x2D9, 1, 0, 0})
	DMember(bool)                                      MigratedEnableMultiCoreRendering                            OFFSET(get<bool>, {0x2DA, 1, 0, 0})
	DMember(bool)                                      FixupRedirectorsDuringMigration                             OFFSET(get<bool>, {0x2DB, 1, 0, 0})
	SMember(FDirectoryPath)                            WwiseWindowsInstallationPath                                OFFSET(getStruct<T>, {0x2E0, 16, 0, 0})
	SMember(FFilePath)                                 WwiseMacInstallationPath                                    OFFSET(getStruct<T>, {0x2F0, 16, 0, 0})
};

/// Class /Script/AkAudio.AkSettingsPerUser
/// Size: 0x0058 (0x000028 - 0x000080)
class UAkSettingsPerUser : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FDirectoryPath)                            WwiseWindowsInstallationPath                                OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FFilePath)                                 WwiseMacInstallationPath                                    OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	DMember(bool)                                      EnableAutomaticAssetSynchronization                         OFFSET(get<bool>, {0x48, 1, 0, 0})
	SMember(FString)                                   WaapiIPAddress                                              OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	DMember(uint32_t)                                  WaapiPort                                                   OFFSET(get<uint32_t>, {0x60, 4, 0, 0})
	DMember(bool)                                      bAutoConnectToWAAPI                                         OFFSET(get<bool>, {0x64, 1, 0, 0})
	DMember(bool)                                      AutoSyncSelection                                           OFFSET(get<bool>, {0x65, 1, 0, 0})
	DMember(bool)                                      SuppressWwiseProjectPathWarnings                            OFFSET(get<bool>, {0x66, 1, 0, 0})
	DMember(bool)                                      SoundDataGenerationSkipLanguage                             OFFSET(get<bool>, {0x67, 1, 0, 0})
};

/// Struct /Script/AkAudio.AkPropertyToControl
/// Size: 0x0010 (0x000000 - 0x000010)
class FAkPropertyToControl : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   ItemProperty                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Class /Script/AkAudio.AkSlider
/// Size: 0x0590 (0x000130 - 0x0006C0)
class UAkSlider : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1728;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x130, 4, 0, 0})
	SMember(FDelegateProperty)                         ValueDelegate                                               OFFSET(getStruct<T>, {0x134, 16, 0, 0})
	SMember(FSliderStyle)                              WidgetStyle                                                 OFFSET(getStruct<T>, {0x150, 1184, 0, 0})
	CMember(TEnumAsByte<EOrientation>)                 Orientation                                                 OFFSET(get<T>, {0x5F0, 1, 0, 0})
	SMember(FLinearColor)                              SliderBarColor                                              OFFSET(getStruct<T>, {0x5F4, 16, 0, 0})
	SMember(FLinearColor)                              SliderHandleColor                                           OFFSET(getStruct<T>, {0x604, 16, 0, 0})
	DMember(bool)                                      IndentHandle                                                OFFSET(get<bool>, {0x614, 1, 0, 0})
	DMember(bool)                                      Locked                                                      OFFSET(get<bool>, {0x615, 1, 0, 0})
	DMember(float)                                     StepSize                                                    OFFSET(get<float>, {0x618, 4, 0, 0})
	DMember(bool)                                      IsFocusable                                                 OFFSET(get<bool>, {0x61C, 1, 0, 0})
	SMember(FAkPropertyToControl)                      ThePropertyToControl                                        OFFSET(getStruct<T>, {0x620, 16, 0, 0})
	SMember(FAkWwiseItemToControl)                     ItemToControl                                               OFFSET(getStruct<T>, {0x630, 64, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnValueChanged                                              OFFSET(getStruct<T>, {0x670, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnItemDropped                                               OFFSET(getStruct<T>, {0x680, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPropertyDropped                                           OFFSET(getStruct<T>, {0x690, 16, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkSlider.SetValue
	// void SetValue(float InValue);                                                                                            // [0x2739410] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetStepSize
	// void SetStepSize(float InValue);                                                                                         // [0x2738ff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetSliderHandleColor
	// void SetSliderHandleColor(FLinearColor InValue);                                                                         // [0x2738d30] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetSliderBarColor
	// void SetSliderBarColor(FLinearColor InValue);                                                                            // [0x2738e90] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetLocked
	// void SetLocked(bool InValue);                                                                                            // [0x2739150] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetIndentHandle
	// void SetIndentHandle(bool InValue);                                                                                      // [0x27392b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetAkSliderItemProperty
	// void SetAkSliderItemProperty(FString ItemProperty);                                                                      // [0x27389c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetAkSliderItemId
	// void SetAkSliderItemId(FGuid& ItemId);                                                                                   // [0x2738c40] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.GetValue
	// float GetValue();                                                                                                        // [0x2739500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkSlider.GetAkSliderItemProperty
	// FString GetAkSliderItemProperty();                                                                                       // [0x2738900] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkSlider.GetAkSliderItemId
	// FGuid GetAkSliderItemId();                                                                                               // [0x2738bd0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkSpatialAudioVolume
/// Size: 0x0018 (0x000280 - 0x000298)
class AAkSpatialAudioVolume : public AVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(class UAkSurfaceReflectorSetComponent*)    SurfaceReflectorSet                                         OFFSET(get<T>, {0x280, 8, 0, 0})
	CMember(class UAkLateReverbComponent*)             LateReverb                                                  OFFSET(get<T>, {0x288, 8, 0, 0})
	CMember(class UAkRoomComponent*)                   Room                                                        OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/AkAudio.AkSpotReflector
/// Size: 0x0028 (0x000248 - 0x000270)
class AAkSpotReflector : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	CMember(class UAkAuxBus*)                          EarlyReflectionAuxBus                                       OFFSET(get<T>, {0x248, 8, 0, 0})
	SMember(FString)                                   EarlyReflectionAuxBusName                                   OFFSET(getStruct<T>, {0x250, 16, 0, 0})
	CMember(class UAkAcousticTexture*)                 AcousticTexture                                             OFFSET(get<T>, {0x260, 8, 0, 0})
	DMember(float)                                     DistanceScalingFactor                                       OFFSET(get<float>, {0x268, 4, 0, 0})
	DMember(float)                                     Level                                                       OFFSET(get<float>, {0x26C, 4, 0, 0})
};

/// Class /Script/AkAudio.AkStateValue
/// Size: 0x0000 (0x000068 - 0x000068)
class UAkStateValue : public UAkGroupValue
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Script/AkAudio.AkSubmixInputComponent
/// Size: 0x0050 (0x000410 - 0x000460)
class UAkSubmixInputComponent : public UAkAudioInputComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1120;

public:
	CMember(class USoundSubmix*)                       SubmixToRecord                                              OFFSET(get<T>, {0x410, 8, 0, 0})
};

/// Struct /Script/AkAudio.AkSurfacePoly
/// Size: 0x0018 (0x000000 - 0x000018)
class FAkSurfacePoly : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UAkAcousticTexture*)                 Texture                                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     Occlusion                                                   OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      EnableSurface                                               OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(float)                                     SurfaceArea                                                 OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Class /Script/AkAudio.AkSurfaceReflectorSetComponent
/// Size: 0x0038 (0x000208 - 0x000240)
class UAkSurfaceReflectorSetComponent : public UAkAcousticTextureSetComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	DMember(bool)                                      bEnableSurfaceReflectors                                    OFFSET(get<bool>, {0x208, 1, 0, 0})
	CMember(TArray<FAkSurfacePoly>)                    AcousticPolys                                               OFFSET(get<T>, {0x210, 16, 0, 0})
	DMember(bool)                                      bEnableDiffraction                                          OFFSET(get<bool>, {0x220, 1, 0, 0})
	DMember(bool)                                      bEnableDiffractionOnBoundaryEdges                           OFFSET(get<bool>, {0x221, 1, 0, 0})
	CMember(class AActor*)                             AssociatedRoom                                              OFFSET(get<T>, {0x228, 8, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet
	// void UpdateSurfaceReflectorSet();                                                                                        // [0x273a250] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet
	// void SendSurfaceReflectorSet();                                                                                          // [0x273a290] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet
	// void RemoveSurfaceReflectorSet();                                                                                        // [0x272f280] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/AkAudio.AkCommunicationSettingsWithCommSelection
/// Size: 0x0008 (0x000020 - 0x000028)
class FAkCommunicationSettingsWithCommSelection : public FAkCommunicationSettings
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(EAkCommSystem)                             CommunicationSystem                                         OFFSET(get<T>, {0x20, 4, 0, 0})
};

/// Class /Script/AkAudio.AkSwitchInitializationSettings
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UAkSwitchInitializationSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FAkCommonInitializationSettingsWithSampleRate) CommonSettings                                          OFFSET(getStruct<T>, {0x30, 104, 0, 0})
	SMember(FAkCommunicationSettingsWithCommSelection) CommunicationSettings                                       OFFSET(getStruct<T>, {0x98, 40, 0, 0})
	SMember(FAkAdvancedInitializationSettingsWithMultiCoreRendering) AdvancedSettings                              OFFSET(getStruct<T>, {0xC0, 48, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkSwitchInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x2717dc0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkSwitchPlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkSwitchPlatformInfo : public UAkPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/AkAudio.AkSwitchValue
/// Size: 0x0000 (0x000068 - 0x000068)
class UAkSwitchValue : public UAkGroupValue
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Script/AkAudio.AkTrigger
/// Size: 0x0000 (0x000040 - 0x000040)
class UAkTrigger : public UAkAudioType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/AkAudio.AkTVOSInitializationSettings
/// Size: 0x00D8 (0x000028 - 0x000100)
class UAkTVOSInitializationSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FAkCommonInitializationSettingsWithSampleRate) CommonSettings                                          OFFSET(getStruct<T>, {0x30, 104, 0, 0})
	SMember(FAkAudioSession)                           AudioSession                                                OFFSET(getStruct<T>, {0x98, 12, 0, 0})
	SMember(FAkCommunicationSettingsWithSystemInitialization) CommunicationSettings                                OFFSET(getStruct<T>, {0xA8, 40, 0, 0})
	SMember(FAkAdvancedInitializationSettings)         AdvancedSettings                                            OFFSET(getStruct<T>, {0xD0, 44, 0, 0})
};

/// Class /Script/AkAudio.AkTVOSPlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkTVOSPlatformInfo : public UAkPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/AkAudio.AkWaapiCalls
/// Size: 0x0000 (0x000028 - 0x000028)
class UAkWaapiCalls : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AkAudio.AkWaapiCalls.Unsubscribe
	// FAKWaapiJsonObject Unsubscribe(FAkWaapiSubscriptionId& SubscriptionId, bool& UnsubscriptionDone);                        // [0x273b870] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiCalls.SubscribeToWaapi
	// FAKWaapiJsonObject SubscribeToWaapi(FAkWaapiUri& WaapiUri, FAKWaapiJsonObject& WaapiOptions, FDelegateProperty& callback, FAkWaapiSubscriptionId& SubscriptionId, bool& SubscriptionDone); // [0x273ba40] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiCalls.SetSubscriptionID
	// void SetSubscriptionID(FAkWaapiSubscriptionId& Subscription, int32_t ID);                                                // [0x273c4d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback
	// bool RegisterWaapiProjectLoadedCallback(FDelegateProperty& callback);                                                    // [0x273c2b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback
	// bool RegisterWaapiConnectionLostCallback(FDelegateProperty& callback);                                                   // [0x273c180] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiCalls.GetSubscriptionID
	// int32_t GetSubscriptionID(FAkWaapiSubscriptionId& Subscription);                                                         // [0x273c3e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText
	// FText Conv_FAkWaapiSubscriptionIdToText(FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);                                // [0x273b520] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString
	// FString Conv_FAkWaapiSubscriptionIdToString(FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);                            // [0x273b730] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.AkWaapiCalls.CallWaapi
	// FAKWaapiJsonObject CallWaapi(FAkWaapiUri& WaapiUri, FAKWaapiJsonObject& WaapiArgs, FAKWaapiJsonObject& WaapiOptions);    // [0x273be50] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AkAudio.SAkWaapiFieldNamesConv
/// Size: 0x0000 (0x000028 - 0x000028)
class USAkWaapiFieldNamesConv : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText
	// FText Conv_FAkWaapiFieldNamesToText(FAkWaapiFieldNames& INAkWaapiFieldNames);                                            // [0x2732a10] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString
	// FString Conv_FAkWaapiFieldNamesToString(FAkWaapiFieldNames& INAkWaapiFieldNames);                                        // [0x2732c10] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AkAudio.AkWaapiJsonManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UAkWaapiJsonManager : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AkAudio.AkWaapiJsonManager.SetStringField
	// FAKWaapiJsonObject SetStringField(FAkWaapiFieldNames& FieldName, FString FieldValue, FAKWaapiJsonObject Target);         // [0x2740020] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.SetObjectField
	// FAKWaapiJsonObject SetObjectField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject FieldValue, FAKWaapiJsonObject Target); // [0x273f6a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.SetNumberField
	// FAKWaapiJsonObject SetNumberField(FAkWaapiFieldNames& FieldName, float FieldValue, FAKWaapiJsonObject Target);           // [0x273fa30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.SetBoolField
	// FAKWaapiJsonObject SetBoolField(FAkWaapiFieldNames& FieldName, bool FieldValue, FAKWaapiJsonObject Target);              // [0x273fd20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.SetArrayStringFields
	// FAKWaapiJsonObject SetArrayStringFields(FAkWaapiFieldNames& FieldName, TArray<FString>& FieldStringValues, FAKWaapiJsonObject Target); // [0x273f360] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.SetArrayObjectFields
	// FAKWaapiJsonObject SetArrayObjectFields(FAkWaapiFieldNames& FieldName, TArray<FAKWaapiJsonObject>& FieldObjectValues, FAKWaapiJsonObject Target); // [0x273efe0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.GetStringField
	// FString GetStringField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                                        // [0x273ed50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.GetObjectField
	// FAKWaapiJsonObject GetObjectField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                             // [0x273e330] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.GetNumberField
	// float GetNumberField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                                          // [0x273e8a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.GetIntegerField
	// int32_t GetIntegerField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                                       // [0x273e650] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.GetBoolField
	// bool GetBoolField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                                             // [0x273eb00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.GetArrayField
	// TArray<FAKWaapiJsonObject> GetArrayField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                      // [0x273e000] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText
	// FText Conv_FAKWaapiJsonObjectToText(FAKWaapiJsonObject INAKWaapiJsonObject);                                             // [0x273dce0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString
	// FString Conv_FAKWaapiJsonObjectToString(FAKWaapiJsonObject INAKWaapiJsonObject);                                         // [0x273de80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AkAudio.AkWaapiUriConv
/// Size: 0x0000 (0x000028 - 0x000028)
class UAkWaapiUriConv : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText
	// FText Conv_FAkWaapiUriToText(FAkWaapiUri& INAkWaapiUri);                                                                 // [0x2732a10] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString
	// FString Conv_FAkWaapiUriToString(FAkWaapiUri& INAkWaapiUri);                                                             // [0x2732c10] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/AkAudio.AkWindowsAdvancedInitializationSettings
/// Size: 0x0008 (0x000030 - 0x000038)
class FAkWindowsAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      UseHeadMountedDisplayAudioDevice                            OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(uint32_t)                                  MaxSystemAudioObjects                                       OFFSET(get<uint32_t>, {0x34, 4, 0, 0})
};

/// Class /Script/AkAudio.AkWindowsInitializationSettings
/// Size: 0x00D0 (0x000028 - 0x0000F8)
class UAkWindowsInitializationSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FAkCommonInitializationSettingsWithSampleRate) CommonSettings                                          OFFSET(getStruct<T>, {0x30, 104, 0, 0})
	SMember(FAkCommunicationSettingsWithSystemInitialization) CommunicationSettings                                OFFSET(getStruct<T>, {0x98, 40, 0, 0})
	SMember(FAkWindowsAdvancedInitializationSettings)  AdvancedSettings                                            OFFSET(getStruct<T>, {0xC0, 56, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x2717dc0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkWin32PlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkWin32PlatformInfo : public UAkPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/AkAudio.AkWin64PlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkWin64PlatformInfo : public UAkPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/AkAudio.AkWindowsPlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkWindowsPlatformInfo : public UAkWin64PlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/AkAudio.AkWinGDKAdvancedInitializationSettings
/// Size: 0x0008 (0x000030 - 0x000038)
class FAkWinGDKAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      UseHeadMountedDisplayAudioDevice                            OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(uint32_t)                                  uMaxSystemAudioObjects                                      OFFSET(get<uint32_t>, {0x34, 4, 0, 0})
};

/// Class /Script/AkAudio.AkWinGDKInitializationSettings
/// Size: 0x00D0 (0x000028 - 0x0000F8)
class UAkWinGDKInitializationSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FAkCommonInitializationSettingsWithSampleRate) CommonSettings                                          OFFSET(getStruct<T>, {0x30, 104, 0, 0})
	SMember(FAkCommunicationSettingsWithSystemInitialization) CommunicationSettings                                OFFSET(getStruct<T>, {0x98, 40, 0, 0})
	SMember(FAkWinGDKAdvancedInitializationSettings)   AdvancedSettings                                            OFFSET(getStruct<T>, {0xC0, 56, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkWinGDKInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x2717dc0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkWinAnvilInitializationSettings
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UAkWinAnvilInitializationSettings : public UAkWinGDKInitializationSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
};

/// Class /Script/AkAudio.AkWinGDKPlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkWinGDKPlatformInfo : public UAkPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/AkAudio.AkWinAnvilPlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkWinAnvilPlatformInfo : public UAkWinGDKPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/AkAudio.AkWwiseTree
/// Size: 0x0040 (0x000130 - 0x000170)
class UAkWwiseTree : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FMulticastInlineDelegate)                  OnSelectionChanged                                          OFFSET(getStruct<T>, {0x130, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnItemDragged                                               OFFSET(getStruct<T>, {0x140, 16, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkWwiseTree.SetSearchText
	// void SetSearchText(FString newText);                                                                                     // [0x2732e60] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkWwiseTree.GetSelectedItem
	// FAkWwiseObjectDetails GetSelectedItem();                                                                                 // [0x2741a50] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkWwiseTree.GetSearchText
	// FString GetSearchText();                                                                                                 // [0x2732f60] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkWwiseTreeSelector
/// Size: 0x0060 (0x000130 - 0x000190)
class UAkWwiseTreeSelector : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FMulticastInlineDelegate)                  OnSelectionChanged                                          OFFSET(getStruct<T>, {0x130, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnItemDragged                                               OFFSET(getStruct<T>, {0x140, 16, 0, 0})
};

/// Struct /Script/AkAudio.AkXboxOneGDKApuHeapInitializationSettings
/// Size: 0x0008 (0x000000 - 0x000008)
class FAkXboxOneGDKApuHeapInitializationSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(uint32_t)                                  CachedSize                                                  OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  NonCachedSize                                               OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/AkAudio.AkXboxOneGDKAdvancedInitializationSettings
/// Size: 0x0004 (0x000030 - 0x000034)
class FAkXboxOneGDKAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 52;

public:
	DMember(uint16_t)                                  MaximumNumberOfXMAVoices                                    OFFSET(get<uint16_t>, {0x30, 2, 0, 0})
	DMember(bool)                                      UseHardwareCodecLowLatencyMode                              OFFSET(get<bool>, {0x32, 1, 0, 0})
};

/// Class /Script/AkAudio.AkXboxOneGDKInitializationSettings
/// Size: 0x00D0 (0x000028 - 0x0000F8)
class UAkXboxOneGDKInitializationSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FAkCommonInitializationSettings)           CommonSettings                                              OFFSET(getStruct<T>, {0x30, 96, 0, 0})
	SMember(FAkXboxOneGDKApuHeapInitializationSettings) ApuHeapSettings                                            OFFSET(getStruct<T>, {0x90, 8, 0, 0})
	SMember(FAkCommunicationSettingsWithSystemInitialization) CommunicationSettings                                OFFSET(getStruct<T>, {0x98, 40, 0, 0})
	SMember(FAkXboxOneGDKAdvancedInitializationSettings) AdvancedSettings                                          OFFSET(getStruct<T>, {0xC0, 52, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkXboxOneGDKInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x2717dc0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkXboxOneAnvilInitializationSettings
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UAkXboxOneAnvilInitializationSettings : public UAkXboxOneGDKInitializationSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
};

/// Class /Script/AkAudio.AkXB1InitializationSettings
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UAkXB1InitializationSettings : public UAkXboxOneGDKInitializationSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
};

/// Class /Script/AkAudio.AkXboxOneGDKPlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkXboxOneGDKPlatformInfo : public UAkPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/AkAudio.AkXboxOneAnvilPlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkXboxOneAnvilPlatformInfo : public UAkXboxOneGDKPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/AkAudio.AkXB1PlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkXB1PlatformInfo : public UAkXboxOneGDKPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/AkAudio.AkXboxOneApuHeapInitializationSettings
/// Size: 0x0008 (0x000000 - 0x000008)
class FAkXboxOneApuHeapInitializationSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(uint32_t)                                  CachedSize                                                  OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  NonCachedSize                                               OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/AkAudio.AkXboxOneAdvancedInitializationSettings
/// Size: 0x0004 (0x000030 - 0x000034)
class FAkXboxOneAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 52;

public:
	DMember(uint16_t)                                  MaximumNumberOfXMAVoices                                    OFFSET(get<uint16_t>, {0x30, 2, 0, 0})
	DMember(bool)                                      UseHardwareCodecLowLatencyMode                              OFFSET(get<bool>, {0x32, 1, 0, 0})
};

/// Class /Script/AkAudio.AkXboxOneInitializationSettings
/// Size: 0x00D0 (0x000028 - 0x0000F8)
class UAkXboxOneInitializationSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FAkCommonInitializationSettings)           CommonSettings                                              OFFSET(getStruct<T>, {0x30, 96, 0, 0})
	SMember(FAkXboxOneApuHeapInitializationSettings)   ApuHeapSettings                                             OFFSET(getStruct<T>, {0x90, 8, 0, 0})
	SMember(FAkCommunicationSettingsWithSystemInitialization) CommunicationSettings                                OFFSET(getStruct<T>, {0x98, 40, 0, 0})
	SMember(FAkXboxOneAdvancedInitializationSettings)  AdvancedSettings                                            OFFSET(getStruct<T>, {0xC0, 52, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkXboxOneInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x2717dc0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkXboxOnePlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkXboxOnePlatformInfo : public UAkPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/AkAudio.AkXSXApuHeapInitializationSettings
/// Size: 0x0008 (0x000000 - 0x000008)
class FAkXSXApuHeapInitializationSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(uint32_t)                                  CachedSize                                                  OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  NonCachedSize                                               OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/AkAudio.AkXSXAdvancedInitializationSettings
/// Size: 0x000C (0x000030 - 0x00003C)
class FAkXSXAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 60;

public:
	DMember(uint16_t)                                  MaximumNumberOfXMAVoices                                    OFFSET(get<uint16_t>, {0x30, 2, 0, 0})
	DMember(bool)                                      UseHardwareCodecLowLatencyMode                              OFFSET(get<bool>, {0x32, 1, 0, 0})
	DMember(uint16_t)                                  MaximumNumberOfOpusVoices                                   OFFSET(get<uint16_t>, {0x34, 2, 0, 0})
	DMember(uint32_t)                                  uMaxSystemAudioObjects                                      OFFSET(get<uint32_t>, {0x38, 4, 0, 0})
};

/// Class /Script/AkAudio.AkXSXInitializationSettings
/// Size: 0x00D8 (0x000028 - 0x000100)
class UAkXSXInitializationSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FAkCommonInitializationSettings)           CommonSettings                                              OFFSET(getStruct<T>, {0x30, 96, 0, 0})
	SMember(FAkXSXApuHeapInitializationSettings)       ApuHeapSettings                                             OFFSET(getStruct<T>, {0x90, 8, 0, 0})
	SMember(FAkCommunicationSettingsWithSystemInitialization) CommunicationSettings                                OFFSET(getStruct<T>, {0x98, 40, 0, 0})
	SMember(FAkXSXAdvancedInitializationSettings)      AdvancedSettings                                            OFFSET(getStruct<T>, {0xC0, 60, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkXSXInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x2717dc0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkMPXInitializationSettings
/// Size: 0x0000 (0x000100 - 0x000100)
class UAkMPXInitializationSettings : public UAkXSXInitializationSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Class /Script/AkAudio.AkXSXPlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkXSXPlatformInfo : public UAkPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/AkAudio.MovieSceneAkAudioEventSection
/// Size: 0x00E8 (0x0000F0 - 0x0001D8)
class UMovieSceneAkAudioEventSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	CMember(class UAkAudioEvent*)                      Event                                                       OFFSET(get<T>, {0x130, 8, 0, 0})
	DMember(bool)                                      RetriggerEvent                                              OFFSET(get<bool>, {0x138, 1, 0, 0})
	DMember(int32_t)                                   ScrubTailLengthMs                                           OFFSET(get<int32_t>, {0x13C, 4, 0, 0})
	DMember(bool)                                      StopAtSectionEnd                                            OFFSET(get<bool>, {0x140, 1, 0, 0})
	SMember(FString)                                   EventName                                                   OFFSET(getStruct<T>, {0x148, 16, 0, 0})
	DMember(float)                                     MaxSourceDuration                                           OFFSET(get<float>, {0x178, 4, 0, 0})
	SMember(FString)                                   MaxDurationSourceID                                         OFFSET(getStruct<T>, {0x180, 16, 0, 0})
};

/// Class /Script/AkAudio.MovieSceneAkTrack
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UMovieSceneAkTrack : public UMovieSceneTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<class UMovieSceneSection*>)         Sections                                                    OFFSET(get<T>, {0x98, 16, 0, 0})
	DMember(bool)                                      bIsAMasterTrack                                             OFFSET(get<bool>, {0xA8, 1, 0, 0})
};

/// Class /Script/AkAudio.MovieSceneAkAudioEventTrack
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
};

/// Struct /Script/AkAudio.MovieSceneTangentDataSerializationHelper
/// Size: 0x0014 (0x000000 - 0x000014)
class FMovieSceneTangentDataSerializationHelper : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     ArriveTangent                                               OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     LeaveTangent                                                OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(TEnumAsByte<ERichCurveTangentWeightMode>)  TangentWeightMode                                           OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(float)                                     ArriveTangentWeight                                         OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     LeaveTangentWeight                                          OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/AkAudio.MovieSceneFloatValueSerializationHelper
/// Size: 0x001C (0x000000 - 0x00001C)
class FMovieSceneFloatValueSerializationHelper : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(TEnumAsByte<ERichCurveInterpMode>)         InterpMode                                                  OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(TEnumAsByte<ERichCurveTangentMode>)        TangentMode                                                 OFFSET(get<T>, {0x5, 1, 0, 0})
	SMember(FMovieSceneTangentDataSerializationHelper) Tangent                                                     OFFSET(getStruct<T>, {0x8, 20, 0, 0})
};

/// Struct /Script/AkAudio.MovieSceneFloatChannelSerializationHelper
/// Size: 0x0030 (0x000000 - 0x000030)
class FMovieSceneFloatChannelSerializationHelper : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TEnumAsByte<ERichCurveExtrapolation>)      PreInfinityExtrap                                           OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TEnumAsByte<ERichCurveExtrapolation>)      PostInfinityExtrap                                          OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(TArray<int32_t>)                           Times                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FMovieSceneFloatValueSerializationHelper>) Values                                               OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(float)                                     DefaultValue                                                OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(bool)                                      bHasDefaultValue                                            OFFSET(get<bool>, {0x2C, 1, 0, 0})
};

/// Class /Script/AkAudio.MovieSceneAkAudioRTPCSection
/// Size: 0x01D8 (0x0000F0 - 0x0002C8)
class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
	CMember(class UAkRtpc*)                            RTPC                                                        OFFSET(get<T>, {0xF0, 8, 0, 0})
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0xF8, 16, 0, 0})
	SMember(FRichCurve)                                FloatCurve                                                  OFFSET(getStruct<T>, {0x108, 128, 0, 0})
	SMember(FMovieSceneFloatChannelSerializationHelper) FloatChannelSerializationHelper                            OFFSET(getStruct<T>, {0x188, 48, 0, 0})
	SMember(FMovieSceneFloatChannel)                   RTPCChannel                                                 OFFSET(getStruct<T>, {0x1B8, 272, 0, 0})
};

/// Class /Script/AkAudio.MovieSceneAkAudioRTPCTrack
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
};

/// Class /Script/AkAudio.PostEventAsync
/// Size: 0x0070 (0x000030 - 0x0000A0)
class UPostEventAsync : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FMulticastInlineDelegate)                  Completed                                                   OFFSET(getStruct<T>, {0x30, 16, 0, 0})


	/// Functions
	// Function /Script/AkAudio.PostEventAsync.PostEventAsync
	// class UPostEventAsync* PostEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, class AActor* Actor, int32_t CallbackMask, FDelegateProperty& PostEventCallback, TArray<FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed); // [0x2746c40] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.PostEventAsync.PollPostEventFuture
	// void PollPostEventFuture();                                                                                              // [0x2746c20] Final|Native|Private 
};

/// Class /Script/AkAudio.PostEventAtLocationAsync
/// Size: 0x0050 (0x000030 - 0x000080)
class UPostEventAtLocationAsync : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FMulticastInlineDelegate)                  Completed                                                   OFFSET(getStruct<T>, {0x30, 16, 0, 0})


	/// Functions
	// Function /Script/AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync
	// class UPostEventAtLocationAsync* PostEventAtLocationAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation); // [0x2747520] Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.PostEventAtLocationAsync.PollPostEventFuture
	// void PollPostEventFuture();                                                                                              // [0x2747500] Final|Native|Private 
};

/// Struct /Script/AkAudio.AKWaapiJsonObject
/// Size: 0x0010 (0x000000 - 0x000010)
class FAKWaapiJsonObject : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/AkAudio.AkWaapiSubscriptionId
/// Size: 0x0008 (0x000000 - 0x000008)
class FAkWaapiSubscriptionId : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/AkAudio.AkChannelMask
/// Size: 0x0004 (0x000000 - 0x000004)
class FAkChannelMask : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   ChannelMask                                                 OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/AkAudio.AkOutputSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FAkOutputSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   AudioDeviceSharesetName                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   IdDevice                                                    OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	CMember(PanningRule)                               PanRule                                                     OFFSET(get<T>, {0x14, 1, 0, 0})
	CMember(AkChannelConfiguration)                    ChannelConfig                                               OFFSET(get<T>, {0x15, 1, 0, 0})
};

/// Struct /Script/AkAudio.AkMidiEventBase
/// Size: 0x0002 (0x000000 - 0x000002)
class FAkMidiEventBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	CMember(EAkMidiEventType)                          Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(char)                                      Chan                                                        OFFSET(get<char>, {0x1, 1, 0, 0})
};

/// Struct /Script/AkAudio.AkMidiGeneric
/// Size: 0x0002 (0x000002 - 0x000004)
class FAkMidiGeneric : public FAkMidiEventBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(char)                                      Param1                                                      OFFSET(get<char>, {0x2, 1, 0, 0})
	DMember(char)                                      Param2                                                      OFFSET(get<char>, {0x3, 1, 0, 0})
};

/// Struct /Script/AkAudio.AkMidiNoteOnOff
/// Size: 0x0002 (0x000002 - 0x000004)
class FAkMidiNoteOnOff : public FAkMidiEventBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(char)                                      Note                                                        OFFSET(get<char>, {0x2, 1, 0, 0})
	DMember(char)                                      Velocity                                                    OFFSET(get<char>, {0x3, 1, 0, 0})
};

/// Struct /Script/AkAudio.AkMidiCc
/// Size: 0x0002 (0x000002 - 0x000004)
class FAkMidiCc : public FAkMidiEventBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	CMember(EAkMidiCcValues)                           Cc                                                          OFFSET(get<T>, {0x2, 1, 0, 0})
	DMember(char)                                      Value                                                       OFFSET(get<char>, {0x3, 1, 0, 0})
};

/// Struct /Script/AkAudio.AkMidiPitchBend
/// Size: 0x0006 (0x000002 - 0x000008)
class FAkMidiPitchBend : public FAkMidiEventBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(char)                                      ValueLsb                                                    OFFSET(get<char>, {0x2, 1, 0, 0})
	DMember(char)                                      ValueMsb                                                    OFFSET(get<char>, {0x3, 1, 0, 0})
	DMember(int32_t)                                   FullValue                                                   OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/AkAudio.AkMidiNoteAftertouch
/// Size: 0x0002 (0x000002 - 0x000004)
class FAkMidiNoteAftertouch : public FAkMidiEventBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(char)                                      Note                                                        OFFSET(get<char>, {0x2, 1, 0, 0})
	DMember(char)                                      Value                                                       OFFSET(get<char>, {0x3, 1, 0, 0})
};

/// Struct /Script/AkAudio.AkMidiChannelAftertouch
/// Size: 0x0001 (0x000002 - 0x000003)
class FAkMidiChannelAftertouch : public FAkMidiEventBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3;

public:
	DMember(char)                                      Value                                                       OFFSET(get<char>, {0x2, 1, 0, 0})
};

/// Struct /Script/AkAudio.AkMidiProgramChange
/// Size: 0x0001 (0x000002 - 0x000003)
class FAkMidiProgramChange : public FAkMidiEventBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3;

public:
	DMember(char)                                      ProgramNum                                                  OFFSET(get<char>, {0x2, 1, 0, 0})
};

/// Struct /Script/AkAudio.AkExternalSourceInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FAkExternalSourceInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   ExternalSrcName                                             OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(AkCodecId)                                 CodecID                                                     OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FString)                                   Filename                                                    OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	CMember(class UAkExternalMediaAsset*)              ExternalSourceAsset                                         OFFSET(get<T>, {0x28, 8, 0, 0})
	DMember(bool)                                      IsStreamed                                                  OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Struct /Script/AkAudio.AkReverbDescriptor
/// Size: 0x0028 (0x000000 - 0x000028)
class FAkReverbDescriptor : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/AkAudio.AkSurfaceEdgeVerts
/// Size: 0x0018 (0x000000 - 0x000018)
class FAkSurfaceEdgeVerts : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/AkAudio.AkSurfaceEdgeInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FAkSurfaceEdgeInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/AkAudio.AkWaapiFieldNames
/// Size: 0x0010 (0x000000 - 0x000010)
class FAkWaapiFieldNames : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   FieldName                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/AkAudio.AkWaapiUri
/// Size: 0x0010 (0x000000 - 0x000010)
class FAkWaapiUri : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   Uri                                                         OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/AkAudio.MovieSceneAkAudioEventTemplate
/// Size: 0x0008 (0x000020 - 0x000028)
class FMovieSceneAkAudioEventTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UMovieSceneAkAudioEventSection*)     Section                                                     OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/AkAudio.MovieSceneAkAudioRTPCTemplate
/// Size: 0x0008 (0x000020 - 0x000028)
class FMovieSceneAkAudioRTPCTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UMovieSceneAkAudioRTPCSection*)      Section                                                     OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Enum /Script/AkAudio.EAkResult
/// Size: 0x58
enum class EAkResult : uint8_t
{
	EAkResult__NotImplemented                                                        = 0,
	EAkResult__Success                                                               = 1,
	EAkResult__Fail                                                                  = 2,
	EAkResult__PartialSuccess                                                        = 3,
	EAkResult__NotCompatible                                                         = 4,
	EAkResult__AlreadyConnected                                                      = 5,
	EAkResult__InvalidFile                                                           = 7,
	EAkResult__AudioFileHeaderTooLarge                                               = 8,
	EAkResult__MaxReached                                                            = 9,
	EAkResult__InvalidID                                                             = 14,
	EAkResult__IDNotFound                                                            = 15,
	EAkResult__InvalidInstanceID                                                     = 16,
	EAkResult__NoMoreData                                                            = 17,
	EAkResult__InvalidStateGroup                                                     = 20,
	EAkResult__ChildAlreadyHasAParent                                                = 21,
	EAkResult__InvalidLanguage                                                       = 22,
	EAkResult__CannotAddItseflAsAChild                                               = 23,
	EAkResult__InvalidParameter                                                      = 31,
	EAkResult__ElementAlreadyInList                                                  = 35,
	EAkResult__PathNotFound                                                          = 36,
	EAkResult__PathNoVertices                                                        = 37,
	EAkResult__PathNotRunning                                                        = 38,
	EAkResult__PathNotPaused                                                         = 39,
	EAkResult__PathNodeAlreadyInList                                                 = 40,
	EAkResult__PathNodeNotInList                                                     = 41,
	EAkResult__DataNeeded                                                            = 43,
	EAkResult__NoDataNeeded                                                          = 44,
	EAkResult__DataReady                                                             = 45,
	EAkResult__NoDataReady                                                           = 46,
	EAkResult__InsufficientMemory                                                    = 52,
	EAkResult__Cancelled                                                             = 53,
	EAkResult__UnknownBankID                                                         = 54,
	EAkResult__BankReadError                                                         = 56,
	EAkResult__InvalidSwitchType                                                     = 57,
	EAkResult__FormatNotReady                                                        = 63,
	EAkResult__WrongBankVersion                                                      = 64,
	EAkResult__FileNotFound                                                          = 66,
	EAkResult__DeviceNotReady                                                        = 67,
	EAkResult__BankAlreadyLoaded                                                     = 69,
	EAkResult__RenderedFX                                                            = 71,
	EAkResult__ProcessNeeded                                                         = 72,
	EAkResult__ProcessDone                                                           = 73,
	EAkResult__MemManagerNotInitialized                                              = 74,
	EAkResult__StreamMgrNotInitialized                                               = 75,
	EAkResult__SSEInstructionsNotSupported                                           = 76,
	EAkResult__Busy                                                                  = 77,
	EAkResult__UnsupportedChannelConfig                                              = 78,
	EAkResult__PluginMediaNotAvailable                                               = 79,
	EAkResult__MustBeVirtualized                                                     = 80,
	EAkResult__CommandTooLarge                                                       = 81,
	EAkResult__RejectedByFilter                                                      = 82,
	EAkResult__InvalidCustomPlatformName                                             = 83,
	EAkResult__DLLCannotLoad                                                         = 84,
	EAkResult__DLLPathNotFound                                                       = 85,
	EAkResult__NoJavaVM                                                              = 86,
	EAkResult__OpenSLError                                                           = 87,
	EAkResult__PluginNotRegistered                                                   = 88,
	EAkResult__DataAlignmentError                                                    = 89
};

/// Enum /Script/AkAudio.EAkCallbackType
/// Size: 0x13
enum class EAkCallbackType : uint8_t
{
	EAkCallbackType__EndOfEvent                                                      = 0,
	EAkCallbackType__Marker                                                          = 2,
	EAkCallbackType__Duration                                                        = 3,
	EAkCallbackType__Starvation                                                      = 5,
	EAkCallbackType__MusicPlayStarted                                                = 7,
	EAkCallbackType__MusicSyncBeat                                                   = 8,
	EAkCallbackType__MusicSyncBar                                                    = 9,
	EAkCallbackType__MusicSyncEntry                                                  = 10,
	EAkCallbackType__MusicSyncExit                                                   = 11,
	EAkCallbackType__MusicSyncGrid                                                   = 12,
	EAkCallbackType__MusicSyncUserCue                                                = 13,
	EAkCallbackType__MusicSyncPoint                                                  = 14,
	EAkCallbackType__MIDIEvent                                                       = 16
};

/// Enum /Script/AkAudio.EAkAndroidAudioAPI
/// Size: 0x02
enum class EAkAndroidAudioAPI : uint8_t
{
	EAkAndroidAudioAPI__AAudio                                                       = 0,
	EAkAndroidAudioAPI__OpenSL_ES                                                    = 1
};

/// Enum /Script/AkAudio.EAkAudioSessionCategory
/// Size: 0x03
enum class EAkAudioSessionCategory : uint32_t
{
	EAkAudioSessionCategory__Ambient                                                 = 0,
	EAkAudioSessionCategory__SoloAmbient                                             = 1,
	EAkAudioSessionCategory__PlayAndRecord                                           = 2
};

/// Enum /Script/AkAudio.EAkAudioSessionCategoryOptions
/// Size: 0x04
enum class EAkAudioSessionCategoryOptions : uint8_t
{
	EAkAudioSessionCategoryOptions__MixWithOthers                                    = 0,
	EAkAudioSessionCategoryOptions__DuckOthers                                       = 1,
	EAkAudioSessionCategoryOptions__AllowBluetooth                                   = 2,
	EAkAudioSessionCategoryOptions__DefaultToSpeaker                                 = 3
};

/// Enum /Script/AkAudio.EAkAudioSessionMode
/// Size: 0x07
enum class EAkAudioSessionMode : uint32_t
{
	EAkAudioSessionMode__Default                                                     = 0,
	EAkAudioSessionMode__VoiceChat                                                   = 1,
	EAkAudioSessionMode__GameChat                                                    = 2,
	EAkAudioSessionMode__VideoRecording                                              = 3,
	EAkAudioSessionMode__Measurement                                                 = 4,
	EAkAudioSessionMode__MoviePlayback                                               = 5,
	EAkAudioSessionMode__VideoChat                                                   = 6
};

/// Enum /Script/AkAudio.EReflectionFilterBits
/// Size: 0x03
enum class EReflectionFilterBits : uint8_t
{
	EReflectionFilterBits__Wall                                                      = 0,
	EReflectionFilterBits__Ceiling                                                   = 1,
	EReflectionFilterBits__Floor                                                     = 2
};

/// Enum /Script/AkAudio.EAkAudioContext
/// Size: 0x04
enum class EAkAudioContext : uint8_t
{
	EAkAudioContext__Foreign                                                         = 0,
	EAkAudioContext__GameplayAudio                                                   = 1,
	EAkAudioContext__EditorAudio                                                     = 2,
	EAkAudioContext__AlwaysActive                                                    = 3
};

/// Enum /Script/AkAudio.PanningRule
/// Size: 0x02
enum class PanningRule : uint8_t
{
	PanningRule__PanningRule_Speakers                                                = 0,
	PanningRule__PanningRule_Headphones                                              = 1
};

/// Enum /Script/AkAudio.AkAcousticPortalState
/// Size: 0x02
enum class AkAcousticPortalState : uint8_t
{
	AkAcousticPortalState__Closed                                                    = 0,
	AkAcousticPortalState__Open                                                      = 1
};

/// Enum /Script/AkAudio.AkChannelConfiguration
/// Size: 0x27
enum class AkChannelConfiguration : uint8_t
{
	AkChannelConfiguration__Ak_Parent                                                = 0,
	AkChannelConfiguration__Ak_MainMix                                               = 1,
	AkChannelConfiguration__Ak_Passthrough                                           = 2,
	AkChannelConfiguration__Ak_LFE                                                   = 3,
	AkChannelConfiguration__AK_Audio_Objects                                         = 4,
	AkChannelConfiguration__Ak_1                                                     = 5,
	AkChannelConfiguration__Ak_2                                                     = 6,
	AkChannelConfiguration__Ak_28                                                    = 7,
	AkChannelConfiguration__Ak_3                                                     = 8,
	AkChannelConfiguration__Ak_310                                                   = 9,
	AkChannelConfiguration__Ak_4                                                     = 10,
	AkChannelConfiguration__Ak_412                                                   = 11,
	AkChannelConfiguration__Ak_5                                                     = 12,
	AkChannelConfiguration__Ak_514                                                   = 13,
	AkChannelConfiguration__Ak_7                                                     = 14,
	AkChannelConfiguration__Ak_5_1                                                   = 15,
	AkChannelConfiguration__Ak_7_1                                                   = 16,
	AkChannelConfiguration__Ak_7_118                                                 = 17,
	AkChannelConfiguration__Ak_Auro_9                                                = 18,
	AkChannelConfiguration__Ak_Auro_10                                               = 19,
	AkChannelConfiguration__Ak_Auro_11                                               = 20,
	AkChannelConfiguration__Ak_Auro_13                                               = 21,
	AkChannelConfiguration__Ak_Ambisonics_1st_order                                  = 22,
	AkChannelConfiguration__Ak_Ambisonics_2nd_order                                  = 23,
	AkChannelConfiguration__Ak_Ambisonics_3rd_order                                  = 24,
	AkChannelConfiguration__Ak_Ambisonics_4th_order                                  = 25,
	AkChannelConfiguration__Ak_Ambisonics_5th_order                                  = 26
};

/// Enum /Script/AkAudio.AkSpeakerConfiguration
/// Size: 0x16
enum class AkSpeakerConfiguration : uint32_t
{
	AkSpeakerConfiguration__Ak_Speaker_Front_Left                                    = 1,
	AkSpeakerConfiguration__Ak_Speaker_Front_Right                                   = 2,
	AkSpeakerConfiguration__Ak_Speaker_Front_Center                                  = 4,
	AkSpeakerConfiguration__Ak_Speaker_Low_Frequency                                 = 8,
	AkSpeakerConfiguration__Ak_Speaker_Back_Left                                     = 16,
	AkSpeakerConfiguration__Ak_Speaker_Back_Right                                    = 32,
	AkSpeakerConfiguration__Ak_Speaker_Back_Center                                   = 256,
	AkSpeakerConfiguration__Ak_Speaker_Side_Left                                     = 512,
	AkSpeakerConfiguration__Ak_Speaker_Side_Right                                    = 1024,
	AkSpeakerConfiguration__Ak_Speaker_Top                                           = 2048,
	AkSpeakerConfiguration__Ak_Speaker_Height_Front_Left                             = 4096,
	AkSpeakerConfiguration__Ak_Speaker_Height_Front_Center                           = 8192,
	AkSpeakerConfiguration__Ak_Speaker_Height_Front_Right                            = 16384,
	AkSpeakerConfiguration__Ak_Speaker_Height_Back_Left                              = 32768,
	AkSpeakerConfiguration__Ak_Speaker_Height_Back_Center                            = 65536,
	AkSpeakerConfiguration__Ak_Speaker_Height_Back_Right                             = 131072
};

/// Enum /Script/AkAudio.AkMultiPositionType
/// Size: 0x03
enum class AkMultiPositionType : uint8_t
{
	AkMultiPositionType__SingleSource                                                = 0,
	AkMultiPositionType__MultiSources                                                = 1,
	AkMultiPositionType__MultiDirections                                             = 2
};

/// Enum /Script/AkAudio.AkActionOnEventType
/// Size: 0x05
enum class AkActionOnEventType : uint8_t
{
	AkActionOnEventType__Stop                                                        = 0,
	AkActionOnEventType__Pause                                                       = 1,
	AkActionOnEventType__Resume                                                      = 2,
	AkActionOnEventType__Break                                                       = 3,
	AkActionOnEventType__ReleaseEnvelope                                             = 4
};

/// Enum /Script/AkAudio.EAkCurveInterpolation
/// Size: 0x11
enum class EAkCurveInterpolation : uint8_t
{
	EAkCurveInterpolation__Log3                                                      = 0,
	EAkCurveInterpolation__Sine                                                      = 1,
	EAkCurveInterpolation__Log1                                                      = 2,
	EAkCurveInterpolation__InvSCurve                                                 = 3,
	EAkCurveInterpolation__Linear                                                    = 4,
	EAkCurveInterpolation__SCurve                                                    = 5,
	EAkCurveInterpolation__Exp1                                                      = 6,
	EAkCurveInterpolation__SineRecip                                                 = 7,
	EAkCurveInterpolation__Exp3                                                      = 8,
	EAkCurveInterpolation__LastFadeCurve                                             = 8,
	EAkCurveInterpolation__Constant                                                  = 9
};

/// Enum /Script/AkAudio.ERTPCValueType
/// Size: 0x05
enum class ERTPCValueType : uint8_t
{
	ERTPCValueType__Default                                                          = 0,
	ERTPCValueType__Global                                                           = 1,
	ERTPCValueType__GameObject                                                       = 2,
	ERTPCValueType__PlayingID                                                        = 3,
	ERTPCValueType__Unavailable                                                      = 4
};

/// Enum /Script/AkAudio.EAkMidiEventType
/// Size: 0x11
enum class EAkMidiEventType : uint8_t
{
	EAkMidiEventType__AkMidiEventTypeInvalid                                         = 0,
	EAkMidiEventType__AkMidiEventTypeNoteOff                                         = 128,
	EAkMidiEventType__AkMidiEventTypeNoteOn                                          = 144,
	EAkMidiEventType__AkMidiEventTypeNoteAftertouch                                  = 160,
	EAkMidiEventType__AkMidiEventTypeController                                      = 176,
	EAkMidiEventType__AkMidiEventTypeProgramChange                                   = 192,
	EAkMidiEventType__AkMidiEventTypeChannelAftertouch                               = 208,
	EAkMidiEventType__AkMidiEventTypePitchBend                                       = 224,
	EAkMidiEventType__AkMidiEventTypeSysex                                           = 240,
	EAkMidiEventType__AkMidiEventTypeEscape                                          = 247,
	EAkMidiEventType__AkMidiEventTypeMeta                                            = 255
};

/// Enum /Script/AkAudio.EAkMidiCcValues
/// Size: 0x97
enum class EAkMidiCcValues : uint8_t
{
	EAkMidiCcValues__AkMidiCcBankSelectCoarse                                        = 0,
	EAkMidiCcValues__AkMidiCcModWheelCoarse                                          = 1,
	EAkMidiCcValues__AkMidiCcBreathCtrlCoarse                                        = 2,
	EAkMidiCcValues__AkMidiCcCtrl3Coarse                                             = 3,
	EAkMidiCcValues__AkMidiCcFootPedalCoarse                                         = 4,
	EAkMidiCcValues__AkMidiCcPortamentoCoarse                                        = 5,
	EAkMidiCcValues__AkMidiCcDataEntryCoarse                                         = 6,
	EAkMidiCcValues__AkMidiCcVolumeCoarse                                            = 7,
	EAkMidiCcValues__AkMidiCcBalanceCoarse                                           = 8,
	EAkMidiCcValues__AkMidiCcCtrl9Coarse                                             = 9,
	EAkMidiCcValues__AkMidiCcPanPositionCoarse                                       = 10,
	EAkMidiCcValues__AkMidiCcExpressionCoarse                                        = 11,
	EAkMidiCcValues__AkMidiCcEffectCtrl1Coarse                                       = 12,
	EAkMidiCcValues__AkMidiCcEffectCtrl2Coarse                                       = 13,
	EAkMidiCcValues__AkMidiCcCtrl14Coarse                                            = 14,
	EAkMidiCcValues__AkMidiCcCtrl15Coarse                                            = 15,
	EAkMidiCcValues__AkMidiCcGenSlider1                                              = 16,
	EAkMidiCcValues__AkMidiCcGenSlider2                                              = 17,
	EAkMidiCcValues__AkMidiCcGenSlider3                                              = 18,
	EAkMidiCcValues__AkMidiCcGenSlider4                                              = 19,
	EAkMidiCcValues__AkMidiCcCtrl20Coarse                                            = 20,
	EAkMidiCcValues__AkMidiCcCtrl21Coarse                                            = 21,
	EAkMidiCcValues__AkMidiCcCtrl22Coarse                                            = 22,
	EAkMidiCcValues__AkMidiCcCtrl23Coarse                                            = 23,
	EAkMidiCcValues__AkMidiCcCtrl24Coarse                                            = 24,
	EAkMidiCcValues__AkMidiCcCtrl25Coarse                                            = 25,
	EAkMidiCcValues__AkMidiCcCtrl26Coarse                                            = 26,
	EAkMidiCcValues__AkMidiCcCtrl27Coarse                                            = 27,
	EAkMidiCcValues__AkMidiCcCtrl28Coarse                                            = 28,
	EAkMidiCcValues__AkMidiCcCtrl29Coarse                                            = 29,
	EAkMidiCcValues__AkMidiCcCtrl30Coarse                                            = 30,
	EAkMidiCcValues__AkMidiCcCtrl31Coarse                                            = 31,
	EAkMidiCcValues__AkMidiCcBankSelectFine                                          = 32,
	EAkMidiCcValues__AkMidiCcModWheelFine                                            = 33,
	EAkMidiCcValues__AkMidiCcBreathCtrlFine                                          = 34,
	EAkMidiCcValues__AkMidiCcCtrl3Fine                                               = 35,
	EAkMidiCcValues__AkMidiCcFootPedalFine                                           = 36,
	EAkMidiCcValues__AkMidiCcPortamentoFine                                          = 37,
	EAkMidiCcValues__AkMidiCcDataEntryFine                                           = 38,
	EAkMidiCcValues__AkMidiCcVolumeFine                                              = 39,
	EAkMidiCcValues__AkMidiCcBalanceFine                                             = 40,
	EAkMidiCcValues__AkMidiCcCtrl9Fine                                               = 41,
	EAkMidiCcValues__AkMidiCcPanPositionFine                                         = 42,
	EAkMidiCcValues__AkMidiCcExpressionFine                                          = 43,
	EAkMidiCcValues__AkMidiCcEffectCtrl1Fine                                         = 44,
	EAkMidiCcValues__AkMidiCcEffectCtrl2Fine                                         = 45,
	EAkMidiCcValues__AkMidiCcCtrl14Fine                                              = 46,
	EAkMidiCcValues__AkMidiCcCtrl15Fine                                              = 47,
	EAkMidiCcValues__AkMidiCcCtrl20Fine                                              = 52,
	EAkMidiCcValues__AkMidiCcCtrl21Fine                                              = 53,
	EAkMidiCcValues__AkMidiCcCtrl22Fine                                              = 54,
	EAkMidiCcValues__AkMidiCcCtrl23Fine                                              = 55,
	EAkMidiCcValues__AkMidiCcCtrl24Fine                                              = 56,
	EAkMidiCcValues__AkMidiCcCtrl25Fine                                              = 57,
	EAkMidiCcValues__AkMidiCcCtrl26Fine                                              = 58,
	EAkMidiCcValues__AkMidiCcCtrl27Fine                                              = 59,
	EAkMidiCcValues__AkMidiCcCtrl28Fine                                              = 60,
	EAkMidiCcValues__AkMidiCcCtrl29Fine                                              = 61,
	EAkMidiCcValues__AkMidiCcCtrl30Fine                                              = 62,
	EAkMidiCcValues__AkMidiCcCtrl31Fine                                              = 63,
	EAkMidiCcValues__AkMidiCcHoldPedal                                               = 64,
	EAkMidiCcValues__AkMidiCcPortamentoOnOff                                         = 65,
	EAkMidiCcValues__AkMidiCcSustenutoPedal                                          = 66,
	EAkMidiCcValues__AkMidiCcSoftPedal                                               = 67,
	EAkMidiCcValues__AkMidiCcLegatoPedal                                             = 68,
	EAkMidiCcValues__AkMidiCcHoldPedal2                                              = 69,
	EAkMidiCcValues__AkMidiCcSoundVariation                                          = 70,
	EAkMidiCcValues__AkMidiCcSoundTimbre                                             = 71,
	EAkMidiCcValues__AkMidiCcSoundReleaseTime                                        = 72,
	EAkMidiCcValues__AkMidiCcSoundAttackTime                                         = 73,
	EAkMidiCcValues__AkMidiCcSoundBrightness                                         = 74,
	EAkMidiCcValues__AkMidiCcSoundCtrl6                                              = 75,
	EAkMidiCcValues__AkMidiCcSoundCtrl7                                              = 76,
	EAkMidiCcValues__AkMidiCcSoundCtrl8                                              = 77,
	EAkMidiCcValues__AkMidiCcSoundCtrl9                                              = 78,
	EAkMidiCcValues__AkMidiCcSoundCtrl10                                             = 79,
	EAkMidiCcValues__AkMidiCcGeneralButton1                                          = 80,
	EAkMidiCcValues__AkMidiCcGeneralButton2                                          = 81,
	EAkMidiCcValues__AkMidiCcGeneralButton3                                          = 82,
	EAkMidiCcValues__AkMidiCcGeneralButton4                                          = 83,
	EAkMidiCcValues__AkMidiCcReverbLevel                                             = 91,
	EAkMidiCcValues__AkMidiCcTremoloLevel                                            = 92,
	EAkMidiCcValues__AkMidiCcChorusLevel                                             = 93,
	EAkMidiCcValues__AkMidiCcCelesteLevel                                            = 94,
	EAkMidiCcValues__AkMidiCcPhaserLevel                                             = 95,
	EAkMidiCcValues__AkMidiCcDataButtonP1                                            = 96,
	EAkMidiCcValues__AkMidiCcDataButtonM1                                            = 97,
	EAkMidiCcValues__AkMidiCcNonRegisterCoarse                                       = 98,
	EAkMidiCcValues__AkMidiCcNonRegisterFine                                         = 99,
	EAkMidiCcValues__AkMidiCcAllSoundOff                                             = 120,
	EAkMidiCcValues__AkMidiCcAllControllersOff                                       = 121,
	EAkMidiCcValues__AkMidiCcLocalKeyboard                                           = 122,
	EAkMidiCcValues__AkMidiCcAllNotesOff                                             = 123,
	EAkMidiCcValues__AkMidiCcOmniModeOff                                             = 124,
	EAkMidiCcValues__AkMidiCcOmniModeOn                                              = 125,
	EAkMidiCcValues__AkMidiCcOmniMonophonicOn                                        = 126,
	EAkMidiCcValues__AkMidiCcOmniPolyphonicOn                                        = 127
};

/// Enum /Script/AkAudio.AkCodecId
/// Size: 0x10
enum class AkCodecId : uint8_t
{
	AkCodecId__None                                                                  = 0,
	AkCodecId__PCM                                                                   = 1,
	AkCodecId__ADPCM                                                                 = 2,
	AkCodecId__XMA                                                                   = 3,
	AkCodecId__Vorbis                                                                = 4,
	AkCodecId__AAC                                                                   = 10,
	AkCodecId__ATRAC9                                                                = 12,
	AkCodecId__OpusNX                                                                = 17,
	AkCodecId__AkOpus                                                                = 19,
	AkCodecId__AkOpusWEM                                                             = 20
};

/// Enum /Script/AkAudio.AkMeshType
/// Size: 0x02
enum class AkMeshType : uint8_t
{
	AkMeshType__StaticMesh                                                           = 0,
	AkMeshType__CollisionMesh                                                        = 1
};

/// Enum /Script/AkAudio.EAkPanningRule
/// Size: 0x02
enum class EAkPanningRule : uint32_t
{
	EAkPanningRule__Speakers                                                         = 0,
	EAkPanningRule__Headphones                                                       = 1
};

/// Enum /Script/AkAudio.EAkChannelConfigType
/// Size: 0x03
enum class EAkChannelConfigType : uint32_t
{
	EAkChannelConfigType__Anonymous                                                  = 0,
	EAkChannelConfigType__Standard                                                   = 1,
	EAkChannelConfigType__Ambisonic                                                  = 2
};

/// Enum /Script/AkAudio.EAkChannelMask
/// Size: 0x16
enum class EAkChannelMask : uint8_t
{
	EAkChannelMask__FrontLeft                                                        = 0,
	EAkChannelMask__FrontRight                                                       = 1,
	EAkChannelMask__FrontCenter                                                      = 2,
	EAkChannelMask__LowFrequency                                                     = 3,
	EAkChannelMask__BackLeft                                                         = 4,
	EAkChannelMask__BackRight                                                        = 5,
	EAkChannelMask__BackCenter                                                       = 8,
	EAkChannelMask__SideLeft                                                         = 9,
	EAkChannelMask__SideRight                                                        = 10,
	EAkChannelMask__Top                                                              = 11,
	EAkChannelMask__HeightFrontLeft                                                  = 12,
	EAkChannelMask__HeightFrontCenter                                                = 13,
	EAkChannelMask__HeightFrontRight                                                 = 14,
	EAkChannelMask__HeightBackLeft                                                   = 15,
	EAkChannelMask__HeightBackCenter                                                 = 16,
	EAkChannelMask__HeightBackRight                                                  = 17
};

/// Enum /Script/AkAudio.EAkCommSystem
/// Size: 0x02
enum class EAkCommSystem : uint32_t
{
	EAkCommSystem__Socket                                                            = 0,
	EAkCommSystem__HTCS                                                              = 1
};

/// Enum /Script/AkAudio.EAkFitToGeometryMode
/// Size: 0x03
enum class EAkFitToGeometryMode : uint8_t
{
	EAkFitToGeometryMode__OrientedBox                                                = 0,
	EAkFitToGeometryMode__AlignedBox                                                 = 1,
	EAkFitToGeometryMode__ConvexPolyhedron                                           = 2
};

