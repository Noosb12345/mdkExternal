
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AugmentedReality
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: LiveLinkAnimationCore

/// Struct /Script/ARUtilities.ARKitPoseTrackingConfig
/// Size: 0x0018 (0x000000 - 0x000018)
class FARKitPoseTrackingConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FVector)                                   HumanForward                                                OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector)                                   MeshForward                                                 OFFSET(getStruct<T>, {0xC, 12, 0, 0})
};

/// Class /Script/ARUtilities.ARLiveLinkRetargetAsset
/// Size: 0x0070 (0x000028 - 0x000098)
class UARLiveLinkRetargetAsset : public ULiveLinkRetargetAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(EARLiveLinkSourceType)                     SourceType                                                  OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(TMap<FName, FName>)                        BoneMap                                                     OFFSET(get<T>, {0x30, 80, 0, 0})
	SMember(FARKitPoseTrackingConfig)                  ARKitPoseTrackingConfig                                     OFFSET(getStruct<T>, {0x80, 24, 0, 0})
};

/// Class /Script/ARUtilities.ARPassthroughManager
/// Size: 0x0018 (0x000248 - 0x000260)
class AARPassthroughManager : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	CMember(TArray<class UClass*>)                     ARComponentClasses                                          OFFSET(get<T>, {0x248, 16, 0, 0})
	CMember(class UPassthroughMaterialUpdateComponent*) PassthroughUpdateComponent                                 OFFSET(get<T>, {0x258, 8, 0, 0})


	/// Functions
	// Function /Script/ARUtilities.ARPassthroughManager.GetPassthroughMaterialUpdateComponent
	// class UPassthroughMaterialUpdateComponent* GetPassthroughMaterialUpdateComponent();                                      // [0x181a5a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ARUtilities.ARUtilitiesFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UARUtilitiesFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/ARUtilities.ARUtilitiesFunctionLibrary.UpdateWorldToMeterScale
	// void UpdateWorldToMeterScale(class UMaterialInstanceDynamic* MaterialInstance, float WorldToMeterScale);                 // [0x181a800] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ARUtilities.ARUtilitiesFunctionLibrary.UpdateSceneDepthTexture
	// void UpdateSceneDepthTexture(class UMaterialInstanceDynamic* MaterialInstance, class UTexture* SceneDepthTexture, float DepthToMeterScale); // [0x181a970] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ARUtilities.ARUtilitiesFunctionLibrary.UpdateCameraTextureParam
	// void UpdateCameraTextureParam(class UMaterialInstanceDynamic* MaterialInstance, class UTexture* CameraTexture, float ColorScale); // [0x181ab70] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/ARUtilities.PassthroughMaterialUpdateComponent
/// Size: 0x0048 (0x0000A8 - 0x0000F0)
class UPassthroughMaterialUpdateComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(EARTextureType)                            TextureType                                                 OFFSET(get<T>, {0xA8, 1, 0, 0})
	CMember(class UMaterialInterface*)                 PassthroughMaterial                                         OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(class UMaterialInterface*)                 PassthroughMaterialExternalTexture                          OFFSET(get<T>, {0xB8, 8, 0, 0})
	SMember(FLinearColor)                              PassthroughDebugColor                                       OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	CMember(TArray<class UPrimitiveComponent*>)        AffectedComponents                                          OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(TArray<class UPrimitiveComponent*>)        PendingComponents                                           OFFSET(get<T>, {0xE0, 16, 0, 0})


	/// Functions
	// Function /Script/ARUtilities.PassthroughMaterialUpdateComponent.SetPassthroughDebugColor
	// void SetPassthroughDebugColor(FLinearColor NewDebugColor);                                                               // [0x181af10] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ARUtilities.PassthroughMaterialUpdateComponent.RemoveAffectedComponent
	// void RemoveAffectedComponent(class UPrimitiveComponent* InComponent);                                                    // [0x181aff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ARUtilities.PassthroughMaterialUpdateComponent.AddAffectedComponent
	// void AddAffectedComponent(class UPrimitiveComponent* InComponent);                                                       // [0x181b1e0] Final|Native|Public|BlueprintCallable 
};

/// Enum /Script/ARUtilities.EARLiveLinkSourceType
/// Size: 0x02
enum class EARLiveLinkSourceType : uint8_t
{
	EARLiveLinkSourceType__None                                                      = 0,
	EARLiveLinkSourceType__ARKitPoseTracking                                         = 1
};

