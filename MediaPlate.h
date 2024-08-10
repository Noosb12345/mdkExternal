
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MediaAssets

/// Class /Script/MediaPlate.MediaPlate
/// Size: 0x0010 (0x000248 - 0x000258)
class AMediaPlate : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 600;

public:
	CMember(class UMediaPlateComponent*)               MediaPlateComponent                                         OFFSET(get<T>, {0x248, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               StaticMeshComponent                                         OFFSET(get<T>, {0x250, 8, 0, 0})
};

/// Class /Script/MediaPlate.MediaPlateAssetUserData
/// Size: 0x0010 (0x000028 - 0x000038)
class UMediaPlateAssetUserData : public UAssetUserData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/MediaPlate.MediaPlateComponent
/// Size: 0x00C0 (0x0000A8 - 0x000168)
class UMediaPlateComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	DMember(bool)                                      bPlayOnOpen                                                 OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(bool)                                      bAutoPlay                                                   OFFSET(get<bool>, {0xB1, 1, 0, 0})
	DMember(bool)                                      bEnableAudio                                                OFFSET(get<bool>, {0xB2, 1, 0, 0})
	DMember(float)                                     StartTime                                                   OFFSET(get<float>, {0xB4, 4, 0, 0})
	CMember(class UMediaSoundComponent*)               SoundComponent                                              OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               StaticMeshComponent                                         OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(TArray<class UStaticMeshComponent*>)       Letterboxes                                                 OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(class UMediaPlaylist*)                     MediaPlaylist                                               OFFSET(get<T>, {0xD8, 8, 0, 0})
	DMember(int32_t)                                   PlaylistIndex                                               OFFSET(get<int32_t>, {0xE0, 4, 0, 0})
	SMember(FMediaSourceCacheSettings)                 CacheSettings                                               OFFSET(getStruct<T>, {0xE4, 8, 0, 0})
	DMember(bool)                                      bIsMediaPlatePlaying                                        OFFSET(get<bool>, {0xEC, 1, 0, 0})
	DMember(bool)                                      bPlayOnlyWhenVisible                                        OFFSET(get<bool>, {0xF4, 1, 0, 0})
	DMember(bool)                                      bLoop                                                       OFFSET(get<bool>, {0xF5, 1, 0, 0})
	CMember(EMediaTextureVisibleMipsTiles)             VisibleMipsTilesCalculations                                OFFSET(get<T>, {0xF6, 1, 0, 0})
	DMember(float)                                     MipMapBias                                                  OFFSET(get<float>, {0xF8, 4, 0, 0})
	DMember(bool)                                      bIsAspectRatioAuto                                          OFFSET(get<bool>, {0xFC, 1, 0, 0})
	DMember(bool)                                      bEnableMipMapUpscaling                                      OFFSET(get<bool>, {0xFD, 1, 0, 0})
	DMember(int32_t)                                   MipLevelToUpscale                                           OFFSET(get<int32_t>, {0x100, 4, 0, 0})
	DMember(float)                                     LetterboxAspectRatio                                        OFFSET(get<float>, {0x104, 4, 0, 0})
	SMember(FVector2D)                                 MeshRange                                                   OFFSET(getStruct<T>, {0x10C, 8, 0, 0})
	CMember(TArray<class UMediaTexture*>)              MediaTextures                                               OFFSET(get<T>, {0x118, 16, 0, 0})
	CMember(class UMediaPlayer*)                       MediaPlayer                                                 OFFSET(get<T>, {0x128, 8, 0, 0})


	/// Functions
	// Function /Script/MediaPlate.MediaPlateComponent.SetPlayOnlyWhenVisible
	// void SetPlayOnlyWhenVisible(bool bInPlayOnlyWhenVisible);                                                                // [0x28f85a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.SetMeshRange
	// void SetMeshRange(FVector2D InMeshRange);                                                                                // [0x28f86c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.SetLoop
	// void SetLoop(bool bInLoop);                                                                                              // [0x28f87b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.SetLetterboxAspectRatio
	// void SetLetterboxAspectRatio(float AspectRatio);                                                                         // [0x28f8370] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.SetIsAspectRatioAuto
	// void SetIsAspectRatioAuto(bool bInIsAspectRatioAuto);                                                                    // [0x28f8480] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.Seek
	// bool Seek(FTimespan& Time);                                                                                              // [0x28f8980] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.Rewind
	// bool Rewind();                                                                                                           // [0x28f8a90] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.Play
	// void Play();                                                                                                             // [0x28f8bb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.Pause
	// void Pause();                                                                                                            // [0x28f8b60] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.Open
	// void Open();                                                                                                             // [0x28f8c00] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.OnMediaOpened
	// void OnMediaOpened(FString DeviceUrl);                                                                                   // [0x28f81e0] Final|Native|Private 
	// Function /Script/MediaPlate.MediaPlateComponent.OnMediaEnd
	// void OnMediaEnd();                                                                                                       // [0x28f81c0] Final|Native|Private 
	// Function /Script/MediaPlate.MediaPlateComponent.IsMediaPlatePlaying
	// bool IsMediaPlatePlaying();                                                                                              // [0x28f88d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaPlate.MediaPlateComponent.GetMeshRange
	// FVector2D GetMeshRange();                                                                                                // [0x28f86a0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaPlate.MediaPlateComponent.GetMediaTexture
	// class UMediaTexture* GetMediaTexture(int32_t Index);                                                                     // [0x28f8c20] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.GetMediaPlayer
	// class UMediaPlayer* GetMediaPlayer();                                                                                    // [0x15f8dd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.GetLoop
	// bool GetLoop();                                                                                                          // [0x28f88b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MediaPlate.MediaPlateComponent.GetLetterboxAspectRatio
	// float GetLetterboxAspectRatio();                                                                                         // [0x28f8460] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.GetIsAspectRatioAuto
	// bool GetIsAspectRatioAuto();                                                                                             // [0x28f8580] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaPlate.MediaPlateComponent.Close
	// void Close();                                                                                                            // [0x28f88f0] Final|Native|Public|BlueprintCallable 
};

/// Enum /Script/MediaPlate.EMediaPlateEventState
/// Size: 0x07
enum class EMediaPlateEventState : uint8_t
{
	EMediaPlateEventState__Play                                                      = 0,
	EMediaPlateEventState__Open                                                      = 1,
	EMediaPlateEventState__Close                                                     = 2,
	EMediaPlateEventState__Pause                                                     = 3,
	EMediaPlateEventState__Reverse                                                   = 4,
	EMediaPlateEventState__Forward                                                   = 5,
	EMediaPlateEventState__Rewind                                                    = 6
};

