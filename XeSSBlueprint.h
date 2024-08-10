
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/XeSSBlueprint.XeSSBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UXeSSBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/XeSSBlueprint.XeSSBlueprintLibrary.SetXeSSQualityMode
	// void SetXeSSQualityMode(EXeSSQualityMode QualityMode);                                                                   // [0x1d0ee70] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/XeSSBlueprint.XeSSBlueprintLibrary.IsXeSSSupported
	// bool IsXeSSSupported();                                                                                                  // [0x1d0f180] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/XeSSBlueprint.XeSSBlueprintLibrary.GetXeSSQualityModeInformation
	// bool GetXeSSQualityModeInformation(EXeSSQualityMode QualityMode, float& ScreenPercentage);                               // [0x1d0ece0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XeSSBlueprint.XeSSBlueprintLibrary.GetXeSSQualityMode
	// EXeSSQualityMode GetXeSSQualityMode();                                                                                   // [0x1d0f030] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/XeSSBlueprint.XeSSBlueprintLibrary.GetSupportedXeSSQualityModes
	// TArray<EXeSSQualityMode> GetSupportedXeSSQualityModes();                                                                 // [0x1d0f060] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/XeSSBlueprint.XeSSBlueprintLibrary.GetDefaultXeSSQualityMode
	// EXeSSQualityMode GetDefaultXeSSQualityMode(FIntPoint ScreenResolution);                                                  // [0x1d0ef40] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Enum /Script/XeSSBlueprint.EXeSSQualityMode
/// Size: 0x08
enum class EXeSSQualityMode : uint8_t
{
	EXeSSQualityMode__Off                                                            = 0,
	EXeSSQualityMode__UltraPerformance                                               = 1,
	EXeSSQualityMode__Performance                                                    = 2,
	EXeSSQualityMode__Balanced                                                       = 3,
	EXeSSQualityMode__Quality                                                        = 4,
	EXeSSQualityMode__UltraQuality                                                   = 5,
	EXeSSQualityMode__UltraQualityPlus                                               = 6,
	EXeSSQualityMode__AntiAliasing                                                   = 7
};

