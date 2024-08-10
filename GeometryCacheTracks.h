
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: GeometryCache
/// dependency: MovieScene

/// Struct /Script/GeometryCacheTracks.MovieSceneGeometryCacheParams
/// Size: 0x0048 (0x000000 - 0x000048)
class FMovieSceneGeometryCacheParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class UGeometryCache*)                     GeometryCacheAsset                                          OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FFrameNumber)                              FirstLoopStartFrameOffset                                   OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FFrameNumber)                              StartFrameOffset                                            OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	SMember(FFrameNumber)                              EndFrameOffset                                              OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(bool)                                      bReverse                                                    OFFSET(get<bool>, {0x18, 1, 1, 0})
	DMember(float)                                     StartOffset                                                 OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     EndOffset                                                   OFFSET(get<float>, {0x20, 4, 0, 0})
	SMember(FSoftObjectPath)                           GeometryCache                                               OFFSET(getStruct<T>, {0x28, 32, 0, 0})
};

/// Class /Script/GeometryCacheTracks.MovieSceneGeometryCacheSection
/// Size: 0x0048 (0x0000F0 - 0x000138)
class UMovieSceneGeometryCacheSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	SMember(FMovieSceneGeometryCacheParams)            Params                                                      OFFSET(getStruct<T>, {0xF0, 72, 0, 0})
};

/// Class /Script/GeometryCacheTracks.MovieSceneGeometryCacheTrack
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UMovieSceneGeometryCacheTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<class UMovieSceneSection*>)         AnimationSections                                           OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Struct /Script/GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplateParameters
/// Size: 0x0008 (0x000048 - 0x000050)
class FMovieSceneGeometryCacheSectionTemplateParameters : public FMovieSceneGeometryCacheParams
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FFrameNumber)                              SectionStartTime                                            OFFSET(getStruct<T>, {0x48, 4, 0, 0})
	SMember(FFrameNumber)                              SectionEndTime                                              OFFSET(getStruct<T>, {0x4C, 4, 0, 0})
};

/// Struct /Script/GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplate
/// Size: 0x0050 (0x000020 - 0x000070)
class FMovieSceneGeometryCacheSectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FMovieSceneGeometryCacheSectionTemplateParameters) Params                                              OFFSET(getStruct<T>, {0x20, 80, 0, 0})
};

