
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: MetasoundFrontend

/// Class /Script/MetasoundEngine.MetasoundGeneratorHandle
/// Size: 0x0048 (0x000028 - 0x000070)
class UMetasoundGeneratorHandle : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(class UAudioComponent*)                    AudioComponent                                              OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UMetaSoundSource*)                   CachedMetasoundSource                                       OFFSET(get<T>, {0x38, 8, 0, 0})


	/// Functions
	// Function /Script/MetasoundEngine.MetasoundGeneratorHandle.CreateMetaSoundGeneratorHandle
	// class UMetasoundGeneratorHandle* CreateMetaSoundGeneratorHandle(class UAudioComponent* OnComponent);                     // [0x25800a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundGeneratorHandle.ApplyParameterPack
	// bool ApplyParameterPack(class UMetasoundParameterPack* Pack);                                                            // [0x257fc90] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/MetasoundEngine.DefaultMetaSoundAssetAutoUpdateSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FDefaultMetaSoundAssetAutoUpdateSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FSoftObjectPath)                           Metasound                                                   OFFSET(getStruct<T>, {0x0, 32, 0, 0})
};

/// Class /Script/MetasoundEngine.MetaSoundSettings
/// Size: 0x0048 (0x000038 - 0x000080)
class UMetaSoundSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(bool)                                      bAutoUpdateEnabled                                          OFFSET(get<bool>, {0x38, 1, 0, 0})
	CMember(TArray<FMetasoundFrontendClassName>)       AutoUpdateDenylist                                          OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FDefaultMetaSoundAssetAutoUpdateSettings>) AutoUpdateAssetDenylist                              OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(bool)                                      bAutoUpdateLogWarningOnDroppedConnection                    OFFSET(get<bool>, {0x60, 1, 0, 0})
	CMember(TArray<FDirectoryPath>)                    DirectoriesToRegister                                       OFFSET(get<T>, {0x68, 16, 0, 0})
	DMember(int32_t)                                   DenyListCacheChangeID                                       OFFSET(get<int32_t>, {0x78, 4, 0, 0})
};

/// Class /Script/MetasoundEngine.MetasoundEditorGraphBase
/// Size: 0x0000 (0x000060 - 0x000060)
class UMetasoundEditorGraphBase : public UEdGraph
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/MetasoundEngine.MetaSoundPatch
/// Size: 0x0330 (0x000028 - 0x000358)
class UMetaSoundPatch : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	SMember(FMetasoundFrontendDocument)                RootMetaSoundDocument                                       OFFSET(getStruct<T>, {0x90, 456, 0, 0})
	CMember(TSet<FString>)                             ReferencedAssetClassKeys                                    OFFSET(get<T>, {0x258, 80, 0, 0})
	CMember(TSet<UObject*>)                            ReferencedAssetClassObjects                                 OFFSET(get<T>, {0x2A8, 80, 0, 0})
	CMember(TSet<FSoftObjectPath>)                     ReferenceAssetClassCache                                    OFFSET(get<T>, {0x2F8, 80, 0, 0})
	SMember(FGuid)                                     AssetClassID                                                OFFSET(getStruct<T>, {0x348, 16, 0, 0})
};

/// Struct /Script/MetasoundEngine.MetaSoundAsyncAssetDependencies
/// Size: 0x0030 (0x000000 - 0x000030)
class FMetaSoundAsyncAssetDependencies : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UObject*)                            Metasound                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Class /Script/MetasoundEngine.MetaSoundAssetSubsystem
/// Size: 0x01B0 (0x000030 - 0x0001E0)
class UMetaSoundAssetSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	CMember(TArray<FMetaSoundAsyncAssetDependencies>)  LoadingDependencies                                         OFFSET(get<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/MetasoundEngine.MetaSoundAssetSubsystem.UnregisterAssetClassesInDirectories
	// void UnregisterAssetClassesInDirectories(TArray<FMetaSoundAssetDirectory>& Directories);                                 // [0x25816d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundAssetSubsystem.RegisterAssetClassesInDirectories
	// void RegisterAssetClassesInDirectories(TArray<FMetaSoundAssetDirectory>& Directories);                                   // [0x2581900] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetaSoundSource
/// Size: 0x03A0 (0x0004A0 - 0x000840)
class UMetaSoundSource : public USoundWaveProcedural
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2112;

public:
	SMember(FMetasoundFrontendDocument)                RootMetaSoundDocument                                       OFFSET(getStruct<T>, {0x508, 456, 0, 0})
	CMember(TSet<FString>)                             ReferencedAssetClassKeys                                    OFFSET(get<T>, {0x6D0, 80, 0, 0})
	CMember(TSet<UObject*>)                            ReferencedAssetClassObjects                                 OFFSET(get<T>, {0x720, 80, 0, 0})
	CMember(TSet<FSoftObjectPath>)                     ReferenceAssetClassCache                                    OFFSET(get<T>, {0x770, 80, 0, 0})
	CMember(EMetasoundSourceAudioFormat)               OutputFormat                                                OFFSET(get<T>, {0x7C0, 1, 0, 0})
	SMember(FGuid)                                     AssetClassID                                                OFFSET(getStruct<T>, {0x7C4, 16, 0, 0})
};

/// Struct /Script/MetasoundEngine.MetaSoundAssetDirectory
/// Size: 0x0010 (0x000000 - 0x000010)
class FMetaSoundAssetDirectory : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FDirectoryPath)                            Directory                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Enum /Script/MetasoundEngine.EMetaSoundMessageLevel
/// Size: 0x03
enum class EMetaSoundMessageLevel : uint8_t
{
	EMetaSoundMessageLevel__Error                                                    = 0,
	EMetaSoundMessageLevel__Warning                                                  = 1,
	EMetaSoundMessageLevel__Info                                                     = 2
};

/// Enum /Script/MetasoundEngine.EMetasoundSourceAudioFormat
/// Size: 0x06
enum class EMetasoundSourceAudioFormat : uint8_t
{
	EMetasoundSourceAudioFormat__Mono                                                = 0,
	EMetasoundSourceAudioFormat__Stereo                                              = 1,
	EMetasoundSourceAudioFormat__Quad                                                = 2,
	EMetasoundSourceAudioFormat__FiveDotOne                                          = 3,
	EMetasoundSourceAudioFormat__SevenDotOne                                         = 4,
	EMetasoundSourceAudioFormat__COUNT                                               = 5
};

