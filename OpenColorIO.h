
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

/// Class /Script/OpenColorIO.OpenColorIOSettings
/// Size: 0x0008 (0x000038 - 0x000040)
class UOpenColorIOSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bUseLegacyProcessor                                         OFFSET(get<bool>, {0x38, 1, 1, 0})
	DMember(bool)                                      bUse32fLUT                                                  OFFSET(get<bool>, {0x38, 1, 1, 1})
	DMember(bool)                                      bSupportInverseViewTransforms                               OFFSET(get<bool>, {0x38, 1, 1, 2})
};

/// Class /Script/OpenColorIO.OpenColorIOBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UOpenColorIOBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/OpenColorIO.OpenColorIOBlueprintLibrary.ApplyColorSpaceTransform
	// bool ApplyColorSpaceTransform(class UObject* WorldContextObject, FOpenColorIOColorConversionSettings& ConversionSettings, class UTexture* InputTexture, class UTextureRenderTarget2D* OutputRenderTarget); // [0x1599e50] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OpenColorIO.OpenColorIOColorTransform
/// Size: 0x0138 (0x000028 - 0x000160)
class UOpenColorIOColorTransform : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(class UOpenColorIOConfiguration*)          ConfigurationOwner                                          OFFSET(get<T>, {0x28, 8, 0, 0})
	DMember(bool)                                      bIsDisplayViewType                                          OFFSET(get<bool>, {0x30, 1, 0, 0})
	SMember(FString)                                   SourceColorSpace                                            OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   DestinationColorSpace                                       OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FString)                                   Display                                                     OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FString)                                   View                                                        OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	CMember(EOpenColorIOViewTransformDirection)        DisplayViewDirection                                        OFFSET(get<T>, {0x78, 1, 0, 0})
	CMember(TMap<int32_t, class UTexture*>)            Textures                                                    OFFSET(get<T>, {0x80, 80, 0, 0})
};

/// Struct /Script/OpenColorIO.OpenColorIOColorSpace
/// Size: 0x0028 (0x000000 - 0x000028)
class FOpenColorIOColorSpace : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   ColorSpaceName                                              OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   ColorSpaceIndex                                             OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FString)                                   FamilyName                                                  OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/OpenColorIO.OpenColorIODisplayView
/// Size: 0x0020 (0x000000 - 0x000020)
class FOpenColorIODisplayView : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Display                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   View                                                        OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Class /Script/OpenColorIO.OpenColorIOConfiguration
/// Size: 0x0070 (0x000028 - 0x000098)
class UOpenColorIOConfiguration : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FFilePath)                                 ConfigurationFile                                           OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(TArray<FOpenColorIOColorSpace>)            DesiredColorSpaces                                          OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FOpenColorIODisplayView>)           DesiredDisplayViews                                         OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<class UOpenColorIOColorTransform*>) ColorTransforms                                             OFFSET(get<T>, {0x58, 16, 0, 0})


	/// Functions
	// Function /Script/OpenColorIO.OpenColorIOConfiguration.ReloadExistingColorspaces
	// void ReloadExistingColorspaces();                                                                                        // [0x12d7650] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper
/// Size: 0x0010 (0x000028 - 0x000038)
class UOpenColorIODisplayExtensionWrapper : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:


	/// Functions
	// Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunctions
	// void SetSceneExtensionIsActiveFunctions(TArray<FSceneViewExtensionIsActiveFunctor>& IsActiveFunctions);                  // [0x15a1740] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunction
	// void SetSceneExtensionIsActiveFunction(FSceneViewExtensionIsActiveFunctor& IsActiveFunction);                            // [0x15a1960] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.SetOpenColorIOConfiguration
	// void SetOpenColorIOConfiguration(FOpenColorIODisplayConfiguration InDisplayConfiguration);                               // [0x15a1ab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.RemoveSceneExtension
	// void RemoveSceneExtension();                                                                                             // [0x15a16a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.GetOpenColorIOConfiguration
	// FOpenColorIODisplayConfiguration GetOpenColorIOConfiguration();                                                          // [0x15a1d00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateOpenColorIODisplayExtension
	// class UOpenColorIODisplayExtensionWrapper* CreateOpenColorIODisplayExtension(FOpenColorIODisplayConfiguration InDisplayConfiguration, FSceneViewExtensionIsActiveFunctor& IsActiveFunction); // [0x15a1370] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateInGameOpenColorIODisplayExtension
	// class UOpenColorIODisplayExtensionWrapper* CreateInGameOpenColorIODisplayExtension(FOpenColorIODisplayConfiguration InDisplayConfiguration); // [0x15a0f00] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/OpenColorIO.OpenColorIOColorConversionSettings
/// Size: 0x0098 (0x000000 - 0x000098)
class FOpenColorIOColorConversionSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(class UOpenColorIOConfiguration*)          ConfigurationSource                                         OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FOpenColorIOColorSpace)                    SourceColorSpace                                            OFFSET(getStruct<T>, {0x8, 40, 0, 0})
	SMember(FOpenColorIOColorSpace)                    DestinationColorSpace                                       OFFSET(getStruct<T>, {0x30, 40, 0, 0})
	SMember(FOpenColorIODisplayView)                   DestinationDisplayView                                      OFFSET(getStruct<T>, {0x58, 32, 0, 0})
	CMember(EOpenColorIOViewTransformDirection)        DisplayViewDirection                                        OFFSET(get<T>, {0x78, 1, 0, 0})
};

/// Struct /Script/OpenColorIO.OpenColorIODisplayConfiguration
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FOpenColorIODisplayConfiguration : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(bool)                                      bIsEnabled                                                  OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FOpenColorIOColorConversionSettings)       ColorConfiguration                                          OFFSET(getStruct<T>, {0x8, 152, 0, 0})
};

/// Enum /Script/OpenColorIO.EOpenColorIOViewTransformDirection
/// Size: 0x02
enum class EOpenColorIOViewTransformDirection : uint8_t
{
	EOpenColorIOViewTransformDirection__Forward                                      = 0,
	EOpenColorIOViewTransformDirection__Inverse                                      = 1
};

