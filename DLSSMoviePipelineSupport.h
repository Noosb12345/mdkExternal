
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: MovieRenderPipelineCore

/// Class /Script/DLSSMoviePipelineSupport.MoviePipelineDLSSSetting
/// Size: 0x0008 (0x000048 - 0x000050)
class UMoviePipelineDLSSSetting : public UMoviePipelineViewFamilySetting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(EMoviePipelineDLSSQuality)                 DLSSQuality                                                 OFFSET(get<T>, {0x48, 1, 0, 0})
};

/// Enum /Script/DLSSMoviePipelineSupport.EMoviePipelineDLSSQuality
/// Size: 0x06
enum class EMoviePipelineDLSSQuality : uint8_t
{
	EMoviePipelineDLSSQuality__EMoviePipelineDLSSQuality_DLAA                        = 0,
	EMoviePipelineDLSSQuality__EMoviePipelineDLSSQuality_UltraQuality                = 1,
	EMoviePipelineDLSSQuality__EMoviePipelineDLSSQuality_Quality                     = 2,
	EMoviePipelineDLSSQuality__EMoviePipelineDLSSQuality_Balanced                    = 3,
	EMoviePipelineDLSSQuality__EMoviePipelineDLSSQuality_Performance                 = 4,
	EMoviePipelineDLSSQuality__EMoviePipelineDLSSQuality_UltraPerformance            = 5
};

