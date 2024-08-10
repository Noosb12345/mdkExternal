
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: LevelSequence
/// dependency: MovieScene
/// dependency: OpenColorIO
/// dependency: UMG

/// Class /Script/MovieRenderPipelineCore.MoviePipelineSetting
/// Size: 0x0020 (0x000028 - 0x000048)
class UMoviePipelineSetting : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<class UMoviePipeline*>)     CachedPipeline                                              OFFSET(get<T>, {0x28, 8, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x30, 1, 0, 0})


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineSetting.SetIsEnabled
	// void SetIsEnabled(bool bInEnabled);                                                                                      // [0x15ff360] Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineSetting.IsEnabled
	// bool IsEnabled();                                                                                                        // [0x15ff450] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineSetting.BuildNewProcessCommandLineArgs
	// void BuildNewProcessCommandLineArgs(TArray<FString>& InOutUnrealURLParams, TArray<FString>& InOutCommandLineArgs, TArray<FString>& InOutDeviceProfileCvars, TArray<FString>& InOutExecCmds); // [0x15ff480] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineSetting.BuildNewProcessCommandLine
	// void BuildNewProcessCommandLine(FString& InOutUnrealURLParams, FString& InOutCommandLineArgs);                           // [0x15ff870] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineCameraSetting
/// Size: 0x0010 (0x000048 - 0x000058)
class UMoviePipelineCameraSetting : public UMoviePipelineSetting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(EMoviePipelineShutterTiming)               ShutterTiming                                               OFFSET(get<T>, {0x48, 1, 0, 0})
	DMember(float)                                     OverscanPercentage                                          OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(bool)                                      bRenderAllCameras                                           OFFSET(get<bool>, {0x50, 1, 0, 0})
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineGameMode
/// Size: 0x0000 (0x0002E8 - 0x0002E8)
class AMoviePipelineGameMode : public AGameModeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineHighResSetting
/// Size: 0x0020 (0x000048 - 0x000068)
class UMoviePipelineHighResSetting : public UMoviePipelineSetting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(int32_t)                                   TileCount                                                   OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	DMember(float)                                     TextureSharpnessBias                                        OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     OverlapRatio                                                OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(bool)                                      bOverrideSubSurfaceScattering                               OFFSET(get<bool>, {0x54, 1, 0, 0})
	DMember(int32_t)                                   BurleySampleCount                                           OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	DMember(bool)                                      bAllocateHistoryPerTile                                     OFFSET(get<bool>, {0x5C, 1, 0, 0})
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineInProcessExecutorSettings
/// Size: 0x0030 (0x000038 - 0x000068)
class UMoviePipelineInProcessExecutorSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(bool)                                      bCloseEditor                                                OFFSET(get<bool>, {0x38, 1, 0, 0})
	SMember(FString)                                   AdditionalCommandLineArguments                              OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FString)                                   InheritedCommandLineArguments                               OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	DMember(int32_t)                                   InitialDelayFrameCount                                      OFFSET(get<int32_t>, {0x60, 4, 0, 0})
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineOutputBase
/// Size: 0x0000 (0x000048 - 0x000048)
class UMoviePipelineOutputBase : public UMoviePipelineSetting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase
/// Size: 0x0020 (0x000048 - 0x000068)
class UMoviePipelineSetting_BlueprintBase : public UMoviePipelineSetting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FText)                                     CategoryText                                                OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	DMember(bool)                                      bIsValidOnPrimary                                           OFFSET(get<bool>, {0x60, 1, 0, 0})
	DMember(bool)                                      bIsValidOnShots                                             OFFSET(get<bool>, {0x61, 1, 0, 0})
	DMember(bool)                                      bCanBeDisabled                                              OFFSET(get<bool>, {0x62, 1, 0, 0})


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.ReceiveTeardownForPipelineImpl
	// void ReceiveTeardownForPipelineImpl(class UMoviePipeline* InPipeline);                                                   // [0x3a334c0] Event|Public|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.ReceiveSetupForPipelineImpl
	// void ReceiveSetupForPipelineImpl(class UMoviePipeline* InPipeline);                                                      // [0x3a334c0] Event|Public|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.ReceiveGetFormatArguments
	// FMoviePipelineFormatArgs ReceiveGetFormatArguments(FMoviePipelineFormatArgs& InOutFormatArgs);                           // [0x15d1630] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.OnEngineTickBeginFrame
	// void OnEngineTickBeginFrame();                                                                                           // [0x3a334c0] Event|Public|BlueprintEvent 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineViewFamilySetting
/// Size: 0x0000 (0x000048 - 0x000048)
class UMoviePipelineViewFamilySetting : public UMoviePipelineSetting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/MovieRenderPipelineCore.MovieRenderDebugWidget
/// Size: 0x0000 (0x000250 - 0x000250)
class UMovieRenderDebugWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MovieRenderDebugWidget.OnInitializedForPipeline
	// void OnInitializedForPipeline(class UMoviePipeline* ForPipeline);                                                        // [0x3a334c0] Event|Public|BlueprintEvent 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipeline
/// Size: 0x03B8 (0x000028 - 0x0003E0)
class UMoviePipeline : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	SMember(FMulticastInlineDelegate)                  OnMoviePipelineFinishedDelegate                             OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMoviePipelineWorkFinishedDelegate                         OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMoviePipelineShotWorkFinishedDelegate                     OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	CMember(class UMoviePipelineCustomTimeStep*)       CustomTimeStep                                              OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(class UEngineCustomTimeStep*)              CachedPrevCustomTimeStep                                    OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(class ULevelSequence*)                     TargetSequence                                              OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(class ALevelSequenceActor*)                LevelSequenceActor                                          OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(class UMovieRenderDebugWidget*)            DebugWidget                                                 OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(class UTexture*)                           PreviewTexture                                              OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(class UClass*)                             DebugWidgetClass                                            OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UMoviePipelineExecutorJob*)          CurrentJob                                                  OFFSET(get<T>, {0x2F8, 8, 0, 0})


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.Shutdown
	// void Shutdown(bool bError);                                                                                              // [0x15d2ca0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.SetInitializationTime
	// void SetInitializationTime(FDateTime& InDateTime);                                                                       // [0x15d2b80] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.RequestShutdown
	// void RequestShutdown(bool bIsError);                                                                                     // [0x15d2d90] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.OnMoviePipelineFinishedImpl
	// void OnMoviePipelineFinishedImpl();                                                                                      // [0x13bccd0] Native|Protected|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.IsShutdownRequested
	// bool IsShutdownRequested();                                                                                              // [0x15d2c70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.Initialize
	// void Initialize(class UMoviePipelineExecutorJob* InJob);                                                                 // [0x15d2e90] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.GetPreviewTexture
	// class UTexture* GetPreviewTexture();                                                                                     // [0x13f86c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.GetPipelinePrimaryConfig
	// class UMoviePipelinePrimaryConfig* GetPipelinePrimaryConfig();                                                           // [0x15d2b50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.GetPipelineMasterConfig
	// class UMoviePipelinePrimaryConfig* GetPipelineMasterConfig();                                                            // [0x15d2b50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.GetInitializationTime
	// FDateTime GetInitializationTime();                                                                                       // [0x13c3350] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.GetCurrentJob
	// class UMoviePipelineExecutorJob* GetCurrentJob();                                                                        // [0x15d2b30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineCustomTimeStep
/// Size: 0x0010 (0x000028 - 0x000038)
class UMoviePipelineCustomTimeStep : public UEngineCustomTimeStep
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineAntiAliasingSetting
/// Size: 0x0020 (0x000048 - 0x000068)
class UMoviePipelineAntiAliasingSetting : public UMoviePipelineSetting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(int32_t)                                   SpatialSampleCount                                          OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	DMember(int32_t)                                   TemporalSampleCount                                         OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
	DMember(bool)                                      bOverrideAntiAliasing                                       OFFSET(get<bool>, {0x50, 1, 0, 0})
	CMember(TEnumAsByte<EAntiAliasingMethod>)          AntiAliasingMethod                                          OFFSET(get<T>, {0x51, 1, 0, 0})
	DMember(int32_t)                                   RenderWarmUpCount                                           OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	DMember(bool)                                      bUseCameraCutForWarmUp                                      OFFSET(get<bool>, {0x58, 1, 0, 0})
	DMember(int32_t)                                   EngineWarmUpCount                                           OFFSET(get<int32_t>, {0x5C, 4, 0, 0})
	DMember(bool)                                      bRenderWarmUpFrames                                         OFFSET(get<bool>, {0x60, 1, 0, 0})
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMoviePipelineBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.UpdateJobShotListFromSequence
	// void UpdateJobShotListFromSequence(class ULevelSequence* InSequence, class UMoviePipelineExecutorJob* InJob, bool& bShotsChanged); // [0x15dcea0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.ResolveVersionNumber
	// int32_t ResolveVersionNumber(FMoviePipelineFilenameResolveParams InParams, bool bGetNextVersion);                        // [0x15dcbb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.ResolveFilenameFormatArguments
	// void ResolveFilenameFormatArguments(FString InFormatString, FMoviePipelineFilenameResolveParams& InParams, FString& OutFinalPath, FMoviePipelineFormatArgs& OutMergedFormatArgs); // [0x15df2a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.LoadManifestFileFromString
	// class UMoviePipelineQueue* LoadManifestFileFromString(FString InManifestFilePath);                                       // [0x15dd0b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetRootTimecode
	// FTimecode GetRootTimecode(class UMoviePipeline* InMoviePipeline);                                                        // [0x15ddc70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetRootFrameNumber
	// FFrameNumber GetRootFrameNumber(class UMoviePipeline* InMoviePipeline);                                                  // [0x15dd9d0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetPipelineState
	// EMovieRenderPipelineState GetPipelineState(class UMoviePipeline* InPipeline);                                            // [0x15dee60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetOverallSegmentCounts
	// void GetOverallSegmentCounts(class UMoviePipeline* InMoviePipeline, int32_t& OutCurrentIndex, int32_t& OutTotalCount);   // [0x15de0d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetOverallOutputFrames
	// void GetOverallOutputFrames(class UMoviePipeline* InMoviePipeline, int32_t& OutCurrentIndex, int32_t& OutTotalCount);    // [0x15de700] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMoviePipelineEngineChangelistLabel
	// FText GetMoviePipelineEngineChangelistLabel(class UMoviePipeline* InMoviePipeline);                                      // [0x15dbda0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMasterTimecode
	// FTimecode GetMasterTimecode(class UMoviePipeline* InMoviePipeline);                                                      // [0x15ddb70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMasterFrameNumber
	// FFrameNumber GetMasterFrameNumber(class UMoviePipeline* InMoviePipeline);                                                // [0x15dd9d0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMapPackageName
	// FString GetMapPackageName(class UMoviePipelineExecutorJob* InJob);                                                       // [0x15dd1b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobName
	// FText GetJobName(class UMoviePipeline* InMoviePipeline);                                                                 // [0x15debd0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobInitializationTime
	// FDateTime GetJobInitializationTime(class UMoviePipeline* InMoviePipeline);                                               // [0x15def60] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobAuthor
	// FText GetJobAuthor(class UMoviePipeline* InMoviePipeline);                                                               // [0x15de970] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetEstimatedTimeRemaining
	// bool GetEstimatedTimeRemaining(class UMoviePipeline* InPipeline, FTimespan& OutEstimate);                                // [0x15df060] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetEffectiveOutputResolution
	// FIntPoint GetEffectiveOutputResolution(class UMoviePipelinePrimaryConfig* InPrimaryConfig, class UMoviePipelineExecutorShot* InPipelineExecutorShot); // [0x15dc640] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentShotTimecode
	// FTimecode GetCurrentShotTimecode(class UMoviePipeline* InMoviePipeline);                                                 // [0x15dd8c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentShotFrameNumber
	// FFrameNumber GetCurrentShotFrameNumber(class UMoviePipeline* InMoviePipeline);                                           // [0x15dd740] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSequence
	// class ULevelSequence* GetCurrentSequence(class UMoviePipeline* InMoviePipeline);                                         // [0x15dbff0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentWorkMetrics
	// FMoviePipelineSegmentWorkMetrics GetCurrentSegmentWorkMetrics(class UMoviePipeline* InMoviePipeline);                    // [0x15ddee0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentState
	// EMovieRenderShotState GetCurrentSegmentState(class UMoviePipeline* InMoviePipeline);                                     // [0x15ded40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentName
	// void GetCurrentSegmentName(class UMoviePipeline* InMoviePipeline, FText& OutOuterName, FText& OutInnerName);             // [0x15de300] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentFocusDistance
	// float GetCurrentFocusDistance(class UMoviePipeline* InMoviePipeline);                                                    // [0x15dd5d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentFocalLength
	// float GetCurrentFocalLength(class UMoviePipeline* InMoviePipeline);                                                      // [0x15dd460] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentExecutorShot
	// class UMoviePipelineExecutorShot* GetCurrentExecutorShot(class UMoviePipeline* InMoviePipeline);                         // [0x15dbee0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentAperture
	// float GetCurrentAperture(class UMoviePipeline* InMoviePipeline);                                                         // [0x15dd2f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCompletionPercentage
	// float GetCompletionPercentage(class UMoviePipeline* InPipeline);                                                         // [0x15ddd80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.FindOrGetDefaultSettingForShot
	// class UMoviePipelineSetting* FindOrGetDefaultSettingForShot(class UClass* InSettingType, class UMoviePipelinePrimaryConfig* InPrimaryConfig, class UMoviePipelineExecutorShot* InShot); // [0x15dc0f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.DuplicateSequence
	// class UMovieSceneSequence* DuplicateSequence(class UObject* Outer, class UMovieSceneSequence* InSequence);               // [0x15df760] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineColorSetting
/// Size: 0x00A8 (0x000048 - 0x0000F0)
class UMoviePipelineColorSetting : public UMoviePipelineSetting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FOpenColorIODisplayConfiguration)          OCIOConfiguration                                           OFFSET(getStruct<T>, {0x48, 160, 0, 0})
	DMember(bool)                                      bDisableToneCurve                                           OFFSET(get<bool>, {0xE8, 1, 0, 0})
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineCommandLineEncoder
/// Size: 0x0040 (0x000048 - 0x000088)
class UMoviePipelineCommandLineEncoder : public UMoviePipelineSetting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FString)                                   FileNameFormatOverride                                      OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	CMember(EMoviePipelineEncodeQuality)               Quality                                                     OFFSET(get<T>, {0x58, 1, 0, 0})
	SMember(FString)                                   AdditionalCommandLineArgs                                   OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	DMember(bool)                                      bDeleteSourceFiles                                          OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(bool)                                      bSkipEncodeOnRenderCanceled                                 OFFSET(get<bool>, {0x71, 1, 0, 0})
	DMember(bool)                                      bWriteEachFrameDuration                                     OFFSET(get<bool>, {0x72, 1, 0, 0})
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineCommandLineEncoderSettings
/// Size: 0x00C8 (0x000038 - 0x000100)
class UMoviePipelineCommandLineEncoderSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FString)                                   ExecutablePath                                              OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FText)                                     CodecHelpText                                               OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	SMember(FString)                                   VideoCodec                                                  OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FString)                                   AudioCodec                                                  OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	SMember(FString)                                   OutputFileExtension                                         OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	SMember(FString)                                   CommandLineFormat                                           OFFSET(getStruct<T>, {0x90, 16, 0, 0})
	SMember(FString)                                   VideoInputStringFormat                                      OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FString)                                   AudioInputStringFormat                                      OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FString)                                   EncodeSettings_Low                                          OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	SMember(FString)                                   EncodeSettings_Med                                          OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
	SMember(FString)                                   EncodeSettings_High                                         OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	SMember(FString)                                   EncodeSettings_Epic                                         OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineConfigBase
/// Size: 0x0058 (0x000028 - 0x000080)
class UMoviePipelineConfigBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FString)                                   DisplayName                                                 OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(TArray<class UMoviePipelineSetting*>)      Settings                                                    OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TWeakObjectPtr<class UMoviePipelineConfigBase*>) ConfigOrigin                                          OFFSET(get<T>, {0x48, 8, 0, 0})


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.SetConfigOrigin
	// void SetConfigOrigin(class UMoviePipelineConfigBase* InConfig);                                                          // [0x15eb5f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.RemoveSetting
	// void RemoveSetting(class UMoviePipelineSetting* InSetting);                                                              // [0x15eb7e0] Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.GetUserSettings
	// TArray<UMoviePipelineSetting*> GetUserSettings();                                                                        // [0x15eb760] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.GetConfigOrigin
	// class UMoviePipelineConfigBase* GetConfigOrigin();                                                                       // [0x15eb6e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingsByClass
	// TArray<UMoviePipelineSetting*> FindSettingsByClass(class UClass* InClass, bool bIncludeDisabledSettings, bool bExactMatch); // [0x15eb260] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingByClass
	// class UMoviePipelineSetting* FindSettingByClass(class UClass* InClass, bool bIncludeDisabledSettings, bool bExactMatch); // [0x15eae80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.FindOrAddSettingByClass
	// class UMoviePipelineSetting* FindOrAddSettingByClass(class UClass* InClass, bool bIncludeDisabledSettings, bool bExactMatch); // [0x15eac60] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.CopyFrom
	// void CopyFrom(class UMoviePipelineConfigBase* InConfig);                                                                 // [0x14af610] Native|Public|BlueprintCallable 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineDebugSettings
/// Size: 0x0010 (0x000048 - 0x000058)
class UMoviePipelineDebugSettings : public UMoviePipelineSetting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(bool)                                      bWriteAllSamples                                            OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(bool)                                      bCaptureFramesWithRenderDoc                                 OFFSET(get<bool>, {0x49, 1, 0, 0})
	DMember(int32_t)                                   CaptureFrame                                                OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
	DMember(bool)                                      bCaptureUnrealInsightsTrace                                 OFFSET(get<bool>, {0x50, 1, 0, 0})
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase
/// Size: 0x00F0 (0x000028 - 0x000118)
class UMoviePipelineExecutorBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FMulticastInlineDelegate)                  OnExecutorFinishedDelegate                                  OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnExecutorErroredDelegate                                   OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  SocketMessageRecievedDelegate                               OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  HTTPResponseRecievedDelegate                                OFFSET(getStruct<T>, {0x90, 16, 0, 0})
	CMember(class UClass*)                             DebugWidgetClass                                            OFFSET(get<T>, {0xA0, 8, 0, 0})
	SMember(FString)                                   UserData                                                    OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	CMember(class UClass*)                             TargetPipelineClass                                         OFFSET(get<T>, {0xC8, 8, 0, 0})


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.SetStatusProgress
	// void SetStatusProgress(float InProgress);                                                                                // [0x15ecf50] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.SetStatusMessage
	// void SetStatusMessage(FString InStatus);                                                                                 // [0x15ed0c0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.SetMoviePipelineClass
	// void SetMoviePipelineClass(class UClass* InPipelineClass);                                                               // [0x15ece20] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.SendSocketMessage
	// bool SendSocketMessage(FString InMessage);                                                                               // [0x15ec710] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.SendHTTPRequest
	// int32_t SendHTTPRequest(FString InURL, FString InVerb, FString InMessage, TMap<FString, FString>& InHeaders);            // [0x15ec370] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.OnExecutorFinishedImpl
	// void OnExecutorFinishedImpl();                                                                                           // [0x13bccd0] Native|Protected|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.OnExecutorErroredImpl
	// void OnExecutorErroredImpl(class UMoviePipeline* ErroredPipeline, bool bFatal, FText ErrorReason);                       // [0x15ecb60] Native|Protected|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.OnBeginFrame
	// void OnBeginFrame();                                                                                                     // [0x15ed1c0] Native|Event|Public|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.IsSocketConnected
	// bool IsSocketConnected();                                                                                                // [0x15ec6c0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.IsRendering
	// bool IsRendering();                                                                                                      // [0x15ed1e0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.GetStatusProgress
	// float GetStatusProgress();                                                                                               // [0x14ba8b0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.GetStatusMessage
	// FString GetStatusMessage();                                                                                              // [0x15ed040] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.Execute
	// void Execute(class UMoviePipelineQueue* InPipelineQueue);                                                                // [0x15ed210] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.DisconnectSocket
	// void DisconnectSocket();                                                                                                 // [0x15ec960] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.ConnectSocket
	// bool ConnectSocket(FString InHostName, int32_t InPort);                                                                  // [0x15ec9a0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.CancelCurrentJob
	// void CancelCurrentJob();                                                                                                 // [0x15ecf30] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.CancelAllJobs
	// void CancelAllJobs();                                                                                                    // [0x15ecf10] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineFCPXMLExporter
/// Size: 0x0038 (0x000048 - 0x000080)
class UMoviePipelineFCPXMLExporter : public UMoviePipelineOutputBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FString)                                   FileNameFormatOverride                                      OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FCPXMLExportDataSource)                    DataSource                                                  OFFSET(getStruct<T>, {0x60, 1, 0, 0})
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineGameOverrideSetting
/// Size: 0x00F8 (0x000048 - 0x000140)
class UMoviePipelineGameOverrideSetting : public UMoviePipelineSetting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(class UClass*)                             GameModeOverride                                            OFFSET(get<T>, {0x48, 8, 0, 0})
	DMember(bool)                                      bCinematicQualitySettings                                   OFFSET(get<bool>, {0x50, 1, 0, 0})
	CMember(EMoviePipelineTextureStreamingMethod)      TextureStreaming                                            OFFSET(get<T>, {0x51, 1, 0, 0})
	DMember(bool)                                      bUseLODZero                                                 OFFSET(get<bool>, {0x52, 1, 0, 0})
	DMember(bool)                                      bDisableHLODs                                               OFFSET(get<bool>, {0x53, 1, 0, 0})
	DMember(bool)                                      bUseHighQualityShadows                                      OFFSET(get<bool>, {0x54, 1, 0, 0})
	DMember(int32_t)                                   ShadowDistanceScale                                         OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	DMember(float)                                     ShadowRadiusThreshold                                       OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(bool)                                      bOverrideViewDistanceScale                                  OFFSET(get<bool>, {0x60, 1, 0, 0})
	DMember(int32_t)                                   ViewDistanceScale                                           OFFSET(get<int32_t>, {0x64, 4, 0, 0})
	DMember(bool)                                      bFlushGrassStreaming                                        OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(bool)                                      bFlushStreamingManagers                                     OFFSET(get<bool>, {0x69, 1, 0, 0})
	DMember(bool)                                      bOverrideVirtualTextureFeedbackFactor                       OFFSET(get<bool>, {0x6A, 1, 0, 0})
	DMember(int32_t)                                   VirtualTextureFeedbackFactor                                OFFSET(get<int32_t>, {0x6C, 4, 0, 0})
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineLinearExecutorBase
/// Size: 0x0028 (0x000118 - 0x000140)
class UMoviePipelineLinearExecutorBase : public UMoviePipelineExecutorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(class UMoviePipelineQueue*)                Queue                                                       OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(class UMoviePipeline*)                     ActiveMoviePipeline                                         OFFSET(get<T>, {0x120, 8, 0, 0})
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineInProcessExecutor
/// Size: 0x0050 (0x000140 - 0x000190)
class UMoviePipelineInProcessExecutor : public UMoviePipelineLinearExecutorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	DMember(bool)                                      bUseCurrentLevel                                            OFFSET(get<bool>, {0x140, 1, 0, 0})
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineOutputSetting
/// Size: 0x0068 (0x000048 - 0x0000B0)
class UMoviePipelineOutputSetting : public UMoviePipelineSetting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FDirectoryPath)                            OutputDirectory                                             OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FString)                                   FilenameFormat                                              OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FIntPoint)                                 OutputResolution                                            OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	DMember(bool)                                      bUseCustomFrameRate                                         OFFSET(get<bool>, {0x70, 1, 0, 0})
	SMember(FFrameRate)                                OutputFrameRate                                             OFFSET(getStruct<T>, {0x74, 8, 0, 0})
	DMember(bool)                                      bOverrideExistingOutput                                     OFFSET(get<bool>, {0x80, 1, 0, 0})
	DMember(int32_t)                                   HandleFrameCount                                            OFFSET(get<int32_t>, {0x84, 4, 0, 0})
	DMember(int32_t)                                   OutputFrameStep                                             OFFSET(get<int32_t>, {0x88, 4, 0, 0})
	DMember(bool)                                      bUseCustomPlaybackRange                                     OFFSET(get<bool>, {0x8C, 1, 0, 0})
	DMember(int32_t)                                   CustomStartFrame                                            OFFSET(get<int32_t>, {0x90, 4, 0, 0})
	DMember(int32_t)                                   CustomEndFrame                                              OFFSET(get<int32_t>, {0x94, 4, 0, 0})
	DMember(int32_t)                                   VersionNumber                                               OFFSET(get<int32_t>, {0x98, 4, 0, 0})
	DMember(bool)                                      bAutoVersion                                                OFFSET(get<bool>, {0x9C, 1, 0, 0})
	DMember(int32_t)                                   ZeroPadFrameNumbers                                         OFFSET(get<int32_t>, {0xA0, 4, 0, 0})
	DMember(int32_t)                                   FrameNumberOffset                                           OFFSET(get<int32_t>, {0xA4, 4, 0, 0})
	DMember(bool)                                      bFlushDiskWritesPerShot                                     OFFSET(get<bool>, {0xA8, 1, 0, 0})
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelinePrimaryConfig
/// Size: 0x0068 (0x000080 - 0x0000E8)
class UMoviePipelinePrimaryConfig : public UMoviePipelineConfigBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(TMap<FString, class UMoviePipelineShotConfig*>) PerShotConfigMapping                                   OFFSET(get<T>, {0x80, 80, 0, 0})
	CMember(class UMoviePipelineOutputSetting*)        OutputSetting                                               OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(TArray<class UMoviePipelineSetting*>)      TransientSettings                                           OFFSET(get<T>, {0xD8, 16, 0, 0})


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelinePrimaryConfig.InitializeTransientSettings
	// void InitializeTransientSettings();                                                                                      // [0x15f73c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelinePrimaryConfig.GetTransientSettings
	// TArray<UMoviePipelineSetting*> GetTransientSettings();                                                                   // [0x15f7300] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelinePrimaryConfig.GetEffectiveFrameRate
	// FFrameRate GetEffectiveFrameRate(class ULevelSequence* InSequence);                                                      // [0x15f6fd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelinePrimaryConfig.GetAllSettings
	// TArray<UMoviePipelineSetting*> GetAllSettings(bool bIncludeDisabledSettings, bool bIncludeTransientSettings);            // [0x15f7100] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelinePythonHostExecutor
/// Size: 0x0018 (0x000118 - 0x000130)
class UMoviePipelinePythonHostExecutor : public UMoviePipelineExecutorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(class UClass*)                             ExecutorClass                                               OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(class UMoviePipelineQueue*)                PipelineQueue                                               OFFSET(get<T>, {0x120, 8, 0, 0})
	CMember(class UWorld*)                             LastLoadedWorld                                             OFFSET(get<T>, {0x128, 8, 0, 0})


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.OnMapLoad
	// void OnMapLoad(class UWorld* InWorld);                                                                                   // [0x15f8df0] Native|Event|Public|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.GetLastLoadedWorld
	// class UWorld* GetLastLoadedWorld();                                                                                      // [0x15f8dd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.ExecuteDelayed
	// void ExecuteDelayed(class UMoviePipelineQueue* InPipelineQueue);                                                         // [0x15f8ee0] Native|Event|Public|BlueprintEvent 
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelineSidecarCamera
/// Size: 0x0028 (0x000000 - 0x000028)
class FMoviePipelineSidecarCamera : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGuid)                                     BindingId                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot
/// Size: 0x0130 (0x000028 - 0x000158)
class UMoviePipelineExecutorShot : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FString)                                   OuterName                                                   OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   InnerName                                                   OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	CMember(TArray<FMoviePipelineSidecarCamera>)       SidecarCameras                                              OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(float)                                     Progress                                                    OFFSET(get<float>, {0x108, 4, 0, 0})
	SMember(FString)                                   StatusMessage                                               OFFSET(getStruct<T>, {0x110, 16, 0, 0})
	CMember(class UMoviePipelineShotConfig*)           ShotOverrideConfig                                          OFFSET(get<T>, {0x120, 8, 0, 0})
	CMember(TWeakObjectPtr<class UMoviePipelineShotConfig*>) ShotOverridePresetOrigin                              OFFSET(get<T>, {0x128, 8, 0, 0})


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.ShouldRender
	// bool ShouldRender();                                                                                                     // [0x13bce30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.SetStatusProgress
	// void SetStatusProgress(float InProgress);                                                                                // [0x15f9970] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.SetStatusMessage
	// void SetStatusMessage(FString InStatus);                                                                                 // [0x15f9a60] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverridePresetOrigin
	// void SetShotOverridePresetOrigin(class UMoviePipelineShotConfig* InPreset);                                              // [0x15f9550] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverrideConfiguration
	// void SetShotOverrideConfiguration(class UMoviePipelineShotConfig* InPreset);                                             // [0x15f9710] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.GetStatusProgress
	// float GetStatusProgress();                                                                                               // [0x15f9930] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.GetStatusMessage
	// FString GetStatusMessage();                                                                                              // [0x15eb760] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverridePresetOrigin
	// class UMoviePipelineShotConfig* GetShotOverridePresetOrigin();                                                           // [0x15f94f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverrideConfiguration
	// class UMoviePipelineShotConfig* GetShotOverrideConfiguration();                                                          // [0x15f9530] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.GetCameraName
	// FString GetCameraName(int32_t InCameraIndex);                                                                            // [0x15f9350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.AllocateNewShotOverrideConfig
	// class UMoviePipelineShotConfig* AllocateNewShotOverrideConfig(class UClass* InConfigType);                               // [0x15f9840] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob
/// Size: 0x00E8 (0x000028 - 0x000110)
class UMoviePipelineExecutorJob : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FString)                                   JobName                                                     OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FSoftObjectPath)                           Sequence                                                    OFFSET(getStruct<T>, {0x38, 32, 0, 0})
	SMember(FSoftObjectPath)                           Map                                                         OFFSET(getStruct<T>, {0x58, 32, 0, 0})
	SMember(FString)                                   Author                                                      OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FString)                                   Comment                                                     OFFSET(getStruct<T>, {0x88, 16, 0, 0})
	CMember(TArray<class UMoviePipelineExecutorShot*>) ShotInfo                                                    OFFSET(get<T>, {0x98, 16, 0, 0})
	SMember(FString)                                   UserData                                                    OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FString)                                   StatusMessage                                               OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	DMember(float)                                     StatusProgress                                              OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(bool)                                      bIsConsumed                                                 OFFSET(get<bool>, {0xCC, 1, 0, 0})
	CMember(class UMoviePipelinePrimaryConfig*)        Configuration                                               OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(TWeakObjectPtr<class UMoviePipelinePrimaryConfig*>) PresetOrigin                                       OFFSET(get<T>, {0xD8, 8, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x108, 1, 0, 0})


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusProgress
	// void SetStatusProgress(float InProgress);                                                                                // [0x15f9970] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusMessage
	// void SetStatusMessage(FString InStatus);                                                                                 // [0x15f9a60] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetSequence
	// void SetSequence(FSoftObjectPath InSequence);                                                                            // [0x15f9de0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetPresetOrigin
	// void SetPresetOrigin(class UMoviePipelinePrimaryConfig* InPreset);                                                       // [0x15fa0f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetIsEnabled
	// void SetIsEnabled(bool bInEnabled);                                                                                      // [0x15fa290] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConsumed
	// void SetConsumed(bool bInConsumed);                                                                                      // [0x15fa3b0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConfiguration
	// void SetConfiguration(class UMoviePipelinePrimaryConfig* InPreset);                                                      // [0x15f9f40] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.OnDuplicated
	// void OnDuplicated();                                                                                                     // [0x15fa240] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.IsEnabled
	// bool IsEnabled();                                                                                                        // [0x15fa260] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.IsConsumed
	// bool IsConsumed();                                                                                                       // [0x15fa380] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusProgress
	// float GetStatusProgress();                                                                                               // [0x15fa4a0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusMessage
	// FString GetStatusMessage();                                                                                              // [0x15fa4e0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.GetPresetOrigin
	// class UMoviePipelinePrimaryConfig* GetPresetOrigin();                                                                    // [0x15fa070] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.GetConfiguration
	// class UMoviePipelinePrimaryConfig* GetConfiguration();                                                                   // [0x15fa050] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineQueue
/// Size: 0x0048 (0x000028 - 0x000070)
class UMoviePipelineQueue : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<class UMoviePipelineExecutorJob*>)  Jobs                                                        OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TWeakObjectPtr<class UMoviePipelineQueue*>) QueueOrigin                                                OFFSET(get<T>, {0x38, 8, 0, 0})


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.SetQueueOrigin
	// void SetQueueOrigin(class UMoviePipelineQueue* InConfig);                                                                // [0x15fadc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.SetJobIndex
	// void SetJobIndex(class UMoviePipelineExecutorJob* InJob, int32_t Index);                                                 // [0x15fa9b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.GetQueueOrigin
	// class UMoviePipelineQueue* GetQueueOrigin();                                                                             // [0x15faeb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.GetJobs
	// TArray<UMoviePipelineExecutorJob*> GetJobs();                                                                            // [0x15faf30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.DuplicateJob
	// class UMoviePipelineExecutorJob* DuplicateJob(class UMoviePipelineExecutorJob* InJob);                                   // [0x15faff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.DeleteJob
	// void DeleteJob(class UMoviePipelineExecutorJob* InJob);                                                                  // [0x15fb200] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.DeleteAllJobs
	// void DeleteAllJobs();                                                                                                    // [0x15fb1c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.CopyFrom
	// void CopyFrom(class UMoviePipelineQueue* InQueue);                                                                       // [0x15fac20] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.AllocateNewJob
	// class UMoviePipelineExecutorJob* AllocateNewJob(class UClass* InJobType);                                                // [0x15fb300] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem
/// Size: 0x0060 (0x000030 - 0x000090)
class UMoviePipelineQueueEngineSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FMulticastInlineDelegate)                  OnRenderFinished                                            OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	CMember(class UMoviePipelineExecutorBase*)         ActiveExecutor                                              OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class UMoviePipelineQueue*)                CurrentQueue                                                OFFSET(get<T>, {0x48, 8, 0, 0})


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.SetConfiguration
	// void SetConfiguration(class UClass* InProgressWidgetClass, bool bRenderPlayerViewport);                                  // [0x15fc260] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutorInstance
	// void RenderQueueWithExecutorInstance(class UMoviePipelineExecutorBase* InExecutor);                                      // [0x15fc420] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutor
	// class UMoviePipelineExecutorBase* RenderQueueWithExecutor(class UClass* InExecutorType);                                 // [0x15fc5c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderJob
	// void RenderJob(class UMoviePipelineExecutorJob* InJob);                                                                  // [0x15fbea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.IsRendering
	// bool IsRendering();                                                                                                      // [0x15fc3f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetQueue
	// class UMoviePipelineQueue* GetQueue();                                                                                   // [0x15fc760] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetActiveExecutor
	// class UMoviePipelineExecutorBase* GetActiveExecutor();                                                                   // [0x15fc740] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.AllocateJob
	// class UMoviePipelineExecutorJob* AllocateJob(class ULevelSequence* InSequence);                                          // [0x15fbf90] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineRenderPass
/// Size: 0x0000 (0x000048 - 0x000048)
class UMoviePipelineRenderPass : public UMoviePipelineSetting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineShotConfig
/// Size: 0x0000 (0x000080 - 0x000080)
class UMoviePipelineShotConfig : public UMoviePipelineConfigBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineVideoOutputBase
/// Size: 0x0048 (0x000048 - 0x000090)
class UMoviePipelineVideoOutputBase : public UMoviePipelineOutputBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelinePassIdentifier
/// Size: 0x0020 (0x000000 - 0x000020)
class FMoviePipelinePassIdentifier : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   CameraName                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelineRenderPassOutputData
/// Size: 0x0010 (0x000000 - 0x000010)
class FMoviePipelineRenderPassOutputData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FString>)                           FilePaths                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelineShotOutputData
/// Size: 0x0058 (0x000000 - 0x000058)
class FMoviePipelineShotOutputData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TWeakObjectPtr<class UMoviePipelineExecutorShot*>) Shot                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TMap<FMoviePipelinePassIdentifier, FMoviePipelineRenderPassOutputData>) RenderPassData                 OFFSET(get<T>, {0x8, 80, 0, 0})
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelineOutputData
/// Size: 0x0028 (0x000000 - 0x000028)
class FMoviePipelineOutputData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UMoviePipeline*)                     Pipeline                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UMoviePipelineExecutorJob*)          Job                                                         OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bSuccess                                                    OFFSET(get<bool>, {0x10, 1, 0, 0})
	CMember(TArray<FMoviePipelineShotOutputData>)      ShotData                                                    OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelineSegmentWorkMetrics
/// Size: 0x0028 (0x000000 - 0x000028)
class FMoviePipelineSegmentWorkMetrics : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   SegmentName                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   OutputFrameIndex                                            OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   TotalOutputFrameCount                                       OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   OutputSubSampleIndex                                        OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   TotalSubSampleCount                                         OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   EngineWarmUpFrameIndex                                      OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   TotalEngineWarmUpFrameCount                                 OFFSET(get<int32_t>, {0x24, 4, 0, 0})
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelineCameraCutInfo
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FMoviePipelineCameraCutInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelineFormatArgs
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FMoviePipelineFormatArgs : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TMap<FString, FString>)                    FilenameArguments                                           OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TMap<FString, FString>)                    FileMetadata                                                OFFSET(get<T>, {0x50, 80, 0, 0})
	CMember(class UMoviePipelineExecutorJob*)          InJob                                                       OFFSET(get<T>, {0xA0, 8, 0, 0})
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelineFilenameResolveParams
/// Size: 0x0118 (0x000000 - 0x000118)
class FMoviePipelineFilenameResolveParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	DMember(int32_t)                                   FrameNumber                                                 OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   FrameNumberShot                                             OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   FrameNumberRel                                              OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   FrameNumberShotRel                                          OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	SMember(FString)                                   CameraNameOverride                                          OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   ShotNameOverride                                            OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(int32_t)                                   ZeroPadFrameNumberCount                                     OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(bool)                                      bForceRelativeFrameNumbers                                  OFFSET(get<bool>, {0x34, 1, 0, 0})
	SMember(FString)                                   FileNameOverride                                            OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(TMap<FString, FString>)                    FileNameFormatOverrides                                     OFFSET(get<T>, {0x48, 80, 0, 0})
	CMember(TMap<FString, FString>)                    FileMetadata                                                OFFSET(get<T>, {0x98, 80, 0, 0})
	SMember(FDateTime)                                 InitializationTime                                          OFFSET(getStruct<T>, {0xE8, 8, 0, 0})
	DMember(int32_t)                                   InitializationVersion                                       OFFSET(get<int32_t>, {0xF0, 4, 0, 0})
	CMember(class UMoviePipelineExecutorJob*)          Job                                                         OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(class UMoviePipelineExecutorShot*)         ShotOverride                                                OFFSET(get<T>, {0x108, 8, 0, 0})
	DMember(int32_t)                                   AdditionalFrameNumberOffset                                 OFFSET(get<int32_t>, {0x110, 4, 0, 0})
};

/// Enum /Script/MovieRenderPipelineCore.EMoviePipelineEncodeQuality
/// Size: 0x04
enum class EMoviePipelineEncodeQuality : uint8_t
{
	EMoviePipelineEncodeQuality__Low                                                 = 0,
	EMoviePipelineEncodeQuality__Medium                                              = 1,
	EMoviePipelineEncodeQuality__High                                                = 2,
	EMoviePipelineEncodeQuality__Epic                                                = 3
};

/// Enum /Script/MovieRenderPipelineCore.FCPXMLExportDataSource
/// Size: 0x02
enum class FCPXMLExportDataSource : uint8_t
{
	FCPXMLExportDataSource__OutputMetadata                                           = 0,
	FCPXMLExportDataSource__SequenceData                                             = 1
};

/// Enum /Script/MovieRenderPipelineCore.EMoviePipelineTextureStreamingMethod
/// Size: 0x03
enum class EMoviePipelineTextureStreamingMethod : uint8_t
{
	EMoviePipelineTextureStreamingMethod__None                                       = 0,
	EMoviePipelineTextureStreamingMethod__Disabled                                   = 1,
	EMoviePipelineTextureStreamingMethod__FullyLoad                                  = 2
};

/// Enum /Script/MovieRenderPipelineCore.EMovieRenderPipelineState
/// Size: 0x05
enum class EMovieRenderPipelineState : uint8_t
{
	EMovieRenderPipelineState__Uninitialized                                         = 0,
	EMovieRenderPipelineState__ProducingFrames                                       = 1,
	EMovieRenderPipelineState__Finalize                                              = 2,
	EMovieRenderPipelineState__Export                                                = 3,
	EMovieRenderPipelineState__Finished                                              = 4
};

/// Enum /Script/MovieRenderPipelineCore.EMovieRenderShotState
/// Size: 0x05
enum class EMovieRenderShotState : uint8_t
{
	EMovieRenderShotState__Uninitialized                                             = 0,
	EMovieRenderShotState__WarmingUp                                                 = 1,
	EMovieRenderShotState__MotionBlur                                                = 2,
	EMovieRenderShotState__Rendering                                                 = 3,
	EMovieRenderShotState__Finished                                                  = 4
};

/// Enum /Script/MovieRenderPipelineCore.EMoviePipelineShutterTiming
/// Size: 0x03
enum class EMoviePipelineShutterTiming : uint8_t
{
	EMoviePipelineShutterTiming__FrameOpen                                           = 0,
	EMoviePipelineShutterTiming__FrameCenter                                         = 1,
	EMoviePipelineShutterTiming__FrameClose                                          = 2
};

