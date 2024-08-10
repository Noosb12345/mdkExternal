
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: MovieRenderPipelineCore

/// Class /Script/FSR3MovieRenderPipeline.FSR3MoviePipelineSettings
/// Size: 0x0008 (0x000048 - 0x000050)
class UFSR3MoviePipelineSettings : public UMoviePipelineViewFamilySetting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(EFSR3MoviePipelineQuality)                 FSR3Quality                                                 OFFSET(get<T>, {0x48, 1, 0, 0})
};

/// Enum /Script/FSR3MovieRenderPipeline.EFSR3MoviePipelineQuality
/// Size: 0x06
enum class EFSR3MoviePipelineQuality : uint8_t
{
	EFSR3MoviePipelineQuality__Unused                                                = 0,
	EFSR3MoviePipelineQuality__Native                                                = 1,
	EFSR3MoviePipelineQuality__Quality                                               = 2,
	EFSR3MoviePipelineQuality__Balanced                                              = 3,
	EFSR3MoviePipelineQuality__Performance                                           = 4,
	EFSR3MoviePipelineQuality__UltraPerformance                                      = 5
};

