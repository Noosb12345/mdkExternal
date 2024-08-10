
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MediaAssets

/// Class /Script/ImgMedia.ImgMediaSource
/// Size: 0x0048 (0x000088 - 0x0000D0)
class UImgMediaSource : public UBaseMediaSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	DMember(bool)                                      IsPathRelativeToProjectRoot                                 OFFSET(get<bool>, {0x88, 1, 0, 0})
	SMember(FFrameRate)                                FrameRateOverride                                           OFFSET(getStruct<T>, {0x8C, 8, 0, 0})
	SMember(FString)                                   ProxyOverride                                               OFFSET(getStruct<T>, {0x98, 16, 0, 0})
	DMember(bool)                                      bFillGapsInSequence                                         OFFSET(get<bool>, {0xA8, 1, 0, 0})
	SMember(FDirectoryPath)                            SequencePath                                                OFFSET(getStruct<T>, {0xB0, 16, 0, 0})


	/// Functions
	// Function /Script/ImgMedia.ImgMediaSource.SetTokenizedSequencePath
	// void SetTokenizedSequencePath(FString Path);                                                                             // [0x28d1e80] Final|Native|Public|BlueprintCallable 
	// Function /Script/ImgMedia.ImgMediaSource.SetSequencePath
	// void SetSequencePath(FString Path);                                                                                      // [0x28d1fc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ImgMedia.ImgMediaSource.SetMipLevelDistance
	// void SetMipLevelDistance(float Distance);                                                                                // [0x28d1ab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ImgMedia.ImgMediaSource.RemoveTargetObject
	// void RemoveTargetObject(class AActor* InActor);                                                                          // [0x28d1b80] Final|Native|Public|BlueprintCallable 
	// Function /Script/ImgMedia.ImgMediaSource.RemoveGlobalCamera
	// void RemoveGlobalCamera(class AActor* InActor);                                                                          // [0x13ba340] Final|Native|Public|BlueprintCallable 
	// Function /Script/ImgMedia.ImgMediaSource.GetSequencePath
	// FString GetSequencePath();                                                                                               // [0x28d20c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ImgMedia.ImgMediaSource.GetProxies
	// void GetProxies(TArray<FString>& OutProxies);                                                                            // [0x28d2130] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ImgMedia.ImgMediaSource.AddTargetObject
	// void AddTargetObject(class AActor* InActor);                                                                             // [0x28d1db0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ImgMedia.ImgMediaSource.AddGlobalCamera
	// void AddGlobalCamera(class AActor* InActor);                                                                             // [0x13ba340] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/ImgMedia.ImgMediaSourceCustomizationSequenceProxy
/// Size: 0x0001 (0x000000 - 0x000001)
class FImgMediaSourceCustomizationSequenceProxy : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

