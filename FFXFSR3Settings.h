
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

/// Class /Script/FFXFSR3Settings.FFXFSR3Settings
/// Size: 0x0070 (0x000038 - 0x0000A8)
class UFFXFSR3Settings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(bool)                                      bAutoExposure                                               OFFSET(get<bool>, {0x39, 1, 0, 0})
	DMember(bool)                                      bEnabledInEditorViewport                                    OFFSET(get<bool>, {0x3A, 1, 0, 0})
	DMember(bool)                                      bUseSSRExperimentalDenoiser                                 OFFSET(get<bool>, {0x3B, 1, 0, 0})
	DMember(bool)                                      bRHIBackend                                                 OFFSET(get<bool>, {0x3C, 1, 0, 0})
	DMember(bool)                                      bD3D12Backend                                               OFFSET(get<bool>, {0x3D, 1, 0, 0})
	DMember(bool)                                      bFrameGenEnabled                                            OFFSET(get<bool>, {0x3E, 1, 0, 0})
	DMember(bool)                                      bCaptureDebugUI                                             OFFSET(get<bool>, {0x3F, 1, 0, 0})
	DMember(bool)                                      bUpdateGlobalFrameTime                                      OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(bool)                                      bModifySlateDeltaTime                                       OFFSET(get<bool>, {0x41, 1, 0, 0})
	CMember(EFFXFSR3FrameGenUIMode)                    UIMode                                                      OFFSET(get<T>, {0x44, 4, 0, 0})
	DMember(bool)                                      bD3D12AsyncInterpolation                                    OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(bool)                                      bD3D12AsyncPresent                                          OFFSET(get<bool>, {0x49, 1, 0, 0})
	CMember(EFFXFSR3PaceRHIFrameMode)                  PaceMode                                                    OFFSET(get<T>, {0x4C, 4, 0, 0})
	CMember(EFFXFSR3QualityMode)                       QualityMode                                                 OFFSET(get<T>, {0x50, 4, 0, 0})
	CMember(EFFXFSR3HistoryFormat)                     HistoryFormat                                               OFFSET(get<T>, {0x54, 4, 0, 0})
	CMember(EFFXFSR3DeDitherMode)                      DeDither                                                    OFFSET(get<T>, {0x58, 4, 0, 0})
	DMember(float)                                     Sharpness                                                   OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(bool)                                      bAdjustMipBias                                              OFFSET(get<bool>, {0x60, 1, 0, 0})
	DMember(bool)                                      bForceVertexDeformationOutputsVelocity                      OFFSET(get<bool>, {0x61, 1, 0, 0})
	CMember(EFFXFSR3LandscapeHISMMode)                 ForceLandscapeHISMMobility                                  OFFSET(get<T>, {0x64, 4, 0, 0})
	DMember(bool)                                      bReactiveMask                                               OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(float)                                     ReflectionScale                                             OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     ReflectionLuminanceBias                                     OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     RoughnessScale                                              OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     RoughnessBias                                               OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     RoughnessMaxDistance                                        OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(bool)                                      bReactiveMaskRoughnessForceMaxDistance                      OFFSET(get<bool>, {0x80, 1, 0, 0})
	DMember(float)                                     TranslucencyBias                                            OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(float)                                     TranslucencyLuminanceBias                                   OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(float)                                     TranslucencyMaxDistance                                     OFFSET(get<float>, {0x8C, 4, 0, 0})
	CMember(TEnumAsByte<EMaterialShadingModel>)        ReactiveShadingModelID                                      OFFSET(get<T>, {0x90, 1, 0, 0})
	DMember(float)                                     ForceReactiveMaterialValue                                  OFFSET(get<float>, {0x94, 4, 0, 0})
	DMember(float)                                     ReactiveHistoryTranslucencyBias                             OFFSET(get<float>, {0x98, 4, 0, 0})
	DMember(float)                                     ReactiveHistoryTranslucencyLumaBias                         OFFSET(get<float>, {0x9C, 4, 0, 0})
	DMember(float)                                     PreDOFTranslucencyScale                                     OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(bool)                                      bPreDOFTranslucencyMax                                      OFFSET(get<bool>, {0xA4, 1, 0, 0})
};

/// Enum /Script/FFXFSR3Settings.EFFXFSR3QualityMode
/// Size: 0x05
enum class EFFXFSR3QualityMode : uint32_t
{
	EFFXFSR3QualityMode__NativeAA                                                    = 0,
	EFFXFSR3QualityMode__Quality                                                     = 1,
	EFFXFSR3QualityMode__Balanced                                                    = 2,
	EFFXFSR3QualityMode__Performance                                                 = 3,
	EFFXFSR3QualityMode__UltraPerformance                                            = 4
};

/// Enum /Script/FFXFSR3Settings.EFFXFSR3HistoryFormat
/// Size: 0x02
enum class EFFXFSR3HistoryFormat : uint32_t
{
	EFFXFSR3HistoryFormat__FloatRGBA                                                 = 0,
	EFFXFSR3HistoryFormat__FloatR11G11B10                                            = 1
};

/// Enum /Script/FFXFSR3Settings.EFFXFSR3DeDitherMode
/// Size: 0x03
enum class EFFXFSR3DeDitherMode : uint32_t
{
	EFFXFSR3DeDitherMode__Off                                                        = 0,
	EFFXFSR3DeDitherMode__Full                                                       = 1,
	EFFXFSR3DeDitherMode__HairOnly                                                   = 2
};

/// Enum /Script/FFXFSR3Settings.EFFXFSR3LandscapeHISMMode
/// Size: 0x03
enum class EFFXFSR3LandscapeHISMMode : uint32_t
{
	EFFXFSR3LandscapeHISMMode__Off                                                   = 0,
	EFFXFSR3LandscapeHISMMode__AllStatic                                             = 1,
	EFFXFSR3LandscapeHISMMode__StaticWPO                                             = 2
};

/// Enum /Script/FFXFSR3Settings.EFFXFSR3FrameGenUIMode
/// Size: 0x02
enum class EFFXFSR3FrameGenUIMode : uint32_t
{
	EFFXFSR3FrameGenUIMode__SlateRedraw                                              = 0,
	EFFXFSR3FrameGenUIMode__UIExtraction                                             = 1
};

/// Enum /Script/FFXFSR3Settings.EFFXFSR3PaceRHIFrameMode
/// Size: 0x02
enum class EFFXFSR3PaceRHIFrameMode : uint32_t
{
	EFFXFSR3PaceRHIFrameMode__None                                                   = 0,
	EFFXFSR3PaceRHIFrameMode__CustomPresentVSync                                     = 1
};

