
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/BinkMediaPlayer.BinkFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UBinkFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/BinkMediaPlayer.BinkFunctionLibrary.BinkLoadingMovie_GetTime
	// FTimespan BinkLoadingMovie_GetTime();                                                                                    // [0x1dc4a00] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/BinkMediaPlayer.BinkFunctionLibrary.BinkLoadingMovie_GetDuration
	// FTimespan BinkLoadingMovie_GetDuration();                                                                                // [0x1dc4af0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/BinkMediaPlayer.BinkFunctionLibrary.Bink_DrawOverlays
	// void Bink_DrawOverlays();                                                                                                // [0x1dc4be0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/BinkMediaPlayer.BinkMediaPlayer
/// Size: 0x00D8 (0x000028 - 0x000100)
class UBinkMediaPlayer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FMulticastInlineDelegate)                  OnMediaClosed                                               OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMediaOpened                                               OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMediaReachedEnd                                           OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPlaybackSuspended                                         OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	DMember(bool)                                      Looping                                                     OFFSET(get<bool>, {0x70, 1, 1, 0})
	DMember(bool)                                      StartImmediately                                            OFFSET(get<bool>, {0x70, 1, 1, 1})
	DMember(bool)                                      DelayedOpen                                                 OFFSET(get<bool>, {0x70, 1, 1, 2})
	SMember(FVector2D)                                 BinkDestinationUpperLeft                                    OFFSET(getStruct<T>, {0x74, 8, 0, 0})
	SMember(FVector2D)                                 BinkDestinationLowerRight                                   OFFSET(getStruct<T>, {0x7C, 8, 0, 0})
	SMember(FString)                                   URL                                                         OFFSET(getStruct<T>, {0x88, 16, 0, 0})
	CMember(TEnumAsByte<EBinkMediaPlayerBinkBufferModes>) BinkBufferMode                                           OFFSET(get<T>, {0x98, 1, 0, 0})
	CMember(TEnumAsByte<EBinkMediaPlayerBinkSoundTrack>) BinkSoundTrack                                            OFFSET(get<T>, {0x99, 1, 0, 0})
	DMember(int32_t)                                   BinkSoundTrackStart                                         OFFSET(get<int32_t>, {0x9C, 4, 0, 0})
	CMember(TEnumAsByte<EBinkMediaPlayerBinkDrawStyle>) BinkDrawStyle                                              OFFSET(get<T>, {0xA0, 1, 0, 0})
	DMember(int32_t)                                   BinkLayerDepth                                              OFFSET(get<int32_t>, {0xA4, 4, 0, 0})


	/// Functions
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.SupportsSeeking
	// bool SupportsSeeking();                                                                                                  // [0x1dc5600] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.SupportsScrubbing
	// bool SupportsScrubbing();                                                                                                // [0x1dc5600] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.SupportsRate
	// bool SupportsRate(float Rate, bool Unthinned);                                                                           // [0x1dc5620] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.Stop
	// void Stop();                                                                                                             // [0x1dc57d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.SetVolume
	// void SetVolume(float Rate);                                                                                              // [0x1dc57f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.SetRate
	// bool SetRate(float Rate);                                                                                                // [0x1dc5900] Final|Native|Public|BlueprintCallable 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.SetLooping
	// bool SetLooping(bool InLooping);                                                                                         // [0x1dc5a00] Final|Native|Public|BlueprintCallable 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.Seek
	// bool Seek(FTimespan& InTime);                                                                                            // [0x1dc5b10] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.Rewind
	// bool Rewind();                                                                                                           // [0x1dc5c10] Final|Native|Public|BlueprintCallable 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.Play
	// bool Play();                                                                                                             // [0x1dc5c50] Final|Native|Public|BlueprintCallable 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.Pause
	// bool Pause();                                                                                                            // [0x1dc5c90] Final|Native|Public|BlueprintCallable 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.OpenUrl
	// bool OpenUrl(FString NewUrl);                                                                                            // [0x1dc5d20] Final|Native|Public|BlueprintCallable 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.IsStopped
	// bool IsStopped();                                                                                                        // [0x1dc5f30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.IsPlaying
	// bool IsPlaying();                                                                                                        // [0x1dc5f60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.IsPaused
	// bool IsPaused();                                                                                                         // [0x1dc5f90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.IsLooping
	// bool IsLooping();                                                                                                        // [0x1dc5fc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.IsInitialized
	// bool IsInitialized();                                                                                                    // [0x1dc55d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.GetUrl
	// FString GetUrl();                                                                                                        // [0x1dc5ff0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.GetTime
	// FTimespan GetTime();                                                                                                     // [0x1dc6020] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.GetRate
	// float GetRate();                                                                                                         // [0x1dc6060] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.GetDuration
	// FTimespan GetDuration();                                                                                                 // [0x1dc6120] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.Draw
	// void Draw(class UTexture* Texture, bool tonemap, int32_t out_nits, float Alpha, bool srgb_decode, bool hdr);             // [0x1dc51f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.CloseUrl
	// void CloseUrl();                                                                                                         // [0x1dc5cc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.CanPlay
	// bool CanPlay();                                                                                                          // [0x1dc55d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BinkMediaPlayer.BinkMediaPlayer.CanPause
	// bool CanPause();                                                                                                         // [0x1dc5f60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/BinkMediaPlayer.BinkMediaTexture
/// Size: 0x0040 (0x0001C0 - 0x000200)
class UBinkMediaTexture : public UTexture
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	CMember(TEnumAsByte<TextureAddress>)               AddressX                                                    OFFSET(get<T>, {0x1C0, 1, 0, 0})
	CMember(TEnumAsByte<TextureAddress>)               AddressY                                                    OFFSET(get<T>, {0x1C1, 1, 0, 0})
	CMember(class UBinkMediaPlayer*)                   MediaPlayer                                                 OFFSET(get<T>, {0x1C8, 8, 0, 0})
	CMember(TEnumAsByte<EPixelFormat>)                 PixelFormat                                                 OFFSET(get<T>, {0x1D0, 1, 0, 0})
	DMember(bool)                                      tonemap                                                     OFFSET(get<bool>, {0x1D1, 1, 0, 0})
	DMember(float)                                     OutputNits                                                  OFFSET(get<float>, {0x1D4, 4, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x1D8, 4, 0, 0})
	DMember(bool)                                      DecodeSRGB                                                  OFFSET(get<bool>, {0x1DC, 1, 0, 0})


	/// Functions
	// Function /Script/BinkMediaPlayer.BinkMediaTexture.SetMediaPlayer
	// void SetMediaPlayer(class UBinkMediaPlayer* InMediaPlayer);                                                              // [0x1dc6af0] Final|Native|Public|BlueprintCallable 
	// Function /Script/BinkMediaPlayer.BinkMediaTexture.Clear
	// void Clear();                                                                                                            // [0x1dc6aa0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/BinkMediaPlayer.BinkMoviePlayerSettings
/// Size: 0x0020 (0x000028 - 0x000048)
class UBinkMoviePlayerSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TEnumAsByte<EBinkMoviePlayerBinkBufferModes>) BinkBufferMode                                           OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(TEnumAsByte<EBinkMoviePlayerBinkSoundTrack>) BinkSoundTrack                                            OFFSET(get<T>, {0x29, 1, 0, 0})
	DMember(int32_t)                                   BinkSoundTrackStart                                         OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	SMember(FVector2D)                                 BinkDestinationUpperLeft                                    OFFSET(getStruct<T>, {0x30, 8, 0, 0})
	SMember(FVector2D)                                 BinkDestinationLowerRight                                   OFFSET(getStruct<T>, {0x38, 8, 0, 0})
	CMember(TEnumAsByte<EPixelFormat>)                 BinkPixelFormat                                             OFFSET(get<T>, {0x40, 1, 0, 0})
};

/// Enum /Script/BinkMediaPlayer.EBinkMediaPlayerBinkBufferModes
/// Size: 0x03
enum class EBinkMediaPlayerBinkBufferModes : uint8_t
{
	BMASM_Bink_Stream                                                                = 0,
	BMASM_Bink_PreloadAll                                                            = 1,
	BMASM_Bink_StreamUntilResident                                                   = 2
};

/// Enum /Script/BinkMediaPlayer.EBinkMediaPlayerBinkSoundTrack
/// Size: 0x07
enum class EBinkMediaPlayerBinkSoundTrack : uint8_t
{
	BMASM_Bink_Sound_None                                                            = 0,
	BMASM_Bink_Sound_Simple                                                          = 1,
	BMASM_Bink_Sound_LanguageOverride                                                = 2,
	BMASM_Bink_Sound                                                                 = 3,
	BMASM_Bink_Sound_51LanguageOverride                                              = 4,
	BMASM_Bink_Sound6                                                                = 5,
	BMASM_Bink_Sound_71LanguageOverride                                              = 6
};

/// Enum /Script/BinkMediaPlayer.EBinkMediaPlayerBinkDrawStyle
/// Size: 0x05
enum class EBinkMediaPlayerBinkDrawStyle : uint8_t
{
	BMASM_Bink_DS_RenderToTexture                                                    = 0,
	BMASM_Bink_DS_OverlayFillScreenWithAspectRatio                                   = 1,
	BMASM_Bink_DS_OverlayOriginalMovieSize                                           = 2,
	BMASM_Bink_DS_OverlayFillScreen                                                  = 3,
	BMASM_Bink_DS_OverlaySpecificDestinationRectangle                                = 4
};

/// Enum /Script/BinkMediaPlayer.EBinkMoviePlayerBinkBufferModes
/// Size: 0x03
enum class EBinkMoviePlayerBinkBufferModes : uint8_t
{
	MP_Bink_Stream                                                                   = 0,
	MP_Bink_PreloadAll                                                               = 1,
	MP_Bink_StreamUntilResident                                                      = 2
};

/// Enum /Script/BinkMediaPlayer.EBinkMoviePlayerBinkSoundTrack
/// Size: 0x07
enum class EBinkMoviePlayerBinkSoundTrack : uint8_t
{
	MP_Bink_Sound_None                                                               = 0,
	MP_Bink_Sound_Simple                                                             = 1,
	MP_Bink_Sound_LanguageOverride                                                   = 2,
	MP_Bink_Sound                                                                    = 3,
	MP_Bink_Sound_51LanguageOverride                                                 = 4,
	MP_Bink_Sound6                                                                   = 5,
	MP_Bink_Sound_71LanguageOverride                                                 = 6
};

