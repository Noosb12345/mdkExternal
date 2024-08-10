
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AppleImageUtils
/// dependency: AugmentedReality
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AppleARKit.AppleARKitSettings
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UAppleARKitSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(bool)                                      bRequireARKitSupport                                        OFFSET(get<bool>, {0x30, 1, 0, 0})
	SMember(FString)                                   FaceTrackingLogDir                                          OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(TArray<ELivelinkTrackingType>)             LivelinkTrackingTypes                                       OFFSET(get<T>, {0x48, 16, 0, 0})
	DMember(bool)                                      bFaceTrackingLogData                                        OFFSET(get<bool>, {0x58, 1, 0, 0})
	DMember(bool)                                      bFaceTrackingWriteEachFrame                                 OFFSET(get<bool>, {0x59, 1, 0, 0})
	CMember(EARFaceTrackingFileWriterType)             FaceTrackingFileWriterType                                  OFFSET(get<T>, {0x5A, 1, 0, 0})
	DMember(bool)                                      bShouldWriteCameraImagePerFrame                             OFFSET(get<bool>, {0x5B, 1, 0, 0})
	DMember(float)                                     WrittenCameraImageScale                                     OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(int32_t)                                   WrittenCameraImageQuality                                   OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	CMember(ETextureRotationDirection)                 WrittenCameraImageRotation                                  OFFSET(get<T>, {0x64, 1, 0, 0})
	DMember(int32_t)                                   LiveLinkPublishingPort                                      OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	SMember(FName)                                     DefaultFaceTrackingLiveLinkSubjectName                      OFFSET(getStruct<T>, {0x6C, 8, 0, 0})
	SMember(FName)                                     DefaultPoseTrackingLiveLinkSubjectName                      OFFSET(getStruct<T>, {0x74, 8, 0, 0})
	CMember(EARFaceTrackingDirection)                  DefaultFaceTrackingDirection                                OFFSET(get<T>, {0x7C, 1, 0, 0})
	DMember(bool)                                      bAdjustThreadPrioritiesDuringARSession                      OFFSET(get<bool>, {0x7D, 1, 0, 0})
	DMember(int32_t)                                   GameThreadPriorityOverride                                  OFFSET(get<int32_t>, {0x80, 4, 0, 0})
	DMember(int32_t)                                   RenderThreadPriorityOverride                                OFFSET(get<int32_t>, {0x84, 4, 0, 0})
	SMember(FString)                                   ARKitTimecodeProvider                                       OFFSET(getStruct<T>, {0x88, 16, 0, 0})
};

/// Class /Script/AppleARKit.AppleARKitTextureCameraImage
/// Size: 0x0010 (0x0001E0 - 0x0001F0)
class UAppleARKitTextureCameraImage : public UARTextureCameraImage
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /Script/AppleARKit.AppleARKitTextureCameraDepth
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UAppleARKitTextureCameraDepth : public UARTextureCameraDepth
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /Script/AppleARKit.AppleARKitEnvironmentCaptureProbeTexture
/// Size: 0x0010 (0x000280 - 0x000290)
class UAppleARKitEnvironmentCaptureProbeTexture : public UAREnvironmentCaptureProbeTexture
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
};

/// Class /Script/AppleARKit.AppleARKitOcclusionTexture
/// Size: 0x0010 (0x0001E0 - 0x0001F0)
class UAppleARKitOcclusionTexture : public UARTexture
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /Script/AppleARKit.AppleARKitCameraVideoTexture
/// Size: 0x0010 (0x0001E0 - 0x0001F0)
class UAppleARKitCameraVideoTexture : public UARTextureCameraImage
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /Script/AppleARKit.AppleARKitTimecodeProvider
/// Size: 0x0008 (0x000030 - 0x000038)
class UAppleARKitTimecodeProvider : public UTimecodeProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/AppleARKit.AppleARKitEnvironmentCaptureProbe
/// Size: 0x0010 (0x000110 - 0x000120)
class UAppleARKitEnvironmentCaptureProbe : public UAREnvironmentCaptureProbe
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(class UAppleARKitEnvironmentCaptureProbeTexture*) ARKitEnvironmentTexture                              OFFSET(get<T>, {0x110, 8, 0, 0})
};

/// Class /Script/AppleARKit.ARKitCameraOverlayMaterialLoader
/// Size: 0x0028 (0x000028 - 0x000050)
class UARKitCameraOverlayMaterialLoader : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class UMaterialInterface*)                 DefaultCameraOverlayMaterial                                OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UMaterialInterface*)                 DepthOcclusionOverlayMaterial                               OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UMaterialInterface*)                 MatteOcclusionOverlayMaterial                               OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class UMaterialInterface*)                 SceneDepthOcclusionMaterial                                 OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class UMaterialInterface*)                 SceneDepthColorationMaterial                                OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Class /Script/AppleARKit.ARKitGeoTrackingSupport
/// Size: 0x0000 (0x000028 - 0x000028)
class UARKitGeoTrackingSupport : public UARGeoTrackingSupport
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AppleARKit.ARKitMeshGeometry
/// Size: 0x0000 (0x000100 - 0x000100)
class UARKitMeshGeometry : public UARMeshGeometry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Class /Script/AppleARKit.MaterialExpressionARKitPassthroughCamera
/// Size: 0x0030 (0x0000B0 - 0x0000E0)
class UMaterialExpressionARKitPassthroughCamera : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FExpressionInput)                          Coordinates                                                 OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	DMember(uint32_t)                                  ConstCoordinate                                             OFFSET(get<uint32_t>, {0xD8, 4, 0, 0})
	CMember(TEnumAsByte<EARKitTextureType>)            TextureType                                                 OFFSET(get<T>, {0xDC, 1, 0, 0})
};

/// Struct /Script/AppleARKit.AppleARKitCamera
/// Size: 0x0080 (0x000000 - 0x000080)
class FAppleARKitCamera : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(EARTrackingQuality)                        TrackingQuality                                             OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EARTrackingQualityReason)                  TrackingQualityReason                                       OFFSET(get<T>, {0x1, 1, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	SMember(FQuat)                                     Orientation                                                 OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FVector)                                   Translation                                                 OFFSET(getStruct<T>, {0x50, 12, 0, 0})
	SMember(FVector2D)                                 ImageResolution                                             OFFSET(getStruct<T>, {0x5C, 8, 0, 0})
	SMember(FVector2D)                                 FocalLength                                                 OFFSET(getStruct<T>, {0x64, 8, 0, 0})
	SMember(FVector2D)                                 PrincipalPoint                                              OFFSET(getStruct<T>, {0x6C, 8, 0, 0})
};

/// Struct /Script/AppleARKit.AppleARKitFrame
/// Size: 0x0100 (0x000000 - 0x000100)
class FAppleARKitFrame : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Struct /Script/AppleARKit.AppleARKitLightEstimate
/// Size: 0x000C (0x000000 - 0x00000C)
class FAppleARKitLightEstimate : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      bIsValid                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     AmbientIntensity                                            OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     AmbientColorTemperatureKelvin                               OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Enum /Script/AppleARKit.EARFaceTrackingFileWriterType
/// Size: 0x03
enum class EARFaceTrackingFileWriterType : uint8_t
{
	EARFaceTrackingFileWriterType__None                                              = 0,
	EARFaceTrackingFileWriterType__CSV                                               = 1,
	EARFaceTrackingFileWriterType__JSON                                              = 2
};

/// Enum /Script/AppleARKit.ELivelinkTrackingType
/// Size: 0x02
enum class ELivelinkTrackingType : uint8_t
{
	ELivelinkTrackingType__FaceTracking                                              = 0,
	ELivelinkTrackingType__PoseTracking                                              = 1
};

/// Enum /Script/AppleARKit.EARKitTextureType
/// Size: 0x02
enum class EARKitTextureType : uint8_t
{
	TextureY                                                                         = 0,
	TextureCbCr                                                                      = 1
};

