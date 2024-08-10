
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: TemplateSequence

/// Struct /Script/GameplayCameras.FOscillator
/// Size: 0x000C (0x000000 - 0x00000C)
class FFOscillator : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     Amplitude                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Frequency                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(TEnumAsByte<EInitialOscillatorOffset>)     InitialOffset                                               OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(EOscillatorWaveform)                       Waveform                                                    OFFSET(get<T>, {0x9, 1, 0, 0})
};

/// Struct /Script/GameplayCameras.ROscillator
/// Size: 0x0024 (0x000000 - 0x000024)
class FROscillator : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	SMember(FFOscillator)                              Pitch                                                       OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FFOscillator)                              Yaw                                                         OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FFOscillator)                              Roll                                                        OFFSET(getStruct<T>, {0x18, 12, 0, 0})
};

/// Struct /Script/GameplayCameras.VOscillator
/// Size: 0x0024 (0x000000 - 0x000024)
class FVOscillator : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	SMember(FFOscillator)                              X                                                           OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FFOscillator)                              Y                                                           OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FFOscillator)                              Z                                                           OFFSET(getStruct<T>, {0x18, 12, 0, 0})
};

/// Class /Script/GameplayCameras.LegacyCameraShake
/// Size: 0x00F8 (0x0000A8 - 0x0001A0)
class ULegacyCameraShake : public UCameraShakeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	DMember(float)                                     OscillationDuration                                         OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     OscillationBlendInTime                                      OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     OscillationBlendOutTime                                     OFFSET(get<float>, {0xB0, 4, 0, 0})
	SMember(FROscillator)                              RotOscillation                                              OFFSET(getStruct<T>, {0xB4, 36, 0, 0})
	SMember(FVOscillator)                              LocOscillation                                              OFFSET(getStruct<T>, {0xD8, 36, 0, 0})
	SMember(FFOscillator)                              FOVOscillation                                              OFFSET(getStruct<T>, {0xFC, 12, 0, 0})
	DMember(float)                                     AnimPlayRate                                                OFFSET(get<float>, {0x108, 4, 0, 0})
	DMember(float)                                     AnimScale                                                   OFFSET(get<float>, {0x10C, 4, 0, 0})
	DMember(float)                                     AnimBlendInTime                                             OFFSET(get<float>, {0x110, 4, 0, 0})
	DMember(float)                                     AnimBlendOutTime                                            OFFSET(get<float>, {0x114, 4, 0, 0})
	DMember(float)                                     RandomAnimSegmentDuration                                   OFFSET(get<float>, {0x118, 4, 0, 0})
	CMember(class UCameraAnimationSequence*)           AnimSequence                                                OFFSET(get<T>, {0x120, 8, 0, 0})
	DMember(bool)                                      bRandomAnimSegment                                          OFFSET(get<bool>, {0x128, 1, 1, 0})
	DMember(float)                                     OscillatorTimeRemaining                                     OFFSET(get<float>, {0x12C, 4, 0, 0})
	CMember(class USequenceCameraShakePattern*)        SequenceShakePattern                                        OFFSET(get<T>, {0x168, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayCameras.LegacyCameraShake.StartLegacyCameraShakeFromSource
	// class ULegacyCameraShake* StartLegacyCameraShakeFromSource(class APlayerCameraManager* PlayerCameraManager, class UClass* ShakeClass, class UCameraShakeSourceComponent* SourceComponent, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot); // [0x15ab590] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameplayCameras.LegacyCameraShake.StartLegacyCameraShake
	// class ULegacyCameraShake* StartLegacyCameraShake(class APlayerCameraManager* PlayerCameraManager, class UClass* ShakeClass, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot); // [0x15ab9c0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameplayCameras.LegacyCameraShake.ReceiveStopShake
	// void ReceiveStopShake(bool bImmediately);                                                                                // [0x3a334c0] Event|Public|BlueprintEvent 
	// Function /Script/GameplayCameras.LegacyCameraShake.ReceivePlayShake
	// void ReceivePlayShake(float Scale);                                                                                      // [0x3a334c0] Event|Public|BlueprintEvent 
	// Function /Script/GameplayCameras.LegacyCameraShake.ReceiveIsFinished
	// bool ReceiveIsFinished();                                                                                                // [0x1582390] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/GameplayCameras.LegacyCameraShake.BlueprintUpdateCameraShake
	// void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, FMinimalViewInfo& POV, FMinimalViewInfo& ModifiedPOV);     // [0x3a334c0] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/GameplayCameras.LegacyCameraShakePattern
/// Size: 0x0000 (0x000028 - 0x000028)
class ULegacyCameraShakePattern : public UCameraShakePattern
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameplayCameras.LegacyCameraShakeFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class ULegacyCameraShakeFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameplayCameras.LegacyCameraShakeFunctionLibrary.Conv_LegacyCameraShake
	// class ULegacyCameraShake* Conv_LegacyCameraShake(class UCameraShakeBase* CameraShake);                                   // [0x15ac1c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/GameplayCameras.CameraAnimationParams
/// Size: 0x0030 (0x000000 - 0x000030)
class FCameraAnimationParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(ECameraAnimationEasingType)                EaseInType                                                  OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(float)                                     EaseInDuration                                              OFFSET(get<float>, {0xC, 4, 0, 0})
	CMember(ECameraAnimationEasingType)                EaseOutType                                                 OFFSET(get<T>, {0x10, 1, 0, 0})
	DMember(float)                                     EaseOutDuration                                             OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(bool)                                      bLoop                                                       OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(bool)                                      bRandomStartTime                                            OFFSET(get<bool>, {0x19, 1, 0, 0})
	DMember(float)                                     DurationOverride                                            OFFSET(get<float>, {0x1C, 4, 0, 0})
	CMember(ECameraAnimationPlaySpace)                 PlaySpace                                                   OFFSET(get<T>, {0x20, 1, 0, 0})
	SMember(FRotator)                                  UserPlaySpaceRot                                            OFFSET(getStruct<T>, {0x24, 12, 0, 0})
};

/// Struct /Script/GameplayCameras.CameraAnimationHandle
/// Size: 0x0004 (0x000000 - 0x000004)
class FCameraAnimationHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/GameplayCameras.ActiveCameraAnimationInfo
/// Size: 0x0060 (0x000000 - 0x000060)
class FActiveCameraAnimationInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(class UCameraAnimationSequence*)           Sequence                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FCameraAnimationParams)                    Params                                                      OFFSET(getStruct<T>, {0x8, 48, 0, 0})
	SMember(FCameraAnimationHandle)                    Handle                                                      OFFSET(getStruct<T>, {0x38, 4, 0, 0})
	CMember(class UCameraAnimationSequencePlayer*)     Player                                                      OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class UCameraAnimationSequenceCameraStandIn*) CameraStandIn                                            OFFSET(get<T>, {0x48, 8, 0, 0})
	DMember(float)                                     EaseInCurrentTime                                           OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     EaseOutCurrentTime                                          OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(bool)                                      bIsEasingIn                                                 OFFSET(get<bool>, {0x58, 1, 0, 0})
	DMember(bool)                                      bIsEasingOut                                                OFFSET(get<bool>, {0x59, 1, 0, 0})
};

/// Class /Script/GameplayCameras.CameraAnimationCameraModifier
/// Size: 0x0018 (0x000048 - 0x000060)
class UCameraAnimationCameraModifier : public UCameraModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FActiveCameraAnimationInfo>)        ActiveAnimations                                            OFFSET(get<T>, {0x48, 16, 0, 0})
	DMember(uint16_t)                                  NextInstanceSerialNumber                                    OFFSET(get<uint16_t>, {0x58, 2, 0, 0})


	/// Functions
	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.StopCameraAnimation
	// void StopCameraAnimation(FCameraAnimationHandle& Handle, bool bImmediate);                                               // [0x15ad820] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimationsOf
	// void StopAllCameraAnimationsOf(class UCameraAnimationSequence* Sequence, bool bImmediate);                               // [0x15ad690] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimations
	// void StopAllCameraAnimations(bool bImmediate);                                                                           // [0x15ad5a0] Native|Public|BlueprintCallable 
	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.PlayCameraAnimation
	// FCameraAnimationHandle PlayCameraAnimation(class UCameraAnimationSequence* Sequence, FCameraAnimationParams Params);     // [0x15adaf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.IsCameraAnimationActive
	// bool IsCameraAnimationActive(FCameraAnimationHandle& Handle);                                                            // [0x15ad9b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromPlayerController
	// class UCameraAnimationCameraModifier* GetCameraAnimationCameraModifierFromPlayerController(class APlayerController* PlayerController); // [0x15acd00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromID
	// class UCameraAnimationCameraModifier* GetCameraAnimationCameraModifierFromID(class UObject* WorldContextObject, int32_t ControllerId); // [0x15ace30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifier
	// class UCameraAnimationCameraModifier* GetCameraAnimationCameraModifier(class UObject* WorldContextObject, int32_t PlayerIndex); // [0x15ad160] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/GameplayCameras.GameplayCamerasFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayCamerasFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraShakePlaySpace
	// ECameraShakePlaySpace Conv_CameraShakePlaySpace(ECameraAnimationPlaySpace CameraAnimationPlaySpace);                     // [0x15ae3b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraAnimationPlaySpace
	// ECameraAnimationPlaySpace Conv_CameraAnimationPlaySpace(ECameraShakePlaySpace CameraShakePlaySpace);                     // [0x15ae3b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraAnimationCameraModifier
	// class UCameraAnimationCameraModifier* Conv_CameraAnimationCameraModifier(class APlayerCameraManager* PlayerCameraManager); // [0x15ae4e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/GameplayCameras.CompositeCameraShakePattern
/// Size: 0x0020 (0x000028 - 0x000048)
class UCompositeCameraShakePattern : public UCameraShakePattern
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<class UCameraShakePattern*>)        ChildPatterns                                               OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/GameplayCameras.DefaultCameraShakeBase
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UDefaultCameraShakeBase : public UCameraShakeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/GameplayCameras.GameplayCamerasSubsystem
/// Size: 0x0000 (0x000030 - 0x000030)
class UGameplayCamerasSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/GameplayCameras.GameplayCamerasSubsystem.StopCameraAnimation
	// void StopCameraAnimation(class APlayerController* PlayerController, FCameraAnimationHandle& Handle, bool bImmediate);    // [0x15b1370] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimationsOf
	// void StopAllCameraAnimationsOf(class APlayerController* PlayerController, class UCameraAnimationSequence* Sequence, bool bImmediate); // [0x15b1140] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimations
	// void StopAllCameraAnimations(class APlayerController* PlayerController, bool bImmediate);                                // [0x15b0fa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayCameras.GameplayCamerasSubsystem.PlayCameraAnimation
	// FCameraAnimationHandle PlayCameraAnimation(class APlayerController* PlayerController, class UCameraAnimationSequence* Sequence, FCameraAnimationParams Params); // [0x15b17c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayCameras.GameplayCamerasSubsystem.IsCameraAnimationActive
	// bool IsCameraAnimationActive(class APlayerController* PlayerController, FCameraAnimationHandle& Handle);                 // [0x15b15c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GameplayCameras.SimpleCameraShakePattern
/// Size: 0x0010 (0x000028 - 0x000038)
class USimpleCameraShakePattern : public UCameraShakePattern
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     Duration                                                    OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     BlendInTime                                                 OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     BlendOutTime                                                OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Struct /Script/GameplayCameras.PerlinNoiseShaker
/// Size: 0x0008 (0x000000 - 0x000008)
class FPerlinNoiseShaker : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Amplitude                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Frequency                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Class /Script/GameplayCameras.PerlinNoiseCameraShakePattern
/// Size: 0x0080 (0x000038 - 0x0000B8)
class UPerlinNoiseCameraShakePattern : public USimpleCameraShakePattern
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(float)                                     LocationAmplitudeMultiplier                                 OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     LocationFrequencyMultiplier                                 OFFSET(get<float>, {0x3C, 4, 0, 0})
	SMember(FPerlinNoiseShaker)                        X                                                           OFFSET(getStruct<T>, {0x40, 8, 0, 0})
	SMember(FPerlinNoiseShaker)                        Y                                                           OFFSET(getStruct<T>, {0x48, 8, 0, 0})
	SMember(FPerlinNoiseShaker)                        Z                                                           OFFSET(getStruct<T>, {0x50, 8, 0, 0})
	DMember(float)                                     RotationAmplitudeMultiplier                                 OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     RotationFrequencyMultiplier                                 OFFSET(get<float>, {0x5C, 4, 0, 0})
	SMember(FPerlinNoiseShaker)                        Pitch                                                       OFFSET(getStruct<T>, {0x60, 8, 0, 0})
	SMember(FPerlinNoiseShaker)                        Yaw                                                         OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	SMember(FPerlinNoiseShaker)                        Roll                                                        OFFSET(getStruct<T>, {0x70, 8, 0, 0})
	SMember(FPerlinNoiseShaker)                        FOV                                                         OFFSET(getStruct<T>, {0x78, 8, 0, 0})
};

/// Class /Script/GameplayCameras.TestCameraShake
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UTestCameraShake : public UCameraShakeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/GameplayCameras.ConstantCameraShakePattern
/// Size: 0x0018 (0x000038 - 0x000050)
class UConstantCameraShakePattern : public USimpleCameraShakePattern
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   LocationOffset                                              OFFSET(getStruct<T>, {0x38, 12, 0, 0})
	SMember(FRotator)                                  RotationOffset                                              OFFSET(getStruct<T>, {0x44, 12, 0, 0})
};

/// Struct /Script/GameplayCameras.WaveOscillator
/// Size: 0x000C (0x000000 - 0x00000C)
class FWaveOscillator : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     Amplitude                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Frequency                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(EInitialWaveOscillatorOffsetType)          InitialOffsetType                                           OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Class /Script/GameplayCameras.WaveOscillatorCameraShakePattern
/// Size: 0x00A0 (0x000038 - 0x0000D8)
class UWaveOscillatorCameraShakePattern : public USimpleCameraShakePattern
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	DMember(float)                                     LocationAmplitudeMultiplier                                 OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     LocationFrequencyMultiplier                                 OFFSET(get<float>, {0x3C, 4, 0, 0})
	SMember(FWaveOscillator)                           X                                                           OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	SMember(FWaveOscillator)                           Y                                                           OFFSET(getStruct<T>, {0x4C, 12, 0, 0})
	SMember(FWaveOscillator)                           Z                                                           OFFSET(getStruct<T>, {0x58, 12, 0, 0})
	DMember(float)                                     RotationAmplitudeMultiplier                                 OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     RotationFrequencyMultiplier                                 OFFSET(get<float>, {0x68, 4, 0, 0})
	SMember(FWaveOscillator)                           Pitch                                                       OFFSET(getStruct<T>, {0x6C, 12, 0, 0})
	SMember(FWaveOscillator)                           Yaw                                                         OFFSET(getStruct<T>, {0x78, 12, 0, 0})
	SMember(FWaveOscillator)                           Roll                                                        OFFSET(getStruct<T>, {0x84, 12, 0, 0})
	SMember(FWaveOscillator)                           FOV                                                         OFFSET(getStruct<T>, {0x90, 12, 0, 0})
};

/// Enum /Script/GameplayCameras.EOscillatorWaveform
/// Size: 0x02
enum class EOscillatorWaveform : uint8_t
{
	EOscillatorWaveform__SineWave                                                    = 0,
	EOscillatorWaveform__PerlinNoise                                                 = 1
};

/// Enum /Script/GameplayCameras.EInitialOscillatorOffset
/// Size: 0x02
enum class EInitialOscillatorOffset : uint8_t
{
	EOO_OffsetRandom                                                                 = 0,
	EOO_OffsetZero                                                                   = 1
};

/// Enum /Script/GameplayCameras.ECameraAnimationPlaySpace
/// Size: 0x03
enum class ECameraAnimationPlaySpace : uint8_t
{
	ECameraAnimationPlaySpace__CameraLocal                                           = 0,
	ECameraAnimationPlaySpace__World                                                 = 1,
	ECameraAnimationPlaySpace__UserDefined                                           = 2
};

/// Enum /Script/GameplayCameras.ECameraAnimationEasingType
/// Size: 0x08
enum class ECameraAnimationEasingType : uint8_t
{
	ECameraAnimationEasingType__Linear                                               = 0,
	ECameraAnimationEasingType__Sinusoidal                                           = 1,
	ECameraAnimationEasingType__Quadratic                                            = 2,
	ECameraAnimationEasingType__Cubic                                                = 3,
	ECameraAnimationEasingType__Quartic                                              = 4,
	ECameraAnimationEasingType__Quintic                                              = 5,
	ECameraAnimationEasingType__Exponential                                          = 6,
	ECameraAnimationEasingType__Circular                                             = 7
};

/// Enum /Script/GameplayCameras.EInitialWaveOscillatorOffsetType
/// Size: 0x02
enum class EInitialWaveOscillatorOffsetType : uint8_t
{
	EInitialWaveOscillatorOffsetType__Random                                         = 0,
	EInitialWaveOscillatorOffsetType__Zero                                           = 1
};

