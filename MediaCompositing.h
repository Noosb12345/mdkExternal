
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: MediaAssets
/// dependency: MovieScene
/// dependency: MovieSceneTracks

/// Class /Script/MediaCompositing.MovieSceneMediaPlayerPropertySection
/// Size: 0x0010 (0x0000F0 - 0x000100)
class UMovieSceneMediaPlayerPropertySection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(class UMediaSource*)                       MediaSource                                                 OFFSET(get<T>, {0xF0, 8, 0, 0})
	DMember(bool)                                      bLoop                                                       OFFSET(get<bool>, {0xF8, 1, 0, 0})
};

/// Class /Script/MediaCompositing.MovieSceneMediaPlayerPropertyTrack
/// Size: 0x0008 (0x0000C8 - 0x0000D0)
class UMovieSceneMediaPlayerPropertyTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/MediaCompositing.MovieSceneMediaSection
/// Size: 0x0060 (0x0000F0 - 0x000150)
class UMovieSceneMediaSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	CMember(class UMediaSource*)                       MediaSource                                                 OFFSET(get<T>, {0xF0, 8, 0, 0})
	DMember(int32_t)                                   MediaSourceProxyIndex                                       OFFSET(get<int32_t>, {0xF8, 4, 0, 0})
	DMember(bool)                                      bLooping                                                    OFFSET(get<bool>, {0xFC, 1, 0, 0})
	SMember(FFrameNumber)                              StartFrameOffset                                            OFFSET(getStruct<T>, {0x100, 4, 0, 0})
	CMember(class UMediaTexture*)                      MediaTexture                                                OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(class UMediaSoundComponent*)               MediaSoundComponent                                         OFFSET(get<T>, {0x110, 8, 0, 0})
	DMember(bool)                                      bUseExternalMediaPlayer                                     OFFSET(get<bool>, {0x118, 1, 0, 0})
	CMember(class UMediaPlayer*)                       ExternalMediaPlayer                                         OFFSET(get<T>, {0x120, 8, 0, 0})
	SMember(FMediaSourceCacheSettings)                 CacheSettings                                               OFFSET(getStruct<T>, {0x128, 8, 0, 0})
	DMember(int32_t)                                   TextureIndex                                                OFFSET(get<int32_t>, {0x130, 4, 0, 0})
	DMember(bool)                                      bHasMediaPlayerProxy                                        OFFSET(get<bool>, {0x134, 1, 0, 0})
	SMember(FMovieSceneObjectBindingID)                MediaSourceProxyBindingID                                   OFFSET(getStruct<T>, {0x138, 24, 0, 0})
};

/// Class /Script/MediaCompositing.MovieSceneMediaTrack
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UMovieSceneMediaTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<class UMovieSceneSection*>)         MediaSections                                               OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Struct /Script/MediaCompositing.MovieSceneMediaPlayerPropertySectionTemplate
/// Size: 0x0010 (0x000038 - 0x000048)
class FMovieSceneMediaPlayerPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class UMediaSource*)                       MediaSource                                                 OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FFrameNumber)                              SectionStartFrame                                           OFFSET(getStruct<T>, {0x40, 4, 0, 0})
	DMember(bool)                                      bLoop                                                       OFFSET(get<bool>, {0x44, 1, 0, 0})
};

/// Struct /Script/MediaCompositing.MovieSceneMediaSectionParams
/// Size: 0x0160 (0x000000 - 0x000160)
class FMovieSceneMediaSectionParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(class UMediaSoundComponent*)               MediaSoundComponent                                         OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UMediaSource*)                       MediaSource                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FMovieSceneObjectBindingID)                MediaSourceProxy                                            OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	DMember(int32_t)                                   MediaSourceProxyIndex                                       OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	CMember(class UMediaTexture*)                      MediaTexture                                                OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UMediaPlayer*)                       MediaPlayer                                                 OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FFrameNumber)                              SectionStartFrame                                           OFFSET(getStruct<T>, {0x40, 4, 0, 0})
	SMember(FFrameNumber)                              SectionEndFrame                                             OFFSET(getStruct<T>, {0x44, 4, 0, 0})
	DMember(bool)                                      bLooping                                                    OFFSET(get<bool>, {0x48, 1, 0, 0})
	SMember(FFrameNumber)                              StartFrameOffset                                            OFFSET(getStruct<T>, {0x4C, 4, 0, 0})
	SMember(FMovieSceneFloatChannel)                   ProxyTextureBlend                                           OFFSET(getStruct<T>, {0x50, 272, 0, 0})
};

/// Struct /Script/MediaCompositing.MovieSceneMediaSectionTemplate
/// Size: 0x0168 (0x000020 - 0x000188)
class FMovieSceneMediaSectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	SMember(FMovieSceneMediaSectionParams)             Params                                                      OFFSET(getStruct<T>, {0x20, 352, 0, 0})
	CMember(class UMovieSceneMediaSection*)            MediaSection                                                OFFSET(get<T>, {0x180, 8, 0, 0})
};

