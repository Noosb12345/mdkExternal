
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ImageWriteQueue

/// Class /Script/MediaIOCore.MediaCapture
/// Size: 0x01C0 (0x000028 - 0x0001E8)
class UMediaCapture : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
	SMember(FMulticastInlineDelegate)                  OnStateChanged                                              OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(class UMediaOutput*)                       MediaOutput                                                 OFFSET(get<T>, {0x50, 8, 0, 0})


	/// Functions
	// Function /Script/MediaIOCore.MediaCapture.UpdateTextureRenderTarget2D
	// bool UpdateTextureRenderTarget2D(class UTextureRenderTarget2D* RenderTarget);                                            // [0x15824b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaIOCore.MediaCapture.StopCapture
	// void StopCapture(bool bAllowPendingFrameToBeProcess);                                                                    // [0x15823c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaIOCore.MediaCapture.SetMediaOutput
	// void SetMediaOutput(class UMediaOutput* InMediaOutput);                                                                  // [0x1582290] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaIOCore.MediaCapture.GetState
	// EMediaCaptureState GetState();                                                                                           // [0x1582390] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaIOCore.MediaCapture.GetDesiredSize
	// FIntPoint GetDesiredSize();                                                                                              // [0x1582260] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaIOCore.MediaCapture.GetDesiredPixelFormat
	// TEnumAsByte<EPixelFormat> GetDesiredPixelFormat();                                                                       // [0x1582240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaIOCore.MediaCapture.CaptureTextureRenderTarget2D
	// bool CaptureTextureRenderTarget2D(class UTextureRenderTarget2D* RenderTarget, FMediaCaptureOptions CaptureOptions);      // [0x15825a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaIOCore.MediaCapture.CaptureActiveSceneViewport
	// bool CaptureActiveSceneViewport(FMediaCaptureOptions CaptureOptions);                                                    // [0x1582770] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MediaIOCore.FileMediaCapture
/// Size: 0x0068 (0x0001E8 - 0x000250)
class UFileMediaCapture : public UMediaCapture
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
};

/// Class /Script/MediaIOCore.MediaOutput
/// Size: 0x0008 (0x000028 - 0x000030)
class UMediaOutput : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   NumberOfTextureBuffers                                      OFFSET(get<int32_t>, {0x28, 4, 0, 0})


	/// Functions
	// Function /Script/MediaIOCore.MediaOutput.Validate
	// bool Validate(FString& OutFailureReason);                                                                                // [0x158b6f0] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaIOCore.MediaOutput.CreateMediaCapture
	// class UMediaCapture* CreateMediaCapture();                                                                               // [0x158b800] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MediaIOCore.FileMediaOutput
/// Size: 0x00A0 (0x000030 - 0x0000D0)
class UFileMediaOutput : public UMediaOutput
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FImageWriteOptions)                        WriteOptions                                                OFFSET(getStruct<T>, {0x30, 96, 0, 0})
	SMember(FDirectoryPath)                            FilePath                                                    OFFSET(getStruct<T>, {0x90, 16, 0, 0})
	SMember(FString)                                   BaseFileName                                                OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	DMember(bool)                                      bOverrideDesiredSize                                        OFFSET(get<bool>, {0xB0, 1, 0, 0})
	SMember(FIntPoint)                                 DesiredSize                                                 OFFSET(getStruct<T>, {0xB4, 8, 0, 0})
	DMember(bool)                                      bOverridePixelFormat                                        OFFSET(get<bool>, {0xBC, 1, 0, 0})
	CMember(EFileMediaOutputPixelFormat)               DesiredPixelFormat                                          OFFSET(get<T>, {0xC0, 4, 0, 0})
	DMember(bool)                                      bInvertAlpha                                                OFFSET(get<bool>, {0xC4, 1, 0, 0})
};

/// Class /Script/MediaIOCore.MediaIOCoreSubsystem
/// Size: 0x0078 (0x000030 - 0x0000A8)
class UMediaIOCoreSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Struct /Script/MediaIOCore.MediaCaptureOptions
/// Size: 0x001C (0x000000 - 0x00001C)
class FMediaCaptureOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(bool)                                      bAutoRestartOnSourceSizeChange                              OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(EMediaCaptureOverrunAction)                OverrunAction                                               OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(EMediaCaptureCroppingType)                 Crop                                                        OFFSET(get<T>, {0x2, 1, 0, 0})
	SMember(FIntPoint)                                 CustomCapturePoint                                          OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	DMember(bool)                                      bResizeSourceBuffer                                         OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(bool)                                      bSkipFrameWhenRunningExpensiveTasks                         OFFSET(get<bool>, {0xD, 1, 0, 0})
	DMember(bool)                                      bConvertToDesiredPixelFormat                                OFFSET(get<bool>, {0xE, 1, 0, 0})
	DMember(bool)                                      bForceAlphaToOneOnConversion                                OFFSET(get<bool>, {0xF, 1, 0, 0})
	DMember(bool)                                      bApplyLinearToSRGBConversion                                OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bAutostopOnCapture                                          OFFSET(get<bool>, {0x11, 1, 0, 0})
	DMember(int32_t)                                   NumberOfFramesToCapture                                     OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	CMember(EMediaCapturePhase)                        CapturePhase                                                OFFSET(get<T>, {0x18, 1, 0, 0})
};

/// Struct /Script/MediaIOCore.MediaIOAutoDetectableTimecodeFormat_Backup
/// Size: 0x0008 (0x000000 - 0x000008)
class FMediaIOAutoDetectableTimecodeFormat_Backup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(EMediaIOTimecodeFormat)                    TimecodeFormat                                              OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bAutoDetect                                                 OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/MediaIOCore.MediaIODevice
/// Size: 0x000C (0x000000 - 0x00000C)
class FMediaIODevice : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     DeviceName                                                  OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   DeviceIdentifier                                            OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/MediaIOCore.MediaIOConnection
/// Size: 0x0020 (0x000000 - 0x000020)
class FMediaIOConnection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FMediaIODevice)                            Device                                                      OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FName)                                     protocol                                                    OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	CMember(EMediaIOTransportType)                     TransportType                                               OFFSET(get<T>, {0x14, 4, 0, 0})
	CMember(EMediaIOQuadLinkTransportType)             QuadTransportType                                           OFFSET(get<T>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   PortIdentifier                                              OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
};

/// Struct /Script/MediaIOCore.MediaIOMode
/// Size: 0x0018 (0x000000 - 0x000018)
class FMediaIOMode : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FFrameRate)                                FrameRate                                                   OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FIntPoint)                                 Resolution                                                  OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	CMember(EMediaIOStandardType)                      Standard                                                    OFFSET(get<T>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   DeviceModeIdentifier                                        OFFSET(get<int32_t>, {0x14, 4, 0, 0})
};

/// Struct /Script/MediaIOCore.MediaIOConfiguration
/// Size: 0x003C (0x000000 - 0x00003C)
class FMediaIOConfiguration : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 60;

public:
	DMember(bool)                                      bIsInput                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FMediaIOConnection)                        MediaConnection                                             OFFSET(getStruct<T>, {0x4, 32, 0, 0})
	SMember(FMediaIOMode)                              MediaMode                                                   OFFSET(getStruct<T>, {0x24, 24, 0, 0})
};

/// Struct /Script/MediaIOCore.MediaIOInputConfiguration
/// Size: 0x0044 (0x000000 - 0x000044)
class FMediaIOInputConfiguration : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 68;

public:
	SMember(FMediaIOConfiguration)                     MediaConfiguration                                          OFFSET(getStruct<T>, {0x0, 60, 0, 0})
	CMember(EMediaIOInputType)                         InputType                                                   OFFSET(get<T>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   KeyPortIdentifier                                           OFFSET(get<int32_t>, {0x40, 4, 0, 0})
};

/// Struct /Script/MediaIOCore.MediaIOOutputConfiguration
/// Size: 0x004C (0x000000 - 0x00004C)
class FMediaIOOutputConfiguration : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 76;

public:
	SMember(FMediaIOConfiguration)                     MediaConfiguration                                          OFFSET(getStruct<T>, {0x0, 60, 0, 0})
	CMember(EMediaIOOutputType)                        OutputType                                                  OFFSET(get<T>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   KeyPortIdentifier                                           OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	CMember(EMediaIOReferenceType)                     OutputReference                                             OFFSET(get<T>, {0x44, 4, 0, 0})
	DMember(int32_t)                                   ReferencePortIdentifier                                     OFFSET(get<int32_t>, {0x48, 4, 0, 0})
};

/// Struct /Script/MediaIOCore.MediaIOVideoTimecodeConfiguration
/// Size: 0x0040 (0x000000 - 0x000040)
class FMediaIOVideoTimecodeConfiguration : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FMediaIOConfiguration)                     MediaConfiguration                                          OFFSET(getStruct<T>, {0x0, 60, 0, 0})
	CMember(EMediaIOAutoDetectableTimecodeFormat)      TimecodeFormat                                              OFFSET(get<T>, {0x3C, 1, 0, 0})
};

/// Enum /Script/MediaIOCore.EFileMediaOutputPixelFormat
/// Size: 0x02
enum class EFileMediaOutputPixelFormat : uint32_t
{
	EFileMediaOutputPixelFormat__B8G8R8A8                                            = 0,
	EFileMediaOutputPixelFormat__FloatRGBA                                           = 1
};

/// Enum /Script/MediaIOCore.EMediaCaptureState
/// Size: 0x05
enum class EMediaCaptureState : uint8_t
{
	EMediaCaptureState__Error                                                        = 0,
	EMediaCaptureState__Capturing                                                    = 1,
	EMediaCaptureState__Preparing                                                    = 2,
	EMediaCaptureState__StopRequested                                                = 3,
	EMediaCaptureState__Stopped                                                      = 4
};

/// Enum /Script/MediaIOCore.EMediaCaptureResourceType
/// Size: 0x02
enum class EMediaCaptureResourceType : uint8_t
{
	EMediaCaptureResourceType__Texture                                               = 0,
	EMediaCaptureResourceType__Buffer                                                = 1
};

/// Enum /Script/MediaIOCore.EMediaCaptureCroppingType
/// Size: 0x04
enum class EMediaCaptureCroppingType : uint8_t
{
	EMediaCaptureCroppingType__None                                                  = 0,
	EMediaCaptureCroppingType__Center                                                = 1,
	EMediaCaptureCroppingType__TopLeft                                               = 2,
	EMediaCaptureCroppingType__Custom                                                = 3
};

/// Enum /Script/MediaIOCore.EMediaCaptureOverrunAction
/// Size: 0x02
enum class EMediaCaptureOverrunAction : uint8_t
{
	EMediaCaptureOverrunAction__Flush                                                = 0,
	EMediaCaptureOverrunAction__Skip                                                 = 1
};

/// Enum /Script/MediaIOCore.EMediaCapturePhase
/// Size: 0x05
enum class EMediaCapturePhase : uint8_t
{
	EMediaCapturePhase__BeforePostProcessing                                         = 0,
	EMediaCapturePhase__AfterMotionBlur                                              = 1,
	EMediaCapturePhase__AfterToneMap                                                 = 2,
	EMediaCapturePhase__AfterFXAA                                                    = 3,
	EMediaCapturePhase__EndFrame                                                     = 4
};

/// Enum /Script/MediaIOCore.EMediaIOTransportType
/// Size: 0x04
enum class EMediaIOTransportType : uint32_t
{
	EMediaIOTransportType__SingleLink                                                = 0,
	EMediaIOTransportType__DualLink                                                  = 1,
	EMediaIOTransportType__QuadLink                                                  = 2,
	EMediaIOTransportType__HDMI                                                      = 3
};

/// Enum /Script/MediaIOCore.EMediaIOQuadLinkTransportType
/// Size: 0x02
enum class EMediaIOQuadLinkTransportType : uint32_t
{
	EMediaIOQuadLinkTransportType__SquareDivision                                    = 0,
	EMediaIOQuadLinkTransportType__TwoSampleInterleave                               = 1
};

/// Enum /Script/MediaIOCore.EMediaIOStandardType
/// Size: 0x03
enum class EMediaIOStandardType : uint32_t
{
	EMediaIOStandardType__Progressive                                                = 0,
	EMediaIOStandardType__Interlaced                                                 = 1,
	EMediaIOStandardType__ProgressiveSegmentedFrame                                  = 2
};

/// Enum /Script/MediaIOCore.EMediaIOTimecodeFormat
/// Size: 0x03
enum class EMediaIOTimecodeFormat : uint32_t
{
	EMediaIOTimecodeFormat__None                                                     = 0,
	EMediaIOTimecodeFormat__LTC                                                      = 1,
	EMediaIOTimecodeFormat__VITC                                                     = 2
};

/// Enum /Script/MediaIOCore.EMediaIOAutoDetectableTimecodeFormat
/// Size: 0x04
enum class EMediaIOAutoDetectableTimecodeFormat : uint8_t
{
	EMediaIOAutoDetectableTimecodeFormat__None                                       = 0,
	EMediaIOAutoDetectableTimecodeFormat__LTC                                        = 1,
	EMediaIOAutoDetectableTimecodeFormat__VITC                                       = 2,
	EMediaIOAutoDetectableTimecodeFormat__Auto                                       = 255
};

/// Enum /Script/MediaIOCore.EMediaIOInputType
/// Size: 0x02
enum class EMediaIOInputType : uint32_t
{
	EMediaIOInputType__Fill                                                          = 0,
	EMediaIOInputType__FillAndKey                                                    = 1
};

/// Enum /Script/MediaIOCore.EMediaIOOutputType
/// Size: 0x02
enum class EMediaIOOutputType : uint32_t
{
	EMediaIOOutputType__Fill                                                         = 0,
	EMediaIOOutputType__FillAndKey                                                   = 1
};

/// Enum /Script/MediaIOCore.EMediaIOReferenceType
/// Size: 0x03
enum class EMediaIOReferenceType : uint32_t
{
	EMediaIOReferenceType__FreeRun                                                   = 0,
	EMediaIOReferenceType__External                                                  = 1,
	EMediaIOReferenceType__Input                                                     = 2
};

/// Enum /Script/MediaIOCore.EMediaCaptureSourceType
/// Size: 0x03
enum class EMediaCaptureSourceType : uint8_t
{
	EMediaCaptureSourceType__RENDER_TARGET                                           = 0,
	EMediaCaptureSourceType__SCENE_VIEWPORT                                          = 1,
	EMediaCaptureSourceType__RHI_RESOURCE                                            = 2
};

