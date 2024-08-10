
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: StreamlineBlueprint

/// Class /Script/StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC
/// Size: 0x0000 (0x000028 - 0x000028)
class UStreamlineLibraryDeepDVC : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.SetDeepDVCSaturationBoost
	// void SetDeepDVCSaturationBoost(float Intensity);                                                                         // [0x1f3f920] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.SetDeepDVCMode
	// void SetDeepDVCMode(UStreamlineDeepDVCMode DeepDVCMode);                                                                 // [0x1f3feb0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.SetDeepDVCIntensity
	// void SetDeepDVCIntensity(float Intensity);                                                                               // [0x1f3fbc0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.QueryDeepDVCSupport
	// UStreamlineFeatureSupport QueryDeepDVCSupport();                                                                         // [0x1f40330] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.IsDeepDVCSupported
	// bool IsDeepDVCSupported();                                                                                               // [0x1f40370] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.IsDeepDVCModeSupported
	// bool IsDeepDVCModeSupported(UStreamlineDeepDVCMode DeepDVCMode);                                                         // [0x1f401c0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.GetSupportedDeepDVCModes
	// TArray<UStreamlineDeepDVCMode> GetSupportedDeepDVCModes();                                                               // [0x1f40090] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.GetDefaultDeepDVCMode
	// UStreamlineDeepDVCMode GetDefaultDeepDVCMode();                                                                          // [0x1f3fd90] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.GetDeepDVCSaturationBoost
	// float GetDeepDVCSaturationBoost();                                                                                       // [0x1f3f850] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.GetDeepDVCMode
	// UStreamlineDeepDVCMode GetDeepDVCMode();                                                                                 // [0x1f3fdd0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.GetDeepDVCIntensity
	// float GetDeepDVCIntensity();                                                                                             // [0x1f3faf0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Enum /Script/StreamlineDeepDVCBlueprint.UStreamlineDeepDVCMode
/// Size: 0x02
enum class UStreamlineDeepDVCMode : uint8_t
{
	UStreamlineDeepDVCMode__Off                                                      = 0,
	UStreamlineDeepDVCMode__On                                                       = 1
};

