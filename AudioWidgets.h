
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: SlateCore
/// dependency: UMG

/// Struct /Script/AudioWidgets.MeterChannelInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FMeterChannelInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     MeterValue                                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     PeakValue                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     ClippingValue                                               OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/AudioWidgets.AudioMeterStyle
/// Size: 0x0458 (0x000008 - 0x000460)
class FAudioMeterStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1120;

public:
	SMember(FSlateBrush)                               MeterValueImage                                             OFFSET(getStruct<T>, {0x10, 192, 0, 0})
	SMember(FSlateBrush)                               BackgroundImage                                             OFFSET(getStruct<T>, {0xD0, 192, 0, 0})
	SMember(FSlateBrush)                               MeterBackgroundImage                                        OFFSET(getStruct<T>, {0x190, 192, 0, 0})
	SMember(FSlateBrush)                               MeterValueBackgroundImage                                   OFFSET(getStruct<T>, {0x250, 192, 0, 0})
	SMember(FSlateBrush)                               MeterPeakImage                                              OFFSET(getStruct<T>, {0x310, 192, 0, 0})
	SMember(FVector2D)                                 MeterSize                                                   OFFSET(getStruct<T>, {0x3D0, 8, 0, 0})
	SMember(FVector2D)                                 MeterPadding                                                OFFSET(getStruct<T>, {0x3D8, 8, 0, 0})
	DMember(float)                                     MeterValuePadding                                           OFFSET(get<float>, {0x3E0, 4, 0, 0})
	DMember(float)                                     PeakValueWidth                                              OFFSET(get<float>, {0x3E4, 4, 0, 0})
	SMember(FVector2D)                                 ValueRangeDb                                                OFFSET(getStruct<T>, {0x3E8, 8, 0, 0})
	DMember(bool)                                      bShowScale                                                  OFFSET(get<bool>, {0x3F0, 1, 0, 0})
	DMember(bool)                                      bScaleSide                                                  OFFSET(get<bool>, {0x3F1, 1, 0, 0})
	DMember(float)                                     ScaleHashOffset                                             OFFSET(get<float>, {0x3F4, 4, 0, 0})
	DMember(float)                                     ScaleHashWidth                                              OFFSET(get<float>, {0x3F8, 4, 0, 0})
	DMember(float)                                     ScaleHashHeight                                             OFFSET(get<float>, {0x3FC, 4, 0, 0})
	DMember(int32_t)                                   DecibelsPerHash                                             OFFSET(get<int32_t>, {0x400, 4, 0, 0})
	SMember(FSlateFontInfo)                            Font                                                        OFFSET(getStruct<T>, {0x408, 88, 0, 0})
};

/// Class /Script/AudioWidgets.AudioMeter
/// Size: 0x0510 (0x000130 - 0x000640)
class UAudioMeter : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1600;

public:
	CMember(TArray<FMeterChannelInfo>)                 MeterChannelInfo                                            OFFSET(get<T>, {0x130, 16, 0, 0})
	SMember(FDelegateProperty)                         MeterChannelInfoDelegate                                    OFFSET(getStruct<T>, {0x140, 16, 0, 0})
	SMember(FAudioMeterStyle)                          WidgetStyle                                                 OFFSET(getStruct<T>, {0x150, 1120, 0, 0})
	CMember(TEnumAsByte<EOrientation>)                 Orientation                                                 OFFSET(get<T>, {0x5B0, 1, 0, 0})
	SMember(FLinearColor)                              BackgroundColor                                             OFFSET(getStruct<T>, {0x5B4, 16, 0, 0})
	SMember(FLinearColor)                              MeterBackgroundColor                                        OFFSET(getStruct<T>, {0x5C4, 16, 0, 0})
	SMember(FLinearColor)                              MeterValueColor                                             OFFSET(getStruct<T>, {0x5D4, 16, 0, 0})
	SMember(FLinearColor)                              MeterPeakColor                                              OFFSET(getStruct<T>, {0x5E4, 16, 0, 0})
	SMember(FLinearColor)                              MeterClippingColor                                          OFFSET(getStruct<T>, {0x5F4, 16, 0, 0})
	SMember(FLinearColor)                              MeterScaleColor                                             OFFSET(getStruct<T>, {0x604, 16, 0, 0})
	SMember(FLinearColor)                              MeterScaleLabelColor                                        OFFSET(getStruct<T>, {0x614, 16, 0, 0})


	/// Functions
	// Function /Script/AudioWidgets.AudioMeter.SetMeterValueColor
	// void SetMeterValueColor(FLinearColor InValue);                                                                           // [0x26821d0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterScaleLabelColor
	// void SetMeterScaleLabelColor(FLinearColor InValue);                                                                      // [0x2681d90] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterScaleColor
	// void SetMeterScaleColor(FLinearColor InValue);                                                                           // [0x2681ea0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterPeakColor
	// void SetMeterPeakColor(FLinearColor InValue);                                                                            // [0x26820c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterClippingColor
	// void SetMeterClippingColor(FLinearColor InValue);                                                                        // [0x2681fb0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterChannelInfo
	// void SetMeterChannelInfo(TArray<FMeterChannelInfo>& InMeterChannelInfo);                                                 // [0x2682500] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterBackgroundColor
	// void SetMeterBackgroundColor(FLinearColor InValue);                                                                      // [0x26822e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetBackgroundColor
	// void SetBackgroundColor(FLinearColor InValue);                                                                           // [0x26823f0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.GetMeterChannelInfo__DelegateSignature
	// TArray<FMeterChannelInfo> GetMeterChannelInfo__DelegateSignature();                                                      // [0x3a334c0] Public|Delegate      
	// Function /Script/AudioWidgets.AudioMeter.GetMeterChannelInfo
	// TArray<FMeterChannelInfo> GetMeterChannelInfo();                                                                         // [0x2682600] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AudioWidgets.AudioRadialSlider
/// Size: 0x0200 (0x000130 - 0x000330)
class UAudioRadialSlider : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x130, 4, 0, 0})
	SMember(FDelegateProperty)                         ValueDelegate                                               OFFSET(getStruct<T>, {0x134, 16, 0, 0})
	CMember(TEnumAsByte<EAudioRadialSliderLayout>)     WidgetLayout                                                OFFSET(get<T>, {0x144, 1, 0, 0})
	SMember(FLinearColor)                              CenterBackgroundColor                                       OFFSET(getStruct<T>, {0x148, 16, 0, 0})
	SMember(FLinearColor)                              SliderProgressColor                                         OFFSET(getStruct<T>, {0x158, 16, 0, 0})
	SMember(FLinearColor)                              SliderBarColor                                              OFFSET(getStruct<T>, {0x168, 16, 0, 0})
	SMember(FVector2D)                                 HandStartEndRatio                                           OFFSET(getStruct<T>, {0x178, 8, 0, 0})
	SMember(FText)                                     UnitsText                                                   OFFSET(getStruct<T>, {0x180, 24, 0, 0})
	SMember(FLinearColor)                              TextLabelBackgroundColor                                    OFFSET(getStruct<T>, {0x198, 16, 0, 0})
	DMember(bool)                                      ShowLabelOnlyOnHover                                        OFFSET(get<bool>, {0x1A8, 1, 0, 0})
	DMember(bool)                                      ShowUnitsText                                               OFFSET(get<bool>, {0x1A9, 1, 0, 0})
	DMember(bool)                                      IsUnitsTextReadOnly                                         OFFSET(get<bool>, {0x1AA, 1, 0, 0})
	DMember(bool)                                      IsValueTextReadOnly                                         OFFSET(get<bool>, {0x1AB, 1, 0, 0})
	DMember(float)                                     SliderThickness                                             OFFSET(get<float>, {0x1AC, 4, 0, 0})
	SMember(FVector2D)                                 OutputRange                                                 OFFSET(getStruct<T>, {0x1B0, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnValueChanged                                              OFFSET(getStruct<T>, {0x1B8, 16, 0, 0})


	/// Functions
	// Function /Script/AudioWidgets.AudioRadialSlider.SetWidgetLayout
	// void SetWidgetLayout(TEnumAsByte<EAudioRadialSliderLayout> InLayout);                                                    // [0x2684c60] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetValueTextReadOnly
	// void SetValueTextReadOnly(bool bIsReadOnly);                                                                             // [0x2684350] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetUnitsTextReadOnly
	// void SetUnitsTextReadOnly(bool bIsReadOnly);                                                                             // [0x2684470] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetUnitsText
	// void SetUnitsText(FText Units);                                                                                          // [0x2684570] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetTextLabelBackgroundColor
	// void SetTextLabelBackgroundColor(FSlateColor InColor);                                                                   // [0x26846d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetSliderThickness
	// void SetSliderThickness(float InThickness);                                                                              // [0x2684040] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetSliderProgressColor
	// void SetSliderProgressColor(FLinearColor InValue);                                                                       // [0x2684a40] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetSliderBarColor
	// void SetSliderBarColor(FLinearColor InValue);                                                                            // [0x2684930] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetShowUnitsText
	// void SetShowUnitsText(bool bShowUnitsText);                                                                              // [0x2684150] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetShowLabelOnlyOnHover
	// void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover);                                                                // [0x2684250] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetOutputRange
	// void SetOutputRange(FVector2D InOutputRange);                                                                            // [0x2683f50] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetHandStartEndRatio
	// void SetHandStartEndRatio(FVector2D InHandStartEndRatio);                                                                // [0x2684840] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetCenterBackgroundColor
	// void SetCenterBackgroundColor(FLinearColor InValue);                                                                     // [0x2684b50] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.GetSliderValue
	// float GetSliderValue(float OutputValue);                                                                                 // [0x2684d60] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.GetOutputValue
	// float GetOutputValue(float InSliderValue);                                                                               // [0x2684e60] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioWidgets.AudioVolumeRadialSlider
/// Size: 0x0000 (0x000330 - 0x000330)
class UAudioVolumeRadialSlider : public UAudioRadialSlider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
};

/// Class /Script/AudioWidgets.AudioFrequencyRadialSlider
/// Size: 0x0000 (0x000330 - 0x000330)
class UAudioFrequencyRadialSlider : public UAudioRadialSlider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
};

/// Class /Script/AudioWidgets.AudioSliderBase
/// Size: 0x07C0 (0x000130 - 0x0008F0)
class UAudioSliderBase : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2288;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x130, 4, 0, 0})
	SMember(FText)                                     UnitsText                                                   OFFSET(getStruct<T>, {0x138, 24, 0, 0})
	SMember(FLinearColor)                              TextLabelBackgroundColor                                    OFFSET(getStruct<T>, {0x150, 16, 0, 0})
	SMember(FDelegateProperty)                         TextLabelBackgroundColorDelegate                            OFFSET(getStruct<T>, {0x160, 16, 0, 0})
	DMember(bool)                                      ShowLabelOnlyOnHover                                        OFFSET(get<bool>, {0x170, 1, 0, 0})
	DMember(bool)                                      ShowUnitsText                                               OFFSET(get<bool>, {0x171, 1, 0, 0})
	DMember(bool)                                      IsUnitsTextReadOnly                                         OFFSET(get<bool>, {0x172, 1, 0, 0})
	DMember(bool)                                      IsValueTextReadOnly                                         OFFSET(get<bool>, {0x173, 1, 0, 0})
	SMember(FDelegateProperty)                         ValueDelegate                                               OFFSET(getStruct<T>, {0x174, 16, 0, 0})
	SMember(FLinearColor)                              SliderBackgroundColor                                       OFFSET(getStruct<T>, {0x184, 16, 0, 0})
	SMember(FDelegateProperty)                         SliderBackgroundColorDelegate                               OFFSET(getStruct<T>, {0x194, 16, 0, 0})
	SMember(FLinearColor)                              SliderBarColor                                              OFFSET(getStruct<T>, {0x1A4, 16, 0, 0})
	SMember(FDelegateProperty)                         SliderBarColorDelegate                                      OFFSET(getStruct<T>, {0x1B4, 16, 0, 0})
	SMember(FLinearColor)                              SliderThumbColor                                            OFFSET(getStruct<T>, {0x1C4, 16, 0, 0})
	SMember(FDelegateProperty)                         SliderThumbColorDelegate                                    OFFSET(getStruct<T>, {0x1D4, 16, 0, 0})
	SMember(FLinearColor)                              WidgetBackgroundColor                                       OFFSET(getStruct<T>, {0x1E4, 16, 0, 0})
	SMember(FDelegateProperty)                         WidgetBackgroundColorDelegate                               OFFSET(getStruct<T>, {0x1F4, 16, 0, 0})
	CMember(TEnumAsByte<EOrientation>)                 Orientation                                                 OFFSET(get<T>, {0x204, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnValueChanged                                              OFFSET(getStruct<T>, {0x208, 16, 0, 0})


	/// Functions
	// Function /Script/AudioWidgets.AudioSliderBase.SetWidgetBackgroundColor
	// void SetWidgetBackgroundColor(FLinearColor InValue);                                                                     // [0x2687990] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetValueTextReadOnly
	// void SetValueTextReadOnly(bool bIsReadOnly);                                                                             // [0x2687fd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetUnitsTextReadOnly
	// void SetUnitsTextReadOnly(bool bIsReadOnly);                                                                             // [0x26880f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetUnitsText
	// void SetUnitsText(FText Units);                                                                                          // [0x26881f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetTextLabelBackgroundColor
	// void SetTextLabelBackgroundColor(FSlateColor InColor);                                                                   // [0x2688350] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetSliderThumbColor
	// void SetSliderThumbColor(FLinearColor InValue);                                                                          // [0x2687aa0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetSliderBarColor
	// void SetSliderBarColor(FLinearColor InValue);                                                                            // [0x2687bb0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetSliderBackgroundColor
	// void SetSliderBackgroundColor(FLinearColor InValue);                                                                     // [0x2687cc0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetShowUnitsText
	// void SetShowUnitsText(bool bShowUnitsText);                                                                              // [0x2687dd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetShowLabelOnlyOnHover
	// void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover);                                                                // [0x2687ed0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.GetSliderValue
	// float GetSliderValue(float OutputValue);                                                                                 // [0x26884c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.GetOutputValue
	// float GetOutputValue(float InSliderValue);                                                                               // [0x26885c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.GetLinValue
	// float GetLinValue(float OutputValue);                                                                                    // [0x26884c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioWidgets.AudioSlider
/// Size: 0x0010 (0x0008F0 - 0x000900)
class UAudioSlider : public UAudioSliderBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2304;

public:
	CMember(TWeakObjectPtr<class UCurveFloat*>)        LinToOutputCurve                                            OFFSET(get<T>, {0x8F0, 8, 0, 0})
	CMember(TWeakObjectPtr<class UCurveFloat*>)        OutputToLinCurve                                            OFFSET(get<T>, {0x8F8, 8, 0, 0})
};

/// Class /Script/AudioWidgets.AudioVolumeSlider
/// Size: 0x0000 (0x000900 - 0x000900)
class UAudioVolumeSlider : public UAudioSlider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2304;

public:
};

/// Class /Script/AudioWidgets.AudioFrequencySlider
/// Size: 0x0010 (0x0008F0 - 0x000900)
class UAudioFrequencySlider : public UAudioSliderBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2304;

public:
	SMember(FVector2D)                                 OutputRange                                                 OFFSET(getStruct<T>, {0x8F0, 8, 0, 0})
};

/// Struct /Script/AudioWidgets.AudioTextBoxStyle
/// Size: 0x00E8 (0x000008 - 0x0000F0)
class FAudioTextBoxStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FSlateBrush)                               BackgroundImage                                             OFFSET(getStruct<T>, {0x10, 192, 0, 0})
	SMember(FSlateColor)                               BackgroundColor                                             OFFSET(getStruct<T>, {0xD0, 20, 0, 0})
};

/// Struct /Script/AudioWidgets.AudioSliderStyle
/// Size: 0x06B8 (0x000008 - 0x0006C0)
class FAudioSliderStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1728;

public:
	SMember(FSliderStyle)                              SliderStyle                                                 OFFSET(getStruct<T>, {0x10, 1184, 0, 0})
	SMember(FAudioTextBoxStyle)                        TextBoxStyle                                                OFFSET(getStruct<T>, {0x4B0, 240, 0, 0})
	SMember(FSlateBrush)                               WidgetBackgroundImage                                       OFFSET(getStruct<T>, {0x5A0, 192, 0, 0})
	SMember(FSlateColor)                               SliderBackgroundColor                                       OFFSET(getStruct<T>, {0x660, 20, 0, 0})
	SMember(FVector2D)                                 SliderBackgroundSize                                        OFFSET(getStruct<T>, {0x674, 8, 0, 0})
	DMember(float)                                     LabelPadding                                                OFFSET(get<float>, {0x67C, 4, 0, 0})
	SMember(FSlateColor)                               SliderBarColor                                              OFFSET(getStruct<T>, {0x680, 20, 0, 0})
	SMember(FSlateColor)                               SliderThumbColor                                            OFFSET(getStruct<T>, {0x694, 20, 0, 0})
	SMember(FSlateColor)                               WidgetBackgroundColor                                       OFFSET(getStruct<T>, {0x6A8, 20, 0, 0})
};

/// Struct /Script/AudioWidgets.AudioRadialSliderStyle
/// Size: 0x0148 (0x000008 - 0x000150)
class FAudioRadialSliderStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FAudioTextBoxStyle)                        TextBoxStyle                                                OFFSET(getStruct<T>, {0x10, 240, 0, 0})
	SMember(FSlateColor)                               CenterBackgroundColor                                       OFFSET(getStruct<T>, {0x100, 20, 0, 0})
	SMember(FSlateColor)                               SliderBarColor                                              OFFSET(getStruct<T>, {0x114, 20, 0, 0})
	SMember(FSlateColor)                               SliderProgressColor                                         OFFSET(getStruct<T>, {0x128, 20, 0, 0})
	DMember(float)                                     LabelPadding                                                OFFSET(get<float>, {0x13C, 4, 0, 0})
	DMember(float)                                     DefaultSliderRadius                                         OFFSET(get<float>, {0x140, 4, 0, 0})
};

/// Enum /Script/AudioWidgets.EAudioRadialSliderLayout
/// Size: 0x03
enum class EAudioRadialSliderLayout : uint8_t
{
	Layout_LabelTop                                                                  = 0,
	Layout_LabelCenter                                                               = 1,
	Layout_LabelBottom                                                               = 2
};

