
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: ActorLayerUtilities
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieRenderPipelineCore

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineImagePassBase
/// Size: 0x0130 (0x000048 - 0x000178)
class UMoviePipelineImagePassBase : public UMoviePipelineRenderPass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
};

/// Struct /Script/MovieRenderPipelineRenderPasses.MoviePipelinePostProcessPass
/// Size: 0x0038 (0x000000 - 0x000038)
class FMoviePipelinePostProcessPass : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(TWeakObjectPtr<class UMaterialInterface*>) Material                                                    OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineDeferredPassBase
/// Size: 0x00C0 (0x000178 - 0x000238)
class UMoviePipelineDeferredPassBase : public UMoviePipelineImagePassBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
	DMember(bool)                                      bAccumulatorIncludesAlpha                                   OFFSET(get<bool>, {0x178, 1, 0, 0})
	DMember(bool)                                      bDisableMultisampleEffects                                  OFFSET(get<bool>, {0x179, 1, 0, 0})
	DMember(bool)                                      bUse32BitPostProcessMaterials                               OFFSET(get<bool>, {0x17A, 1, 0, 0})
	CMember(TArray<FMoviePipelinePostProcessPass>)     AdditionalPostProcessMaterials                              OFFSET(get<T>, {0x180, 16, 0, 0})
	DMember(bool)                                      bRenderMainPass                                             OFFSET(get<bool>, {0x190, 1, 0, 0})
	DMember(bool)                                      bAddDefaultLayer                                            OFFSET(get<bool>, {0x191, 1, 0, 0})
	CMember(TArray<FActorLayer>)                       ActorLayers                                                 OFFSET(get<T>, {0x198, 16, 0, 0})
	CMember(TArray<FSoftObjectPath>)                   DataLayers                                                  OFFSET(get<T>, {0x1B8, 16, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         ActivePostProcessMaterials                                  OFFSET(get<T>, {0x1C8, 16, 0, 0})
	CMember(class UMaterialInterface*)                 StencilLayerMaterial                                        OFFSET(get<T>, {0x1D8, 8, 0, 0})
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_Unlit
/// Size: 0x0000 (0x000238 - 0x000238)
class UMoviePipelineDeferredPass_Unlit : public UMoviePipelineDeferredPassBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_DetailLighting
/// Size: 0x0000 (0x000238 - 0x000238)
class UMoviePipelineDeferredPass_DetailLighting : public UMoviePipelineDeferredPassBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_LightingOnly
/// Size: 0x0000 (0x000238 - 0x000238)
class UMoviePipelineDeferredPass_LightingOnly : public UMoviePipelineDeferredPassBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_ReflectionsOnly
/// Size: 0x0000 (0x000238 - 0x000238)
class UMoviePipelineDeferredPass_ReflectionsOnly : public UMoviePipelineDeferredPassBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_PathTracer
/// Size: 0x0008 (0x000238 - 0x000240)
class UMoviePipelineDeferredPass_PathTracer : public UMoviePipelineDeferredPassBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	DMember(bool)                                      bReferenceMotionBlur                                        OFFSET(get<bool>, {0x238, 1, 0, 0})
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutputBase
/// Size: 0x0020 (0x000048 - 0x000068)
class UMoviePipelineImageSequenceOutputBase : public UMoviePipelineOutputBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_EXR
/// Size: 0x0008 (0x000068 - 0x000070)
class UMoviePipelineImageSequenceOutput_EXR : public UMoviePipelineImageSequenceOutputBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(EEXRCompressionFormat)                     Compression                                                 OFFSET(get<T>, {0x68, 1, 0, 0})
	DMember(bool)                                      bMultilayer                                                 OFFSET(get<bool>, {0x69, 1, 0, 0})
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_BMP
/// Size: 0x0000 (0x000068 - 0x000068)
class UMoviePipelineImageSequenceOutput_BMP : public UMoviePipelineImageSequenceOutputBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_PNG
/// Size: 0x0008 (0x000068 - 0x000070)
class UMoviePipelineImageSequenceOutput_PNG : public UMoviePipelineImageSequenceOutputBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(bool)                                      bWriteAlpha                                                 OFFSET(get<bool>, {0x68, 1, 0, 0})
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_JPG
/// Size: 0x0000 (0x000068 - 0x000068)
class UMoviePipelineImageSequenceOutput_JPG : public UMoviePipelineImageSequenceOutputBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineWaveOutput
/// Size: 0x0070 (0x000048 - 0x0000B8)
class UMoviePipelineWaveOutput : public UMoviePipelineOutputBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FString)                                   FileNameFormatOverride                                      OFFSET(getStruct<T>, {0x48, 16, 0, 0})
};

/// Enum /Script/MovieRenderPipelineRenderPasses.EEXRCompressionFormat
/// Size: 0x05
enum class EEXRCompressionFormat : uint8_t
{
	EEXRCompressionFormat__None                                                      = 0,
	EEXRCompressionFormat__PIZ                                                       = 1,
	EEXRCompressionFormat__ZIP                                                       = 2,
	EEXRCompressionFormat__DWAA                                                      = 3,
	EEXRCompressionFormat__DWAB                                                      = 4
};

