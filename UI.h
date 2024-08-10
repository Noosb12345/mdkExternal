
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AkAudio
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: M1
/// dependency: M1Data
/// dependency: SlateCore
/// dependency: UMG

/// Class /Game/UI/Components/UI_Deco_Cube_01.UI_Deco_Cube_01_C
/// Size: 0x0040 (0x000708 - 0x000748)
class UUI_Deco_Cube_01_C : public UM1UIWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1864;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x708, 8, 0, 0})
	CMember(class UImage*)                             blackbg                                                     OFFSET(get<T>, {0x710, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x718, 8, 0, 0})
	CMember(class UImage*)                             Image1                                                      OFFSET(get<T>, {0x720, 8, 0, 0})
	CMember(class UImage*)                             Image2                                                      OFFSET(get<T>, {0x728, 8, 0, 0})
	CMember(class UImage*)                             Image3                                                      OFFSET(get<T>, {0x730, 8, 0, 0})
	SMember(FLinearColor)                              In_Color_and_Opacity                                        OFFSET(getStruct<T>, {0x738, 16, 0, 0})


	/// Functions
	// Function /Game/UI/Components/UI_Deco_Cube_01.UI_Deco_Cube_01_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Components/UI_Deco_Cube_01.UI_Deco_Cube_01_C.ExecuteUbergraph_UI_Deco_Cube_01
	// void ExecuteUbergraph_UI_Deco_Cube_01(int32_t EntryPoint);                                                               // [0x3a334c0] Final                
};

/// Class /Game/UI/Components/UI_Progress.UI_Progress_C
/// Size: 0x0034 (0x0009E0 - 0x000A14)
class UUI_Progress_C : public UM1ProgressBar
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2580;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x9E0, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   UIAnim_Hit                                                  OFFSET(get<T>, {0x9E8, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Anim_Phase                                                  OFFSET(get<T>, {0x9F0, 8, 0, 0})
	CMember(class UImage*)                             Image_Hit                                                   OFFSET(get<T>, {0x9F8, 8, 0, 0})
	DMember(bool)                                      bPlayAnimationOnUpdate                                      OFFSET(get<bool>, {0xA00, 1, 0, 0})
	SMember(FLinearColor)                              HitColor                                                    OFFSET(getStruct<T>, {0xA04, 16, 0, 0})


	/// Functions
	// Function /Game/UI/Components/UI_Progress.UI_Progress_C.PlayHitAnimation
	// void PlayHitAnimation();                                                                                                 // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Components/UI_Progress.UI_Progress_C.SetHitColor
	// void SetHitColor();                                                                                                      // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Components/UI_Progress.UI_Progress_C.PlayPhaseAnimation
	// void PlayPhaseAnimation();                                                                                               // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Components/UI_Progress.UI_Progress_C.UI_Progress_AutoGenFunc
	// void UI_Progress_AutoGenFunc();                                                                                          // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Components/UI_Progress.UI_Progress_C.Construct
	// void Construct();                                                                                                        // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Components/UI_Progress.UI_Progress_C.ExecuteUbergraph_UI_Progress
	// void ExecuteUbergraph_UI_Progress(int32_t EntryPoint);                                                                   // [0x3a334c0] Final                
};

/// Class /Game/UI/Common_Ef/UI_Common_Fx_01.UI_Common_Fx_01_C
/// Size: 0x0038 (0x000708 - 0x000740)
class UUI_Common_Fx_01_C : public UM1UIWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1856;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x708, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   UIAnim_Fx                                                   OFFSET(get<T>, {0x710, 8, 0, 0})
	CMember(class UImage*)                             FX                                                          OFFSET(get<T>, {0x718, 8, 0, 0})
	CMember(class UImage*)                             FX1                                                         OFFSET(get<T>, {0x720, 8, 0, 0})
	CMember(class UImage*)                             FX2                                                         OFFSET(get<T>, {0x728, 8, 0, 0})
	SMember(FLinearColor)                              In_Color_and_Opacity                                        OFFSET(getStruct<T>, {0x730, 16, 0, 0})


	/// Functions
	// Function /Game/UI/Common_Ef/UI_Common_Fx_01.UI_Common_Fx_01_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Common_Ef/UI_Common_Fx_01.UI_Common_Fx_01_C.ExecuteUbergraph_UI_Common_Fx_01
	// void ExecuteUbergraph_UI_Common_Fx_01(int32_t EntryPoint);                                                               // [0x3a334c0] Final                
};

/// Class /Game/UI/Mission/Widgets/UI_Mission_Task_TargetNameTag.UI_Mission_Task_TargetNameTag_C
/// Size: 0x005A (0x000738 - 0x000792)
class UUI_Mission_Task_TargetNameTag_C : public UM1UITaskTargetListItem_BaseMissionTarget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1938;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x738, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   UIAnim_ProgressBarOpen                                      OFFSET(get<T>, {0x740, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   UIAnim_Complete                                             OFFSET(get<T>, {0x748, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   UIAnim_Open                                                 OFFSET(get<T>, {0x750, 8, 0, 0})
	CMember(class UHorizontalBox*)                     HorizontalBox                                               OFFSET(get<T>, {0x758, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x760, 8, 0, 0})
	CMember(class UOverlay*)                           Overlay                                                     OFFSET(get<T>, {0x768, 8, 0, 0})
	CMember(class UUI_Common_Fx_01_C*)                 UI_Common_Fx_01                                             OFFSET(get<T>, {0x770, 8, 0, 0})
	CMember(class UUI_Deco_Cube_01_C*)                 UI_Deco_Cube_01                                             OFFSET(get<T>, {0x778, 8, 0, 0})
	CMember(class UWidgetSwitcher*)                    WS_BG                                                       OFFSET(get<T>, {0x780, 8, 0, 0})
	DMember(bool)                                      bHiddenWhenCompleted                                        OFFSET(get<bool>, {0x788, 1, 0, 0})
	DMember(int32_t)                                   UI_Text_Color                                               OFFSET(get<int32_t>, {0x78C, 4, 0, 0})
	DMember(bool)                                      bCompleted                                                  OFFSET(get<bool>, {0x790, 1, 0, 0})
	DMember(bool)                                      bIsOpenCloseAnimPlaying                                     OFFSET(get<bool>, {0x791, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Mission/Widgets/UI_Mission_Task_TargetNameTag.UI_Mission_Task_TargetNameTag_C.SetUITextColor
	// void SetUITextColor(int32_t UI TextColor);                                                                               // [0x3a334c0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Mission/Widgets/UI_Mission_Task_TargetNameTag.UI_Mission_Task_TargetNameTag_C.SetHiddenWhenCompleted
	// void SetHiddenWhenCompleted(bool InHiddenWhenCompleted);                                                                 // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Mission/Widgets/UI_Mission_Task_TargetNameTag.UI_Mission_Task_TargetNameTag_C.SetComplete
	// void SetComplete(bool InComplete);                                                                                       // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Mission/Widgets/UI_Mission_Task_TargetNameTag.UI_Mission_Task_TargetNameTag_C.SetUIState
	// void SetUIState(bool IsDim);                                                                                             // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Mission/Widgets/UI_Mission_Task_TargetNameTag.UI_Mission_Task_TargetNameTag_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Mission/Widgets/UI_Mission_Task_TargetNameTag.UI_Mission_Task_TargetNameTag_C.Construct
	// void Construct();                                                                                                        // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Mission/Widgets/UI_Mission_Task_TargetNameTag.UI_Mission_Task_TargetNameTag_C.WidgetAnimationEvt_UIAnim_Complete_K2Node_WidgetAnimationEvent
	// void WidgetAnimationEvt_UIAnim_Complete_K2Node_WidgetAnimationEvent();                                                   // [0x3a334c0] BlueprintEvent       
	// Function /Game/UI/Mission/Widgets/UI_Mission_Task_TargetNameTag.UI_Mission_Task_TargetNameTag_C.BP_UpdateByState
	// void BP_UpdateByState(EM1BaseMissionProgressState& InState);                                                             // [0x3a334c0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Mission/Widgets/UI_Mission_Task_TargetNameTag.UI_Mission_Task_TargetNameTag_C.OnBarClosed
	// void OnBarClosed();                                                                                                      // [0x3a334c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Mission/Widgets/UI_Mission_Task_TargetNameTag.UI_Mission_Task_TargetNameTag_C.ExecuteUbergraph_UI_Mission_Task_TargetNameTag
	// void ExecuteUbergraph_UI_Mission_Task_TargetNameTag(int32_t EntryPoint);                                                 // [0x3a334c0] Final|HasDefaults    
};

/// Class /Game/UI/UI_GuideMessageLayer.UI_GuideMessageLayer_C
/// Size: 0x0000 (0x000748 - 0x000748)
class UUI_GuideMessageLayer_C : public UM1UIGuideMessageLayer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1864;

public:
};

/// Class /Game/UI/Game/Widgets/UI_GameCenter_Fade.UI_GameCenter_Fade_C
/// Size: 0x0000 (0x000738 - 0x000738)
class UUI_GameCenter_Fade_C : public UM1UIGameFadeLayer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1848;

public:
};

/// Class /Game/UI/Common/Resource/RichTextBlockLinkDecorator.RichTextBlockLinkDecorator_C
/// Size: 0x0000 (0x0000D8 - 0x0000D8)
class URichTextBlockLinkDecorator_C : public UM1RichTextBlockLinkDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
};

/// Class /Game/UI/UI_ActorWidgetLayer.UI_ActorWidgetLayer_C
/// Size: 0x0000 (0x000710 - 0x000710)
class UUI_ActorWidgetLayer_C : public UM1UIActorWidgetLayer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1808;

public:
};

/// Class /Game/UI/Test/UI_GameDevStatus.UI_GameDevStatus_C
/// Size: 0x0070 (0x000718 - 0x000788)
class UUI_GameDevStatus_C : public UM1UIGameDevStatus
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1928;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x718, 8, 0, 0})
	CMember(class UM1Button*)                          M1Button                                                    OFFSET(get<T>, {0x720, 8, 0, 0})
	CMember(class UM1TextBlock*)                       TB_GameConnectionState                                      OFFSET(get<T>, {0x728, 8, 0, 0})
	CMember(class UM1TextBlock*)                       TB_LocalTime                                                OFFSET(get<T>, {0x730, 8, 0, 0})
	CMember(class UM1TextBlock*)                       TB_LoginServerAddress                                       OFFSET(get<T>, {0x738, 8, 0, 0})
	CMember(class UM1TextBlock*)                       TB_MiscString                                               OFFSET(get<T>, {0x740, 8, 0, 0})
	CMember(class UM1TextBlock*)                       TB_Ping                                                     OFFSET(get<T>, {0x748, 8, 0, 0})
	CMember(class UM1TextBlock*)                       TB_Platform                                                 OFFSET(get<T>, {0x750, 8, 0, 0})
	CMember(class UM1TextBlock*)                       TB_PlayerLocation                                           OFFSET(get<T>, {0x758, 8, 0, 0})
	CMember(class UM1TextBlock*)                       TB_Revision                                                 OFFSET(get<T>, {0x760, 8, 0, 0})
	CMember(class UM1TextBlock*)                       TB_ServerNetTick                                            OFFSET(get<T>, {0x768, 8, 0, 0})
	CMember(class UM1TextBlock*)                       TB_ServerState                                              OFFSET(get<T>, {0x770, 8, 0, 0})
	CMember(class UM1TextBlock*)                       TB_ServerTime                                               OFFSET(get<T>, {0x778, 8, 0, 0})
	CMember(class UM1TextBlock*)                       TB_ServerWorldTick                                          OFFSET(get<T>, {0x780, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Test/UI_GameDevStatus.UI_GameDevStatus_C.DrawServerTime
	// void DrawServerTime();                                                                                                   // [0x3a334c0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Test/UI_GameDevStatus.UI_GameDevStatus_C.GetTimeTextFilledWithZero
	// void GetTimeTextFilledWithZero(int32_t Time, FText& NewParam);                                                           // [0x3a334c0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Test/UI_GameDevStatus.UI_GameDevStatus_C.DrawLocalTime
	// void DrawLocalTime();                                                                                                    // [0x3a334c0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Test/UI_GameDevStatus.UI_GameDevStatus_C.UpdateLoginServerInfo
	// void UpdateLoginServerInfo();                                                                                            // [0x3a334c0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Test/UI_GameDevStatus.UI_GameDevStatus_C.DrawServerTick
	// void DrawServerTick();                                                                                                   // [0x3a334c0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Test/UI_GameDevStatus.UI_GameDevStatus_C.DrawConnectionInfo
	// void DrawConnectionInfo();                                                                                               // [0x3a334c0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Test/UI_GameDevStatus.UI_GameDevStatus_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Test/UI_GameDevStatus.UI_GameDevStatus_C.BndEvt__UI_GameDevStatus_M1Button_65_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__UI_GameDevStatus_M1Button_65_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();        // [0x3a334c0] BlueprintEvent       
	// Function /Game/UI/Test/UI_GameDevStatus.UI_GameDevStatus_C.ExecuteUbergraph_UI_GameDevStatus
	// void ExecuteUbergraph_UI_GameDevStatus(int32_t EntryPoint);                                                              // [0x3a334c0] Final|HasDefaults    
};

/// Class /Game/UI/UI_AboveMainButUnderStandaloneLayer.UI_AboveMainButUnderStandaloneLayer_C
/// Size: 0x0000 (0x000710 - 0x000710)
class UUI_AboveMainButUnderStandaloneLayer_C : public UM1UIAboveMainButUnderStandaloneLayer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1808;

public:
};

/// Class /Game/UI/Game/DamageTracker/UI_DamageTrackingIconLayer.UI_DamageTrackingIconLayer_C
/// Size: 0x0008 (0x000790 - 0x000798)
class UUI_DamageTrackingIconLayer_C : public UM1UIDamageTrackingIconLayer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1944;

public:
	CMember(class UUI_GameCenter_DamegeIndicator_Arrow_C*) UI_GameCenter_DamegeIndicator_Arrow                     OFFSET(get<T>, {0x790, 8, 0, 0})
};

/// Class /Game/UI/Components/UI_FlipbookImage.UI_FlipbookImage_C
/// Size: 0x0000 (0x000738 - 0x000738)
class UUI_FlipbookImage_C : public UM1UIFlipbookImage
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1848;

public:
};

/// Class /Game/UI/Game/Widgets/UI_GameCenter_DamegeIndicator_Arrow.UI_GameCenter_DamegeIndicator_Arrow_C
/// Size: 0x0030 (0x000720 - 0x000750)
class UUI_GameCenter_DamegeIndicator_Arrow_C : public UM1UIDamageTrackingIcon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1872;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x720, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   UIAnim_FadeOut                                              OFFSET(get<T>, {0x728, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   UIAnim_Hit                                                  OFFSET(get<T>, {0x730, 8, 0, 0})
	CMember(class UWidgetSwitcher*)                    Switcher                                                    OFFSET(get<T>, {0x738, 8, 0, 0})
	DMember(int32_t)                                   StateId                                                     OFFSET(get<int32_t>, {0x740, 4, 0, 0})
	CMember(class UUI_DamageTrackingIconLayer_C*)      NewVar                                                      OFFSET(get<T>, {0x748, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Game/Widgets/UI_GameCenter_DamegeIndicator_Arrow.UI_GameCenter_DamegeIndicator_Arrow_C.PlayAnimations
	// void PlayAnimations();                                                                                                   // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Game/Widgets/UI_GameCenter_DamegeIndicator_Arrow.UI_GameCenter_DamegeIndicator_Arrow_C.StateSetting
	// void StateSetting(int32_t State);                                                                                        // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Game/Widgets/UI_GameCenter_DamegeIndicator_Arrow.UI_GameCenter_DamegeIndicator_Arrow_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Game/Widgets/UI_GameCenter_DamegeIndicator_Arrow.UI_GameCenter_DamegeIndicator_Arrow_C.Construct
	// void Construct();                                                                                                        // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Game/Widgets/UI_GameCenter_DamegeIndicator_Arrow.UI_GameCenter_DamegeIndicator_Arrow_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Game/Widgets/UI_GameCenter_DamegeIndicator_Arrow.UI_GameCenter_DamegeIndicator_Arrow_C.BP_Init
	// void BP_Init();                                                                                                          // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Game/Widgets/UI_GameCenter_DamegeIndicator_Arrow.UI_GameCenter_DamegeIndicator_Arrow_C.ExecuteUbergraph_UI_GameCenter_DamegeIndicator_Arrow
	// void ExecuteUbergraph_UI_GameCenter_DamegeIndicator_Arrow(int32_t EntryPoint);                                           // [0x3a334c0] Final|HasDefaults    
};

/// Class /Game/UI/Components/UI_Deco_TitleLine_04.UI_Deco_TitleLine_04_C
/// Size: 0x0028 (0x000708 - 0x000730)
class UUI_Deco_TitleLine_04_C : public UM1UIWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x708, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x710, 8, 0, 0})
	CMember(class UImage*)                             Image_Deco                                                  OFFSET(get<T>, {0x718, 8, 0, 0})
	CMember(class UImage*)                             Image_Deco1                                                 OFFSET(get<T>, {0x720, 8, 0, 0})
	DMember(double)                                    DecoWidth                                                   OFFSET(get<double>, {0x728, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Components/UI_Deco_TitleLine_04.UI_Deco_TitleLine_04_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Components/UI_Deco_TitleLine_04.UI_Deco_TitleLine_04_C.Construct
	// void Construct();                                                                                                        // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Components/UI_Deco_TitleLine_04.UI_Deco_TitleLine_04_C.PlaySetOpenUI
	// void PlaySetOpenUI();                                                                                                    // [0x3a334c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Components/UI_Deco_TitleLine_04.UI_Deco_TitleLine_04_C.ExecuteUbergraph_UI_Deco_TitleLine_04
	// void ExecuteUbergraph_UI_Deco_TitleLine_04(int32_t EntryPoint);                                                          // [0x3a334c0] Final|HasDefaults    
};

/// Class /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UBPL_UILibrary_C : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.Get UI ItemOptionTierColor
	// void Get UI ItemOptionTierColor(EM1ItemOptionTierType OptionTierType, class UObject* __WorldContext, FLinearColor& TierColor); // [0x3a334c0] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.Get UI WeaponClass_Icon
	// void Get UI WeaponClass_Icon(EM1EquipItemClassType InEquipItemClass, class UObject* __WorldContext, TWeakObjectPtr<UTexture2D*>& ElementalTypeIcon); // [0x3a334c0] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.Get UI CurrencyType_Icon
	// void Get UI CurrencyType_Icon(EM1CurrencyType InCurrencyType, class UObject* __WorldContext, TWeakObjectPtr<UTexture2D*>& ElementalTypeIcon); // [0x3a334c0] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.Get UI RoundsType_Text
	// void Get UI RoundsType_Text(EM1RoundsType InRoundsType, class UObject* __WorldContext, FString& ElementalTypeText);      // [0x3a334c0] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.Get UI RoundsType_Icon2
	// void Get UI RoundsType_Icon2(EM1RoundsType InRoundsType, class UObject* __WorldContext, class UTexture2D*& ElementalTypeIcon); // [0x3a334c0] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.Get UI RoundsType_Icon
	// void Get UI RoundsType_Icon(EM1RoundsType InRoundsType, class UObject* __WorldContext, class UTexture2D*& ElementalTypeIcon); // [0x3a334c0] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.Get UI ElemntalType_Color
	// void Get UI ElemntalType_Color(EM1ElementalDamageChannel InElementalDamageType, class UObject* __WorldContext, FLinearColor& ElementalTypeColor); // [0x3a334c0] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.Get UI ElemntalType_Text
	// void Get UI ElemntalType_Text(EM1ElementalDamageChannel InElementalDamageType, class UObject* __WorldContext, FString& ElementalTypeText); // [0x3a334c0] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.Get UI ElemntalType_Icon
	// void Get UI ElemntalType_Icon(EM1ElementalDamageChannel InElementalDamageType, class UObject* __WorldContext, class UTexture2D*& ElementalTypeIcon); // [0x3a334c0] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.Get UI TierColor_Line
	// void Get UI TierColor_Line(EM1ItemTierType InItemTierType, class UObject* __WorldContext, FLinearColor& TierColor_Line); // [0x3a334c0] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.Get UI TierColor_Base
	// void Get UI TierColor_Base(EM1ItemTierType InItemTierType, class UObject* __WorldContext, FLinearColor& TierColor);      // [0x3a334c0] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.Set UI Rounds Color
	// void Set UI Rounds Color(class UImage* InImage, EM1RoundsType InRoundType, class UObject* __WorldContext);               // [0x3a334c0] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.SetUICurrencyIcon
	// void SetUICurrencyIcon(class UImage* Image, EM1CurrencyType CurrencyType, class UObject* __WorldContext);                // [0x3a334c0] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.SetUIWarringColor_Text
	// void SetUIWarringColor_Text(class UM1TextBlock* InText, class UImage* InImage, class UBorder* InBorder, class UObject* __WorldContext); // [0x3a334c0] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.SetUIMaxMasteryColor_Text
	// void SetUIMaxMasteryColor_Text(class UM1TextBlock* InText, class UImage* InImage, class UBorder* InBorder, class UObject* __WorldContext); // [0x3a334c0] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.SetUIMaxCharacterColor_Text
	// void SetUIMaxCharacterColor_Text(class UM1TextBlock* InText, class UImage* InImage, class UBorder* InBorder, class UObject* __WorldContext); // [0x3a334c0] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.SetUIKeyColor_Material
	// void SetUIKeyColor_Material(class UM1TextBlock* InText, class UImage* InImage, class UBorder* InBorder, class UObject* __WorldContext); // [0x3a334c0] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Components/BPL_UILibrary.BPL_UILibrary_C.SetUIKeyColor
	// void SetUIKeyColor(class UM1TextBlock* InText, class UImage* InImage, class UBorder* InBorder, class UObject* __WorldContext); // [0x3a334c0] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/Components/UI_Deco_Back_001.UI_Deco_Back_001_C
/// Size: 0x0079 (0x000708 - 0x000781)
class UUI_Deco_Back_001_C : public UM1UIWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1921;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x708, 8, 0, 0})
	CMember(class UImage*)                             Deco                                                        OFFSET(get<T>, {0x710, 8, 0, 0})
	CMember(class UImage*)                             Default_BG                                                  OFFSET(get<T>, {0x718, 8, 0, 0})
	CMember(class UImage*)                             Dot_LB                                                      OFFSET(get<T>, {0x720, 8, 0, 0})
	CMember(class UImage*)                             Dot_LT                                                      OFFSET(get<T>, {0x728, 8, 0, 0})
	CMember(class UImage*)                             Dot_RB                                                      OFFSET(get<T>, {0x730, 8, 0, 0})
	CMember(class UImage*)                             Dot_RT                                                      OFFSET(get<T>, {0x738, 8, 0, 0})
	CMember(class UImage*)                             Out_Line_B                                                  OFFSET(get<T>, {0x740, 8, 0, 0})
	CMember(class UImage*)                             Out_Line_L                                                  OFFSET(get<T>, {0x748, 8, 0, 0})
	CMember(class UImage*)                             Out_Line_R                                                  OFFSET(get<T>, {0x750, 8, 0, 0})
	CMember(class UImage*)                             Out_Line_T                                                  OFFSET(get<T>, {0x758, 8, 0, 0})
	DMember(bool)                                      ThisOFF                                                     OFFSET(get<bool>, {0x760, 1, 0, 0})
	DMember(bool)                                      DotOFF                                                      OFFSET(get<bool>, {0x761, 1, 0, 0})
	DMember(bool)                                      OutlineOFF                                                  OFFSET(get<bool>, {0x762, 1, 0, 0})
	SMember(FLinearColor)                              BgColor                                                     OFFSET(getStruct<T>, {0x764, 16, 0, 0})
	DMember(double)                                    BgOpacity                                                   OFFSET(get<double>, {0x778, 8, 0, 0})
	DMember(bool)                                      White_Gradient                                              OFFSET(get<bool>, {0x780, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Components/UI_Deco_Back_001.UI_Deco_Back_001_C.SetUIStyleDecoBack001
	// void SetUIStyleDecoBack001(bool BgOFF, bool DotOFF, bool OutlineOFF, FLinearColor BgColor, double BgOpacity, bool White_Gradient); // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Components/UI_Deco_Back_001.UI_Deco_Back_001_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Components/UI_Deco_Back_001.UI_Deco_Back_001_C.Construct
	// void Construct();                                                                                                        // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Components/UI_Deco_Back_001.UI_Deco_Back_001_C.ExecuteUbergraph_UI_Deco_Back_001
	// void ExecuteUbergraph_UI_Deco_Back_001(int32_t EntryPoint);                                                              // [0x3a334c0] Final                
};

/// Class /Game/UI/Components/UI_Button_Deco_Default_Dpad1_Deco.UI_Button_Deco_Default_Dpad1_Deco_C
/// Size: 0x0020 (0x000708 - 0x000728)
class UUI_Button_Deco_Default_Dpad1_Deco_C : public UM1UIWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1832;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x708, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   UIAnim_Loop                                                 OFFSET(get<T>, {0x710, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x718, 8, 0, 0})
	CMember(class UImage*)                             Image1                                                      OFFSET(get<T>, {0x720, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Components/UI_Button_Deco_Default_Dpad1_Deco.UI_Button_Deco_Default_Dpad1_Deco_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Components/UI_Button_Deco_Default_Dpad1_Deco.UI_Button_Deco_Default_Dpad1_Deco_C.ExecuteUbergraph_UI_Button_Deco_Default_Dpad1_Deco
	// void ExecuteUbergraph_UI_Button_Deco_Default_Dpad1_Deco(int32_t EntryPoint);                                             // [0x3a334c0] Final                
};

/// Class /Game/UI/Components/UI_CursorFocusDecoContent.UI_CursorFocusDecoContent_C
/// Size: 0x002A (0x000708 - 0x000732)
class UUI_CursorFocusDecoContent_C : public UM1UIFocusDecoContent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1842;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x708, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   UIAnim_OverEffect                                           OFFSET(get<T>, {0x710, 8, 0, 0})
	CMember(class UUI_Button_Deco_Default_Dpad1_Deco_C*) Dpad_Deco                                                 OFFSET(get<T>, {0x718, 8, 0, 0})
	CMember(class UImage*)                             Fx_Shine_DefaultV                                           OFFSET(get<T>, {0x720, 8, 0, 0})
	CMember(class UOverlay*)                           Over_Frame                                                  OFFSET(get<T>, {0x728, 8, 0, 0})
	DMember(bool)                                      UISelected                                                  OFFSET(get<bool>, {0x730, 1, 0, 0})
	DMember(bool)                                      UIFocused                                                   OFFSET(get<bool>, {0x731, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Components/UI_CursorFocusDecoContent.UI_CursorFocusDecoContent_C.Construct
	// void Construct();                                                                                                        // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Components/UI_CursorFocusDecoContent.UI_CursorFocusDecoContent_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Components/UI_CursorFocusDecoContent.UI_CursorFocusDecoContent_C.ExecuteUbergraph_UI_CursorFocusDecoContent
	// void ExecuteUbergraph_UI_CursorFocusDecoContent(int32_t EntryPoint);                                                     // [0x3a334c0] Final                
};

/// Class /Game/UI/Components/UI_CursorFocusDeco.UI_CursorFocusDeco_C
/// Size: 0x000A (0x000718 - 0x000722)
class UUI_CursorFocusDeco_C : public UM1UIFocusDeco
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1826;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x718, 8, 0, 0})
	DMember(bool)                                      UISelected                                                  OFFSET(get<bool>, {0x720, 1, 0, 0})
	DMember(bool)                                      UIFocused                                                   OFFSET(get<bool>, {0x721, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Components/UI_CursorFocusDeco.UI_CursorFocusDeco_C.Construct
	// void Construct();                                                                                                        // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Components/UI_CursorFocusDeco.UI_CursorFocusDeco_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Components/UI_CursorFocusDeco.UI_CursorFocusDeco_C.ExecuteUbergraph_UI_CursorFocusDeco
	// void ExecuteUbergraph_UI_CursorFocusDeco(int32_t EntryPoint);                                                            // [0x3a334c0] Final                
};

/// Class /Game/UI/Components/UI_Chat_Button.UI_Chat_Button_C
/// Size: 0x0048 (0x0008A8 - 0x0008F0)
class UUI_Chat_Button_C : public UM1UIButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2288;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x8A8, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x8B0, 8, 0, 0})
	CMember(class UOverlay*)                           Image_Select                                                OFFSET(get<T>, {0x8B8, 8, 0, 0})
	CMember(class UImage*)                             Img_Over                                                    OFFSET(get<T>, {0x8C0, 8, 0, 0})
	CMember(class UOverlay*)                           NewIcon                                                     OFFSET(get<T>, {0x8C8, 8, 0, 0})
	CMember(class UUI_Deco_Back_001_C*)                UI_Deco_Back_001                                            OFFSET(get<T>, {0x8D0, 8, 0, 0})
	DMember(int32_t)                                   FontSize                                                    OFFSET(get<int32_t>, {0x8D8, 4, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HAling                                                      OFFSET(get<T>, {0x8DC, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  EventShowNewIcon                                            OFFSET(getStruct<T>, {0x8E0, 16, 0, 0})


	/// Functions
	// Function /Game/UI/Components/UI_Chat_Button.UI_Chat_Button_C.SetFontAlign
	// void SetFontAlign(class UM1TextBlock* Target, TEnumAsByte<EHorizontalAlignment> HAlignment);                             // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Components/UI_Chat_Button.UI_Chat_Button_C.BP_ChangeButtonUI
	// void BP_ChangeButtonUI(EM1ButtonUIType InType);                                                                          // [0x3a334c0] Event|Public|BlueprintEvent 
	// Function /Game/UI/Components/UI_Chat_Button.UI_Chat_Button_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Components/UI_Chat_Button.UI_Chat_Button_C.BP_Selected
	// void BP_Selected(bool InSelected);                                                                                       // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Components/UI_Chat_Button.UI_Chat_Button_C.EventShowNewIcon_Event
	// void EventShowNewIcon_Event(bool bIsShow);                                                                               // [0x3a334c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Components/UI_Chat_Button.UI_Chat_Button_C.ExecuteUbergraph_UI_Chat_Button
	// void ExecuteUbergraph_UI_Chat_Button(int32_t EntryPoint);                                                                // [0x3a334c0] Final|HasDefaults    
	// Function /Game/UI/Components/UI_Chat_Button.UI_Chat_Button_C.EventShowNewIcon__DelegateSignature
	// void EventShowNewIcon__DelegateSignature();                                                                              // [0x3a334c0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/Components/UI_KeySymbol_01.UI_KeySymbol_01_C
/// Size: 0x0039 (0x000760 - 0x000799)
class UUI_KeySymbol_01_C : public UM1UIKeySymbol
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1945;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x760, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   UIAnim_Start                                                OFFSET(get<T>, {0x768, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   ANIM_HoldingStart                                           OFFSET(get<T>, {0x770, 8, 0, 0})
	CMember(class UImage*)                             Image_Anchor                                                OFFSET(get<T>, {0x778, 8, 0, 0})
	CMember(class UOverlay*)                           P_Key                                                       OFFSET(get<T>, {0x780, 8, 0, 0})
	CMember(class UOverlay*)                           Panel_HoldingProgress                                       OFFSET(get<T>, {0x788, 8, 0, 0})
	CMember(class UImage*)                             Widget_HoldingProgress                                      OFFSET(get<T>, {0x790, 8, 0, 0})
	DMember(bool)                                      Dummy_ShowProgress                                          OFFSET(get<bool>, {0x798, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Components/UI_KeySymbol_01.UI_KeySymbol_01_C.SequenceEvent__ENTRYPOINTUI_KeySymbol_01
	// void SequenceEvent__ENTRYPOINTUI_KeySymbol_01();                                                                         // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Components/UI_KeySymbol_01.UI_KeySymbol_01_C.KeySymbol_Change02
	// void KeySymbol_Change02(EM1ButtonUIType EM1Button);                                                                      // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Components/UI_KeySymbol_01.UI_KeySymbol_01_C.UISetKeyColor
	// void UISetKeyColor();                                                                                                    // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Components/UI_KeySymbol_01.UI_KeySymbol_01_C.ResetProgress
	// void ResetProgress();                                                                                                    // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Components/UI_KeySymbol_01.UI_KeySymbol_01_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Components/UI_KeySymbol_01.UI_KeySymbol_01_C.BP_ChangeDimmedUI
	// void BP_ChangeDimmedUI(bool InDimmed);                                                                                   // [0x3a334c0] Event|Public|BlueprintEvent 
	// Function /Game/UI/Components/UI_KeySymbol_01.UI_KeySymbol_01_C.BP_ChangeProgressUI
	// void BP_ChangeProgressUI(bool InStart, float InDuration);                                                                // [0x3a334c0] Event|Public|BlueprintEvent 
	// Function /Game/UI/Components/UI_KeySymbol_01.UI_KeySymbol_01_C.BP_SetProgressUI
	// void BP_SetProgressUI(bool bUseProgress);                                                                                // [0x3a334c0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Components/UI_KeySymbol_01.UI_KeySymbol_01_C.SequenceEvent
	// void SequenceEvent();                                                                                                    // [0x3a334c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Components/UI_KeySymbol_01.UI_KeySymbol_01_C.ExecuteUbergraph_UI_KeySymbol_01
	// void ExecuteUbergraph_UI_KeySymbol_01(int32_t EntryPoint);                                                               // [0x3a334c0] Final                
};

/// Class /Game/UI/Game/Widgets/UI_GameCenter_DamegeIndicator_Arrow1.UI_GameCenter_DamegeIndicator_Arrow1_C
/// Size: 0x0048 (0x000720 - 0x000768)
class UUI_GameCenter_DamegeIndicator_Arrow1_C : public UM1UIDamageTrackingIcon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1896;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x720, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Original                                                    OFFSET(get<T>, {0x728, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   UIAnim_FadeOut                                              OFFSET(get<T>, {0x730, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   UIAnim_Hit                                                  OFFSET(get<T>, {0x738, 8, 0, 0})
	CMember(class UBorder*)                            Border                                                      OFFSET(get<T>, {0x740, 8, 0, 0})
	CMember(class UCanvasPanel*)                       Resource                                                    OFFSET(get<T>, {0x748, 8, 0, 0})
	CMember(class UImage*)                             Shield_02                                                   OFFSET(get<T>, {0x750, 8, 0, 0})
	DMember(int32_t)                                   StateId                                                     OFFSET(get<int32_t>, {0x758, 4, 0, 0})
	DMember(double)                                    PlayTime                                                    OFFSET(get<double>, {0x760, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Game/Widgets/UI_GameCenter_DamegeIndicator_Arrow1.UI_GameCenter_DamegeIndicator_Arrow1_C.PlayAnimations
	// void PlayAnimations(double DeltaTime);                                                                                   // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Game/Widgets/UI_GameCenter_DamegeIndicator_Arrow1.UI_GameCenter_DamegeIndicator_Arrow1_C.PlayAnimations
	// void PlayAnimations();                                                                                                   // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Game/Widgets/UI_GameCenter_DamegeIndicator_Arrow1.UI_GameCenter_DamegeIndicator_Arrow1_C.StateSetting
	// void StateSetting(int32_t State);                                                                                        // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Game/Widgets/UI_GameCenter_DamegeIndicator_Arrow1.UI_GameCenter_DamegeIndicator_Arrow1_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Game/Widgets/UI_GameCenter_DamegeIndicator_Arrow1.UI_GameCenter_DamegeIndicator_Arrow1_C.Construct
	// void Construct();                                                                                                        // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Game/Widgets/UI_GameCenter_DamegeIndicator_Arrow1.UI_GameCenter_DamegeIndicator_Arrow1_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Game/Widgets/UI_GameCenter_DamegeIndicator_Arrow1.UI_GameCenter_DamegeIndicator_Arrow1_C.BP_Init
	// void BP_Init();                                                                                                          // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Game/Widgets/UI_GameCenter_DamegeIndicator_Arrow1.UI_GameCenter_DamegeIndicator_Arrow1_C.ExecuteUbergraph_UI_GameCenter_DamegeIndicator_Arrow1
	// void ExecuteUbergraph_UI_GameCenter_DamegeIndicator_Arrow1(int32_t EntryPoint);                                          // [0x3a334c0] Final|HasDefaults    
};

/// Class /Game/UI/Components/UI_KeySymbol_Support.UI_KeySymbol_Support_C
/// Size: 0x0000 (0x000799 - 0x000799)
class UUI_KeySymbol_Support_C : public UUI_KeySymbol_01_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1945;

public:
};

/// Class /Game/UI/Components/UI_KeyButton_Chatting.UI_KeyButton_Chatting_C
/// Size: 0x0011 (0x0008F0 - 0x000901)
class UUI_KeyButton_Chatting_C : public UM1UIKeyButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2305;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x8F0, 8, 0, 0})
	CMember(class USizeBox*)                           Panel_SizeBox                                               OFFSET(get<T>, {0x8F8, 8, 0, 0})
	DMember(bool)                                      bShowText                                                   OFFSET(get<bool>, {0x900, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Components/UI_KeyButton_Chatting.UI_KeyButton_Chatting_C.SetTextColor
	// void SetTextColor(FSlateColor KeyText, FSlateColor ButtonText);                                                          // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Components/UI_KeyButton_Chatting.UI_KeyButton_Chatting_C.SetTextureAndOpacity
	// void SetTextureAndOpacity(class UImage* Target, class UTexture* PaperTexture, double Opacity);                           // [0x3a334c0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Components/UI_KeyButton_Chatting.UI_KeyButton_Chatting_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Components/UI_KeyButton_Chatting.UI_KeyButton_Chatting_C.BP_ChangeButtonUI
	// void BP_ChangeButtonUI(EM1ButtonUIType InType);                                                                          // [0x3a334c0] Event|Public|BlueprintEvent 
	// Function /Game/UI/Components/UI_KeyButton_Chatting.UI_KeyButton_Chatting_C.BP_ChangeDimmedUI
	// void BP_ChangeDimmedUI(bool InDimmed);                                                                                   // [0x3a334c0] Event|Public|BlueprintEvent 
	// Function /Game/UI/Components/UI_KeyButton_Chatting.UI_KeyButton_Chatting_C.ExecuteUbergraph_UI_KeyButton_Chatting
	// void ExecuteUbergraph_UI_KeyButton_Chatting(int32_t EntryPoint);                                                         // [0x3a334c0] Final|HasDefaults    
};

/// Class /Game/UI/Components/UI_KeySymbol_Dual.UI_KeySymbol_Dual_C
/// Size: 0x0050 (0x000770 - 0x0007C0)
class UUI_KeySymbol_Dual_C : public UM1UIKeySymbolDual
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1984;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x770, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   UIAnim_Start                                                OFFSET(get<T>, {0x778, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   ANIM_HoldingStart                                           OFFSET(get<T>, {0x780, 8, 0, 0})
	CMember(class UHorizontalBox*)                     HorizontalBox                                               OFFSET(get<T>, {0x788, 8, 0, 0})
	CMember(class UImage*)                             Image_Anchor                                                OFFSET(get<T>, {0x790, 8, 0, 0})
	CMember(class UImage*)                             Image_Plus                                                  OFFSET(get<T>, {0x798, 8, 0, 0})
	CMember(class UOverlay*)                           P_Key                                                       OFFSET(get<T>, {0x7A0, 8, 0, 0})
	CMember(class USizeBox*)                           P_Plus_Size                                                 OFFSET(get<T>, {0x7A8, 8, 0, 0})
	CMember(class UOverlay*)                           Panel_HoldingProgress                                       OFFSET(get<T>, {0x7B0, 8, 0, 0})
	CMember(class UImage*)                             Widget_HoldingProgress                                      OFFSET(get<T>, {0x7B8, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Components/UI_KeySymbol_Dual.UI_KeySymbol_Dual_C.SequenceEvent__ENTRYPOINTUI_KeySymbol_Dual
	// void SequenceEvent__ENTRYPOINTUI_KeySymbol_Dual();                                                                       // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Components/UI_KeySymbol_Dual.UI_KeySymbol_Dual_C.KeySymbol_Change01
	// void KeySymbol_Change01(EM1ButtonUIType EM1Button);                                                                      // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Components/UI_KeySymbol_Dual.UI_KeySymbol_Dual_C.ResetProgress
	// void ResetProgress();                                                                                                    // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Components/UI_KeySymbol_Dual.UI_KeySymbol_Dual_C.BP_ChangeDimmedUI
	// void BP_ChangeDimmedUI(bool InDimmed);                                                                                   // [0x3a334c0] Event|Public|BlueprintEvent 
	// Function /Game/UI/Components/UI_KeySymbol_Dual.UI_KeySymbol_Dual_C.BP_ChangeProgressUI
	// void BP_ChangeProgressUI(bool InStart, float InDuration);                                                                // [0x3a334c0] Event|Public|BlueprintEvent 
	// Function /Game/UI/Components/UI_KeySymbol_Dual.UI_KeySymbol_Dual_C.BP_SetProgressUI
	// void BP_SetProgressUI(bool bUseProgress);                                                                                // [0x3a334c0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Components/UI_KeySymbol_Dual.UI_KeySymbol_Dual_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Components/UI_KeySymbol_Dual.UI_KeySymbol_Dual_C.BP_SetPlusImage
	// void BP_SetPlusImage(class UTexture2D* InTexture);                                                                       // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Components/UI_KeySymbol_Dual.UI_KeySymbol_Dual_C.SequenceEvent
	// void SequenceEvent();                                                                                                    // [0x3a334c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Components/UI_KeySymbol_Dual.UI_KeySymbol_Dual_C.ExecuteUbergraph_UI_KeySymbol_Dual
	// void ExecuteUbergraph_UI_KeySymbol_Dual(int32_t EntryPoint);                                                             // [0x3a334c0] Final                
};

/// Class /Game/UI/Components/UI_KeyButton.UI_KeyButton_C
/// Size: 0x0022 (0x0008F0 - 0x000912)
class UUI_KeyButton_C : public UM1UIKeyButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2322;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x8F0, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   ANIM_Focus                                                  OFFSET(get<T>, {0x8F8, 8, 0, 0})
	CMember(class UHorizontalBox*)                     HorizontalBox                                               OFFSET(get<T>, {0x900, 8, 0, 0})
	CMember(class USizeBox*)                           SizeBox                                                     OFFSET(get<T>, {0x908, 8, 0, 0})
	DMember(bool)                                      bShowText                                                   OFFSET(get<bool>, {0x910, 1, 0, 0})
	DMember(bool)                                      Focused                                                     OFFSET(get<bool>, {0x911, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Components/UI_KeyButton.UI_KeyButton_C.SetTextColor
	// void SetTextColor(FSlateColor KeyText, FSlateColor ButtonText);                                                          // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Components/UI_KeyButton.UI_KeyButton_C.SetTextureAndOpacity
	// void SetTextureAndOpacity(class UImage* Target, class UTexture* PaperTexture, double Opacity);                           // [0x3a334c0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Components/UI_KeyButton.UI_KeyButton_C.BP_ChangeButtonUI
	// void BP_ChangeButtonUI(EM1ButtonUIType InType);                                                                          // [0x3a334c0] Event|Public|BlueprintEvent 
	// Function /Game/UI/Components/UI_KeyButton.UI_KeyButton_C.BP_ChangeDimmedUI
	// void BP_ChangeDimmedUI(bool InDimmed);                                                                                   // [0x3a334c0] Event|Public|BlueprintEvent 
	// Function /Game/UI/Components/UI_KeyButton.UI_KeyButton_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Components/UI_KeyButton.UI_KeyButton_C.ExecuteUbergraph_UI_KeyButton
	// void ExecuteUbergraph_UI_KeyButton(int32_t EntryPoint);                                                                  // [0x3a334c0] Final|HasDefaults    
};

/// Class /Game/UI/Common/Resource/RichTextBlockDecoratorBase.RichTextBlockDecoratorBase_C
/// Size: 0x0000 (0x000038 - 0x000038)
class URichTextBlockDecoratorBase_C : public UM1RichTextBlockImageDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/UI/Components/UI_ContextButtons.UI_ContextButtons_C
/// Size: 0x0062 (0x000790 - 0x0007F2)
class UUI_ContextButtons_C : public UM1UIContextButtons
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2034;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x790, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   UIAnim_Open                                                 OFFSET(get<T>, {0x798, 8, 0, 0})
	CMember(class UNamedSlot*)                         BackCustom                                                  OFFSET(get<T>, {0x7A0, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x7A8, 8, 0, 0})
	CMember(class UOverlay*)                           P_Back                                                      OFFSET(get<T>, {0x7B0, 8, 0, 0})
	CMember(class UOverlay*)                           P_Buttons                                                   OFFSET(get<T>, {0x7B8, 8, 0, 0})
	CMember(class UUI_KeyButton_C*)                    UI_KeyButton                                                OFFSET(get<T>, {0x7C0, 8, 0, 0})
	CMember(class UUI_KeyButton_C*)                    UI_KeyButton1                                               OFFSET(get<T>, {0x7C8, 8, 0, 0})
	CMember(class UUI_KeyButton_C*)                    UI_KeyButton2                                               OFFSET(get<T>, {0x7D0, 8, 0, 0})
	CMember(class UUI_KeyButton_C*)                    UI_KeyButton3                                               OFFSET(get<T>, {0x7D8, 8, 0, 0})
	CMember(class UUI_KeyButton_C*)                    UI_KeyButton4                                               OFFSET(get<T>, {0x7E0, 8, 0, 0})
	CMember(class UUI_KeyButton_C*)                    UI_KeyButton5                                               OFFSET(get<T>, {0x7E8, 8, 0, 0})
	DMember(bool)                                      BGImage                                                     OFFSET(get<bool>, {0x7F0, 1, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         Button_Horizontal_Alignment                                 OFFSET(get<T>, {0x7F1, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Components/UI_ContextButtons.UI_ContextButtons_C.SetBGImageVisibility
	// void SetBGImageVisibility(bool bShow);                                                                                   // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Components/UI_ContextButtons.UI_ContextButtons_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Components/UI_ContextButtons.UI_ContextButtons_C.Construct
	// void Construct();                                                                                                        // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Components/UI_ContextButtons.UI_ContextButtons_C.OnKeyButton
	// void OnKeyButton(class UM1UIWidget* InWidget);                                                                           // [0x3a334c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Components/UI_ContextButtons.UI_ContextButtons_C.ExecuteUbergraph_UI_ContextButtons
	// void ExecuteUbergraph_UI_ContextButtons(int32_t EntryPoint);                                                             // [0x3a334c0] Final                
};

/// Class /Game/UI/Common/UI_ToastMessage_B_Crosshair.UI_ToastMessage_B_Crosshair_C
/// Size: 0x0008 (0x000730 - 0x000738)
class UUI_ToastMessage_B_Crosshair_C : public UM1UIToastMessage
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1848;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x730, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Common/UI_ToastMessage_B_Crosshair.UI_ToastMessage_B_Crosshair_C.Construct
	// void Construct();                                                                                                        // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Common/UI_ToastMessage_B_Crosshair.UI_ToastMessage_B_Crosshair_C.ExecuteUbergraph_UI_ToastMessage_B_Crosshair
	// void ExecuteUbergraph_UI_ToastMessage_B_Crosshair(int32_t EntryPoint);                                                   // [0x3a334c0] Final                
};

/// Class /Game/UI/Common/UI_ToastMessage_BottomLineButton.UI_ToastMessage_BottomLineButton_C
/// Size: 0x0028 (0x000778 - 0x0007A0)
class UUI_ToastMessage_BottomLineButton_C : public UM1UIToastMessage_HoldButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1952;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x778, 8, 0, 0})
	CMember(class UImage*)                             Effect                                                      OFFSET(get<T>, {0x780, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x788, 8, 0, 0})
	CMember(class UOverlay*)                           Overlay                                                     OFFSET(get<T>, {0x790, 8, 0, 0})
	CMember(class UUI_Deco_TitleLine_04_C*)            UI_Deco_TitleLine_04                                        OFFSET(get<T>, {0x798, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Common/UI_ToastMessage_BottomLineButton.UI_ToastMessage_BottomLineButton_C.SequenceEvent__ENTRYPOINTUI_ToastMessage_BottomLineButton
	// void SequenceEvent__ENTRYPOINTUI_ToastMessage_BottomLineButton();                                                        // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Common/UI_ToastMessage_BottomLineButton.UI_ToastMessage_BottomLineButton_C.BP_IsVisibleToast
	// bool BP_IsVisibleToast();                                                                                                // [0x3a334c0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/UI/Common/UI_ToastMessage_BottomLineButton.UI_ToastMessage_BottomLineButton_C.uiplayakevent
	// void uiplayakevent(class UAkAudioEvent* AkEvent);                                                                        // [0x3a334c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Common/UI_ToastMessage_BottomLineButton.UI_ToastMessage_BottomLineButton_C.Construct
	// void Construct();                                                                                                        // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Common/UI_ToastMessage_BottomLineButton.UI_ToastMessage_BottomLineButton_C.ExecuteUbergraph_UI_ToastMessage_BottomLineButton
	// void ExecuteUbergraph_UI_ToastMessage_BottomLineButton(int32_t EntryPoint);                                              // [0x3a334c0] Final                
};

/// Class /Game/UI/Common/UI_ToastMessage_RTop_Side.UI_ToastMessage_RTop_Side_C
/// Size: 0x0018 (0x000730 - 0x000748)
class UUI_ToastMessage_RTop_Side_C : public UM1UIToastMessage
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1864;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x730, 8, 0, 0})
	CMember(class UImage*)                             Effect                                                      OFFSET(get<T>, {0x738, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x740, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Common/UI_ToastMessage_RTop_Side.UI_ToastMessage_RTop_Side_C.SequenceEvent__ENTRYPOINTUI_ToastMessage_RTop_Side
	// void SequenceEvent__ENTRYPOINTUI_ToastMessage_RTop_Side();                                                               // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Common/UI_ToastMessage_RTop_Side.UI_ToastMessage_RTop_Side_C.uiplayakevent
	// void uiplayakevent(class UAkAudioEvent* InAudioEvent);                                                                   // [0x3a334c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Common/UI_ToastMessage_RTop_Side.UI_ToastMessage_RTop_Side_C.Construct
	// void Construct();                                                                                                        // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Common/UI_ToastMessage_RTop_Side.UI_ToastMessage_RTop_Side_C.ExecuteUbergraph_UI_ToastMessage_RTop_Side
	// void ExecuteUbergraph_UI_ToastMessage_RTop_Side(int32_t EntryPoint);                                                     // [0x3a334c0] Final                
};

/// Class /Game/UI/Common/UI_ToastMessage_BottomLine.UI_ToastMessage_BottomLine_C
/// Size: 0x0018 (0x000730 - 0x000748)
class UUI_ToastMessage_BottomLine_C : public UM1UIToastMessage
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1864;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x730, 8, 0, 0})
	CMember(class UImage*)                             Effect                                                      OFFSET(get<T>, {0x738, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x740, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Common/UI_ToastMessage_BottomLine.UI_ToastMessage_BottomLine_C.SequenceEvent__ENTRYPOINTUI_ToastMessage_BottomLine
	// void SequenceEvent__ENTRYPOINTUI_ToastMessage_BottomLine();                                                              // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Common/UI_ToastMessage_BottomLine.UI_ToastMessage_BottomLine_C.uiplayakevent
	// void uiplayakevent(class UAkAudioEvent* AkEvent);                                                                        // [0x3a334c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Common/UI_ToastMessage_BottomLine.UI_ToastMessage_BottomLine_C.Construct
	// void Construct();                                                                                                        // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Common/UI_ToastMessage_BottomLine.UI_ToastMessage_BottomLine_C.ExecuteUbergraph_UI_ToastMessage_BottomLine
	// void ExecuteUbergraph_UI_ToastMessage_BottomLine(int32_t EntryPoint);                                                    // [0x3a334c0] Final                
};

/// Class /Game/UI/Chatting/UI_ChattingItem.UI_ChattingItem_C
/// Size: 0x0068 (0x000718 - 0x000780)
class UUI_ChattingItem_C : public UM1UIChattingItem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1920;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x718, 8, 0, 0})
	SMember(FText)                                     DecorateSenderLiteral                                       OFFSET(getStruct<T>, {0x720, 24, 0, 0})
	SMember(FText)                                     LinkAction                                                  OFFSET(getStruct<T>, {0x738, 24, 0, 0})
	SMember(FText)                                     LinkContext                                                 OFFSET(getStruct<T>, {0x750, 24, 0, 0})
	SMember(FText)                                     LinkAddiionalInfo                                           OFFSET(getStruct<T>, {0x768, 24, 0, 0})


	/// Functions
	// Function /Game/UI/Chatting/UI_ChattingItem.UI_ChattingItem_C.CombineChattingTypeWithSenderString
	// void CombineChattingTypeWithSenderString(class UM1UIDataChatItem* InData, FString& CombinedString);                      // [0x3a334c0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Chatting/UI_ChattingItem.UI_ChattingItem_C.GetDecoratedSenderString
	// void GetDecoratedSenderString(class UM1UIDataChatItem* InData, FString& DecoratedSender);                                // [0x3a334c0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Chatting/UI_ChattingItem.UI_ChattingItem_C.SetDataImpl
	// void SetDataImpl(class UM1UIData* InData);                                                                               // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Chatting/UI_ChattingItem.UI_ChattingItem_C.OnListItemObjectSet
	// void OnListItemObjectSet(class UObject* ListItemObject);                                                                 // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Chatting/UI_ChattingItem.UI_ChattingItem_C.ExecuteUbergraph_UI_ChattingItem
	// void ExecuteUbergraph_UI_ChattingItem(int32_t EntryPoint);                                                               // [0x3a334c0] Final|HasDefaults    
};

/// Class /Game/UI/Common/UI_ToastMessage_MidLine.UI_ToastMessage_MidLine_C
/// Size: 0x0010 (0x000730 - 0x000740)
class UUI_ToastMessage_MidLine_C : public UM1UIToastMessage
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1856;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x730, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x738, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Common/UI_ToastMessage_MidLine.UI_ToastMessage_MidLine_C.SequenceEvent__ENTRYPOINTUI_ToastMessage_MidLine
	// void SequenceEvent__ENTRYPOINTUI_ToastMessage_MidLine();                                                                 // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Common/UI_ToastMessage_MidLine.UI_ToastMessage_MidLine_C.BP_playakEvent
	// void BP_playakEvent(class UAkAudioEvent* AkEvent);                                                                       // [0x3a334c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Common/UI_ToastMessage_MidLine.UI_ToastMessage_MidLine_C.Construct
	// void Construct();                                                                                                        // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Common/UI_ToastMessage_MidLine.UI_ToastMessage_MidLine_C.ExecuteUbergraph_UI_ToastMessage_MidLine
	// void ExecuteUbergraph_UI_ToastMessage_MidLine(int32_t EntryPoint);                                                       // [0x3a334c0] Final                
};

/// Class /Game/UI/Common/UI_ToastMessage_CBot_SideItem.UI_ToastMessage_CBot_SideItem_C
/// Size: 0x0008 (0x000730 - 0x000738)
class UUI_ToastMessage_CBot_SideItem_C : public UM1UIToastMessage
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1848;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x730, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Common/UI_ToastMessage_CBot_SideItem.UI_ToastMessage_CBot_SideItem_C.Construct
	// void Construct();                                                                                                        // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Common/UI_ToastMessage_CBot_SideItem.UI_ToastMessage_CBot_SideItem_C.ExecuteUbergraph_UI_ToastMessage_CBot_SideItem
	// void ExecuteUbergraph_UI_ToastMessage_CBot_SideItem(int32_t EntryPoint);                                                 // [0x3a334c0] Final                
};

/// Class /Game/UI/Chatting/UI_Chatting.UI_Chatting_C
/// Size: 0x0076 (0x000780 - 0x0007F6)
class UUI_Chatting_C : public UM1UIChatting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2038;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x780, 8, 0, 0})
	CMember(class UBackgroundBlur*)                    Blur_01                                                     OFFSET(get<T>, {0x788, 8, 0, 0})
	CMember(class UBackgroundBlur*)                    Blur_02                                                     OFFSET(get<T>, {0x790, 8, 0, 0})
	CMember(class UOverlay*)                           ChattingType                                                OFFSET(get<T>, {0x798, 8, 0, 0})
	CMember(class UHorizontalBox*)                     HBox_Tab                                                    OFFSET(get<T>, {0x7A0, 8, 0, 0})
	CMember(class UImage*)                             Input_BG                                                    OFFSET(get<T>, {0x7A8, 8, 0, 0})
	CMember(class UOverlay*)                           Input_Box                                                   OFFSET(get<T>, {0x7B0, 8, 0, 0})
	CMember(class UImage*)                             List_BG                                                     OFFSET(get<T>, {0x7B8, 8, 0, 0})
	CMember(class UImage*)                             List_Min_BG                                                 OFFSET(get<T>, {0x7C0, 8, 0, 0})
	CMember(class UOverlay*)                           Overlay_List                                                OFFSET(get<T>, {0x7C8, 8, 0, 0})
	CMember(class USizeBox*)                           SizeBox                                                     OFFSET(get<T>, {0x7D0, 8, 0, 0})
	CMember(class UUI_KeyButton_Chatting_C*)           UI_KeyButton_Input                                          OFFSET(get<T>, {0x7D8, 8, 0, 0})
	SMember(FTimerHandle)                              TimerHandle_AutoHide                                        OFFSET(getStruct<T>, {0x7E0, 8, 0, 0})
	SMember(FTimerHandle)                              TimerHandle_Cooltime                                        OFFSET(getStruct<T>, {0x7E8, 8, 0, 0})
	DMember(int32_t)                                   SendMessageCooltime                                         OFFSET(get<int32_t>, {0x7F0, 4, 0, 0})
	DMember(bool)                                      bInitializedWidget                                          OFFSET(get<bool>, {0x7F4, 1, 0, 0})
	DMember(bool)                                      bAfterSendedMessage                                         OFFSET(get<bool>, {0x7F5, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Chatting/UI_Chatting.UI_Chatting_C.IsMinimalUIState
	// bool IsMinimalUIState();                                                                                                 // [0x3a334c0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Chatting/UI_Chatting.UI_Chatting_C.ChangeUIState
	// void ChangeUIState(EM1ChattingUIState InState);                                                                          // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Chatting/UI_Chatting.UI_Chatting_C.HideAllWidgets
	// void HideAllWidgets();                                                                                                   // [0x3a334c0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Chatting/UI_Chatting.UI_Chatting_C.ShowMaximalWidgets
	// void ShowMaximalWidgets();                                                                                               // [0x3a334c0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Chatting/UI_Chatting.UI_Chatting_C.ShowMiminalWidgets
	// void ShowMiminalWidgets();                                                                                               // [0x3a334c0] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Chatting/UI_Chatting.UI_Chatting_C.InitializeWidgets
	// void InitializeWidgets();                                                                                                // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Chatting/UI_Chatting.UI_Chatting_C.SetMinBGOpacity
	// void SetMinBGOpacity();                                                                                                  // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Chatting/UI_Chatting.UI_Chatting_C.PlayTextInputAkEvent
	// void PlayTextInputAkEvent(bool IsEmpty, class UAkAudioEvent* TypingEvent, class UAkAudioEvent* EmptyEvent);              // [0x3a334c0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Chatting/UI_Chatting.UI_Chatting_C.OnMouseButtonDown
	// FEventReply OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                          // [0x3a334c0] BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Chatting/UI_Chatting.UI_Chatting_C.GetFocusWidget
	// class UWidget* GetFocusWidget();                                                                                         // [0x3a334c0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/UI/Chatting/UI_Chatting.UI_Chatting_C.Construct
	// void Construct();                                                                                                        // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Chatting/UI_Chatting.UI_Chatting_C.BndEvt__Text_Message_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature
	// void BndEvt__Text_Message_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte<ETextCommit> CommitMethod); // [0x3a334c0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Chatting/UI_Chatting.UI_Chatting_C.BP_MinimalUIBackgroundOpacityChanged
	// void BP_MinimalUIBackgroundOpacityChanged();                                                                             // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Chatting/UI_Chatting.UI_Chatting_C.BP_MinimalUIAutoHideOptionChanged
	// void BP_MinimalUIAutoHideOptionChanged();                                                                                // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Chatting/UI_Chatting.UI_Chatting_C.BndEvt__Text_Message_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature
	// void BndEvt__Text_Message_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature(FText& Text);       // [0x3a334c0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Chatting/UI_Chatting.UI_Chatting_C.OnRemovedFromFocusPath
	// void OnRemovedFromFocusPath(FFocusEvent InFocusEvent);                                                                   // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Chatting/UI_Chatting.UI_Chatting_C.TrySetAutoHideTimer
	// void TrySetAutoHideTimer();                                                                                              // [0x3a334c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Chatting/UI_Chatting.UI_Chatting_C.OnAutoHideWidgets
	// void OnAutoHideWidgets();                                                                                                // [0x3a334c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Chatting/UI_Chatting.UI_Chatting_C.OnAddedToFocusPath
	// void OnAddedToFocusPath(FFocusEvent InFocusEvent);                                                                       // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Chatting/UI_Chatting.UI_Chatting_C.BP_OnActivateChat
	// void BP_OnActivateChat();                                                                                                // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Chatting/UI_Chatting.UI_Chatting_C.BP_OnDeactivateChat
	// void BP_OnDeactivateChat();                                                                                              // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Chatting/UI_Chatting.UI_Chatting_C.OnRefreshCooltimeText
	// void OnRefreshCooltimeText();                                                                                            // [0x3a334c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Chatting/UI_Chatting.UI_Chatting_C.BP_OnRefreshChattingCooltime
	// void BP_OnRefreshChattingCooltime(int32_t RemainCooltime);                                                               // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Chatting/UI_Chatting.UI_Chatting_C.BP_NofityDirectMessage
	// void BP_NofityDirectMessage();                                                                                           // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Chatting/UI_Chatting.UI_Chatting_C.BP_OnChattingTabChanged
	// void BP_OnChattingTabChanged(EM1ChattingTab InTargetTab);                                                                // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Chatting/UI_Chatting.UI_Chatting_C.BP_PostReceivedChatMessage
	// void BP_PostReceivedChatMessage(bool bDueToShowMinimalUI, bool bWasScrolledToBottom);                                    // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Chatting/UI_Chatting.UI_Chatting_C.ExecuteUbergraph_UI_Chatting
	// void ExecuteUbergraph_UI_Chatting(int32_t EntryPoint);                                                                   // [0x3a334c0] Final|HasDefaults    
};

/// Class /Game/UI/UI_ToastMessageLayer.UI_ToastMessageLayer_C
/// Size: 0x0051 (0x000790 - 0x0007E1)
class UUI_ToastMessageLayer_C : public UM1UIToastMessageLayer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2017;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x790, 8, 0, 0})
	CMember(class UUI_ContextButtons_C*)               UI_ContextButtons                                           OFFSET(get<T>, {0x798, 8, 0, 0})
	CMember(class UUI_ToastMessage_B_Crosshair_C*)     UI_ToastMessage_B_Crosshair                                 OFFSET(get<T>, {0x7A0, 8, 0, 0})
	CMember(class UUI_ToastMessage_BottomLine_C*)      UI_ToastMessage_BottomLine                                  OFFSET(get<T>, {0x7A8, 8, 0, 0})
	CMember(class UUI_ToastMessage_BottomLineButton_C*) UI_ToastMessage_BottomLineButton                           OFFSET(get<T>, {0x7B0, 8, 0, 0})
	CMember(class UUI_ToastMessage_CBot_SideItem_C*)   UI_ToastMessage_CBot_SideItem                               OFFSET(get<T>, {0x7B8, 8, 0, 0})
	CMember(class UUI_ToastMessage_CBot_SideItem_C*)   UI_ToastMessage_CBot_SideItem1                              OFFSET(get<T>, {0x7C0, 8, 0, 0})
	CMember(class UUI_ToastMessage_CBot_SideItem_C*)   UI_ToastMessage_CBot_SideItem2                              OFFSET(get<T>, {0x7C8, 8, 0, 0})
	CMember(class UUI_ToastMessage_MidLine_C*)         UI_ToastMessage_MidLine                                     OFFSET(get<T>, {0x7D0, 8, 0, 0})
	CMember(class UUI_ToastMessage_RTop_Side_C*)       UI_ToastMessage_RTop_Side                                   OFFSET(get<T>, {0x7D8, 8, 0, 0})
	DMember(bool)                                      bUp                                                         OFFSET(get<bool>, {0x7E0, 1, 0, 0})


	/// Functions
	// Function /Game/UI/UI_ToastMessageLayer.UI_ToastMessageLayer_C.BP_UpdateLayerPosition
	// void BP_UpdateLayerPosition(bool InVisible);                                                                             // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/UI_ToastMessageLayer.UI_ToastMessageLayer_C.ExecuteUbergraph_UI_ToastMessageLayer
	// void ExecuteUbergraph_UI_ToastMessageLayer(int32_t EntryPoint);                                                          // [0x3a334c0] Final                
};

/// Class /Game/UI/Chatting/UI_Chatting_Layer.UI_Chatting_Layer_C
/// Size: 0x0000 (0x000710 - 0x000710)
class UUI_Chatting_Layer_C : public UM1UIChattingLayer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1808;

public:
};

/// Class /Game/UI/UI_WidgetContainer.UI_WidgetContainer_C
/// Size: 0x0031 (0x0008C8 - 0x0008F9)
class UUI_WidgetContainer_C : public UM1UIWidgetContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2297;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x8C8, 8, 0, 0})
	CMember(class UOverlay*)                           ForUISet                                                    OFFSET(get<T>, {0x8D0, 8, 0, 0})
	CMember(class UOverlay*)                           ForUISet_MobHp                                              OFFSET(get<T>, {0x8D8, 8, 0, 0})
	CMember(class UOverlay*)                           ForUISet_Under                                              OFFSET(get<T>, {0x8E0, 8, 0, 0})
	CMember(class UUI_GameCenter_Fade_C*)              UI_FadeInOut                                                OFFSET(get<T>, {0x8E8, 8, 0, 0})
	CMember(class UUI_GameDevStatus_C*)                UI_GameDevStatus                                            OFFSET(get<T>, {0x8F0, 8, 0, 0})
	DMember(bool)                                      ForSkillMovie                                               OFFSET(get<bool>, {0x8F8, 1, 0, 0})


	/// Functions
	// Function /Game/UI/UI_WidgetContainer.UI_WidgetContainer_C.SetUIForSkillMovie
	// void SetUIForSkillMovie();                                                                                               // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/UI_WidgetContainer.UI_WidgetContainer_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/UI_WidgetContainer.UI_WidgetContainer_C.ExecuteUbergraph_UI_WidgetContainer
	// void ExecuteUbergraph_UI_WidgetContainer(int32_t EntryPoint);                                                            // [0x3a334c0] Final                
};

/// Class /Game/UI/Components/UI_Back_NonCustom.UI_Back_NonCustom_C
/// Size: 0x0010 (0x000708 - 0x000718)
class UUI_Back_NonCustom_C : public UM1UIWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1816;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x708, 8, 0, 0})
	CMember(class UImage*)                             BG                                                          OFFSET(get<T>, {0x710, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Components/UI_Back_NonCustom.UI_Back_NonCustom_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Components/UI_Back_NonCustom.UI_Back_NonCustom_C.Construct
	// void Construct();                                                                                                        // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Components/UI_Back_NonCustom.UI_Back_NonCustom_C.PlaySetOpenUI
	// void PlaySetOpenUI();                                                                                                    // [0x3a334c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Components/UI_Back_NonCustom.UI_Back_NonCustom_C.ExecuteUbergraph_UI_Back_NonCustom
	// void ExecuteUbergraph_UI_Back_NonCustom(int32_t EntryPoint);                                                             // [0x3a334c0] Final                
};

/// Class /Game/UI/Components/UI_Icon_Spinner_03.UI_Icon_Spinner_03_C
/// Size: 0x0010 (0x000708 - 0x000718)
class UUI_Icon_Spinner_03_C : public UM1UIWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1816;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x708, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   UIAnim_Loop                                                 OFFSET(get<T>, {0x710, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Components/UI_Icon_Spinner_03.UI_Icon_Spinner_03_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Components/UI_Icon_Spinner_03.UI_Icon_Spinner_03_C.ExecuteUbergraph_UI_Icon_Spinner_03
	// void ExecuteUbergraph_UI_Icon_Spinner_03(int32_t EntryPoint);                                                            // [0x3a334c0] Final                
};

/// Class /Game/UI/Loading/UI_DataPatch.UI_DataPatch_C
/// Size: 0x0060 (0x000780 - 0x0007E0)
class UUI_DataPatch_C : public UM1UIDataPatch
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2016;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x780, 8, 0, 0})
	CMember(class UVerticalBox*)                       Capacity_Free                                               OFFSET(get<T>, {0x788, 8, 0, 0})
	CMember(class UVerticalBox*)                       Capacity_Unsecured                                          OFFSET(get<T>, {0x790, 8, 0, 0})
	CMember(class UVerticalBox*)                       Data_Download                                               OFFSET(get<T>, {0x798, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x7A0, 8, 0, 0})
	CMember(class UImage*)                             Image1                                                      OFFSET(get<T>, {0x7A8, 8, 0, 0})
	CMember(class UImage*)                             Image2                                                      OFFSET(get<T>, {0x7B0, 8, 0, 0})
	CMember(class UImage*)                             Image3                                                      OFFSET(get<T>, {0x7B8, 8, 0, 0})
	CMember(class UImage*)                             Image4                                                      OFFSET(get<T>, {0x7C0, 8, 0, 0})
	CMember(class UUI_Back_NonCustom_C*)               UI_Back_NonCustom                                           OFFSET(get<T>, {0x7C8, 8, 0, 0})
	CMember(class UUI_Icon_Spinner_03_C*)              UI_Icon_Spinner_03                                          OFFSET(get<T>, {0x7D0, 8, 0, 0})
	CMember(class UUI_FlipbookImage_C*)                UI_Spindle                                                  OFFSET(get<T>, {0x7D8, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Loading/UI_DataPatch.UI_DataPatch_C.Construct
	// void Construct();                                                                                                        // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Loading/UI_DataPatch.UI_DataPatch_C.ExecuteUbergraph_UI_DataPatch
	// void ExecuteUbergraph_UI_DataPatch(int32_t EntryPoint);                                                                  // [0x3a334c0] Final                
};

/// Class /Game/UI/Common/UI_PlatformUserInfo.UI_PlatformUserInfo_C
/// Size: 0x0010 (0x0007B8 - 0x0007C8)
class UUI_PlatformUserInfo_C : public UM1UIPlatformUserInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1992;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x7B8, 8, 0, 0})
	CMember(class UUI_Back_NonCustom_C*)               UI_Back_NonCustom                                           OFFSET(get<T>, {0x7C0, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Common/UI_PlatformUserInfo.UI_PlatformUserInfo_C.Construct
	// void Construct();                                                                                                        // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Common/UI_PlatformUserInfo.UI_PlatformUserInfo_C.ExecuteUbergraph_UI_PlatformUserInfo
	// void ExecuteUbergraph_UI_PlatformUserInfo(int32_t EntryPoint);                                                           // [0x3a334c0] Final                
};

/// Class /Game/UI/Components/UI_WidgetPages.UI_WidgetPages_C
/// Size: 0x0008 (0x000818 - 0x000820)
class UUI_WidgetPages_C : public UM1UIWidgetPages
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2080;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x818, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Components/UI_WidgetPages.UI_WidgetPages_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Components/UI_WidgetPages.UI_WidgetPages_C.Construct
	// void Construct();                                                                                                        // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Components/UI_WidgetPages.UI_WidgetPages_C.ExecuteUbergraph_UI_WidgetPages
	// void ExecuteUbergraph_UI_WidgetPages(int32_t EntryPoint);                                                                // [0x3a334c0] Final                
};

/// Class /Game/UI/Lobby/UI_Lobby.UI_Lobby_C
/// Size: 0x0010 (0x000770 - 0x000780)
class UUI_Lobby_C : public UM1UILobby
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1920;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x770, 8, 0, 0})
	CMember(class UM1UIWidget*)                        UIPressToStart                                              OFFSET(get<T>, {0x778, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Lobby/UI_Lobby.UI_Lobby_C.Construct
	// void Construct();                                                                                                        // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Lobby/UI_Lobby.UI_Lobby_C.ExecuteUbergraph_UI_Lobby
	// void ExecuteUbergraph_UI_Lobby(int32_t EntryPoint);                                                                      // [0x3a334c0] Final                
};

/// Class /Game/UI/Common/UI_Loading_Brand.UI_Loading_Brand_C
/// Size: 0x0020 (0x000708 - 0x000728)
class UUI_Loading_Brand_C : public UM1UIWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1832;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x708, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   UIAnim_P2                                                   OFFSET(get<T>, {0x710, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   UIAnim_P1                                                   OFFSET(get<T>, {0x718, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x720, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Common/UI_Loading_Brand.UI_Loading_Brand_C.SequenceEvent__ENTRYPOINTUI_Loading_Brand
	// void SequenceEvent__ENTRYPOINTUI_Loading_Brand();                                                                        // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Common/UI_Loading_Brand.UI_Loading_Brand_C.SequenceEvent
	// void SequenceEvent();                                                                                                    // [0x3a334c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Common/UI_Loading_Brand.UI_Loading_Brand_C.OnLicenseAnimationFinished
	// void OnLicenseAnimationFinished();                                                                                       // [0x3a334c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Common/UI_Loading_Brand.UI_Loading_Brand_C.Construct
	// void Construct();                                                                                                        // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Common/UI_Loading_Brand.UI_Loading_Brand_C.ExecuteUbergraph_UI_Loading_Brand
	// void ExecuteUbergraph_UI_Loading_Brand(int32_t EntryPoint);                                                              // [0x3a334c0] Final                
};

/// Class /Game/UI/Common/UI_Popup_MoviePlayer.UI_Popup_MoviePlayer_C
/// Size: 0x0010 (0x0007B8 - 0x0007C8)
class UUI_Popup_MoviePlayer_C : public UM1UIPopupMoviePlayer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1992;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x7B8, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x7C0, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Common/UI_Popup_MoviePlayer.UI_Popup_MoviePlayer_C.Construct
	// void Construct();                                                                                                        // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Common/UI_Popup_MoviePlayer.UI_Popup_MoviePlayer_C.PlayAkSound
	// void PlayAkSound(EAkResult Result);                                                                                      // [0x3a334c0] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Common/UI_Popup_MoviePlayer.UI_Popup_MoviePlayer_C.ExecuteUbergraph_UI_Popup_MoviePlayer
	// void ExecuteUbergraph_UI_Popup_MoviePlayer(int32_t EntryPoint);                                                          // [0x3a334c0] Final                
};

/// Class /Game/UI/Common/UI_Loading_Logo_Movie.UI_Loading_Logo_Movie_C
/// Size: 0x0008 (0x0007C8 - 0x0007D0)
class UUI_Loading_Logo_Movie_C : public UUI_Popup_MoviePlayer_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2000;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x7C8, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Common/UI_Loading_Logo_Movie.UI_Loading_Logo_Movie_C.OnPlayEnded
	// void OnPlayEnded();                                                                                                      // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Common/UI_Loading_Logo_Movie.UI_Loading_Logo_Movie_C.Construct
	// void Construct();                                                                                                        // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Common/UI_Loading_Logo_Movie.UI_Loading_Logo_Movie_C.BP_OnMediaSourceEndReached
	// void BP_OnMediaSourceEndReached();                                                                                       // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Common/UI_Loading_Logo_Movie.UI_Loading_Logo_Movie_C.ExecuteUbergraph_UI_Loading_Logo_Movie
	// void ExecuteUbergraph_UI_Loading_Logo_Movie(int32_t EntryPoint);                                                         // [0x3a334c0] Final                
};

/// Class /Game/UI/Cursor/BP_Cursor.BP_Cursor_C
/// Size: 0x0038 (0x000708 - 0x000740)
class UBP_Cursor_C : public UM1UICursor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1856;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x708, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   UIAnim_HoldPickDrag                                         OFFSET(get<T>, {0x710, 8, 0, 0})
	CMember(class UImage*)                             ef_HoldPickDrag                                             OFFSET(get<T>, {0x718, 8, 0, 0})
	CMember(class UImage*)                             ef_HoldPickDrag1                                            OFFSET(get<T>, {0x720, 8, 0, 0})
	CMember(class UImage*)                             Img_Cursor_Default                                          OFFSET(get<T>, {0x728, 8, 0, 0})
	CMember(class UImage*)                             Img_Cursor_Focus                                            OFFSET(get<T>, {0x730, 8, 0, 0})
	CMember(class UOverlay*)                           Main                                                        OFFSET(get<T>, {0x738, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Cursor/BP_Cursor.BP_Cursor_C.BP_ScaleCursorSize
	// void BP_ScaleCursorSize(float Factor);                                                                                   // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Cursor/BP_Cursor.BP_Cursor_C.BP_SetCursorState
	// void BP_SetCursorState(EM1MouseCursorState InState);                                                                     // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Cursor/BP_Cursor.BP_Cursor_C.ExecuteUbergraph_BP_Cursor
	// void ExecuteUbergraph_BP_Cursor(int32_t EntryPoint);                                                                     // [0x3a334c0] Final                
};

/// Class /Game/UI/Common/UI_VoiceChatting_Slot.UI_VoiceChatting_Slot_C
/// Size: 0x0008 (0x000720 - 0x000728)
class UUI_VoiceChatting_Slot_C : public UM1UISimpleVoiceChattingSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1832;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x720, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Common/UI_VoiceChatting_Slot.UI_VoiceChatting_Slot_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Common/UI_VoiceChatting_Slot.UI_VoiceChatting_Slot_C.ExecuteUbergraph_UI_VoiceChatting_Slot
	// void ExecuteUbergraph_UI_VoiceChatting_Slot(int32_t EntryPoint);                                                         // [0x3a334c0] Final                
};

/// Class /Game/UI/Common/UI_VoiceChatting.UI_VoiceChatting_C
/// Size: 0x0028 (0x000728 - 0x000750)
class UUI_VoiceChatting_C : public UM1UISimpleVoiceChattingList
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1872;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x728, 8, 0, 0})
	CMember(class UInvalidationBox*)                   InvalidationBox                                             OFFSET(get<T>, {0x730, 8, 0, 0})
	CMember(class UUI_VoiceChatting_Slot_C*)           UI_VoiceChatting_Slot                                       OFFSET(get<T>, {0x738, 8, 0, 0})
	CMember(class UUI_VoiceChatting_Slot_C*)           UI_VoiceChatting_Slot1                                      OFFSET(get<T>, {0x740, 8, 0, 0})
	CMember(class UUI_VoiceChatting_Slot_C*)           UI_VoiceChatting_Slot2                                      OFFSET(get<T>, {0x748, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Common/UI_VoiceChatting.UI_VoiceChatting_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Common/UI_VoiceChatting.UI_VoiceChatting_C.Construct
	// void Construct();                                                                                                        // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Common/UI_VoiceChatting.UI_VoiceChatting_C.ExecuteUbergraph_UI_VoiceChatting
	// void ExecuteUbergraph_UI_VoiceChatting(int32_t EntryPoint);                                                              // [0x3a334c0] Final                
};

/// Class /Game/UI/Common/UI_WaitingForNetwork.UI_WaitingForNetwork_C
/// Size: 0x0018 (0x000730 - 0x000748)
class UUI_WaitingForNetwork_C : public UM1UIWaitingForNetwork
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1864;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x730, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   UI_ANIM_Open                                                OFFSET(get<T>, {0x738, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x740, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Common/UI_WaitingForNetwork.UI_WaitingForNetwork_C.Construct
	// void Construct();                                                                                                        // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Common/UI_WaitingForNetwork.UI_WaitingForNetwork_C.ExecuteUbergraph_UI_WaitingForNetwork
	// void ExecuteUbergraph_UI_WaitingForNetwork(int32_t EntryPoint);                                                          // [0x3a334c0] Final                
};

/// Class /Game/UI/Common/UI_Version.UI_Version_C
/// Size: 0x0000 (0x000718 - 0x000718)
class UUI_Version_C : public UM1UIVersion
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1816;

public:


	/// Functions
	// Function /Game/UI/Common/UI_Version.UI_Version_C.Test_DrawServerTick
	// void Test_DrawServerTick();                                                                                              // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Common/UI_Version.UI_Version_C.Test_DrawConnectionInfo
	// void Test_DrawConnectionInfo();                                                                                          // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/Components/UI_Button_Deco_Default1.UI_Button_Deco_Default1_C
/// Size: 0x0032 (0x000708 - 0x00073A)
class UUI_Button_Deco_Default1_C : public UM1UIButtonDeco
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1850;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x708, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   UIAnim_Press                                                OFFSET(get<T>, {0x710, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   UIAnim_OverEffect                                           OFFSET(get<T>, {0x718, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   UIAnim_Over                                                 OFFSET(get<T>, {0x720, 8, 0, 0})
	CMember(class UImage*)                             Fx_Shine_DefaultV                                           OFFSET(get<T>, {0x728, 8, 0, 0})
	CMember(class UOverlay*)                           Over_Frame                                                  OFFSET(get<T>, {0x730, 8, 0, 0})
	DMember(bool)                                      UISelected                                                  OFFSET(get<bool>, {0x738, 1, 0, 0})
	DMember(bool)                                      UIFocused                                                   OFFSET(get<bool>, {0x739, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Components/UI_Button_Deco_Default1.UI_Button_Deco_Default1_C.Construct
	// void Construct();                                                                                                        // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Components/UI_Button_Deco_Default1.UI_Button_Deco_Default1_C.BP_ChangeButtonUI
	// void BP_ChangeButtonUI(EM1ButtonUIType InType);                                                                          // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Components/UI_Button_Deco_Default1.UI_Button_Deco_Default1_C.BP_Selected
	// void BP_Selected(bool InSelected);                                                                                       // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Components/UI_Button_Deco_Default1.UI_Button_Deco_Default1_C.BP_ResetButtonState
	// void BP_ResetButtonState();                                                                                              // [0x3a334c0] Event|Public|BlueprintEvent 
	// Function /Game/UI/Components/UI_Button_Deco_Default1.UI_Button_Deco_Default1_C.ExecuteUbergraph_UI_Button_Deco_Default1
	// void ExecuteUbergraph_UI_Button_Deco_Default1(int32_t EntryPoint);                                                       // [0x3a334c0] Final                
};

/// Class /Game/UI/Components/UI_Deco_Back_Input.UI_Deco_Back_Input_C
/// Size: 0x0040 (0x000708 - 0x000748)
class UUI_Deco_Back_Input_C : public UM1UIWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1864;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x708, 8, 0, 0})
	CMember(class UBackgroundBlur*)                    BackgroundBlur                                              OFFSET(get<T>, {0x710, 8, 0, 0})
	CMember(class UImage*)                             Default_BG                                                  OFFSET(get<T>, {0x718, 8, 0, 0})
	CMember(class UOverlay*)                           Dot                                                         OFFSET(get<T>, {0x720, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x728, 8, 0, 0})
	CMember(class UOverlay*)                           Out_Line                                                    OFFSET(get<T>, {0x730, 8, 0, 0})
	DMember(bool)                                      IsThisOFF                                                   OFFSET(get<bool>, {0x738, 1, 0, 0})
	DMember(bool)                                      IsBlurOFF                                                   OFFSET(get<bool>, {0x739, 1, 0, 0})
	DMember(bool)                                      IsDotOFF                                                    OFFSET(get<bool>, {0x73A, 1, 0, 0})
	DMember(bool)                                      IsOutlineOFF                                                OFFSET(get<bool>, {0x73B, 1, 0, 0})
	DMember(double)                                    BgOpacity                                                   OFFSET(get<double>, {0x740, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Components/UI_Deco_Back_Input.UI_Deco_Back_Input_C.SetUIStyle
	// void SetUIStyle(bool IsVisibleSelf, bool IsVisibleBlur, bool IsVisibleDot, bool IsVisibleOutline, double BgOpacity);     // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Components/UI_Deco_Back_Input.UI_Deco_Back_Input_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Components/UI_Deco_Back_Input.UI_Deco_Back_Input_C.Construct
	// void Construct();                                                                                                        // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Components/UI_Deco_Back_Input.UI_Deco_Back_Input_C.ExecuteUbergraph_UI_Deco_Back_Input
	// void ExecuteUbergraph_UI_Deco_Back_Input(int32_t EntryPoint);                                                            // [0x3a334c0] Final                
};

/// Class /Game/UI/Components/UI_Login_Enter.UI_Login_Enter_C
/// Size: 0x00D9 (0x0008A8 - 0x000981)
class UUI_Login_Enter_C : public UM1UIButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2433;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x8A8, 8, 0, 0})
	CMember(class UUI_Deco_Back_001_C*)                UI_Deco_Back_001                                            OFFSET(get<T>, {0x8B0, 8, 0, 0})
	SMember(FSlateBrush)                               IconTexture                                                 OFFSET(getStruct<T>, {0x8C0, 192, 0, 0})
	DMember(bool)                                      UIFocused                                                   OFFSET(get<bool>, {0x980, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Components/UI_Login_Enter.UI_Login_Enter_C.ChangeButtonUI
	// void ChangeButtonUI(EM1ButtonUIType InType);                                                                             // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Components/UI_Login_Enter.UI_Login_Enter_C.SetStyle
	// void SetStyle(FSlateBrush Texture);                                                                                      // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Components/UI_Login_Enter.UI_Login_Enter_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Components/UI_Login_Enter.UI_Login_Enter_C.BP_ChangeButtonUI
	// void BP_ChangeButtonUI(EM1ButtonUIType InType);                                                                          // [0x3a334c0] Event|Public|BlueprintEvent 
	// Function /Game/UI/Components/UI_Login_Enter.UI_Login_Enter_C.ExecuteUbergraph_UI_Login_Enter
	// void ExecuteUbergraph_UI_Login_Enter(int32_t EntryPoint);                                                                // [0x3a334c0] Final                
};

/// Class /Game/UI/Components/UI_HoldButton_01.UI_HoldButton_01_C
/// Size: 0x0049 (0x0008A8 - 0x0008F1)
class UUI_HoldButton_01_C : public UM1UIButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2289;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x8A8, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   ANIM_HoldingStart                                           OFFSET(get<T>, {0x8B0, 8, 0, 0})
	CMember(class UHorizontalBox*)                     Hold_Bullet                                                 OFFSET(get<T>, {0x8B8, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x8C0, 8, 0, 0})
	CMember(class UImage*)                             Image1                                                      OFFSET(get<T>, {0x8C8, 8, 0, 0})
	CMember(class UOverlay*)                           Overlay                                                     OFFSET(get<T>, {0x8D0, 8, 0, 0})
	CMember(class UUI_Deco_Back_001_C*)                UI_Deco_Back_001                                            OFFSET(get<T>, {0x8D8, 8, 0, 0})
	CMember(class UProgressBar*)                       Widget_HoldingProgress_Tex                                  OFFSET(get<T>, {0x8E0, 8, 0, 0})
	CMember(class USizeBox*)                           Panel_SizeBox                                               OFFSET(get<T>, {0x8E8, 8, 0, 0})
	DMember(bool)                                      ShowHoldBullet                                              OFFSET(get<bool>, {0x8F0, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Components/UI_HoldButton_01.UI_HoldButton_01_C.ChangeButtonUI
	// void ChangeButtonUI(EM1ButtonUIType InType);                                                                             // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Components/UI_HoldButton_01.UI_HoldButton_01_C.SetTextColor
	// void SetTextColor(FSlateColor KeyText, FSlateColor ButtonText);                                                          // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Components/UI_HoldButton_01.UI_HoldButton_01_C.Set Texture and Opacity
	// void Set Texture and Opacity(class UImage* Target, class UTexture* PaperTexture, double Opacity);                        // [0x3a334c0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Components/UI_HoldButton_01.UI_HoldButton_01_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Components/UI_HoldButton_01.UI_HoldButton_01_C.BP_ChangeButtonUI
	// void BP_ChangeButtonUI(EM1ButtonUIType InType);                                                                          // [0x3a334c0] Event|Public|BlueprintEvent 
	// Function /Game/UI/Components/UI_HoldButton_01.UI_HoldButton_01_C.BP_ChangeDimmedUI
	// void BP_ChangeDimmedUI(bool InDimmed);                                                                                   // [0x3a334c0] Event|Public|BlueprintEvent 
	// Function /Game/UI/Components/UI_HoldButton_01.UI_HoldButton_01_C.BP_OnHoldCompletionProgressUpdated
	// void BP_OnHoldCompletionProgressUpdated(float InProgress);                                                               // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Components/UI_HoldButton_01.UI_HoldButton_01_C.ExecuteUbergraph_UI_HoldButton_01
	// void ExecuteUbergraph_UI_HoldButton_01(int32_t EntryPoint);                                                              // [0x3a334c0] Final|HasDefaults    
};

/// Class /Game/UI/Login/UI_Login.UI_Login_C
/// Size: 0x0088 (0x0007C0 - 0x000848)
class UUI_Login_C : public UM1UILogin
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2120;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x7C0, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   UIAnim_FadeOut                                              OFFSET(get<T>, {0x7C8, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   UIAnim_FadeIn                                               OFFSET(get<T>, {0x7D0, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   UIAnim_Loop                                                 OFFSET(get<T>, {0x7D8, 8, 0, 0})
	CMember(class UButton*)                            Button_Load                                                 OFFSET(get<T>, {0x7E0, 8, 0, 0})
	CMember(class UButton*)                            Button_Save                                                 OFFSET(get<T>, {0x7E8, 8, 0, 0})
	CMember(class UButton*)                            Button_SetIP                                                OFFSET(get<T>, {0x7F0, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x7F8, 8, 0, 0})
	CMember(class UImage*)                             Image1                                                      OFFSET(get<T>, {0x800, 8, 0, 0})
	CMember(class UImage*)                             Image2                                                      OFFSET(get<T>, {0x808, 8, 0, 0})
	CMember(class UScaleBox*)                          ScaleBox                                                    OFFSET(get<T>, {0x810, 8, 0, 0})
	CMember(class UM1Button*)                          ScreenButton                                                OFFSET(get<T>, {0x818, 8, 0, 0})
	CMember(class UUI_Deco_Back_Input_C*)              UI_Deco_Back_Input                                          OFFSET(get<T>, {0x820, 8, 0, 0})
	CMember(class UM1RichTextBlock*)                   UI_KeySymbolTextWaitLogin                                   OFFSET(get<T>, {0x828, 8, 0, 0})
	CMember(class UM1RichTextBlock*)                   UI_StartText                                                OFFSET(get<T>, {0x830, 8, 0, 0})
	CMember(class UM1RichTextBlock*)                   UI_StartText1                                               OFFSET(get<T>, {0x838, 8, 0, 0})
	CMember(class UUI_Version_C*)                      UI_Version                                                  OFFSET(get<T>, {0x840, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Login/UI_Login.UI_Login_C.GetEndAnimation
	// class UWidgetAnimation* GetEndAnimation();                                                                               // [0x3a334c0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Login/UI_Login.UI_Login_C.BndEvt__UI_Login_Button_SetIP_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__UI_Login_Button_SetIP_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();               // [0x3a334c0] BlueprintEvent       
	// Function /Game/UI/Login/UI_Login.UI_Login_C.BndEvt__Text_LoginID_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature
	// void BndEvt__Text_LoginID_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(FText& Text);    // [0x3a334c0] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Login/UI_Login.UI_Login_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x3a334c0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Login/UI_Login.UI_Login_C.BndEvt__UI_Login_M1Button_142_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__UI_Login_M1Button_142_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();               // [0x3a334c0] BlueprintEvent       
	// Function /Game/UI/Login/UI_Login.UI_Login_C.BP_PlayEndAnim
	// void BP_PlayEndAnim();                                                                                                   // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Login/UI_Login.UI_Login_C.OnEventWidgetOpen
	// void OnEventWidgetOpen(EM1WidgetAnimDirection InDirection);                                                              // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Login/UI_Login.UI_Login_C.BP_ShowHintText
	// void BP_ShowHintText(bool bShow);                                                                                        // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Login/UI_Login.UI_Login_C.ExecuteUbergraph_UI_Login
	// void ExecuteUbergraph_UI_Login(int32_t EntryPoint);                                                                      // [0x3a334c0] Final|HasDefaults    
};

