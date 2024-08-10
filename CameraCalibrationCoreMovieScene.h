
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CameraCalibrationCore
/// dependency: CoreUObject
/// dependency: MovieScene

/// Class /Script/CameraCalibrationCoreMovieScene.MovieSceneLensComponentSection
/// Size: 0x0058 (0x000108 - 0x000160)
class UMovieSceneLensComponentSection : public UMovieSceneHookSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	DMember(bool)                                      bReapplyNodalOffset                                         OFFSET(get<bool>, {0x108, 1, 0, 0})
	CMember(class ULensFile*)                          OverrideLensFile                                            OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(class ULensFile*)                          CachedLensFile                                              OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(TArray<FMovieSceneFloatChannel>)           DistortionParameterChannels                                 OFFSET(get<T>, {0x120, 16, 0, 0})
	CMember(TArray<FMovieSceneFloatChannel>)           FxFyChannels                                                OFFSET(get<T>, {0x130, 16, 0, 0})
	CMember(TArray<FMovieSceneFloatChannel>)           ImageCenterChannels                                         OFFSET(get<T>, {0x140, 16, 0, 0})
	CMember(class UClass*)                             LensModelClass                                              OFFSET(get<T>, {0x150, 8, 0, 0})
};

/// Class /Script/CameraCalibrationCoreMovieScene.MovieSceneLensComponentTrack
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UMovieSceneLensComponentTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TArray<class UMovieSceneSection*>)         Sections                                                    OFFSET(get<T>, {0x98, 16, 0, 0})
};

