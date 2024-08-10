
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/MotionWarping.AnimNotifyState_MotionWarping
/// Size: 0x0008 (0x000030 - 0x000038)
class UAnimNotifyState_MotionWarping : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class URootMotionModifier*)                RootMotionModifier                                          OFFSET(get<T>, {0x30, 8, 0, 0})


	/// Functions
	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.OnWarpUpdate
	// void OnWarpUpdate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);                // [0x3a334c0] Event|Public|BlueprintEvent|Const 
	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.OnWarpEnd
	// void OnWarpEnd(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);                   // [0x3a334c0] Event|Public|BlueprintEvent|Const 
	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.OnWarpBegin
	// void OnWarpBegin(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);                 // [0x3a334c0] Event|Public|BlueprintEvent|Const 
	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierUpdate
	// void OnRootMotionModifierUpdate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);  // [0x1c85960] Final|Native|Public|Const 
	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierDeactivate
	// void OnRootMotionModifierDeactivate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier); // [0x1c857b0] Final|Native|Public|Const 
	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierActivate
	// void OnRootMotionModifierActivate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier); // [0x1c85b10] Final|Native|Public|Const 
	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.AddRootMotionModifier
	// class URootMotionModifier* AddRootMotionModifier(class UMotionWarpingComponent* MotionWarpingComp, class UAnimSequenceBase* Animation, float StartTime, float EndTime); // [0x1c85cc0] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/MotionWarping.MotionWarpingUtilities
/// Size: 0x0000 (0x000028 - 0x000028)
class UMotionWarpingUtilities : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/MotionWarping.MotionWarpingUtilities.GetMotionWarpingWindowsFromAnimation
	// void GetMotionWarpingWindowsFromAnimation(class UAnimSequenceBase* Animation, TArray<FMotionWarpingWindowData>& OutWindows); // [0x1c87240] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingUtilities.GetMotionWarpingWindowsForWarpTargetFromAnimation
	// void GetMotionWarpingWindowsForWarpTargetFromAnimation(class UAnimSequenceBase* Animation, FName WarpTargetName, TArray<FMotionWarpingWindowData>& OutWindows); // [0x1c86e00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingUtilities.ExtractRootMotionFromAnimation
	// FTransform ExtractRootMotionFromAnimation(class UAnimSequenceBase* Animation, float StartTime, float EndTime);           // [0x1c87550] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/MotionWarping.MotionWarpingTarget
/// Size: 0x0034 (0x000000 - 0x000034)
class FMotionWarpingTarget : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 52;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	CMember(TWeakObjectPtr<class USceneComponent*>)    Component                                                   OFFSET(get<T>, {0x20, 8, 0, 0})
	SMember(FName)                                     BoneName                                                    OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	DMember(bool)                                      bFollowComponent                                            OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Class /Script/MotionWarping.MotionWarpingComponent
/// Size: 0x0040 (0x0000A8 - 0x0000E8)
class UMotionWarpingComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	DMember(bool)                                      bSearchForWindowsInAnimsWithinMontages                      OFFSET(get<bool>, {0xA8, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPreUpdate                                                 OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	CMember(TWeakObjectPtr<class ACharacter*>)         CharacterOwner                                              OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(TArray<class URootMotionModifier*>)        Modifiers                                                   OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(TArray<FMotionWarpingTarget>)              WarpTargets                                                 OFFSET(get<T>, {0xD8, 16, 0, 0})


	/// Functions
	// Function /Script/MotionWarping.MotionWarpingComponent.RemoveWarpTarget
	// int32_t RemoveWarpTarget(FName WarpTargetName);                                                                          // [0x1c87a40] Final|Native|Public|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingComponent.DisableAllRootMotionModifiers
	// void DisableAllRootMotionModifiers();                                                                                    // [0x1c887d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromTransform
	// void AddOrUpdateWarpTargetFromTransform(FName WarpTargetName, FTransform TargetTransform);                               // [0x1c884a0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromLocationAndRotation
	// void AddOrUpdateWarpTargetFromLocationAndRotation(FName WarpTargetName, FVector TargetLocation, FRotator TargetRotation); // [0x1c87c00] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromLocation
	// void AddOrUpdateWarpTargetFromLocation(FName WarpTargetName, FVector TargetLocation);                                    // [0x1c87ee0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromComponent
	// void AddOrUpdateWarpTargetFromComponent(FName WarpTargetName, class USceneComponent* Component, FName BoneName, bool bFollowComponent); // [0x1c880d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTarget
	// void AddOrUpdateWarpTarget(FMotionWarpingTarget& WarpTarget);                                                            // [0x1c886a0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MotionWarping.RootMotionModifier
/// Size: 0x0098 (0x000028 - 0x0000C0)
class URootMotionModifier : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TWeakObjectPtr<class UAnimSequenceBase*>)  Animation                                                   OFFSET(get<T>, {0x28, 8, 0, 0})
	DMember(float)                                     StartTime                                                   OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     EndTime                                                     OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     PreviousPosition                                            OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     CurrentPosition                                             OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x40, 4, 0, 0})
	SMember(FTransform)                                StartTransform                                              OFFSET(getStruct<T>, {0x50, 48, 0, 0})
	DMember(float)                                     ActualStartTime                                             OFFSET(get<float>, {0x80, 4, 0, 0})
	SMember(FDelegateProperty)                         OnActivateDelegate                                          OFFSET(getStruct<T>, {0x84, 16, 0, 0})
	SMember(FDelegateProperty)                         OnUpdateDelegate                                            OFFSET(getStruct<T>, {0x94, 16, 0, 0})
	SMember(FDelegateProperty)                         OnDeactivateDelegate                                        OFFSET(getStruct<T>, {0xA4, 16, 0, 0})
	CMember(ERootMotionModifierState)                  State                                                       OFFSET(get<T>, {0xB4, 1, 0, 0})
};

/// Class /Script/MotionWarping.RootMotionModifier_Warp
/// Size: 0x00D8 (0x0000B8 - 0x000190)
class URootMotionModifier_Warp : public URootMotionModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FName)                                     WarpTargetName                                              OFFSET(getStruct<T>, {0xB8, 8, 0, 0})
	CMember(EWarpPointAnimProvider)                    WarpPointAnimProvider                                       OFFSET(get<T>, {0xC0, 1, 0, 0})
	SMember(FTransform)                                WarpPointAnimTransform                                      OFFSET(getStruct<T>, {0xD0, 48, 0, 0})
	SMember(FName)                                     WarpPointAnimBoneName                                       OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	DMember(bool)                                      bWarpTranslation                                            OFFSET(get<bool>, {0x108, 1, 0, 0})
	DMember(bool)                                      bIgnoreZAxis                                                OFFSET(get<bool>, {0x109, 1, 0, 0})
	CMember(EAlphaBlendOption)                         AddTranslationEasingFunc                                    OFFSET(get<T>, {0x10A, 1, 0, 0})
	CMember(class UCurveFloat*)                        AddTranslationEasingCurve                                   OFFSET(get<T>, {0x110, 8, 0, 0})
	DMember(bool)                                      bWarpRotation                                               OFFSET(get<bool>, {0x118, 1, 0, 0})
	CMember(EMotionWarpRotationType)                   RotationType                                                OFFSET(get<T>, {0x119, 1, 0, 0})
	DMember(float)                                     WarpRotationTimeMultiplier                                  OFFSET(get<float>, {0x11C, 4, 0, 0})
	SMember(FTransform)                                CachedTargetTransform                                       OFFSET(getStruct<T>, {0x120, 48, 0, 0})
};

/// Class /Script/MotionWarping.RootMotionModifier_SimpleWarp
/// Size: 0x0000 (0x000190 - 0x000190)
class URootMotionModifier_SimpleWarp : public URootMotionModifier_Warp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Script/MotionWarping.RootMotionModifier_Scale
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class URootMotionModifier_Scale : public URootMotionModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FVector)                                   Scale                                                       OFFSET(getStruct<T>, {0xB8, 12, 0, 0})


	/// Functions
	// Function /Script/MotionWarping.RootMotionModifier_Scale.AddRootMotionModifierScale
	// class URootMotionModifier_Scale* AddRootMotionModifierScale(class UMotionWarpingComponent* InMotionWarpingComp, class UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, FVector InScale); // [0x1c8c3e0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/MotionWarping.RootMotionModifier_AdjustmentBlendWarp
/// Size: 0x00D0 (0x000190 - 0x000260)
class URootMotionModifier_AdjustmentBlendWarp : public URootMotionModifier_Warp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	DMember(bool)                                      bWarpIKBones                                                OFFSET(get<bool>, {0x190, 1, 0, 0})
	CMember(TArray<FName>)                             IKBones                                                     OFFSET(get<T>, {0x198, 16, 0, 0})
	SMember(FTransform)                                CachedMeshTransform                                         OFFSET(getStruct<T>, {0x1B0, 48, 0, 0})
	SMember(FTransform)                                CachedMeshRelativeTransform                                 OFFSET(getStruct<T>, {0x1E0, 48, 0, 0})
	SMember(FTransform)                                CachedRootMotion                                            OFFSET(getStruct<T>, {0x210, 48, 0, 0})
	SMember(FAnimSequenceTrackContainer)               Result                                                      OFFSET(getStruct<T>, {0x240, 32, 0, 0})
};

/// Class /Script/MotionWarping.RootMotionModifier_SkewWarp
/// Size: 0x0000 (0x000190 - 0x000190)
class URootMotionModifier_SkewWarp : public URootMotionModifier_Warp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:


	/// Functions
	// Function /Script/MotionWarping.RootMotionModifier_SkewWarp.AddRootMotionModifierSkewWarp
	// class URootMotionModifier_SkewWarp* AddRootMotionModifierSkewWarp(class UMotionWarpingComponent* InMotionWarpingComp, class UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, FName InWarpTargetName, EWarpPointAnimProvider InWarpPointAnimProvider, FTransform InWarpPointAnimTransform, FName InWarpPointAnimBoneName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, EMotionWarpRotationType InRotationType, float InWarpRotationTimeMultiplier); // [0x1c919c0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/MotionWarping.MotionWarpingWindowData
/// Size: 0x0010 (0x000000 - 0x000010)
class FMotionWarpingWindowData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UAnimNotifyState_MotionWarping*)     AnimNotify                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     StartTime                                                   OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     EndTime                                                     OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/MotionWarping.MotionWarpingUpdateContext
/// Size: 0x001C (0x000000 - 0x00001C)
class FMotionWarpingUpdateContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	CMember(TWeakObjectPtr<class UAnimSequenceBase*>)  Animation                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     PreviousPosition                                            OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     CurrentPosition                                             OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     DeltaSeconds                                                OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/MotionWarping.MotionDeltaTrack
/// Size: 0x0048 (0x000000 - 0x000048)
class FMotionDeltaTrack : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FTransform>)                        BoneTransformTrack                                          OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FVector>)                           DeltaTranslationTrack                                       OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FRotator>)                          DeltaRotationTrack                                          OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FVector)                                   TotalTranslation                                            OFFSET(getStruct<T>, {0x30, 12, 0, 0})
	SMember(FRotator)                                  TotalRotation                                               OFFSET(getStruct<T>, {0x3C, 12, 0, 0})
};

/// Struct /Script/MotionWarping.MotionDeltaTrackContainer
/// Size: 0x0010 (0x000000 - 0x000010)
class FMotionDeltaTrackContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FMotionDeltaTrack>)                 Tracks                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Enum /Script/MotionWarping.ERootMotionModifierState
/// Size: 0x04
enum class ERootMotionModifierState : uint8_t
{
	ERootMotionModifierState__Waiting                                                = 0,
	ERootMotionModifierState__Active                                                 = 1,
	ERootMotionModifierState__MarkedForRemoval                                       = 2,
	ERootMotionModifierState__Disabled                                               = 3
};

/// Enum /Script/MotionWarping.EMotionWarpRotationType
/// Size: 0x02
enum class EMotionWarpRotationType : uint8_t
{
	EMotionWarpRotationType__Default                                                 = 0,
	EMotionWarpRotationType__Facing                                                  = 1
};

/// Enum /Script/MotionWarping.EWarpPointAnimProvider
/// Size: 0x03
enum class EWarpPointAnimProvider : uint8_t
{
	EWarpPointAnimProvider__None                                                     = 0,
	EWarpPointAnimProvider__Static                                                   = 1,
	EWarpPointAnimProvider__Bone                                                     = 2
};

