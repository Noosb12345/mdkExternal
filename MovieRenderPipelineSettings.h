
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieRenderPipelineCore
/// dependency: UMG

/// Class /Script/MovieRenderPipelineSettings.MoviePipelineBurnInWidget
/// Size: 0x0000 (0x000250 - 0x000250)
class UMoviePipelineBurnInWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:


	/// Functions
	// Function /Script/MovieRenderPipelineSettings.MoviePipelineBurnInWidget.OnOutputFrameStarted
	// void OnOutputFrameStarted(class UMoviePipeline* ForPipeline);                                                            // [0x3a334c0] Event|Public|BlueprintEvent 
};

/// Class /Script/MovieRenderPipelineSettings.MoviePipelineBurnInSetting
/// Size: 0x0068 (0x000048 - 0x0000B0)
class UMoviePipelineBurnInSetting : public UMoviePipelineRenderPass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FSoftClassPath)                            BurnInClass                                                 OFFSET(getStruct<T>, {0x48, 32, 0, 0})
	DMember(bool)                                      bCompositeOntoFinalImage                                    OFFSET(get<bool>, {0x68, 1, 0, 0})
	CMember(class UTextureRenderTarget2D*)             RenderTarget                                                OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(TArray<class UMoviePipelineBurnInWidget*>) BurnInWidgetInstances                                       OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Struct /Script/MovieRenderPipelineSettings.MoviePipelineConsoleVariableEntry
/// Size: 0x0018 (0x000000 - 0x000018)
class FMoviePipelineConsoleVariableEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bIsEnabled                                                  OFFSET(get<bool>, {0x14, 1, 0, 0})
};

/// Class /Script/MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting
/// Size: 0x00B0 (0x000048 - 0x0000F8)
class UMoviePipelineConsoleVariableSetting : public UMoviePipelineSetting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(TArray<TScriptInterface<Class>>)           ConsoleVariablePresets                                      OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TMap<FString, float>)                      ConsoleVariables                                            OFFSET(get<T>, {0x58, 80, 0, 0})
	CMember(TArray<FString>)                           StartConsoleCommands                                        OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(TArray<FString>)                           EndConsoleCommands                                          OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(TArray<FMoviePipelineConsoleVariableEntry>) CVars                                                      OFFSET(get<T>, {0xC8, 16, 0, 0})


	/// Functions
	// Function /Script/MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting.UpdateConsoleVariableEnableState
	// bool UpdateConsoleVariableEnableState(FString Name, bool bIsEnabled);                                                    // [0x1625a90] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting.RemoveConsoleVariable
	// bool RemoveConsoleVariable(FString Name, bool bRemoveAllInstances);                                                      // [0x1626160] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting.GetConsoleVariables
	// TArray<FMoviePipelineConsoleVariableEntry> GetConsoleVariables();                                                        // [0x1626350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting.AddOrUpdateConsoleVariable
	// bool AddOrUpdateConsoleVariable(FString Name, float Value);                                                              // [0x1625ec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting.AddConsoleVariable
	// bool AddConsoleVariable(FString Name, float Value);                                                                      // [0x1625c70] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MovieRenderPipelineSettings.MoviePipelineWidgetRenderer
/// Size: 0x0020 (0x000048 - 0x000068)
class UMoviePipelineWidgetRenderer : public UMoviePipelineRenderPass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(bool)                                      bCompositeOntoFinalImage                                    OFFSET(get<bool>, {0x48, 1, 0, 0})
	CMember(class UTextureRenderTarget2D*)             RenderTarget                                                OFFSET(get<T>, {0x60, 8, 0, 0})
};

