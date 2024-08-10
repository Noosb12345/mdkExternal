
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

/// Class /Script/CinematicCamera.CameraRig_Crane
/// Size: 0x0030 (0x000248 - 0x000278)
class ACameraRig_Crane : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 632;

public:
	DMember(float)                                     CranePitch                                                  OFFSET(get<float>, {0x248, 4, 0, 0})
	DMember(float)                                     CraneYaw                                                    OFFSET(get<float>, {0x24C, 4, 0, 0})
	DMember(float)                                     CraneArmLength                                              OFFSET(get<float>, {0x250, 4, 0, 0})
	DMember(bool)                                      bLockMountPitch                                             OFFSET(get<bool>, {0x254, 1, 0, 0})
	DMember(bool)                                      bLockMountYaw                                               OFFSET(get<bool>, {0x255, 1, 0, 0})
	CMember(class USceneComponent*)                    TransformComponent                                          OFFSET(get<T>, {0x258, 8, 0, 0})
	CMember(class USceneComponent*)                    CraneYawControl                                             OFFSET(get<T>, {0x260, 8, 0, 0})
	CMember(class USceneComponent*)                    CranePitchControl                                           OFFSET(get<T>, {0x268, 8, 0, 0})
	CMember(class USceneComponent*)                    CraneCameraMount                                            OFFSET(get<T>, {0x270, 8, 0, 0})
};

/// Class /Script/CinematicCamera.CameraRig_Rail
/// Size: 0x0020 (0x000248 - 0x000268)
class ACameraRig_Rail : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
	DMember(float)                                     CurrentPositionOnRail                                       OFFSET(get<float>, {0x248, 4, 0, 0})
	DMember(bool)                                      bLockOrientationToRail                                      OFFSET(get<bool>, {0x24C, 1, 0, 0})
	CMember(class USceneComponent*)                    TransformComponent                                          OFFSET(get<T>, {0x250, 8, 0, 0})
	CMember(class USplineComponent*)                   RailSplineComponent                                         OFFSET(get<T>, {0x258, 8, 0, 0})
	CMember(class USceneComponent*)                    RailCameraMount                                             OFFSET(get<T>, {0x260, 8, 0, 0})


	/// Functions
	// Function /Script/CinematicCamera.CameraRig_Rail.GetRailSplineComponent
	// class USplineComponent* GetRailSplineComponent();                                                                        // [0x181a5a0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/CinematicCamera.CameraLookatTrackingSettings
/// Size: 0x0058 (0x000000 - 0x000058)
class FCameraLookatTrackingSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(bool)                                      bEnableLookAtTracking                                       OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bDrawDebugLookAtTrackingPosition                            OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(float)                                     LookAtTrackingInterpSpeed                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(TWeakObjectPtr<class AActor*>)             ActorToTrack                                                OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FVector)                                   RelativeOffset                                              OFFSET(getStruct<T>, {0x48, 12, 0, 0})
	DMember(bool)                                      bAllowRoll                                                  OFFSET(get<bool>, {0x54, 1, 1, 0})
};

/// Class /Script/CinematicCamera.CineCameraActor
/// Size: 0x0070 (0x000AE0 - 0x000B50)
class ACineCameraActor : public ACameraActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2896;

public:
	SMember(FCameraLookatTrackingSettings)             LookatTrackingSettings                                      OFFSET(getStruct<T>, {0xAE0, 88, 0, 0})


	/// Functions
	// Function /Script/CinematicCamera.CineCameraActor.GetCineCameraComponent
	// class UCineCameraComponent* GetCineCameraComponent();                                                                    // [0x53badf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/CinematicCamera.CameraFilmbackSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FCameraFilmbackSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     SensorWidth                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     SensorHeight                                                OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     SensorAspectRatio                                           OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/CinematicCamera.CameraLensSettings
/// Size: 0x001C (0x000000 - 0x00001C)
class FCameraLensSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(float)                                     MinFocalLength                                              OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MaxFocalLength                                              OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MinFStop                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MaxFStop                                                    OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MinimumFocusDistance                                        OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     SqueezeFactor                                               OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   DiaphragmBladeCount                                         OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/CinematicCamera.CameraTrackingFocusSettings
/// Size: 0x0040 (0x000000 - 0x000040)
class FCameraTrackingFocusSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TWeakObjectPtr<class AActor*>)             ActorToTrack                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FVector)                                   RelativeOffset                                              OFFSET(getStruct<T>, {0x30, 12, 0, 0})
	DMember(bool)                                      bDrawDebugTrackingFocusPoint                                OFFSET(get<bool>, {0x3C, 1, 1, 0})
};

/// Struct /Script/CinematicCamera.CameraFocusSettings
/// Size: 0x0058 (0x000000 - 0x000058)
class FCameraFocusSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(ECameraFocusMethod)                        FocusMethod                                                 OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     ManualFocusDistance                                         OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FCameraTrackingFocusSettings)              TrackingFocusSettings                                       OFFSET(getStruct<T>, {0x8, 64, 0, 0})
	DMember(bool)                                      bSmoothFocusChanges                                         OFFSET(get<bool>, {0x48, 1, 1, 0})
	DMember(float)                                     FocusSmoothingInterpSpeed                                   OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     FocusOffset                                                 OFFSET(get<float>, {0x50, 4, 0, 0})
};

/// Struct /Script/CinematicCamera.PlateCropSettings
/// Size: 0x0004 (0x000000 - 0x000004)
class FPlateCropSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     AspectRatio                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/CinematicCamera.NamedFilmbackPreset
/// Size: 0x0020 (0x000000 - 0x000020)
class FNamedFilmbackPreset : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FCameraFilmbackSettings)                   FilmbackSettings                                            OFFSET(getStruct<T>, {0x10, 12, 0, 0})
};

/// Struct /Script/CinematicCamera.NamedLensPreset
/// Size: 0x0030 (0x000000 - 0x000030)
class FNamedLensPreset : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FCameraLensSettings)                       LensSettings                                                OFFSET(getStruct<T>, {0x10, 28, 0, 0})
};

/// Class /Script/CinematicCamera.CineCameraComponent
/// Size: 0x0110 (0x000AE0 - 0x000BF0)
class UCineCameraComponent : public UCameraComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3056;

public:
	SMember(FCameraFilmbackSettings)                   FilmbackSettings                                            OFFSET(getStruct<T>, {0xAE0, 12, 0, 0})
	SMember(FCameraFilmbackSettings)                   Filmback                                                    OFFSET(getStruct<T>, {0xAEC, 12, 0, 0})
	SMember(FCameraLensSettings)                       LensSettings                                                OFFSET(getStruct<T>, {0xAF8, 28, 0, 0})
	SMember(FCameraFocusSettings)                      FocusSettings                                               OFFSET(getStruct<T>, {0xB18, 88, 0, 0})
	SMember(FPlateCropSettings)                        CropSettings                                                OFFSET(getStruct<T>, {0xB70, 4, 0, 0})
	DMember(float)                                     CurrentFocalLength                                          OFFSET(get<float>, {0xB74, 4, 0, 0})
	DMember(float)                                     CurrentAperture                                             OFFSET(get<float>, {0xB78, 4, 0, 0})
	DMember(float)                                     CurrentFocusDistance                                        OFFSET(get<float>, {0xB7C, 4, 0, 0})
	DMember(bool)                                      bOverride_CustomNearClippingPlane                           OFFSET(get<bool>, {0xB80, 1, 1, 0})
	DMember(float)                                     CustomNearClippingPlane                                     OFFSET(get<float>, {0xB84, 4, 0, 0})
	CMember(TArray<FNamedFilmbackPreset>)              FilmbackPresets                                             OFFSET(get<T>, {0xB90, 16, 0, 0})
	CMember(TArray<FNamedLensPreset>)                  LensPresets                                                 OFFSET(get<T>, {0xBA0, 16, 0, 0})
	SMember(FString)                                   DefaultFilmbackPresetName                                   OFFSET(getStruct<T>, {0xBB0, 16, 0, 0})
	SMember(FString)                                   DefaultFilmbackPreset                                       OFFSET(getStruct<T>, {0xBC0, 16, 0, 0})
	SMember(FString)                                   DefaultLensPresetName                                       OFFSET(getStruct<T>, {0xBD0, 16, 0, 0})
	DMember(float)                                     DefaultLensFocalLength                                      OFFSET(get<float>, {0xBE0, 4, 0, 0})
	DMember(float)                                     DefaultLensFStop                                            OFFSET(get<float>, {0xBE4, 4, 0, 0})


	/// Functions
	// Function /Script/CinematicCamera.CineCameraComponent.SetLensSettings
	// void SetLensSettings(FCameraLensSettings& NewLensSettings);                                                              // [0x53bc680] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetLensPresetByName
	// void SetLensPresetByName(FString InPresetName);                                                                          // [0x53bba80] Final|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetFocusSettings
	// void SetFocusSettings(FCameraFocusSettings& NewFocusSettings);                                                           // [0x53bc520] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
	// void SetFilmbackPresetByName(FString InPresetName);                                                                      // [0x53bbd10] Final|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetFilmback
	// void SetFilmback(FCameraFilmbackSettings& NewFilmback);                                                                  // [0x53bc7b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetCustomNearClippingPlane
	// void SetCustomNearClippingPlane(float NewCustomNearClippingPlane);                                                       // [0x53bc150] Final|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetCurrentFocalLength
	// void SetCurrentFocalLength(float InFocalLength);                                                                         // [0x53bc240] Final|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetCurrentAperture
	// void SetCurrentAperture(float NewCurrentAperture);                                                                       // [0x53bc330] Final|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetCropSettings
	// void SetCropSettings(FPlateCropSettings& NewCropSettings);                                                               // [0x53bc420] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetCropPresetByName
	// void SetCropPresetByName(FString InPresetName);                                                                          // [0x53bb840] Final|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
	// float GetVerticalFieldOfView();                                                                                          // [0x53bc080] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetLensPresetsCopy
	// TArray<FNamedLensPreset> GetLensPresetsCopy();                                                                           // [0x53bb560] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.GetLensPresetName
	// FString GetLensPresetName();                                                                                             // [0x53bbb80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
	// float GetHorizontalFieldOfView();                                                                                        // [0x53bc120] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy
	// TArray<FNamedFilmbackPreset> GetFilmbackPresetsCopy();                                                                   // [0x53bb6d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.GetFilmbackPresetName
	// FString GetFilmbackPresetName();                                                                                         // [0x53bbf30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName
	// FString GetDefaultFilmbackPresetName();                                                                                  // [0x53bbe20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetCropPresetName
	// FString GetCropPresetName();                                                                                             // [0x53bb940] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/CinematicCamera.NamedPlateCropPreset
/// Size: 0x0018 (0x000000 - 0x000018)
class FNamedPlateCropPreset : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FPlateCropSettings)                        CropSettings                                                OFFSET(getStruct<T>, {0x10, 4, 0, 0})
};

/// Class /Script/CinematicCamera.CineCameraSettings
/// Size: 0x0078 (0x000038 - 0x0000B0)
class UCineCameraSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FString)                                   DefaultLensPresetName                                       OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	DMember(float)                                     DefaultLensFocalLength                                      OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     DefaultLensFStop                                            OFFSET(get<float>, {0x4C, 4, 0, 0})
	CMember(TArray<FNamedLensPreset>)                  LensPresets                                                 OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FString)                                   DefaultFilmbackPreset                                       OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	CMember(TArray<FNamedFilmbackPreset>)              FilmbackPresets                                             OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FString)                                   DefaultCropPresetName                                       OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	CMember(TArray<FNamedPlateCropPreset>)             CropPresets                                                 OFFSET(get<T>, {0x90, 16, 0, 0})


	/// Functions
	// Function /Script/CinematicCamera.CineCameraSettings.SetLensPresets
	// void SetLensPresets(TArray<FNamedLensPreset>& InLensPresets);                                                            // [0x53bf6d0] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.SetFilmbackPresets
	// void SetFilmbackPresets(TArray<FNamedFilmbackPreset>& InFilmbackPresets);                                                // [0x53bf390] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.SetDefaultLensPresetName
	// void SetDefaultLensPresetName(FString InDefaultLensPresetName);                                                          // [0x53bfa80] Final|Native|Private|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.SetDefaultLensFStop
	// void SetDefaultLensFStop(float InDefaultLensFStop);                                                                      // [0x53bf860] Final|Native|Private|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.SetDefaultLensFocalLength
	// void SetDefaultLensFocalLength(float InDefaultLensFocalLength);                                                          // [0x53bf970] Final|Native|Private|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.SetDefaultFilmbackPreset
	// void SetDefaultFilmbackPreset(FString InDefaultFilmbackPreset);                                                          // [0x53bf560] Final|Native|Private|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.SetDefaultCropPresetName
	// void SetDefaultCropPresetName(FString InDefaultCropPresetName);                                                          // [0x53bf220] Final|Native|Private|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.SetCropPresets
	// void SetCropPresets(TArray<FNamedPlateCropPreset>& InCropPresets);                                                       // [0x53bf030] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.GetLensPresetNames
	// TArray<FString> GetLensPresetNames();                                                                                    // [0x53beef0] Final|Native|Private|Const 
	// Function /Script/CinematicCamera.CineCameraSettings.GetLensPresetByName
	// bool GetLensPresetByName(FString PresetName, FCameraLensSettings& LensSettings);                                         // [0x53c0160] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.GetFilmbackPresetNames
	// TArray<FString> GetFilmbackPresetNames();                                                                                // [0x53bedb0] Final|Native|Private|Const 
	// Function /Script/CinematicCamera.CineCameraSettings.GetFilmbackPresetByName
	// bool GetFilmbackPresetByName(FString PresetName, FCameraFilmbackSettings& FilmbackSettings);                             // [0x53bff40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.GetCropPresetNames
	// TArray<FString> GetCropPresetNames();                                                                                    // [0x53bec70] Final|Native|Private|Const 
	// Function /Script/CinematicCamera.CineCameraSettings.GetCropPresetByName
	// bool GetCropPresetByName(FString PresetName, FPlateCropSettings& CropSettings);                                          // [0x53bfc60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.GetCineCameraSettings
	// class UCineCameraSettings* GetCineCameraSettings();                                                                      // [0x53bfbf0] Final|Native|Static|Private|BlueprintCallable 
};

/// Enum /Script/CinematicCamera.ECameraFocusMethod
/// Size: 0x04
enum class ECameraFocusMethod : uint8_t
{
	ECameraFocusMethod__DoNotOverride                                                = 0,
	ECameraFocusMethod__Manual                                                       = 1,
	ECameraFocusMethod__Tracking                                                     = 2,
	ECameraFocusMethod__Disable                                                      = 3
};

