
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/StreamlineBlueprint.StreamlineLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UStreamlineLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/StreamlineBlueprint.StreamlineLibrary.QueryStreamlineFeatureSupport
	// UStreamlineFeatureSupport QueryStreamlineFeatureSupport(UStreamlineFeature Feature);                                     // [0x1de3630] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/StreamlineBlueprint.StreamlineLibrary.IsStreamlineFeatureSupported
	// bool IsStreamlineFeatureSupported(UStreamlineFeature Feature);                                                           // [0x1de3740] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/StreamlineBlueprint.StreamlineLibrary.GetStreamlineFeatureInformation
	// FStreamlineFeatureRequirements GetStreamlineFeatureInformation(UStreamlineFeature Feature);                              // [0x1de3c70] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/StreamlineBlueprint.StreamlineLibrary.BreakStreamlineFeatureRequirements
	// void BreakStreamlineFeatureRequirements(UStreamlineFeatureRequirementsFlags Requirements, bool& D3D11Supported, bool& D3D12Supported, bool& VulkanSupported, bool& VSyncOffRequired, bool& HardwareSchedulingRequired); // [0x1de3860] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/StreamlineBlueprint.StreamlineLibraryDLSSG
/// Size: 0x0000 (0x000028 - 0x000028)
class UStreamlineLibraryDLSSG : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.SetDLSSGMode
	// void SetDLSSGMode(UStreamlineDLSSGMode DLSSGMode);                                                                       // [0x1de4370] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.QueryDLSSGSupport
	// UStreamlineFeatureSupport QueryDLSSGSupport();                                                                           // [0x1de46e0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGSupported
	// bool IsDLSSGSupported();                                                                                                 // [0x1de4720] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGModeSupported
	// bool IsDLSSGModeSupported(UStreamlineDLSSGMode DLSSGMode);                                                               // [0x1de4570] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.GetSupportedDLSSGModes
	// TArray<UStreamlineDLSSGMode> GetSupportedDLSSGModes();                                                                   // [0x1de4440] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGMode
	// UStreamlineDLSSGMode GetDLSSGMode();                                                                                     // [0x1de4280] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGFrameTiming
	// void GetDLSSGFrameTiming(float& FrameRateInHertz, int32_t& FramesPresented);                                             // [0x1de4090] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.GetDefaultDLSSGMode
	// UStreamlineDLSSGMode GetDefaultDLSSGMode();                                                                              // [0x1de4240] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/StreamlineBlueprint.StreamlineLibraryReflex
/// Size: 0x0000 (0x000028 - 0x000028)
class UStreamlineLibraryReflex : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.SetReflexMode
	// void SetReflexMode(UStreamlineReflexMode Mode);                                                                          // [0x1de4e10] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.QueryReflexSupport
	// UStreamlineFeatureSupport QueryReflexSupport();                                                                          // [0x1de4ee0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.IsReflexSupported
	// bool IsReflexSupported();                                                                                                // [0x1de4f10] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.GetRenderLatencyInMs
	// float GetRenderLatencyInMs();                                                                                            // [0x1de4b30] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.GetReflexMode
	// UStreamlineReflexMode GetReflexMode();                                                                                   // [0x1de4d40] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.GetGameToRenderLatencyInMs
	// float GetGameToRenderLatencyInMs();                                                                                      // [0x1de4c90] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.GetGameLatencyInMs
	// float GetGameLatencyInMs();                                                                                              // [0x1de4be0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.GetDefaultReflexMode
	// UStreamlineReflexMode GetDefaultReflexMode();                                                                            // [0x1dc5600] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/StreamlineBlueprint.StreamlineVersion
/// Size: 0x000C (0x000000 - 0x00000C)
class FStreamlineVersion : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   Major                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Minor                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Build                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/StreamlineBlueprint.StreamlineFeatureRequirements
/// Size: 0x0034 (0x000000 - 0x000034)
class FStreamlineFeatureRequirements : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 52;

public:
	CMember(UStreamlineFeatureSupport)                 Support                                                     OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(UStreamlineFeatureRequirementsFlags)       Requirements                                                OFFSET(get<T>, {0x1, 1, 0, 0})
	SMember(FStreamlineVersion)                        RequiredOperatingSystemVersion                              OFFSET(getStruct<T>, {0x4, 12, 0, 0})
	SMember(FStreamlineVersion)                        DetectedOperatingSystemVersion                              OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	SMember(FStreamlineVersion)                        RequiredDriverVersion                                       OFFSET(getStruct<T>, {0x1C, 12, 0, 0})
	SMember(FStreamlineVersion)                        DetectedDriverVersion                                       OFFSET(getStruct<T>, {0x28, 12, 0, 0})
};

/// Enum /Script/StreamlineBlueprint.UStreamlineFeature
/// Size: 0x04
enum class UStreamlineFeature : uint8_t
{
	UStreamlineFeature__DLSSG                                                        = 0,
	UStreamlineFeature__Reflex                                                       = 1,
	UStreamlineFeature__DeepDVC                                                      = 2,
	UStreamlineFeature__Count                                                        = 3
};

/// Enum /Script/StreamlineBlueprint.UStreamlineFeatureSupport
/// Size: 0x09
enum class UStreamlineFeatureSupport : uint8_t
{
	UStreamlineFeatureSupport__Supported                                             = 0,
	UStreamlineFeatureSupport__NotSupported                                          = 1,
	UStreamlineFeatureSupport__NotSupportedIncompatibleHardware                      = 2,
	UStreamlineFeatureSupport__NotSupportedDriverOutOfDate                           = 3,
	UStreamlineFeatureSupport__NotSupportedOperatingSystemOutOfDate                  = 4,
	UStreamlineFeatureSupport__NotSupportedHardewareSchedulingDisabled               = 5,
	UStreamlineFeatureSupport__NotSupportedByRHI                                     = 6,
	UStreamlineFeatureSupport__NotSupportedByPlatformAtBuildTime                     = 7,
	UStreamlineFeatureSupport__NotSupportedIncompatibleAPICaptureToolActive          = 8
};

/// Enum /Script/StreamlineBlueprint.UStreamlineFeatureRequirementsFlags
/// Size: 0x06
enum class UStreamlineFeatureRequirementsFlags : uint8_t
{
	UStreamlineFeatureRequirementsFlags__None                                        = 0,
	UStreamlineFeatureRequirementsFlags__D3D11Supported                              = 1,
	UStreamlineFeatureRequirementsFlags__D3D12Supported                              = 2,
	UStreamlineFeatureRequirementsFlags__VulkanSupported                             = 4,
	UStreamlineFeatureRequirementsFlags__VSyncOffRequired                            = 8,
	UStreamlineFeatureRequirementsFlags__HardwareSchedulingRequired                  = 16
};

/// Enum /Script/StreamlineBlueprint.UStreamlineDLSSGMode
/// Size: 0x03
enum class UStreamlineDLSSGMode : uint8_t
{
	UStreamlineDLSSGMode__Off                                                        = 0,
	UStreamlineDLSSGMode__On                                                         = 1,
	UStreamlineDLSSGMode__Auto                                                       = 2
};

/// Enum /Script/StreamlineBlueprint.UStreamlineReflexMode
/// Size: 0x03
enum class UStreamlineReflexMode : uint8_t
{
	UStreamlineReflexMode__Disabled                                                  = 0,
	UStreamlineReflexMode__Enabled                                                   = 1,
	UStreamlineReflexMode__EnabledPlusBoost                                          = 3
};

